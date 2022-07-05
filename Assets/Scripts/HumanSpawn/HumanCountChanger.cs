﻿using System.Collections;
using System.Collections.Generic;
using System.Linq;
using CanvasGraphics.Score;
using Human;
using HumanAttraction;
using UnityEngine;
using UnityEngine.Events;
using Random = UnityEngine.Random;

namespace HumanSpawn
{
    public class HumanCountChanger : MonoBehaviour
    {
        [SerializeField] private GameObject malePrefab;
        [SerializeField] private GameObject femalePrefab;
        [Space]
        [SerializeField] private float spawnRadius = 1f;
        [SerializeField] private float deactivateDelay = 1f;
        
        private List<GameObject> _humans = new List<GameObject>();
        private Transform _attractor;

        public static UnityEvent<GameObject> OnHumanSpawned = new UnityEvent<GameObject>();
        public static UnityEvent<GameObject> OnHumanRemoved = new UnityEvent<GameObject>();
        public static UnityEvent OnAllSpawned = new UnityEvent();

        private void Start()
        {
            _attractor = FindObjectOfType<Attractor>().transform;

            ScoreChanger.OnNeedSpawnHuman.AddListener(humanTag =>
            {
                var remainingCount = RemoveHumans(humanTag, 1);
                if(remainingCount > 0) SpawnHumans(humanTag, remainingCount);
            });
        }
        
        private void SpawnHumans(string humanTag, int count)
        {
            var prefab = malePrefab.CompareTag(humanTag) ? malePrefab : femalePrefab;
            
            for (var i = 0; i < count; i++)
            {
                if (!HumanPool.Inst.TryGet(out var human, humanTag))
                {
                    human = Instantiate(prefab);
                }
                UpdateHumanPos(human);
                human.gameObject.SetActive(true);
                _humans.Add(human);
                OnHumanSpawned?.Invoke(human);
            }
            OnAllSpawned?.Invoke();
        }

        private int RemoveHumans(string humanTag, int remainingCount)
        {
            var humansToDelete = new List<GameObject>();
            foreach (var human in _humans)
            {
                if (remainingCount == 0) break;
                
                if(human.CompareTag(humanTag)) continue;

                remainingCount--;
                humansToDelete.Add(human);
                OnHumanRemoved?.Invoke(human);
                human.transform.SetParent(null);

                human.GetComponent<HumanMovement>().MoveAway();

                StartCoroutine(DelayHumanDeactivationCO(human));
            }
            
            if (humansToDelete.Count == 0) return remainingCount;
            
            _humans = _humans.Except(humansToDelete).ToList();
            return remainingCount;
        }

        private IEnumerator DelayHumanDeactivationCO(GameObject human)
        {
            yield return new WaitForSeconds(deactivateDelay);
            human.gameObject.SetActive(false);
            HumanPool.Inst.Add(human);
        }

        private void UpdateHumanPos(GameObject human)
        {
            var spawnPos = new Vector3(transform.position.x, 0, transform.position.z);
            var spawnOffsetXZ = Random.insideUnitSphere * spawnRadius;
            spawnOffsetXZ.y = 0;

            var direction = (spawnOffsetXZ - spawnPos).normalized;
            spawnPos += direction;
            human.transform.position = spawnPos;
            human.transform.forward = _attractor.forward;
            human.transform.SetParent(_attractor);
        }
    }
}
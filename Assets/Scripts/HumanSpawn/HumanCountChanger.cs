using System.Collections.Generic;
using System.Linq;
using Boosters;
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
        [SerializeField] private float spawnRadius = 1f;
        
        private List<GameObject> _humans = new List<GameObject>();
        private Transform _attractor;
        public List<GameObject> Humans => _humans;

        public static UnityEvent<GameObject> OnHumanSpawned = new UnityEvent<GameObject>();
        public static UnityEvent<GameObject> OnHumanRemoved = new UnityEvent<GameObject>();
        public static UnityEvent OnAllSpawned = new UnityEvent();

        private void Start()
        {
            _attractor = FindObjectOfType<HumanAttractor>().transform;
           // var humans = FindObjectsOfType<HumanMovement>().ToList();
           // humans.ForEach(human => _humans.Add(human.gameObject));
            
            Gate.OnShouldChangeHumanCount.AddListener((humanTag, count) =>
            {
                 var spawnCount = RemoveHumans(humanTag, count);
                 if (spawnCount > 0) SpawnHumans(humanTag, spawnCount);
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
                human.GetComponent<HumanScaler>().StartGrow();
                _humans.Add(human);
                OnHumanSpawned?.Invoke(human);
            }
            OnAllSpawned?.Invoke();
        }

        private void DeactivateHuman(GameObject human)
        {
            human.gameObject.SetActive(false);
            _humans.Remove(human);
            HumanPool.Inst.Add(human);
            //if (_humans.Count != 0) return;
            // game over
        }

        private int RemoveHumans(string humanTag, int remainingCount)
        {
            var humansToDelete = new List<GameObject>();
            foreach (var human in _humans)
            {
                if (remainingCount == 0) break;
                
                if(human.CompareTag(humanTag)) continue;

                remainingCount--;
                human.gameObject.SetActive(false);
                humansToDelete.Add(human);
                HumanPool.Inst.Add(human);
                OnHumanRemoved?.Invoke(human);
            }
            if (humansToDelete.Count == 0) return remainingCount;
            
            _humans = _humans.Except(humansToDelete).ToList();
            return remainingCount;
        }
        
        private void UpdateHumanPos(GameObject human)
        {
            var spawnPos = new Vector3(_attractor.position.x, 0, _attractor.position.z);
            var spawnOffsetXZ = Random.insideUnitSphere * spawnRadius;
            spawnOffsetXZ.y = 0;

            var direction = (spawnOffsetXZ - spawnPos).normalized;
            spawnPos += direction;
            human.transform.position = spawnPos;
            human.transform.SetParent(_attractor);
        }
    }
}
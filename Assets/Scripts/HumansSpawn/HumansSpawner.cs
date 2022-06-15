using System.Collections.Generic;
using System.Linq;
using Human;
using HumansAttraction;
using UnityEngine;
using UnityEngine.Events;
using Random = UnityEngine.Random;

namespace HumansSpawn
{
    public class HumansSpawner : MonoBehaviour
    {
        [SerializeField] private GameObject humanPrefab;
        private List<GameObject> _humans = new List<GameObject>();
        private Transform _attractor;
        public List<GameObject> Humans => _humans;

        public static UnityEvent<GameObject> OnHumanSpawned = new UnityEvent<GameObject>();
        public static UnityEvent<GameObject> OnHumanRemoved = new UnityEvent<GameObject>();

        private void Start()
        {
            _attractor = FindObjectOfType<HumansAttractor>().transform;
            var humans = FindObjectsOfType<HumanMovement>().ToList();
            humans.ForEach(human => _humans.Add(human.gameObject));
            
            
        }
        
        private void SpawnHumans(int count)
        {
            for (var i = 0; i < count; i++)
            {
                if (!HumanPool.Inst.TryGet(out var human))
                {
                    human = Instantiate(humanPrefab);
                }
                UpdateHumanPos(human);
                human.gameObject.SetActive(true);
                human.GetComponent<HumanScaler>().StartGrow();
                _humans.Add(human);
                OnHumanSpawned?.Invoke(human);
            }
        }

        private void DeactivateHuman(GameObject human)
        {
            human.gameObject.SetActive(false);
            _humans.Remove(human);
            HumanPool.Inst.Add(human);
            if (_humans.Count != 0) return;
            
            // game over
        }

        private void RemoveHumans(int count)
        {
            for (var i = 0; i < count; i++)
            {
                var human = _humans[Random.Range(0, _humans.Count)];
                human.gameObject.SetActive(false);
                _humans.Remove(human);
                HumanPool.Inst.Add(human);
                OnHumanRemoved?.Invoke(human);

                if (_humans.Count != 0) continue;
                // game over
                return;
            }
        }
        
        private void UpdateHumanPos(GameObject human)
        {
            var spawnPos = new Vector3(_attractor.position.x, 0, _attractor.position.z);
            var spawnOffsetXZ = Random.insideUnitSphere * 0.2f;

            spawnOffsetXZ.y = 0;
            spawnPos += spawnOffsetXZ;
            human.transform.position = spawnPos;
            human.transform.SetParent(_attractor);
        }
    }
}
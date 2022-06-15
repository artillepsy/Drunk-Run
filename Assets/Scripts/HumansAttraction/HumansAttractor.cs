using System.Collections.Generic;
using System.Linq;
using Human;
using HumanSpawn;
using UnityEngine;

namespace HumansAttraction
{
    public class HumansAttractor : MonoBehaviour
    {
        [SerializeField] private List<HumanMovement> humans;
        [SerializeField] private float attractForce = 70f;
        private bool _attractionEnabled = true;

        private void Start()
        {
            humans = FindObjectsOfType<HumanMovement>().ToList();
            foreach (var human in humans)
            {
                human.transform.SetParent(transform);
            }
            HumanSpawner.OnHumanSpawned.AddListener((human) =>
            {
                humans.Add(human.GetComponent<HumanMovement>());
                human.transform.SetParent(transform);
            });
        }

        private void FixedUpdate()
        {
            if (!_attractionEnabled) return;
            
            foreach (var human in humans)
            {
                human.AddForceToTarget(transform.position, attractForce);
            }
        }
    }
}

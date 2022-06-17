using System.Collections.Generic;
using System.Linq;
using Finish;
using Human;
using HumanSpawn;
using UnityEngine;

namespace HumanAttraction
{
    public class HumanAttractor : MonoBehaviour
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
            HumanCountChanger.OnHumanSpawned.AddListener((human) =>
            {
                humans.Add(human.GetComponent<HumanMovement>());
                human.transform.SetParent(transform);
            });
            HumanCountChanger.OnHumanRemoved.AddListener(human =>
            {
                humans.Remove(human.GetComponent<HumanMovement>());
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

using System.Collections.Generic;
using System.Linq;
using Human;
using HumanSpawn;
using UnityEngine;

namespace HumanAttraction
{
    public class Attractor : MonoBehaviour
    {
        [SerializeField] private float humanRadius = 0.6f;
        
        [SerializeField] private List<HumanMovement> humans;
        [SerializeField] private float attractForce = 70f;
        private bool _attractionEnabled = true;

        public float[] GetXPosBounds()
        {
            var bounds = new float[2]{0, 0};
            if (humans.Count == 0) return null;

            foreach (var human in humans)
            {
                var humanXPos = human.transform.localPosition.x;
                
                if (humanXPos - humanRadius < bounds[0]) bounds[0] = humanXPos - humanRadius;
                else if (humanXPos + humanRadius > bounds[1]) bounds[1] = humanXPos + humanRadius;
            }
            return bounds;
        }

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

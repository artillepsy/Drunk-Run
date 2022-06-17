using System.Collections;
using Turns;
using UnityEngine;

namespace HumanAttraction
{
    public class HumanAttractorTurner : MonoBehaviour
    {
        [SerializeField] private float rotationDegreesSec = 180;
        
        private HumanAttractor _humanAttractor;

        private void Start()
        {
            _humanAttractor = GetComponent<HumanAttractor>();
        }

        private void OnTriggerEnter(Collider other)
        {
            var comp = other.GetComponentInParent<TurnPoint>();
            if (!comp) return;
            if (comp.Used) return;
            comp.Used = true;
            
           // SetParentToHumans(false);

            StartCoroutine(RotateCO(comp.TurnDegrees));
        }

        private IEnumerator RotateCO(float degrees)
        {
            // TurnHumans(degrees);
            
            var lookDirection = Quaternion.Euler(0, degrees, 0) * transform.forward;
            var lookRotation = Quaternion.LookRotation(lookDirection);
            
            while (Quaternion.Angle(transform.rotation, lookRotation) > 0.01f)
            {
                transform.rotation = Quaternion.RotateTowards(transform.rotation, lookRotation,
                    rotationDegreesSec * Time.deltaTime);
                yield return null;
            }
            transform.rotation = lookRotation;
            
          //  SetParentToHumans(true);
        }
        
        private void SetParentToHumans(bool parent)
        {
            foreach (var human in _humanAttractor.Humans)
            {
                human.transform.SetParent(parent ? transform : null);
            }
        }

        private void TurnHumans(float rotationDegrees)
        {
            foreach (var human in _humanAttractor.Humans)
            {
                var direction = Quaternion.Euler(0, rotationDegrees, 0) * human.transform.forward;
                var target = human.transform.position + direction;
                human.RotateToTarget(target, rotationDegreesSec);
            }
        }
    }
}
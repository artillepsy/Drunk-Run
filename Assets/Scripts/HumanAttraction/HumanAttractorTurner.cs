using System.Collections;
using Turns;
using UnityEngine;
using UnityEngine.Events;

namespace HumanAttraction
{
    public class HumanAttractorTurner : MonoBehaviour
    {
        [SerializeField] private float rotationDegreesSec = 180;
        public static UnityEvent<bool> OnMoveStatusChanged = new UnityEvent<bool>();

        private void OnTriggerEnter(Collider other)
        {
            var comp = other.GetComponentInParent<TurnPoint>();
            if (!comp) return;
            if (comp.Used) return;
            comp.Used = true;
            
            OnMoveStatusChanged?.Invoke(false);
            StartCoroutine(RotateCO(comp.TurnDegrees));
        }

        private IEnumerator RotateCO(float degrees)
        {
            var lookDirection = Quaternion.Euler(0, degrees, 0) * transform.forward;
            var lookRotation = Quaternion.LookRotation(lookDirection);
            
            while (Quaternion.Angle(transform.rotation, lookRotation) > 0.01f)
            {
                transform.rotation = Quaternion.RotateTowards(transform.rotation, lookRotation,
                    rotationDegreesSec * Time.deltaTime);
                yield return null;
            }
            transform.rotation = lookRotation;
            OnMoveStatusChanged?.Invoke(true);
        }
    }
}
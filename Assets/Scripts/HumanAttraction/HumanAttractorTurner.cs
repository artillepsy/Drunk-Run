using System.Collections;
using Turns;
using UnityEngine;

namespace HumanAttraction
{
    public class HumanAttractorTurner : MonoBehaviour
    {
        private HumanAttractorMovement _attractorMovement;

        private void Awake() => _attractorMovement = GetComponent<HumanAttractorMovement>();

        private void OnTriggerEnter(Collider other)
        {
            var comp = other.GetComponentInParent<TurnPoint>();
            if (!comp) return;
            if (comp.Used) return;
            comp.Used = true;
            
            StartCoroutine(RotateCO(comp.TurnDegrees, comp.RotationPivot.position));
        }
        
        private IEnumerator RotateCO(float degrees, Vector3 pos)
        {
            pos.y = 0f;
            var lookDirection = Quaternion.Euler(0, degrees, 0) * transform.forward;
            var lookRotation = Quaternion.LookRotation(lookDirection);
            
            var zSpeed = _attractorMovement.ZSpeed;
            var remainingAngle = degrees;
            
            while (Mathf.Sign(remainingAngle) == Mathf.Sign(degrees))
            {
                var radius = (pos - transform.position).magnitude;

                var desiredTime = Mathf.Abs(remainingAngle * Mathf.Deg2Rad * radius / zSpeed);
                var angleStep = remainingAngle / desiredTime * Time.deltaTime;
                remainingAngle -= angleStep;
                
                transform.Rotate(Vector3.up, angleStep);
                Debug.DrawLine(transform.position, transform.position + Vector3.up*2f, Color.blue, 20f);
                yield return null;
            }
            transform.rotation = lookRotation;
        }
    }
}
using System.Collections;
using UnityEngine;

namespace Human
{
    public class HumanMovement : MonoBehaviour
    {
        [SerializeField] private float rotationToFinishDegreesSec = 180f;
        [SerializeField] private float forceFalloffDistance = 1f;
        private float _forceFadeSqrDist;
        private Rigidbody _rb;

        public void RotateToTarget(Vector3 targetPos, float degreesSec = 0f)
        {
            var rotationSec = degreesSec == 0 ? rotationToFinishDegreesSec : degreesSec;
            if (gameObject.activeSelf)
            {
                StartCoroutine(RotateToTargetCO(targetPos, rotationSec));
            }
            else 
            {
                var lookDirection = (targetPos - transform.position);
                var lookRotation = Quaternion.LookRotation(lookDirection);
                transform.rotation = lookRotation;
            }
        }

        private void Awake()
        {
            _rb = GetComponent<Rigidbody>();
            _forceFadeSqrDist = forceFalloffDistance * forceFalloffDistance;
        }

        /// <summary>
        /// Moves human to a target
        /// </summary>
        public void AddForceToTarget(Vector3 targetPos, float force)
        {
            var direction = (targetPos - transform.position);
            direction.y = 0;
            
            if (direction.sqrMagnitude > _forceFadeSqrDist)
            {
                _rb.AddForce(direction.normalized * force, ForceMode.Force);
                return;
            }
            var multiplier = direction.sqrMagnitude / _forceFadeSqrDist;
            _rb.velocity = new Vector3(_rb.velocity.x * multiplier, _rb.velocity.y, _rb.velocity.z * multiplier);
        }
        
        private IEnumerator RotateToTargetCO(Vector3 targetPos, float rotationSec)
        {
            var lookDirection = (targetPos - transform.position);
            var lookRotation = Quaternion.LookRotation(lookDirection);

            while (Quaternion.Angle(transform.rotation, lookRotation) > 0.01f)
            {
                transform.rotation = Quaternion.RotateTowards(transform.rotation, lookRotation,
                    rotationSec * Time.deltaTime);
                yield return null;
            }
            transform.rotation = lookRotation;
        }
    }
}
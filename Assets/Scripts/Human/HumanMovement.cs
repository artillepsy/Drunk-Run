using RootMotion.Dynamics;
using UnityEngine;

namespace Human
{
    public class HumanMovement : MonoBehaviour
    {
        [SerializeField] private float forceFalloffDistance = 1f;
        private float _forceFadeSqrDist;
        private Rigidbody _rb;

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
    }
}
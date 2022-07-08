using System.Collections;
using UnityEngine;

namespace Human
{
    public class HumanMovement : MonoBehaviour
    {
        [SerializeField] private bool isPlayer = false;
        
        [SerializeField] private float forceFalloffDistance = 1f;
        [SerializeField] private float moveForce = 30;
        [SerializeField] private float rotationDegreesSec = 180f;
        
        private float _forceFadeSqrDist;
        private Rigidbody _rb;
        private Collider _collider;

        public void RotateToTarget(Vector3 targetPos)
        {
            if (gameObject.activeSelf)
            {
                StartCoroutine(RotateToTargetCO(targetPos));
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
            _collider = GetComponentInChildren<Collider>();
            _rb = GetComponent<Rigidbody>();
            _forceFadeSqrDist = forceFalloffDistance * forceFalloffDistance;
        }

        private void OnEnable() => _collider.enabled = true;
        
        public void AddForceToTarget(Vector3 targetPos, float force)
        {
            if (isPlayer) return;
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

        public void MoveAway() => StartCoroutine(MoveAwayCO());

        private IEnumerator MoveAwayCO()
        {
            _rb.velocity = Vector3.zero;
            _collider.enabled = false;
            transform.Rotate(0, 180, 0);
            var targetPos = transform.position + (transform.forward * 100f);
            while (gameObject.activeSelf)
            {
                AddForceToTarget(targetPos, moveForce);
                yield return null;
            }
        }
        
        private IEnumerator RotateToTargetCO(Vector3 targetPos)
        {
            var lookDirection = (targetPos - transform.position);
            var lookRotation = Quaternion.LookRotation(lookDirection);

            while (Quaternion.Angle(transform.rotation, lookRotation) > 0.01f)
            {
                transform.rotation = Quaternion.RotateTowards(transform.rotation, lookRotation,
                    rotationDegreesSec * Time.deltaTime);
                yield return null;
            }
            transform.rotation = lookRotation;
        }
    }
}
using System.Collections;
using UnityEngine;
using UnityEngine.Events;

namespace HumanAttraction
{
    public class AttractorForwardMover : MonoBehaviour
    {
        [SerializeField] private float zSpeed = 3.5f;
        private bool _shouldMove = true;
        private float _currentSpeed;

        public static UnityEvent OnReachedEnd = new UnityEvent();

        public float ZSpeed
        {
            get => _currentSpeed;
            set => _currentSpeed = value;
        }
        
        public void ResetSpeed() => _currentSpeed = zSpeed;
        public void SetSpeed(float value) => _currentSpeed = value;

        private void Awake()
        {
            _currentSpeed = zSpeed;
        }

        private void Start()
        {
            
            OnReachedEnd.AddListener(() => _shouldMove = false);
            GetComponent<AttractorRotator>().OnRotated.AddListener(endPoint =>
            {
                if (gameObject.activeSelf) StartCoroutine(MoveToEndCO(endPoint));
            });
        }

        private void Update()
        {
            if (!_shouldMove) return;
            Move();
        }

        private void Move() 
        {
            var velocity = Vector3.forward * (_currentSpeed * Time.deltaTime);
            transform.Translate(velocity, Space.Self);
        }

        private IEnumerator MoveToEndCO(Vector3 endPoint)
        {
            var direction = endPoint - transform.position;
            var remainingDistance = direction.magnitude;
            var angleRad = Vector3.Angle(transform.forward, direction) * Mathf.Deg2Rad;
            var cos = Mathf.Cos(angleRad);
            remainingDistance *= Mathf.Abs(cos);
            
            var lastPos = transform.position;
            while (remainingDistance > 0)
            {
                var deltaPos = (transform.position - lastPos).magnitude;
                remainingDistance -= deltaPos;
                lastPos = transform.position;
                yield return null;
            }
            OnReachedEnd?.Invoke();
        }
    }
}
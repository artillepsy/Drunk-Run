using System.Collections;
using Human;
using UnityEngine;
using UnityEngine.Events;

namespace HumanAttraction
{
    public class AttractorForwardMover : MonoBehaviour
    {
        [SerializeField] private float startSpeed = 4.25f;
        [SerializeField] private float correctionTime = 0.1f;
        
        private bool _shouldMove = true;
        private float _currentSpeed;
        private Transform _currentParent;
        private Coroutine _correctCO;
        private bool _stopped = false;

        public static AttractorForwardMover Inst { get; private set; }
        public static UnityEvent OnReachedEnd = new UnityEvent();

        public float StartSpeed => startSpeed;
        public float CurrentSpeed
        {
            get => _currentSpeed;
            set => _currentSpeed = value;
        }
        
        public void ResetSpeed() => _currentSpeed = startSpeed;
        public void SetSpeed(float value, bool setStart = false)
        {
            if (setStart) startSpeed = value;
            _currentSpeed = value;
        }

        public void SetStartSpeed(float value) => startSpeed = value;
        
        private void Awake()
        {
            Inst = this;
            _currentSpeed = startSpeed;
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
            CorrectXPosition();
            Move();
        }

        private void CorrectXPosition()
        {
            var hitted = false;
            var origin = transform.position + Vector3.up;
            var hits = Physics.RaycastAll(origin, Vector3.down, 10f);

            foreach (var hit in hits)
            {
                if(!hit.collider.CompareTag("Road")) continue;
                hitted = true;
                if (!_currentParent) _currentParent = hit.transform;
                if (hit.transform == _currentParent) return;
                _currentParent = hit.transform;
            }
            if (!hitted) return;

            if (_correctCO != null)
            {
                StopCoroutine(_correctCO);
                _correctCO = null;
            }
            _correctCO = StartCoroutine(CorrectXAxisCO());
        }

        private IEnumerator CorrectXAxisCO()
        {
            var direction = _currentParent.position - transform.position;
            direction.y = 0;
            var angle = Vector3.SignedAngle(transform.forward, direction.normalized, Vector3.up);
            var offsetX = Mathf.Sin(angle * Mathf.Deg2Rad) * direction.magnitude;
            if (offsetX == 0f)
            {
                _correctCO = null;
                yield break;
            }
            var offsetXtep = offsetX / correctionTime;

            while (true)
            {
               // Debug.Log(offsetXtep * Time.deltaTime);
                transform.Translate(Vector3.right * (offsetXtep * Time.deltaTime), Space.Self);
                var prevSign = Mathf.Sign(offsetX);
                offsetX -= offsetXtep * Time.deltaTime;
                if (Mathf.Sign(offsetX) != prevSign) break;
                yield return null;
            }
            _correctCO = null;
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
using System.Collections;
using Finish;
using UnityEngine;
using UnityEngine.Events;

namespace HumanAttraction
{
    public class HumanAttractorMovement : MonoBehaviour
    {
        [SerializeField] private Transform attractPoint;
        [SerializeField] private float rotationToFinishDegreesSec = 65f;
        [Space]        
        [SerializeField] private float zSpeed = 3f;
        [SerializeField] private float xSpeed = 1f;
        [SerializeField] private float xConstraints = 4f;
        
        private HumanAttractor _attractor;
        private float _widthMultiplier;
        private bool _shouldMove = true;
        private bool _shouldControl = true;
        
        public static UnityEvent OnReachedEnd = new UnityEvent();           
        public float ZSpeed => zSpeed;

        private Vector2 _lastPos = Vector2.zero;

        private void Start()
        {
            _attractor = GetComponentInChildren<HumanAttractor>();
            _widthMultiplier = 100f / Camera.main.pixelWidth;
            
            FinishLine.OnShouldMoveToEndPoint.AddListener((endpoint, radius) =>
            {
                _shouldControl = false;
                if (!gameObject.activeSelf) return;
                StartCoroutine(MoveToEndPointCO(endpoint));
            });
            OnReachedEnd.AddListener(() => _shouldMove = false);
        }

        private void MoveAttractionPoint()
        {
            var x =  SwipeInput();
            
            var bounds = _attractor.GetXPosBounds();

            var min = bounds[0] + attractPoint.localPosition.x;
            var max = bounds[1] + attractPoint.localPosition.x;
            
            min = min < -xConstraints ? attractPoint.localPosition.x : -xConstraints;
            max = max > xConstraints ? attractPoint.localPosition.x : xConstraints;
            
            var velocity = Vector3.right * (x * xSpeed * Time.deltaTime);
            attractPoint.transform.Translate(velocity, Space.Self);
            
            var clampedX = Mathf.Clamp(attractPoint.localPosition.x, min, max);
            attractPoint.localPosition = new Vector3(clampedX, attractPoint.localPosition.y, attractPoint.localPosition.z);
        }

        private void Update()
        {
            if (!_shouldMove) return;
            
            var velocity = Vector3.forward * (zSpeed * Time.deltaTime);
            
            transform.Translate(velocity, Space.Self);

            if (!_shouldControl) return;
            
            MoveAttractionPoint();
            
        }

        private float SwipeInput()
        {
            if (Input.touchCount == 0) return 0f;

            var touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began) _lastPos = touch.position;
            else if (touch.phase == TouchPhase.Moved || touch.phase == TouchPhase.Stationary)
            {
                var direction = touch.position - _lastPos;
                _lastPos = touch.position;
                return direction.x * _widthMultiplier;
            }
            return 0f;
        }
        
        private IEnumerator MoveToEndPointCO(Vector3 endPoint)
        {
            endPoint.y = 0f;
            while ((transform.position - endPoint).magnitude > 1f)
            {
                var lookDirection = (endPoint - transform.position);
                var lookRotation = Quaternion.LookRotation(lookDirection);
                
                transform.rotation = Quaternion.RotateTowards(transform.rotation, lookRotation,
                    rotationToFinishDegreesSec * Time.deltaTime);
                yield return null;
            }
            OnReachedEnd?.Invoke();
        }
    }
}
using System.Collections;
using Finish;
using UnityEngine;
using UnityEngine.Events;

namespace HumanAttraction
{
    public class HumanAttractorMovement : MonoBehaviour
    {
        [SerializeField] private float rotationToFinishDegreesSec = 90f;
        [SerializeField] private Joystick joystick;
        [Space]        
        [SerializeField] private float zSpeed = 3f;
        [SerializeField] private float xSpeed = 1f;
        [SerializeField] private float xConstraints = 4f;
        private bool _shouldMove = true;
        private float localX = 0f;
        public static UnityEvent OnReachedEnd = new UnityEvent();           
        public float ZSpeed => zSpeed;

        private void Start()
        {
            FinishLine.OnShouldMoveToEndPoint.AddListener((endpoint, radius) =>
            {
                if (!gameObject.activeSelf) return;
                StartCoroutine(MoveToEndPointCO(endpoint));
            });
            OnReachedEnd.AddListener(() => _shouldMove = false);
        } 

        private void Update()
        {
            if (!_shouldMove) return;
            
            var x = joystick.Horizontal;
            var velocity = new Vector3(x * xSpeed, 0, zSpeed) * Time.deltaTime;
            
            var tempX = localX + x * xSpeed * Time.deltaTime;
            if (tempX > xConstraints || tempX < -xConstraints) velocity.x = 0f;
            else localX = tempX;
            
            transform.Translate(velocity, Space.Self);
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
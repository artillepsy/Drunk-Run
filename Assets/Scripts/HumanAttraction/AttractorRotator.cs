using System.Collections;
using Finish;
using Turns;
using UnityEngine;
using UnityEngine.Events;

namespace HumanAttraction
{
    public class AttractorRotator : MonoBehaviour
    {
        [SerializeField] private float endRadius = 3f;
        [SerializeField] private float endAngle = 90f;
        [SerializeField] private float endRotationTime = 2f;
        
        private AttractorForwardMover _forwardMover;
        private Transform _attractor;
        private Vector3 _endPoint;
        
        public UnityEvent<Vector3> OnRotated = new UnityEvent<Vector3>();

        private void Start()
        {
            _forwardMover = GetComponent<AttractorForwardMover>();
            _attractor = GetComponentInChildren<Attractor>().transform;
            FinishLine.OnShouldMoveToEndPoint.AddListener(RotateToEndPoint);
        }

        private void RaiseOnRotatedEvent() => OnRotated?.Invoke(_endPoint);

        private void RotateToEndPoint(Vector3 endPoint)
        {
            if (!gameObject.activeSelf) return;
            
            _endPoint = endPoint;
            var directionToPoint = (endPoint - transform.position);
            var sign = Mathf.Sign(Vector3.SignedAngle(transform.forward, directionToPoint, Vector3.up));
            var rotatePointOffset = Vector3.right * (endRadius * sign + _attractor.localPosition.x);
            var rotatePoint = transform.position + transform.rotation * rotatePointOffset;
           
            Debug.DrawLine(rotatePoint, rotatePoint + Vector3.up* 8f, Color.magenta, 30f);
           
            SetDesiredSpeed(rotatePoint);
            StartCoroutine(RotateAroundCO(sign * endAngle, rotatePoint));
            Invoke(nameof(RaiseOnRotatedEvent), endRotationTime);
        }

        private void SetDesiredSpeed(Vector3 rotatePoint)
        {
            var r = (transform.position - rotatePoint).magnitude;
            var speed = Mathf.Abs(endAngle * Mathf.Deg2Rad * r / endRotationTime);
            _forwardMover.SetSpeed(speed);
        }

        private IEnumerator RotateAroundCO(float degrees, Vector3 pos)
        {
            pos.y = 0f;
            var lookDirection = Quaternion.Euler(0, degrees, 0) * transform.forward;
            var lookRotation = Quaternion.LookRotation(lookDirection);
            
            var zSpeed = _forwardMover.ZSpeed;
            var radius = (pos - transform.position).magnitude;
            var desiredTime = Mathf.Abs(degrees * Mathf.Deg2Rad * radius / zSpeed);
            var angleStep = degrees / desiredTime;
           // var endPos = GetEndPos(degrees, radius);

            while (desiredTime > 0f)
            {
                desiredTime -= Time.deltaTime;
                transform.Rotate(Vector3.up, angleStep * Time.deltaTime);
                Debug.DrawLine(transform.position, transform.position + Vector3.up * 2f, Color.blue, 20f);
                yield return null;
            }
            transform.rotation = lookRotation;
           // transform.position = endPos;
            _forwardMover.ResetSpeed();
        }

        /*private Vector3 GetEndPos(float degrees, float radius)
        {
            var alpha = (180f - Mathf.Abs(degrees)) / 2f;
            var distance = 2f * radius * Mathf.Cos(alpha * Mathf.Deg2Rad);
            Debug.Log("Distane: "+ distance);
            Debug.Log("Alpha: "+ alpha);
            var endPos = transform.position + Quaternion.Euler(0, alpha, 0) * transform.forward * distance;
            Debug.DrawLine(endPos, endPos + Vector3.up * 2f, Color.red, 20f);
            return endPos;
        }*/

        private void OnTriggerEnter(Collider other)
        {
            var comp = other.GetComponentInParent<TurnPoint>();
            if (!comp) return;
            if (comp.Used) return;
            comp.Used = true;
            StartCoroutine(RotateAroundCO(comp.TurnDegrees, comp.RotationPivot.position));
        }
    }
}
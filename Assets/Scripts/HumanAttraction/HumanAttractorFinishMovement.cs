using System.Collections;
using Finish;
using UnityEngine;
using UnityEngine.Events;

namespace HumanAttraction
{
    public class HumanAttractorFinishMovement : MonoBehaviour
    {
        public static UnityEvent OnReachedDecisionPoint = new UnityEvent();
        public static UnityEvent OnReachedEndPoint = new UnityEvent();
        private UnityEvent _onEndMoveEvent;
        private HumanAttractor _attractor;

        private void Start()
        {
            _attractor = GetComponent<HumanAttractor>();
            
            FinishLine.OnEnterFinishTrigger.AddListener((decisionPoint) =>
            {
                decisionPoint.x = transform.position.x;
                _onEndMoveEvent = OnReachedDecisionPoint;
                StartCoroutine(MoveToFinishCO(decisionPoint));
                RotateHumans(decisionPoint);
            });
            DecisionMaker.OnMadeDecision.AddListener((destinationPoint) =>
            {
                _onEndMoveEvent = OnReachedEndPoint;
                StartCoroutine(MoveToFinishCO(destinationPoint));
                RotateHumans(destinationPoint);
            });
        }

        private IEnumerator MoveToFinishCO(Vector3 finishPoint)
        {
            finishPoint.y = transform.position.y;
            
            var speed = GetComponent<HumanAttractorMovement>().ZSpeed;
            var direction = (finishPoint - transform.position);
            var distance = direction.magnitude;
            var velocity = new Vector3(direction.normalized.x, 0, direction.normalized.z) * speed;
            
            var timeToMove = distance / speed;
            var time = 0f;
            
            while (time < timeToMove)
            {
                transform.Translate(velocity * Time.deltaTime, Space.Self);
                time += Time.deltaTime;
                yield return null;
            }
            transform.position = finishPoint;
            _onEndMoveEvent?.Invoke();
        }

        private void RotateHumans(Vector3 pos)
        {
            foreach (var human in _attractor.Humans)
            {
                human.RotateToTarget(pos);
            }   
        }
    }
}
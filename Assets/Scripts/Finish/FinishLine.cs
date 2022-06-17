using Human;
using Score;
using UnityEngine;
using UnityEngine.Events;

namespace Finish
{
    public class FinishLine : MonoBehaviour
    {
        [SerializeField] private Transform dancePoint;
        [SerializeField] private Transform workPoint;
        [SerializeField] private float pointRadius = 3f;
        
        public static UnityEvent OnReachedFinish = new UnityEvent();
        public static UnityEvent<Vector3, float> OnShouldMoveToEndPoint = new UnityEvent<Vector3, float>();
        private bool _reached = false;

        private void OnTriggerEnter(Collider other)
        {
            if (_reached) return;

            if (!other.GetComponentInParent<HumanMovement>()) return;
            
            var score = FindObjectOfType<ScoreChanger>().CurrentScore;
            var movePoint = score >= 0 ? workPoint.position : dancePoint.position;
            
            OnShouldMoveToEndPoint?.Invoke(movePoint, pointRadius);
            OnReachedFinish?.Invoke();
            
            _reached = true;
        }
    }
}
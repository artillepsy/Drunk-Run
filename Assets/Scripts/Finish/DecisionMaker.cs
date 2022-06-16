using HumanAttraction;
using Score;
using UnityEngine;
using UnityEngine.Events;

namespace Finish
{
    public class DecisionMaker : MonoBehaviour
    {
        [SerializeField] private Transform dancePoint;
        [SerializeField] private Transform workPoint;
        public static UnityEvent<Vector3> OnMadeDecision = new UnityEvent<Vector3>();
        
        private void Start()
        {
            HumanAttractorFinishMovement.OnReachedDecisionPoint.AddListener(() =>
            {
                var score = FindObjectOfType<ScoreChanger>().CurrentScore;
                var movePoint = score >= 0 ? workPoint.position : dancePoint.position;
                OnMadeDecision?.Invoke(movePoint);
            });
        }
    }
}
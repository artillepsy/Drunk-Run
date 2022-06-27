using System;
using Human;
using HumanAttraction;
using Score;
using UnityEngine;
using UnityEngine.Events;

namespace Finish
{
    public class FinishLine : MonoBehaviour
    {
        [SerializeField] private Transform dancePoint;
        [SerializeField] private Transform workPoint;
        
        public static UnityEvent OnReachedFinish = new UnityEvent();
        public static UnityEvent<int, int> OnDecisionMade = new UnityEvent<int, int>();
        public static UnityEvent<Vector3> OnShouldMoveToEndPoint = new UnityEvent<Vector3>();
        private bool _reached = false;
        private int _time = 0;

        private void Start()
        {
            InvokeRepeating(nameof(IncrementTime), 1f, 1f);
        }

        private void IncrementTime() => _time++;

        private void OnTriggerEnter(Collider other)
        {
            if (_reached) return;

            if (!other.GetComponentInParent<AttractorForwardMover>()) return;
            
            var score = FindObjectOfType<ScoreChanger>().CurrentScore;
            var movePoint = score >= 0 ? workPoint.position : dancePoint.position;
            
            OnDecisionMade?.Invoke(score, _time);
            OnShouldMoveToEndPoint?.Invoke(movePoint);
            OnReachedFinish?.Invoke();
            
            _reached = true;
        }
    }
}
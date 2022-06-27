using System;
using CanvasGraphics.Score;
using HumanAttraction;
using Levels;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Human
{
    public class HumanAnimationChanger : MonoBehaviour
    {
        [SerializeField] private float changeDelay = 0.5f;
        private Animator _animator;
        private HumanMovement _humanMovement;
        private bool _startedWalking = false;
        
        private static readonly int CycleOffset = Animator.StringToHash("CycleOffset");
        private static readonly int Walking = Animator.StringToHash("Walking");
        private static readonly int Working = Animator.StringToHash("Working");
        private static readonly int Dancing = Animator.StringToHash("Dancing");
        private static readonly int Dancing2 = Animator.StringToHash("Dancing2");

        private void Start()
        {
            
            _animator = GetComponentInChildren<Animator>();
            _humanMovement = GetComponent<HumanMovement>();
            
            AttractorForwardMover.OnReachedEnd.AddListener(() =>
            {
                Invoke(nameof(ChangeAnimation), Random.Range(0, changeDelay));
            });            
        }
        /// <summary>
        /// ?
        /// </summary>
        private void OnEnable()
        {
            if (!StartTutorial.Started) return;
            if (_startedWalking) return;
            
            _animator.SetTrigger(Walking);
            var randomOffset = Random.Range(0, _animator.GetCurrentAnimatorStateInfo(0).length);
            _animator.SetFloat(CycleOffset, randomOffset);
            _startedWalking = true;
        }

        private void Update()
        {
            if (!StartTutorial.Started) return;
            if (_startedWalking) return;
            
            _animator.SetTrigger(Walking);
            var randomOffset = Random.Range(0, _animator.GetCurrentAnimatorStateInfo(0).length);
            _animator.SetFloat(CycleOffset, randomOffset);
            _startedWalking = true;
        }

        private void ChangeAnimation()
        {
            var pos = Random.insideUnitSphere;
            pos.y = 0f;
            pos += transform.position;
            _humanMovement.RotateToTarget(pos);            
            
            var score = FindObjectOfType<ScoreChanger>(true).CurrentScore;
            _animator.SetTrigger(score >= 0 ? Working : Random.value > 0.5f ? Dancing : Dancing2);
        }
        
        
    }
}
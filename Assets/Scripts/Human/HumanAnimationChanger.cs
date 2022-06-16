using HumanAttraction;
using Score;
using UnityEngine;

namespace Human
{
    public class HumanAnimationChanger : MonoBehaviour
    {
        [SerializeField] private float changeDelay = 0.5f;
        private Animator _animator;
        private HumanMovement _humanMovement;

        private static readonly int Working = Animator.StringToHash("Working");
        private static readonly int Dancing = Animator.StringToHash("Dancing");
        private static readonly int Dancing2 = Animator.StringToHash("Dancing2");

        private void Start()
        {
            _animator = GetComponentInChildren<Animator>();
            _humanMovement = GetComponent<HumanMovement>();
            
            HumanAttractorFinishMovement.OnReachedEndPoint.AddListener(() =>
            {
                Invoke(nameof(ChangeAnimation), Random.Range(0, changeDelay));
            });            
        }

        private void ChangeAnimation()
        {
            var pos = Random.insideUnitSphere;
            pos.y = 0f;
            pos += transform.position;
            _humanMovement.RotateToTaret(pos);            
            
            var score = FindObjectOfType<ScoreChanger>().CurrentScore;
            _animator.SetTrigger(score >= 0 ? Working : Random.value > 0.5f ? Dancing : Dancing2);
        }
    }
}
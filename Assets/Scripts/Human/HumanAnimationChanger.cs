using CanvasGraphics.Score;
using Core;
using HumanAttraction;
using Levels;
using UnityEngine;
using Vehicles;
using Random = UnityEngine.Random;

namespace Human
{
    public class HumanAnimationChanger : MonoBehaviour
    {
        [SerializeField] private float maxWalkOffset = 3f;
        [SerializeField] private float changeDelay = 0.5f;
        private Animator _animator;
        private HumanMovement _humanMovement;
        private bool _startedWalking = false;
        private bool _withVehicle = false;

        private void Awake()
        {
            if (TryGetComponent<HumanItemSetter>(out var itemSetter))
            {
                itemSetter.OnGetVehicle.AddListener(SetVehicleAnim);
            }
            _animator = GetComponentInChildren<Animator>();
            _humanMovement = GetComponent<HumanMovement>();
        }

        private void Start()
        {
            AttractorForwardMover.OnReachedEnd.AddListener(() =>
            {
                Invoke(nameof(ChangeAnimation), Random.Range(0, changeDelay));
            });            
        }

        private void OnEnable()
        {
            if (_withVehicle) return;
            if (!StartTutorial.Started) return;
            SetWalkAnimOffset();
        }

        private void Update()
        {
            if (_withVehicle) return; 
            if (!StartTutorial.Started) return;
            if (_startedWalking) return;
            SetWalkAnimOffset();
        }

        private void SetVehicleAnim(VehicleTypes type)
        {
            _withVehicle = true;
            switch (type)
            {
                case VehicleTypes.Moped:
                    _animator.SetTrigger(Literals.Moped);
                    break;
                case VehicleTypes.Bike:
                    _animator.SetTrigger(Literals.Bike);
                    break;
                case VehicleTypes.Skate:
                    _animator.SetTrigger(Literals.Skate);
                    break;
            }
        }

        private void SetWalkAnimOffset()
        {
            _animator.SetTrigger(Literals.Walking);
            var randomOffset = Random.Range(0, maxWalkOffset);
            _animator.SetFloat(Literals.CycleOffset, randomOffset);
            _startedWalking = true;
        }

        private void ChangeAnimation()
        {
            var pos = Random.insideUnitSphere;
            pos.y = 0f;
            pos += transform.position;
            _humanMovement.RotateToTarget(pos);            
            
            var score = FindObjectOfType<ScoreChanger>(true).HumanCount;
            _animator.SetTrigger(score >= 0 ? 
                Literals.Working : Random.value > 0.5f ? 
                Literals.Dancing : Literals.Dancing2);
        }
    }
}
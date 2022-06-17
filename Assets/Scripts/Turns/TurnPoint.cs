using UnityEngine;

namespace Turns
{
    public class TurnPoint : MonoBehaviour
    {
        [SerializeField] private float turnDegrees = 90f;
        [SerializeField] private Transform rotationPivot;
        
        public bool Used = false;
        public float TurnDegrees => turnDegrees;

        public Transform RotationPivot => rotationPivot;
    }
}
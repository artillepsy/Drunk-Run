using UnityEngine;

namespace Turns
{
    public class TurnPoint : MonoBehaviour
    {
        [SerializeField] private float turnDegrees = 90f;
        public bool Used = false;
        public float TurnDegrees => turnDegrees;
    }
}
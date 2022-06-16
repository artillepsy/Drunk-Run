using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Finish
{
    public class FinishLine : MonoBehaviour
    {
        [SerializeField] private Transform decisionPoint;
        public static UnityEvent<Vector3> OnEnterFinishTrigger = new UnityEvent<Vector3>();
        private bool _reached = false;

        private void OnTriggerEnter(Collider other)
        {
            if (_reached) return;
            if (!other.GetComponentInParent<HumanMovement>()) return;
            
            OnEnterFinishTrigger?.Invoke(decisionPoint.position);
            _reached = true;
        }
    }
}
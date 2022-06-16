using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Finish
{
    public class FinishLine : MonoBehaviour
    {
        [SerializeField] private Transform finishPoint;
        
        public static UnityEvent<Vector3> OnReachedFinish = new UnityEvent<Vector3>();
        private bool _reached = false;

        private void OnTriggerEnter(Collider other)
        {
            if (_reached) return;
            if (!other.GetComponentInParent<HumanMovement>()) return;
            
            OnReachedFinish?.Invoke(finishPoint.position);
            _reached = true;
        }
    }
}
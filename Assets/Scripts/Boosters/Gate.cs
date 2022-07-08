using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Boosters
{
    public class Gate : BaseScoreBooster
    {
        [SerializeField] private Material usedMat;
        [SerializeField] private bool changeMaterial = false;

        public UnityEvent OnGateUsed = new UnityEvent();
        private bool _used = false;

        protected void OnTriggerEnter(Collider other)
        {
            if (_used) return;
            if (!other.GetComponentInParent<HumanItemSetter>()) return;
            base.OnTriggerEnter(other);
            
            OnGateUsed?.Invoke();
            _used = true;

            if (!changeMaterial) return;
            GetComponentInChildren<MeshRenderer>().sharedMaterial = usedMat;
        }
    }
}
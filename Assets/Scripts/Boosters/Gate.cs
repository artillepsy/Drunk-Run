using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Boosters
{
    public class Gate : BaseScoreBooster
    {
        [SerializeField] private int humansSpawnCount = 0;
        [SerializeField] private Material usedMat;
        
        public UnityEvent OnGateUsed = new UnityEvent();
        public static UnityEvent<int> OnShouldChangeHumanCount = new UnityEvent<int>();
        private bool _used = false;
        protected void OnTriggerEnter(Collider other)
        {
            if (_used) return;
            if (!other.GetComponentInParent<HumanMovement>()) return;
            base.OnTriggerEnter(other);
            if (humansSpawnCount != 0) OnShouldChangeHumanCount?.Invoke(humansSpawnCount);
            
            OnGateUsed?.Invoke();
            _used = true;
            
            GetComponentInChildren<MeshRenderer>().sharedMaterial = usedMat;
        }
    }
}
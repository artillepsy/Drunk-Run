using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Boosters
{
    public class Gate : BaseScoreBooster
    {
        [SerializeField] private string humanTag = "Male";
        [SerializeField] private int humanSpawnCount = 0;
        [SerializeField] private Material usedMat;
        
        public UnityEvent OnGateUsed = new UnityEvent();
        public static UnityEvent<string, int> OnShouldChangeHumanCount = new UnityEvent<string, int>();
        private bool _used = false;
        protected void OnTriggerEnter(Collider other)
        {
            if (_used) return;
            if (!other.GetComponentInParent<HumanMovement>()) return;
            base.OnTriggerEnter(other);
            if (humanSpawnCount != 0) OnShouldChangeHumanCount?.Invoke(humanTag, humanSpawnCount);
            
            OnGateUsed?.Invoke();
            _used = true;
            
            GetComponentInChildren<MeshRenderer>().sharedMaterial = usedMat;
        }
    }
}
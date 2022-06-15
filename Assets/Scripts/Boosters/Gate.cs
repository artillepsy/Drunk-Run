using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Boosters
{
    public class Gate : BaseScoreBooster
    {
        [SerializeField] private int humansSpawnCount = 0;
        public UnityEvent OnGateUsed = new UnityEvent();
        public static UnityEvent<int> OnNeedToSpawnHumans = new UnityEvent<int>();
        private bool _used = false;
        protected void OnTriggerEnter(Collider other)
        {
            if (_used) return;
            base.OnTriggerEnter(other);
            if (!other.GetComponentInParent<HumanMovement>()) return;
            if (humansSpawnCount > 0)
            {
                Debug.Log("Invoke");
                OnNeedToSpawnHumans?.Invoke(humansSpawnCount);
            }
            OnGateUsed?.Invoke();
            _used = true;
        }
    }
}
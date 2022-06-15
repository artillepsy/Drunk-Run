using UnityEngine;
using UnityEngine.Events;

namespace Boosters
{
    public class Gate : BaseScoreBooster
    {
        [SerializeField] private int humansSpawnCount = 0;
        public UnityEvent OnGateUsed = new UnityEvent();
        public static UnityEvent<int> OnNeedToSpawnHumans = new UnityEvent<int>();
        protected void OnTriggerEnter(Collider other)
        {
            base.OnTriggerEnter(other);
            OnNeedToSpawnHumans?.Invoke(humansSpawnCount);
            OnGateUsed?.Invoke();
        }
    }
}
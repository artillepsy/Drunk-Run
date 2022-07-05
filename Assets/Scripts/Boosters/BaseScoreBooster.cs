using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Boosters
{
    public class BaseScoreBooster : MonoBehaviour
    {
        [SerializeField] private int pointsIncrementCount = 1;
        public static UnityEvent<int> OnPicked = new UnityEvent<int>(); 

        protected void OnTriggerEnter(Collider other)
        {
            if (!other.GetComponentInParent<HumanMovement>()) return;
            OnPicked?.Invoke(pointsIncrementCount);
        }
    }
}
using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Boosters
{
    public class BaseScoreBooster : MonoBehaviour
    {
        [SerializeField] private int pointsIncrementCount = 5;
        public static UnityEvent<int> OnAddedScorePoints = new UnityEvent<int>(); 

        protected void OnTriggerEnter(Collider other)
        {
            if (!other.GetComponentInParent<HumanMovement>()) return;
            OnAddedScorePoints?.Invoke(pointsIncrementCount);
        }
    }
}
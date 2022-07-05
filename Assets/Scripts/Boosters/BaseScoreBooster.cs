using Core;
using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Boosters
{
    public class BaseScoreBooster : MonoBehaviour
    {
        [SerializeField] private GenderType genderType;
        [SerializeField] private int pointsIncrementCount = 1;
        public static UnityEvent<GenderType, int> OnPicked = new UnityEvent<GenderType, int>(); 

        protected void OnTriggerEnter(Collider other)
        {
            if (!other.GetComponentInParent<HumanMovement>()) return;
            OnPicked?.Invoke(genderType, pointsIncrementCount);
        }
    }
}
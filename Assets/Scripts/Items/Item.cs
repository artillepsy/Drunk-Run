using Human;
using UnityEngine;
using UnityEngine.Events;

namespace Items
{
    public class Item : MonoBehaviour
    {
        [SerializeField] private int pointsIncrementCount = 5;
        
        public static UnityEvent<int> OnItemPickUp = new UnityEvent<int>(); 

        private void OnTriggerEnter(Collider other)
        {
            if (!other.GetComponentInParent<HumanMovement>()) return;
            
            OnItemPickUp?.Invoke(pointsIncrementCount);
            
            Destroy(gameObject);
        }
    }
}
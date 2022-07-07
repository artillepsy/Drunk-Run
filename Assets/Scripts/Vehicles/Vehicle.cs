using HumanAttraction;
using UnityEngine;

namespace Vehicles
{
    public class Vehicle : MonoBehaviour
    {
        public float speedMultiplier = 1.2f;
        public VehicleTypes vehicleType;
        public Transform bodyTarget;

        private void Start()
        {
            AttractorForwardMover.OnReachedEnd.AddListener(() => gameObject.SetActive(false));
        }
    }
}
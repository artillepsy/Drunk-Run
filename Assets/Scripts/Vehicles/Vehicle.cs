using HumanAttraction;
using UnityEngine;

namespace Vehicles
{
    public class Vehicle : MonoBehaviour
    {
        public VehicleTypes vehicleType;
        public Transform bodyTarget;

        private void Start()
        {
            AttractorForwardMover.OnReachedEnd.AddListener(() => gameObject.SetActive(false));
        }
    }
}
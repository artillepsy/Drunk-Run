using CanvasGraphics.HumanBar;
using HumanAttraction;
using UnityEngine;
using UnityEngine.Events;
using Vehicles;

namespace Human
{
    public class HumanItemSetter : MonoBehaviour
    {
        [SerializeField] private Transform itemTarget;
        [SerializeField] private Transform body;
        
        public UnityEvent<VehicleTypes> OnGetVehicle = new UnityEvent<VehicleTypes>();
        private void Start()
        {
            var prefab = HumanBarCanvas.Inst.GetCurrentItem();
            if (!prefab) return;
            var inst = Instantiate(prefab, itemTarget);
            body.transform.position = inst.bodyTarget.position;
            OnGetVehicle?.Invoke(inst.vehicleType);
            
            AttractorForwardMover.OnReachedEnd.AddListener(() =>
            {
                body.transform.localPosition = new Vector3(body.transform.localPosition.x, 0, 
                    body.transform.localPosition.z);
            });
            AttractorForwardMover.Inst.SetSpeed(inst.speedMultiplier * AttractorForwardMover.Inst.ZSpeed, true);
        }
    }
}
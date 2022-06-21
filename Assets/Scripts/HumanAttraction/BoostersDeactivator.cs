using UnityEngine;

namespace HumanAttraction
{
    public class BoostersDeactivator : MonoBehaviour
    {
        private void OnTriggerEnter(Collider other) => other.enabled = false;
    }
}
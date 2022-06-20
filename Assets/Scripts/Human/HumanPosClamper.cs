using UnityEngine;

namespace Human
{
    public class HumanPosClamper : MonoBehaviour
    {
        [SerializeField] private float xConstraints = 2f;
        
        private void FixedUpdate()
        {
            var clampedX = Mathf.Clamp(transform.localPosition.x, -xConstraints, xConstraints);
            transform.localPosition = new Vector3(clampedX, transform.localPosition.y, transform.localPosition.z);
        }
    }
}
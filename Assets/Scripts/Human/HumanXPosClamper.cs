using HumanAttraction;
using UnityEngine;

namespace Human
{
    public class HumanXPosClamper : MonoBehaviour
    {
        private void Update()
        {
            var x = transform.localPosition.x - Attractor.Inst.transform.localPosition.x;
            var clampX = Mathf.Clamp(transform.localPosition.x,
                -AttractorSideMover.Inst.XConstraints - Attractor.Inst.transform.localPosition.x,
                AttractorSideMover.Inst.XConstraints - Attractor.Inst.transform.localPosition.x);
            var clampZ = transform.localPosition.z > 0 ? 0 : transform.localPosition.z;
            transform.localPosition = new Vector3(clampX, 0, clampZ);
        }
    }
}
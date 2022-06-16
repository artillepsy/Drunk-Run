using Cinemachine;
using Finish;
using UnityEngine;

namespace CinemachineCam
{
    public class CameraFinishAnimationPlayer : MonoBehaviour
    {
        private void Start()
        {
            var anim = GetComponent<Animation>();
            FinishLine.OnEnterFinishTrigger.AddListener((finishPoint) =>
            {
                anim.Play();
            });
        }
    }
}
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
            var cinemachineCam = GetComponent<CinemachineVirtualCamera>();
            FinishLine.OnReachedFinish.AddListener((finishPoint) =>
            {
                anim.Play();
                cinemachineCam.m_Follow = null;
            });
        }
    }
}
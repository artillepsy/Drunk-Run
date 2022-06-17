using Cinemachine;
using Finish;
using UnityEngine;

namespace CinemachineCam
{
    public class CameraFinishAnimationPlayer : MonoBehaviour
    {
        [SerializeField] private Animation anim;
        [SerializeField] private CinemachineVirtualCamera vcam;
        
        private void Start()
        {
            FinishLine.OnReachedFinish.AddListener(() =>
            {
                anim.Play();
                vcam.m_LookAt = null;
            });
        }
    }
}
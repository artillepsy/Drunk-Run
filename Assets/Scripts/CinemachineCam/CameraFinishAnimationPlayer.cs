using Cinemachine;
using Finish;
using UnityEngine;

namespace CinemachineCam
{
    public class CameraFinishAnimationPlayer : MonoBehaviour
    {
        [SerializeField] private int endPriority = 1;
        [SerializeField] private CinemachineVirtualCamera vcam;
        
        private void Start()
        {
            FinishLine.OnReachedFinish.AddListener(() =>
            {
                vcam.m_Priority = endPriority;
            });
        }
    }
}
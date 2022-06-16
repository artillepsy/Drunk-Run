using Cinemachine;
using Finish;
using UnityEngine;

namespace CinemachineCam
{
    public class CameraFinishAnimationPlayer : MonoBehaviour
    {
        [SerializeField] private Animation anim;
        
        private void Start()
        {
            FinishLine.OnEnterFinishTrigger.AddListener((finishPoint) =>
            {
                anim.Play();
            });
        }
    }
}
using UnityEngine;

namespace Human
{
    public class HumanAsyncWalkAnimationSetter : MonoBehaviour
    {
        private static readonly int CycleOffset = Animator.StringToHash("CycleOffset");
        
        private void Awake()
        {
            var animator = GetComponentInChildren<Animator>();
            var randomOffset = Random.Range(0, animator.GetCurrentAnimatorStateInfo(0).length);
            animator.SetFloat(CycleOffset, randomOffset);
        }
    }
}
using UnityEngine;

namespace Core
{
    public static class Literals
    {
        public const string MetricsFileName = "Metrics";
        public const string ItemScoreFileName = "UnlockedItems";
        
        public static readonly int CycleOffset = Animator.StringToHash("CycleOffset");
        public static readonly int Walking = Animator.StringToHash("Walking");
        public static readonly int Working = Animator.StringToHash("Working");
        public static readonly int Dancing = Animator.StringToHash("Dancing");
        public static readonly int Dancing2 = Animator.StringToHash("Dancing2");
        public static readonly int Moped = Animator.StringToHash("Moped");
        public static readonly int Bike = Animator.StringToHash("Samokat");
        public static readonly int Skate = Animator.StringToHash("Skate");
    }
}
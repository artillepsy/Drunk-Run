using HumanAttraction;
using UnityEngine;
using UnityEngine.Events;

namespace Levels
{
    public class LevelLoader : MonoBehaviour
    {
        public static UnityEvent OnLevelLoaded = new UnityEvent();
        public static UnityEvent OnLevelEnded = new UnityEvent();
        private void Start()
        {
            AttractorForwardMover.OnReachedEnd.AddListener(() =>
            {
                OnLevelEnded?.Invoke();
            });
            OnLevelLoaded?.Invoke();
        }
    }
}
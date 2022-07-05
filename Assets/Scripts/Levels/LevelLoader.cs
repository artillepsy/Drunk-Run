﻿using CanvasGraphics.HumanBar;
using UnityEngine;
using UnityEngine.Events;

namespace Levels
{
    public class LevelLoader : MonoBehaviour
    {
        [SerializeField] private float reloadDelay = 2;
        public static UnityEvent OnLevelLoaded = new UnityEvent();
        public static UnityEvent OnLevelEnded = new UnityEvent();
        private void Start()
        {
            HumanBarCanvas.OnBarAnimationPlayed.AddListener(() =>
            {
                Invoke(nameof(SendEndLevelEvent), reloadDelay);
            });
            OnLevelLoaded?.Invoke();
        }

        private void SendEndLevelEvent() => OnLevelEnded?.Invoke();
    }
}
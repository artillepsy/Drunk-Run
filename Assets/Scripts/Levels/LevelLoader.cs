using HumanAttraction;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

namespace Levels
{
    public class LevelLoader : MonoBehaviour
    {
        [SerializeField] private string nextLevelName = "Level_2";
        [SerializeField] private float reloadDelay = 5f;
        public static UnityEvent OnLevelLoaded = new UnityEvent();
        private void Start()
        {
            AttractorForwardMover.OnReachedEnd.AddListener(() =>
            {
                Invoke(nameof(LoadNextLevel), reloadDelay);
            });
            OnLevelLoaded?.Invoke();
        }

        private void LoadNextLevel() => SceneManager.LoadSceneAsync(nextLevelName);
    }
}
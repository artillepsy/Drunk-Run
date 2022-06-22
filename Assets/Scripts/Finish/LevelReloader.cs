using HumanAttraction;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Finish
{
    public class LevelReloader : MonoBehaviour
    {
        [SerializeField] private string nextLevelName = "Level_1";
        [SerializeField] private float reloadDelay = 2f;
        
        private void Start()
        {
            AttractorForwardMover.OnReachedEnd.AddListener(() =>
            {
                Invoke(nameof(LoadNextLevel), reloadDelay);
            });
        }

        private void LoadNextLevel() => SceneManager.LoadSceneAsync(nextLevelName);
    }
}
using HumanAttraction;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Finish
{
    public class LevelReloader : MonoBehaviour
    {
        [SerializeField] private SceneAsset nextLevel;
        
        [SerializeField] private float reloadDelay = 2f;
        
        private void Start()
        {
            HumanAttractorMovement.OnReachedEnd.AddListener(() =>
            {
                Invoke(nameof(LoadNextLevel), reloadDelay);
            });
        }

        private void LoadNextLevel() => SceneManager.LoadSceneAsync(nextLevel.name);
    }
}
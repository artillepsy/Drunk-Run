using HumanAttraction;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Finish
{
    public class LevelReloader : MonoBehaviour
    {
        [SerializeField] private float reloadDelay = 2f;
        
        private void Start()
        {
            HumanAttractorMovement.OnReachedEnd.AddListener(() =>
            {
                Invoke(nameof(ReloadLevel), reloadDelay);
            });
        }

        private void ReloadLevel()
        {
            SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().name);
        }
    }
}
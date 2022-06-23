using HumanAttraction;
using Saves;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Levels
{
    public class MetricsCalculator : MonoBehaviour
    {
        [SerializeField] private string firstLevelName = "level_1";

        private static bool s_isInitialized;
        private static int s_levelCount = 0;
        private static int s_levelNumber = 0;
        private static string s_levelName = "";
        private Metrics _metrics;
        
        private void Awake()
        {
            if (!s_isInitialized)
            {
                s_isInitialized = true;
                DontDestroyOnLoad(gameObject);
                _metrics = SaveSystem.Load();
                
                if (_metrics == null)
                {
                    _metrics = new Metrics(s_levelCount, firstLevelName);
                }
                else s_levelCount = _metrics.LevelCount;
            }
            else Destroy(gameObject);
            
            LevelLoader.OnLevelLoaded.AddListener(SendLevelStartEvent);
            AttractorForwardMover.OnReachedEnd.AddListener(SendLevelEndEvent);
            SceneManager.LoadSceneAsync(_metrics.LastLevelName);
        }

        private void SendLevelStartEvent()
        {
            var sceneName = SceneManager.GetActiveScene().name;
            if (!string.Equals(s_levelName, sceneName))
            {
                s_levelNumber++;
                s_levelName = sceneName;
            }
            s_levelCount++;

            // AppMetrica.Instance.ReportEvent("level_start");
        }

        private void SendLevelEndEvent()
        {
            
        }
    }
}
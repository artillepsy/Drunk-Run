using HumanAttraction;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Levels
{
    public class LevelData : MonoBehaviour
    {
        private static bool s_isInitialized;

        private static int s_games_count = 0;
        private static int s_level_number = 0;
        private static string s_level_name = "";        
        
        private void Awake()
        {
            if (!s_isInitialized)
            {
                s_isInitialized = true;
                DontDestroyOnLoad(gameObject);
            }
            else Destroy(gameObject);
            
            AttractorForwardMover.OnReachedEnd.AddListener(SendLevelEndEvent);
        }

        private void Start() => SendLevelStartEvent();

        private void SendLevelStartEvent()
        {
            if (!string.Equals(s_level_name, SceneManager.GetActiveScene().name))
            {
                s_level_number++;
            }
            
            AppMetrica.Instance.ReportEvent("level_start");
        }

        private void SendLevelEndEvent()
        {
            
        }
    }
}
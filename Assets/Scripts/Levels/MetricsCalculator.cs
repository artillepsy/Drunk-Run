using System.Collections.Generic;
using Core;
using Finish;
using HumanAttraction;
using Saves;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Levels
{
    public class MetricsCalculator : MonoBehaviour
    {
        [SerializeField] private bool resetMetricsOnStart = false;
        [SerializeField] private string firstLevelName = "level_1";

        private static string s_result = "";
        private static bool s_isInitialized;
        private float _time = 0f;
        private Metrics _metrics;
        
        private void Awake()
        {
            if (!s_isInitialized)
            {
                s_isInitialized = true;
                DontDestroyOnLoad(gameObject);
                _metrics = SaveSystem.Load<Metrics>(Literals.MetricsFileName);
                
                if (_metrics == null || resetMetricsOnStart)
                {
                    _metrics = new Metrics()
                    {
                        LevelCount = 1,
                        LastLevelName = firstLevelName,
                        LevelLoop = 1
                    };
                    var itemScore = new ItemScore();
                    SaveSystem.Save(itemScore, Literals.ItemScoreFileName);
                }
            }
            else Destroy(gameObject);

            LevelLoader.OnLevelLoaded.AddListener(SendLevelStartEvent);
            AttractorForwardMover.OnReachedEnd.AddListener(SendLevelEndEvent);
            SceneManager.LoadSceneAsync(_metrics.LastLevelName);
            FinishLine.OnDecisionMade.AddListener( (score, time) =>
            {
                s_result = score > 0 ? "intelligent" : "drunk";
                _time = time;
            });
        }

        private void SendLevelStartEvent()
        {
            _metrics.LastLevelName = SceneManager.GetActiveScene().name;
            
            AppMetrica.Instance.ReportEvent("level_start", new Dictionary<string, object>()
            {
                {"level_name", _metrics.LastLevelName},
                {"level_count", _metrics.LevelCount},
                {"level_loop", _metrics.LevelLoop},
            });
            SaveSystem.Save(_metrics, Literals.MetricsFileName);
            AppMetrica.Instance.SendEventsBuffer();
            
            /*_metrics.PrintInfo();
            Debug.Log(" ");*/
        }

        private void SendLevelEndEvent()
        {
            _metrics.CurrentLevelInLoop++;
            _metrics.LevelCount++;
            
            if (_metrics.CurrentLevelInLoop == SceneManager.sceneCountInBuildSettings - 1)
            {
                _metrics.CurrentLevelInLoop = 0;
                _metrics.LevelLoop++;
            }
            
            AppMetrica.Instance.ReportEvent("level_finish", new Dictionary<string, object>()
            {
                {"level_name", _metrics.LastLevelName},
                {"level_count", _metrics.LevelCount},
                {"level_loop", _metrics.LevelLoop},
                {"result", s_result},
                {"time", _time},
            });
            SaveSystem.Save(_metrics, Literals.MetricsFileName);
            AppMetrica.Instance.SendEventsBuffer();
            
            /*_metrics.PrintInfo();
            Debug.Log("result = " + s_result);
            Debug.Log("time = "+ _time);
            Debug.Log(" ");
            Debug.Log(" ");
            Debug.Log(" ");*/
        }
    }
}
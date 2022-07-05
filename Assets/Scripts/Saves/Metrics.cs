using UnityEngine;

namespace Saves
{
    [System.Serializable]
    public class Metrics
    {
        public int LevelCount = 0;
        public string LastLevelName = "";
        public int LevelLoop = 1;
        public int CurrentLevelInLoop = 0;

        public void PrintInfo()
        {
            Debug.Log("level_count = "+ LevelCount);
            Debug.Log("level_loop = "+ LevelLoop);
            Debug.Log("level_name = "+ LastLevelName);
            Debug.Log("current level in loop = "+ CurrentLevelInLoop);
        }
    }
}
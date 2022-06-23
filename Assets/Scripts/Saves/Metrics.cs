namespace Saves
{
    [System.Serializable]
    public class Metrics
    {
        public int LevelCount = 0;
        public string LastLevelName = "";

        public Metrics(int levelCount, string lastLevelName)
        {
            LevelCount = levelCount;
            LastLevelName = lastLevelName;
        }
    }
}
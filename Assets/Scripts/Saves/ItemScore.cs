using System.Collections.Generic;

namespace Saves
{
    [System.Serializable]
    public class ItemScore
    {
        public List<int> UnlockedIds = new List<int>();
        public int LastItemId = -1;
        public int MaleCount = 0;
        public int FemaleCount = 0;
    }
}
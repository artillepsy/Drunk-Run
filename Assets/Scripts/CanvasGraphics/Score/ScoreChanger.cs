using Boosters;
using UnityEngine;
using UnityEngine.Events;

namespace CanvasGraphics.Score
{
    public class ScoreChanger : MonoBehaviour
    {
        [SerializeField] private int humanBorder = 8;
        
        [SerializeField] private string maleTag;
        [SerializeField] private string femaleTag;
        
        [SerializeField] private int currentScore = 0;
        [SerializeField] private int scoreBorder = 5;
        
        public static UnityEvent<int, int> OnScoreChange = new UnityEvent<int, int>();
        public static UnityEvent<string> OnNeedSpawnHuman = new UnityEvent<string>();
        private int _humanCount = 0;

        public int StartScore => 0;
        public int MaxScore => scoreBorder;
        public int HumanBorder => humanBorder;
        public int CurrentScore => currentScore;

        private void Start() => Item.OnPicked.AddListener(ChangeScore);

        private void ChangeScore(int points)
        {
            currentScore += points;
            
            if (currentScore > scoreBorder) currentScore = scoreBorder;
            else if (currentScore < -scoreBorder) currentScore = -scoreBorder;

            CheckForSpawn();
            OnScoreChange?.Invoke(currentScore, _humanCount);
        }

        private void CheckForSpawn()
        {
            if (currentScore >= scoreBorder)
            {
                OnNeedSpawnHuman?.Invoke(maleTag);
                _humanCount++;
                currentScore = 0;
            }
            else if (currentScore <= -scoreBorder)
            {
                OnNeedSpawnHuman?.Invoke(femaleTag);
                _humanCount--;
                currentScore = 0;
            }
        }
    }
}
using Boosters;
using Core;
using UnityEngine;
using UnityEngine.Events;

namespace CanvasGraphics.Score
{
    public class ScoreChanger : MonoBehaviour
    {
        [SerializeField] private int maxHumans = 8;
        [SerializeField] private int currentScore = 0;
        [SerializeField] private int maxScore = 5;
        
        public static UnityEvent<int, int> OnScoreChange = new UnityEvent<int, int>();
        public static UnityEvent<GenderType> OnNeedSpawnHuman = new UnityEvent<GenderType>();
        private int _humanCount = 0;

        public int StartScore => 0;
        public int MaxScore => maxScore;
        public int MaxHumans => maxHumans;
        public int CurrentScore => currentScore;
        public int HumanCount => _humanCount;

        private void Start() => Item.OnPicked.AddListener(ChangeScore);

        private void ChangeScore(GenderType genderType, int points)
        {
            var sign = genderType == GenderType.Male ? 1 : -1;
            currentScore += points * sign;
            
            if (currentScore > maxScore) currentScore = maxScore;
            else if (currentScore < -maxScore) currentScore = -maxScore;

            CheckForSpawn(sign);
            OnScoreChange?.Invoke(currentScore, _humanCount);
        }

        private void CheckForSpawn(int sign)
        {
            if (currentScore >= maxScore)
            {
                OnNeedSpawnHuman?.Invoke(GenderType.Male);
            }
            else if (currentScore <= -maxScore)
            {
                OnNeedSpawnHuman?.Invoke(GenderType.Female);
            }
            else return;

            _humanCount += sign;
            currentScore = 0;
        }
    }
}
using Boosters;
using UnityEngine;
using UnityEngine.Events;

namespace CanvasGraphics.Score
{
    public class ScoreChanger : MonoBehaviour
    {
        [SerializeField] private int currentScore = 0;
        [SerializeField] private int scoreBorder = 100;
        public static UnityEvent<int> OnScoreChange = new UnityEvent<int>();

        public int StartScore => 0;
        public int MaxScore => scoreBorder;
        public int CurrentScore => currentScore;

        private void Start() => Item.OnAddedScorePoints.AddListener(ChangeScore);

        private void ChangeScore(int points)
        {
            currentScore += points;
            
            if (currentScore > scoreBorder) currentScore = scoreBorder;
            else if (currentScore < -scoreBorder) currentScore = -scoreBorder;
            
            OnScoreChange?.Invoke(currentScore);
        }
    }
}
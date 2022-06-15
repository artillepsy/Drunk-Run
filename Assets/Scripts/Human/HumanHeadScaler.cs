using System.Collections;
using Score;
using UnityEngine;

namespace Human
{
    public class HumanHeadScaler : MonoBehaviour
    {
        [SerializeField] private Transform head;
        [SerializeField] private float maxScale = 3f;
        [SerializeField] private float startScale = 1f;
        [Space] 
        [SerializeField] private float headScaleTime = 0.3f;
        private Coroutine _changeScaleCO;
        
        private int _maxScore;
        private int _startScore;

        private void Start()
        {
            var scoreChanger = FindObjectOfType<ScoreChanger>();
            _maxScore = scoreChanger.MaxScore;
            _startScore = scoreChanger.StartScore;
            
            var headScale = CalculateHeadEndScale(scoreChanger.CurrentScore);
            head.localScale = Vector3.one * headScale;
            
            ScoreChanger.OnScoreChange.AddListener(ChangeHeadScale);
        }

        private void ChangeHeadScale(int currentScore)
        {
            var headEndScale = CalculateHeadEndScale(currentScore);
          //  Debug.Log(headEndScale);

            if (head.localScale.x == headEndScale) return;
            
            if(_changeScaleCO != null) StopCoroutine(_changeScaleCO);
            _changeScaleCO = StartCoroutine(ChangeScaleCO(headEndScale));
        }

        private float CalculateHeadEndScale(int currentScore)
        {
            if (currentScore <= _startScore) return startScale;
            if (currentScore >= _maxScore) return maxScale;
            
            var scaleCoeff = (float) currentScore / (_maxScore - _startScore);
            return Mathf.Lerp(startScale, maxScale, scaleCoeff);
        }

        private IEnumerator ChangeScaleCO(float headEndScale)
        {
            var scaleStep = (headEndScale - head.localScale.x) / headScaleTime;
            var time = 0f;
            while (time < headScaleTime)
            {
                head.localScale += Vector3.one * (scaleStep * Time.deltaTime);
                time += Time.deltaTime;
                yield return null;
            }
           // head.localScale = Vector3.one * headEndScale;
            _changeScaleCO = null;
        }
    }
}
using System.Collections;
using Score;
using UnityEngine;

namespace Human
{
    public class HumanDrunkennessScalerV2 : MonoBehaviour
    {
        [SerializeField] private float changeTime = 0.5f;
        [SerializeField] private float minChangeDelay = 0f;
        [SerializeField] private float maxChangeDelay = 0.4f;
        
        private int _minScore;
        private int _startScore;
        private Animator _animator;
        private Coroutine _changeBlendCO;
        private static readonly int Blend = Animator.StringToHash("Blend");

        private void Start()
        {
            _animator = GetComponentInChildren<Animator>();
            
            var scoreChanger = FindObjectOfType<ScoreChanger>();
            _minScore = -scoreChanger.MaxScore;
            _startScore = scoreChanger.StartScore;

            ChangeDrunkennessScale(scoreChanger.CurrentScore);
            ScoreChanger.OnScoreChange.AddListener(ChangeDrunkennessScale);
        }
        
        private void ChangeDrunkennessScale(int currentScore)
        {
            float scaleCoeff;
            
            if (currentScore <= _minScore) scaleCoeff = 1f;
            else if (currentScore >= _startScore) scaleCoeff = 0f;
            else scaleCoeff = (float)currentScore / (_minScore - _startScore);
            
            if (!gameObject.activeSelf)
            {
                _animator.SetFloat(Blend, scaleCoeff);
                return;
            }
            if(_changeBlendCO != null) StopCoroutine(_changeBlendCO);
            _changeBlendCO = StartCoroutine(ChangeBlendCO(scaleCoeff));
        }
        
        private IEnumerator ChangeBlendCO(float endBlend)
        {
            yield return new WaitForSeconds(Random.Range(minChangeDelay, maxChangeDelay));
            
            var currentBlend = _animator.GetFloat(Blend);
            var scaleStep = (endBlend - currentBlend) / changeTime;
            var time = 0f;
            while (time < changeTime)
            {
                currentBlend += scaleStep * Time.deltaTime;
                _animator.SetFloat(Blend, currentBlend);
                time += Time.deltaTime;
                yield return null;
            }
            _animator.SetFloat(Blend, endBlend);
            // head.localScale = Vector3.one * headEndScale;
            _changeBlendCO = null;
        }
    }
}
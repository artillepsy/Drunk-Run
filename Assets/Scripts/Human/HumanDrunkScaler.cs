using System.Collections;
using Score;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Human
{
    public class HumanDrunkScaler : MonoBehaviour
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

            ChangeDrunkScale(scoreChanger.CurrentScore);
            ScoreChanger.OnScoreChange.AddListener(ChangeDrunkScale);
        }

        private void ChangeDrunkScale(int currentScore)
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
            _changeBlendCO = StartCoroutine(ChangeBlendAmountCO(scaleCoeff));
        }
        
        private IEnumerator ChangeBlendAmountCO(float endBlend)
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
            _changeBlendCO = null;
        }
    }
}
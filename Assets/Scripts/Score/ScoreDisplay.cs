using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Score
{
    public class ScoreDisplay : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI stageLabel;
        [SerializeField] private Image progressBar;
        [Space]
        [SerializeField] private List<ProgressStage> states;
        [SerializeField] private float updateSliderTime = 0.3f;
        private Coroutine _fillProgressBarCO;

        private void Start()
        {
            ScoreChanger.OnScoreChange.AddListener((score) => StartCoroutine(UpdateVisualsCO(score)));
        }

        private IEnumerator UpdateVisualsCO(int score)
        {
            var currentState = GetCurrentStage(score);
            if (!currentState) yield break;
            
            //Debug.Log(fillAmount);
            
            stageLabel.text = currentState.Name;
            stageLabel.color = currentState.LabelColor;

            progressBar.color = currentState.SliderColor;
            progressBar.fillAmount = GetBarFillAmount(score, currentState);
            
            /*if(_fillStateSliderCO != null) StopCoroutine(_fillStateSliderCO);
            _fillStateSliderCO = StartCoroutine(FillStateSliderCO(fillAmount));*/
        }
        
        private ProgressStage GetCurrentStage(int currentScore)
        {
            foreach (var state in states)
            {
                if (currentScore < state.LeftPointsBorder || currentScore > state.RightPointsBorder) continue;
                // Debug.Log(state.LeftPointsBorder + " | " + currentScore + " | " + state.RightPointsBorder);
                return state;
            }
            return null;
        }

        private float GetBarFillAmount(int currentScore, ProgressStage stage)
        {
            var score = currentScore >= 0
                ? currentScore - stage.LeftPointsBorder
                : currentScore - stage.RightPointsBorder;
            return Mathf.Abs((float)score / (stage.RightPointsBorder - stage.LeftPointsBorder));
        }
        
        /*
        //TODO: 
        // add filling steps, if level changes
        // fix bug when filling from max
        private IEnumerator FillStateSliderCO(float endFillAmount)
        {
            var needFillAmount = progressBar.fillAmount - endFillAmount;
            var fillStep = needFillAmount / updateSliderTime;
            var time = 0f;

            while (time < updateSliderTime)
            {
                progressBar.fillAmount += fillStep * Time.deltaTime;
                time += Time.deltaTime;
                yield return null;
            }
            progressBar.fillAmount = endFillAmount;
            _fillProgressBarCO = null;
        }*/
    }
}
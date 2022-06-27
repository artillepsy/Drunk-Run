using System.Collections;
using System.Collections.Generic;
using Finish;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CanvasGraphics.Score
{
    public class ScoreDisplay : MonoBehaviour
    {
        [SerializeField] private GameObject scoreGO;
        [SerializeField] private TextMeshProUGUI stageLabel;
        [SerializeField] private Image progressBar;
        [Space]
        [SerializeField] private List<ProgressStage> states;

        private void Start()
        {
            ScoreChanger.OnScoreChange.AddListener((score) => StartCoroutine(UpdateVisualsCO(score)));
            FinishLine.OnReachedFinish.AddListener(() => scoreGO.SetActive(false));
            StartCoroutine(UpdateVisualsCO(0));
        }

        private IEnumerator UpdateVisualsCO(int score)
        {
            var currentState = GetCurrentStage(score);
            if (!currentState) yield break;
            
            stageLabel.text = currentState.Name;
            stageLabel.color = currentState.LabelColor;

            //progressBar.color = currentState.SliderColor;
            progressBar.fillAmount = GetBarFillAmount(score, currentState);
        }
        
        private ProgressStage GetCurrentStage(int currentScore)
        {
            foreach (var state in states)
            {
                if (currentScore < state.LeftPointsBorder || currentScore > state.RightPointsBorder) continue;
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
    }
}
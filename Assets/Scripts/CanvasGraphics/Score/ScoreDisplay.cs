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
        [SerializeField] private float borderPosX = 225f;
        [SerializeField] private RectTransform pointer;
        [SerializeField] private Image pointerImg;
        [SerializeField] private GameObject scoreGO;
        [SerializeField] private TextMeshProUGUI stageLabel;
        [SerializeField] private float changeTime = 0.2f;
        [Space]
        [SerializeField] private Image maleSlider;
        [SerializeField] private Image femaleSlider;
        [Space] 
        [SerializeField] private Image stageLine;
        [SerializeField] private Transform lineParent;
        [Space]
        [SerializeField] private List<ProgressStage> states;
        private Coroutine _updBarCO;

        private void Start()
        {
            ScoreChanger.OnScoreChange.AddListener(UpdateVisuals);
            FinishLine.OnReachedFinish.AddListener(() => scoreGO.SetActive(false));
            SpawnLines();
            UpdateVisuals(0, 0);
        }

        private void SpawnLines()
        {
            var stageStepX = borderPosX / (ScoreChanger.Inst.MaxScore + 1);
            var posX = 0f;
            
            for (var i = 0; i < ScoreChanger.Inst.MaxScore; i++, posX += stageStepX)
            {
                var inst = Instantiate(stageLine, lineParent);
                inst.rectTransform.anchoredPosition = new Vector2(posX, inst.rectTransform.anchoredPosition.y);
                
                inst = Instantiate(stageLine, lineParent);
                inst.rectTransform.anchoredPosition = new Vector2(-posX, inst.rectTransform.anchoredPosition.y);
            }
        }

        private void UpdateVisuals(int score, int humanCount)
        {
            var currentState = GetCurrentStage(humanCount);
            if (currentState)
            {
                stageLabel.text = currentState.Name;
                pointerImg.color = currentState.LabelColor;
            }
            if (_updBarCO != null)
            {
                StopCoroutine(_updBarCO);
                _updBarCO = null;
            }
            _updBarCO = StartCoroutine(UpdateBarCO(score));
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

        private IEnumerator UpdateBarCO(int score)
        {
            var fillAmount = (float) score / ScoreChanger.Inst.MaxScore;
            var maleEndFill = fillAmount > 0 ? fillAmount : 0;
            var femaleEndFill = fillAmount < 0 ? Mathf.Abs(fillAmount) : 0;
            
            var startPos = pointer.anchoredPosition;
            var endX = (float) score / ScoreChanger.Inst.MaxScore * borderPosX;
            var endPos = new Vector2(endX, startPos.y);
            
            var time = 0f;
            var velocity = Vector2.zero;
            var velocity1 = 0f;
            var velocity2 = 0f;

            while (time < changeTime * 4f)
            {
                pointer.anchoredPosition = Vector2.SmoothDamp(
                    pointer.anchoredPosition, 
                    endPos,
                    ref velocity,
                    changeTime);

                maleSlider.fillAmount = Mathf.SmoothDamp(
                    maleSlider.fillAmount,
                    maleEndFill,
                    ref velocity1,
                    changeTime);
                
                femaleSlider.fillAmount = Mathf.SmoothDamp(
                    femaleSlider.fillAmount,
                    femaleEndFill,
                    ref velocity2,
                    changeTime);
                
                time += Time.deltaTime;
                yield return null;
            }
            pointer.anchoredPosition = endPos;
            _updBarCO = null;
        }
    }
}
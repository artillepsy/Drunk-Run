using System.Collections.Generic;
using System.Collections;
using System.Linq;
using Items;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Score
{
    
    public class ScoreChanger : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI stateLabel;
        [SerializeField] private Image stateSlider;
        [Space]
        [SerializeField] private int currentScore = 0;
        [SerializeField] private int scoreBorder = 100;
        [Space]
        [SerializeField] private List<CurrentState> states;
        [SerializeField] private float updateSliderTime = 0.1f;
        private Coroutine _fillSliderCO;

        private void Start()
        {
            states = states.OrderByDescending(state => state.RightPointsBorder).ToList();
            UpdateVisuals();
            
            Item.OnItemPickUp.AddListener(points =>
            {
                ChangeScore(points);
                UpdateVisuals();
            });
        }

        private void ChangeScore(int points)
        {
            currentScore += points;
            if (currentScore > scoreBorder) currentScore = scoreBorder;
            else if (currentScore < -scoreBorder) currentScore = -scoreBorder;
        }

        private void UpdateVisuals()
        {
            var currentState = GetCurrentState(out var fillAmount);
            if (!currentState) return;
            
            Debug.Log(fillAmount);
            
            stateLabel.text = currentState.Name;
            stateLabel.color = currentState.LabelColor;

            stateSlider.color = currentState.SliderColor;
            if(_fillSliderCO != null) StopCoroutine(_fillSliderCO);
            _fillSliderCO = StartCoroutine(FillStateSliderCO(fillAmount));
        }

        private CurrentState GetCurrentState(out float fillAmount)
        {
            fillAmount = 0f;
            foreach (var state in states)
            {
                if (currentScore < state.LeftPointsBorder || currentScore > state.RightPointsBorder) continue;
                Debug.Log(state.LeftPointsBorder + " | " + currentScore + " | " + state.RightPointsBorder);
                var point = currentScore > 0
                    ? currentScore - state.LeftPointsBorder
                    : currentScore - state.RightPointsBorder;
                fillAmount = Mathf.Abs((float)point / (state.RightPointsBorder - state.LeftPointsBorder));
                return state;
            }
            return null;
        }
        //TODO: 
        // add filling steps, if level changes
        // fix bug when filling from max
        private IEnumerator FillStateSliderCO(float endFillAmount)
        {
            var needFillAmount = stateSlider.fillAmount - endFillAmount;
            var fillStep = needFillAmount / updateSliderTime;
            var time = 0f;

            while (time < updateSliderTime)
            {
                stateSlider.fillAmount += fillStep * Time.deltaTime;
                time += Time.deltaTime;
                yield return null;
            }
            stateSlider.fillAmount = endFillAmount;
            _fillSliderCO = null;
        }
    }
}
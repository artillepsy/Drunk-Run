using System.Collections.Generic;
using System.Linq;
using Items;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ScoreCalculation
{
    public class ScoreChanger : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI stateLabel;
        [SerializeField] private Image stateSlider;
        [Space]
        [SerializeField] private int currentScore = 0;
        [Space]
        [SerializeField] private List<CurrentState> states;

        private void Start()
        {
            states = states.OrderByDescending(state => state.StepPoints).ToList();

            Item.OnItemPickUp.AddListener(points =>
            {
                ChangeScore(points);
                UpdateVisuals();
            });
        }

        private void ChangeScore(int points) => currentScore += points;

        private void UpdateVisuals()
        {
            var currentState = GetCurrentState(out var fillAmount);

            stateLabel.text = currentState.Name;
            stateLabel.color = currentState.LabelColor;
            
            stateSlider.fillAmount = fillAmount;
            stateSlider.color = currentState.SliderColor;
        }

        private CurrentState GetCurrentState(out float fillAmount)
        {
            fillAmount = 0f;
            if (currentScore >= 0)
            {
                for (var i = 0; i < states.Count; i++)
                {
                    if (states[i].StepPoints > currentScore) continue;
                    
                    if (i == 0) fillAmount = 0f;
                    else fillAmount = (currentScore - states[i].StepPoints) / (states[i].StepPoints - states[i + 1].StepPoints);
                    
                    return states[i];
                }
            }
            else
            {
                for (var i = 0; i < states.Count; i++)
                {
                    if (states[i].StepPoints < currentScore) continue;
                    
                    if (i == states.Count-1) fillAmount = 1f;
                    else fillAmount = (currentScore - states[i].StepPoints) / (states[i].StepPoints - states[i + 1].StepPoints);
                    
                    return states[i];
                }
            }
            return null;
        }
        
    }
}
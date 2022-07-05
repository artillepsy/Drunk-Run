using System.Collections;
using System.Collections.Generic;
using CanvasGraphics.Score;
using Core;
using HumanAttraction;
using Saves;
using SnackersUI;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace CanvasGraphics.HumanBar
{
    public class HumanBarCanvas : MonoBehaviour
    {
        [SerializeField] private TweenAnimatedUIElement elem;
        [SerializeField] private Image maleSlider;
        [SerializeField] private Image femaleSlider;
        [Space]
        [SerializeField] private float afterAnimationTime = 1f;
        [SerializeField] private float animationDelay = 0.5f;
        [SerializeField] private float sliderFillTime = 0.5f;
        [Space]
        [SerializeField] private int maxScore = 20;
        [SerializeField] private List<ItemForHumans> items;
        private ScoreChanger _scoreChanger;

        public static UnityEvent OnBarAnimationPlayed = new UnityEvent();
        
        private void Start()
        {
            _scoreChanger = FindObjectOfType<ScoreChanger>();
            AttractorForwardMover.OnReachedEnd.AddListener(PlayBarAnimaiton);
        }

        private void PlayBarAnimaiton()
        {
            var itemScore = SaveSystem.Load<ItemScore>(Literals.ItemScoreFileName);
            if (itemScore == null) itemScore = new ItemScore();

            var collectedGender = _scoreChanger.HumanCount >= 0 ? GenderType.Male : GenderType.Female;
            var remainingCount = Mathf.Abs(_scoreChanger.HumanCount);
            
            maleSlider.fillAmount = (float) itemScore.MaleCount / maxScore;
            femaleSlider.fillAmount = (float) itemScore.FemaleCount / maxScore;
            
            if (collectedGender == GenderType.Male)
            {
                itemScore.MaleCount += remainingCount;
                StartCoroutine(ChangeFillAmountCO(maleSlider, itemScore.MaleCount));
            }
            else
            {
                itemScore.FemaleCount += remainingCount;
                StartCoroutine(ChangeFillAmountCO(femaleSlider, itemScore.FemaleCount));
            }
            SaveSystem.Save(itemScore, Literals.ItemScoreFileName);
            
        }
        
        private IEnumerator ChangeFillAmountCO(Image slider, int currentScore)
        {
            var endFillAmount = (float) currentScore / maxScore;
            elem.Show();
            yield return new WaitForSeconds(animationDelay);
            var time = 0f;
            var velocity = 0f;
            while (time < sliderFillTime * 4f)
            {
                slider.fillAmount = Mathf.SmoothDamp(slider.fillAmount, 
                    endFillAmount,
                    ref velocity,
                    sliderFillTime);
                time += Time.deltaTime;
                yield return null;
            }
            slider.fillAmount = endFillAmount;
            yield return new WaitForSeconds(afterAnimationTime);
            elem.Hide();
            OnBarAnimationPlayed?.Invoke();
        }
    }
}
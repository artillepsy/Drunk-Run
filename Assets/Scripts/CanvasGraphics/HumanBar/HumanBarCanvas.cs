using System.Collections;
using System.Collections.Generic;
using System.Linq;
using CanvasGraphics.Score;
using Core;
using HumanAttraction;
using Saves;
using SnackersUI;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Vehicles;

namespace CanvasGraphics.HumanBar
{
    public class HumanBarCanvas : MonoBehaviour
    {
        [SerializeField] private bool resetResults = false;
        [Space]
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
        private ItemScore _itemScore;

        public static HumanBarCanvas Inst { get; private set; }
        public static UnityEvent OnBarAnimationPlayed = new UnityEvent();

        public Vehicle GetCurrentItem()
        {
            foreach (var item in items)
            {
                if(item.Id != _itemScore.LastItemId) continue;
                return item.Prefab;
            }
            return null;
        }
        
        private void Awake()
        {
            Inst = this;
            if (resetResults)
            {
                _itemScore = new ItemScore();
                SaveSystem.Save(_itemScore, Literals.ItemScoreFileName);
            }
            else
            {
                _itemScore = SaveSystem.Load<ItemScore>(Literals.ItemScoreFileName);
                Debug.Log("Saved item id: " + _itemScore.LastItemId);
            }
            
        }

        private void Start()
        {
            _scoreChanger = FindObjectOfType<ScoreChanger>();
                // GetComponent<HumanBarItemDisplay>()
            AttractorForwardMover.OnReachedEnd.AddListener(PlayBarAnimaiton);
        }

        private void PlayBarAnimaiton()
        {
            if (_itemScore == null) _itemScore = new ItemScore();

            var collectedGender = _scoreChanger.HumanCount >= 0 ? GenderType.Male : GenderType.Female;
            var remainingCount = Mathf.Abs(_scoreChanger.HumanCount);
            
            if (remainingCount == 0) return;
            
            maleSlider.fillAmount = (float) _itemScore.MaleCount / maxScore;
            femaleSlider.fillAmount = (float) _itemScore.FemaleCount / maxScore;

            var humanCount = 0;
            
            if (collectedGender == GenderType.Male)
            {
                _itemScore.MaleCount += remainingCount;
                humanCount = _itemScore.MaleCount;
                StartCoroutine(ChangeFillAmountCO(maleSlider, _itemScore.MaleCount));
            }
            else
            {
                _itemScore.FemaleCount += remainingCount;
                humanCount = _itemScore.FemaleCount;
                StartCoroutine(ChangeFillAmountCO(femaleSlider, _itemScore.FemaleCount));
            }
            UpdateItem(collectedGender, _itemScore, humanCount);
            SaveSystem.Save(_itemScore, Literals.ItemScoreFileName);
            
        }

        private void UpdateItem(GenderType genderType, ItemScore itemScore, int humanCount)
        {
            items = items.OrderBy(item => item.UnlockPoints).ToList();
            var id = -1;
            foreach (var item in items)
            {
                Debug.Log(item.UnlockPoints);
                if (item.UnlockPoints > humanCount) break;
                if(genderType != item.HumanGenderType) continue;
                id = item.Id;
            }
            if (itemScore.UnlockedIds.Contains(id)) return;
            itemScore.LastItemId = id;
            itemScore.UnlockedIds.Add(id);
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
            
        }
    }
}
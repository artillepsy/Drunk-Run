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
        [SerializeField] private TweenAnimatedUIElement barElem;
        [SerializeField] private TweenAnimatedUIElement itemElem;
        [SerializeField] private Image maleSlider;
        [SerializeField] private Image femaleSlider;
        [Space]
        [SerializeField] private float afterAnimationTime = 1f;
        [SerializeField] private float animationDelay = 0.5f;
        [SerializeField] private float sliderFillTime = 0.5f;
        [Space]
        [SerializeField] private int maxScore = 20;
        [SerializeField] private List<ItemForHumans> items;
        private List<int> _nextIdToUnlock = new List<int>();
        private ItemScore _itemScore;

        public static HumanBarCanvas Inst { get; private set; }
        public int MaxScore => maxScore;
        public List<int> NextIdToUnlock => _nextIdToUnlock;
        public List<ItemForHumans> Items => items;
        public static UnityEvent OnBarAnimationPlayed = new UnityEvent();
        public static UnityEvent<Sprite> OnItemUnlocked = new UnityEvent<Sprite>();

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
            AttractorForwardMover.OnReachedEnd.AddListener(PlayBarAnimaiton);
        }

        private void PlayBarAnimaiton()
        {
            if (_itemScore == null) _itemScore = new ItemScore();

            var collectedGender = ScoreChanger.Inst.HumanCount >= 0 ? GenderType.Male : GenderType.Female;
            var remainingCount = Mathf.Abs(ScoreChanger.Inst.HumanCount);
            
            //if (remainingCount == 0) return;
            
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
            AddNextIdsToList(_itemScore);
            HumanBarItemDisplay.Inst.SetUpIcons(_itemScore);
            SaveSystem.Save(_itemScore, Literals.ItemScoreFileName);
        }

        private void AddNextIdsToList(ItemScore itemScore)
        {
            var maleAdded = false;
            var femaleAdded = false;
            foreach (var item in items)
            {
                switch (item.HumanGenderType)
                {
                    case GenderType.Male:
                        if (maleAdded) break;
                        if (item.UnlockPoints <= itemScore.MaleCount) break;
                        _nextIdToUnlock.Add(item.Id);
                        maleAdded = true;
                        break;
                    case GenderType.Female:
                        if (femaleAdded) break;
                        if (item.UnlockPoints <= itemScore.FemaleCount) break;
                        _nextIdToUnlock.Add(item.Id);
                        femaleAdded = true;
                        break;
                }
            }
        }

        private void UpdateItem(GenderType genderType, ItemScore itemScore, int humanCount)
        {
            items = items.OrderBy(item => item.UnlockPoints).ToList();
            var id = -1;
            Sprite sprite = null;
            foreach (var item in items)
            {
                if(genderType != item.HumanGenderType) continue;
                if (item.UnlockPoints > humanCount) break;
                id = item.Id;
                sprite = item.Icon.sprite;
            }
            if (itemScore.UnlockedIds.Contains(id)) return;
            itemScore.LastItemId = id;
            itemScore.UnlockedIds.Add(id);
            
            OnItemUnlocked?.Invoke(sprite);
            itemElem.Show();
        }
        
        private IEnumerator ChangeFillAmountCO(Image slider, int currentScore)
        {
            var endFillAmount = (float) currentScore / maxScore;
            barElem.Show();
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
            barElem.Hide();
            itemElem.Hide();
            OnBarAnimationPlayed?.Invoke();
        }
    }
}
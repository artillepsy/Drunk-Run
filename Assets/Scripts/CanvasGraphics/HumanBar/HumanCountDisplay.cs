using CanvasGraphics.Score;
using Finish;
using HumanAttraction;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CanvasGraphics.HumanBar
{
    public class HumanCountDisplay : MonoBehaviour
    {
        [SerializeField] private Image genderImage;
        [SerializeField] private TextMeshProUGUI humanCountLabel;
        [Space]
        [SerializeField] private Sprite maleSprite;
        [SerializeField] private Sprite femaleSprite;
        [Space]
        [SerializeField] private Color maleColor;
        [SerializeField] private Color femaleColor;

        private void Start()
        {
            FinishLine.OnReachedFinish.AddListener(() =>
            {
                var count = ScoreChanger.Inst.HumanCount;
                genderImage.color = count >= 0 ? maleColor : femaleColor;
                genderImage.sprite = count >= 0 ? maleSprite : femaleSprite;
                humanCountLabel.text = "+" + Mathf.Abs(count);
            });
        }
    }
}
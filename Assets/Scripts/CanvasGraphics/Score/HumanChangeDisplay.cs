using System.Collections;
using Core;
using HumanSpawn;
using SnackersUI;
using TMPro;
using UnityEngine;

namespace CanvasGraphics.Score
{
    public class HumanChangeDisplay : MonoBehaviour
    {
        [SerializeField] private TweenAnimatedUIElement maleElem;
        [SerializeField] private TweenAnimatedUIElement femaleElem;
        [Space] 
        [SerializeField] private TextMeshProUGUI maleLabel;
        [SerializeField] private TextMeshProUGUI femaleLabel;
        [Space] 
        [SerializeField] private Color plusColor = Color.green;
        [SerializeField] private Color minusColor = Color.red;
        [SerializeField] private float hideDelay = 0.3f;

        private void Start()
        {
            HumanCountChanger.OnHumanSpawned.AddListener(human =>
            {
                if (human.CompareTag(Gender.Male))
                {
                   ShowInfo(maleElem, maleLabel, "+1", plusColor);
                }
                else
                {
                    ShowInfo(femaleElem, femaleLabel, "+1", plusColor);
                }
            });
            HumanCountChanger.OnHumanRemoved.AddListener(human =>
            {
                if (human.CompareTag(Gender.Male))
                {
                    ShowInfo(maleElem, maleLabel, "-1", minusColor);
                }
                else
                {
                    ShowInfo(femaleElem, femaleLabel, "-1", minusColor);
                }
            });
        }

        private void ShowInfo(TweenAnimatedUIElement elem, TextMeshProUGUI label, string text, Color labelColor)
        {
            label.color = labelColor;
            label.text = text;
            elem.Show();
            StartCoroutine(DelayedHideCO(elem));
        }

        private IEnumerator DelayedHideCO(TweenAnimatedUIElement elem)
        {
            yield return new WaitForSeconds(hideDelay);
            elem.Hide();
        }
    }
}
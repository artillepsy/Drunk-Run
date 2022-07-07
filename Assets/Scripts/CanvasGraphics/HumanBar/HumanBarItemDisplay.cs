using System.Collections.Generic;
using Core;
using Saves;
using UnityEngine;
using UnityEngine.UI;

namespace CanvasGraphics.HumanBar
{
    public class HumanBarItemDisplay : MonoBehaviour
    {
        [SerializeField] private Image maleStageLine;
        [SerializeField] private Image femaleStageLine;
        [Space]
        [SerializeField] private Transform maleStageParent;
        [SerializeField] private Transform femaleStageParent;
        [Space]
        [SerializeField] private float barBorder;
        [Space]
        [SerializeField] private Transform maleIconParent;
        [SerializeField] private Transform femaleIconParent;

        public static HumanBarItemDisplay Inst { get; private set; }

        private void Awake() => Inst = this;

        public void SetUpIcons(ItemScore itemScore)
        {
            Image icon = null;
            var icons = new List<Image>();

            foreach (var item in HumanBarCanvas.Inst.Items)
            {
                switch (item.HumanGenderType)
                {
                    case GenderType.Male:
                        SpawnImage(maleStageLine, maleStageParent, item.UnlockPoints);
                        icon = SpawnImage(item.Icon, maleIconParent, item.UnlockPoints);
                        icons.Add(icon);
                        break;
                    case GenderType.Female:
                        SpawnImage(femaleStageLine, femaleStageParent, item.UnlockPoints);
                        icon = SpawnImage(item.Icon, femaleIconParent, item.UnlockPoints);
                        icon.rectTransform.anchoredPosition = new Vector2(
                            -icon.rectTransform.anchoredPosition.x,
                            icon.rectTransform.anchoredPosition.y);
                        icons.Add(icon);
                        break;
                }
                if (itemScore.UnlockedIds.Contains(item.Id) ||
                    HumanBarCanvas.Inst.NextIdToUnlock.Contains(item.Id))
                {
                    icon.color = Color.white;
                }
                else
                {
                    icon.color = Color.black;
                }
            }

        }

        private Image SpawnImage(Image prefab, Transform parent, int unlockPoints)
        {
            var line = Instantiate(prefab, parent);
            var distanceX = (float) unlockPoints / HumanBarCanvas.Inst.MaxScore * barBorder;
            line.rectTransform.anchoredPosition = new Vector2(distanceX ,line.rectTransform.anchoredPosition.y);
            return line;
        }

    }
}
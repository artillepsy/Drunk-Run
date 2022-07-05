using Core;
using UnityEngine;

namespace CanvasGraphics.HumanBar
{
    [CreateAssetMenu(fileName = "New item", menuName = "HumanBar", order = 0)]
    public class ItemForHumans : ScriptableObject
    {
        public GenderType HumanGenderType;
        public int UnlockPoints;
        // add icon
    }
}
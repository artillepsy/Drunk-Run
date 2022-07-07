using Core;
using UnityEngine;
using UnityEngine.UI;
using Vehicles;

namespace CanvasGraphics.HumanBar
{
    [CreateAssetMenu(fileName = "New item", menuName = "HumanBar", order = 0)]
    public class ItemForHumans : ScriptableObject
    {
        public int Id = 0;
        public Image Icon;
        public GenderType HumanGenderType;
        public int UnlockPoints;
        public Vehicle Prefab;
    }
}
using UnityEngine;

namespace Score
{
    [CreateAssetMenu(fileName = "Current state", menuName = "State", order = 0)]
    public class CurrentState : ScriptableObject
    {
        public string Name = "Normal";
        public Color LabelColor = Color.gray;
        public Color SliderColor = Color.red;
        public int LeftPointsBorder = 0;
        public int RightPointsBorder = 30;
    }
}
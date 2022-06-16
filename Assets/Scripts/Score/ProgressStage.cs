using UnityEngine;

namespace Score
{
    [CreateAssetMenu(fileName = "new stage", menuName = "Progress stage", order = 0)]
    public class ProgressStage : ScriptableObject
    {
        public string Name = "Normal";
        public Color LabelColor = Color.gray;
        public Color SliderColor = Color.red;
        public int LeftPointsBorder = 0;
        public int RightPointsBorder = 30;
    }
}
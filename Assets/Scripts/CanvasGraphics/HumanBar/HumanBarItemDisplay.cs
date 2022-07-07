using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace CanvasGraphics.HumanBar
{
    public class HumanBarItemDisplay : MonoBehaviour
    {
        [SerializeField] private Image stageImage;
        [SerializeField] private Color maskImageColor = Color.cyan;
        
        
        
        public UnityEvent OnItemAppear = new UnityEvent();
    }
}
using UnityEngine;
using UnityEngine.UI;

namespace CanvasGraphics.HumanBar
{
    public class ItemUnlockDisplay : MonoBehaviour
    {
        [SerializeField] private Animation displayAnim;
        [SerializeField] private Image icon;
        
        private void Start()
        {
            HumanBarCanvas.OnItemUnlocked.AddListener(PlayDisplayAnim);            
        }

        private void PlayDisplayAnim(Sprite sprite)
        {
            Debug.Log("in script");
            icon.sprite = sprite;
            displayAnim.Play();
        }
    }
}
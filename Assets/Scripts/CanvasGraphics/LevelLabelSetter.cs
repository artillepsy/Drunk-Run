using Finish;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace CanvasGraphics
{
    public class LevelLabelSetter : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI levelLabel;

        private void Start() => levelLabel.text = SceneManager.GetActiveScene().name.ToUpper();
    }
}
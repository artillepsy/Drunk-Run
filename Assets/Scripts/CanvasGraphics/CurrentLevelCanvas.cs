using Finish;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace CanvasGraphics
{
    public class CurrentLevelCanvas : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI levelLabel;

        private void Start()
        {
            levelLabel.text = SceneManager.GetActiveScene().name;
            FinishLine.OnReachedFinish.AddListener(() => levelLabel.gameObject.SetActive(true));            
        }
    }
}
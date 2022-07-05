using Levels;
using SnackersUI;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace CanvasGraphics
{
    public class EndCanvas : MonoBehaviour
    {
        [SerializeField] private string nextLevelName = "Level_2";
        [SerializeField] private TweenAnimatedUIElement element;

        public void OnClickNextLevel() => SceneManager.LoadSceneAsync(nextLevelName);

        private void Start() => LevelLoader.OnLevelEnded.AddListener(() => element.Show());
    }
}
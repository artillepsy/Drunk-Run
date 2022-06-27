using System.Collections.Generic;
using Levels;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace CanvasGraphics
{
    public class EndCanvas : MonoBehaviour
    {
        [SerializeField] private string nextLevelName = "Level_2";
        [SerializeField] private List<GameObject> children;
        
        private Animation _endCanvasAnim;

        public void OnClickNextLevel() => SceneManager.LoadSceneAsync(nextLevelName);

        private void Start()
        {
            children.ForEach(c => c.SetActive(false));
            _endCanvasAnim = GetComponent<Animation>();
            LevelLoader.OnLevelEnded.AddListener(() =>
            {
                children.ForEach(c => c.SetActive(true));
                _endCanvasAnim.Play();
            });
        }
    }
}
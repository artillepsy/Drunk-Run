using Finish;
using HumanAttraction;
using SnackersUI;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Levels
{
    public class StartTutorial : MonoBehaviour
    {
        [SerializeField] private TweenAnimatedUIElement element;
        [SerializeField] private GameObject tutorialCanvas;
        
        public static bool Started = false;
        private static bool s_isInitialized = false;
        private AttractorForwardMover _mover;

        private void Awake()
        {
            if (!s_isInitialized)
            {
                s_isInitialized = true;
                DontDestroyOnLoad(gameObject);
            }
            else Destroy(gameObject);
        }

        private void Start()
        {
            if (Started)
            {
                tutorialCanvas.SetActive(false);
                return;
            }
            tutorialCanvas.SetActive(true);
            _mover = FindObjectOfType<AttractorForwardMover>();
            _mover.SetSpeed(0f);
        }

        private void Update()
        {
            if (Started) return;
            if (Input.touches.Length == 0 || SceneManager.GetActiveScene().name.Equals("Start")) return;
            
            element.Hide();
            Started = true;
            _mover.ResetSpeed();
            FindObjectOfType<FinishLine>().ResetTime();
        }
    }
}
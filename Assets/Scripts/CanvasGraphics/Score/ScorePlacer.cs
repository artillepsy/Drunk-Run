using UnityEngine;

namespace CanvasGraphics.Score
{
    public class ScorePlacer : MonoBehaviour
    {
        [SerializeField] private RectTransform score;
        private Transform _scoreFollowTarget;
        private Camera _cam;

        private void Start()
        {
            _scoreFollowTarget = GameObject.FindGameObjectWithTag("ProgressBarParent").transform;
            _cam = Camera.main;
        }

        private void LateUpdate()
        {
            var pos = _cam.WorldToScreenPoint(_scoreFollowTarget.position);
            score.SetPositionAndRotation(pos, Quaternion.identity); 
        }
    }
}
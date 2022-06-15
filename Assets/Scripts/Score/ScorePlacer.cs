using UnityEngine;

namespace Score
{
    public class ScorePlacer : MonoBehaviour
    {
        [SerializeField] private RectTransform score;
        [SerializeField] private Transform scoreFollowTarget;
        private Camera _cam;

        private void Start() => _cam = Camera.main;

        private void LateUpdate()
        {
            var pos = _cam.WorldToScreenPoint(scoreFollowTarget.position);
            score.SetPositionAndRotation(pos, Quaternion.identity); 
        }
    }
}
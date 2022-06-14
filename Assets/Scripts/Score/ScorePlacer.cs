using UnityEngine;

namespace Score
{
    public class ScorePlacer : MonoBehaviour
    {
        private Transform _cam;

        private void Start()
        {
            _cam = Camera.main.transform;
        }

        private void Update()
        {
            transform.forward = transform.position - _cam.position;
        }
    }
}
using Finish;
using UnityEngine;

namespace HumanAttraction
{
    public class AttractorSideMover : MonoBehaviour
    {
        [SerializeField] private float xSpeed = 3.7f;
        [SerializeField] private float xConstraints = 3f;
        private Vector2 _lastTouchPos = Vector2.zero;
        private Attractor _attractor;
        private Transform _attractionPoint;
        private float _screenWidthLeveling;
        private bool _controlEnabled = true;

        private void Start()
        {
            _attractor = GetComponentInChildren<Attractor>();
            _attractionPoint = _attractor.transform;
            _screenWidthLeveling = 100f / Camera.main.pixelWidth;
            FinishLine.OnReachedFinish.AddListener(() => _controlEnabled = false);
        }

        private void Update()
        {
            if (!_controlEnabled) return;
            MoveAttractionPoint();
        }

        private void MoveAttractionPoint()
        {
            var swipeValue =  SwipeInput();
            
            var bounds = _attractor.GetXPosBounds();
            
            var min = bounds[0] + _attractionPoint.localPosition.x;
            var max = bounds[1] + _attractionPoint.localPosition.x;
            
            min = min < -xConstraints ? _attractionPoint.localPosition.x : -xConstraints;
            max = max > xConstraints ? _attractionPoint.localPosition.x : xConstraints;

            var velocity = Vector3.right * (swipeValue * xSpeed * Time.deltaTime);
            _attractor.transform.Translate(velocity, Space.Self);

            var pointPos = _attractionPoint.localPosition;
            pointPos.x = Mathf.Clamp(_attractionPoint.localPosition.x, min, max);
            _attractionPoint.localPosition = pointPos;
        }

        private float SwipeInput()
        {
            if (Input.touchCount == 0) return 0f;
            var touch = Input.GetTouch(0);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                {
                    _lastTouchPos = touch.position;
                    break;
                }
                case TouchPhase.Moved:
                case TouchPhase.Stationary:
                {
                    var direction = touch.position - _lastTouchPos;
                    _lastTouchPos = touch.position;
                    return direction.x * _screenWidthLeveling;
                }
            }
            return 0f;
        }
    }
}
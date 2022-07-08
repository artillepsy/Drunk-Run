using System;
using Finish;
using Human;
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
        private Transform _player;

        public float XConstraints => xConstraints;
        public static AttractorSideMover Inst { get; private set; }

        private void Awake() => Inst = this;

        private void Start()
        {
            _attractor = GetComponentInChildren<Attractor>();
            _attractionPoint = _attractor.transform;
            _screenWidthLeveling = 100f / Camera.main.pixelWidth;
            _player = FindObjectOfType<HumanItemSetter>().transform;
            _player.SetParent(transform);
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
            
          //  var bounds = _attractor.GetXPosBounds();
            
          //  var min = bounds[0] + _attractionPoint.localPosition.x;
          //  var max = bounds[1] + _attractionPoint.localPosition.x;

           // var left = min >= -xConstraints;
           // var right = max <= xConstraints;
            
            var velocityX = swipeValue * xSpeed * Time.deltaTime;
            
            var playerPosX = _player.localPosition.x + velocityX;
            playerPosX = Mathf.Clamp(playerPosX, -xConstraints, xConstraints);
            _player.localPosition = new Vector3(playerPosX, 0, _player.localPosition.z);
            
          //  if (swipeValue < 0 && !left || swipeValue > 0 && !right) return;
            
         //   min = min < -xConstraints ? _attractionPoint.localPosition.x : -xConstraints;
          //  max = max > xConstraints ? _attractionPoint.localPosition.x : xConstraints;
            var predictedPosX = _attractionPoint.localPosition.x + velocityX;
            predictedPosX = Mathf.Clamp(predictedPosX, -xConstraints, xConstraints);
            _attractionPoint.localPosition = new Vector3(predictedPosX, 0, _attractionPoint.localPosition.z);
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
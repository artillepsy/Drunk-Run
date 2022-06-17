using Finish;
using UnityEngine;

namespace HumanAttraction
{
    public class HumanAttractorMovement : MonoBehaviour
    {
        [SerializeField] private Joystick joystick;
        [Space]        
        [SerializeField] private float zSpeed = 3f;
        [SerializeField] private float xSpeed = 1f;
        [SerializeField] private float xConstraints = 4f;
        private bool _shouldMove = true;
        private float localX = 0f;
        public float ZSpeed => zSpeed;

        private void Start()
        {
            FinishLine.OnEnterFinishTrigger.AddListener(finishPoint =>  _shouldMove = false);
            HumanAttractorTurner.OnMoveStatusChanged.AddListener(status => _shouldMove = status);
        } 

        private void Update()
        {
            if (!_shouldMove) return;
            
            var x = joystick.Horizontal;
            var velocity = new Vector3(x * xSpeed, 0, zSpeed) * Time.deltaTime;
            
            var tempX = localX + x * xSpeed * Time.deltaTime;
            if (tempX > xConstraints || tempX < -xConstraints) velocity.x = 0f;
            else localX = tempX;
            
            transform.Translate(velocity, Space.Self);
        }
    }
}
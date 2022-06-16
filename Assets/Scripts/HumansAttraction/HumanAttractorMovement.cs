using System.Collections;
using Finish;
using UnityEngine;

namespace HumansAttraction
{
    public class HumanAttractorMovement : MonoBehaviour
    {
        [SerializeField] private Joystick joystick;
        [Space]        
        [SerializeField] private float zSpeed = 3f;
        [SerializeField] private float xSpeed = 1f;
        [SerializeField] private float xConstraints = 4f;
        private bool _shouldMove = true;

        private void Start() => FinishLine.OnReachedFinish.AddListener((finishPoint) =>
        {
            _shouldMove = false;
            StartCoroutine(MoveToFinishCO(finishPoint));
        });

        private void Update()
        {
            if (!_shouldMove) return;
            
            var x = joystick.Horizontal;
            var velocity = new Vector3(x * xSpeed, 0, zSpeed) * Time.deltaTime;
            transform.Translate(velocity, Space.World);
            
            ClampXPosition();
        }

        private void ClampXPosition()
        {
            if (transform.position.x > xConstraints)
            {
                transform.position = new Vector3(xConstraints, transform.position.y, transform.position.z);
            }
            else if (transform.position.x < -xConstraints)
            {
                transform.position = new Vector3(-xConstraints, transform.position.y, transform.position.z);
            }
        }

        private IEnumerator MoveToFinishCO(Vector3 finishPoint)
        {
            var direction = (finishPoint - transform.position);
            var distance = direction.magnitude;
            var velocity = new Vector3(direction.normalized.x, 0, direction.normalized.z) * zSpeed;
            
            var timeToMove = distance / zSpeed;
            var time = 0f;
            
            while (time < timeToMove)
            {
                transform.Translate(velocity * Time.deltaTime, Space.World);
                time += Time.deltaTime;
                yield return null;
            }
            transform.position = new Vector3(finishPoint.x, transform.position.y, finishPoint.z);
        }
    }
}
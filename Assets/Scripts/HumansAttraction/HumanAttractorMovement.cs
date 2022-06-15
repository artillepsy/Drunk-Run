using UnityEngine;
using UnityEngine.SceneManagement;

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

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.R)) SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().name);
            
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
    }
}
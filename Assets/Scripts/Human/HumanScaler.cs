using System.Collections;
using RootMotion.Dynamics;
using UnityEngine;

namespace Human
{
    public class HumanScaler : MonoBehaviour
    {
        [SerializeField] private float startScale = 0.3f;
        [SerializeField] private float endScale = 1f;
        [Min(0.001f)]
        [SerializeField] private float scaleTime = 0.3f;
        private PuppetMaster _puppetMaster;
        private float _scaleIncrement;

        public void StartGrow()
        {
            transform.localScale = Vector3.zero;
            StartCoroutine(ChangeScaleCO());
        }

        private void Awake()
        {
            _puppetMaster = GetComponentInChildren<PuppetMaster>();
            _scaleIncrement = 1f / scaleTime;
        }

        private IEnumerator ChangeScaleCO() 
        {
            var scale = startScale;

            SetActivePuppetMasterMode(false);
            
            while (scale < endScale)
            {
                scale += _scaleIncrement * Time.deltaTime;
                transform.localScale = Vector3.one * scale;
                yield return null;
            }
            transform.localScale = Vector3.one * endScale;
            
            SetActivePuppetMasterMode(true);
        }

        private void SetActivePuppetMasterMode(bool status)
        {
            _puppetMaster.mode = status ? PuppetMaster.Mode.Active : PuppetMaster.Mode.Disabled;
        }
    }
}
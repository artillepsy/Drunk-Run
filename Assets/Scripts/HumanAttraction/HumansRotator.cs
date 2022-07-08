using System.Collections;
using UnityEngine;

namespace HumanAttraction
{
    public class HumansRotator : MonoBehaviour
    {
        [SerializeField] private float humansMaxDeviation = 20f;
        [SerializeField] private AnimationCurve rotationCurve;

        private void Start()
        {
            AttractorRotator.OnNeedRotateHumans.AddListener((directionSign, desiredTime) =>
            {
                StartCoroutine(RotateHumansCO(directionSign, desiredTime));
            });
        }

        private IEnumerator RotateHumansCO(float directionSign, float desiredTime)
        {
            var time = 0f;
            while (time < desiredTime)
            {
                var rotationValue = rotationCurve.Evaluate(time / desiredTime) * humansMaxDeviation;
                foreach (var human in Attractor.Inst.Humans)
                {
                    human.transform.localRotation = Quaternion.Euler(0, 0, rotationValue * -directionSign);
                }
                time += Time.deltaTime;
                yield return null;
            }

            foreach (var human in Attractor.Inst.Humans)
            {
                human.transform.localRotation = Quaternion.identity;
            }
        }
    }
}
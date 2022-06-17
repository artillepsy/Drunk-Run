using System.Collections.Generic;
using Score;
using UnityEngine;

namespace Finish
{
    public class DecisionParticlesDisplay : MonoBehaviour
    {
        [SerializeField] private List<GameObject> moneyParticles;
        [SerializeField] private List<GameObject> drunkParticles;

        private void Start()
        {
            FinishLine.OnReachedFinish.AddListener(() =>
            {
                var score = FindObjectOfType<ScoreChanger>().CurrentScore;

                if (score >= 0) moneyParticles.ForEach(particle => particle.SetActive(true));
                else drunkParticles.ForEach(particle => particle.SetActive(true));
            });
        }
    }
}
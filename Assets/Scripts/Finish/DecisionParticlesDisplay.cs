using System.Collections.Generic;
using CanvasGraphics.Score;
using HumanAttraction;
using UnityEngine;

namespace Finish
{
    public class DecisionParticlesDisplay : MonoBehaviour
    {
        [SerializeField] private List<GameObject> moneyParticles;
        [SerializeField] private List<GameObject> drunkParticles;

        private void Start()
        {
            AttractorForwardMover.OnReachedEnd.AddListener(() =>
            {
                var score = FindObjectOfType<ScoreChanger>(true).CurrentScore;

                if (score >= 0) moneyParticles.ForEach(particle => particle.SetActive(true));
                else drunkParticles.ForEach(particle => particle.SetActive(true));
            });
        }
    }
}
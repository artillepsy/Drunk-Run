using System.Collections.Generic;
using Finish;
using UnityEngine;
using Random = UnityEngine.Random;

namespace HumanAttraction
{
    public class DecisionEmojiDisplay : MonoBehaviour
    {
        [SerializeField] private List<GameObject> emojies;

        private void Start()
        {
            FinishLine.OnEnterFinishTrigger.AddListener(point =>
            {
                emojies[Random.Range(0, emojies.Count)].SetActive(true);
            });
        }
    }
}
using System.Collections.Generic;
using UnityEngine;

namespace Human
{
    [System.Serializable]
    public class VisualParts
    {
        public List<GameObject> variants;
    }
    public class HumanVisualsRandomizer : MonoBehaviour
    {
        [SerializeField] private List<VisualParts> parts;
        [SerializeField] private bool enable = false;

        private void Awake()
        {
            if (!enable) return;
            
            foreach (var part in parts)
            {
                Randomize(part.variants);
            }
        }

        private void Randomize(List<GameObject> parts)
        {
            var index = Random.Range(0, parts.Count);

            for (var i = 0; i < parts.Count; i++)
            {
                if(i == index) parts[i].SetActive(true);
                else if (parts[i].activeSelf) parts[i].SetActive(false);
            }
        }
    }
}
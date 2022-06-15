using System.Collections.Generic;
using UnityEngine;

namespace Human
{
    public class HumanSkinChanger : MonoBehaviour
    {
        [SerializeField] private List<GameObject> skins;

        private void Awake()
        {
            var index = Random.Range(0, skins.Count);

            for (var i = 0; i < skins.Count; i++)
            {
                if(i == index) skins[i].SetActive(true);
                else if (skins[i].activeSelf) skins[i].SetActive(false);
            }
        }
    }
}
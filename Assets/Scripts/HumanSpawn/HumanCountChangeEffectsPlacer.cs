using UnityEngine;

namespace HumanSpawn
{
    public class HumanCountChangeEffectsPlacer : MonoBehaviour
    {
        [SerializeField] private Transform parent;
        [Space]
        [SerializeField] private Transform maleAppearPS;
        [SerializeField] private Transform femaleAppearPS;
        [SerializeField] private Transform disappearPS;

        private void Start()
        {
            HumanCountChanger.OnHumanSpawned.AddListener(human =>
            {
                Transform prefabPS;
                prefabPS = human.CompareTag("Male") ? maleAppearPS : femaleAppearPS;
                Instantiate(prefabPS, parent);
            });   
            HumanCountChanger.OnHumanRemoved.AddListener(human =>
            {
                Instantiate(disappearPS, parent);
            });   
        }
    }
}
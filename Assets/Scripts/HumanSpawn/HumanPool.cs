using System.Collections.Generic;
using UnityEngine;

namespace HumanSpawn
{
    public class HumanPool : MonoBehaviour
    {
        public static HumanPool Inst { get; private set; }
        private List<GameObject> _humans = new List<GameObject>();

        private void Awake() => Inst = this;

        public void Add(GameObject human) => _humans.Add(human);

        public bool TryGet(out GameObject human)
        {
            if (_humans.Count == 0)
            {
                human = null;
                return false;
            }
            human = _humans[0];
            _humans.Remove(human);
            return true;
        }
    }
}
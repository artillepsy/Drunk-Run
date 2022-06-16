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

        public bool TryGet(out GameObject human, string tag)
        {
            if (_humans.Count == 0)
            {
                human = null;
                return false;
            }
            foreach (var h in _humans)
            {
                if(!h.CompareTag(tag)) continue;
                human = h;
                _humans.Remove(human);
                return true;
            }
            human = null;
            return false;
        }
    }
}
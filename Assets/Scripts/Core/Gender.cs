using System;
using UnityEngine;

namespace Core
{
    public class Gender : MonoBehaviour
    {
        [SerializeField] private GameObject malePrefab;
        [SerializeField] private GameObject femalePrefab;
        
        public const string Male = "Male";
        public const string Female = "Female";

        public static Gender Inst { get; private set; }

        private void Awake() => Inst = this;

        public static string GetTag(GenderType type)
        {
            Debug.Log("type: " + type);
            return type == GenderType.Male ? Male : Female;
        }

        public GameObject GetPrefab(GenderType type)
        {
            return type == GenderType.Male ? malePrefab : femalePrefab;
        }
    }
}
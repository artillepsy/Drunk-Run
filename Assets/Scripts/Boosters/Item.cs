using UnityEngine;

namespace Boosters
{
    public class Item : BaseScoreBooster
    {
        protected void OnTriggerEnter(Collider other)
        {
            base.OnTriggerEnter(other);
            Destroy(gameObject);
        }
    }
}
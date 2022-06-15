using RootMotion.Dynamics;
using Score;
using UnityEngine;

namespace Human
{
    public class HumanDrunkennessScaler : MonoBehaviour
    {
        [SerializeField] private float pinStartWeight = 1f;
        [SerializeField] private float pinMinWeight = 0.5f;
        [SerializeField] private float musclesStartWeight = 1f;
        [SerializeField] private float musclesMinWeight = 0f;
        private int _minScore;
        private int _startScore;
        private PuppetMaster _puppetMaster;        
        private void Start()
        {
            _puppetMaster = GetComponentInChildren<PuppetMaster>();
            
            var scoreChanger = FindObjectOfType<ScoreChanger>();
            _minScore = -scoreChanger.MaxScore;
            _startScore = scoreChanger.StartScore;

            ChangeDrunkennessScale(scoreChanger.CurrentScore);
            ScoreChanger.OnScoreChange.AddListener(ChangeDrunkennessScale);
        }

        private void ChangeDrunkennessScale(int currentScore)
        {
            if (currentScore <= _minScore)
            {
                _puppetMaster.pinWeight = pinMinWeight;
                _puppetMaster.muscleWeight = musclesMinWeight;
                return;
            }
            if (currentScore >= _startScore)
            {
                _puppetMaster.pinWeight = pinStartWeight;
                _puppetMaster.muscleWeight = musclesStartWeight;
                return;
            }
            var scaleCoeff = (float)currentScore / (_minScore - _startScore);
            _puppetMaster.pinWeight = Mathf.Lerp(pinStartWeight, pinMinWeight, scaleCoeff);
            _puppetMaster.muscleWeight = Mathf.Lerp(musclesStartWeight, musclesMinWeight, scaleCoeff);
        }
    }
}
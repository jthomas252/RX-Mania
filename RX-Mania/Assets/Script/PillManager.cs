using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace RX {
    public class PillManager : MonoBehaviour {
        public Pill pillPrefab; 

        [System.Serializable]
        public struct PillGraphics {
            public Pill.PillType type;
            public Sprite sprite; 
        }//PillGraphics
        public PillGraphics[] graphics; 
        public int pillsToCreate = 96; 

        private List<Pill> pillList; 
        private Dictionary<Pill.PillType, int> pillDict; 

        private const int PILL_NORMAL_COUNT = 5;
        private const int PILL_PLACEBO_POS = 5;
        private const int PILLS_TO_CREATE = 80;
        private const float PLACEBO_CHANCE = 0.01f; 

        public void Init() {
            pillDict = new Dictionary<Pill.PillType,int>(); 
            pillList = new List<Pill>(); 
            for (int i = 0; i < graphics.Length; ++i) {
                pillDict.Add(graphics[i].type, i); 
            }

            for (int i = 0; i < PILLS_TO_CREATE; ++i) {
                Pill p = (Pill)GameObject.Instantiate(pillPrefab);
                pillList.Add(p); 
            }
        }//Init

        public void QueuePlacebo() {

        }//QueuePlacebo

        public Pill GetUnusedPill() {
            for (int i = 0; i < pillList.Count; ++i) {
                if (pillList[i].unused) {
                    Pill p = pillList[i];

                    int pillType = Random.Range(0, PILL_NORMAL_COUNT);
                    if (Random.Range(0f, 1f) > (1f - PLACEBO_CHANCE)) {
                        pillType = PILL_PLACEBO_POS; 
                    }

                    p.Refresh(graphics[pillType].sprite);
                    p.type = graphics[pillType].type;
                    return p;
                }
            }
            return null; 
        }//GetPill

    }//PillManager
}//RX

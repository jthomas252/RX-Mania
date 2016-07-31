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

        private Pill[] pillList; 
        private Dictionary<Pill.PillType, int> pillDict; 

        private const int PILL_NORMAL_COUNT = 5;
        private const int PILL_PLACEBO_POS = 6;

        public void Init() {
            pillDict = new Dictionary<Pill.PillType,int>(); 
            for (int i = 0; i < graphics.Length; ++i) {
                pillDict.Add(graphics[i].type, i); 
            } 
        }//Init

        public Pill GetUnusedPill() {
            Pill p = (Pill)GameObject.Instantiate(pillPrefab);
            int pillType = Random.Range(0,PILL_NORMAL_COUNT);
            p.Refresh(graphics[pillType].sprite);
            return p;
        }//GetPill

    }//PillManager
}//RX

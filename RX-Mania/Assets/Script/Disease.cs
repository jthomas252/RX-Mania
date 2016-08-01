using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace RX {
    public class Disease {
        public class DiseaseResist {
            public int needed;
            public DiseaseResist(int n = 0) {
                needed = n;
            }

            public void Set(int n = 0) {
                needed = n; 
            }

            public bool Damage(int n = 0) {
                needed -= n;
                if (needed <= 0) {
                    needed = 0;
                    return true; 
                } 
                return false;
            }
        }
        private Dictionary<Pill.PillType, DiseaseResist> diseaseDict; 
        private int _strength = 0;
        public int strength {
            get {
                return _strength; 
            }
        }

        private string _name;
        public string name {
            get {
                return _name; 
            }
        }

        public Disease() {
            diseaseDict = new Dictionary<Pill.PillType,DiseaseResist>();
            diseaseDict.Add(Pill.PillType.PillBlue, new DiseaseResist());
            diseaseDict.Add(Pill.PillType.PillBrown, new DiseaseResist());
            diseaseDict.Add(Pill.PillType.PillOrange, new DiseaseResist());
            diseaseDict.Add(Pill.PillType.PillPurple, new DiseaseResist());
            diseaseDict.Add(Pill.PillType.PillRed, new DiseaseResist());
        }//Disease

        public void Spawn(int str = 0, int pill = 0) {
            //Create a random name, effect
            _name = DiseaseNameGenerator.GetNewName();
            _strength = str; 
            
            diseaseDict[Pill.PillType.PillBlue].Set(pill/5);
            diseaseDict[Pill.PillType.PillBrown].Set(pill/5);
            diseaseDict[Pill.PillType.PillOrange].Set(pill/5);
            diseaseDict[Pill.PillType.PillPurple].Set(pill/5);
            diseaseDict[Pill.PillType.PillRed].Set(pill/5); 
        }//Spawn

        public bool ApplyEffect(Pill.PillType type, float amount) {
            if (diseaseDict.ContainsKey(type)) {
                if (diseaseDict[type].Damage((int)amount)) {
                    if (
                        diseaseDict[Pill.PillType.PillBlue].needed == 0 &&
                        diseaseDict[Pill.PillType.PillRed].needed == 0 &&
                        diseaseDict[Pill.PillType.PillPurple].needed == 0 &&
                        diseaseDict[Pill.PillType.PillOrange].needed == 0 &&
                        diseaseDict[Pill.PillType.PillBrown].needed == 0
                    ) {
                        return true; 
                    }
                }
            }
            return false; 
        }//ApplyEffect

        public void GetDamage() {
            //NYI
        }//GetDamage

        public int GetResistance(Pill.PillType type) {
            if (diseaseDict.ContainsKey(type)) {
                return diseaseDict[type].needed; 
            }
            return 0;
        }//GetResistance
    }//Disease
}//RX

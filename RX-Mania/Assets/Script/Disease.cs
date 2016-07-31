using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace RX {
    class Disease {
        public struct DiseaseStrength {
            public Pill.PillType type;
            public int needed; 
        }

        public Disease() {

        }//Disease

        public void Spawn() {
            //Create a random name, effect
        }//Spawn

        public void ApplyEffect(Pill.PillType type, float amount) {
            //NYI
        }//ApplyEffect

        public void GetDamage() {
            //NYI
        }//GetDamage
    }//Disease
}//RX

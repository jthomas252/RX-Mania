using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace RX {
    public class GameInit:MonoBehaviour {
        public void Awake() {
            Top.InitValues(); 
            Destroy(gameObject);
        }//Awake
    }//GameInit
}//RX

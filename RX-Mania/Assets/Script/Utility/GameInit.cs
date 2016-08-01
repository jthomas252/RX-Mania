using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace RX {
    public class GameInit:MonoBehaviour {
        public void Awake() {
            Application.targetFrameRate = 60;
            Top.InitValues(); 
            Destroy(gameObject);
        }//Awake
    }//GameInit
}//RX

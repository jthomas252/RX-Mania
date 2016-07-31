using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine; 
namespace RX {
    public class Top {
        public static GameHandler gameHandler; 
        public static PillManager pillManager;

        public static void InitValues() {
            gameHandler = GameObject.FindObjectOfType<GameHandler>(); 
            pillManager = GameObject.FindObjectOfType<PillManager>(); 
        }//InitValues
    }//Top
}//RX

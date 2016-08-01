using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine; 
namespace RX {
    public class Top {
        public static GameHandler gameHandler; 
        public static PillManager pillManager;
        public static AudioHandler audioHandler;
        public static UIHandler uiHandler;

        public static void InitValues() {
            pillManager = GameObject.FindObjectOfType<PillManager>();
            pillManager.Init();
            audioHandler = GameObject.FindObjectOfType<AudioHandler>(); 
            audioHandler.Init();
            uiHandler = GameObject.FindObjectOfType<UIHandler>(); 
            uiHandler.Init(); 
            gameHandler = GameObject.FindObjectOfType<GameHandler>();
            gameHandler.Init();
        }//InitValues
    }//Top
}//RX

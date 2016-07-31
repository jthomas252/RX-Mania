using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

namespace RX {
    public class Pause : MonoBehaviour {
        public RectTransform game;

        public void OnResumeButton() {
            Top.audioHandler.ResumeMusic(); 
            game.gameObject.SetActive(true);
            gameObject.SetActive(false);
        }//OnPauseButton
    }//MainMenu
}//RX

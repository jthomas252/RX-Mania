using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

namespace RX {
    public class Pause : MonoBehaviour {
        public RectTransform game;
        public RectTransform main; 

        public void OnResumeButton() {
            Top.audioHandler.ResumeMusic(); 
            game.gameObject.SetActive(true);
            gameObject.SetActive(false);
        }//OnPauseButton

        public void OnQuitButton() {
            Top.audioHandler.ResumeMusic();
            main.gameObject.SetActive(true);
            Top.gameHandler.Close(); 
            Top.audioHandler.PlayMusic("MainMenu");
            gameObject.SetActive(false);
        }//OnQuitButton
    }//MainMenu
}//RX

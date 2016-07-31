using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI; 

namespace RX {
    public class MainMenu : MonoBehaviour {
        public RectTransform gameOptions;
        public RectTransform creditsMenu;

        public void Awake() {
            Top.audioHandler.PlayMusic("MainMenu");
        }//Awake

        public void OnPlayButton() {
            if (gameOptions) {
                gameOptions.gameObject.SetActive(true);
                this.gameObject.SetActive(false);
            } else {
                Debug.Log("Game Options not set up"); 
            }
        }//OnPlayButton

        public void OnCreditsButton() {
            if (creditsMenu) {
                creditsMenu.gameObject.SetActive(true);
                this.gameObject.SetActive(false);
            } else {
                Debug.Log("Credits button not set up");
            }
        }//OnCreditsButton

        public void OnExitButton() {
            Application.Quit(); 
        }//OnExitButton
    }//MainMenu
}//RX

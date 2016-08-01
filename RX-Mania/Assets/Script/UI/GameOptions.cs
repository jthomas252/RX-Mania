using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI; 

namespace RX {
    public class GameOptions : MonoBehaviour {
        public RectTransform game;
        public RectTransform mainMenu; 
        public Text levelText;
        private int levelValue;

        public void OnBackButton() {
            mainMenu.gameObject.SetActive(true);
            this.gameObject.SetActive(false);
        }//OnBackButton

        public void OnGoButton() {
            game.gameObject.SetActive(true); 
            Top.gameHandler.StartNewGame(levelValue); 
            this.gameObject.SetActive(false);
        }//OnGoButton

        public void OnSlider(float pos) {
            levelValue = (int)Mathf.Lerp(0,50,pos);
            levelText.text = string.Empty+levelValue;
        }//OnSlider
    }//GameOptions
}//RX

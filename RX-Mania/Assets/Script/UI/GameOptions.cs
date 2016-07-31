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

        public void OnBackButton() {
            mainMenu.gameObject.SetActive(true);
            this.gameObject.SetActive(false);
        }//OnBackButton

        public void OnGoButton() {
            game.gameObject.SetActive(true); 
            Top.gameHandler.StartNewGame(); 
            this.gameObject.SetActive(false);
        }//OnGoButton
    }//GameOptions
}//RX

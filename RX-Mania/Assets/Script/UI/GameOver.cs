using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

namespace RX {
    public class GameOver : MonoBehaviour {
        public RectTransform game;
        public RectTransform mainMenu; 
        public Text scoreText;

        public void SetScoreText(int score) {
            if (scoreText) {
                scoreText.text = string.Empty+score; 
            }
        }//SetScoreText

        public void OnMainMenuButton() {
            if (mainMenu) {
                mainMenu.gameObject.SetActive(true);
                Top.audioHandler.PlayMusic("MainMenu");
                gameObject.SetActive(false);
            } else {
                Debug.Log("Main Menu not set");
            }
        }//OnMainMenuButton

        public void OnReplayButton() {
            if (game) {
                game.gameObject.SetActive(true);
                Top.gameHandler.StartNewGame();
                gameObject.SetActive(false);
            } else {
                Debug.Log("Game not set");
            }
        }//OnReplayButton
    }//Pause
}//RX

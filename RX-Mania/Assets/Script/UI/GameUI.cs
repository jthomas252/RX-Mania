using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

namespace RX {
    public class GameUI : MonoBehaviour {
        public RectTransform pauseScreen;
        public Image healthBar; 

        public void OnPauseButton() {
            Top.audioHandler.PauseMusic(); 
            pauseScreen.gameObject.SetActive(true);
            gameObject.SetActive(false); 
        }//OnPauseButton

        public void UpdateHealthBar(float val) {
            healthBar.fillAmount = val;
        }//UpdateHealthBar
    }//MainMenu
}//RX

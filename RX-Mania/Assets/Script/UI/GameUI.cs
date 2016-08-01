using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

namespace RX {
    public class GameUI : MonoBehaviour {
        public RectTransform pauseScreen;
        public GameOver gameOver;
        public Image healthBar; 
        public Text resistanceText;
        public Text levelText;
        public Text scoreText; 
        public Text diseaseNameText;

        public void OnPauseButton() {
            Top.audioHandler.PauseMusic(); 
            pauseScreen.gameObject.SetActive(true);
            gameObject.SetActive(false); 
        }//OnPauseButton

        public void UpdateHealthBar(float val) {
            healthBar.fillAmount = val;
        }//UpdateHealthBar

        public void UpdateDiseaseText(Disease d) {
            if (diseaseNameText) {
                diseaseNameText.text = d.name; 
            }

            if (resistanceText) {
                string resists = string.Empty;
                int red = d.GetResistance(Pill.PillType.PillRed);
                int purple = d.GetResistance(Pill.PillType.PillPurple);
                int brown = d.GetResistance(Pill.PillType.PillBrown);
                int orange = d.GetResistance(Pill.PillType.PillOrange);
                int blue = d.GetResistance(Pill.PillType.PillBlue);

                resists += red > 9 ? string.Empty+red : "0" + red;
                resists += purple > 9 ? string.Empty + purple : "0" + purple;
                resists += brown > 9 ? string.Empty + brown : "0" + brown;
                resists += orange > 9 ? string.Empty + orange : "0" + orange;
                resists += blue > 9 ? string.Empty + blue : "0" + blue; 
                resistanceText.text = resists; 
            }
        }//UpdateDiseaseText

        public void UpdateScoreText(int score) {
            if (scoreText) {
                scoreText.text = string.Empty + score;
            }
        }//UpdateScoreText

        public void UpdateLevelText(int level) {
            if (levelText) {
                levelText.text = string.Empty + (level);
            }
        }//UpdateLevelText

        public void ShowGameOver(int score) {
            gameOver.gameObject.SetActive(true);
            gameOver.SetScoreText(score);
            Top.uiHandler.usePanicColors = false;
            Top.uiHandler.timeBetweenColor = 8f;
            Top.audioHandler.PlayMusic("GameOver");
            this.gameObject.SetActive(false);
        }//ShowGameOver
    }//MainMenu
}//RX

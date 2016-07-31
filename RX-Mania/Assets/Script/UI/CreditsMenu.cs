using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

namespace RX {
    public class CreditsMenu : MonoBehaviour {
        public RectTransform mainMenu;

        public void OnCloseButton() {
            if (mainMenu) {
                mainMenu.gameObject.SetActive(true);
                this.gameObject.SetActive(false);
            } else {
                Debug.Log("Main Menu not set up");
            }
        }//OnPlayButton
    }//MainMenu
}//RX

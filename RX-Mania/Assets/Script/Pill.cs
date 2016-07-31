using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI; 

namespace RX {
    public class Pill : MonoBehaviour {
        public enum PillType {
            PillRed,
            PillBlue,
            PillBrown,
            PillOrange,
            PillPurple,
            PillPlacebo
        }
        private Image image;
        public PillType type;
        public float mouseOverOpacity = 0.5f;
        public Color selectColor;
        public bool selected = false; 
        
        //Grid Positioning
        private int _gridX = 0;
        public int gridX {
            get {
                return _gridX; 
            }
        }
        private int _gridY = 0;
        public int gridY {
            get {
                return _gridY; 
            }
        }

        private void Awake() {
            image = GetComponent<Image>();
        }//Awake

        public void Refresh(Sprite sprite) {
            image.sprite = sprite; 
        }//Refresh

        public void OnPointerUp() {
            selected = !selected; 
            image.color = selected ? selectColor : new Color(1f,1f,1f);
        }//OnPointerUp

        public void OnPointerEnter() {
            image.color = new Color(
                image.color.r,
                image.color.g,
                image.color.b,
                mouseOverOpacity);
        }//OnPointerEnter

        public void OnPointerExit() {
            image.color = new Color(
                image.color.r,
                image.color.g,
                image.color.b,
                1f);
        }//OnPointerExit
    }//Pill
}//RX

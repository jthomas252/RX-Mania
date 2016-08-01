using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.UI; 

namespace RX {
    public class Pill : GridItem {
        public enum PillType {
            PillRed,
            PillBlue,
            PillBrown,
            PillOrange,
            PillPurple,
            PillPlacebo
        }
        private Image image;
        private bool _unused = true;
        public bool unused {
            get {
                return _unused; 
            }
        }
        public PillType type;
        public float mouseOverOpacity = 0.5f;
        public Color selectedColor = new Color(0f,1f,0f);
        public bool selected = false; 

        private void Awake() {
            image = GetComponent<Image>();
        }//Awake

        public void Refresh(Sprite sprite) {
            image.sprite = sprite; 
            isEmpty = false; 
            _unused = false; 
        }//Refresh

        public void OnPointerUp() {
            if (Top.gameHandler.selectionDragActive) {
                Top.gameHandler.EndSelectDrag();
            }
        }//OnPointerUp

        public void OnPointerDown() {
            Top.gameHandler.BeginSelectDrag(); 
            AddPill();
        }//OnPointerDrag

        public void OnPointerEnter() {
            if (Top.gameHandler.selectionDragActive) {
                AddPill();
            }

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

        public void Deselect() {
            image.color = new Color(1f,1f,1f);
            selected = false; 
        }//Deselect

        public void Use() {
            _unused = true; 
            isEmpty = true; 
            image.sprite = null; 
        }//Use

        private void AddPill() {
            if (Top.gameHandler.AddPill(this)) {
                selected = true;
                image.color = selectedColor;
            }
        }//AddPill
    }//Pill
}//RX

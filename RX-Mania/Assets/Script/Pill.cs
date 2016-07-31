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
        public PillType type;
        public float mouseOverOpacity = 0.5f;
        public Color selectedColor = new Color(0f,1f,0f);
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

        public void SetPosition(int x, int y) {
            _gridX = x; 
            _gridY = y; 
        }//SetPosition

        private void Awake() {
            image = GetComponent<Image>();
        }//Awake

        public void Refresh(Sprite sprite) {
            image.sprite = sprite; 
        }//Refresh

        public void OnPointerUp() {
            Top.gameHandler.EndSelectDrag();
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

        }//Use

        private void AddPill() {
            if (Top.gameHandler.AddPill(this)) {
                selected = true;
                image.color = selectedColor;
            }
        }//AddPill
    }//Pill
}//RX

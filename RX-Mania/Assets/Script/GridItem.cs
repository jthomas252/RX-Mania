using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine; 

namespace RX {
    public class GridItem:MonoBehaviour {
        public bool isEmpty = true;

        //Grid Positioning
        public int _gridX = 0;
        public int gridX {
            get {
                return _gridX;
            }
        }
        public int _gridY = 0;
        public int gridY {
            get {
                return _gridY;
            }
        }
        public AnimationCurve gravityCurve; 
        public float fallTime = 1.5f; 
        private float currentTime = 0f; 
        private RectTransform rectTransform; 
        private Vector3 lastPos; 
        private Vector3 targetPos;

        private void Awake() {
            rectTransform = (RectTransform)transform;
        }//Awake

        private void Update() {
            if (Top.gameHandler.active) {
                if (currentTime < fallTime) {
                    currentTime += Time.deltaTime;
                    rectTransform.anchoredPosition = Vector3.Lerp(
                        lastPos,
                        targetPos,
                        gravityCurve.Evaluate(currentTime / fallTime));
                }
            }
        }//Update

        public void SetPosition(int x, int y, Vector3 newPos, bool instant = false) {
            if (!rectTransform) rectTransform = (RectTransform)transform; 
            lastPos = rectTransform.anchoredPosition;
            _gridX = x;
            _gridY = y;
            targetPos = newPos;
            currentTime = 0f;
            if (instant) {
                currentTime = fallTime;
                lastPos = newPos; 
                rectTransform.anchoredPosition = newPos;
            }
        }//SetPosition

        public void OnGridAdded() {
            //Override me!
        }//OnGridAdded

        public void OnGridRemoved() {
            //Override me! 
        }//OnGridRemoved
    }//GridItem
}//Rx

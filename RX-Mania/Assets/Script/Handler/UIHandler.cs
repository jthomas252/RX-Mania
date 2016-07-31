using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace RX {
    public class UIHandler : MonoBehaviour {
        private float currentTime = 0f; 

        public Color[] backgroundColors; 
        private int backgroundCurrent = 0;
        private int backgroundNext = 1;
        public float timeBetweenColor = 1.5f; 
        
        public float backgroundScrollSpeedPerFrame = 0.1f;
        public bool scrollLeft = true; 
        public bool scrollUp = true;
        public MeshRenderer background; 

        public void Update() {
            IterateBackground(); 
            currentTime += Time.deltaTime;
            if (currentTime > timeBetweenColor) {
                backgroundCurrent = backgroundNext; 
                backgroundNext = backgroundNext == (backgroundColors.Length-1) ? 0 : backgroundNext + 1; 
                currentTime = 0f;
            }
        }//Update

        public void IterateBackground() {
            //Use Lerp between a handful of predefined colors
            background.material.mainTextureOffset += new Vector2(
                scrollLeft ? backgroundScrollSpeedPerFrame : -backgroundScrollSpeedPerFrame, 
                scrollUp ? -backgroundScrollSpeedPerFrame : backgroundScrollSpeedPerFrame);
            Color color = new Color(
                Mathf.Lerp(
                backgroundColors[backgroundCurrent].r, 
                backgroundColors[backgroundNext].r,
                (currentTime / timeBetweenColor)),
                Mathf.Lerp(
                backgroundColors[backgroundCurrent].g, 
                backgroundColors[backgroundNext].g,
                (currentTime / timeBetweenColor)),
                Mathf.Lerp(
                backgroundColors[backgroundCurrent].b, 
                backgroundColors[backgroundNext].b,
                (currentTime / timeBetweenColor))
            );
            background.material.color = color; 
        }//IterateBackgroundColor
    }//UIHandler
}//RX

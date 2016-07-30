using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace RX {
    class UIHandler : MonoBehaviour {
        public Color[] backgroundColors; 
        public float backgroundScrollSpeedPerFrame = 0.1f;
        public bool scrollLeft = true; 
        public bool scrollUp = true;
        public MeshRenderer background; 

        public void Update() {
            IterateBackground(); 
        }//Update

        public void IterateBackground() {
            //Use Lerp between a handful of predefined colors
            background.material.mainTextureOffset += new Vector2(
                scrollLeft ? backgroundScrollSpeedPerFrame : -backgroundScrollSpeedPerFrame, 
                scrollUp ? -backgroundScrollSpeedPerFrame : backgroundScrollSpeedPerFrame);
        }//IterateBackgroundColor
    }//UIHandler
}//RX

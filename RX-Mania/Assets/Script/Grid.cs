using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;
using UnityEngine;
using UnityEngine.UI; 

namespace RX {
    public class Grid : MonoBehaviour {
        public float distancePerPill = 62.5f; 
        public List<GridItem> pillGrid;

        private void Awake() {
            pillGrid = new List<GridItem>(); 
            FillGrid(); 
        }//Awake

        private void FillGrid() {
            for (int i = 0; i < 8; ++i) {
                for (int j = 0; j < 8; ++j) {
                    Pill p = Top.pillManager.GetUnusedPill();
                    p.SetPosition(i, j); 
                    p.transform.localPosition = new Vector3((float)(i * distancePerPill), (float)(j * -distancePerPill));
                    p.transform.SetParent(this.transform, false);
                    pillGrid.Add(p);
                }
            }
        }//FillGrid

        public void UpdatePills() {
            //Update the positions of pills and tell them to move appropriately. 
        }//UpdatePills
    }//Grid
}//RX

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
        public List<List<GridItem>> pillGrid;

        private const int PILL_PER_ROW = 8;
        private const int PILL_ROWS = 10; 

        private void Awake() {
            pillGrid = new List<List<GridItem>>();
            for (int i = 0; i < PILL_ROWS; ++i) {
                pillGrid.Add(new List<GridItem>());
            }
            FillGrid(); 
        }//Awake

        private void FillGrid() {
            for (int i = 0; i < PILL_ROWS; ++i) {
                for (int j = 0; j < PILL_PER_ROW; ++j) {
                    GridItem p = Top.pillManager.GetUnusedPill();
                    p.SetPosition(i, j, new Vector3((float)(i * distancePerPill), (float)(j * distancePerPill)-(distancePerPill*(PILL_PER_ROW-1))), true);
                    p.transform.SetParent(this.transform, false);
                    p.isEmpty = false; 
                    pillGrid[i].Add(p);
                }
            }
        }//FillGrid

        public void UpdatePills() {
            //Update the positions of pills and tell them to move appropriately. 
            for (int i = 0; i < pillGrid.Count; ++i) {
                for (int j = 0; j < pillGrid[i].Count; ++j) {
                    if (pillGrid[i][j].isEmpty) {
                        pillGrid[i].RemoveAt(j);
                        --j;
                    }
                }
            }

            //Set all pills to their new positions
            for (int i = 0; i < pillGrid.Count; ++i) {
                for (int j = 0; j < pillGrid[i].Count; ++j) {
                    GridItem p = pillGrid[i][j];
                    if (!p.isEmpty) {
                        p.SetPosition(i,j,new Vector3((float)(i * distancePerPill), (float)(j * distancePerPill)-(distancePerPill*(PILL_PER_ROW-1))));
                    } else {
                        pillGrid[i].Remove(p);
                    }
                }
            }

            for (int i = 0; i < PILL_ROWS; ++i) {
                for (int j = pillGrid[i].Count; j < PILL_PER_ROW; ++j) {
                    GridItem p = Top.pillManager.GetUnusedPill();
                    p.SetPosition(i, j, new Vector3((float)(i * distancePerPill), distancePerPill), true);
                    p.SetPosition(i, j, new Vector3((float)(i * distancePerPill), (float)(j * distancePerPill)-(distancePerPill*(PILL_PER_ROW-1))));
                    p.isEmpty = false;
                    pillGrid[i].Add(p);                    
                }
            }
        }//UpdatePills

        public bool CheckGridHasPossibility() {
            return false;
        }//CheckGridHasPossibility
    }//Grid
}//RX

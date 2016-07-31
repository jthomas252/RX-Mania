using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine; 

namespace RX {
    public class GameHandler:MonoBehaviour {
        private float currentTime = 0f;
        private int randomSeed; 
        private GameUI gameUI; 
        private Grid grid;

        private List<Pill> selectedPills;
        private bool _selectionDragActive;
        public bool selectionDragActive {
            get {
                return _selectionDragActive; 
            }
        }

        private int health;
        private const int HEALTH_MAXIMUM = 500; 

        private Disease disease; 
        private int _level;
        public int level {
            get {
                return _level; 
            }
        }

        //Constants
        private const float TIME_INC_PER_LEVEL = 0.025f; 
        private const float PLACEBO_SPAWN_RATE = 0.01f; 
        private const int MINIMUM_COMBO_SIZE = 3; 
        private const float COMBO_MULTIPLIER_PER = 0.25f;

        public void Init() {
            selectedPills = new List<Pill>();
            gameUI = FindObjectOfType<GameUI>(); 
            
            //For easier debugging
            if (gameUI.gameObject.activeInHierarchy) {
                StartNewGame(); 
            }
        }//Init

        public void Close() {
            //Release any needed variables here
        }//Close

        public void StartNewGame() {
            randomSeed = (int)System.DateTime.Now.Ticks;
            UnityEngine.Random.InitState(randomSeed);
            currentTime = 0; 
            Top.audioHandler.PlayMusic("MainLoop");

            health=HEALTH_MAXIMUM; 
            gameUI.UpdateHealthBar(health/HEALTH_MAXIMUM);
        }//StartNewGame

        private void Update() {
            currentTime += Time.deltaTime;
        }//Update

        public void BeginSelectDrag() {
            _selectionDragActive = true; 
        }//BeginSelectDrag

        public void CancelSelectDrag() {
            _selectionDragActive = false;
            for (int i = 0; i < selectedPills.Count; ++i) {
                selectedPills[i].Deselect();
            }
            selectedPills.Clear();
        }//CancelSelectDrag

        public void EndSelectDrag() {
            _selectionDragActive = false; 
            EvaluateCombo();
            for (int i = 0; i < selectedPills.Count; ++i) {
                selectedPills[i].Deselect();
            }
            selectedPills.Clear();
        }//EndSelectDrag

        public bool AddPill(Pill p) {
            if (selectedPills.Count > 0) {
                //Check that there's a type match or Placebo
                bool isAdjacent = false;
                for (int i = 0; i < selectedPills.Count; ++i) {
                    if (selectedPills[i].type != p.type && selectedPills[i].type != Pill.PillType.PillPlacebo) {
                        return false;
                    }

                    if ((selectedPills[i].gridX == (p.gridX - 1) || selectedPills[i].gridX == (p.gridX + 1) || selectedPills[i].gridX == p.gridX) &&
                        (selectedPills[i].gridY == (p.gridY - 1) || selectedPills[i].gridY == (p.gridY + 1) || selectedPills[i].gridY == p.gridY)) {
                        isAdjacent = true; 
                    }
                }

                if (!isAdjacent) {
                    return false;
                }
            }
            
            if (!selectedPills.Contains(p)) {
                selectedPills.Add(p);
                Top.audioHandler.PlaySound("Pick");
                return true;
            } else {
                return false; 
            }
        }//AddPill

        public void EnterPanicMode() {
            //NYI -- switch background color, music
        }//EnterPanicMode

        public void ExitPanicMode() {
            //NYI
        }//ExitPanicMode

        public void EvaluateCombo() {
            if (selectedPills.Count >= MINIMUM_COMBO_SIZE) {
                for (int i = 0; i < selectedPills.Count; ++i) {
                    selectedPills[i].Use();
                }
                grid.UpdatePills();
            }
        }//EvaluateCombo
    }//GameHandler
}//RX
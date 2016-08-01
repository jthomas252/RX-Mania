using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine; 

namespace RX {
    public class GameHandler:MonoBehaviour {
        private float currentTime = 0f;
        private float lastTime = 0f; 
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
        private Pill lastPill; 
        private float health;

        private Disease disease; 
        private int _level = 1;
        public int level {
            get {
                return _level; 
            }
        }

        private int _score = 0;
        public int score {
            get {
                return _score; 
            }
        }

        private bool _paused;
        public bool paused {
            get {
                return _paused; 
            }
        }

        private bool _active;
        public bool active {
            get {
                return _active; 
            }
        }

        private float timeModifier = 0f; 
        private bool panicMode = false; 

        //Constants
        private const int HEALTH_MAXIMUM = 150; 
        private const int LEVEL_MAX = 50; 
        private const float TIME_INC_PER_LEVEL = 0.04f; 
        private const float PLACEBO_SPAWN_RATE = 0.01f; 
        private const int MINIMUM_COMBO_SIZE = 3; 
        private const float COMBO_MULTIPLIER_PER_PILL = 0.5f;
        private const float SCORE_MULTIPLIER_PER_LEVEL = 0.2f; 

        private const int DISEASE_PILL_NUM = 8;
        private const float DISEASE_PILL_MULT_PER_LEVEL = 0.75f;

        private const int HEALTH_PER_PILL = 1;
        private const float HEALTH_MULT_PILL_COMBO = 1.75f;
        private const float HEALTH_DEC_PER_SEC = 4f; 

        private const int SCORE_PER_DISEASE = 250;
        private const float SCORE_DISEASE_LEVEL_MULT = 0.1f; 
        private const int SCORE_PER_PILL = 10;
        private const float SCORE_PILL_MULT = 0.5f; 
        private const int SCORE_PER_VIRUS = 400; 
        private const float PANIC_THRESHOLD = 0.25f; 

        public void Init() {
            selectedPills = new List<Pill>();
            gameUI = FindObjectOfType<GameUI>();
            grid = FindObjectOfType<Grid>();
            disease = new Disease();

            //For easier debugging
            if (gameUI && gameUI.gameObject.activeInHierarchy) {
                StartNewGame(); 
            }
        }//Init

        public void Close() {
            _active = false; 
        }//Close

        public void StartNewGame(int startingLevel = 1) {
            _active = true;
            _paused = false;
            _level = startingLevel;
            gameUI = FindObjectOfType<GameUI>();
            grid = FindObjectOfType<Grid>();

            randomSeed = (int)System.DateTime.Now.Ticks;
            UnityEngine.Random.InitState(randomSeed);
            currentTime = 0; 
            lastTime = 0;
            Top.audioHandler.PlayMusic("MainLoop");
            disease.Spawn(
                0,
                (int)(DISEASE_PILL_NUM*(1+(_level*DISEASE_PILL_MULT_PER_LEVEL)))
            );

            health=HEALTH_MAXIMUM; 
            gameUI.UpdateHealthBar(health/HEALTH_MAXIMUM);
            gameUI.UpdateDiseaseText(disease); 
            gameUI.UpdateScoreText(_score); 
            gameUI.UpdateLevelText(_level);
        }//StartNewGame

        private void Update() {
            if (!paused && _active) {
                currentTime += (Time.deltaTime * (1f + (_level * TIME_INC_PER_LEVEL) + timeModifier));
                if ((Input.GetKeyDown(KeyCode.Escape) || Input.GetMouseButtonDown(1)) && _selectionDragActive) {
                    CancelSelectDrag();
                }
                health -= (((currentTime - lastTime)) * HEALTH_DEC_PER_SEC);
                gameUI.UpdateHealthBar(health / HEALTH_MAXIMUM);
                lastTime = currentTime;

                if (health <= 0) {
                    _paused = true; 
                    _active = false;
                    gameUI.ShowGameOver(_score); 
                } else if ((health/HEALTH_MAXIMUM) <= PANIC_THRESHOLD && !panicMode) {
                    EnterPanicMode();
                } else if (panicMode && (health/HEALTH_MAXIMUM) > PANIC_THRESHOLD) {
                    ExitPanicMode();
                }
            }
        }//Update

        public void Pause() {
            _paused = true; 
        }//Pause

        public void Unpause() {
            _paused = false; 
        }//Unpause

        public void BeginSelectDrag() {
            _selectionDragActive = true; 
        }//BeginSelectDrag

        public void CancelSelectDrag() {
            Top.audioHandler.PlaySound("PickAlt");
            _selectionDragActive = false;
            for (int i = 0; i < selectedPills.Count; ++i) {
                selectedPills[i].Deselect();
            }
            selectedPills.Clear();
            lastPill = null;
        }//CancelSelectDrag

        public void EndSelectDrag() {
            _selectionDragActive = false; 
            EvaluateCombo();
            for (int i = 0; i < selectedPills.Count; ++i) {
                selectedPills[i].Deselect();
            }
            selectedPills.Clear();
            lastPill = null; 
        }//EndSelectDrag

        public bool AddPill(Pill p) {
            if (lastPill) {
                //Check if the player was trying to reverse their movement
                if (selectedPills.Count > 1 && p == selectedPills[selectedPills.Count - 2]) {
                    selectedPills[selectedPills.Count-1].Deselect();
                    selectedPills.Remove(selectedPills[selectedPills.Count-1]);
                }

                //Check that there's a type match or Placebo
                if (lastPill.type != p.type && 
                    p.type != Pill.PillType.PillPlacebo && 
                    lastPill.type != Pill.PillType.PillPlacebo) {
                    return false;
                }

                //Check if adjacent
                if (!(lastPill.gridX == (p.gridX - 1) || 
                    lastPill.gridX == (p.gridX + 1) || 
                    lastPill.gridX == p.gridX) ||
                    !(lastPill.gridY == (p.gridY - 1) || 
                    lastPill.gridY == (p.gridY + 1) || 
                    lastPill.gridY == p.gridY)) {
                    return false; 
                }
            }
            
            if (!selectedPills.Contains(p)) {
                selectedPills.Add(p);
                Top.audioHandler.PlaySound("Pick");
                lastPill = p; 
                return true;
            } else {
                return false; 
            }
        }//AddPill

        public void EnterPanicMode() {
            Top.audioHandler.PlayMusic("PanicLoop", true);
            Top.uiHandler.usePanicColors = true; 
            Top.uiHandler.timeBetweenColor = 0.33f;
            panicMode = true;
        }//EnterPanicMode

        public void ExitPanicMode() {
            Top.audioHandler.PlayMusic("MainLoop", true);
            Top.uiHandler.usePanicColors = false;
            Top.uiHandler.timeBetweenColor = 8f;
            panicMode = false;
        }//ExitPanicMode

        private void IncreaseScore(int amount) {
            _score += (int)(amount*(1f+(_level*SCORE_MULTIPLIER_PER_LEVEL)));
            gameUI.UpdateScoreText(_score);
        }//IncreaseScore

        private void IncrementLevel() {
            if (_level >= LEVEL_MAX) {
                IncreaseScore(1000);
            } else {
                ++_level; 
            }
            gameUI.UpdateLevelText(_level); 
        }//IncrementLevel

        private void IncrementHealth(int hp) {
            health += hp; 
            health = health > HEALTH_MAXIMUM ? HEALTH_MAXIMUM : health; 
            gameUI.UpdateHealthBar(health/HEALTH_MAXIMUM);
        }//IncrementHealth

        public void EvaluateCombo() {
            if (selectedPills.Count >= MINIMUM_COMBO_SIZE) {
                for (int i = 0; i < selectedPills.Count; ++i) {
                    selectedPills[i].Use();
                }
                int pillCountAdj = selectedPills.Count - MINIMUM_COMBO_SIZE; 
                Pill.PillType type = selectedPills[0].type; 
                float pillStrength = (((pillCountAdj) * COMBO_MULTIPLIER_PER_PILL) + 1) * selectedPills.Count;
                IncrementHealth((int)((((pillCountAdj) * HEALTH_PER_PILL) * HEALTH_MULT_PILL_COMBO) + 1) * selectedPills.Count);
                IncreaseScore((int)(SCORE_PER_PILL*(1+(SCORE_PILL_MULT*pillCountAdj))));

                if (disease.ApplyEffect(type, pillStrength)) {
                    //Generate new disease, increment level
                    Top.audioHandler.PlaySound("LevelUp",1f);
                    IncreaseScore((int)(SCORE_PER_DISEASE*(1f+(_level*SCORE_DISEASE_LEVEL_MULT))));
                    IncrementLevel();
                    disease.Spawn(
                        0,
                        (int)(DISEASE_PILL_NUM * (1 + (_level * DISEASE_PILL_MULT_PER_LEVEL)))
                    );
                }
                gameUI.UpdateDiseaseText(disease); 

                //Apply to score here
                Top.audioHandler.PlaySound("Combo");
                grid.UpdatePills();
            } else {
                Top.audioHandler.PlaySound("Error");
            }
        }//EvaluateCombo
    }//GameHandler
}//RX
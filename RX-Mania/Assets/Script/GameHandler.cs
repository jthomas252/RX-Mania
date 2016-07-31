using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine; 

namespace RX {
    public class GameHandler:MonoBehaviour {
        private float currentTime = 0f;
        private int randomSeed; 
        private List<Pill> selectedPills;

        public void Init() {

        }//Init

        public void StartNewGame() {
            randomSeed = (int)System.DateTime.Now.Ticks;
            UnityEngine.Random.seed = randomSeed; 
            currentTime = 0; 
        }//StartNewGame

        private void Update() {
            currentTime += Time.deltaTime;
        }//Update

        public void AddPill(Pill p) {

        }//AddPill

        public void EvaluateCombo() {

        }//EvaluateCombo
    }//GameHandler
}//RX

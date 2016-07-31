using UnityEngine;
using System.Collections;
using System.Collections.Generic; 

namespace RX {
    public class AudioHandler : MonoBehaviour {
        [System.Serializable]
        public struct SoundEffect {
            public string name; 
            public AudioClip Sound; 
        }//SoundInstance
        public SoundEffect[] soundList;

        [System.Serializable]
        public struct MusicTrack {
            public string name;
            public AudioClip Track; 
        }//MusicTrack
        public MusicTrack[] musicList;

        private Dictionary<string,AudioClip> sounds; 
        private AudioSource musicPlayer;
        private AudioSource[] soundPlayers; 

        public void Awake() {
            sounds = new Dictionary<string,AudioClip>(); 
        }//Awake
    }//AudioHandler
}//RX
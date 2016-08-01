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

        private Dictionary<string,int> soundDict; 
        private Dictionary<string,int> musicDict;
        private AudioSource audioPlayer;

        public void Init() {
            soundDict = new Dictionary<string,int>();
            musicDict = new Dictionary<string,int>();

            for (int i = 0; i < soundList.Length; ++i) {
                soundDict.Add(soundList[i].name,i); 
            }

            for (int i = 0; i < musicList.Length; ++i) {
                musicDict.Add(musicList[i].name, i); 
            }

            audioPlayer = GetComponent<AudioSource>();
        }//Awake

        public void PlaySound(string sound, float volume = 3.25f) {
            if (soundDict.ContainsKey(sound)) {
                audioPlayer.PlayOneShot(soundList[soundDict[sound]].Sound, volume);
            }
        }//PlaySound

        public void PlayMusic(string track, bool keepPosition = false) {
            if (musicDict.ContainsKey(track)) {
                float pos = audioPlayer.time; 
                audioPlayer.time = 0; 
                audioPlayer.clip = musicList[musicDict[track]].Track; 
                audioPlayer.Play();
                if (keepPosition) audioPlayer.time = pos; 
            }
        }//PlayMusic

        public void PauseMusic() {
            audioPlayer.Pause();
        }//PauseMusic

        public void ResumeMusic() {
            audioPlayer.UnPause(); 
        }//ResumeMusic
    }//AudioHandler
}//RX
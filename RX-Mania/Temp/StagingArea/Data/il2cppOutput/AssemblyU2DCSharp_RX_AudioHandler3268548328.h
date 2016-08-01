#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RX.AudioHandler/SoundEffect[]
struct SoundEffectU5BU5D_t3081000310;
// RX.AudioHandler/MusicTrack[]
struct MusicTrackU5BU5D_t3526830256;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.AudioHandler
struct  AudioHandler_t3268548328  : public MonoBehaviour_t1158329972
{
public:
	// RX.AudioHandler/SoundEffect[] RX.AudioHandler::soundList
	SoundEffectU5BU5D_t3081000310* ___soundList_2;
	// RX.AudioHandler/MusicTrack[] RX.AudioHandler::musicList
	MusicTrackU5BU5D_t3526830256* ___musicList_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> RX.AudioHandler::soundDict
	Dictionary_2_t3986656710 * ___soundDict_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> RX.AudioHandler::musicDict
	Dictionary_2_t3986656710 * ___musicDict_5;
	// UnityEngine.AudioSource RX.AudioHandler::audioPlayer
	AudioSource_t1135106623 * ___audioPlayer_6;

public:
	inline static int32_t get_offset_of_soundList_2() { return static_cast<int32_t>(offsetof(AudioHandler_t3268548328, ___soundList_2)); }
	inline SoundEffectU5BU5D_t3081000310* get_soundList_2() const { return ___soundList_2; }
	inline SoundEffectU5BU5D_t3081000310** get_address_of_soundList_2() { return &___soundList_2; }
	inline void set_soundList_2(SoundEffectU5BU5D_t3081000310* value)
	{
		___soundList_2 = value;
		Il2CppCodeGenWriteBarrier(&___soundList_2, value);
	}

	inline static int32_t get_offset_of_musicList_3() { return static_cast<int32_t>(offsetof(AudioHandler_t3268548328, ___musicList_3)); }
	inline MusicTrackU5BU5D_t3526830256* get_musicList_3() const { return ___musicList_3; }
	inline MusicTrackU5BU5D_t3526830256** get_address_of_musicList_3() { return &___musicList_3; }
	inline void set_musicList_3(MusicTrackU5BU5D_t3526830256* value)
	{
		___musicList_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicList_3, value);
	}

	inline static int32_t get_offset_of_soundDict_4() { return static_cast<int32_t>(offsetof(AudioHandler_t3268548328, ___soundDict_4)); }
	inline Dictionary_2_t3986656710 * get_soundDict_4() const { return ___soundDict_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_soundDict_4() { return &___soundDict_4; }
	inline void set_soundDict_4(Dictionary_2_t3986656710 * value)
	{
		___soundDict_4 = value;
		Il2CppCodeGenWriteBarrier(&___soundDict_4, value);
	}

	inline static int32_t get_offset_of_musicDict_5() { return static_cast<int32_t>(offsetof(AudioHandler_t3268548328, ___musicDict_5)); }
	inline Dictionary_2_t3986656710 * get_musicDict_5() const { return ___musicDict_5; }
	inline Dictionary_2_t3986656710 ** get_address_of_musicDict_5() { return &___musicDict_5; }
	inline void set_musicDict_5(Dictionary_2_t3986656710 * value)
	{
		___musicDict_5 = value;
		Il2CppCodeGenWriteBarrier(&___musicDict_5, value);
	}

	inline static int32_t get_offset_of_audioPlayer_6() { return static_cast<int32_t>(offsetof(AudioHandler_t3268548328, ___audioPlayer_6)); }
	inline AudioSource_t1135106623 * get_audioPlayer_6() const { return ___audioPlayer_6; }
	inline AudioSource_t1135106623 ** get_address_of_audioPlayer_6() { return &___audioPlayer_6; }
	inline void set_audioPlayer_6(AudioSource_t1135106623 * value)
	{
		___audioPlayer_6 = value;
		Il2CppCodeGenWriteBarrier(&___audioPlayer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

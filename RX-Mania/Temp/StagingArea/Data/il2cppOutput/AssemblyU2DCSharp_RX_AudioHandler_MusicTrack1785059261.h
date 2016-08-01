#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.AudioHandler/MusicTrack
struct  MusicTrack_t1785059261 
{
public:
	// System.String RX.AudioHandler/MusicTrack::name
	String_t* ___name_0;
	// UnityEngine.AudioClip RX.AudioHandler/MusicTrack::Track
	AudioClip_t1932558630 * ___Track_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MusicTrack_t1785059261, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_Track_1() { return static_cast<int32_t>(offsetof(MusicTrack_t1785059261, ___Track_1)); }
	inline AudioClip_t1932558630 * get_Track_1() const { return ___Track_1; }
	inline AudioClip_t1932558630 ** get_address_of_Track_1() { return &___Track_1; }
	inline void set_Track_1(AudioClip_t1932558630 * value)
	{
		___Track_1 = value;
		Il2CppCodeGenWriteBarrier(&___Track_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: RX.AudioHandler/MusicTrack
struct MusicTrack_t1785059261_marshaled_pinvoke
{
	char* ___name_0;
	AudioClip_t1932558630 * ___Track_1;
};
// Native definition for marshalling of: RX.AudioHandler/MusicTrack
struct MusicTrack_t1785059261_marshaled_com
{
	Il2CppChar* ___name_0;
	AudioClip_t1932558630 * ___Track_1;
};

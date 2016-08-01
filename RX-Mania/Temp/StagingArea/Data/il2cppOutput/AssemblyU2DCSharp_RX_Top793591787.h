#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RX.GameHandler
struct GameHandler_t1894465376;
// RX.PillManager
struct PillManager_t335090404;
// RX.AudioHandler
struct AudioHandler_t3268548328;
// RX.UIHandler
struct UIHandler_t1120912888;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.Top
struct  Top_t793591787  : public Il2CppObject
{
public:

public:
};

struct Top_t793591787_StaticFields
{
public:
	// RX.GameHandler RX.Top::gameHandler
	GameHandler_t1894465376 * ___gameHandler_0;
	// RX.PillManager RX.Top::pillManager
	PillManager_t335090404 * ___pillManager_1;
	// RX.AudioHandler RX.Top::audioHandler
	AudioHandler_t3268548328 * ___audioHandler_2;
	// RX.UIHandler RX.Top::uiHandler
	UIHandler_t1120912888 * ___uiHandler_3;

public:
	inline static int32_t get_offset_of_gameHandler_0() { return static_cast<int32_t>(offsetof(Top_t793591787_StaticFields, ___gameHandler_0)); }
	inline GameHandler_t1894465376 * get_gameHandler_0() const { return ___gameHandler_0; }
	inline GameHandler_t1894465376 ** get_address_of_gameHandler_0() { return &___gameHandler_0; }
	inline void set_gameHandler_0(GameHandler_t1894465376 * value)
	{
		___gameHandler_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameHandler_0, value);
	}

	inline static int32_t get_offset_of_pillManager_1() { return static_cast<int32_t>(offsetof(Top_t793591787_StaticFields, ___pillManager_1)); }
	inline PillManager_t335090404 * get_pillManager_1() const { return ___pillManager_1; }
	inline PillManager_t335090404 ** get_address_of_pillManager_1() { return &___pillManager_1; }
	inline void set_pillManager_1(PillManager_t335090404 * value)
	{
		___pillManager_1 = value;
		Il2CppCodeGenWriteBarrier(&___pillManager_1, value);
	}

	inline static int32_t get_offset_of_audioHandler_2() { return static_cast<int32_t>(offsetof(Top_t793591787_StaticFields, ___audioHandler_2)); }
	inline AudioHandler_t3268548328 * get_audioHandler_2() const { return ___audioHandler_2; }
	inline AudioHandler_t3268548328 ** get_address_of_audioHandler_2() { return &___audioHandler_2; }
	inline void set_audioHandler_2(AudioHandler_t3268548328 * value)
	{
		___audioHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioHandler_2, value);
	}

	inline static int32_t get_offset_of_uiHandler_3() { return static_cast<int32_t>(offsetof(Top_t793591787_StaticFields, ___uiHandler_3)); }
	inline UIHandler_t1120912888 * get_uiHandler_3() const { return ___uiHandler_3; }
	inline UIHandler_t1120912888 ** get_address_of_uiHandler_3() { return &___uiHandler_3; }
	inline void set_uiHandler_3(UIHandler_t1120912888 * value)
	{
		___uiHandler_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiHandler_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.Pause
struct  Pause_t2495578996  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform RX.Pause::game
	RectTransform_t3349966182 * ___game_2;
	// UnityEngine.RectTransform RX.Pause::main
	RectTransform_t3349966182 * ___main_3;

public:
	inline static int32_t get_offset_of_game_2() { return static_cast<int32_t>(offsetof(Pause_t2495578996, ___game_2)); }
	inline RectTransform_t3349966182 * get_game_2() const { return ___game_2; }
	inline RectTransform_t3349966182 ** get_address_of_game_2() { return &___game_2; }
	inline void set_game_2(RectTransform_t3349966182 * value)
	{
		___game_2 = value;
		Il2CppCodeGenWriteBarrier(&___game_2, value);
	}

	inline static int32_t get_offset_of_main_3() { return static_cast<int32_t>(offsetof(Pause_t2495578996, ___main_3)); }
	inline RectTransform_t3349966182 * get_main_3() const { return ___main_3; }
	inline RectTransform_t3349966182 ** get_address_of_main_3() { return &___main_3; }
	inline void set_main_3(RectTransform_t3349966182 * value)
	{
		___main_3 = value;
		Il2CppCodeGenWriteBarrier(&___main_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

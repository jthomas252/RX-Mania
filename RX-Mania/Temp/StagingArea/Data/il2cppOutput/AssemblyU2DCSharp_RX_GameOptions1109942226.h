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
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.GameOptions
struct  GameOptions_t1109942226  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform RX.GameOptions::game
	RectTransform_t3349966182 * ___game_2;
	// UnityEngine.RectTransform RX.GameOptions::mainMenu
	RectTransform_t3349966182 * ___mainMenu_3;
	// UnityEngine.UI.Text RX.GameOptions::levelText
	Text_t356221433 * ___levelText_4;
	// System.Int32 RX.GameOptions::levelValue
	int32_t ___levelValue_5;

public:
	inline static int32_t get_offset_of_game_2() { return static_cast<int32_t>(offsetof(GameOptions_t1109942226, ___game_2)); }
	inline RectTransform_t3349966182 * get_game_2() const { return ___game_2; }
	inline RectTransform_t3349966182 ** get_address_of_game_2() { return &___game_2; }
	inline void set_game_2(RectTransform_t3349966182 * value)
	{
		___game_2 = value;
		Il2CppCodeGenWriteBarrier(&___game_2, value);
	}

	inline static int32_t get_offset_of_mainMenu_3() { return static_cast<int32_t>(offsetof(GameOptions_t1109942226, ___mainMenu_3)); }
	inline RectTransform_t3349966182 * get_mainMenu_3() const { return ___mainMenu_3; }
	inline RectTransform_t3349966182 ** get_address_of_mainMenu_3() { return &___mainMenu_3; }
	inline void set_mainMenu_3(RectTransform_t3349966182 * value)
	{
		___mainMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_3, value);
	}

	inline static int32_t get_offset_of_levelText_4() { return static_cast<int32_t>(offsetof(GameOptions_t1109942226, ___levelText_4)); }
	inline Text_t356221433 * get_levelText_4() const { return ___levelText_4; }
	inline Text_t356221433 ** get_address_of_levelText_4() { return &___levelText_4; }
	inline void set_levelText_4(Text_t356221433 * value)
	{
		___levelText_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_4, value);
	}

	inline static int32_t get_offset_of_levelValue_5() { return static_cast<int32_t>(offsetof(GameOptions_t1109942226, ___levelValue_5)); }
	inline int32_t get_levelValue_5() const { return ___levelValue_5; }
	inline int32_t* get_address_of_levelValue_5() { return &___levelValue_5; }
	inline void set_levelValue_5(int32_t value)
	{
		___levelValue_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

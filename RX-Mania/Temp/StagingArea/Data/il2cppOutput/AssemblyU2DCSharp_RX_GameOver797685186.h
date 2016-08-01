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

// RX.GameOver
struct  GameOver_t797685186  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform RX.GameOver::game
	RectTransform_t3349966182 * ___game_2;
	// UnityEngine.RectTransform RX.GameOver::mainMenu
	RectTransform_t3349966182 * ___mainMenu_3;
	// UnityEngine.UI.Text RX.GameOver::scoreText
	Text_t356221433 * ___scoreText_4;

public:
	inline static int32_t get_offset_of_game_2() { return static_cast<int32_t>(offsetof(GameOver_t797685186, ___game_2)); }
	inline RectTransform_t3349966182 * get_game_2() const { return ___game_2; }
	inline RectTransform_t3349966182 ** get_address_of_game_2() { return &___game_2; }
	inline void set_game_2(RectTransform_t3349966182 * value)
	{
		___game_2 = value;
		Il2CppCodeGenWriteBarrier(&___game_2, value);
	}

	inline static int32_t get_offset_of_mainMenu_3() { return static_cast<int32_t>(offsetof(GameOver_t797685186, ___mainMenu_3)); }
	inline RectTransform_t3349966182 * get_mainMenu_3() const { return ___mainMenu_3; }
	inline RectTransform_t3349966182 ** get_address_of_mainMenu_3() { return &___mainMenu_3; }
	inline void set_mainMenu_3(RectTransform_t3349966182 * value)
	{
		___mainMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_3, value);
	}

	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(GameOver_t797685186, ___scoreText_4)); }
	inline Text_t356221433 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t356221433 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t356221433 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

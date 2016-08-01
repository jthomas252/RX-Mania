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
// RX.GameOver
struct GameOver_t797685186;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.GameUI
struct  GameUI_t1191293910  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform RX.GameUI::pauseScreen
	RectTransform_t3349966182 * ___pauseScreen_2;
	// RX.GameOver RX.GameUI::gameOver
	GameOver_t797685186 * ___gameOver_3;
	// UnityEngine.UI.Image RX.GameUI::healthBar
	Image_t2042527209 * ___healthBar_4;
	// UnityEngine.UI.Text RX.GameUI::resistanceText
	Text_t356221433 * ___resistanceText_5;
	// UnityEngine.UI.Text RX.GameUI::levelText
	Text_t356221433 * ___levelText_6;
	// UnityEngine.UI.Text RX.GameUI::scoreText
	Text_t356221433 * ___scoreText_7;
	// UnityEngine.UI.Text RX.GameUI::diseaseNameText
	Text_t356221433 * ___diseaseNameText_8;

public:
	inline static int32_t get_offset_of_pauseScreen_2() { return static_cast<int32_t>(offsetof(GameUI_t1191293910, ___pauseScreen_2)); }
	inline RectTransform_t3349966182 * get_pauseScreen_2() const { return ___pauseScreen_2; }
	inline RectTransform_t3349966182 ** get_address_of_pauseScreen_2() { return &___pauseScreen_2; }
	inline void set_pauseScreen_2(RectTransform_t3349966182 * value)
	{
		___pauseScreen_2 = value;
		Il2CppCodeGenWriteBarrier(&___pauseScreen_2, value);
	}

	inline static int32_t get_offset_of_gameOver_3() { return static_cast<int32_t>(offsetof(GameUI_t1191293910, ___gameOver_3)); }
	inline GameOver_t797685186 * get_gameOver_3() const { return ___gameOver_3; }
	inline GameOver_t797685186 ** get_address_of_gameOver_3() { return &___gameOver_3; }
	inline void set_gameOver_3(GameOver_t797685186 * value)
	{
		___gameOver_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameOver_3, value);
	}

	inline static int32_t get_offset_of_healthBar_4() { return static_cast<int32_t>(offsetof(GameUI_t1191293910, ___healthBar_4)); }
	inline Image_t2042527209 * get_healthBar_4() const { return ___healthBar_4; }
	inline Image_t2042527209 ** get_address_of_healthBar_4() { return &___healthBar_4; }
	inline void set_healthBar_4(Image_t2042527209 * value)
	{
		___healthBar_4 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_4, value);
	}

	inline static int32_t get_offset_of_resistanceText_5() { return static_cast<int32_t>(offsetof(GameUI_t1191293910, ___resistanceText_5)); }
	inline Text_t356221433 * get_resistanceText_5() const { return ___resistanceText_5; }
	inline Text_t356221433 ** get_address_of_resistanceText_5() { return &___resistanceText_5; }
	inline void set_resistanceText_5(Text_t356221433 * value)
	{
		___resistanceText_5 = value;
		Il2CppCodeGenWriteBarrier(&___resistanceText_5, value);
	}

	inline static int32_t get_offset_of_levelText_6() { return static_cast<int32_t>(offsetof(GameUI_t1191293910, ___levelText_6)); }
	inline Text_t356221433 * get_levelText_6() const { return ___levelText_6; }
	inline Text_t356221433 ** get_address_of_levelText_6() { return &___levelText_6; }
	inline void set_levelText_6(Text_t356221433 * value)
	{
		___levelText_6 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_6, value);
	}

	inline static int32_t get_offset_of_scoreText_7() { return static_cast<int32_t>(offsetof(GameUI_t1191293910, ___scoreText_7)); }
	inline Text_t356221433 * get_scoreText_7() const { return ___scoreText_7; }
	inline Text_t356221433 ** get_address_of_scoreText_7() { return &___scoreText_7; }
	inline void set_scoreText_7(Text_t356221433 * value)
	{
		___scoreText_7 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_7, value);
	}

	inline static int32_t get_offset_of_diseaseNameText_8() { return static_cast<int32_t>(offsetof(GameUI_t1191293910, ___diseaseNameText_8)); }
	inline Text_t356221433 * get_diseaseNameText_8() const { return ___diseaseNameText_8; }
	inline Text_t356221433 ** get_address_of_diseaseNameText_8() { return &___diseaseNameText_8; }
	inline void set_diseaseNameText_8(Text_t356221433 * value)
	{
		___diseaseNameText_8 = value;
		Il2CppCodeGenWriteBarrier(&___diseaseNameText_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// RX.MainMenu
struct  MainMenu_t2651266464  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform RX.MainMenu::gameOptions
	RectTransform_t3349966182 * ___gameOptions_2;
	// UnityEngine.RectTransform RX.MainMenu::creditsMenu
	RectTransform_t3349966182 * ___creditsMenu_3;

public:
	inline static int32_t get_offset_of_gameOptions_2() { return static_cast<int32_t>(offsetof(MainMenu_t2651266464, ___gameOptions_2)); }
	inline RectTransform_t3349966182 * get_gameOptions_2() const { return ___gameOptions_2; }
	inline RectTransform_t3349966182 ** get_address_of_gameOptions_2() { return &___gameOptions_2; }
	inline void set_gameOptions_2(RectTransform_t3349966182 * value)
	{
		___gameOptions_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameOptions_2, value);
	}

	inline static int32_t get_offset_of_creditsMenu_3() { return static_cast<int32_t>(offsetof(MainMenu_t2651266464, ___creditsMenu_3)); }
	inline RectTransform_t3349966182 * get_creditsMenu_3() const { return ___creditsMenu_3; }
	inline RectTransform_t3349966182 ** get_address_of_creditsMenu_3() { return &___creditsMenu_3; }
	inline void set_creditsMenu_3(RectTransform_t3349966182 * value)
	{
		___creditsMenu_3 = value;
		Il2CppCodeGenWriteBarrier(&___creditsMenu_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

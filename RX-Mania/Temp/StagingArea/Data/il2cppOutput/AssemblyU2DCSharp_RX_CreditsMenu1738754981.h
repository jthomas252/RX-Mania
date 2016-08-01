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

// RX.CreditsMenu
struct  CreditsMenu_t1738754981  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform RX.CreditsMenu::mainMenu
	RectTransform_t3349966182 * ___mainMenu_2;

public:
	inline static int32_t get_offset_of_mainMenu_2() { return static_cast<int32_t>(offsetof(CreditsMenu_t1738754981, ___mainMenu_2)); }
	inline RectTransform_t3349966182 * get_mainMenu_2() const { return ___mainMenu_2; }
	inline RectTransform_t3349966182 ** get_address_of_mainMenu_2() { return &___mainMenu_2; }
	inline void set_mainMenu_2(RectTransform_t3349966182 * value)
	{
		___mainMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

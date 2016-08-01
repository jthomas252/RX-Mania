#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.UIHandler
struct  UIHandler_t1120912888  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RX.UIHandler::currentTime
	float ___currentTime_2;
	// UnityEngine.Color[] RX.UIHandler::backgroundColors
	ColorU5BU5D_t672350442* ___backgroundColors_3;
	// UnityEngine.Color[] RX.UIHandler::panicColors
	ColorU5BU5D_t672350442* ___panicColors_4;
	// System.Int32 RX.UIHandler::backgroundCurrent
	int32_t ___backgroundCurrent_5;
	// System.Int32 RX.UIHandler::backgroundNext
	int32_t ___backgroundNext_6;
	// System.Single RX.UIHandler::timeBetweenColor
	float ___timeBetweenColor_7;
	// System.Single RX.UIHandler::backgroundScrollSpeedPerFrame
	float ___backgroundScrollSpeedPerFrame_8;
	// System.Boolean RX.UIHandler::scrollLeft
	bool ___scrollLeft_9;
	// System.Boolean RX.UIHandler::scrollUp
	bool ___scrollUp_10;
	// UnityEngine.MeshRenderer RX.UIHandler::background
	MeshRenderer_t1268241104 * ___background_11;
	// System.Boolean RX.UIHandler::usePanicColors
	bool ___usePanicColors_12;

public:
	inline static int32_t get_offset_of_currentTime_2() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___currentTime_2)); }
	inline float get_currentTime_2() const { return ___currentTime_2; }
	inline float* get_address_of_currentTime_2() { return &___currentTime_2; }
	inline void set_currentTime_2(float value)
	{
		___currentTime_2 = value;
	}

	inline static int32_t get_offset_of_backgroundColors_3() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___backgroundColors_3)); }
	inline ColorU5BU5D_t672350442* get_backgroundColors_3() const { return ___backgroundColors_3; }
	inline ColorU5BU5D_t672350442** get_address_of_backgroundColors_3() { return &___backgroundColors_3; }
	inline void set_backgroundColors_3(ColorU5BU5D_t672350442* value)
	{
		___backgroundColors_3 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundColors_3, value);
	}

	inline static int32_t get_offset_of_panicColors_4() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___panicColors_4)); }
	inline ColorU5BU5D_t672350442* get_panicColors_4() const { return ___panicColors_4; }
	inline ColorU5BU5D_t672350442** get_address_of_panicColors_4() { return &___panicColors_4; }
	inline void set_panicColors_4(ColorU5BU5D_t672350442* value)
	{
		___panicColors_4 = value;
		Il2CppCodeGenWriteBarrier(&___panicColors_4, value);
	}

	inline static int32_t get_offset_of_backgroundCurrent_5() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___backgroundCurrent_5)); }
	inline int32_t get_backgroundCurrent_5() const { return ___backgroundCurrent_5; }
	inline int32_t* get_address_of_backgroundCurrent_5() { return &___backgroundCurrent_5; }
	inline void set_backgroundCurrent_5(int32_t value)
	{
		___backgroundCurrent_5 = value;
	}

	inline static int32_t get_offset_of_backgroundNext_6() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___backgroundNext_6)); }
	inline int32_t get_backgroundNext_6() const { return ___backgroundNext_6; }
	inline int32_t* get_address_of_backgroundNext_6() { return &___backgroundNext_6; }
	inline void set_backgroundNext_6(int32_t value)
	{
		___backgroundNext_6 = value;
	}

	inline static int32_t get_offset_of_timeBetweenColor_7() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___timeBetweenColor_7)); }
	inline float get_timeBetweenColor_7() const { return ___timeBetweenColor_7; }
	inline float* get_address_of_timeBetweenColor_7() { return &___timeBetweenColor_7; }
	inline void set_timeBetweenColor_7(float value)
	{
		___timeBetweenColor_7 = value;
	}

	inline static int32_t get_offset_of_backgroundScrollSpeedPerFrame_8() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___backgroundScrollSpeedPerFrame_8)); }
	inline float get_backgroundScrollSpeedPerFrame_8() const { return ___backgroundScrollSpeedPerFrame_8; }
	inline float* get_address_of_backgroundScrollSpeedPerFrame_8() { return &___backgroundScrollSpeedPerFrame_8; }
	inline void set_backgroundScrollSpeedPerFrame_8(float value)
	{
		___backgroundScrollSpeedPerFrame_8 = value;
	}

	inline static int32_t get_offset_of_scrollLeft_9() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___scrollLeft_9)); }
	inline bool get_scrollLeft_9() const { return ___scrollLeft_9; }
	inline bool* get_address_of_scrollLeft_9() { return &___scrollLeft_9; }
	inline void set_scrollLeft_9(bool value)
	{
		___scrollLeft_9 = value;
	}

	inline static int32_t get_offset_of_scrollUp_10() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___scrollUp_10)); }
	inline bool get_scrollUp_10() const { return ___scrollUp_10; }
	inline bool* get_address_of_scrollUp_10() { return &___scrollUp_10; }
	inline void set_scrollUp_10(bool value)
	{
		___scrollUp_10 = value;
	}

	inline static int32_t get_offset_of_background_11() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___background_11)); }
	inline MeshRenderer_t1268241104 * get_background_11() const { return ___background_11; }
	inline MeshRenderer_t1268241104 ** get_address_of_background_11() { return &___background_11; }
	inline void set_background_11(MeshRenderer_t1268241104 * value)
	{
		___background_11 = value;
		Il2CppCodeGenWriteBarrier(&___background_11, value);
	}

	inline static int32_t get_offset_of_usePanicColors_12() { return static_cast<int32_t>(offsetof(UIHandler_t1120912888, ___usePanicColors_12)); }
	inline bool get_usePanicColors_12() const { return ___usePanicColors_12; }
	inline bool* get_address_of_usePanicColors_12() { return &___usePanicColors_12; }
	inline void set_usePanicColors_12(bool value)
	{
		___usePanicColors_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

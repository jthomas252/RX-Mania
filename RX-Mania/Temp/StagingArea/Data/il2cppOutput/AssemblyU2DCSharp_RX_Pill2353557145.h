#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "AssemblyU2DCSharp_RX_GridItem1595402153.h"
#include "AssemblyU2DCSharp_RX_Pill_PillType606407649.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.Pill
struct  Pill_t2353557145  : public GridItem_t1595402153
{
public:
	// UnityEngine.UI.Image RX.Pill::image
	Image_t2042527209 * ___image_11;
	// System.Boolean RX.Pill::_unused
	bool ____unused_12;
	// RX.Pill/PillType RX.Pill::type
	int32_t ___type_13;
	// System.Single RX.Pill::mouseOverOpacity
	float ___mouseOverOpacity_14;
	// UnityEngine.Color RX.Pill::selectedColor
	Color_t2020392075  ___selectedColor_15;
	// System.Boolean RX.Pill::selected
	bool ___selected_16;

public:
	inline static int32_t get_offset_of_image_11() { return static_cast<int32_t>(offsetof(Pill_t2353557145, ___image_11)); }
	inline Image_t2042527209 * get_image_11() const { return ___image_11; }
	inline Image_t2042527209 ** get_address_of_image_11() { return &___image_11; }
	inline void set_image_11(Image_t2042527209 * value)
	{
		___image_11 = value;
		Il2CppCodeGenWriteBarrier(&___image_11, value);
	}

	inline static int32_t get_offset_of__unused_12() { return static_cast<int32_t>(offsetof(Pill_t2353557145, ____unused_12)); }
	inline bool get__unused_12() const { return ____unused_12; }
	inline bool* get_address_of__unused_12() { return &____unused_12; }
	inline void set__unused_12(bool value)
	{
		____unused_12 = value;
	}

	inline static int32_t get_offset_of_type_13() { return static_cast<int32_t>(offsetof(Pill_t2353557145, ___type_13)); }
	inline int32_t get_type_13() const { return ___type_13; }
	inline int32_t* get_address_of_type_13() { return &___type_13; }
	inline void set_type_13(int32_t value)
	{
		___type_13 = value;
	}

	inline static int32_t get_offset_of_mouseOverOpacity_14() { return static_cast<int32_t>(offsetof(Pill_t2353557145, ___mouseOverOpacity_14)); }
	inline float get_mouseOverOpacity_14() const { return ___mouseOverOpacity_14; }
	inline float* get_address_of_mouseOverOpacity_14() { return &___mouseOverOpacity_14; }
	inline void set_mouseOverOpacity_14(float value)
	{
		___mouseOverOpacity_14 = value;
	}

	inline static int32_t get_offset_of_selectedColor_15() { return static_cast<int32_t>(offsetof(Pill_t2353557145, ___selectedColor_15)); }
	inline Color_t2020392075  get_selectedColor_15() const { return ___selectedColor_15; }
	inline Color_t2020392075 * get_address_of_selectedColor_15() { return &___selectedColor_15; }
	inline void set_selectedColor_15(Color_t2020392075  value)
	{
		___selectedColor_15 = value;
	}

	inline static int32_t get_offset_of_selected_16() { return static_cast<int32_t>(offsetof(Pill_t2353557145, ___selected_16)); }
	inline bool get_selected_16() const { return ___selected_16; }
	inline bool* get_address_of_selected_16() { return &___selected_16; }
	inline void set_selected_16(bool value)
	{
		___selected_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

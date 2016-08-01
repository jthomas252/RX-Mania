#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_RX_Pill_PillType606407649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.PillManager/PillGraphics
struct  PillGraphics_t1115863027 
{
public:
	// RX.Pill/PillType RX.PillManager/PillGraphics::type
	int32_t ___type_0;
	// UnityEngine.Sprite RX.PillManager/PillGraphics::sprite
	Sprite_t309593783 * ___sprite_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PillGraphics_t1115863027, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_sprite_1() { return static_cast<int32_t>(offsetof(PillGraphics_t1115863027, ___sprite_1)); }
	inline Sprite_t309593783 * get_sprite_1() const { return ___sprite_1; }
	inline Sprite_t309593783 ** get_address_of_sprite_1() { return &___sprite_1; }
	inline void set_sprite_1(Sprite_t309593783 * value)
	{
		___sprite_1 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: RX.PillManager/PillGraphics
struct PillGraphics_t1115863027_marshaled_pinvoke
{
	int32_t ___type_0;
	Sprite_t309593783 * ___sprite_1;
};
// Native definition for marshalling of: RX.PillManager/PillGraphics
struct PillGraphics_t1115863027_marshaled_com
{
	int32_t ___type_0;
	Sprite_t309593783 * ___sprite_1;
};

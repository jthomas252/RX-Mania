#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<RX.GridItem>>
struct List_1_t333644417;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.Grid
struct  Grid_t3469560614  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RX.Grid::distancePerPill
	float ___distancePerPill_4;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<RX.GridItem>> RX.Grid::pillGrid
	List_1_t333644417 * ___pillGrid_5;

public:
	inline static int32_t get_offset_of_distancePerPill_4() { return static_cast<int32_t>(offsetof(Grid_t3469560614, ___distancePerPill_4)); }
	inline float get_distancePerPill_4() const { return ___distancePerPill_4; }
	inline float* get_address_of_distancePerPill_4() { return &___distancePerPill_4; }
	inline void set_distancePerPill_4(float value)
	{
		___distancePerPill_4 = value;
	}

	inline static int32_t get_offset_of_pillGrid_5() { return static_cast<int32_t>(offsetof(Grid_t3469560614, ___pillGrid_5)); }
	inline List_1_t333644417 * get_pillGrid_5() const { return ___pillGrid_5; }
	inline List_1_t333644417 ** get_address_of_pillGrid_5() { return &___pillGrid_5; }
	inline void set_pillGrid_5(List_1_t333644417 * value)
	{
		___pillGrid_5 = value;
		Il2CppCodeGenWriteBarrier(&___pillGrid_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

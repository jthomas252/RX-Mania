#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<RX.Pill/PillType,RX.Disease/DiseaseResist>
struct Dictionary_2_t2446021101;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.Disease
struct  Disease_t3100275524  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<RX.Pill/PillType,RX.Disease/DiseaseResist> RX.Disease::diseaseDict
	Dictionary_2_t2446021101 * ___diseaseDict_0;
	// System.Int32 RX.Disease::_strength
	int32_t ____strength_1;
	// System.String RX.Disease::_name
	String_t* ____name_2;

public:
	inline static int32_t get_offset_of_diseaseDict_0() { return static_cast<int32_t>(offsetof(Disease_t3100275524, ___diseaseDict_0)); }
	inline Dictionary_2_t2446021101 * get_diseaseDict_0() const { return ___diseaseDict_0; }
	inline Dictionary_2_t2446021101 ** get_address_of_diseaseDict_0() { return &___diseaseDict_0; }
	inline void set_diseaseDict_0(Dictionary_2_t2446021101 * value)
	{
		___diseaseDict_0 = value;
		Il2CppCodeGenWriteBarrier(&___diseaseDict_0, value);
	}

	inline static int32_t get_offset_of__strength_1() { return static_cast<int32_t>(offsetof(Disease_t3100275524, ____strength_1)); }
	inline int32_t get__strength_1() const { return ____strength_1; }
	inline int32_t* get_address_of__strength_1() { return &____strength_1; }
	inline void set__strength_1(int32_t value)
	{
		____strength_1 = value;
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(Disease_t3100275524, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier(&____name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

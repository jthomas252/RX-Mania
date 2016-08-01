#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RX.Pill
struct Pill_t2353557145;
// RX.PillManager/PillGraphics[]
struct PillGraphicsU5BU5D_t3582534370;
// System.Collections.Generic.List`1<RX.Pill>
struct List_1_t1722678277;
// System.Collections.Generic.Dictionary`2<RX.Pill/PillType,System.Int32>
struct Dictionary_2_t514475790;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.PillManager
struct  PillManager_t335090404  : public MonoBehaviour_t1158329972
{
public:
	// RX.Pill RX.PillManager::pillPrefab
	Pill_t2353557145 * ___pillPrefab_6;
	// RX.PillManager/PillGraphics[] RX.PillManager::graphics
	PillGraphicsU5BU5D_t3582534370* ___graphics_7;
	// System.Int32 RX.PillManager::pillsToCreate
	int32_t ___pillsToCreate_8;
	// System.Collections.Generic.List`1<RX.Pill> RX.PillManager::pillList
	List_1_t1722678277 * ___pillList_9;
	// System.Collections.Generic.Dictionary`2<RX.Pill/PillType,System.Int32> RX.PillManager::pillDict
	Dictionary_2_t514475790 * ___pillDict_10;

public:
	inline static int32_t get_offset_of_pillPrefab_6() { return static_cast<int32_t>(offsetof(PillManager_t335090404, ___pillPrefab_6)); }
	inline Pill_t2353557145 * get_pillPrefab_6() const { return ___pillPrefab_6; }
	inline Pill_t2353557145 ** get_address_of_pillPrefab_6() { return &___pillPrefab_6; }
	inline void set_pillPrefab_6(Pill_t2353557145 * value)
	{
		___pillPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___pillPrefab_6, value);
	}

	inline static int32_t get_offset_of_graphics_7() { return static_cast<int32_t>(offsetof(PillManager_t335090404, ___graphics_7)); }
	inline PillGraphicsU5BU5D_t3582534370* get_graphics_7() const { return ___graphics_7; }
	inline PillGraphicsU5BU5D_t3582534370** get_address_of_graphics_7() { return &___graphics_7; }
	inline void set_graphics_7(PillGraphicsU5BU5D_t3582534370* value)
	{
		___graphics_7 = value;
		Il2CppCodeGenWriteBarrier(&___graphics_7, value);
	}

	inline static int32_t get_offset_of_pillsToCreate_8() { return static_cast<int32_t>(offsetof(PillManager_t335090404, ___pillsToCreate_8)); }
	inline int32_t get_pillsToCreate_8() const { return ___pillsToCreate_8; }
	inline int32_t* get_address_of_pillsToCreate_8() { return &___pillsToCreate_8; }
	inline void set_pillsToCreate_8(int32_t value)
	{
		___pillsToCreate_8 = value;
	}

	inline static int32_t get_offset_of_pillList_9() { return static_cast<int32_t>(offsetof(PillManager_t335090404, ___pillList_9)); }
	inline List_1_t1722678277 * get_pillList_9() const { return ___pillList_9; }
	inline List_1_t1722678277 ** get_address_of_pillList_9() { return &___pillList_9; }
	inline void set_pillList_9(List_1_t1722678277 * value)
	{
		___pillList_9 = value;
		Il2CppCodeGenWriteBarrier(&___pillList_9, value);
	}

	inline static int32_t get_offset_of_pillDict_10() { return static_cast<int32_t>(offsetof(PillManager_t335090404, ___pillDict_10)); }
	inline Dictionary_2_t514475790 * get_pillDict_10() const { return ___pillDict_10; }
	inline Dictionary_2_t514475790 ** get_address_of_pillDict_10() { return &___pillDict_10; }
	inline void set_pillDict_10(Dictionary_2_t514475790 * value)
	{
		___pillDict_10 = value;
		Il2CppCodeGenWriteBarrier(&___pillDict_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

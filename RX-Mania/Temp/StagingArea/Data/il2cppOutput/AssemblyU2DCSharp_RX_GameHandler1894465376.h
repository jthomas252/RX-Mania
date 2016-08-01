#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RX.GameUI
struct GameUI_t1191293910;
// RX.Grid
struct Grid_t3469560614;
// System.Collections.Generic.List`1<RX.Pill>
struct List_1_t1722678277;
// RX.Pill
struct Pill_t2353557145;
// RX.Disease
struct Disease_t3100275524;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.GameHandler
struct  GameHandler_t1894465376  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RX.GameHandler::currentTime
	float ___currentTime_20;
	// System.Single RX.GameHandler::lastTime
	float ___lastTime_21;
	// System.Int32 RX.GameHandler::randomSeed
	int32_t ___randomSeed_22;
	// RX.GameUI RX.GameHandler::gameUI
	GameUI_t1191293910 * ___gameUI_23;
	// RX.Grid RX.GameHandler::grid
	Grid_t3469560614 * ___grid_24;
	// System.Collections.Generic.List`1<RX.Pill> RX.GameHandler::selectedPills
	List_1_t1722678277 * ___selectedPills_25;
	// System.Boolean RX.GameHandler::_selectionDragActive
	bool ____selectionDragActive_26;
	// RX.Pill RX.GameHandler::lastPill
	Pill_t2353557145 * ___lastPill_27;
	// System.Single RX.GameHandler::health
	float ___health_28;
	// RX.Disease RX.GameHandler::disease
	Disease_t3100275524 * ___disease_29;
	// System.Int32 RX.GameHandler::_level
	int32_t ____level_30;
	// System.Int32 RX.GameHandler::_score
	int32_t ____score_31;
	// System.Boolean RX.GameHandler::_paused
	bool ____paused_32;
	// System.Boolean RX.GameHandler::_active
	bool ____active_33;
	// System.Single RX.GameHandler::timeModifier
	float ___timeModifier_34;
	// System.Boolean RX.GameHandler::panicMode
	bool ___panicMode_35;

public:
	inline static int32_t get_offset_of_currentTime_20() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___currentTime_20)); }
	inline float get_currentTime_20() const { return ___currentTime_20; }
	inline float* get_address_of_currentTime_20() { return &___currentTime_20; }
	inline void set_currentTime_20(float value)
	{
		___currentTime_20 = value;
	}

	inline static int32_t get_offset_of_lastTime_21() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___lastTime_21)); }
	inline float get_lastTime_21() const { return ___lastTime_21; }
	inline float* get_address_of_lastTime_21() { return &___lastTime_21; }
	inline void set_lastTime_21(float value)
	{
		___lastTime_21 = value;
	}

	inline static int32_t get_offset_of_randomSeed_22() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___randomSeed_22)); }
	inline int32_t get_randomSeed_22() const { return ___randomSeed_22; }
	inline int32_t* get_address_of_randomSeed_22() { return &___randomSeed_22; }
	inline void set_randomSeed_22(int32_t value)
	{
		___randomSeed_22 = value;
	}

	inline static int32_t get_offset_of_gameUI_23() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___gameUI_23)); }
	inline GameUI_t1191293910 * get_gameUI_23() const { return ___gameUI_23; }
	inline GameUI_t1191293910 ** get_address_of_gameUI_23() { return &___gameUI_23; }
	inline void set_gameUI_23(GameUI_t1191293910 * value)
	{
		___gameUI_23 = value;
		Il2CppCodeGenWriteBarrier(&___gameUI_23, value);
	}

	inline static int32_t get_offset_of_grid_24() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___grid_24)); }
	inline Grid_t3469560614 * get_grid_24() const { return ___grid_24; }
	inline Grid_t3469560614 ** get_address_of_grid_24() { return &___grid_24; }
	inline void set_grid_24(Grid_t3469560614 * value)
	{
		___grid_24 = value;
		Il2CppCodeGenWriteBarrier(&___grid_24, value);
	}

	inline static int32_t get_offset_of_selectedPills_25() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___selectedPills_25)); }
	inline List_1_t1722678277 * get_selectedPills_25() const { return ___selectedPills_25; }
	inline List_1_t1722678277 ** get_address_of_selectedPills_25() { return &___selectedPills_25; }
	inline void set_selectedPills_25(List_1_t1722678277 * value)
	{
		___selectedPills_25 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPills_25, value);
	}

	inline static int32_t get_offset_of__selectionDragActive_26() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ____selectionDragActive_26)); }
	inline bool get__selectionDragActive_26() const { return ____selectionDragActive_26; }
	inline bool* get_address_of__selectionDragActive_26() { return &____selectionDragActive_26; }
	inline void set__selectionDragActive_26(bool value)
	{
		____selectionDragActive_26 = value;
	}

	inline static int32_t get_offset_of_lastPill_27() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___lastPill_27)); }
	inline Pill_t2353557145 * get_lastPill_27() const { return ___lastPill_27; }
	inline Pill_t2353557145 ** get_address_of_lastPill_27() { return &___lastPill_27; }
	inline void set_lastPill_27(Pill_t2353557145 * value)
	{
		___lastPill_27 = value;
		Il2CppCodeGenWriteBarrier(&___lastPill_27, value);
	}

	inline static int32_t get_offset_of_health_28() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___health_28)); }
	inline float get_health_28() const { return ___health_28; }
	inline float* get_address_of_health_28() { return &___health_28; }
	inline void set_health_28(float value)
	{
		___health_28 = value;
	}

	inline static int32_t get_offset_of_disease_29() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___disease_29)); }
	inline Disease_t3100275524 * get_disease_29() const { return ___disease_29; }
	inline Disease_t3100275524 ** get_address_of_disease_29() { return &___disease_29; }
	inline void set_disease_29(Disease_t3100275524 * value)
	{
		___disease_29 = value;
		Il2CppCodeGenWriteBarrier(&___disease_29, value);
	}

	inline static int32_t get_offset_of__level_30() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ____level_30)); }
	inline int32_t get__level_30() const { return ____level_30; }
	inline int32_t* get_address_of__level_30() { return &____level_30; }
	inline void set__level_30(int32_t value)
	{
		____level_30 = value;
	}

	inline static int32_t get_offset_of__score_31() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ____score_31)); }
	inline int32_t get__score_31() const { return ____score_31; }
	inline int32_t* get_address_of__score_31() { return &____score_31; }
	inline void set__score_31(int32_t value)
	{
		____score_31 = value;
	}

	inline static int32_t get_offset_of__paused_32() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ____paused_32)); }
	inline bool get__paused_32() const { return ____paused_32; }
	inline bool* get_address_of__paused_32() { return &____paused_32; }
	inline void set__paused_32(bool value)
	{
		____paused_32 = value;
	}

	inline static int32_t get_offset_of__active_33() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ____active_33)); }
	inline bool get__active_33() const { return ____active_33; }
	inline bool* get_address_of__active_33() { return &____active_33; }
	inline void set__active_33(bool value)
	{
		____active_33 = value;
	}

	inline static int32_t get_offset_of_timeModifier_34() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___timeModifier_34)); }
	inline float get_timeModifier_34() const { return ___timeModifier_34; }
	inline float* get_address_of_timeModifier_34() { return &___timeModifier_34; }
	inline void set_timeModifier_34(float value)
	{
		___timeModifier_34 = value;
	}

	inline static int32_t get_offset_of_panicMode_35() { return static_cast<int32_t>(offsetof(GameHandler_t1894465376, ___panicMode_35)); }
	inline bool get_panicMode_35() const { return ___panicMode_35; }
	inline bool* get_address_of_panicMode_35() { return &___panicMode_35; }
	inline void set_panicMode_35(bool value)
	{
		___panicMode_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

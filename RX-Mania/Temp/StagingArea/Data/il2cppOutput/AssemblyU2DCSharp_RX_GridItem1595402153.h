#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RX.GridItem
struct  GridItem_t1595402153  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean RX.GridItem::isEmpty
	bool ___isEmpty_2;
	// System.Int32 RX.GridItem::_gridX
	int32_t ____gridX_3;
	// System.Int32 RX.GridItem::_gridY
	int32_t ____gridY_4;
	// UnityEngine.AnimationCurve RX.GridItem::gravityCurve
	AnimationCurve_t3306541151 * ___gravityCurve_5;
	// System.Single RX.GridItem::fallTime
	float ___fallTime_6;
	// System.Single RX.GridItem::currentTime
	float ___currentTime_7;
	// UnityEngine.RectTransform RX.GridItem::rectTransform
	RectTransform_t3349966182 * ___rectTransform_8;
	// UnityEngine.Vector3 RX.GridItem::lastPos
	Vector3_t2243707580  ___lastPos_9;
	// UnityEngine.Vector3 RX.GridItem::targetPos
	Vector3_t2243707580  ___targetPos_10;

public:
	inline static int32_t get_offset_of_isEmpty_2() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ___isEmpty_2)); }
	inline bool get_isEmpty_2() const { return ___isEmpty_2; }
	inline bool* get_address_of_isEmpty_2() { return &___isEmpty_2; }
	inline void set_isEmpty_2(bool value)
	{
		___isEmpty_2 = value;
	}

	inline static int32_t get_offset_of__gridX_3() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ____gridX_3)); }
	inline int32_t get__gridX_3() const { return ____gridX_3; }
	inline int32_t* get_address_of__gridX_3() { return &____gridX_3; }
	inline void set__gridX_3(int32_t value)
	{
		____gridX_3 = value;
	}

	inline static int32_t get_offset_of__gridY_4() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ____gridY_4)); }
	inline int32_t get__gridY_4() const { return ____gridY_4; }
	inline int32_t* get_address_of__gridY_4() { return &____gridY_4; }
	inline void set__gridY_4(int32_t value)
	{
		____gridY_4 = value;
	}

	inline static int32_t get_offset_of_gravityCurve_5() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ___gravityCurve_5)); }
	inline AnimationCurve_t3306541151 * get_gravityCurve_5() const { return ___gravityCurve_5; }
	inline AnimationCurve_t3306541151 ** get_address_of_gravityCurve_5() { return &___gravityCurve_5; }
	inline void set_gravityCurve_5(AnimationCurve_t3306541151 * value)
	{
		___gravityCurve_5 = value;
		Il2CppCodeGenWriteBarrier(&___gravityCurve_5, value);
	}

	inline static int32_t get_offset_of_fallTime_6() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ___fallTime_6)); }
	inline float get_fallTime_6() const { return ___fallTime_6; }
	inline float* get_address_of_fallTime_6() { return &___fallTime_6; }
	inline void set_fallTime_6(float value)
	{
		___fallTime_6 = value;
	}

	inline static int32_t get_offset_of_currentTime_7() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ___currentTime_7)); }
	inline float get_currentTime_7() const { return ___currentTime_7; }
	inline float* get_address_of_currentTime_7() { return &___currentTime_7; }
	inline void set_currentTime_7(float value)
	{
		___currentTime_7 = value;
	}

	inline static int32_t get_offset_of_rectTransform_8() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ___rectTransform_8)); }
	inline RectTransform_t3349966182 * get_rectTransform_8() const { return ___rectTransform_8; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_8() { return &___rectTransform_8; }
	inline void set_rectTransform_8(RectTransform_t3349966182 * value)
	{
		___rectTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_8, value);
	}

	inline static int32_t get_offset_of_lastPos_9() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ___lastPos_9)); }
	inline Vector3_t2243707580  get_lastPos_9() const { return ___lastPos_9; }
	inline Vector3_t2243707580 * get_address_of_lastPos_9() { return &___lastPos_9; }
	inline void set_lastPos_9(Vector3_t2243707580  value)
	{
		___lastPos_9 = value;
	}

	inline static int32_t get_offset_of_targetPos_10() { return static_cast<int32_t>(offsetof(GridItem_t1595402153, ___targetPos_10)); }
	inline Vector3_t2243707580  get_targetPos_10() const { return ___targetPos_10; }
	inline Vector3_t2243707580 * get_address_of_targetPos_10() { return &___targetPos_10; }
	inline void set_targetPos_10(Vector3_t2243707580  value)
	{
		___targetPos_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

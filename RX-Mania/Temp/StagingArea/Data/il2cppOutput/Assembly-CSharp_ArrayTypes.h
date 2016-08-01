#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// RX.Disease/DiseaseResist
struct DiseaseResist_t4003422759;
// RX.GridItem
struct GridItem_t1595402153;
// RX.Pill
struct Pill_t2353557145;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_RX_Pill_PillType606407649.h"
#include "AssemblyU2DCSharp_RX_Disease_DiseaseResist4003422759.h"
#include "AssemblyU2DCSharp_RX_GridItem1595402153.h"
#include "AssemblyU2DCSharp_RX_AudioHandler_SoundEffect1963807215.h"
#include "AssemblyU2DCSharp_RX_AudioHandler_MusicTrack1785059261.h"
#include "AssemblyU2DCSharp_RX_Pill2353557145.h"
#include "AssemblyU2DCSharp_RX_PillManager_PillGraphics1115863027.h"

#pragma once
// RX.Pill/PillType[]
struct PillTypeU5BU5D_t2465172348  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// RX.Disease/DiseaseResist[]
struct DiseaseResistU5BU5D_t478913886  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DiseaseResist_t4003422759 * m_Items[1];

public:
	inline DiseaseResist_t4003422759 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DiseaseResist_t4003422759 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DiseaseResist_t4003422759 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// RX.GridItem[]
struct GridItemU5BU5D_t823533460  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GridItem_t1595402153 * m_Items[1];

public:
	inline GridItem_t1595402153 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GridItem_t1595402153 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GridItem_t1595402153 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// RX.AudioHandler/SoundEffect[]
struct SoundEffectU5BU5D_t3081000310  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SoundEffect_t1963807215  m_Items[1];

public:
	inline SoundEffect_t1963807215  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SoundEffect_t1963807215 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SoundEffect_t1963807215  value)
	{
		m_Items[index] = value;
	}
};
// RX.AudioHandler/MusicTrack[]
struct MusicTrackU5BU5D_t3526830256  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) MusicTrack_t1785059261  m_Items[1];

public:
	inline MusicTrack_t1785059261  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline MusicTrack_t1785059261 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, MusicTrack_t1785059261  value)
	{
		m_Items[index] = value;
	}
};
// RX.Pill[]
struct PillU5BU5D_t2505928420  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Pill_t2353557145 * m_Items[1];

public:
	inline Pill_t2353557145 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Pill_t2353557145 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Pill_t2353557145 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// RX.PillManager/PillGraphics[]
struct PillGraphicsU5BU5D_t3582534370  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PillGraphics_t1115863027  m_Items[1];

public:
	inline PillGraphics_t1115863027  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PillGraphics_t1115863027 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PillGraphics_t1115863027  value)
	{
		m_Items[index] = value;
	}
};

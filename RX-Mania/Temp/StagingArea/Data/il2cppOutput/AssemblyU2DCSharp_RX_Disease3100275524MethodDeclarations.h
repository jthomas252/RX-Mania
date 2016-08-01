#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// RX.Disease
struct Disease_t3100275524;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_RX_Pill_PillType606407649.h"

// System.Void RX.Disease::.ctor()
extern "C"  void Disease__ctor_m1765875591 (Disease_t3100275524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RX.Disease::get_strength()
extern "C"  int32_t Disease_get_strength_m3105677917 (Disease_t3100275524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RX.Disease::get_name()
extern "C"  String_t* Disease_get_name_m3859280634 (Disease_t3100275524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.Disease::Spawn(System.Int32,System.Int32)
extern "C"  void Disease_Spawn_m4143573810 (Disease_t3100275524 * __this, int32_t ___str0, int32_t ___pill1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RX.Disease::ApplyEffect(RX.Pill/PillType,System.Single)
extern "C"  bool Disease_ApplyEffect_m1476049996 (Disease_t3100275524 * __this, int32_t ___type0, float ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.Disease::GetDamage()
extern "C"  void Disease_GetDamage_m270065532 (Disease_t3100275524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RX.Disease::GetResistance(RX.Pill/PillType)
extern "C"  int32_t Disease_GetResistance_m4216400819 (Disease_t3100275524 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

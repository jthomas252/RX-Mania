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

// RX.PillManager
struct PillManager_t335090404;
// RX.Pill
struct Pill_t2353557145;

#include "codegen/il2cpp-codegen.h"

// System.Void RX.PillManager::.ctor()
extern "C"  void PillManager__ctor_m2073553489 (PillManager_t335090404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.PillManager::Init()
extern "C"  void PillManager_Init_m1650816615 (PillManager_t335090404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.PillManager::QueuePlacebo()
extern "C"  void PillManager_QueuePlacebo_m3406666480 (PillManager_t335090404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// RX.Pill RX.PillManager::GetUnusedPill()
extern "C"  Pill_t2353557145 * PillManager_GetUnusedPill_m4076528876 (PillManager_t335090404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

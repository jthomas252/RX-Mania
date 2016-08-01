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

// RX.GameUI
struct GameUI_t1191293910;
// RX.Disease
struct Disease_t3100275524;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_RX_Disease3100275524.h"

// System.Void RX.GameUI::.ctor()
extern "C"  void GameUI__ctor_m750921321 (GameUI_t1191293910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameUI::OnPauseButton()
extern "C"  void GameUI_OnPauseButton_m2923458650 (GameUI_t1191293910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameUI::UpdateHealthBar(System.Single)
extern "C"  void GameUI_UpdateHealthBar_m2748785372 (GameUI_t1191293910 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameUI::UpdateDiseaseText(RX.Disease)
extern "C"  void GameUI_UpdateDiseaseText_m1554610413 (GameUI_t1191293910 * __this, Disease_t3100275524 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameUI::UpdateScoreText(System.Int32)
extern "C"  void GameUI_UpdateScoreText_m1368285856 (GameUI_t1191293910 * __this, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameUI::UpdateLevelText(System.Int32)
extern "C"  void GameUI_UpdateLevelText_m3003083748 (GameUI_t1191293910 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameUI::ShowGameOver(System.Int32)
extern "C"  void GameUI_ShowGameOver_m3878574723 (GameUI_t1191293910 * __this, int32_t ___score0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

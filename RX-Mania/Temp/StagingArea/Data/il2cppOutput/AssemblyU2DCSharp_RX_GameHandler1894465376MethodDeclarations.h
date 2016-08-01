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

// RX.GameHandler
struct GameHandler_t1894465376;
// RX.Pill
struct Pill_t2353557145;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_RX_Pill2353557145.h"

// System.Void RX.GameHandler::.ctor()
extern "C"  void GameHandler__ctor_m3486477045 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RX.GameHandler::get_selectionDragActive()
extern "C"  bool GameHandler_get_selectionDragActive_m3433066694 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RX.GameHandler::get_level()
extern "C"  int32_t GameHandler_get_level_m750807014 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RX.GameHandler::get_score()
extern "C"  int32_t GameHandler_get_score_m656229758 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RX.GameHandler::get_paused()
extern "C"  bool GameHandler_get_paused_m3396363372 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RX.GameHandler::get_active()
extern "C"  bool GameHandler_get_active_m3385988580 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::Init()
extern "C"  void GameHandler_Init_m117557163 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::Close()
extern "C"  void GameHandler_Close_m3029597687 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::StartNewGame(System.Int32)
extern "C"  void GameHandler_StartNewGame_m500076576 (GameHandler_t1894465376 * __this, int32_t ___startingLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::Update()
extern "C"  void GameHandler_Update_m1746406804 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::Pause()
extern "C"  void GameHandler_Pause_m2614363543 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::Unpause()
extern "C"  void GameHandler_Unpause_m3746777730 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::BeginSelectDrag()
extern "C"  void GameHandler_BeginSelectDrag_m4046234022 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::CancelSelectDrag()
extern "C"  void GameHandler_CancelSelectDrag_m3473773731 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::EndSelectDrag()
extern "C"  void GameHandler_EndSelectDrag_m3460194502 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RX.GameHandler::AddPill(RX.Pill)
extern "C"  bool GameHandler_AddPill_m3439545482 (GameHandler_t1894465376 * __this, Pill_t2353557145 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::EnterPanicMode()
extern "C"  void GameHandler_EnterPanicMode_m256876583 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::ExitPanicMode()
extern "C"  void GameHandler_ExitPanicMode_m1621273663 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::IncreaseScore(System.Int32)
extern "C"  void GameHandler_IncreaseScore_m317342922 (GameHandler_t1894465376 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::IncrementLevel()
extern "C"  void GameHandler_IncrementLevel_m1254490036 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::IncrementHealth(System.Int32)
extern "C"  void GameHandler_IncrementHealth_m2111314225 (GameHandler_t1894465376 * __this, int32_t ___hp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.GameHandler::EvaluateCombo()
extern "C"  void GameHandler_EvaluateCombo_m3658368566 (GameHandler_t1894465376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

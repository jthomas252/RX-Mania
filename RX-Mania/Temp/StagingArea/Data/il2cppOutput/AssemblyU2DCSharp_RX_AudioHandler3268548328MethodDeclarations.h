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

// RX.AudioHandler
struct AudioHandler_t3268548328;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void RX.AudioHandler::.ctor()
extern "C"  void AudioHandler__ctor_m2581246681 (AudioHandler_t3268548328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.AudioHandler::Init()
extern "C"  void AudioHandler_Init_m1078802719 (AudioHandler_t3268548328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.AudioHandler::PlaySound(System.String,System.Single)
extern "C"  void AudioHandler_PlaySound_m722096945 (AudioHandler_t3268548328 * __this, String_t* ___sound0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.AudioHandler::PlayMusic(System.String,System.Boolean)
extern "C"  void AudioHandler_PlayMusic_m3991440629 (AudioHandler_t3268548328 * __this, String_t* ___track0, bool ___keepPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.AudioHandler::PauseMusic()
extern "C"  void AudioHandler_PauseMusic_m4218602752 (AudioHandler_t3268548328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RX.AudioHandler::ResumeMusic()
extern "C"  void AudioHandler_ResumeMusic_m216889057 (AudioHandler_t3268548328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

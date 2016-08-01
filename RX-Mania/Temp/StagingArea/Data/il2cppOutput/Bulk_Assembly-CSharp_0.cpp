#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// RX.AudioHandler
struct AudioHandler_t3268548328;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// RX.CreditsMenu
struct CreditsMenu_t1738754981;
// RX.Disease
struct Disease_t3100275524;
// RX.Disease/DiseaseResist
struct DiseaseResist_t4003422759;
// RX.DiseaseNameGenerator
struct DiseaseNameGenerator_t3577572484;
// RX.GameHandler
struct GameHandler_t1894465376;
// RX.GameUI
struct GameUI_t1191293910;
// RX.Grid
struct Grid_t3469560614;
// RX.Pill
struct Pill_t2353557145;
// RX.GameInit
struct GameInit_t1436240786;
// RX.GameOptions
struct GameOptions_t1109942226;
// RX.GameOver
struct GameOver_t797685186;
// RX.GridItem
struct GridItem_t1595402153;
// RX.MainMenu
struct MainMenu_t2651266464;
// RX.Pause
struct Pause_t2495578996;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite
struct Sprite_t309593783;
// RX.PillManager
struct PillManager_t335090404;
// RX.Top
struct Top_t793591787;
// RX.UIHandler
struct UIHandler_t1120912888;
// RX.Virus
struct Virus_t1783893007;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_AudioHandler3268548328.h"
#include "AssemblyU2DCSharp_RX_AudioHandler3268548328MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3986656710MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3986656710.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "AssemblyU2DCSharp_RX_AudioHandler_SoundEffect1963807215.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_RX_AudioHandler_MusicTrack1785059261.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "AssemblyU2DCSharp_RX_AudioHandler_MusicTrack1785059261MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_AudioHandler_SoundEffect1963807215MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_CreditsMenu1738754981.h"
#include "AssemblyU2DCSharp_RX_CreditsMenu1738754981MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RX_Disease3100275524.h"
#include "AssemblyU2DCSharp_RX_Disease3100275524MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2446021101MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_Disease_DiseaseResist4003422759MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2446021101.h"
#include "AssemblyU2DCSharp_RX_Disease_DiseaseResist4003422759.h"
#include "AssemblyU2DCSharp_RX_Pill_PillType606407649.h"
#include "AssemblyU2DCSharp_RX_DiseaseNameGenerator3577572484MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_DiseaseNameGenerator3577572484.h"
#include "AssemblyU2DCSharp_RX_GameHandler1894465376.h"
#include "AssemblyU2DCSharp_RX_GameHandler1894465376MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1722678277MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1722678277.h"
#include "AssemblyU2DCSharp_RX_GameUI1191293910.h"
#include "AssemblyU2DCSharp_RX_Grid3469560614.h"
#include "mscorlib_System_DateTime693205669MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_GameUI1191293910MethodDeclarations.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_Int64909078037.h"
#include "AssemblyU2DCSharp_RX_Top793591787.h"
#include "AssemblyU2DCSharp_RX_Top793591787MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_RX_Pill2353557145MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_Pill2353557145.h"
#include "AssemblyU2DCSharp_RX_GridItem1595402153MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_UIHandler1120912888.h"
#include "AssemblyU2DCSharp_RX_Grid3469560614MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_GameInit1436240786.h"
#include "AssemblyU2DCSharp_RX_GameInit1436240786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application354826772MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_GameOptions1109942226.h"
#include "AssemblyU2DCSharp_RX_GameOptions1109942226MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_GameOver797685186.h"
#include "AssemblyU2DCSharp_RX_GameOver797685186MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209.h"
#include "mscorlib_System_Collections_Generic_List_1_gen333644417MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen964523285MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen333644417.h"
#include "mscorlib_System_Collections_Generic_List_1_gen964523285.h"
#include "AssemblyU2DCSharp_RX_PillManager335090404MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_GridItem1595402153.h"
#include "AssemblyU2DCSharp_RX_PillManager335090404.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_RX_MainMenu2651266464.h"
#include "AssemblyU2DCSharp_RX_MainMenu2651266464MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_Pause2495578996.h"
#include "AssemblyU2DCSharp_RX_Pause2495578996MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Color2020392075MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic2426225576MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic2426225576.h"
#include "AssemblyU2DCSharp_RX_Pill_PillType606407649MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge514475790MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge514475790.h"
#include "AssemblyU2DCSharp_RX_PillManager_PillGraphics1115863027.h"
#include "AssemblyU2DCSharp_RX_PillManager_PillGraphics1115863027MethodDeclarations.h"
#include "AssemblyU2DCSharp_RX_UIHandler1120912888MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MeshRenderer1268241104.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharp_RX_Virus1783893007.h"
#include "AssemblyU2DCSharp_RX_Virus1783893007MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m2721246802_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m2721246802(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisIl2CppObject_m483057723(__this /* static, unused */, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<RX.GameUI>()
#define Object_FindObjectOfType_TisGameUI_t1191293910_m1214790711(__this /* static, unused */, method) ((  GameUI_t1191293910 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<RX.Grid>()
#define Object_FindObjectOfType_TisGrid_t3469560614_m205978629(__this /* static, unused */, method) ((  Grid_t3469560614 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2042527209_m2189462422(__this, method) ((  Image_t2042527209 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m447919519_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m447919519(__this /* static, unused */, p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m447919519_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<RX.Pill>(!!0)
#define Object_Instantiate_TisPill_t2353557145_m1719382195(__this /* static, unused */, p0, method) ((  Pill_t2353557145 * (*) (Il2CppObject * /* static, unused */, Pill_t2353557145 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m447919519_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::FindObjectOfType<RX.PillManager>()
#define Object_FindObjectOfType_TisPillManager_t335090404_m2680120471(__this /* static, unused */, method) ((  PillManager_t335090404 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<RX.AudioHandler>()
#define Object_FindObjectOfType_TisAudioHandler_t3268548328_m1170060367(__this /* static, unused */, method) ((  AudioHandler_t3268548328 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<RX.UIHandler>()
#define Object_FindObjectOfType_TisUIHandler_t1120912888_m778445793(__this /* static, unused */, method) ((  UIHandler_t1120912888 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<RX.GameHandler>()
#define Object_FindObjectOfType_TisGameHandler_t1894465376_m3812953651(__this /* static, unused */, method) ((  GameHandler_t1894465376 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RX.AudioHandler::.ctor()
extern "C"  void AudioHandler__ctor_m2581246681 (AudioHandler_t3268548328 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.AudioHandler::Init()
extern Il2CppClass* Dictionary_2_t3986656710_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2063026683_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m1209957957_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern const uint32_t AudioHandler_Init_m1078802719_MetadataUsageId;
extern "C"  void AudioHandler_Init_m1078802719 (AudioHandler_t3268548328 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AudioHandler_Init_m1078802719_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Dictionary_2_t3986656710 * L_0 = (Dictionary_2_t3986656710 *)il2cpp_codegen_object_new(Dictionary_2_t3986656710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2063026683(L_0, /*hidden argument*/Dictionary_2__ctor_m2063026683_MethodInfo_var);
		__this->set_soundDict_4(L_0);
		Dictionary_2_t3986656710 * L_1 = (Dictionary_2_t3986656710 *)il2cpp_codegen_object_new(Dictionary_2_t3986656710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2063026683(L_1, /*hidden argument*/Dictionary_2__ctor_m2063026683_MethodInfo_var);
		__this->set_musicDict_5(L_1);
		V_0 = 0;
		goto IL_003e;
	}

IL_001d:
	{
		Dictionary_2_t3986656710 * L_2 = __this->get_soundDict_4();
		SoundEffectU5BU5D_t3081000310* L_3 = __this->get_soundList_2();
		int32_t L_4 = V_0;
		String_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_name_0();
		int32_t L_6 = V_0;
		Dictionary_2_Add_m1209957957(L_2, L_5, L_6, /*hidden argument*/Dictionary_2_Add_m1209957957_MethodInfo_var);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_8 = V_0;
		SoundEffectU5BU5D_t3081000310* L_9 = __this->get_soundList_2();
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		V_1 = 0;
		goto IL_0074;
	}

IL_0053:
	{
		Dictionary_2_t3986656710 * L_10 = __this->get_musicDict_5();
		MusicTrackU5BU5D_t3526830256* L_11 = __this->get_musicList_3();
		int32_t L_12 = V_1;
		String_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_name_0();
		int32_t L_14 = V_1;
		Dictionary_2_Add_m1209957957(L_10, L_13, L_14, /*hidden argument*/Dictionary_2_Add_m1209957957_MethodInfo_var);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_16 = V_1;
		MusicTrackU5BU5D_t3526830256* L_17 = __this->get_musicList_3();
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_17)->max_length)))))))
		{
			goto IL_0053;
		}
	}
	{
		AudioSource_t1135106623 * L_18 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_audioPlayer_6(L_18);
		return;
	}
}
// System.Void RX.AudioHandler::PlaySound(System.String,System.Single)
extern const MethodInfo* Dictionary_2_ContainsKey_m3588976330_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m2505440573_MethodInfo_var;
extern const uint32_t AudioHandler_PlaySound_m722096945_MetadataUsageId;
extern "C"  void AudioHandler_PlaySound_m722096945 (AudioHandler_t3268548328 * __this, String_t* ___sound0, float ___volume1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AudioHandler_PlaySound_m722096945_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t3986656710 * L_0 = __this->get_soundDict_4();
		String_t* L_1 = ___sound0;
		bool L_2 = Dictionary_2_ContainsKey_m3588976330(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3588976330_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		AudioSource_t1135106623 * L_3 = __this->get_audioPlayer_6();
		SoundEffectU5BU5D_t3081000310* L_4 = __this->get_soundList_2();
		Dictionary_2_t3986656710 * L_5 = __this->get_soundDict_4();
		String_t* L_6 = ___sound0;
		int32_t L_7 = Dictionary_2_get_Item_m2505440573(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m2505440573_MethodInfo_var);
		AudioClip_t1932558630 * L_8 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_Sound_1();
		float L_9 = ___volume1;
		AudioSource_PlayOneShot_m4118899740(L_3, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0039:
	{
		return;
	}
}
// System.Void RX.AudioHandler::PlayMusic(System.String,System.Boolean)
extern const MethodInfo* Dictionary_2_ContainsKey_m3588976330_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m2505440573_MethodInfo_var;
extern const uint32_t AudioHandler_PlayMusic_m3991440629_MetadataUsageId;
extern "C"  void AudioHandler_PlayMusic_m3991440629 (AudioHandler_t3268548328 * __this, String_t* ___track0, bool ___keepPosition1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AudioHandler_PlayMusic_m3991440629_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		Dictionary_2_t3986656710 * L_0 = __this->get_musicDict_5();
		String_t* L_1 = ___track0;
		bool L_2 = Dictionary_2_ContainsKey_m3588976330(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3588976330_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		AudioSource_t1135106623 * L_3 = __this->get_audioPlayer_6();
		float L_4 = AudioSource_get_time_m1465582328(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AudioSource_t1135106623 * L_5 = __this->get_audioPlayer_6();
		AudioSource_set_time_m2642008583(L_5, (0.0f), /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_6 = __this->get_audioPlayer_6();
		MusicTrackU5BU5D_t3526830256* L_7 = __this->get_musicList_3();
		Dictionary_2_t3986656710 * L_8 = __this->get_musicDict_5();
		String_t* L_9 = ___track0;
		int32_t L_10 = Dictionary_2_get_Item_m2505440573(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m2505440573_MethodInfo_var);
		AudioClip_t1932558630 * L_11 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_Track_1();
		AudioSource_set_clip_m738814682(L_6, L_11, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_12 = __this->get_audioPlayer_6();
		AudioSource_Play_m353744792(L_12, /*hidden argument*/NULL);
		bool L_13 = ___keepPosition1;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		AudioSource_t1135106623 * L_14 = __this->get_audioPlayer_6();
		float L_15 = V_0;
		AudioSource_set_time_m2642008583(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void RX.AudioHandler::PauseMusic()
extern "C"  void AudioHandler_PauseMusic_m4218602752 (AudioHandler_t3268548328 * __this, const MethodInfo* method)
{
	{
		AudioSource_t1135106623 * L_0 = __this->get_audioPlayer_6();
		AudioSource_Pause_m71375470(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.AudioHandler::ResumeMusic()
extern "C"  void AudioHandler_ResumeMusic_m216889057 (AudioHandler_t3268548328 * __this, const MethodInfo* method)
{
	{
		AudioSource_t1135106623 * L_0 = __this->get_audioPlayer_6();
		AudioSource_UnPause_m1911402783(L_0, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: RX.AudioHandler/MusicTrack
extern "C" void MusicTrack_t1785059261_marshal_pinvoke(const MusicTrack_t1785059261& unmarshaled, MusicTrack_t1785059261_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___Track_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Track' of type 'MusicTrack': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Track_1Exception);
}
extern "C" void MusicTrack_t1785059261_marshal_pinvoke_back(const MusicTrack_t1785059261_marshaled_pinvoke& marshaled, MusicTrack_t1785059261& unmarshaled)
{
	Il2CppCodeGenException* ___Track_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Track' of type 'MusicTrack': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Track_1Exception);
}
// Conversion method for clean up from marshalling of: RX.AudioHandler/MusicTrack
extern "C" void MusicTrack_t1785059261_marshal_pinvoke_cleanup(MusicTrack_t1785059261_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RX.AudioHandler/MusicTrack
extern "C" void MusicTrack_t1785059261_marshal_com(const MusicTrack_t1785059261& unmarshaled, MusicTrack_t1785059261_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___Track_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Track' of type 'MusicTrack': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Track_1Exception);
}
extern "C" void MusicTrack_t1785059261_marshal_com_back(const MusicTrack_t1785059261_marshaled_com& marshaled, MusicTrack_t1785059261& unmarshaled)
{
	Il2CppCodeGenException* ___Track_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Track' of type 'MusicTrack': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Track_1Exception);
}
// Conversion method for clean up from marshalling of: RX.AudioHandler/MusicTrack
extern "C" void MusicTrack_t1785059261_marshal_com_cleanup(MusicTrack_t1785059261_marshaled_com& marshaled)
{
}
// Conversion methods for marshalling of: RX.AudioHandler/SoundEffect
extern "C" void SoundEffect_t1963807215_marshal_pinvoke(const SoundEffect_t1963807215& unmarshaled, SoundEffect_t1963807215_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___Sound_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Sound' of type 'SoundEffect': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Sound_1Exception);
}
extern "C" void SoundEffect_t1963807215_marshal_pinvoke_back(const SoundEffect_t1963807215_marshaled_pinvoke& marshaled, SoundEffect_t1963807215& unmarshaled)
{
	Il2CppCodeGenException* ___Sound_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Sound' of type 'SoundEffect': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Sound_1Exception);
}
// Conversion method for clean up from marshalling of: RX.AudioHandler/SoundEffect
extern "C" void SoundEffect_t1963807215_marshal_pinvoke_cleanup(SoundEffect_t1963807215_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RX.AudioHandler/SoundEffect
extern "C" void SoundEffect_t1963807215_marshal_com(const SoundEffect_t1963807215& unmarshaled, SoundEffect_t1963807215_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___Sound_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Sound' of type 'SoundEffect': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Sound_1Exception);
}
extern "C" void SoundEffect_t1963807215_marshal_com_back(const SoundEffect_t1963807215_marshaled_com& marshaled, SoundEffect_t1963807215& unmarshaled)
{
	Il2CppCodeGenException* ___Sound_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Sound' of type 'SoundEffect': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Sound_1Exception);
}
// Conversion method for clean up from marshalling of: RX.AudioHandler/SoundEffect
extern "C" void SoundEffect_t1963807215_marshal_com_cleanup(SoundEffect_t1963807215_marshaled_com& marshaled)
{
}
// System.Void RX.CreditsMenu::.ctor()
extern "C"  void CreditsMenu__ctor_m4155432564 (CreditsMenu_t1738754981 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.CreditsMenu::OnCloseButton()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2167152984;
extern const uint32_t CreditsMenu_OnCloseButton_m2772654599_MetadataUsageId;
extern "C"  void CreditsMenu_OnCloseButton_m2772654599 (CreditsMenu_t1738754981 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CreditsMenu_OnCloseButton_m2772654599_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t3349966182 * L_0 = __this->get_mainMenu_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RectTransform_t3349966182 * L_2 = __this->get_mainMenu_2();
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_4, (bool)0, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral2167152984, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void RX.Disease::.ctor()
extern Il2CppClass* Dictionary_2_t2446021101_il2cpp_TypeInfo_var;
extern Il2CppClass* DiseaseResist_t4003422759_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3753954334_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m1318821078_MethodInfo_var;
extern const uint32_t Disease__ctor_m1765875591_MetadataUsageId;
extern "C"  void Disease__ctor_m1765875591 (Disease_t3100275524 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Disease__ctor_m1765875591_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		Dictionary_2_t2446021101 * L_0 = (Dictionary_2_t2446021101 *)il2cpp_codegen_object_new(Dictionary_2_t2446021101_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3753954334(L_0, /*hidden argument*/Dictionary_2__ctor_m3753954334_MethodInfo_var);
		__this->set_diseaseDict_0(L_0);
		Dictionary_2_t2446021101 * L_1 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_2 = (DiseaseResist_t4003422759 *)il2cpp_codegen_object_new(DiseaseResist_t4003422759_il2cpp_TypeInfo_var);
		DiseaseResist__ctor_m802421511(L_2, 0, /*hidden argument*/NULL);
		Dictionary_2_Add_m1318821078(L_1, 1, L_2, /*hidden argument*/Dictionary_2_Add_m1318821078_MethodInfo_var);
		Dictionary_2_t2446021101 * L_3 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_4 = (DiseaseResist_t4003422759 *)il2cpp_codegen_object_new(DiseaseResist_t4003422759_il2cpp_TypeInfo_var);
		DiseaseResist__ctor_m802421511(L_4, 0, /*hidden argument*/NULL);
		Dictionary_2_Add_m1318821078(L_3, 2, L_4, /*hidden argument*/Dictionary_2_Add_m1318821078_MethodInfo_var);
		Dictionary_2_t2446021101 * L_5 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_6 = (DiseaseResist_t4003422759 *)il2cpp_codegen_object_new(DiseaseResist_t4003422759_il2cpp_TypeInfo_var);
		DiseaseResist__ctor_m802421511(L_6, 0, /*hidden argument*/NULL);
		Dictionary_2_Add_m1318821078(L_5, 3, L_6, /*hidden argument*/Dictionary_2_Add_m1318821078_MethodInfo_var);
		Dictionary_2_t2446021101 * L_7 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_8 = (DiseaseResist_t4003422759 *)il2cpp_codegen_object_new(DiseaseResist_t4003422759_il2cpp_TypeInfo_var);
		DiseaseResist__ctor_m802421511(L_8, 0, /*hidden argument*/NULL);
		Dictionary_2_Add_m1318821078(L_7, 4, L_8, /*hidden argument*/Dictionary_2_Add_m1318821078_MethodInfo_var);
		Dictionary_2_t2446021101 * L_9 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_10 = (DiseaseResist_t4003422759 *)il2cpp_codegen_object_new(DiseaseResist_t4003422759_il2cpp_TypeInfo_var);
		DiseaseResist__ctor_m802421511(L_10, 0, /*hidden argument*/NULL);
		Dictionary_2_Add_m1318821078(L_9, 0, L_10, /*hidden argument*/Dictionary_2_Add_m1318821078_MethodInfo_var);
		return;
	}
}
// System.Int32 RX.Disease::get_strength()
extern "C"  int32_t Disease_get_strength_m3105677917 (Disease_t3100275524 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__strength_1();
		return L_0;
	}
}
// System.String RX.Disease::get_name()
extern "C"  String_t* Disease_get_name_m3859280634 (Disease_t3100275524 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__name_2();
		return L_0;
	}
}
// System.Void RX.Disease::Spawn(System.Int32,System.Int32)
extern const MethodInfo* Dictionary_2_get_Item_m806907080_MethodInfo_var;
extern const uint32_t Disease_Spawn_m4143573810_MetadataUsageId;
extern "C"  void Disease_Spawn_m4143573810 (Disease_t3100275524 * __this, int32_t ___str0, int32_t ___pill1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Disease_Spawn_m4143573810_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = DiseaseNameGenerator_GetNewName_m3133571151(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__name_2(L_0);
		int32_t L_1 = ___str0;
		__this->set__strength_1(L_1);
		Dictionary_2_t2446021101 * L_2 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_3 = Dictionary_2_get_Item_m806907080(L_2, 1, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_4 = ___pill1;
		DiseaseResist_Set_m188002441(L_3, ((int32_t)((int32_t)L_4/(int32_t)5)), /*hidden argument*/NULL);
		Dictionary_2_t2446021101 * L_5 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_6 = Dictionary_2_get_Item_m806907080(L_5, 2, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_7 = ___pill1;
		DiseaseResist_Set_m188002441(L_6, ((int32_t)((int32_t)L_7/(int32_t)5)), /*hidden argument*/NULL);
		Dictionary_2_t2446021101 * L_8 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_9 = Dictionary_2_get_Item_m806907080(L_8, 3, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_10 = ___pill1;
		DiseaseResist_Set_m188002441(L_9, ((int32_t)((int32_t)L_10/(int32_t)5)), /*hidden argument*/NULL);
		Dictionary_2_t2446021101 * L_11 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_12 = Dictionary_2_get_Item_m806907080(L_11, 4, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_13 = ___pill1;
		DiseaseResist_Set_m188002441(L_12, ((int32_t)((int32_t)L_13/(int32_t)5)), /*hidden argument*/NULL);
		Dictionary_2_t2446021101 * L_14 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_15 = Dictionary_2_get_Item_m806907080(L_14, 0, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_16 = ___pill1;
		DiseaseResist_Set_m188002441(L_15, ((int32_t)((int32_t)L_16/(int32_t)5)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RX.Disease::ApplyEffect(RX.Pill/PillType,System.Single)
extern const MethodInfo* Dictionary_2_ContainsKey_m2408184319_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m806907080_MethodInfo_var;
extern const uint32_t Disease_ApplyEffect_m1476049996_MetadataUsageId;
extern "C"  bool Disease_ApplyEffect_m1476049996 (Disease_t3100275524 * __this, int32_t ___type0, float ___amount1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Disease_ApplyEffect_m1476049996_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2446021101 * L_0 = __this->get_diseaseDict_0();
		int32_t L_1 = ___type0;
		bool L_2 = Dictionary_2_ContainsKey_m2408184319(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2408184319_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0099;
		}
	}
	{
		Dictionary_2_t2446021101 * L_3 = __this->get_diseaseDict_0();
		int32_t L_4 = ___type0;
		DiseaseResist_t4003422759 * L_5 = Dictionary_2_get_Item_m806907080(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		float L_6 = ___amount1;
		bool L_7 = DiseaseResist_Damage_m1959458448(L_5, (((int32_t)((int32_t)L_6))), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0099;
		}
	}
	{
		Dictionary_2_t2446021101 * L_8 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_9 = Dictionary_2_get_Item_m806907080(L_8, 1, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_10 = L_9->get_needed_0();
		if (L_10)
		{
			goto IL_0099;
		}
	}
	{
		Dictionary_2_t2446021101 * L_11 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_12 = Dictionary_2_get_Item_m806907080(L_11, 0, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_13 = L_12->get_needed_0();
		if (L_13)
		{
			goto IL_0099;
		}
	}
	{
		Dictionary_2_t2446021101 * L_14 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_15 = Dictionary_2_get_Item_m806907080(L_14, 4, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_16 = L_15->get_needed_0();
		if (L_16)
		{
			goto IL_0099;
		}
	}
	{
		Dictionary_2_t2446021101 * L_17 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_18 = Dictionary_2_get_Item_m806907080(L_17, 3, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_19 = L_18->get_needed_0();
		if (L_19)
		{
			goto IL_0099;
		}
	}
	{
		Dictionary_2_t2446021101 * L_20 = __this->get_diseaseDict_0();
		DiseaseResist_t4003422759 * L_21 = Dictionary_2_get_Item_m806907080(L_20, 2, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_22 = L_21->get_needed_0();
		if (L_22)
		{
			goto IL_0099;
		}
	}
	{
		return (bool)1;
	}

IL_0099:
	{
		return (bool)0;
	}
}
// System.Void RX.Disease::GetDamage()
extern "C"  void Disease_GetDamage_m270065532 (Disease_t3100275524 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 RX.Disease::GetResistance(RX.Pill/PillType)
extern const MethodInfo* Dictionary_2_ContainsKey_m2408184319_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m806907080_MethodInfo_var;
extern const uint32_t Disease_GetResistance_m4216400819_MetadataUsageId;
extern "C"  int32_t Disease_GetResistance_m4216400819 (Disease_t3100275524 * __this, int32_t ___type0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Disease_GetResistance_m4216400819_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2446021101 * L_0 = __this->get_diseaseDict_0();
		int32_t L_1 = ___type0;
		bool L_2 = Dictionary_2_ContainsKey_m2408184319(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2408184319_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t2446021101 * L_3 = __this->get_diseaseDict_0();
		int32_t L_4 = ___type0;
		DiseaseResist_t4003422759 * L_5 = Dictionary_2_get_Item_m806907080(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m806907080_MethodInfo_var);
		int32_t L_6 = L_5->get_needed_0();
		return L_6;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void RX.Disease/DiseaseResist::.ctor(System.Int32)
extern "C"  void DiseaseResist__ctor_m802421511 (DiseaseResist_t4003422759 * __this, int32_t ___n0, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___n0;
		__this->set_needed_0(L_0);
		return;
	}
}
// System.Void RX.Disease/DiseaseResist::Set(System.Int32)
extern "C"  void DiseaseResist_Set_m188002441 (DiseaseResist_t4003422759 * __this, int32_t ___n0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___n0;
		__this->set_needed_0(L_0);
		return;
	}
}
// System.Boolean RX.Disease/DiseaseResist::Damage(System.Int32)
extern "C"  bool DiseaseResist_Damage_m1959458448 (DiseaseResist_t4003422759 * __this, int32_t ___n0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_needed_0();
		int32_t L_1 = ___n0;
		__this->set_needed_0(((int32_t)((int32_t)L_0-(int32_t)L_1)));
		int32_t L_2 = __this->get_needed_0();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		__this->set_needed_0(0);
		return (bool)1;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Void RX.DiseaseNameGenerator::.ctor()
extern "C"  void DiseaseNameGenerator__ctor_m2429749983 (DiseaseNameGenerator_t3577572484 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String RX.DiseaseNameGenerator::GetNewName()
extern "C"  String_t* DiseaseNameGenerator_GetNewName_m3133571151 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Void RX.GameHandler::.ctor()
extern "C"  void GameHandler__ctor_m3486477045 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		__this->set__level_30(1);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RX.GameHandler::get_selectionDragActive()
extern "C"  bool GameHandler_get_selectionDragActive_m3433066694 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get__selectionDragActive_26();
		return L_0;
	}
}
// System.Int32 RX.GameHandler::get_level()
extern "C"  int32_t GameHandler_get_level_m750807014 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__level_30();
		return L_0;
	}
}
// System.Int32 RX.GameHandler::get_score()
extern "C"  int32_t GameHandler_get_score_m656229758 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__score_31();
		return L_0;
	}
}
// System.Boolean RX.GameHandler::get_paused()
extern "C"  bool GameHandler_get_paused_m3396363372 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get__paused_32();
		return L_0;
	}
}
// System.Boolean RX.GameHandler::get_active()
extern "C"  bool GameHandler_get_active_m3385988580 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get__active_33();
		return L_0;
	}
}
// System.Void RX.GameHandler::Init()
extern Il2CppClass* List_1_t1722678277_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Disease_t3100275524_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m2547133024_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisGameUI_t1191293910_m1214790711_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisGrid_t3469560614_m205978629_MethodInfo_var;
extern const uint32_t GameHandler_Init_m117557163_MetadataUsageId;
extern "C"  void GameHandler_Init_m117557163 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_Init_m117557163_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1722678277 * L_0 = (List_1_t1722678277 *)il2cpp_codegen_object_new(List_1_t1722678277_il2cpp_TypeInfo_var);
		List_1__ctor_m2547133024(L_0, /*hidden argument*/List_1__ctor_m2547133024_MethodInfo_var);
		__this->set_selectedPills_25(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameUI_t1191293910 * L_1 = Object_FindObjectOfType_TisGameUI_t1191293910_m1214790711(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisGameUI_t1191293910_m1214790711_MethodInfo_var);
		__this->set_gameUI_23(L_1);
		Grid_t3469560614 * L_2 = Object_FindObjectOfType_TisGrid_t3469560614_m205978629(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisGrid_t3469560614_m205978629_MethodInfo_var);
		__this->set_grid_24(L_2);
		Disease_t3100275524 * L_3 = (Disease_t3100275524 *)il2cpp_codegen_object_new(Disease_t3100275524_il2cpp_TypeInfo_var);
		Disease__ctor_m1765875591(L_3, /*hidden argument*/NULL);
		__this->set_disease_29(L_3);
		GameUI_t1191293910 * L_4 = __this->get_gameUI_23();
		bool L_5 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		GameUI_t1191293910 * L_6 = __this->get_gameUI_23();
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(L_6, /*hidden argument*/NULL);
		bool L_8 = GameObject_get_activeInHierarchy_m4242915935(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		GameHandler_StartNewGame_m500076576(__this, 1, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void RX.GameHandler::Close()
extern "C"  void GameHandler_Close_m3029597687 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		__this->set__active_33((bool)0);
		return;
	}
}
// System.Void RX.GameHandler::StartNewGame(System.Int32)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* DateTime_t693205669_il2cpp_TypeInfo_var;
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisGameUI_t1191293910_m1214790711_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisGrid_t3469560614_m205978629_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1161304811;
extern const uint32_t GameHandler_StartNewGame_m500076576_MetadataUsageId;
extern "C"  void GameHandler_StartNewGame_m500076576 (GameHandler_t1894465376 * __this, int32_t ___startingLevel0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_StartNewGame_m500076576_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t693205669  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		__this->set__active_33((bool)1);
		__this->set__paused_32((bool)0);
		int32_t L_0 = ___startingLevel0;
		__this->set__level_30(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameUI_t1191293910 * L_1 = Object_FindObjectOfType_TisGameUI_t1191293910_m1214790711(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisGameUI_t1191293910_m1214790711_MethodInfo_var);
		__this->set_gameUI_23(L_1);
		Grid_t3469560614 * L_2 = Object_FindObjectOfType_TisGrid_t3469560614_m205978629(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisGrid_t3469560614_m205978629_MethodInfo_var);
		__this->set_grid_24(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_3 = DateTime_get_Now_m24136300(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		int64_t L_4 = DateTime_get_Ticks_m310281298((&V_0), /*hidden argument*/NULL);
		__this->set_randomSeed_22((((int32_t)((int32_t)L_4))));
		int32_t L_5 = __this->get_randomSeed_22();
		Random_InitState_m1507073258(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_currentTime_20((0.0f));
		__this->set_lastTime_21((0.0f));
		AudioHandler_t3268548328 * L_6 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlayMusic_m3991440629(L_6, _stringLiteral1161304811, (bool)0, /*hidden argument*/NULL);
		Disease_t3100275524 * L_7 = __this->get_disease_29();
		int32_t L_8 = __this->get__level_30();
		Disease_Spawn_m4143573810(L_7, 0, (((int32_t)((int32_t)((float)((float)(8.0f)*(float)((float)((float)(1.0f)+(float)((float)((float)(((float)((float)L_8)))*(float)(0.75f)))))))))), /*hidden argument*/NULL);
		__this->set_health_28((150.0f));
		GameUI_t1191293910 * L_9 = __this->get_gameUI_23();
		float L_10 = __this->get_health_28();
		GameUI_UpdateHealthBar_m2748785372(L_9, ((float)((float)L_10/(float)(150.0f))), /*hidden argument*/NULL);
		GameUI_t1191293910 * L_11 = __this->get_gameUI_23();
		Disease_t3100275524 * L_12 = __this->get_disease_29();
		GameUI_UpdateDiseaseText_m1554610413(L_11, L_12, /*hidden argument*/NULL);
		GameUI_t1191293910 * L_13 = __this->get_gameUI_23();
		int32_t L_14 = __this->get__score_31();
		GameUI_UpdateScoreText_m1368285856(L_13, L_14, /*hidden argument*/NULL);
		GameUI_t1191293910 * L_15 = __this->get_gameUI_23();
		int32_t L_16 = __this->get__level_30();
		GameUI_UpdateLevelText_m3003083748(L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameHandler::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t GameHandler_Update_m1746406804_MetadataUsageId;
extern "C"  void GameHandler_Update_m1746406804 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_Update_m1746406804_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GameHandler_get_paused_m3396363372(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0135;
		}
	}
	{
		bool L_1 = __this->get__active_33();
		if (!L_1)
		{
			goto IL_0135;
		}
	}
	{
		float L_2 = __this->get_currentTime_20();
		float L_3 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = __this->get__level_30();
		float L_5 = __this->get_timeModifier_34();
		__this->set_currentTime_20(((float)((float)L_2+(float)((float)((float)L_3*(float)((float)((float)((float)((float)(1.0f)+(float)((float)((float)(((float)((float)L_4)))*(float)(0.04f)))))+(float)L_5)))))));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006b;
		}
	}

IL_005a:
	{
		bool L_8 = __this->get__selectionDragActive_26();
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		GameHandler_CancelSelectDrag_m3473773731(__this, /*hidden argument*/NULL);
	}

IL_006b:
	{
		float L_9 = __this->get_health_28();
		float L_10 = __this->get_currentTime_20();
		float L_11 = __this->get_lastTime_21();
		__this->set_health_28(((float)((float)L_9-(float)((float)((float)((float)((float)L_10-(float)L_11))*(float)(4.0f))))));
		GameUI_t1191293910 * L_12 = __this->get_gameUI_23();
		float L_13 = __this->get_health_28();
		GameUI_UpdateHealthBar_m2748785372(L_12, ((float)((float)L_13/(float)(150.0f))), /*hidden argument*/NULL);
		float L_14 = __this->get_currentTime_20();
		__this->set_lastTime_21(L_14);
		float L_15 = __this->get_health_28();
		if ((!(((float)L_15) <= ((float)(0.0f)))))
		{
			goto IL_00e2;
		}
	}
	{
		__this->set__paused_32((bool)1);
		__this->set__active_33((bool)0);
		GameUI_t1191293910 * L_16 = __this->get_gameUI_23();
		int32_t L_17 = __this->get__score_31();
		GameUI_ShowGameOver_m3878574723(L_16, L_17, /*hidden argument*/NULL);
		goto IL_0135;
	}

IL_00e2:
	{
		float L_18 = __this->get_health_28();
		if ((!(((float)((float)((float)L_18/(float)(150.0f)))) <= ((float)(0.25f)))))
		{
			goto IL_010e;
		}
	}
	{
		bool L_19 = __this->get_panicMode_35();
		if (L_19)
		{
			goto IL_010e;
		}
	}
	{
		GameHandler_EnterPanicMode_m256876583(__this, /*hidden argument*/NULL);
		goto IL_0135;
	}

IL_010e:
	{
		bool L_20 = __this->get_panicMode_35();
		if (!L_20)
		{
			goto IL_0135;
		}
	}
	{
		float L_21 = __this->get_health_28();
		if ((!(((float)((float)((float)L_21/(float)(150.0f)))) > ((float)(0.25f)))))
		{
			goto IL_0135;
		}
	}
	{
		GameHandler_ExitPanicMode_m1621273663(__this, /*hidden argument*/NULL);
	}

IL_0135:
	{
		return;
	}
}
// System.Void RX.GameHandler::Pause()
extern "C"  void GameHandler_Pause_m2614363543 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		__this->set__paused_32((bool)1);
		return;
	}
}
// System.Void RX.GameHandler::Unpause()
extern "C"  void GameHandler_Unpause_m3746777730 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		__this->set__paused_32((bool)0);
		return;
	}
}
// System.Void RX.GameHandler::BeginSelectDrag()
extern "C"  void GameHandler_BeginSelectDrag_m4046234022 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		__this->set__selectionDragActive_26((bool)1);
		return;
	}
}
// System.Void RX.GameHandler::CancelSelectDrag()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m3057514331_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m246578178_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m1576250993_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1737292250;
extern const uint32_t GameHandler_CancelSelectDrag_m3473773731_MetadataUsageId;
extern "C"  void GameHandler_CancelSelectDrag_m3473773731 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_CancelSelectDrag_m3473773731_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		AudioHandler_t3268548328 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlaySound_m722096945(L_0, _stringLiteral1737292250, (3.25f), /*hidden argument*/NULL);
		__this->set__selectionDragActive_26((bool)0);
		V_0 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		List_1_t1722678277 * L_1 = __this->get_selectedPills_25();
		int32_t L_2 = V_0;
		Pill_t2353557145 * L_3 = List_1_get_Item_m3057514331(L_1, L_2, /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		Pill_Deselect_m1017148859(L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_5 = V_0;
		List_1_t1722678277 * L_6 = __this->get_selectedPills_25();
		int32_t L_7 = List_1_get_Count_m246578178(L_6, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0022;
		}
	}
	{
		List_1_t1722678277 * L_8 = __this->get_selectedPills_25();
		List_1_Clear_m1576250993(L_8, /*hidden argument*/List_1_Clear_m1576250993_MethodInfo_var);
		__this->set_lastPill_27((Pill_t2353557145 *)NULL);
		return;
	}
}
// System.Void RX.GameHandler::EndSelectDrag()
extern const MethodInfo* List_1_get_Item_m3057514331_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m246578178_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m1576250993_MethodInfo_var;
extern const uint32_t GameHandler_EndSelectDrag_m3460194502_MetadataUsageId;
extern "C"  void GameHandler_EndSelectDrag_m3460194502 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_EndSelectDrag_m3460194502_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->set__selectionDragActive_26((bool)0);
		GameHandler_EvaluateCombo_m3658368566(__this, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0029;
	}

IL_0014:
	{
		List_1_t1722678277 * L_0 = __this->get_selectedPills_25();
		int32_t L_1 = V_0;
		Pill_t2353557145 * L_2 = List_1_get_Item_m3057514331(L_0, L_1, /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		Pill_Deselect_m1017148859(L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_4 = V_0;
		List_1_t1722678277 * L_5 = __this->get_selectedPills_25();
		int32_t L_6 = List_1_get_Count_m246578178(L_5, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0014;
		}
	}
	{
		List_1_t1722678277 * L_7 = __this->get_selectedPills_25();
		List_1_Clear_m1576250993(L_7, /*hidden argument*/List_1_Clear_m1576250993_MethodInfo_var);
		__this->set_lastPill_27((Pill_t2353557145 *)NULL);
		return;
	}
}
// System.Boolean RX.GameHandler::AddPill(RX.Pill)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m246578178_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m3057514331_MethodInfo_var;
extern const MethodInfo* List_1_Remove_m313303963_MethodInfo_var;
extern const MethodInfo* List_1_Contains_m3872053194_MethodInfo_var;
extern const MethodInfo* List_1_Add_m451278788_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral325352537;
extern const uint32_t GameHandler_AddPill_m3439545482_MetadataUsageId;
extern "C"  bool GameHandler_AddPill_m3439545482 (GameHandler_t1894465376 * __this, Pill_t2353557145 * ___p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_AddPill_m3439545482_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Pill_t2353557145 * L_0 = __this->get_lastPill_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0148;
		}
	}
	{
		List_1_t1722678277 * L_2 = __this->get_selectedPills_25();
		int32_t L_3 = List_1_get_Count_m246578178(L_2, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		Pill_t2353557145 * L_4 = ___p0;
		List_1_t1722678277 * L_5 = __this->get_selectedPills_25();
		List_1_t1722678277 * L_6 = __this->get_selectedPills_25();
		int32_t L_7 = List_1_get_Count_m246578178(L_6, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		Pill_t2353557145 * L_8 = List_1_get_Item_m3057514331(L_5, ((int32_t)((int32_t)L_7-(int32_t)2)), /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0085;
		}
	}
	{
		List_1_t1722678277 * L_10 = __this->get_selectedPills_25();
		List_1_t1722678277 * L_11 = __this->get_selectedPills_25();
		int32_t L_12 = List_1_get_Count_m246578178(L_11, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		Pill_t2353557145 * L_13 = List_1_get_Item_m3057514331(L_10, ((int32_t)((int32_t)L_12-(int32_t)1)), /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		Pill_Deselect_m1017148859(L_13, /*hidden argument*/NULL);
		List_1_t1722678277 * L_14 = __this->get_selectedPills_25();
		List_1_t1722678277 * L_15 = __this->get_selectedPills_25();
		List_1_t1722678277 * L_16 = __this->get_selectedPills_25();
		int32_t L_17 = List_1_get_Count_m246578178(L_16, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		Pill_t2353557145 * L_18 = List_1_get_Item_m3057514331(L_15, ((int32_t)((int32_t)L_17-(int32_t)1)), /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		List_1_Remove_m313303963(L_14, L_18, /*hidden argument*/List_1_Remove_m313303963_MethodInfo_var);
	}

IL_0085:
	{
		Pill_t2353557145 * L_19 = __this->get_lastPill_27();
		int32_t L_20 = L_19->get_type_13();
		Pill_t2353557145 * L_21 = ___p0;
		int32_t L_22 = L_21->get_type_13();
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_00ba;
		}
	}
	{
		Pill_t2353557145 * L_23 = ___p0;
		int32_t L_24 = L_23->get_type_13();
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_00ba;
		}
	}
	{
		Pill_t2353557145 * L_25 = __this->get_lastPill_27();
		int32_t L_26 = L_25->get_type_13();
		if ((((int32_t)L_26) == ((int32_t)5)))
		{
			goto IL_00ba;
		}
	}
	{
		return (bool)0;
	}

IL_00ba:
	{
		Pill_t2353557145 * L_27 = __this->get_lastPill_27();
		int32_t L_28 = GridItem_get_gridX_m1510288497(L_27, /*hidden argument*/NULL);
		Pill_t2353557145 * L_29 = ___p0;
		int32_t L_30 = GridItem_get_gridX_m1510288497(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_28) == ((int32_t)((int32_t)((int32_t)L_30-(int32_t)1)))))
		{
			goto IL_0100;
		}
	}
	{
		Pill_t2353557145 * L_31 = __this->get_lastPill_27();
		int32_t L_32 = GridItem_get_gridX_m1510288497(L_31, /*hidden argument*/NULL);
		Pill_t2353557145 * L_33 = ___p0;
		int32_t L_34 = GridItem_get_gridX_m1510288497(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)((int32_t)L_34+(int32_t)1)))))
		{
			goto IL_0100;
		}
	}
	{
		Pill_t2353557145 * L_35 = __this->get_lastPill_27();
		int32_t L_36 = GridItem_get_gridX_m1510288497(L_35, /*hidden argument*/NULL);
		Pill_t2353557145 * L_37 = ___p0;
		int32_t L_38 = GridItem_get_gridX_m1510288497(L_37, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_0146;
		}
	}

IL_0100:
	{
		Pill_t2353557145 * L_39 = __this->get_lastPill_27();
		int32_t L_40 = GridItem_get_gridY_m1510288464(L_39, /*hidden argument*/NULL);
		Pill_t2353557145 * L_41 = ___p0;
		int32_t L_42 = GridItem_get_gridY_m1510288464(L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)((int32_t)L_42-(int32_t)1)))))
		{
			goto IL_0148;
		}
	}
	{
		Pill_t2353557145 * L_43 = __this->get_lastPill_27();
		int32_t L_44 = GridItem_get_gridY_m1510288464(L_43, /*hidden argument*/NULL);
		Pill_t2353557145 * L_45 = ___p0;
		int32_t L_46 = GridItem_get_gridY_m1510288464(L_45, /*hidden argument*/NULL);
		if ((((int32_t)L_44) == ((int32_t)((int32_t)((int32_t)L_46+(int32_t)1)))))
		{
			goto IL_0148;
		}
	}
	{
		Pill_t2353557145 * L_47 = __this->get_lastPill_27();
		int32_t L_48 = GridItem_get_gridY_m1510288464(L_47, /*hidden argument*/NULL);
		Pill_t2353557145 * L_49 = ___p0;
		int32_t L_50 = GridItem_get_gridY_m1510288464(L_49, /*hidden argument*/NULL);
		if ((((int32_t)L_48) == ((int32_t)L_50)))
		{
			goto IL_0148;
		}
	}

IL_0146:
	{
		return (bool)0;
	}

IL_0148:
	{
		List_1_t1722678277 * L_51 = __this->get_selectedPills_25();
		Pill_t2353557145 * L_52 = ___p0;
		bool L_53 = List_1_Contains_m3872053194(L_51, L_52, /*hidden argument*/List_1_Contains_m3872053194_MethodInfo_var);
		if (L_53)
		{
			goto IL_0182;
		}
	}
	{
		List_1_t1722678277 * L_54 = __this->get_selectedPills_25();
		Pill_t2353557145 * L_55 = ___p0;
		List_1_Add_m451278788(L_54, L_55, /*hidden argument*/List_1_Add_m451278788_MethodInfo_var);
		AudioHandler_t3268548328 * L_56 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlaySound_m722096945(L_56, _stringLiteral325352537, (3.25f), /*hidden argument*/NULL);
		Pill_t2353557145 * L_57 = ___p0;
		__this->set_lastPill_27(L_57);
		return (bool)1;
	}

IL_0182:
	{
		return (bool)0;
	}
}
// System.Void RX.GameHandler::EnterPanicMode()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3521151117;
extern const uint32_t GameHandler_EnterPanicMode_m256876583_MetadataUsageId;
extern "C"  void GameHandler_EnterPanicMode_m256876583 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_EnterPanicMode_m256876583_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioHandler_t3268548328 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlayMusic_m3991440629(L_0, _stringLiteral3521151117, (bool)1, /*hidden argument*/NULL);
		UIHandler_t1120912888 * L_1 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_uiHandler_3();
		L_1->set_usePanicColors_12((bool)1);
		UIHandler_t1120912888 * L_2 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_uiHandler_3();
		L_2->set_timeBetweenColor_7((0.33f));
		__this->set_panicMode_35((bool)1);
		return;
	}
}
// System.Void RX.GameHandler::ExitPanicMode()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1161304811;
extern const uint32_t GameHandler_ExitPanicMode_m1621273663_MetadataUsageId;
extern "C"  void GameHandler_ExitPanicMode_m1621273663 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_ExitPanicMode_m1621273663_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioHandler_t3268548328 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlayMusic_m3991440629(L_0, _stringLiteral1161304811, (bool)1, /*hidden argument*/NULL);
		UIHandler_t1120912888 * L_1 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_uiHandler_3();
		L_1->set_usePanicColors_12((bool)0);
		UIHandler_t1120912888 * L_2 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_uiHandler_3();
		L_2->set_timeBetweenColor_7((8.0f));
		__this->set_panicMode_35((bool)0);
		return;
	}
}
// System.Void RX.GameHandler::IncreaseScore(System.Int32)
extern "C"  void GameHandler_IncreaseScore_m317342922 (GameHandler_t1894465376 * __this, int32_t ___amount0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__score_31();
		int32_t L_1 = ___amount0;
		int32_t L_2 = __this->get__level_30();
		__this->set__score_31(((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((int32_t)((float)((float)(((float)((float)L_1)))*(float)((float)((float)(1.0f)+(float)((float)((float)(((float)((float)L_2)))*(float)(0.2f)))))))))))));
		GameUI_t1191293910 * L_3 = __this->get_gameUI_23();
		int32_t L_4 = __this->get__score_31();
		GameUI_UpdateScoreText_m1368285856(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameHandler::IncrementLevel()
extern "C"  void GameHandler_IncrementLevel_m1254490036 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__level_30();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)50))))
		{
			goto IL_001d;
		}
	}
	{
		GameHandler_IncreaseScore_m317342922(__this, ((int32_t)1000), /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001d:
	{
		int32_t L_1 = __this->get__level_30();
		__this->set__level_30(((int32_t)((int32_t)L_1+(int32_t)1)));
	}

IL_002b:
	{
		GameUI_t1191293910 * L_2 = __this->get_gameUI_23();
		int32_t L_3 = __this->get__level_30();
		GameUI_UpdateLevelText_m3003083748(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameHandler::IncrementHealth(System.Int32)
extern "C"  void GameHandler_IncrementHealth_m2111314225 (GameHandler_t1894465376 * __this, int32_t ___hp0, const MethodInfo* method)
{
	GameHandler_t1894465376 * G_B2_0 = NULL;
	GameHandler_t1894465376 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	GameHandler_t1894465376 * G_B3_1 = NULL;
	{
		float L_0 = __this->get_health_28();
		int32_t L_1 = ___hp0;
		__this->set_health_28(((float)((float)L_0+(float)(((float)((float)L_1))))));
		float L_2 = __this->get_health_28();
		G_B1_0 = __this;
		if ((!(((float)L_2) > ((float)(150.0f)))))
		{
			G_B2_0 = __this;
			goto IL_002a;
		}
	}
	{
		G_B3_0 = (150.0f);
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002a:
	{
		float L_3 = __this->get_health_28();
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		G_B3_1->set_health_28(G_B3_0);
		GameUI_t1191293910 * L_4 = __this->get_gameUI_23();
		float L_5 = __this->get_health_28();
		GameUI_UpdateHealthBar_m2748785372(L_4, ((float)((float)L_5/(float)(150.0f))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameHandler::EvaluateCombo()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Count_m246578178_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m3057514331_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3990055475;
extern Il2CppCodeGenString* _stringLiteral3524147276;
extern Il2CppCodeGenString* _stringLiteral22442200;
extern const uint32_t GameHandler_EvaluateCombo_m3658368566_MetadataUsageId;
extern "C"  void GameHandler_EvaluateCombo_m3658368566 (GameHandler_t1894465376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameHandler_EvaluateCombo_m3658368566_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		List_1_t1722678277 * L_0 = __this->get_selectedPills_25();
		int32_t L_1 = List_1_get_Count_m246578178(L_0, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		if ((((int32_t)L_1) < ((int32_t)3)))
		{
			goto IL_015f;
		}
	}
	{
		V_0 = 0;
		goto IL_002d;
	}

IL_0018:
	{
		List_1_t1722678277 * L_2 = __this->get_selectedPills_25();
		int32_t L_3 = V_0;
		Pill_t2353557145 * L_4 = List_1_get_Item_m3057514331(L_2, L_3, /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		Pill_Use_m2856164781(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		List_1_t1722678277 * L_7 = __this->get_selectedPills_25();
		int32_t L_8 = List_1_get_Count_m246578178(L_7, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0018;
		}
	}
	{
		List_1_t1722678277 * L_9 = __this->get_selectedPills_25();
		int32_t L_10 = List_1_get_Count_m246578178(L_9, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		V_1 = ((int32_t)((int32_t)L_10-(int32_t)3));
		List_1_t1722678277 * L_11 = __this->get_selectedPills_25();
		Pill_t2353557145 * L_12 = List_1_get_Item_m3057514331(L_11, 0, /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		int32_t L_13 = L_12->get_type_13();
		V_2 = L_13;
		int32_t L_14 = V_1;
		List_1_t1722678277 * L_15 = __this->get_selectedPills_25();
		int32_t L_16 = List_1_get_Count_m246578178(L_15, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		V_3 = ((float)((float)((float)((float)((float)((float)(((float)((float)L_14)))*(float)(0.5f)))+(float)(1.0f)))*(float)(((float)((float)L_16)))));
		int32_t L_17 = V_1;
		List_1_t1722678277 * L_18 = __this->get_selectedPills_25();
		int32_t L_19 = List_1_get_Count_m246578178(L_18, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		GameHandler_IncrementHealth_m2111314225(__this, ((int32_t)((int32_t)(((int32_t)((int32_t)((float)((float)((float)((float)(((float)((float)((int32_t)((int32_t)L_17*(int32_t)1)))))*(float)(1.75f)))+(float)(1.0f))))))*(int32_t)L_19)), /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		GameHandler_IncreaseScore_m317342922(__this, (((int32_t)((int32_t)((float)((float)(10.0f)*(float)((float)((float)(1.0f)+(float)((float)((float)(0.5f)*(float)(((float)((float)L_20)))))))))))), /*hidden argument*/NULL);
		Disease_t3100275524 * L_21 = __this->get_disease_29();
		int32_t L_22 = V_2;
		float L_23 = V_3;
		bool L_24 = Disease_ApplyEffect_m1476049996(L_21, L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_012a;
		}
	}
	{
		AudioHandler_t3268548328 * L_25 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlaySound_m722096945(L_25, _stringLiteral3990055475, (1.0f), /*hidden argument*/NULL);
		int32_t L_26 = __this->get__level_30();
		GameHandler_IncreaseScore_m317342922(__this, (((int32_t)((int32_t)((float)((float)(250.0f)*(float)((float)((float)(1.0f)+(float)((float)((float)(((float)((float)L_26)))*(float)(0.1f)))))))))), /*hidden argument*/NULL);
		GameHandler_IncrementLevel_m1254490036(__this, /*hidden argument*/NULL);
		Disease_t3100275524 * L_27 = __this->get_disease_29();
		int32_t L_28 = __this->get__level_30();
		Disease_Spawn_m4143573810(L_27, 0, (((int32_t)((int32_t)((float)((float)(8.0f)*(float)((float)((float)(1.0f)+(float)((float)((float)(((float)((float)L_28)))*(float)(0.75f)))))))))), /*hidden argument*/NULL);
	}

IL_012a:
	{
		GameUI_t1191293910 * L_29 = __this->get_gameUI_23();
		Disease_t3100275524 * L_30 = __this->get_disease_29();
		GameUI_UpdateDiseaseText_m1554610413(L_29, L_30, /*hidden argument*/NULL);
		AudioHandler_t3268548328 * L_31 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlaySound_m722096945(L_31, _stringLiteral3524147276, (3.25f), /*hidden argument*/NULL);
		Grid_t3469560614 * L_32 = __this->get_grid_24();
		Grid_UpdatePills_m3942602276(L_32, /*hidden argument*/NULL);
		goto IL_0173;
	}

IL_015f:
	{
		AudioHandler_t3268548328 * L_33 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlaySound_m722096945(L_33, _stringLiteral22442200, (3.25f), /*hidden argument*/NULL);
	}

IL_0173:
	{
		return;
	}
}
// System.Void RX.GameInit::.ctor()
extern "C"  void GameInit__ctor_m1866159055 (GameInit_t1436240786 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameInit::Awake()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t GameInit_Awake_m1565459152_MetadataUsageId;
extern "C"  void GameInit_Awake_m1565459152 (GameInit_t1436240786 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameInit_Awake_m1565459152_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_set_targetFrameRate_m2941880625(NULL /*static, unused*/, ((int32_t)60), /*hidden argument*/NULL);
		Top_InitValues_m3609086004(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameOptions::.ctor()
extern "C"  void GameOptions__ctor_m355443485 (GameOptions_t1109942226 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameOptions::OnBackButton()
extern "C"  void GameOptions_OnBackButton_m1301077777 (GameOptions_t1109942226 * __this, const MethodInfo* method)
{
	{
		RectTransform_t3349966182 * L_0 = __this->get_mainMenu_3();
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_1, (bool)1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameOptions::OnGoButton()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const uint32_t GameOptions_OnGoButton_m2751389412_MetadataUsageId;
extern "C"  void GameOptions_OnGoButton_m2751389412 (GameOptions_t1109942226 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameOptions_OnGoButton_m2751389412_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t3349966182 * L_0 = __this->get_game_2();
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_1, (bool)1, /*hidden argument*/NULL);
		GameHandler_t1894465376 * L_2 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		int32_t L_3 = __this->get_levelValue_5();
		GameHandler_StartNewGame_m500076576(L_2, L_3, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_4, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameOptions::OnSlider(System.Single)
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const uint32_t GameOptions_OnSlider_m639008780_MetadataUsageId;
extern "C"  void GameOptions_OnSlider_m639008780 (GameOptions_t1109942226 * __this, float ___pos0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameOptions_OnSlider_m639008780_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___pos0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Lerp_m1686556575(NULL /*static, unused*/, (0.0f), (50.0f), L_0, /*hidden argument*/NULL);
		__this->set_levelValue_5((((int32_t)((int32_t)L_1))));
		Text_t356221433 * L_2 = __this->get_levelText_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_4 = __this->get_levelValue_5();
		int32_t L_5 = L_4;
		Il2CppObject * L_6 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m56707527(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
		return;
	}
}
// System.Void RX.GameOver::.ctor()
extern "C"  void GameOver__ctor_m3882415459 (GameOver_t797685186 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameOver::SetScoreText(System.Int32)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const uint32_t GameOver_SetScoreText_m1354734401_MetadataUsageId;
extern "C"  void GameOver_SetScoreText_m1354734401 (GameOver_t797685186 * __this, int32_t ___score0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameOver_SetScoreText_m1354734401_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_scoreText_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Text_t356221433 * L_2 = __this->get_scoreText_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_4 = ___score0;
		int32_t L_5 = L_4;
		Il2CppObject * L_6 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m56707527(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
	}

IL_002b:
	{
		return;
	}
}
// System.Void RX.GameOver::OnMainMenuButton()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral442195652;
extern Il2CppCodeGenString* _stringLiteral540925403;
extern const uint32_t GameOver_OnMainMenuButton_m3746626760_MetadataUsageId;
extern "C"  void GameOver_OnMainMenuButton_m3746626760 (GameOver_t797685186 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameOver_OnMainMenuButton_m3746626760_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t3349966182 * L_0 = __this->get_mainMenu_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		RectTransform_t3349966182 * L_2 = __this->get_mainMenu_3();
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)1, /*hidden argument*/NULL);
		AudioHandler_t3268548328 * L_4 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlayMusic_m3991440629(L_4, _stringLiteral442195652, (bool)0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_5, (bool)0, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral540925403, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void RX.GameOver::OnReplayButton()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1226987665;
extern const uint32_t GameOver_OnReplayButton_m2859181291_MetadataUsageId;
extern "C"  void GameOver_OnReplayButton_m2859181291 (GameOver_t797685186 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameOver_OnReplayButton_m2859181291_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t3349966182 * L_0 = __this->get_game_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		RectTransform_t3349966182 * L_2 = __this->get_game_2();
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)1, /*hidden argument*/NULL);
		GameHandler_t1894465376 * L_4 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		GameHandler_StartNewGame_m500076576(L_4, 1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_5, (bool)0, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1226987665, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void RX.GameUI::.ctor()
extern "C"  void GameUI__ctor_m750921321 (GameUI_t1191293910 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameUI::OnPauseButton()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const uint32_t GameUI_OnPauseButton_m2923458650_MetadataUsageId;
extern "C"  void GameUI_OnPauseButton_m2923458650 (GameUI_t1191293910 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameUI_OnPauseButton_m2923458650_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioHandler_t3268548328 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PauseMusic_m4218602752(L_0, /*hidden argument*/NULL);
		RectTransform_t3349966182 * L_1 = __this->get_pauseScreen_2();
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(L_1, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameUI::UpdateHealthBar(System.Single)
extern "C"  void GameUI_UpdateHealthBar_m2748785372 (GameUI_t1191293910 * __this, float ___val0, const MethodInfo* method)
{
	{
		Image_t2042527209 * L_0 = __this->get_healthBar_4();
		float L_1 = ___val0;
		Image_set_fillAmount_m2220966753(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.GameUI::UpdateDiseaseText(RX.Disease)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029326;
extern const uint32_t GameUI_UpdateDiseaseText_m1554610413_MetadataUsageId;
extern "C"  void GameUI_UpdateDiseaseText_m1554610413 (GameUI_t1191293910 * __this, Disease_t3100275524 * ___d0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameUI_UpdateDiseaseText_m1554610413_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B16_0 = NULL;
	String_t* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	{
		Text_t356221433 * L_0 = __this->get_diseaseNameText_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Text_t356221433 * L_2 = __this->get_diseaseNameText_8();
		Disease_t3100275524 * L_3 = ___d0;
		String_t* L_4 = Disease_get_name_m3859280634(L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
	}

IL_0021:
	{
		Text_t356221433 * L_5 = __this->get_resistanceText_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0177;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_0 = L_7;
		Disease_t3100275524 * L_8 = ___d0;
		int32_t L_9 = Disease_GetResistance_m4216400819(L_8, 0, /*hidden argument*/NULL);
		V_1 = L_9;
		Disease_t3100275524 * L_10 = ___d0;
		int32_t L_11 = Disease_GetResistance_m4216400819(L_10, 4, /*hidden argument*/NULL);
		V_2 = L_11;
		Disease_t3100275524 * L_12 = ___d0;
		int32_t L_13 = Disease_GetResistance_m4216400819(L_12, 2, /*hidden argument*/NULL);
		V_3 = L_13;
		Disease_t3100275524 * L_14 = ___d0;
		int32_t L_15 = Disease_GetResistance_m4216400819(L_14, 3, /*hidden argument*/NULL);
		V_4 = L_15;
		Disease_t3100275524 * L_16 = ___d0;
		int32_t L_17 = Disease_GetResistance_m4216400819(L_16, 1, /*hidden argument*/NULL);
		V_5 = L_17;
		String_t* L_18 = V_0;
		int32_t L_19 = V_1;
		G_B4_0 = L_18;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)9))))
		{
			G_B5_0 = L_18;
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		Il2CppObject * L_23 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24 = String_Concat_m56707527(NULL /*static, unused*/, L_20, L_23, /*hidden argument*/NULL);
		G_B6_0 = L_24;
		G_B6_1 = G_B4_0;
		goto IL_008f;
	}

IL_007f:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		Il2CppObject * L_27 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral372029326, L_27, /*hidden argument*/NULL);
		G_B6_0 = L_28;
		G_B6_1 = G_B5_0;
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m2596409543(NULL /*static, unused*/, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		V_0 = L_29;
		String_t* L_30 = V_0;
		int32_t L_31 = V_2;
		G_B7_0 = L_30;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)9))))
		{
			G_B8_0 = L_30;
			goto IL_00b3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_33 = V_2;
		int32_t L_34 = L_33;
		Il2CppObject * L_35 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36 = String_Concat_m56707527(NULL /*static, unused*/, L_32, L_35, /*hidden argument*/NULL);
		G_B9_0 = L_36;
		G_B9_1 = G_B7_0;
		goto IL_00c3;
	}

IL_00b3:
	{
		int32_t L_37 = V_2;
		int32_t L_38 = L_37;
		Il2CppObject * L_39 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral372029326, L_39, /*hidden argument*/NULL);
		G_B9_0 = L_40;
		G_B9_1 = G_B8_0;
	}

IL_00c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m2596409543(NULL /*static, unused*/, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		V_0 = L_41;
		String_t* L_42 = V_0;
		int32_t L_43 = V_3;
		G_B10_0 = L_42;
		if ((((int32_t)L_43) <= ((int32_t)((int32_t)9))))
		{
			G_B11_0 = L_42;
			goto IL_00e7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_45 = V_3;
		int32_t L_46 = L_45;
		Il2CppObject * L_47 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_46);
		String_t* L_48 = String_Concat_m56707527(NULL /*static, unused*/, L_44, L_47, /*hidden argument*/NULL);
		G_B12_0 = L_48;
		G_B12_1 = G_B10_0;
		goto IL_00f7;
	}

IL_00e7:
	{
		int32_t L_49 = V_3;
		int32_t L_50 = L_49;
		Il2CppObject * L_51 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_50);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral372029326, L_51, /*hidden argument*/NULL);
		G_B12_0 = L_52;
		G_B12_1 = G_B11_0;
	}

IL_00f7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_53 = String_Concat_m2596409543(NULL /*static, unused*/, G_B12_1, G_B12_0, /*hidden argument*/NULL);
		V_0 = L_53;
		String_t* L_54 = V_0;
		int32_t L_55 = V_4;
		G_B13_0 = L_54;
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)9))))
		{
			G_B14_0 = L_54;
			goto IL_011d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_56 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_57 = V_4;
		int32_t L_58 = L_57;
		Il2CppObject * L_59 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_58);
		String_t* L_60 = String_Concat_m56707527(NULL /*static, unused*/, L_56, L_59, /*hidden argument*/NULL);
		G_B15_0 = L_60;
		G_B15_1 = G_B13_0;
		goto IL_012e;
	}

IL_011d:
	{
		int32_t L_61 = V_4;
		int32_t L_62 = L_61;
		Il2CppObject * L_63 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_62);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_64 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral372029326, L_63, /*hidden argument*/NULL);
		G_B15_0 = L_64;
		G_B15_1 = G_B14_0;
	}

IL_012e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_65 = String_Concat_m2596409543(NULL /*static, unused*/, G_B15_1, G_B15_0, /*hidden argument*/NULL);
		V_0 = L_65;
		String_t* L_66 = V_0;
		int32_t L_67 = V_5;
		G_B16_0 = L_66;
		if ((((int32_t)L_67) <= ((int32_t)((int32_t)9))))
		{
			G_B17_0 = L_66;
			goto IL_0154;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_68 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_69 = V_5;
		int32_t L_70 = L_69;
		Il2CppObject * L_71 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_70);
		String_t* L_72 = String_Concat_m56707527(NULL /*static, unused*/, L_68, L_71, /*hidden argument*/NULL);
		G_B18_0 = L_72;
		G_B18_1 = G_B16_0;
		goto IL_0165;
	}

IL_0154:
	{
		int32_t L_73 = V_5;
		int32_t L_74 = L_73;
		Il2CppObject * L_75 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_74);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_76 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral372029326, L_75, /*hidden argument*/NULL);
		G_B18_0 = L_76;
		G_B18_1 = G_B17_0;
	}

IL_0165:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_77 = String_Concat_m2596409543(NULL /*static, unused*/, G_B18_1, G_B18_0, /*hidden argument*/NULL);
		V_0 = L_77;
		Text_t356221433 * L_78 = __this->get_resistanceText_5();
		String_t* L_79 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_78, L_79);
	}

IL_0177:
	{
		return;
	}
}
// System.Void RX.GameUI::UpdateScoreText(System.Int32)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const uint32_t GameUI_UpdateScoreText_m1368285856_MetadataUsageId;
extern "C"  void GameUI_UpdateScoreText_m1368285856 (GameUI_t1191293910 * __this, int32_t ___score0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameUI_UpdateScoreText_m1368285856_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_scoreText_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Text_t356221433 * L_2 = __this->get_scoreText_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_4 = ___score0;
		int32_t L_5 = L_4;
		Il2CppObject * L_6 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m56707527(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
	}

IL_002b:
	{
		return;
	}
}
// System.Void RX.GameUI::UpdateLevelText(System.Int32)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const uint32_t GameUI_UpdateLevelText_m3003083748_MetadataUsageId;
extern "C"  void GameUI_UpdateLevelText_m3003083748 (GameUI_t1191293910 * __this, int32_t ___level0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameUI_UpdateLevelText_m3003083748_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_levelText_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Text_t356221433 * L_2 = __this->get_levelText_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_4 = ___level0;
		int32_t L_5 = L_4;
		Il2CppObject * L_6 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m56707527(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
	}

IL_002b:
	{
		return;
	}
}
// System.Void RX.GameUI::ShowGameOver(System.Int32)
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1884423134;
extern const uint32_t GameUI_ShowGameOver_m3878574723_MetadataUsageId;
extern "C"  void GameUI_ShowGameOver_m3878574723 (GameUI_t1191293910 * __this, int32_t ___score0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameUI_ShowGameOver_m3878574723_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameOver_t797685186 * L_0 = __this->get_gameOver_3();
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_1, (bool)1, /*hidden argument*/NULL);
		GameOver_t797685186 * L_2 = __this->get_gameOver_3();
		int32_t L_3 = ___score0;
		GameOver_SetScoreText_m1354734401(L_2, L_3, /*hidden argument*/NULL);
		UIHandler_t1120912888 * L_4 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_uiHandler_3();
		L_4->set_usePanicColors_12((bool)0);
		UIHandler_t1120912888 * L_5 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_uiHandler_3();
		L_5->set_timeBetweenColor_7((8.0f));
		AudioHandler_t3268548328 * L_6 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlayMusic_m3991440629(L_6, _stringLiteral1884423134, (bool)0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_7, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Grid::.ctor()
extern "C"  void Grid__ctor_m62988539 (Grid_t3469560614 * __this, const MethodInfo* method)
{
	{
		__this->set_distancePerPill_4((62.5f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Grid::Awake()
extern Il2CppClass* List_1_t333644417_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t964523285_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m765230334_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4235070944_MethodInfo_var;
extern const MethodInfo* List_1_Add_m239299354_MethodInfo_var;
extern const uint32_t Grid_Awake_m1685912660_MetadataUsageId;
extern "C"  void Grid_Awake_m1685912660 (Grid_t3469560614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_Awake_m1685912660_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t333644417 * L_0 = (List_1_t333644417 *)il2cpp_codegen_object_new(List_1_t333644417_il2cpp_TypeInfo_var);
		List_1__ctor_m765230334(L_0, /*hidden argument*/List_1__ctor_m765230334_MethodInfo_var);
		__this->set_pillGrid_5(L_0);
		V_0 = 0;
		goto IL_0026;
	}

IL_0012:
	{
		List_1_t333644417 * L_1 = __this->get_pillGrid_5();
		List_1_t964523285 * L_2 = (List_1_t964523285 *)il2cpp_codegen_object_new(List_1_t964523285_il2cpp_TypeInfo_var);
		List_1__ctor_m4235070944(L_2, /*hidden argument*/List_1__ctor_m4235070944_MethodInfo_var);
		List_1_Add_m239299354(L_1, L_2, /*hidden argument*/List_1_Add_m239299354_MethodInfo_var);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)10))))
		{
			goto IL_0012;
		}
	}
	{
		Grid_FillGrid_m853788154(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Grid::FillGrid()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m1444398345_MethodInfo_var;
extern const MethodInfo* List_1_Add_m2479975876_MethodInfo_var;
extern const uint32_t Grid_FillGrid_m853788154_MetadataUsageId;
extern "C"  void Grid_FillGrid_m853788154 (Grid_t3469560614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_FillGrid_m853788154_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GridItem_t1595402153 * V_2 = NULL;
	{
		V_0 = 0;
		goto IL_0082;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0077;
	}

IL_000e:
	{
		PillManager_t335090404 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_pillManager_1();
		Pill_t2353557145 * L_1 = PillManager_GetUnusedPill_m4076528876(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		GridItem_t1595402153 * L_2 = V_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		float L_6 = __this->get_distancePerPill_4();
		int32_t L_7 = V_1;
		float L_8 = __this->get_distancePerPill_4();
		float L_9 = __this->get_distancePerPill_4();
		Vector3_t2243707580  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m2720820983(&L_10, (((float)((float)((float)((float)(((float)((float)L_5)))*(float)L_6))))), ((float)((float)(((float)((float)((float)((float)(((float)((float)L_7)))*(float)L_8)))))-(float)((float)((float)L_9*(float)(7.0f))))), /*hidden argument*/NULL);
		GridItem_SetPosition_m1213413967(L_2, L_3, L_4, L_10, (bool)1, /*hidden argument*/NULL);
		GridItem_t1595402153 * L_11 = V_2;
		Transform_t3275118058 * L_12 = Component_get_transform_m2697483695(L_11, /*hidden argument*/NULL);
		Transform_t3275118058 * L_13 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_SetParent_m1963830867(L_12, L_13, (bool)0, /*hidden argument*/NULL);
		GridItem_t1595402153 * L_14 = V_2;
		L_14->set_isEmpty_2((bool)0);
		List_1_t333644417 * L_15 = __this->get_pillGrid_5();
		int32_t L_16 = V_0;
		List_1_t964523285 * L_17 = List_1_get_Item_m1444398345(L_15, L_16, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		GridItem_t1595402153 * L_18 = V_2;
		List_1_Add_m2479975876(L_17, L_18, /*hidden argument*/List_1_Add_m2479975876_MethodInfo_var);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0077:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)8)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0082:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void RX.Grid::UpdatePills()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m1444398345_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m2442566879_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAt_m3209654510_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m1441610874_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3303196228_MethodInfo_var;
extern const MethodInfo* List_1_Remove_m2975780191_MethodInfo_var;
extern const MethodInfo* List_1_Add_m2479975876_MethodInfo_var;
extern const uint32_t Grid_UpdatePills_m3942602276_MetadataUsageId;
extern "C"  void Grid_UpdatePills_m3942602276 (Grid_t3469560614 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Grid_UpdatePills_m3942602276_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GridItem_t1595402153 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	GridItem_t1595402153 * V_7 = NULL;
	{
		V_0 = 0;
		goto IL_005f;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0044;
	}

IL_000e:
	{
		List_1_t333644417 * L_0 = __this->get_pillGrid_5();
		int32_t L_1 = V_0;
		List_1_t964523285 * L_2 = List_1_get_Item_m1444398345(L_0, L_1, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		int32_t L_3 = V_1;
		GridItem_t1595402153 * L_4 = List_1_get_Item_m2442566879(L_2, L_3, /*hidden argument*/List_1_get_Item_m2442566879_MethodInfo_var);
		bool L_5 = L_4->get_isEmpty_2();
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		List_1_t333644417 * L_6 = __this->get_pillGrid_5();
		int32_t L_7 = V_0;
		List_1_t964523285 * L_8 = List_1_get_Item_m1444398345(L_6, L_7, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		int32_t L_9 = V_1;
		List_1_RemoveAt_m3209654510(L_8, L_9, /*hidden argument*/List_1_RemoveAt_m3209654510_MethodInfo_var);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10-(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_12 = V_1;
		List_1_t333644417 * L_13 = __this->get_pillGrid_5();
		int32_t L_14 = V_0;
		List_1_t964523285 * L_15 = List_1_get_Item_m1444398345(L_13, L_14, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		int32_t L_16 = List_1_get_Count_m1441610874(L_15, /*hidden argument*/List_1_get_Count_m1441610874_MethodInfo_var);
		if ((((int32_t)L_12) < ((int32_t)L_16)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_18 = V_0;
		List_1_t333644417 * L_19 = __this->get_pillGrid_5();
		int32_t L_20 = List_1_get_Count_m3303196228(L_19, /*hidden argument*/List_1_get_Count_m3303196228_MethodInfo_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0007;
		}
	}
	{
		V_2 = 0;
		goto IL_0106;
	}

IL_0077:
	{
		V_3 = 0;
		goto IL_00eb;
	}

IL_007e:
	{
		List_1_t333644417 * L_21 = __this->get_pillGrid_5();
		int32_t L_22 = V_2;
		List_1_t964523285 * L_23 = List_1_get_Item_m1444398345(L_21, L_22, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		int32_t L_24 = V_3;
		GridItem_t1595402153 * L_25 = List_1_get_Item_m2442566879(L_23, L_24, /*hidden argument*/List_1_get_Item_m2442566879_MethodInfo_var);
		V_4 = L_25;
		GridItem_t1595402153 * L_26 = V_4;
		bool L_27 = L_26->get_isEmpty_2();
		if (L_27)
		{
			goto IL_00d3;
		}
	}
	{
		GridItem_t1595402153 * L_28 = V_4;
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		float L_32 = __this->get_distancePerPill_4();
		int32_t L_33 = V_3;
		float L_34 = __this->get_distancePerPill_4();
		float L_35 = __this->get_distancePerPill_4();
		Vector3_t2243707580  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m2720820983(&L_36, (((float)((float)((float)((float)(((float)((float)L_31)))*(float)L_32))))), ((float)((float)(((float)((float)((float)((float)(((float)((float)L_33)))*(float)L_34)))))-(float)((float)((float)L_35*(float)(7.0f))))), /*hidden argument*/NULL);
		GridItem_SetPosition_m1213413967(L_28, L_29, L_30, L_36, (bool)0, /*hidden argument*/NULL);
		goto IL_00e7;
	}

IL_00d3:
	{
		List_1_t333644417 * L_37 = __this->get_pillGrid_5();
		int32_t L_38 = V_2;
		List_1_t964523285 * L_39 = List_1_get_Item_m1444398345(L_37, L_38, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		GridItem_t1595402153 * L_40 = V_4;
		List_1_Remove_m2975780191(L_39, L_40, /*hidden argument*/List_1_Remove_m2975780191_MethodInfo_var);
	}

IL_00e7:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00eb:
	{
		int32_t L_42 = V_3;
		List_1_t333644417 * L_43 = __this->get_pillGrid_5();
		int32_t L_44 = V_2;
		List_1_t964523285 * L_45 = List_1_get_Item_m1444398345(L_43, L_44, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		int32_t L_46 = List_1_get_Count_m1441610874(L_45, /*hidden argument*/List_1_get_Count_m1441610874_MethodInfo_var);
		if ((((int32_t)L_42) < ((int32_t)L_46)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_47 = V_2;
		V_2 = ((int32_t)((int32_t)L_47+(int32_t)1));
	}

IL_0106:
	{
		int32_t L_48 = V_2;
		List_1_t333644417 * L_49 = __this->get_pillGrid_5();
		int32_t L_50 = List_1_get_Count_m3303196228(L_49, /*hidden argument*/List_1_get_Count_m3303196228_MethodInfo_var);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_0077;
		}
	}
	{
		V_5 = 0;
		goto IL_01ca;
	}

IL_011f:
	{
		List_1_t333644417 * L_51 = __this->get_pillGrid_5();
		int32_t L_52 = V_5;
		List_1_t964523285 * L_53 = List_1_get_Item_m1444398345(L_51, L_52, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		int32_t L_54 = List_1_get_Count_m1441610874(L_53, /*hidden argument*/List_1_get_Count_m1441610874_MethodInfo_var);
		V_6 = L_54;
		goto IL_01bc;
	}

IL_0138:
	{
		PillManager_t335090404 * L_55 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_pillManager_1();
		Pill_t2353557145 * L_56 = PillManager_GetUnusedPill_m4076528876(L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		GridItem_t1595402153 * L_57 = V_7;
		int32_t L_58 = V_5;
		int32_t L_59 = V_6;
		int32_t L_60 = V_5;
		float L_61 = __this->get_distancePerPill_4();
		float L_62 = __this->get_distancePerPill_4();
		Vector3_t2243707580  L_63;
		memset(&L_63, 0, sizeof(L_63));
		Vector3__ctor_m2720820983(&L_63, (((float)((float)((float)((float)(((float)((float)L_60)))*(float)L_61))))), L_62, /*hidden argument*/NULL);
		GridItem_SetPosition_m1213413967(L_57, L_58, L_59, L_63, (bool)1, /*hidden argument*/NULL);
		GridItem_t1595402153 * L_64 = V_7;
		int32_t L_65 = V_5;
		int32_t L_66 = V_6;
		int32_t L_67 = V_5;
		float L_68 = __this->get_distancePerPill_4();
		int32_t L_69 = V_6;
		float L_70 = __this->get_distancePerPill_4();
		float L_71 = __this->get_distancePerPill_4();
		Vector3_t2243707580  L_72;
		memset(&L_72, 0, sizeof(L_72));
		Vector3__ctor_m2720820983(&L_72, (((float)((float)((float)((float)(((float)((float)L_67)))*(float)L_68))))), ((float)((float)(((float)((float)((float)((float)(((float)((float)L_69)))*(float)L_70)))))-(float)((float)((float)L_71*(float)(7.0f))))), /*hidden argument*/NULL);
		GridItem_SetPosition_m1213413967(L_64, L_65, L_66, L_72, (bool)0, /*hidden argument*/NULL);
		GridItem_t1595402153 * L_73 = V_7;
		L_73->set_isEmpty_2((bool)0);
		List_1_t333644417 * L_74 = __this->get_pillGrid_5();
		int32_t L_75 = V_5;
		List_1_t964523285 * L_76 = List_1_get_Item_m1444398345(L_74, L_75, /*hidden argument*/List_1_get_Item_m1444398345_MethodInfo_var);
		GridItem_t1595402153 * L_77 = V_7;
		List_1_Add_m2479975876(L_76, L_77, /*hidden argument*/List_1_Add_m2479975876_MethodInfo_var);
		int32_t L_78 = V_6;
		V_6 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_01bc:
	{
		int32_t L_79 = V_6;
		if ((((int32_t)L_79) < ((int32_t)8)))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_80 = V_5;
		V_5 = ((int32_t)((int32_t)L_80+(int32_t)1));
	}

IL_01ca:
	{
		int32_t L_81 = V_5;
		if ((((int32_t)L_81) < ((int32_t)((int32_t)10))))
		{
			goto IL_011f;
		}
	}
	{
		return;
	}
}
// System.Boolean RX.Grid::CheckGridHasPossibility()
extern "C"  bool Grid_CheckGridHasPossibility_m835755878 (Grid_t3469560614 * __this, const MethodInfo* method)
{
	{
		return (bool)0;
	}
}
// System.Void RX.GridItem::.ctor()
extern "C"  void GridItem__ctor_m3949645270 (GridItem_t1595402153 * __this, const MethodInfo* method)
{
	{
		__this->set_isEmpty_2((bool)1);
		__this->set_fallTime_6((1.5f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 RX.GridItem::get_gridX()
extern "C"  int32_t GridItem_get_gridX_m1510288497 (GridItem_t1595402153 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__gridX_3();
		return L_0;
	}
}
// System.Int32 RX.GridItem::get_gridY()
extern "C"  int32_t GridItem_get_gridY_m1510288464 (GridItem_t1595402153 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__gridY_4();
		return L_0;
	}
}
// System.Void RX.GridItem::Awake()
extern Il2CppClass* RectTransform_t3349966182_il2cpp_TypeInfo_var;
extern const uint32_t GridItem_Awake_m3624832263_MetadataUsageId;
extern "C"  void GridItem_Awake_m3624832263 (GridItem_t1595402153 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GridItem_Awake_m3624832263_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_rectTransform_8(((RectTransform_t3349966182 *)CastclassSealed(L_0, RectTransform_t3349966182_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void RX.GridItem::Update()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const uint32_t GridItem_Update_m1341252059_MetadataUsageId;
extern "C"  void GridItem_Update_m1341252059 (GridItem_t1595402153 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GridItem_Update_m1341252059_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameHandler_t1894465376 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		bool L_1 = GameHandler_get_active_m3385988580(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		float L_2 = __this->get_currentTime_7();
		float L_3 = __this->get_fallTime_6();
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_006b;
		}
	}
	{
		float L_4 = __this->get_currentTime_7();
		float L_5 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentTime_7(((float)((float)L_4+(float)L_5)));
		RectTransform_t3349966182 * L_6 = __this->get_rectTransform_8();
		Vector3_t2243707580  L_7 = __this->get_lastPos_9();
		Vector3_t2243707580  L_8 = __this->get_targetPos_10();
		AnimationCurve_t3306541151 * L_9 = __this->get_gravityCurve_5();
		float L_10 = __this->get_currentTime_7();
		float L_11 = __this->get_fallTime_6();
		float L_12 = AnimationCurve_Evaluate_m3698879322(L_9, ((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Vector3_Lerp_m2935648359(NULL /*static, unused*/, L_7, L_8, L_12, /*hidden argument*/NULL);
		Vector2_t2243707579  L_14 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m2077229449(L_6, L_14, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void RX.GridItem::SetPosition(System.Int32,System.Int32,UnityEngine.Vector3,System.Boolean)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* RectTransform_t3349966182_il2cpp_TypeInfo_var;
extern const uint32_t GridItem_SetPosition_m1213413967_MetadataUsageId;
extern "C"  void GridItem_SetPosition_m1213413967 (GridItem_t1595402153 * __this, int32_t ___x0, int32_t ___y1, Vector3_t2243707580  ___newPos2, bool ___instant3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GridItem_SetPosition_m1213413967_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t3349966182 * L_0 = __this->get_rectTransform_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_rectTransform_8(((RectTransform_t3349966182 *)CastclassSealed(L_2, RectTransform_t3349966182_il2cpp_TypeInfo_var)));
	}

IL_0021:
	{
		RectTransform_t3349966182 * L_3 = __this->get_rectTransform_8();
		Vector2_t2243707579  L_4 = RectTransform_get_anchoredPosition_m3570822376(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_lastPos_9(L_5);
		int32_t L_6 = ___x0;
		__this->set__gridX_3(L_6);
		int32_t L_7 = ___y1;
		__this->set__gridY_4(L_7);
		Vector3_t2243707580  L_8 = ___newPos2;
		__this->set_targetPos_10(L_8);
		__this->set_currentTime_7((0.0f));
		bool L_9 = ___instant3;
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		float L_10 = __this->get_fallTime_6();
		__this->set_currentTime_7(L_10);
		Vector3_t2243707580  L_11 = ___newPos2;
		__this->set_lastPos_9(L_11);
		RectTransform_t3349966182 * L_12 = __this->get_rectTransform_8();
		Vector3_t2243707580  L_13 = ___newPos2;
		Vector2_t2243707579  L_14 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m2077229449(L_12, L_14, /*hidden argument*/NULL);
	}

IL_0082:
	{
		return;
	}
}
// System.Void RX.GridItem::OnGridAdded()
extern "C"  void GridItem_OnGridAdded_m3430493035 (GridItem_t1595402153 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RX.GridItem::OnGridRemoved()
extern "C"  void GridItem_OnGridRemoved_m3170949109 (GridItem_t1595402153 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RX.MainMenu::.ctor()
extern "C"  void MainMenu__ctor_m1341748831 (MainMenu_t2651266464 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.MainMenu::Awake()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral442195652;
extern const uint32_t MainMenu_Awake_m3250272318_MetadataUsageId;
extern "C"  void MainMenu_Awake_m3250272318 (MainMenu_t2651266464 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_Awake_m3250272318_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioHandler_t3268548328 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlayMusic_m3991440629(L_0, _stringLiteral442195652, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.MainMenu::OnPlayButton()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4168486344;
extern const uint32_t MainMenu_OnPlayButton_m3907177106_MetadataUsageId;
extern "C"  void MainMenu_OnPlayButton_m3907177106 (MainMenu_t2651266464 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_OnPlayButton_m3907177106_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t3349966182 * L_0 = __this->get_gameOptions_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RectTransform_t3349966182 * L_2 = __this->get_gameOptions_2();
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_4, (bool)0, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral4168486344, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void RX.MainMenu::OnCreditsButton()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3104012570;
extern const uint32_t MainMenu_OnCreditsButton_m1673664644_MetadataUsageId;
extern "C"  void MainMenu_OnCreditsButton_m1673664644 (MainMenu_t2651266464 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MainMenu_OnCreditsButton_m1673664644_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t3349966182 * L_0 = __this->get_creditsMenu_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RectTransform_t3349966182 * L_2 = __this->get_creditsMenu_3();
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_4, (bool)0, /*hidden argument*/NULL);
		goto IL_003c;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral3104012570, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void RX.MainMenu::OnExitButton()
extern "C"  void MainMenu_OnExitButton_m3568610656 (MainMenu_t2651266464 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Pause::.ctor()
extern "C"  void Pause__ctor_m1819913485 (Pause_t2495578996 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Pause::OnResumeButton()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const uint32_t Pause_OnResumeButton_m1257283827_MetadataUsageId;
extern "C"  void Pause_OnResumeButton_m1257283827 (Pause_t2495578996 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Pause_OnResumeButton_m1257283827_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioHandler_t3268548328 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_ResumeMusic_m216889057(L_0, /*hidden argument*/NULL);
		RectTransform_t3349966182 * L_1 = __this->get_game_2();
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(L_1, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_3, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Pause::OnQuitButton()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral442195652;
extern const uint32_t Pause_OnQuitButton_m3418574843_MetadataUsageId;
extern "C"  void Pause_OnQuitButton_m3418574843 (Pause_t2495578996 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Pause_OnQuitButton_m3418574843_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioHandler_t3268548328 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_ResumeMusic_m216889057(L_0, /*hidden argument*/NULL);
		RectTransform_t3349966182 * L_1 = __this->get_main_3();
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(L_1, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_2, (bool)1, /*hidden argument*/NULL);
		GameHandler_t1894465376 * L_3 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		GameHandler_Close_m3029597687(L_3, /*hidden argument*/NULL);
		AudioHandler_t3268548328 * L_4 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_PlayMusic_m3991440629(L_4, _stringLiteral442195652, (bool)0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Pill::.ctor()
extern "C"  void Pill__ctor_m2660200498 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	{
		__this->set__unused_12((bool)1);
		__this->set_mouseOverOpacity_14((0.5f));
		Color_t2020392075  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m3811852957(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_selectedColor_15(L_0);
		GridItem__ctor_m3949645270(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean RX.Pill::get_unused()
extern "C"  bool Pill_get_unused_m2411449767 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get__unused_12();
		return L_0;
	}
}
// System.Void RX.Pill::Awake()
extern const MethodInfo* Component_GetComponent_TisImage_t2042527209_m2189462422_MethodInfo_var;
extern const uint32_t Pill_Awake_m1052534443_MetadataUsageId;
extern "C"  void Pill_Awake_m1052534443 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Pill_Awake_m1052534443_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t2042527209 * L_0 = Component_GetComponent_TisImage_t2042527209_m2189462422(__this, /*hidden argument*/Component_GetComponent_TisImage_t2042527209_m2189462422_MethodInfo_var);
		__this->set_image_11(L_0);
		return;
	}
}
// System.Void RX.Pill::Refresh(UnityEngine.Sprite)
extern "C"  void Pill_Refresh_m2222535909 (Pill_t2353557145 * __this, Sprite_t309593783 * ___sprite0, const MethodInfo* method)
{
	{
		Image_t2042527209 * L_0 = __this->get_image_11();
		Sprite_t309593783 * L_1 = ___sprite0;
		Image_set_sprite_m1800056820(L_0, L_1, /*hidden argument*/NULL);
		((GridItem_t1595402153 *)__this)->set_isEmpty_2((bool)0);
		__this->set__unused_12((bool)0);
		return;
	}
}
// System.Void RX.Pill::OnPointerUp()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const uint32_t Pill_OnPointerUp_m889742073_MetadataUsageId;
extern "C"  void Pill_OnPointerUp_m889742073 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Pill_OnPointerUp_m889742073_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameHandler_t1894465376 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		bool L_1 = GameHandler_get_selectionDragActive_m3433066694(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameHandler_t1894465376 * L_2 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		GameHandler_EndSelectDrag_m3460194502(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void RX.Pill::OnPointerDown()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const uint32_t Pill_OnPointerDown_m3736992204_MetadataUsageId;
extern "C"  void Pill_OnPointerDown_m3736992204 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Pill_OnPointerDown_m3736992204_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameHandler_t1894465376 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		GameHandler_BeginSelectDrag_m4046234022(L_0, /*hidden argument*/NULL);
		Pill_AddPill_m1202218934(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Pill::OnPointerEnter()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const uint32_t Pill_OnPointerEnter_m1563519464_MetadataUsageId;
extern "C"  void Pill_OnPointerEnter_m1563519464 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Pill_OnPointerEnter_m1563519464_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Color_t2020392075  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t2020392075  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Color_t2020392075  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		GameHandler_t1894465376 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		bool L_1 = GameHandler_get_selectionDragActive_m3433066694(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Pill_AddPill_m1202218934(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		Image_t2042527209 * L_2 = __this->get_image_11();
		Image_t2042527209 * L_3 = __this->get_image_11();
		Color_t2020392075  L_4 = VirtFuncInvoker0< Color_t2020392075  >::Invoke(21 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		V_0 = L_4;
		float L_5 = (&V_0)->get_r_0();
		Image_t2042527209 * L_6 = __this->get_image_11();
		Color_t2020392075  L_7 = VirtFuncInvoker0< Color_t2020392075  >::Invoke(21 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		V_1 = L_7;
		float L_8 = (&V_1)->get_g_1();
		Image_t2042527209 * L_9 = __this->get_image_11();
		Color_t2020392075  L_10 = VirtFuncInvoker0< Color_t2020392075  >::Invoke(21 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_9);
		V_2 = L_10;
		float L_11 = (&V_2)->get_b_2();
		float L_12 = __this->get_mouseOverOpacity_14();
		Color_t2020392075  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Color__ctor_m1909920690(&L_13, L_5, L_8, L_11, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2020392075  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_13);
		return;
	}
}
// System.Void RX.Pill::OnPointerExit()
extern "C"  void Pill_OnPointerExit_m2707096404 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	Color_t2020392075  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t2020392075  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Color_t2020392075  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Image_t2042527209 * L_0 = __this->get_image_11();
		Image_t2042527209 * L_1 = __this->get_image_11();
		Color_t2020392075  L_2 = VirtFuncInvoker0< Color_t2020392075  >::Invoke(21 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		float L_3 = (&V_0)->get_r_0();
		Image_t2042527209 * L_4 = __this->get_image_11();
		Color_t2020392075  L_5 = VirtFuncInvoker0< Color_t2020392075  >::Invoke(21 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		V_1 = L_5;
		float L_6 = (&V_1)->get_g_1();
		Image_t2042527209 * L_7 = __this->get_image_11();
		Color_t2020392075  L_8 = VirtFuncInvoker0< Color_t2020392075  >::Invoke(21 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		V_2 = L_8;
		float L_9 = (&V_2)->get_b_2();
		Color_t2020392075  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Color__ctor_m1909920690(&L_10, L_3, L_6, L_9, (1.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2020392075  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_10);
		return;
	}
}
// System.Void RX.Pill::Deselect()
extern "C"  void Pill_Deselect_m1017148859 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	{
		Image_t2042527209 * L_0 = __this->get_image_11();
		Color_t2020392075  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m3811852957(&L_1, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2020392075  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		__this->set_selected_16((bool)0);
		return;
	}
}
// System.Void RX.Pill::Use()
extern "C"  void Pill_Use_m2856164781 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	{
		__this->set__unused_12((bool)1);
		((GridItem_t1595402153 *)__this)->set_isEmpty_2((bool)1);
		Image_t2042527209 * L_0 = __this->get_image_11();
		Image_set_sprite_m1800056820(L_0, (Sprite_t309593783 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Pill::AddPill()
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const uint32_t Pill_AddPill_m1202218934_MetadataUsageId;
extern "C"  void Pill_AddPill_m1202218934 (Pill_t2353557145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Pill_AddPill_m1202218934_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameHandler_t1894465376 * L_0 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		bool L_1 = GameHandler_AddPill_m3439545482(L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_selected_16((bool)1);
		Image_t2042527209 * L_2 = __this->get_image_11();
		Color_t2020392075  L_3 = __this->get_selectedColor_15();
		VirtActionInvoker1< Color_t2020392075  >::Invoke(22 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void RX.PillManager::.ctor()
extern "C"  void PillManager__ctor_m2073553489 (PillManager_t335090404 * __this, const MethodInfo* method)
{
	{
		__this->set_pillsToCreate_8(((int32_t)96));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.PillManager::Init()
extern Il2CppClass* Dictionary_2_t514475790_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t1722678277_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1672861316_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m2547133024_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m252712844_MethodInfo_var;
extern const MethodInfo* Object_Instantiate_TisPill_t2353557145_m1719382195_MethodInfo_var;
extern const MethodInfo* List_1_Add_m451278788_MethodInfo_var;
extern const uint32_t PillManager_Init_m1650816615_MetadataUsageId;
extern "C"  void PillManager_Init_m1650816615 (PillManager_t335090404 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PillManager_Init_m1650816615_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Pill_t2353557145 * V_2 = NULL;
	{
		Dictionary_2_t514475790 * L_0 = (Dictionary_2_t514475790 *)il2cpp_codegen_object_new(Dictionary_2_t514475790_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1672861316(L_0, /*hidden argument*/Dictionary_2__ctor_m1672861316_MethodInfo_var);
		__this->set_pillDict_10(L_0);
		List_1_t1722678277 * L_1 = (List_1_t1722678277 *)il2cpp_codegen_object_new(List_1_t1722678277_il2cpp_TypeInfo_var);
		List_1__ctor_m2547133024(L_1, /*hidden argument*/List_1__ctor_m2547133024_MethodInfo_var);
		__this->set_pillList_9(L_1);
		V_0 = 0;
		goto IL_003e;
	}

IL_001d:
	{
		Dictionary_2_t514475790 * L_2 = __this->get_pillDict_10();
		PillGraphicsU5BU5D_t3582534370* L_3 = __this->get_graphics_7();
		int32_t L_4 = V_0;
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_type_0();
		int32_t L_6 = V_0;
		Dictionary_2_Add_m252712844(L_2, L_5, L_6, /*hidden argument*/Dictionary_2_Add_m252712844_MethodInfo_var);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_8 = V_0;
		PillGraphicsU5BU5D_t3582534370* L_9 = __this->get_graphics_7();
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		V_1 = 0;
		goto IL_006f;
	}

IL_0053:
	{
		Pill_t2353557145 * L_10 = __this->get_pillPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Pill_t2353557145 * L_11 = Object_Instantiate_TisPill_t2353557145_m1719382195(NULL /*static, unused*/, L_10, /*hidden argument*/Object_Instantiate_TisPill_t2353557145_m1719382195_MethodInfo_var);
		V_2 = L_11;
		List_1_t1722678277 * L_12 = __this->get_pillList_9();
		Pill_t2353557145 * L_13 = V_2;
		List_1_Add_m451278788(L_12, L_13, /*hidden argument*/List_1_Add_m451278788_MethodInfo_var);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)80))))
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
// System.Void RX.PillManager::QueuePlacebo()
extern "C"  void PillManager_QueuePlacebo_m3406666480 (PillManager_t335090404 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// RX.Pill RX.PillManager::GetUnusedPill()
extern const MethodInfo* List_1_get_Item_m3057514331_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m246578178_MethodInfo_var;
extern const uint32_t PillManager_GetUnusedPill_m4076528876_MetadataUsageId;
extern "C"  Pill_t2353557145 * PillManager_GetUnusedPill_m4076528876 (PillManager_t335090404 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PillManager_GetUnusedPill_m4076528876_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Pill_t2353557145 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0081;
	}

IL_0007:
	{
		List_1_t1722678277 * L_0 = __this->get_pillList_9();
		int32_t L_1 = V_0;
		Pill_t2353557145 * L_2 = List_1_get_Item_m3057514331(L_0, L_1, /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		bool L_3 = Pill_get_unused_m2411449767(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		List_1_t1722678277 * L_4 = __this->get_pillList_9();
		int32_t L_5 = V_0;
		Pill_t2353557145 * L_6 = List_1_get_Item_m3057514331(L_4, L_5, /*hidden argument*/List_1_get_Item_m3057514331_MethodInfo_var);
		V_1 = L_6;
		int32_t L_7 = Random_Range_m694320887(NULL /*static, unused*/, 0, 5, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = Random_Range_m2884721203(NULL /*static, unused*/, (0.0f), (1.0f), /*hidden argument*/NULL);
		if ((!(((float)L_8) > ((float)(0.99f)))))
		{
			goto IL_004d;
		}
	}
	{
		V_2 = 5;
	}

IL_004d:
	{
		Pill_t2353557145 * L_9 = V_1;
		PillGraphicsU5BU5D_t3582534370* L_10 = __this->get_graphics_7();
		int32_t L_11 = V_2;
		Sprite_t309593783 * L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_sprite_1();
		Pill_Refresh_m2222535909(L_9, L_12, /*hidden argument*/NULL);
		Pill_t2353557145 * L_13 = V_1;
		PillGraphicsU5BU5D_t3582534370* L_14 = __this->get_graphics_7();
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_type_0();
		L_13->set_type_13(L_16);
		Pill_t2353557145 * L_17 = V_1;
		return L_17;
	}

IL_007d:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0081:
	{
		int32_t L_19 = V_0;
		List_1_t1722678277 * L_20 = __this->get_pillList_9();
		int32_t L_21 = List_1_get_Count_m246578178(L_20, /*hidden argument*/List_1_get_Count_m246578178_MethodInfo_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0007;
		}
	}
	{
		return (Pill_t2353557145 *)NULL;
	}
}
// Conversion methods for marshalling of: RX.PillManager/PillGraphics
extern "C" void PillGraphics_t1115863027_marshal_pinvoke(const PillGraphics_t1115863027& unmarshaled, PillGraphics_t1115863027_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'PillGraphics': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception);
}
extern "C" void PillGraphics_t1115863027_marshal_pinvoke_back(const PillGraphics_t1115863027_marshaled_pinvoke& marshaled, PillGraphics_t1115863027& unmarshaled)
{
	Il2CppCodeGenException* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'PillGraphics': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception);
}
// Conversion method for clean up from marshalling of: RX.PillManager/PillGraphics
extern "C" void PillGraphics_t1115863027_marshal_pinvoke_cleanup(PillGraphics_t1115863027_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RX.PillManager/PillGraphics
extern "C" void PillGraphics_t1115863027_marshal_com(const PillGraphics_t1115863027& unmarshaled, PillGraphics_t1115863027_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'PillGraphics': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception);
}
extern "C" void PillGraphics_t1115863027_marshal_com_back(const PillGraphics_t1115863027_marshaled_com& marshaled, PillGraphics_t1115863027& unmarshaled)
{
	Il2CppCodeGenException* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'PillGraphics': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception);
}
// Conversion method for clean up from marshalling of: RX.PillManager/PillGraphics
extern "C" void PillGraphics_t1115863027_marshal_com_cleanup(PillGraphics_t1115863027_marshaled_com& marshaled)
{
}
// System.Void RX.Top::.ctor()
extern "C"  void Top__ctor_m3046676014 (Top_t793591787 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Top::InitValues()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Top_t793591787_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisPillManager_t335090404_m2680120471_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisAudioHandler_t3268548328_m1170060367_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisUIHandler_t1120912888_m778445793_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisGameHandler_t1894465376_m3812953651_MethodInfo_var;
extern const uint32_t Top_InitValues_m3609086004_MetadataUsageId;
extern "C"  void Top_InitValues_m3609086004 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Top_InitValues_m3609086004_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		PillManager_t335090404 * L_0 = Object_FindObjectOfType_TisPillManager_t335090404_m2680120471(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPillManager_t335090404_m2680120471_MethodInfo_var);
		((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->set_pillManager_1(L_0);
		PillManager_t335090404 * L_1 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_pillManager_1();
		PillManager_Init_m1650816615(L_1, /*hidden argument*/NULL);
		AudioHandler_t3268548328 * L_2 = Object_FindObjectOfType_TisAudioHandler_t3268548328_m1170060367(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisAudioHandler_t3268548328_m1170060367_MethodInfo_var);
		((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->set_audioHandler_2(L_2);
		AudioHandler_t3268548328 * L_3 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_audioHandler_2();
		AudioHandler_Init_m1078802719(L_3, /*hidden argument*/NULL);
		UIHandler_t1120912888 * L_4 = Object_FindObjectOfType_TisUIHandler_t1120912888_m778445793(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisUIHandler_t1120912888_m778445793_MethodInfo_var);
		((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->set_uiHandler_3(L_4);
		UIHandler_t1120912888 * L_5 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_uiHandler_3();
		UIHandler_Init_m1041640385(L_5, /*hidden argument*/NULL);
		GameHandler_t1894465376 * L_6 = Object_FindObjectOfType_TisGameHandler_t1894465376_m3812953651(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisGameHandler_t1894465376_m3812953651_MethodInfo_var);
		((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->set_gameHandler_0(L_6);
		GameHandler_t1894465376 * L_7 = ((Top_t793591787_StaticFields*)Top_t793591787_il2cpp_TypeInfo_var->static_fields)->get_gameHandler_0();
		GameHandler_Init_m117557163(L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.UIHandler::.ctor()
extern "C"  void UIHandler__ctor_m3854490199 (UIHandler_t1120912888 * __this, const MethodInfo* method)
{
	{
		__this->set_backgroundNext_6(1);
		__this->set_timeBetweenColor_7((1.5f));
		__this->set_backgroundScrollSpeedPerFrame_8((0.1f));
		__this->set_scrollLeft_9((bool)1);
		__this->set_scrollUp_10((bool)1);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.UIHandler::Init()
extern "C"  void UIHandler_Init_m1041640385 (UIHandler_t1120912888 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void RX.UIHandler::Update()
extern "C"  void UIHandler_Update_m2702418392 (UIHandler_t1120912888 * __this, const MethodInfo* method)
{
	UIHandler_t1120912888 * G_B3_0 = NULL;
	UIHandler_t1120912888 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	UIHandler_t1120912888 * G_B4_1 = NULL;
	{
		UIHandler_IterateBackground_m336024731(__this, /*hidden argument*/NULL);
		float L_0 = __this->get_currentTime_2();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentTime_2(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_currentTime_2();
		float L_3 = __this->get_timeBetweenColor_7();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_4 = __this->get_backgroundNext_6();
		__this->set_backgroundCurrent_5(L_4);
		int32_t L_5 = __this->get_backgroundNext_6();
		ColorU5BU5D_t672350442* L_6 = __this->get_backgroundColors_3();
		G_B2_0 = __this;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_6)->max_length))))-(int32_t)1))))))
		{
			G_B3_0 = __this;
			goto IL_0051;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0059;
	}

IL_0051:
	{
		int32_t L_7 = __this->get_backgroundNext_6();
		G_B4_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
		G_B4_1 = G_B3_0;
	}

IL_0059:
	{
		G_B4_1->set_backgroundNext_6(G_B4_0);
		__this->set_currentTime_2((0.0f));
	}

IL_0069:
	{
		return;
	}
}
// System.Void RX.UIHandler::IterateBackground()
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t UIHandler_IterateBackground_m336024731_MetadataUsageId;
extern "C"  void UIHandler_IterateBackground_m336024731 (UIHandler_t1120912888 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UIHandler_IterateBackground_m336024731_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Color_t2020392075  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2243707579  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Material_t193706927 * G_B2_1 = NULL;
	Vector2_t2243707579  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Material_t193706927 * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	Vector2_t2243707579  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	Material_t193706927 * G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	Vector2_t2243707579  G_B5_1;
	memset(&G_B5_1, 0, sizeof(G_B5_1));
	Material_t193706927 * G_B5_2 = NULL;
	float G_B4_0 = 0.0f;
	Vector2_t2243707579  G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	Material_t193706927 * G_B4_2 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Vector2_t2243707579  G_B6_2;
	memset(&G_B6_2, 0, sizeof(G_B6_2));
	Material_t193706927 * G_B6_3 = NULL;
	{
		MeshRenderer_t1268241104 * L_0 = __this->get_background_11();
		Material_t193706927 * L_1 = Renderer_get_material_m2553789785(L_0, /*hidden argument*/NULL);
		Material_t193706927 * L_2 = L_1;
		Vector2_t2243707579  L_3 = Material_get_mainTextureOffset_m786294629(L_2, /*hidden argument*/NULL);
		bool L_4 = __this->get_scrollLeft_9();
		G_B1_0 = L_3;
		G_B1_1 = L_2;
		if (!L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_2;
			goto IL_0027;
		}
	}
	{
		float L_5 = __this->get_backgroundScrollSpeedPerFrame_8();
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002e;
	}

IL_0027:
	{
		float L_6 = __this->get_backgroundScrollSpeedPerFrame_8();
		G_B3_0 = ((-L_6));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002e:
	{
		bool L_7 = __this->get_scrollUp_10();
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0045;
		}
	}
	{
		float L_8 = __this->get_backgroundScrollSpeedPerFrame_8();
		G_B6_0 = ((-L_8));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_004b;
	}

IL_0045:
	{
		float L_9 = __this->get_backgroundScrollSpeedPerFrame_8();
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_004b:
	{
		Vector2_t2243707579  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3067419446(&L_10, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		Vector2_t2243707579  L_11 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, G_B6_2, L_10, /*hidden argument*/NULL);
		Material_set_mainTextureOffset_m3533368774(G_B6_3, L_11, /*hidden argument*/NULL);
		bool L_12 = __this->get_usePanicColors_12();
		if (L_12)
		{
			goto IL_012b;
		}
	}
	{
		ColorU5BU5D_t672350442* L_13 = __this->get_backgroundColors_3();
		int32_t L_14 = __this->get_backgroundCurrent_5();
		float L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->get_r_0();
		ColorU5BU5D_t672350442* L_16 = __this->get_backgroundColors_3();
		int32_t L_17 = __this->get_backgroundNext_6();
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_r_0();
		float L_19 = __this->get_currentTime_2();
		float L_20 = __this->get_timeBetweenColor_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Lerp_m1686556575(NULL /*static, unused*/, L_15, L_18, ((float)((float)L_19/(float)L_20)), /*hidden argument*/NULL);
		ColorU5BU5D_t672350442* L_22 = __this->get_backgroundColors_3();
		int32_t L_23 = __this->get_backgroundCurrent_5();
		float L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_g_1();
		ColorU5BU5D_t672350442* L_25 = __this->get_backgroundColors_3();
		int32_t L_26 = __this->get_backgroundNext_6();
		float L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_g_1();
		float L_28 = __this->get_currentTime_2();
		float L_29 = __this->get_timeBetweenColor_7();
		float L_30 = Mathf_Lerp_m1686556575(NULL /*static, unused*/, L_24, L_27, ((float)((float)L_28/(float)L_29)), /*hidden argument*/NULL);
		ColorU5BU5D_t672350442* L_31 = __this->get_backgroundColors_3();
		int32_t L_32 = __this->get_backgroundCurrent_5();
		float L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->get_b_2();
		ColorU5BU5D_t672350442* L_34 = __this->get_backgroundColors_3();
		int32_t L_35 = __this->get_backgroundNext_6();
		float L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->get_b_2();
		float L_37 = __this->get_currentTime_2();
		float L_38 = __this->get_timeBetweenColor_7();
		float L_39 = Mathf_Lerp_m1686556575(NULL /*static, unused*/, L_33, L_36, ((float)((float)L_37/(float)L_38)), /*hidden argument*/NULL);
		Color__ctor_m3811852957((&V_0), L_21, L_30, L_39, /*hidden argument*/NULL);
		goto IL_01ec;
	}

IL_012b:
	{
		ColorU5BU5D_t672350442* L_40 = __this->get_panicColors_4();
		int32_t L_41 = __this->get_backgroundCurrent_5();
		float L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_r_0();
		ColorU5BU5D_t672350442* L_43 = __this->get_panicColors_4();
		int32_t L_44 = __this->get_backgroundNext_6();
		float L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->get_r_0();
		float L_46 = __this->get_currentTime_2();
		float L_47 = __this->get_timeBetweenColor_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_48 = Mathf_Lerp_m1686556575(NULL /*static, unused*/, L_42, L_45, ((float)((float)L_46/(float)L_47)), /*hidden argument*/NULL);
		ColorU5BU5D_t672350442* L_49 = __this->get_panicColors_4();
		int32_t L_50 = __this->get_backgroundCurrent_5();
		float L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->get_g_1();
		ColorU5BU5D_t672350442* L_52 = __this->get_panicColors_4();
		int32_t L_53 = __this->get_backgroundNext_6();
		float L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->get_g_1();
		float L_55 = __this->get_currentTime_2();
		float L_56 = __this->get_timeBetweenColor_7();
		float L_57 = Mathf_Lerp_m1686556575(NULL /*static, unused*/, L_51, L_54, ((float)((float)L_55/(float)L_56)), /*hidden argument*/NULL);
		ColorU5BU5D_t672350442* L_58 = __this->get_panicColors_4();
		int32_t L_59 = __this->get_backgroundCurrent_5();
		float L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->get_b_2();
		ColorU5BU5D_t672350442* L_61 = __this->get_panicColors_4();
		int32_t L_62 = __this->get_backgroundNext_6();
		float L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->get_b_2();
		float L_64 = __this->get_currentTime_2();
		float L_65 = __this->get_timeBetweenColor_7();
		float L_66 = Mathf_Lerp_m1686556575(NULL /*static, unused*/, L_60, L_63, ((float)((float)L_64/(float)L_65)), /*hidden argument*/NULL);
		Color__ctor_m3811852957((&V_0), L_48, L_57, L_66, /*hidden argument*/NULL);
	}

IL_01ec:
	{
		MeshRenderer_t1268241104 * L_67 = __this->get_background_11();
		Material_t193706927 * L_68 = Renderer_get_material_m2553789785(L_67, /*hidden argument*/NULL);
		Color_t2020392075  L_69 = V_0;
		Material_set_color_m577844242(L_68, L_69, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RX.Virus::.ctor()
extern "C"  void Virus__ctor_m3105546804 (Virus_t1783893007 * __this, const MethodInfo* method)
{
	{
		GridItem__ctor_m3949645270(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

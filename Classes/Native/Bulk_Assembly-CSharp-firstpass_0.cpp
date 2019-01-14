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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// SleekRender.SleekRenderPostProcess
struct SleekRenderPostProcess_t1198037834;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture
struct Texture_t3661962703;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Object
struct Object_t631007953;
// SleekRender.SleekRenderSettings
struct SleekRenderSettings_t4177321799;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;

extern RuntimeClass* Uniforms_t356173120_il2cpp_TypeInfo_var;
extern const uint32_t SleekRenderPostProcess_Downsample_m2967697245_MetadataUsageId;
extern String_t* _stringLiteral3938486821;
extern String_t* _stringLiteral457990251;
extern const uint32_t SleekRenderPostProcess_Precompose_m2027997387_MetadataUsageId;
extern String_t* _stringLiteral1800305868;
extern String_t* _stringLiteral231784706;
extern const uint32_t SleekRenderPostProcess_Compose_m818386553_MetadataUsageId;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern String_t* _stringLiteral3694549026;
extern String_t* _stringLiteral3650289648;
extern String_t* _stringLiteral2065593632;
extern String_t* _stringLiteral168235785;
extern String_t* _stringLiteral2483455595;
extern String_t* _stringLiteral3444228278;
extern String_t* _stringLiteral3476570019;
extern String_t* _stringLiteral3004949082;
extern String_t* _stringLiteral4233374580;
extern String_t* _stringLiteral3972874343;
extern const uint32_t SleekRenderPostProcess_CreateResources_m1600934277_MetadataUsageId;
extern RuntimeClass* RenderTexture_t2108887433_il2cpp_TypeInfo_var;
extern const uint32_t SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971_MetadataUsageId;
extern String_t* _stringLiteral3671618460;
extern const uint32_t SleekRenderPostProcess_CreateMainRenderTexture_m1029585022_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744_MetadataUsageId;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern RuntimeClass* Graphics_t783367614_il2cpp_TypeInfo_var;
extern const uint32_t SleekRenderPostProcess_DrawFullscreenQuad_m2781339783_MetadataUsageId;
extern const uint32_t SleekRenderPostProcess_CheckScreenSizeAndRecreateTexturesIfNeeded_m844096608_MetadataUsageId;
extern const RuntimeMethod* ScriptableObject_CreateInstance_TisSleekRenderSettings_t4177321799_m3770868688_RuntimeMethod_var;
extern String_t* _stringLiteral2409185935;
extern const uint32_t SleekRenderPostProcess_CreateDefaultSettingsIfNoneLinked_m1298226038_MetadataUsageId;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var;
extern RuntimeClass* ColorU5BU5D_t941916413_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0_FieldInfo_var;
extern const uint32_t SleekRenderPostProcess_CreateScreenSpaceQuadMesh_m2085815782_MetadataUsageId;
extern String_t* _stringLiteral2962922498;
extern String_t* _stringLiteral3094985726;
extern String_t* _stringLiteral1594524906;
extern String_t* _stringLiteral3184621405;
extern String_t* _stringLiteral2355791104;
extern String_t* _stringLiteral742038175;
extern String_t* _stringLiteral2542412538;
extern String_t* _stringLiteral1838316701;
extern String_t* _stringLiteral570279171;
extern String_t* _stringLiteral538452671;
extern String_t* _stringLiteral656160448;
extern const uint32_t Uniforms__cctor_m552710207_MetadataUsageId;

struct Vector3U5BU5D_t1718750761;
struct Vector2U5BU5D_t1457185986;
struct ColorU5BU5D_t941916413;
struct Int32U5BU5D_t385246372;


#ifndef U3CMODULEU3E_T692745560_H
#define U3CMODULEU3E_T692745560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745560 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745560_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef KEYWORDS_T1365096944_H
#define KEYWORDS_T1365096944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SleekRender.SleekRenderPostProcess/Keywords
struct  Keywords_t1365096944  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYWORDS_T1365096944_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef UNIFORMS_T356173120_H
#define UNIFORMS_T356173120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SleekRender.SleekRenderPostProcess/Uniforms
struct  Uniforms_t356173120  : public RuntimeObject
{
public:

public:
};

struct Uniforms_t356173120_StaticFields
{
public:
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_LuminanceConst
	int32_t ____LuminanceConst_0;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_BloomIntencity
	int32_t ____BloomIntencity_1;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_BloomTint
	int32_t ____BloomTint_2;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_MainTex
	int32_t ____MainTex_3;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_BloomTex
	int32_t ____BloomTex_4;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_PreComposeTex
	int32_t ____PreComposeTex_5;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_TexelSize
	int32_t ____TexelSize_6;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_Colorize
	int32_t ____Colorize_7;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_VignetteShape
	int32_t ____VignetteShape_8;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_VignetteColor
	int32_t ____VignetteColor_9;
	// System.Int32 SleekRender.SleekRenderPostProcess/Uniforms::_BrightnessContrast
	int32_t ____BrightnessContrast_10;

public:
	inline static int32_t get_offset_of__LuminanceConst_0() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____LuminanceConst_0)); }
	inline int32_t get__LuminanceConst_0() const { return ____LuminanceConst_0; }
	inline int32_t* get_address_of__LuminanceConst_0() { return &____LuminanceConst_0; }
	inline void set__LuminanceConst_0(int32_t value)
	{
		____LuminanceConst_0 = value;
	}

	inline static int32_t get_offset_of__BloomIntencity_1() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____BloomIntencity_1)); }
	inline int32_t get__BloomIntencity_1() const { return ____BloomIntencity_1; }
	inline int32_t* get_address_of__BloomIntencity_1() { return &____BloomIntencity_1; }
	inline void set__BloomIntencity_1(int32_t value)
	{
		____BloomIntencity_1 = value;
	}

	inline static int32_t get_offset_of__BloomTint_2() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____BloomTint_2)); }
	inline int32_t get__BloomTint_2() const { return ____BloomTint_2; }
	inline int32_t* get_address_of__BloomTint_2() { return &____BloomTint_2; }
	inline void set__BloomTint_2(int32_t value)
	{
		____BloomTint_2 = value;
	}

	inline static int32_t get_offset_of__MainTex_3() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____MainTex_3)); }
	inline int32_t get__MainTex_3() const { return ____MainTex_3; }
	inline int32_t* get_address_of__MainTex_3() { return &____MainTex_3; }
	inline void set__MainTex_3(int32_t value)
	{
		____MainTex_3 = value;
	}

	inline static int32_t get_offset_of__BloomTex_4() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____BloomTex_4)); }
	inline int32_t get__BloomTex_4() const { return ____BloomTex_4; }
	inline int32_t* get_address_of__BloomTex_4() { return &____BloomTex_4; }
	inline void set__BloomTex_4(int32_t value)
	{
		____BloomTex_4 = value;
	}

	inline static int32_t get_offset_of__PreComposeTex_5() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____PreComposeTex_5)); }
	inline int32_t get__PreComposeTex_5() const { return ____PreComposeTex_5; }
	inline int32_t* get_address_of__PreComposeTex_5() { return &____PreComposeTex_5; }
	inline void set__PreComposeTex_5(int32_t value)
	{
		____PreComposeTex_5 = value;
	}

	inline static int32_t get_offset_of__TexelSize_6() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____TexelSize_6)); }
	inline int32_t get__TexelSize_6() const { return ____TexelSize_6; }
	inline int32_t* get_address_of__TexelSize_6() { return &____TexelSize_6; }
	inline void set__TexelSize_6(int32_t value)
	{
		____TexelSize_6 = value;
	}

	inline static int32_t get_offset_of__Colorize_7() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____Colorize_7)); }
	inline int32_t get__Colorize_7() const { return ____Colorize_7; }
	inline int32_t* get_address_of__Colorize_7() { return &____Colorize_7; }
	inline void set__Colorize_7(int32_t value)
	{
		____Colorize_7 = value;
	}

	inline static int32_t get_offset_of__VignetteShape_8() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____VignetteShape_8)); }
	inline int32_t get__VignetteShape_8() const { return ____VignetteShape_8; }
	inline int32_t* get_address_of__VignetteShape_8() { return &____VignetteShape_8; }
	inline void set__VignetteShape_8(int32_t value)
	{
		____VignetteShape_8 = value;
	}

	inline static int32_t get_offset_of__VignetteColor_9() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____VignetteColor_9)); }
	inline int32_t get__VignetteColor_9() const { return ____VignetteColor_9; }
	inline int32_t* get_address_of__VignetteColor_9() { return &____VignetteColor_9; }
	inline void set__VignetteColor_9(int32_t value)
	{
		____VignetteColor_9 = value;
	}

	inline static int32_t get_offset_of__BrightnessContrast_10() { return static_cast<int32_t>(offsetof(Uniforms_t356173120_StaticFields, ____BrightnessContrast_10)); }
	inline int32_t get__BrightnessContrast_10() const { return ____BrightnessContrast_10; }
	inline int32_t* get_address_of__BrightnessContrast_10() { return &____BrightnessContrast_10; }
	inline void set__BrightnessContrast_10(int32_t value)
	{
		____BrightnessContrast_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIFORMS_T356173120_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef U24ARRAYTYPEU3D24_T2467506694_H
#define U24ARRAYTYPEU3D24_T2467506694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t2467506694 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t2467506694__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T2467506694_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-23447D2BC3FF6984AB09F575BC63CFE460337394
	U24ArrayTypeU3D24_t2467506694  ___U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0)); }
	inline U24ArrayTypeU3D24_t2467506694  get_U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0() const { return ___U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0; }
	inline U24ArrayTypeU3D24_t2467506694 * get_address_of_U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0() { return &___U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0; }
	inline void set_U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0(U24ArrayTypeU3D24_t2467506694  value)
	{
		___U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef LUMAVECTORTYPE_T2712417972_H
#define LUMAVECTORTYPE_T2712417972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SleekRender.LumaVectorType
struct  LumaVectorType_t2712417972 
{
public:
	// System.Int32 SleekRender.LumaVectorType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LumaVectorType_t2712417972, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUMAVECTORTYPE_T2712417972_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef GRAPHICSDEVICETYPE_T1797077436_H
#define GRAPHICSDEVICETYPE_T1797077436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.GraphicsDeviceType
struct  GraphicsDeviceType_t1797077436 
{
public:
	// System.Int32 UnityEngine.Rendering.GraphicsDeviceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GraphicsDeviceType_t1797077436, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHICSDEVICETYPE_T1797077436_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T3761284007_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef RENDERTEXTUREFORMAT_T962350765_H
#define RENDERTEXTUREFORMAT_T962350765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t962350765 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t962350765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREFORMAT_T962350765_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef SLEEKRENDERSETTINGS_T4177321799_H
#define SLEEKRENDERSETTINGS_T4177321799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SleekRender.SleekRenderSettings
struct  SleekRenderSettings_t4177321799  : public ScriptableObject_t2528358522
{
public:
	// System.Boolean SleekRender.SleekRenderSettings::bloomExpanded
	bool ___bloomExpanded_2;
	// System.Boolean SleekRender.SleekRenderSettings::bloomEnabled
	bool ___bloomEnabled_3;
	// System.Single SleekRender.SleekRenderSettings::bloomThreshold
	float ___bloomThreshold_4;
	// System.Single SleekRender.SleekRenderSettings::bloomIntensity
	float ___bloomIntensity_5;
	// UnityEngine.Color SleekRender.SleekRenderSettings::bloomTint
	Color_t2555686324  ___bloomTint_6;
	// System.Boolean SleekRender.SleekRenderSettings::preserveAspectRatio
	bool ___preserveAspectRatio_7;
	// System.Int32 SleekRender.SleekRenderSettings::bloomTextureWidth
	int32_t ___bloomTextureWidth_8;
	// System.Int32 SleekRender.SleekRenderSettings::bloomTextureHeight
	int32_t ___bloomTextureHeight_9;
	// SleekRender.LumaVectorType SleekRender.SleekRenderSettings::bloomLumaCalculationType
	int32_t ___bloomLumaCalculationType_10;
	// UnityEngine.Vector3 SleekRender.SleekRenderSettings::bloomLumaVector
	Vector3_t3722313464  ___bloomLumaVector_11;
	// System.Boolean SleekRender.SleekRenderSettings::colorizeExpanded
	bool ___colorizeExpanded_12;
	// System.Boolean SleekRender.SleekRenderSettings::colorizeEnabled
	bool ___colorizeEnabled_13;
	// UnityEngine.Color32 SleekRender.SleekRenderSettings::colorize
	Color32_t2600501292  ___colorize_14;
	// System.Boolean SleekRender.SleekRenderSettings::vignetteExpanded
	bool ___vignetteExpanded_15;
	// System.Boolean SleekRender.SleekRenderSettings::vignetteEnabled
	bool ___vignetteEnabled_16;
	// System.Single SleekRender.SleekRenderSettings::vignetteBeginRadius
	float ___vignetteBeginRadius_17;
	// System.Single SleekRender.SleekRenderSettings::vignetteExpandRadius
	float ___vignetteExpandRadius_18;
	// UnityEngine.Color SleekRender.SleekRenderSettings::vignetteColor
	Color_t2555686324  ___vignetteColor_19;
	// System.Boolean SleekRender.SleekRenderSettings::brightnessContrastExpanded
	bool ___brightnessContrastExpanded_20;
	// System.Boolean SleekRender.SleekRenderSettings::brightnessContrastEnabled
	bool ___brightnessContrastEnabled_21;
	// System.Single SleekRender.SleekRenderSettings::contrast
	float ___contrast_22;
	// System.Single SleekRender.SleekRenderSettings::brightness
	float ___brightness_23;

public:
	inline static int32_t get_offset_of_bloomExpanded_2() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomExpanded_2)); }
	inline bool get_bloomExpanded_2() const { return ___bloomExpanded_2; }
	inline bool* get_address_of_bloomExpanded_2() { return &___bloomExpanded_2; }
	inline void set_bloomExpanded_2(bool value)
	{
		___bloomExpanded_2 = value;
	}

	inline static int32_t get_offset_of_bloomEnabled_3() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomEnabled_3)); }
	inline bool get_bloomEnabled_3() const { return ___bloomEnabled_3; }
	inline bool* get_address_of_bloomEnabled_3() { return &___bloomEnabled_3; }
	inline void set_bloomEnabled_3(bool value)
	{
		___bloomEnabled_3 = value;
	}

	inline static int32_t get_offset_of_bloomThreshold_4() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomThreshold_4)); }
	inline float get_bloomThreshold_4() const { return ___bloomThreshold_4; }
	inline float* get_address_of_bloomThreshold_4() { return &___bloomThreshold_4; }
	inline void set_bloomThreshold_4(float value)
	{
		___bloomThreshold_4 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_5() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomIntensity_5)); }
	inline float get_bloomIntensity_5() const { return ___bloomIntensity_5; }
	inline float* get_address_of_bloomIntensity_5() { return &___bloomIntensity_5; }
	inline void set_bloomIntensity_5(float value)
	{
		___bloomIntensity_5 = value;
	}

	inline static int32_t get_offset_of_bloomTint_6() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomTint_6)); }
	inline Color_t2555686324  get_bloomTint_6() const { return ___bloomTint_6; }
	inline Color_t2555686324 * get_address_of_bloomTint_6() { return &___bloomTint_6; }
	inline void set_bloomTint_6(Color_t2555686324  value)
	{
		___bloomTint_6 = value;
	}

	inline static int32_t get_offset_of_preserveAspectRatio_7() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___preserveAspectRatio_7)); }
	inline bool get_preserveAspectRatio_7() const { return ___preserveAspectRatio_7; }
	inline bool* get_address_of_preserveAspectRatio_7() { return &___preserveAspectRatio_7; }
	inline void set_preserveAspectRatio_7(bool value)
	{
		___preserveAspectRatio_7 = value;
	}

	inline static int32_t get_offset_of_bloomTextureWidth_8() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomTextureWidth_8)); }
	inline int32_t get_bloomTextureWidth_8() const { return ___bloomTextureWidth_8; }
	inline int32_t* get_address_of_bloomTextureWidth_8() { return &___bloomTextureWidth_8; }
	inline void set_bloomTextureWidth_8(int32_t value)
	{
		___bloomTextureWidth_8 = value;
	}

	inline static int32_t get_offset_of_bloomTextureHeight_9() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomTextureHeight_9)); }
	inline int32_t get_bloomTextureHeight_9() const { return ___bloomTextureHeight_9; }
	inline int32_t* get_address_of_bloomTextureHeight_9() { return &___bloomTextureHeight_9; }
	inline void set_bloomTextureHeight_9(int32_t value)
	{
		___bloomTextureHeight_9 = value;
	}

	inline static int32_t get_offset_of_bloomLumaCalculationType_10() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomLumaCalculationType_10)); }
	inline int32_t get_bloomLumaCalculationType_10() const { return ___bloomLumaCalculationType_10; }
	inline int32_t* get_address_of_bloomLumaCalculationType_10() { return &___bloomLumaCalculationType_10; }
	inline void set_bloomLumaCalculationType_10(int32_t value)
	{
		___bloomLumaCalculationType_10 = value;
	}

	inline static int32_t get_offset_of_bloomLumaVector_11() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___bloomLumaVector_11)); }
	inline Vector3_t3722313464  get_bloomLumaVector_11() const { return ___bloomLumaVector_11; }
	inline Vector3_t3722313464 * get_address_of_bloomLumaVector_11() { return &___bloomLumaVector_11; }
	inline void set_bloomLumaVector_11(Vector3_t3722313464  value)
	{
		___bloomLumaVector_11 = value;
	}

	inline static int32_t get_offset_of_colorizeExpanded_12() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___colorizeExpanded_12)); }
	inline bool get_colorizeExpanded_12() const { return ___colorizeExpanded_12; }
	inline bool* get_address_of_colorizeExpanded_12() { return &___colorizeExpanded_12; }
	inline void set_colorizeExpanded_12(bool value)
	{
		___colorizeExpanded_12 = value;
	}

	inline static int32_t get_offset_of_colorizeEnabled_13() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___colorizeEnabled_13)); }
	inline bool get_colorizeEnabled_13() const { return ___colorizeEnabled_13; }
	inline bool* get_address_of_colorizeEnabled_13() { return &___colorizeEnabled_13; }
	inline void set_colorizeEnabled_13(bool value)
	{
		___colorizeEnabled_13 = value;
	}

	inline static int32_t get_offset_of_colorize_14() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___colorize_14)); }
	inline Color32_t2600501292  get_colorize_14() const { return ___colorize_14; }
	inline Color32_t2600501292 * get_address_of_colorize_14() { return &___colorize_14; }
	inline void set_colorize_14(Color32_t2600501292  value)
	{
		___colorize_14 = value;
	}

	inline static int32_t get_offset_of_vignetteExpanded_15() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___vignetteExpanded_15)); }
	inline bool get_vignetteExpanded_15() const { return ___vignetteExpanded_15; }
	inline bool* get_address_of_vignetteExpanded_15() { return &___vignetteExpanded_15; }
	inline void set_vignetteExpanded_15(bool value)
	{
		___vignetteExpanded_15 = value;
	}

	inline static int32_t get_offset_of_vignetteEnabled_16() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___vignetteEnabled_16)); }
	inline bool get_vignetteEnabled_16() const { return ___vignetteEnabled_16; }
	inline bool* get_address_of_vignetteEnabled_16() { return &___vignetteEnabled_16; }
	inline void set_vignetteEnabled_16(bool value)
	{
		___vignetteEnabled_16 = value;
	}

	inline static int32_t get_offset_of_vignetteBeginRadius_17() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___vignetteBeginRadius_17)); }
	inline float get_vignetteBeginRadius_17() const { return ___vignetteBeginRadius_17; }
	inline float* get_address_of_vignetteBeginRadius_17() { return &___vignetteBeginRadius_17; }
	inline void set_vignetteBeginRadius_17(float value)
	{
		___vignetteBeginRadius_17 = value;
	}

	inline static int32_t get_offset_of_vignetteExpandRadius_18() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___vignetteExpandRadius_18)); }
	inline float get_vignetteExpandRadius_18() const { return ___vignetteExpandRadius_18; }
	inline float* get_address_of_vignetteExpandRadius_18() { return &___vignetteExpandRadius_18; }
	inline void set_vignetteExpandRadius_18(float value)
	{
		___vignetteExpandRadius_18 = value;
	}

	inline static int32_t get_offset_of_vignetteColor_19() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___vignetteColor_19)); }
	inline Color_t2555686324  get_vignetteColor_19() const { return ___vignetteColor_19; }
	inline Color_t2555686324 * get_address_of_vignetteColor_19() { return &___vignetteColor_19; }
	inline void set_vignetteColor_19(Color_t2555686324  value)
	{
		___vignetteColor_19 = value;
	}

	inline static int32_t get_offset_of_brightnessContrastExpanded_20() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___brightnessContrastExpanded_20)); }
	inline bool get_brightnessContrastExpanded_20() const { return ___brightnessContrastExpanded_20; }
	inline bool* get_address_of_brightnessContrastExpanded_20() { return &___brightnessContrastExpanded_20; }
	inline void set_brightnessContrastExpanded_20(bool value)
	{
		___brightnessContrastExpanded_20 = value;
	}

	inline static int32_t get_offset_of_brightnessContrastEnabled_21() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___brightnessContrastEnabled_21)); }
	inline bool get_brightnessContrastEnabled_21() const { return ___brightnessContrastEnabled_21; }
	inline bool* get_address_of_brightnessContrastEnabled_21() { return &___brightnessContrastEnabled_21; }
	inline void set_brightnessContrastEnabled_21(bool value)
	{
		___brightnessContrastEnabled_21 = value;
	}

	inline static int32_t get_offset_of_contrast_22() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___contrast_22)); }
	inline float get_contrast_22() const { return ___contrast_22; }
	inline float* get_address_of_contrast_22() { return &___contrast_22; }
	inline void set_contrast_22(float value)
	{
		___contrast_22 = value;
	}

	inline static int32_t get_offset_of_brightness_23() { return static_cast<int32_t>(offsetof(SleekRenderSettings_t4177321799, ___brightness_23)); }
	inline float get_brightness_23() const { return ___brightness_23; }
	inline float* get_address_of_brightness_23() { return &___brightness_23; }
	inline void set_brightness_23(float value)
	{
		___brightness_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLEEKRENDERSETTINGS_T4177321799_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef SLEEKRENDERPOSTPROCESS_T1198037834_H
#define SLEEKRENDERPOSTPROCESS_T1198037834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SleekRender.SleekRenderPostProcess
struct  SleekRenderPostProcess_t1198037834  : public MonoBehaviour_t3962482529
{
public:
	// SleekRender.SleekRenderSettings SleekRender.SleekRenderPostProcess::settings
	SleekRenderSettings_t4177321799 * ___settings_2;
	// UnityEngine.Material SleekRender.SleekRenderPostProcess::_downsampleMaterial
	Material_t340375123 * ____downsampleMaterial_3;
	// UnityEngine.Material SleekRender.SleekRenderPostProcess::_horizontalBlurMaterial
	Material_t340375123 * ____horizontalBlurMaterial_4;
	// UnityEngine.Material SleekRender.SleekRenderPostProcess::_verticalBlurMaterial
	Material_t340375123 * ____verticalBlurMaterial_5;
	// UnityEngine.Material SleekRender.SleekRenderPostProcess::_preComposeMaterial
	Material_t340375123 * ____preComposeMaterial_6;
	// UnityEngine.Material SleekRender.SleekRenderPostProcess::_composeMaterial
	Material_t340375123 * ____composeMaterial_7;
	// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::_downsampledBrightpassTexture
	RenderTexture_t2108887433 * ____downsampledBrightpassTexture_8;
	// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::_brightPassBlurTexture
	RenderTexture_t2108887433 * ____brightPassBlurTexture_9;
	// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::_horizontalBlurTexture
	RenderTexture_t2108887433 * ____horizontalBlurTexture_10;
	// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::_verticalBlurTexture
	RenderTexture_t2108887433 * ____verticalBlurTexture_11;
	// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::_preComposeTexture
	RenderTexture_t2108887433 * ____preComposeTexture_12;
	// UnityEngine.Camera SleekRender.SleekRenderPostProcess::_mainCamera
	Camera_t4157153871 * ____mainCamera_13;
	// UnityEngine.Mesh SleekRender.SleekRenderPostProcess::_fullscreenQuadMesh
	Mesh_t3648964284 * ____fullscreenQuadMesh_14;
	// System.Int32 SleekRender.SleekRenderPostProcess::_currentCameraPixelWidth
	int32_t ____currentCameraPixelWidth_15;
	// System.Int32 SleekRender.SleekRenderPostProcess::_currentCameraPixelHeight
	int32_t ____currentCameraPixelHeight_16;
	// System.Boolean SleekRender.SleekRenderPostProcess::_isColorizeAlreadyEnabled
	bool ____isColorizeAlreadyEnabled_17;
	// System.Boolean SleekRender.SleekRenderPostProcess::_isBloomAlreadyEnabled
	bool ____isBloomAlreadyEnabled_18;
	// System.Boolean SleekRender.SleekRenderPostProcess::_isVignetteAlreadyEnabled
	bool ____isVignetteAlreadyEnabled_19;
	// System.Boolean SleekRender.SleekRenderPostProcess::_isAlreadyPreservingAspectRatio
	bool ____isAlreadyPreservingAspectRatio_20;
	// System.Boolean SleekRender.SleekRenderPostProcess::_isContrastAndBrightnessAlreadyEnabled
	bool ____isContrastAndBrightnessAlreadyEnabled_21;
	// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::_rt
	RenderTexture_t2108887433 * ____rt_22;
	// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::_rtTarget
	RenderTexture_t2108887433 * ____rtTarget_23;

public:
	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ___settings_2)); }
	inline SleekRenderSettings_t4177321799 * get_settings_2() const { return ___settings_2; }
	inline SleekRenderSettings_t4177321799 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(SleekRenderSettings_t4177321799 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier((&___settings_2), value);
	}

	inline static int32_t get_offset_of__downsampleMaterial_3() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____downsampleMaterial_3)); }
	inline Material_t340375123 * get__downsampleMaterial_3() const { return ____downsampleMaterial_3; }
	inline Material_t340375123 ** get_address_of__downsampleMaterial_3() { return &____downsampleMaterial_3; }
	inline void set__downsampleMaterial_3(Material_t340375123 * value)
	{
		____downsampleMaterial_3 = value;
		Il2CppCodeGenWriteBarrier((&____downsampleMaterial_3), value);
	}

	inline static int32_t get_offset_of__horizontalBlurMaterial_4() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____horizontalBlurMaterial_4)); }
	inline Material_t340375123 * get__horizontalBlurMaterial_4() const { return ____horizontalBlurMaterial_4; }
	inline Material_t340375123 ** get_address_of__horizontalBlurMaterial_4() { return &____horizontalBlurMaterial_4; }
	inline void set__horizontalBlurMaterial_4(Material_t340375123 * value)
	{
		____horizontalBlurMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&____horizontalBlurMaterial_4), value);
	}

	inline static int32_t get_offset_of__verticalBlurMaterial_5() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____verticalBlurMaterial_5)); }
	inline Material_t340375123 * get__verticalBlurMaterial_5() const { return ____verticalBlurMaterial_5; }
	inline Material_t340375123 ** get_address_of__verticalBlurMaterial_5() { return &____verticalBlurMaterial_5; }
	inline void set__verticalBlurMaterial_5(Material_t340375123 * value)
	{
		____verticalBlurMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&____verticalBlurMaterial_5), value);
	}

	inline static int32_t get_offset_of__preComposeMaterial_6() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____preComposeMaterial_6)); }
	inline Material_t340375123 * get__preComposeMaterial_6() const { return ____preComposeMaterial_6; }
	inline Material_t340375123 ** get_address_of__preComposeMaterial_6() { return &____preComposeMaterial_6; }
	inline void set__preComposeMaterial_6(Material_t340375123 * value)
	{
		____preComposeMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&____preComposeMaterial_6), value);
	}

	inline static int32_t get_offset_of__composeMaterial_7() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____composeMaterial_7)); }
	inline Material_t340375123 * get__composeMaterial_7() const { return ____composeMaterial_7; }
	inline Material_t340375123 ** get_address_of__composeMaterial_7() { return &____composeMaterial_7; }
	inline void set__composeMaterial_7(Material_t340375123 * value)
	{
		____composeMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&____composeMaterial_7), value);
	}

	inline static int32_t get_offset_of__downsampledBrightpassTexture_8() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____downsampledBrightpassTexture_8)); }
	inline RenderTexture_t2108887433 * get__downsampledBrightpassTexture_8() const { return ____downsampledBrightpassTexture_8; }
	inline RenderTexture_t2108887433 ** get_address_of__downsampledBrightpassTexture_8() { return &____downsampledBrightpassTexture_8; }
	inline void set__downsampledBrightpassTexture_8(RenderTexture_t2108887433 * value)
	{
		____downsampledBrightpassTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&____downsampledBrightpassTexture_8), value);
	}

	inline static int32_t get_offset_of__brightPassBlurTexture_9() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____brightPassBlurTexture_9)); }
	inline RenderTexture_t2108887433 * get__brightPassBlurTexture_9() const { return ____brightPassBlurTexture_9; }
	inline RenderTexture_t2108887433 ** get_address_of__brightPassBlurTexture_9() { return &____brightPassBlurTexture_9; }
	inline void set__brightPassBlurTexture_9(RenderTexture_t2108887433 * value)
	{
		____brightPassBlurTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&____brightPassBlurTexture_9), value);
	}

	inline static int32_t get_offset_of__horizontalBlurTexture_10() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____horizontalBlurTexture_10)); }
	inline RenderTexture_t2108887433 * get__horizontalBlurTexture_10() const { return ____horizontalBlurTexture_10; }
	inline RenderTexture_t2108887433 ** get_address_of__horizontalBlurTexture_10() { return &____horizontalBlurTexture_10; }
	inline void set__horizontalBlurTexture_10(RenderTexture_t2108887433 * value)
	{
		____horizontalBlurTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&____horizontalBlurTexture_10), value);
	}

	inline static int32_t get_offset_of__verticalBlurTexture_11() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____verticalBlurTexture_11)); }
	inline RenderTexture_t2108887433 * get__verticalBlurTexture_11() const { return ____verticalBlurTexture_11; }
	inline RenderTexture_t2108887433 ** get_address_of__verticalBlurTexture_11() { return &____verticalBlurTexture_11; }
	inline void set__verticalBlurTexture_11(RenderTexture_t2108887433 * value)
	{
		____verticalBlurTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&____verticalBlurTexture_11), value);
	}

	inline static int32_t get_offset_of__preComposeTexture_12() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____preComposeTexture_12)); }
	inline RenderTexture_t2108887433 * get__preComposeTexture_12() const { return ____preComposeTexture_12; }
	inline RenderTexture_t2108887433 ** get_address_of__preComposeTexture_12() { return &____preComposeTexture_12; }
	inline void set__preComposeTexture_12(RenderTexture_t2108887433 * value)
	{
		____preComposeTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&____preComposeTexture_12), value);
	}

	inline static int32_t get_offset_of__mainCamera_13() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____mainCamera_13)); }
	inline Camera_t4157153871 * get__mainCamera_13() const { return ____mainCamera_13; }
	inline Camera_t4157153871 ** get_address_of__mainCamera_13() { return &____mainCamera_13; }
	inline void set__mainCamera_13(Camera_t4157153871 * value)
	{
		____mainCamera_13 = value;
		Il2CppCodeGenWriteBarrier((&____mainCamera_13), value);
	}

	inline static int32_t get_offset_of__fullscreenQuadMesh_14() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____fullscreenQuadMesh_14)); }
	inline Mesh_t3648964284 * get__fullscreenQuadMesh_14() const { return ____fullscreenQuadMesh_14; }
	inline Mesh_t3648964284 ** get_address_of__fullscreenQuadMesh_14() { return &____fullscreenQuadMesh_14; }
	inline void set__fullscreenQuadMesh_14(Mesh_t3648964284 * value)
	{
		____fullscreenQuadMesh_14 = value;
		Il2CppCodeGenWriteBarrier((&____fullscreenQuadMesh_14), value);
	}

	inline static int32_t get_offset_of__currentCameraPixelWidth_15() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____currentCameraPixelWidth_15)); }
	inline int32_t get__currentCameraPixelWidth_15() const { return ____currentCameraPixelWidth_15; }
	inline int32_t* get_address_of__currentCameraPixelWidth_15() { return &____currentCameraPixelWidth_15; }
	inline void set__currentCameraPixelWidth_15(int32_t value)
	{
		____currentCameraPixelWidth_15 = value;
	}

	inline static int32_t get_offset_of__currentCameraPixelHeight_16() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____currentCameraPixelHeight_16)); }
	inline int32_t get__currentCameraPixelHeight_16() const { return ____currentCameraPixelHeight_16; }
	inline int32_t* get_address_of__currentCameraPixelHeight_16() { return &____currentCameraPixelHeight_16; }
	inline void set__currentCameraPixelHeight_16(int32_t value)
	{
		____currentCameraPixelHeight_16 = value;
	}

	inline static int32_t get_offset_of__isColorizeAlreadyEnabled_17() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____isColorizeAlreadyEnabled_17)); }
	inline bool get__isColorizeAlreadyEnabled_17() const { return ____isColorizeAlreadyEnabled_17; }
	inline bool* get_address_of__isColorizeAlreadyEnabled_17() { return &____isColorizeAlreadyEnabled_17; }
	inline void set__isColorizeAlreadyEnabled_17(bool value)
	{
		____isColorizeAlreadyEnabled_17 = value;
	}

	inline static int32_t get_offset_of__isBloomAlreadyEnabled_18() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____isBloomAlreadyEnabled_18)); }
	inline bool get__isBloomAlreadyEnabled_18() const { return ____isBloomAlreadyEnabled_18; }
	inline bool* get_address_of__isBloomAlreadyEnabled_18() { return &____isBloomAlreadyEnabled_18; }
	inline void set__isBloomAlreadyEnabled_18(bool value)
	{
		____isBloomAlreadyEnabled_18 = value;
	}

	inline static int32_t get_offset_of__isVignetteAlreadyEnabled_19() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____isVignetteAlreadyEnabled_19)); }
	inline bool get__isVignetteAlreadyEnabled_19() const { return ____isVignetteAlreadyEnabled_19; }
	inline bool* get_address_of__isVignetteAlreadyEnabled_19() { return &____isVignetteAlreadyEnabled_19; }
	inline void set__isVignetteAlreadyEnabled_19(bool value)
	{
		____isVignetteAlreadyEnabled_19 = value;
	}

	inline static int32_t get_offset_of__isAlreadyPreservingAspectRatio_20() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____isAlreadyPreservingAspectRatio_20)); }
	inline bool get__isAlreadyPreservingAspectRatio_20() const { return ____isAlreadyPreservingAspectRatio_20; }
	inline bool* get_address_of__isAlreadyPreservingAspectRatio_20() { return &____isAlreadyPreservingAspectRatio_20; }
	inline void set__isAlreadyPreservingAspectRatio_20(bool value)
	{
		____isAlreadyPreservingAspectRatio_20 = value;
	}

	inline static int32_t get_offset_of__isContrastAndBrightnessAlreadyEnabled_21() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____isContrastAndBrightnessAlreadyEnabled_21)); }
	inline bool get__isContrastAndBrightnessAlreadyEnabled_21() const { return ____isContrastAndBrightnessAlreadyEnabled_21; }
	inline bool* get_address_of__isContrastAndBrightnessAlreadyEnabled_21() { return &____isContrastAndBrightnessAlreadyEnabled_21; }
	inline void set__isContrastAndBrightnessAlreadyEnabled_21(bool value)
	{
		____isContrastAndBrightnessAlreadyEnabled_21 = value;
	}

	inline static int32_t get_offset_of__rt_22() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____rt_22)); }
	inline RenderTexture_t2108887433 * get__rt_22() const { return ____rt_22; }
	inline RenderTexture_t2108887433 ** get_address_of__rt_22() { return &____rt_22; }
	inline void set__rt_22(RenderTexture_t2108887433 * value)
	{
		____rt_22 = value;
		Il2CppCodeGenWriteBarrier((&____rt_22), value);
	}

	inline static int32_t get_offset_of__rtTarget_23() { return static_cast<int32_t>(offsetof(SleekRenderPostProcess_t1198037834, ____rtTarget_23)); }
	inline RenderTexture_t2108887433 * get__rtTarget_23() const { return ____rtTarget_23; }
	inline RenderTexture_t2108887433 ** get_address_of__rtTarget_23() { return &____rtTarget_23; }
	inline void set__rtTarget_23(RenderTexture_t2108887433 * value)
	{
		____rtTarget_23 = value;
		Il2CppCodeGenWriteBarrier((&____rtTarget_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLEEKRENDERPOSTPROCESS_T1198037834_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C"  RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::CreateDefaultSettingsIfNoneLinked()
extern "C"  void SleekRenderPostProcess_CreateDefaultSettingsIfNoneLinked_m1298226038 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::CreateResources()
extern "C"  void SleekRenderPostProcess_CreateResources_m1600934277 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::ReleaseResources()
extern "C"  void SleekRenderPostProcess_ReleaseResources_m1501736662 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::ApplyPostProcess(UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_ApplyPostProcess_m3097771293 (SleekRenderPostProcess_t1198037834 * __this, RenderTexture_t2108887433 * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::Compose(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_Compose_m818386553 (SleekRenderPostProcess_t1198037834 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___target1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::Downsample(UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_Downsample_m2967697245 (SleekRenderPostProcess_t1198037834 * __this, RenderTexture_t2108887433 * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::Bloom(System.Boolean)
extern "C"  void SleekRenderPostProcess_Bloom_m2575643348 (SleekRenderPostProcess_t1198037834 * __this, bool ___isBloomEnabled0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::Precompose(System.Boolean)
extern "C"  void SleekRenderPostProcess_Precompose_m2027997387 (SleekRenderPostProcess_t1198037834 * __this, bool ___isBloomEnabled0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m2633010038 (Material_t340375123 * __this, int32_t p0, Vector4_t3319028937  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void SleekRenderPostProcess_Blit_m159013157 (SleekRenderPostProcess_t1198037834 * __this, Texture_t3661962703 * ___source0, RenderTexture_t2108887433 * ___destination1, Material_t340375123 * ___material2, int32_t ___materialPass3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m329692301 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m1245091008 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single)
extern "C"  void Vector4__ctor_m3795604412 (Vector4_t3319028937 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m355160541 (Material_t340375123 * __this, int32_t p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m1688718093 (Material_t340375123 * __this, int32_t p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C"  Color_t2555686324  Color32_op_Implicit_m213813866 (RuntimeObject * __this /* static, unused */, Color32_t2600501292  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m432325927 (Vector4_t3319028937 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C"  Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C"  void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern "C"  int32_t Camera_get_pixelWidth_m1110053668 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C"  int32_t Mathf_RoundToInt_m1874334613 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern "C"  int32_t Camera_get_pixelHeight_m722276884 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C"  int32_t Mathf_Min_m18103608 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single SleekRender.SleekRenderPostProcess::GetCurrentAspect(UnityEngine.Camera)
extern "C"  float SleekRenderPostProcess_GetCurrentAspect_m2508355066 (SleekRenderPostProcess_t1198037834 * __this, Camera_t4157153871 * ___mainCamera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::CreateTransientRenderTexture(System.String,System.Int32,System.Int32)
extern "C"  RenderTexture_t2108887433 * SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971 (SleekRenderPostProcess_t1198037834 * __this, String_t* ___textureName0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m3009528825 (Material_t340375123 * __this, int32_t p0, Texture_t3661962703 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh SleekRender.SleekRenderPostProcess::CreateScreenSpaceQuadMesh()
extern "C"  Mesh_t3648964284 * SleekRenderPostProcess_CreateScreenSpaceQuadMesh_m2085815782 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture__ctor_m2187158709 (RenderTexture_t2108887433 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C"  void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C"  void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
extern "C"  int32_t SystemInfo_get_graphicsDeviceType_m2360462293 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
extern "C"  String_t* SystemInfo_get_graphicsDeviceName_m3658997806 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
extern "C"  bool SystemInfo_SupportsRenderTextureFormat_m1663449629 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
extern "C"  int32_t QualitySettings_get_antiAliasing_m1365131962 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
extern "C"  void RenderTexture_set_antiAliasing_m157775987 (RenderTexture_t2108887433 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::DestroyImmediateIfNotNull(UnityEngine.Object)
extern "C"  void SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744 (SleekRenderPostProcess_t1198037834 * __this, Object_t631007953 * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::SetActiveRenderTextureAndClear(UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_SetActiveRenderTextureAndClear_m2724107613 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * ___destination0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SleekRender.SleekRenderPostProcess::DrawFullscreenQuad(UnityEngine.Texture,UnityEngine.Material,System.Int32)
extern "C"  void SleekRenderPostProcess_DrawFullscreenQuad_m2781339783 (SleekRenderPostProcess_t1198037834 * __this, Texture_t3661962703 * ___source0, Material_t340375123 * ___material1, int32_t ___materialPass2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m1437732586 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C"  void GL_Clear_m467593486 (RuntimeObject * __this /* static, unused */, bool p0, bool p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C"  bool Material_SetPass_m686253719 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t1817901843  Matrix4x4_get_identity_m1406790249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C"  void Graphics_DrawMeshNow_m1430028224 (RuntimeObject * __this /* static, unused */, Mesh_t3648964284 * p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C"  float Camera_get_aspect_m862507514 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.ScriptableObject::CreateInstance<SleekRender.SleekRenderSettings>()
#define ScriptableObject_CreateInstance_TisSleekRenderSettings_t4177321799_m3770868688(__this /* static, unused */, method) ((  SleekRenderSettings_t4177321799 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
extern "C"  void Mesh_set_colors_m2218481242 (Mesh_t3648964284 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
extern "C"  void Mesh_UploadMeshData_m969465843 (Mesh_t3648964284 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C"  int32_t Shader_PropertyToID_m1030499873 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C"  Color_t2555686324  Color_get_clear_m1016382534 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern "C"  Color32_t2600501292  Color32_op_Implicit_m2658259763 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SleekRender.SleekRenderPostProcess::.ctor()
extern "C"  void SleekRenderPostProcess__ctor_m3334077378 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::OnEnable()
extern "C"  void SleekRenderPostProcess_OnEnable_m3176326764 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method)
{
	{
		SleekRenderPostProcess_CreateDefaultSettingsIfNoneLinked_m1298226038(__this, /*hidden argument*/NULL);
		SleekRenderPostProcess_CreateResources_m1600934277(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::OnDisable()
extern "C"  void SleekRenderPostProcess_OnDisable_m2023566816 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method)
{
	{
		SleekRenderPostProcess_ReleaseResources_m1501736662(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_OnRenderImage_m406106005 (SleekRenderPostProcess_t1198037834 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___target1, const RuntimeMethod* method)
{
	{
		RenderTexture_t2108887433 * L_0 = ___source0;
		SleekRenderPostProcess_ApplyPostProcess_m3097771293(__this, L_0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = ___source0;
		RenderTexture_t2108887433 * L_2 = ___target1;
		SleekRenderPostProcess_Compose_m818386553(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::ApplyPostProcess(UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_ApplyPostProcess_m3097771293 (SleekRenderPostProcess_t1198037834 * __this, RenderTexture_t2108887433 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		SleekRenderSettings_t4177321799 * L_0 = __this->get_settings_2();
		NullCheck(L_0);
		bool L_1 = L_0->get_bloomEnabled_3();
		V_0 = L_1;
		RenderTexture_t2108887433 * L_2 = ___source0;
		SleekRenderPostProcess_Downsample_m2967697245(__this, L_2, /*hidden argument*/NULL);
		bool L_3 = V_0;
		SleekRenderPostProcess_Bloom_m2575643348(__this, L_3, /*hidden argument*/NULL);
		bool L_4 = V_0;
		SleekRenderPostProcess_Precompose_m2027997387(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::Downsample(UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_Downsample_m2967697245 (SleekRenderPostProcess_t1198037834 * __this, RenderTexture_t2108887433 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_Downsample_m2967697245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector4_t3319028937  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		SleekRenderSettings_t4177321799 * L_0 = __this->get_settings_2();
		NullCheck(L_0);
		float L_1 = L_0->get_bloomThreshold_4();
		V_0 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_1))));
		SleekRenderSettings_t4177321799 * L_2 = __this->get_settings_2();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = L_2->get_bloomLumaVector_11();
		V_1 = L_3;
		float L_4 = (&V_1)->get_x_1();
		float L_5 = V_0;
		float L_6 = (&V_1)->get_y_2();
		float L_7 = V_0;
		float L_8 = (&V_1)->get_z_3();
		float L_9 = V_0;
		SleekRenderSettings_t4177321799 * L_10 = __this->get_settings_2();
		NullCheck(L_10);
		float L_11 = L_10->get_bloomThreshold_4();
		float L_12 = V_0;
		Vector4__ctor_m2498754347((Vector4_t3319028937 *)(&V_2), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), ((float)il2cpp_codegen_multiply((float)((-L_11)), (float)L_12)), /*hidden argument*/NULL);
		Material_t340375123 * L_13 = __this->get__downsampleMaterial_3();
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t356173120_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__LuminanceConst_0();
		Vector4_t3319028937  L_15 = V_2;
		NullCheck(L_13);
		Material_SetVector_m2633010038(L_13, L_14, L_15, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_16 = ___source0;
		RenderTexture_t2108887433 * L_17 = __this->get__downsampledBrightpassTexture_8();
		Material_t340375123 * L_18 = __this->get__downsampleMaterial_3();
		SleekRenderPostProcess_Blit_m159013157(__this, L_16, L_17, L_18, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::Bloom(System.Boolean)
extern "C"  void SleekRenderPostProcess_Bloom_m2575643348 (SleekRenderPostProcess_t1198037834 * __this, bool ___isBloomEnabled0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___isBloomEnabled0;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		RenderTexture_t2108887433 * L_1 = __this->get__downsampledBrightpassTexture_8();
		RenderTexture_t2108887433 * L_2 = __this->get__brightPassBlurTexture_9();
		Material_t340375123 * L_3 = __this->get__horizontalBlurMaterial_4();
		SleekRenderPostProcess_Blit_m159013157(__this, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_4 = __this->get__brightPassBlurTexture_9();
		RenderTexture_t2108887433 * L_5 = __this->get__verticalBlurTexture_11();
		Material_t340375123 * L_6 = __this->get__verticalBlurMaterial_5();
		SleekRenderPostProcess_Blit_m159013157(__this, L_4, L_5, L_6, 0, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::Precompose(System.Boolean)
extern "C"  void SleekRenderPostProcess_Precompose_m2027997387 (SleekRenderPostProcess_t1198037834 * __this, bool ___isBloomEnabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_Precompose_m2027997387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Color_t2555686324  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		SleekRenderSettings_t4177321799 * L_0 = __this->get_settings_2();
		NullCheck(L_0);
		bool L_1 = L_0->get_vignetteEnabled_16();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		bool L_3 = __this->get__isVignetteAlreadyEnabled_19();
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		Material_t340375123 * L_4 = __this->get__preComposeMaterial_6();
		NullCheck(L_4);
		Material_EnableKeyword_m329692301(L_4, _stringLiteral3938486821, /*hidden argument*/NULL);
		__this->set__isVignetteAlreadyEnabled_19((bool)1);
		goto IL_0061;
	}

IL_0039:
	{
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0061;
		}
	}
	{
		bool L_6 = __this->get__isVignetteAlreadyEnabled_19();
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		Material_t340375123 * L_7 = __this->get__preComposeMaterial_6();
		NullCheck(L_7);
		Material_DisableKeyword_m1245091008(L_7, _stringLiteral3938486821, /*hidden argument*/NULL);
		__this->set__isVignetteAlreadyEnabled_19((bool)0);
	}

IL_0061:
	{
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_010b;
		}
	}
	{
		SleekRenderSettings_t4177321799 * L_9 = __this->get_settings_2();
		NullCheck(L_9);
		float L_10 = L_9->get_vignetteBeginRadius_17();
		V_1 = L_10;
		float L_11 = V_1;
		float L_12 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12));
		float L_13 = V_1;
		SleekRenderSettings_t4177321799 * L_14 = __this->get_settings_2();
		NullCheck(L_14);
		float L_15 = L_14->get_vignetteExpandRadius_18();
		V_3 = ((float)il2cpp_codegen_add((float)L_13, (float)L_15));
		float L_16 = V_3;
		float L_17 = V_2;
		V_4 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_17))));
		SleekRenderSettings_t4177321799 * L_18 = __this->get_settings_2();
		NullCheck(L_18);
		Color_t2555686324  L_19 = L_18->get_vignetteColor_19();
		V_5 = L_19;
		Material_t340375123 * L_20 = __this->get__preComposeMaterial_6();
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t356173120_il2cpp_TypeInfo_var);
		int32_t L_21 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__VignetteShape_8();
		float L_22 = V_4;
		float L_23 = V_4;
		float L_24 = V_4;
		float L_25 = V_2;
		Vector4_t3319028937  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector4__ctor_m3795604412((&L_26), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_22)), (float)L_23)), ((float)il2cpp_codegen_multiply((float)((-L_24)), (float)L_25)), /*hidden argument*/NULL);
		NullCheck(L_20);
		Material_SetVector_m2633010038(L_20, L_21, L_26, /*hidden argument*/NULL);
		Material_t340375123 * L_27 = __this->get__preComposeMaterial_6();
		int32_t L_28 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__VignetteColor_9();
		float L_29 = (&V_5)->get_r_0();
		float L_30 = (&V_5)->get_a_3();
		float L_31 = (&V_5)->get_g_1();
		float L_32 = (&V_5)->get_a_3();
		float L_33 = (&V_5)->get_b_2();
		float L_34 = (&V_5)->get_a_3();
		float L_35 = (&V_5)->get_a_3();
		Color_t2555686324  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Color__ctor_m2943235014((&L_36), ((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)), ((float)il2cpp_codegen_multiply((float)L_31, (float)L_32)), ((float)il2cpp_codegen_multiply((float)L_33, (float)L_34)), L_35, /*hidden argument*/NULL);
		NullCheck(L_27);
		Material_SetColor_m355160541(L_27, L_28, L_36, /*hidden argument*/NULL);
	}

IL_010b:
	{
		bool L_37 = ___isBloomEnabled0;
		if (!L_37)
		{
			goto IL_016e;
		}
	}
	{
		Material_t340375123 * L_38 = __this->get__preComposeMaterial_6();
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t356173120_il2cpp_TypeInfo_var);
		int32_t L_39 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__BloomIntencity_1();
		SleekRenderSettings_t4177321799 * L_40 = __this->get_settings_2();
		NullCheck(L_40);
		float L_41 = L_40->get_bloomIntensity_5();
		NullCheck(L_38);
		Material_SetFloat_m1688718093(L_38, L_39, L_41, /*hidden argument*/NULL);
		Material_t340375123 * L_42 = __this->get__preComposeMaterial_6();
		int32_t L_43 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__BloomTint_2();
		SleekRenderSettings_t4177321799 * L_44 = __this->get_settings_2();
		NullCheck(L_44);
		Color_t2555686324  L_45 = L_44->get_bloomTint_6();
		NullCheck(L_42);
		Material_SetColor_m355160541(L_42, L_43, L_45, /*hidden argument*/NULL);
		bool L_46 = __this->get__isBloomAlreadyEnabled_18();
		if (L_46)
		{
			goto IL_0169;
		}
	}
	{
		Material_t340375123 * L_47 = __this->get__preComposeMaterial_6();
		NullCheck(L_47);
		Material_EnableKeyword_m329692301(L_47, _stringLiteral457990251, /*hidden argument*/NULL);
		__this->set__isBloomAlreadyEnabled_18((bool)1);
	}

IL_0169:
	{
		goto IL_0190;
	}

IL_016e:
	{
		bool L_48 = __this->get__isBloomAlreadyEnabled_18();
		if (!L_48)
		{
			goto IL_0190;
		}
	}
	{
		Material_t340375123 * L_49 = __this->get__preComposeMaterial_6();
		NullCheck(L_49);
		Material_DisableKeyword_m1245091008(L_49, _stringLiteral457990251, /*hidden argument*/NULL);
		__this->set__isBloomAlreadyEnabled_18((bool)0);
	}

IL_0190:
	{
		RenderTexture_t2108887433 * L_50 = __this->get__downsampledBrightpassTexture_8();
		RenderTexture_t2108887433 * L_51 = __this->get__preComposeTexture_12();
		Material_t340375123 * L_52 = __this->get__preComposeMaterial_6();
		SleekRenderPostProcess_Blit_m159013157(__this, L_50, L_51, L_52, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::Compose(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_Compose_m818386553 (SleekRenderPostProcess_t1198037834 * __this, RenderTexture_t2108887433 * ___source0, RenderTexture_t2108887433 * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_Compose_m818386553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Color_t2555686324  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		SleekRenderSettings_t4177321799 * L_0 = __this->get_settings_2();
		NullCheck(L_0);
		Color32_t2600501292  L_1 = L_0->get_colorize_14();
		Color_t2555686324  L_2 = Color32_op_Implicit_m213813866(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_a_3();
		V_1 = L_3;
		float L_4 = (&V_0)->get_r_0();
		float L_5 = V_1;
		float L_6 = (&V_0)->get_g_1();
		float L_7 = V_1;
		float L_8 = (&V_0)->get_b_2();
		float L_9 = V_1;
		float L_10 = V_1;
		Color__ctor_m2943235014((Color_t2555686324 *)(&V_2), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_10)), /*hidden argument*/NULL);
		Material_t340375123 * L_11 = __this->get__composeMaterial_7();
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t356173120_il2cpp_TypeInfo_var);
		int32_t L_12 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__Colorize_7();
		Color_t2555686324  L_13 = V_2;
		NullCheck(L_11);
		Material_SetColor_m355160541(L_11, L_12, L_13, /*hidden argument*/NULL);
		SleekRenderSettings_t4177321799 * L_14 = __this->get_settings_2();
		NullCheck(L_14);
		bool L_15 = L_14->get_colorizeEnabled_13();
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		bool L_16 = __this->get__isColorizeAlreadyEnabled_17();
		if (L_16)
		{
			goto IL_008a;
		}
	}
	{
		Material_t340375123 * L_17 = __this->get__composeMaterial_7();
		NullCheck(L_17);
		Material_EnableKeyword_m329692301(L_17, _stringLiteral1800305868, /*hidden argument*/NULL);
		__this->set__isColorizeAlreadyEnabled_17((bool)1);
		goto IL_00bc;
	}

IL_008a:
	{
		SleekRenderSettings_t4177321799 * L_18 = __this->get_settings_2();
		NullCheck(L_18);
		bool L_19 = L_18->get_colorizeEnabled_13();
		if (L_19)
		{
			goto IL_00bc;
		}
	}
	{
		bool L_20 = __this->get__isColorizeAlreadyEnabled_17();
		if (!L_20)
		{
			goto IL_00bc;
		}
	}
	{
		Material_t340375123 * L_21 = __this->get__composeMaterial_7();
		NullCheck(L_21);
		Material_DisableKeyword_m1245091008(L_21, _stringLiteral1800305868, /*hidden argument*/NULL);
		__this->set__isColorizeAlreadyEnabled_17((bool)0);
	}

IL_00bc:
	{
		SleekRenderSettings_t4177321799 * L_22 = __this->get_settings_2();
		NullCheck(L_22);
		float L_23 = L_22->get_contrast_22();
		V_3 = ((float)il2cpp_codegen_add((float)L_23, (float)(1.0f)));
		SleekRenderSettings_t4177321799 * L_24 = __this->get_settings_2();
		NullCheck(L_24);
		float L_25 = L_24->get_brightness_23();
		V_4 = ((float)((float)((float)il2cpp_codegen_add((float)L_25, (float)(1.0f)))/(float)(2.0f)));
		float L_26 = V_3;
		float L_27 = V_4;
		V_5 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(-0.5f), (float)((float)il2cpp_codegen_add((float)L_26, (float)(1.0f))))), (float)((float)il2cpp_codegen_multiply((float)L_27, (float)(2.0f)))));
		Material_t340375123 * L_28 = __this->get__composeMaterial_7();
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t356173120_il2cpp_TypeInfo_var);
		int32_t L_29 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__BrightnessContrast_10();
		float L_30 = V_3;
		float L_31 = V_4;
		float L_32 = V_5;
		Vector4_t3319028937  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector4__ctor_m432325927((&L_33), L_30, L_31, L_32, /*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetVector_m2633010038(L_28, L_29, L_33, /*hidden argument*/NULL);
		SleekRenderSettings_t4177321799 * L_34 = __this->get_settings_2();
		NullCheck(L_34);
		bool L_35 = L_34->get_brightnessContrastEnabled_21();
		if (!L_35)
		{
			goto IL_0150;
		}
	}
	{
		bool L_36 = __this->get__isContrastAndBrightnessAlreadyEnabled_21();
		if (L_36)
		{
			goto IL_0150;
		}
	}
	{
		Material_t340375123 * L_37 = __this->get__composeMaterial_7();
		NullCheck(L_37);
		Material_EnableKeyword_m329692301(L_37, _stringLiteral231784706, /*hidden argument*/NULL);
		__this->set__isContrastAndBrightnessAlreadyEnabled_21((bool)1);
		goto IL_0182;
	}

IL_0150:
	{
		SleekRenderSettings_t4177321799 * L_38 = __this->get_settings_2();
		NullCheck(L_38);
		bool L_39 = L_38->get_brightnessContrastEnabled_21();
		if (L_39)
		{
			goto IL_0182;
		}
	}
	{
		bool L_40 = __this->get__isContrastAndBrightnessAlreadyEnabled_21();
		if (!L_40)
		{
			goto IL_0182;
		}
	}
	{
		Material_t340375123 * L_41 = __this->get__composeMaterial_7();
		NullCheck(L_41);
		Material_DisableKeyword_m1245091008(L_41, _stringLiteral231784706, /*hidden argument*/NULL);
		__this->set__isContrastAndBrightnessAlreadyEnabled_21((bool)0);
	}

IL_0182:
	{
		RenderTexture_t2108887433 * L_42 = ___source0;
		RenderTexture_t2108887433 * L_43 = ___target1;
		Material_t340375123 * L_44 = __this->get__composeMaterial_7();
		SleekRenderPostProcess_Blit_m159013157(__this, L_42, L_43, L_44, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::CreateResources()
extern "C"  void SleekRenderPostProcess_CreateResources_m1600934277 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_CreateResources_m1600934277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_t4151988712 * V_0 = NULL;
	Shader_t4151988712 * V_1 = NULL;
	Shader_t4151988712 * V_2 = NULL;
	Shader_t4151988712 * V_3 = NULL;
	Shader_t4151988712 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Vector4_t3319028937  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector4_t3319028937  V_16;
	memset(&V_16, 0, sizeof(V_16));
	int32_t G_B3_0 = 0;
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		__this->set__mainCamera_13(L_0);
		Shader_t4151988712 * L_1 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3694549026, /*hidden argument*/NULL);
		V_0 = L_1;
		Shader_t4151988712 * L_2 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3650289648, /*hidden argument*/NULL);
		V_1 = L_2;
		Shader_t4151988712 * L_3 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral2065593632, /*hidden argument*/NULL);
		V_2 = L_3;
		Shader_t4151988712 * L_4 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral168235785, /*hidden argument*/NULL);
		V_3 = L_4;
		Shader_t4151988712 * L_5 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral2483455595, /*hidden argument*/NULL);
		V_4 = L_5;
		Shader_t4151988712 * L_6 = V_0;
		Material_t340375123 * L_7 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_7, L_6, /*hidden argument*/NULL);
		__this->set__downsampleMaterial_3(L_7);
		Shader_t4151988712 * L_8 = V_1;
		Material_t340375123 * L_9 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_9, L_8, /*hidden argument*/NULL);
		__this->set__horizontalBlurMaterial_4(L_9);
		Shader_t4151988712 * L_10 = V_2;
		Material_t340375123 * L_11 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_11, L_10, /*hidden argument*/NULL);
		__this->set__verticalBlurMaterial_5(L_11);
		Shader_t4151988712 * L_12 = V_4;
		Material_t340375123 * L_13 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_13, L_12, /*hidden argument*/NULL);
		__this->set__preComposeMaterial_6(L_13);
		Shader_t4151988712 * L_14 = V_3;
		Material_t340375123 * L_15 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_15, L_14, /*hidden argument*/NULL);
		__this->set__composeMaterial_7(L_15);
		Camera_t4157153871 * L_16 = __this->get__mainCamera_13();
		NullCheck(L_16);
		int32_t L_17 = Camera_get_pixelWidth_m1110053668(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_18 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, (((float)((float)L_17))), /*hidden argument*/NULL);
		__this->set__currentCameraPixelWidth_15(L_18);
		Camera_t4157153871 * L_19 = __this->get__mainCamera_13();
		NullCheck(L_19);
		int32_t L_20 = Camera_get_pixelHeight_m722276884(L_19, /*hidden argument*/NULL);
		int32_t L_21 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, (((float)((float)L_20))), /*hidden argument*/NULL);
		__this->set__currentCameraPixelHeight_16(L_21);
		int32_t L_22 = __this->get__currentCameraPixelWidth_15();
		V_5 = L_22;
		int32_t L_23 = __this->get__currentCameraPixelHeight_16();
		V_6 = L_23;
		int32_t L_24 = V_6;
		int32_t L_25 = Mathf_Min_m18103608(NULL /*static, unused*/, L_24, ((int32_t)720), /*hidden argument*/NULL);
		V_7 = L_25;
		int32_t L_26 = V_7;
		int32_t L_27 = V_6;
		V_8 = ((float)((float)(((float)((float)L_26)))/(float)(((float)((float)L_27)))));
		SleekRenderSettings_t4177321799 * L_28 = __this->get_settings_2();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_bloomTextureHeight_9();
		V_9 = L_29;
		SleekRenderSettings_t4177321799 * L_30 = __this->get_settings_2();
		NullCheck(L_30);
		bool L_31 = L_30->get_preserveAspectRatio_7();
		if (!L_31)
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_32 = V_9;
		Camera_t4157153871 * L_33 = __this->get__mainCamera_13();
		float L_34 = SleekRenderPostProcess_GetCurrentAspect_m2508355066(__this, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_35 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_32))), (float)L_34)), /*hidden argument*/NULL);
		G_B3_0 = L_35;
		goto IL_0118;
	}

IL_010d:
	{
		SleekRenderSettings_t4177321799 * L_36 = __this->get_settings_2();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_bloomTextureWidth_8();
		G_B3_0 = L_37;
	}

IL_0118:
	{
		V_10 = G_B3_0;
		int32_t L_38 = V_5;
		float L_39 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_40 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_38))), (float)L_39))/(float)(5.0f))), /*hidden argument*/NULL);
		V_11 = L_40;
		int32_t L_41 = V_6;
		float L_42 = V_8;
		int32_t L_43 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_41))), (float)L_42))/(float)(5.0f))), /*hidden argument*/NULL);
		V_12 = L_43;
		int32_t L_44 = V_11;
		int32_t L_45 = V_12;
		RenderTexture_t2108887433 * L_46 = SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971(__this, _stringLiteral3444228278, L_44, L_45, /*hidden argument*/NULL);
		__this->set__downsampledBrightpassTexture_8(L_46);
		int32_t L_47 = V_10;
		int32_t L_48 = V_9;
		RenderTexture_t2108887433 * L_49 = SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971(__this, _stringLiteral3476570019, L_47, L_48, /*hidden argument*/NULL);
		__this->set__brightPassBlurTexture_9(L_49);
		int32_t L_50 = V_10;
		int32_t L_51 = V_9;
		RenderTexture_t2108887433 * L_52 = SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971(__this, _stringLiteral3004949082, L_50, L_51, /*hidden argument*/NULL);
		__this->set__horizontalBlurTexture_10(L_52);
		int32_t L_53 = V_10;
		int32_t L_54 = V_9;
		RenderTexture_t2108887433 * L_55 = SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971(__this, _stringLiteral4233374580, L_53, L_54, /*hidden argument*/NULL);
		__this->set__verticalBlurTexture_11(L_55);
		int32_t L_56 = V_11;
		int32_t L_57 = V_12;
		RenderTexture_t2108887433 * L_58 = SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971(__this, _stringLiteral3972874343, L_56, L_57, /*hidden argument*/NULL);
		__this->set__preComposeTexture_12(L_58);
		Material_t340375123 * L_59 = __this->get__verticalBlurMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t356173120_il2cpp_TypeInfo_var);
		int32_t L_60 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__MainTex_3();
		RenderTexture_t2108887433 * L_61 = __this->get__downsampledBrightpassTexture_8();
		NullCheck(L_59);
		Material_SetTexture_m3009528825(L_59, L_60, L_61, /*hidden argument*/NULL);
		Material_t340375123 * L_62 = __this->get__verticalBlurMaterial_5();
		int32_t L_63 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__BloomTex_4();
		RenderTexture_t2108887433 * L_64 = __this->get__horizontalBlurTexture_10();
		NullCheck(L_62);
		Material_SetTexture_m3009528825(L_62, L_63, L_64, /*hidden argument*/NULL);
		int32_t L_65 = V_10;
		V_13 = ((float)((float)(1.0f)/(float)(((float)((float)L_65)))));
		int32_t L_66 = V_9;
		V_14 = ((float)((float)(1.0f)/(float)(((float)((float)L_66)))));
		float L_67 = V_13;
		float L_68 = V_14;
		Vector4__ctor_m3795604412((Vector4_t3319028937 *)(&V_15), L_67, L_68, /*hidden argument*/NULL);
		Material_t340375123 * L_69 = __this->get__verticalBlurMaterial_5();
		int32_t L_70 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__TexelSize_6();
		Vector4_t3319028937  L_71 = V_15;
		NullCheck(L_69);
		Material_SetVector_m2633010038(L_69, L_70, L_71, /*hidden argument*/NULL);
		Material_t340375123 * L_72 = __this->get__horizontalBlurMaterial_4();
		int32_t L_73 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__TexelSize_6();
		Vector4_t3319028937  L_74 = V_15;
		NullCheck(L_72);
		Material_SetVector_m2633010038(L_72, L_73, L_74, /*hidden argument*/NULL);
		Material_t340375123 * L_75 = __this->get__preComposeMaterial_6();
		int32_t L_76 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__BloomTex_4();
		RenderTexture_t2108887433 * L_77 = __this->get__verticalBlurTexture_11();
		NullCheck(L_75);
		Material_SetTexture_m3009528825(L_75, L_76, L_77, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_78 = __this->get__downsampledBrightpassTexture_8();
		NullCheck(L_78);
		int32_t L_79 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_78);
		RenderTexture_t2108887433 * L_80 = __this->get__downsampledBrightpassTexture_8();
		NullCheck(L_80);
		int32_t L_81 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_80);
		Vector4__ctor_m3795604412((Vector4_t3319028937 *)(&V_16), ((float)((float)(1.0f)/(float)(((float)((float)L_79))))), ((float)((float)(1.0f)/(float)(((float)((float)L_81))))), /*hidden argument*/NULL);
		Material_t340375123 * L_82 = __this->get__downsampleMaterial_3();
		int32_t L_83 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__TexelSize_6();
		Vector4_t3319028937  L_84 = V_16;
		NullCheck(L_82);
		Material_SetVector_m2633010038(L_82, L_83, L_84, /*hidden argument*/NULL);
		Material_t340375123 * L_85 = __this->get__composeMaterial_7();
		int32_t L_86 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__PreComposeTex_5();
		RenderTexture_t2108887433 * L_87 = __this->get__preComposeTexture_12();
		NullCheck(L_85);
		Material_SetTexture_m3009528825(L_85, L_86, L_87, /*hidden argument*/NULL);
		Material_t340375123 * L_88 = __this->get__composeMaterial_7();
		int32_t L_89 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__LuminanceConst_0();
		Vector4_t3319028937  L_90;
		memset(&L_90, 0, sizeof(L_90));
		Vector4__ctor_m2498754347((&L_90), (0.2126f), (0.7152f), (0.0722f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_88);
		Material_SetVector_m2633010038(L_88, L_89, L_90, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_91 = SleekRenderPostProcess_CreateScreenSpaceQuadMesh_m2085815782(__this, /*hidden argument*/NULL);
		__this->set__fullscreenQuadMesh_14(L_91);
		__this->set__isColorizeAlreadyEnabled_17((bool)0);
		__this->set__isBloomAlreadyEnabled_18((bool)0);
		__this->set__isVignetteAlreadyEnabled_19((bool)0);
		__this->set__isContrastAndBrightnessAlreadyEnabled_21((bool)0);
		return;
	}
}
// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::CreateTransientRenderTexture(System.String,System.Int32,System.Int32)
extern "C"  RenderTexture_t2108887433 * SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971 (SleekRenderPostProcess_t1198037834 * __this, String_t* ___textureName0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_CreateTransientRenderTexture_m1525290971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		RenderTexture_t2108887433 * L_2 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m2187158709(L_2, L_0, L_1, 0, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		RenderTexture_t2108887433 * L_3 = V_0;
		String_t* L_4 = ___textureName0;
		NullCheck(L_3);
		Object_set_name_m291480324(L_3, L_4, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_5 = V_0;
		NullCheck(L_5);
		Texture_set_filterMode_m3078068058(L_5, 1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_6 = V_0;
		NullCheck(L_6);
		Texture_set_wrapMode_m587872754(L_6, 1, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.RenderTexture SleekRender.SleekRenderPostProcess::CreateMainRenderTexture(System.Int32,System.Int32)
extern "C"  RenderTexture_t2108887433 * SleekRenderPostProcess_CreateMainRenderTexture_m1029585022 (SleekRenderPostProcess_t1198037834 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_CreateMainRenderTexture_m1029585022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	RenderTexture_t2108887433 * V_4 = NULL;
	int32_t V_5 = 0;
	RenderTexture_t2108887433 * G_B6_0 = NULL;
	RenderTexture_t2108887433 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	RenderTexture_t2108887433 * G_B7_1 = NULL;
	{
		int32_t L_0 = SystemInfo_get_graphicsDeviceType_m2360462293(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)16)))? 1 : 0);
		String_t* L_1 = SystemInfo_get_graphicsDeviceName_m3658997806(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = String_Contains_m1147431944(L_1, _stringLiteral3671618460, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = SystemInfo_SupportsRenderTextureFormat_m1663449629(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		V_3 = 4;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003a;
		}
	}

IL_0038:
	{
		V_3 = 0;
	}

IL_003a:
	{
		int32_t L_7 = ___width0;
		int32_t L_8 = ___height1;
		int32_t L_9 = V_3;
		RenderTexture_t2108887433 * L_10 = (RenderTexture_t2108887433 *)il2cpp_codegen_object_new(RenderTexture_t2108887433_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m2187158709(L_10, L_7, L_8, ((int32_t)16), L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		int32_t L_11 = QualitySettings_get_antiAliasing_m1365131962(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_11;
		RenderTexture_t2108887433 * L_12 = V_4;
		int32_t L_13 = V_5;
		G_B5_0 = L_12;
		if (L_13)
		{
			G_B6_0 = L_12;
			goto IL_005c;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		goto IL_005e;
	}

IL_005c:
	{
		int32_t L_14 = V_5;
		G_B7_0 = L_14;
		G_B7_1 = G_B6_0;
	}

IL_005e:
	{
		NullCheck(G_B7_1);
		RenderTexture_set_antiAliasing_m157775987(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_15 = V_4;
		return L_15;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::ReleaseResources()
extern "C"  void SleekRenderPostProcess_ReleaseResources_m1501736662 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method)
{
	{
		Material_t340375123 * L_0 = __this->get__downsampleMaterial_3();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_0, /*hidden argument*/NULL);
		Material_t340375123 * L_1 = __this->get__horizontalBlurMaterial_4();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_1, /*hidden argument*/NULL);
		Material_t340375123 * L_2 = __this->get__verticalBlurMaterial_5();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_2, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = __this->get__preComposeMaterial_6();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_3, /*hidden argument*/NULL);
		Material_t340375123 * L_4 = __this->get__composeMaterial_7();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_4, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_5 = __this->get__downsampledBrightpassTexture_8();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_5, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_6 = __this->get__brightPassBlurTexture_9();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_6, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_7 = __this->get__horizontalBlurTexture_10();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_7, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_8 = __this->get__verticalBlurTexture_11();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_8, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_9 = __this->get__preComposeTexture_12();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_9, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_10 = __this->get__fullscreenQuadMesh_14();
		SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::DestroyImmediateIfNotNull(UnityEngine.Object)
extern "C"  void SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744 (SleekRenderPostProcess_t1198037834 * __this, Object_t631007953 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_DestroyImmediateIfNotNull_m3263494744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_t631007953 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t631007953 * L_2 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void SleekRenderPostProcess_Blit_m159013157 (SleekRenderPostProcess_t1198037834 * __this, Texture_t3661962703 * ___source0, RenderTexture_t2108887433 * ___destination1, Material_t340375123 * ___material2, int32_t ___materialPass3, const RuntimeMethod* method)
{
	{
		RenderTexture_t2108887433 * L_0 = ___destination1;
		SleekRenderPostProcess_SetActiveRenderTextureAndClear_m2724107613(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Texture_t3661962703 * L_1 = ___source0;
		Material_t340375123 * L_2 = ___material2;
		int32_t L_3 = ___materialPass3;
		SleekRenderPostProcess_DrawFullscreenQuad_m2781339783(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::SetActiveRenderTextureAndClear(UnityEngine.RenderTexture)
extern "C"  void SleekRenderPostProcess_SetActiveRenderTextureAndClear_m2724107613 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * ___destination0, const RuntimeMethod* method)
{
	{
		RenderTexture_t2108887433 * L_0 = ___destination0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t2555686324  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m2943235014((&L_1), (1.0f), (0.75f), (0.5f), (0.8f), /*hidden argument*/NULL);
		GL_Clear_m467593486(NULL /*static, unused*/, (bool)1, (bool)1, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::DrawFullscreenQuad(UnityEngine.Texture,UnityEngine.Material,System.Int32)
extern "C"  void SleekRenderPostProcess_DrawFullscreenQuad_m2781339783 (SleekRenderPostProcess_t1198037834 * __this, Texture_t3661962703 * ___source0, Material_t340375123 * ___material1, int32_t ___materialPass2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_DrawFullscreenQuad_m2781339783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = ___material1;
		IL2CPP_RUNTIME_CLASS_INIT(Uniforms_t356173120_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->get__MainTex_3();
		Texture_t3661962703 * L_2 = ___source0;
		NullCheck(L_0);
		Material_SetTexture_m3009528825(L_0, L_1, L_2, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = ___material1;
		int32_t L_4 = ___materialPass2;
		NullCheck(L_3);
		Material_SetPass_m686253719(L_3, L_4, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_5 = __this->get__fullscreenQuadMesh_14();
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_6 = Matrix4x4_get_identity_m1406790249(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t783367614_il2cpp_TypeInfo_var);
		Graphics_DrawMeshNow_m1430028224(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SleekRender.SleekRenderPostProcess::CheckScreenSizeAndRecreateTexturesIfNeeded(UnityEngine.Camera)
extern "C"  void SleekRenderPostProcess_CheckScreenSizeAndRecreateTexturesIfNeeded_m844096608 (SleekRenderPostProcess_t1198037834 * __this, Camera_t4157153871 * ___mainCamera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_CheckScreenSizeAndRecreateTexturesIfNeeded_m844096608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Camera_t4157153871 * L_0 = ___mainCamera0;
		NullCheck(L_0);
		int32_t L_1 = Camera_get_pixelWidth_m1110053668(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get__currentCameraPixelWidth_15();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0024;
		}
	}
	{
		Camera_t4157153871 * L_3 = ___mainCamera0;
		NullCheck(L_3);
		int32_t L_4 = Camera_get_pixelHeight_m722276884(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get__currentCameraPixelHeight_16();
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		RenderTexture_t2108887433 * L_6 = __this->get__horizontalBlurTexture_10();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		SleekRenderSettings_t4177321799 * L_8 = __this->get_settings_2();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_bloomTextureHeight_9();
		V_1 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		SleekRenderSettings_t4177321799 * L_10 = __this->get_settings_2();
		NullCheck(L_10);
		bool L_11 = L_10->get_preserveAspectRatio_7();
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		bool L_12 = V_1;
		RenderTexture_t2108887433 * L_13 = __this->get__horizontalBlurTexture_10();
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		SleekRenderSettings_t4177321799 * L_15 = __this->get_settings_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_bloomTextureWidth_8();
		V_1 = (bool)((int32_t)((int32_t)L_12|(int32_t)((((int32_t)((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
	}

IL_0070:
	{
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_00b1;
		}
	}
	{
		SleekRenderSettings_t4177321799 * L_18 = __this->get_settings_2();
		NullCheck(L_18);
		bool L_19 = L_18->get_preserveAspectRatio_7();
		if (!L_19)
		{
			goto IL_00b1;
		}
	}
	{
		RenderTexture_t2108887433 * L_20 = __this->get__horizontalBlurTexture_10();
		NullCheck(L_20);
		int32_t L_21 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		RenderTexture_t2108887433 * L_22 = __this->get__horizontalBlurTexture_10();
		NullCheck(L_22);
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		Camera_t4157153871 * L_24 = ___mainCamera0;
		float L_25 = SleekRenderPostProcess_GetCurrentAspect_m2508355066(__this, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_26 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_23))), (float)L_25)), /*hidden argument*/NULL);
		if ((((int32_t)L_21) == ((int32_t)L_26)))
		{
			goto IL_00b1;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_00b1:
	{
		SleekRenderSettings_t4177321799 * L_27 = __this->get_settings_2();
		NullCheck(L_27);
		bool L_28 = L_27->get_preserveAspectRatio_7();
		if (!L_28)
		{
			goto IL_00cc;
		}
	}
	{
		bool L_29 = __this->get__isAlreadyPreservingAspectRatio_20();
		if (!L_29)
		{
			goto IL_00e7;
		}
	}

IL_00cc:
	{
		SleekRenderSettings_t4177321799 * L_30 = __this->get_settings_2();
		NullCheck(L_30);
		bool L_31 = L_30->get_preserveAspectRatio_7();
		if (L_31)
		{
			goto IL_00fa;
		}
	}
	{
		bool L_32 = __this->get__isAlreadyPreservingAspectRatio_20();
		if (!L_32)
		{
			goto IL_00fa;
		}
	}

IL_00e7:
	{
		SleekRenderSettings_t4177321799 * L_33 = __this->get_settings_2();
		NullCheck(L_33);
		bool L_34 = L_33->get_preserveAspectRatio_7();
		__this->set__isAlreadyPreservingAspectRatio_20(L_34);
		V_1 = (bool)1;
	}

IL_00fa:
	{
		bool L_35 = V_0;
		if (L_35)
		{
			goto IL_0106;
		}
	}
	{
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_0112;
		}
	}

IL_0106:
	{
		SleekRenderPostProcess_ReleaseResources_m1501736662(__this, /*hidden argument*/NULL);
		SleekRenderPostProcess_CreateResources_m1600934277(__this, /*hidden argument*/NULL);
	}

IL_0112:
	{
		return;
	}
}
// System.Single SleekRender.SleekRenderPostProcess::GetCurrentAspect(UnityEngine.Camera)
extern "C"  float SleekRenderPostProcess_GetCurrentAspect_m2508355066 (SleekRenderPostProcess_t1198037834 * __this, Camera_t4157153871 * ___mainCamera0, const RuntimeMethod* method)
{
	{
		Camera_t4157153871 * L_0 = ___mainCamera0;
		NullCheck(L_0);
		float L_1 = Camera_get_aspect_m862507514(L_0, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_multiply((float)L_1, (float)(0.7f)));
	}
}
// System.Void SleekRender.SleekRenderPostProcess::CreateDefaultSettingsIfNoneLinked()
extern "C"  void SleekRenderPostProcess_CreateDefaultSettingsIfNoneLinked_m1298226038 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_CreateDefaultSettingsIfNoneLinked_m1298226038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SleekRenderSettings_t4177321799 * L_0 = __this->get_settings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		SleekRenderSettings_t4177321799 * L_2 = ScriptableObject_CreateInstance_TisSleekRenderSettings_t4177321799_m3770868688(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisSleekRenderSettings_t4177321799_m3770868688_RuntimeMethod_var);
		__this->set_settings_2(L_2);
		SleekRenderSettings_t4177321799 * L_3 = __this->get_settings_2();
		NullCheck(L_3);
		Object_set_name_m291480324(L_3, _stringLiteral2409185935, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// UnityEngine.Mesh SleekRender.SleekRenderPostProcess::CreateScreenSpaceQuadMesh()
extern "C"  Mesh_t3648964284 * SleekRenderPostProcess_CreateScreenSpaceQuadMesh_m2085815782 (SleekRenderPostProcess_t1198037834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SleekRenderPostProcess_CreateScreenSpaceQuadMesh_m2085815782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t3648964284 * V_0 = NULL;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	Vector2U5BU5D_t1457185986* V_2 = NULL;
	ColorU5BU5D_t941916413* V_3 = NULL;
	Int32U5BU5D_t385246372* V_4 = NULL;
	{
		Mesh_t3648964284 * L_0 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3U5BU5D_t1718750761* L_1 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_1);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (-1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_2;
		Vector3U5BU5D_t1718750761* L_3 = L_1;
		NullCheck(L_3);
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), (-1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_4;
		Vector3U5BU5D_t1718750761* L_5 = L_3;
		NullCheck(L_5);
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_6;
		Vector3U5BU5D_t1718750761* L_7 = L_5;
		NullCheck(L_7);
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_8;
		V_1 = L_7;
		Vector2U5BU5D_t1457185986* L_9 = ((Vector2U5BU5D_t1457185986*)SZArrayNew(Vector2U5BU5D_t1457185986_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_9);
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), (0.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_10;
		Vector2U5BU5D_t1457185986* L_11 = L_9;
		NullCheck(L_11);
		Vector2_t2156229523  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector2__ctor_m3970636864((&L_12), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_12;
		Vector2U5BU5D_t1457185986* L_13 = L_11;
		NullCheck(L_13);
		Vector2_t2156229523  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2__ctor_m3970636864((&L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_14;
		Vector2U5BU5D_t1457185986* L_15 = L_13;
		NullCheck(L_15);
		Vector2_t2156229523  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector2__ctor_m3970636864((&L_16), (1.0f), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t2156229523 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_16;
		V_2 = L_15;
		ColorU5BU5D_t941916413* L_17 = ((ColorU5BU5D_t941916413*)SZArrayNew(ColorU5BU5D_t941916413_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_17);
		Color_t2555686324  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Color__ctor_m286683560((&L_18), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Color_t2555686324 *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_18;
		ColorU5BU5D_t941916413* L_19 = L_17;
		NullCheck(L_19);
		Color_t2555686324  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Color__ctor_m286683560((&L_20), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		*(Color_t2555686324 *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_20;
		ColorU5BU5D_t941916413* L_21 = L_19;
		NullCheck(L_21);
		Color_t2555686324  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Color__ctor_m286683560((&L_22), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		*(Color_t2555686324 *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_22;
		ColorU5BU5D_t941916413* L_23 = L_21;
		NullCheck(L_23);
		Color_t2555686324  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Color__ctor_m286683560((&L_24), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Color_t2555686324 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_24;
		V_3 = L_23;
		Int32U5BU5D_t385246372* L_25 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)6));
		RuntimeFieldHandle_t1871169219  L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2D23447D2BC3FF6984AB09F575BC63CFE460337394_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_25, L_26, /*hidden argument*/NULL);
		V_4 = L_25;
		Mesh_t3648964284 * L_27 = V_0;
		Vector3U5BU5D_t1718750761* L_28 = V_1;
		NullCheck(L_27);
		Mesh_set_vertices_m2084450642(L_27, L_28, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_29 = V_0;
		Vector2U5BU5D_t1457185986* L_30 = V_2;
		NullCheck(L_29);
		Mesh_set_uv_m1258646872(L_29, L_30, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_31 = V_0;
		Int32U5BU5D_t385246372* L_32 = V_4;
		NullCheck(L_31);
		Mesh_set_triangles_m255556250(L_31, L_32, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_33 = V_0;
		ColorU5BU5D_t941916413* L_34 = V_3;
		NullCheck(L_33);
		Mesh_set_colors_m2218481242(L_33, L_34, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_35 = V_0;
		NullCheck(L_35);
		Mesh_UploadMeshData_m969465843(L_35, (bool)1, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_36 = V_0;
		return L_36;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SleekRender.SleekRenderPostProcess/Uniforms::.cctor()
extern "C"  void Uniforms__cctor_m552710207 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Uniforms__cctor_m552710207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2962922498, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__LuminanceConst_0(L_0);
		int32_t L_1 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3094985726, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__BloomIntencity_1(L_1);
		int32_t L_2 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1594524906, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__BloomTint_2(L_2);
		int32_t L_3 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral3184621405, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__MainTex_3(L_3);
		int32_t L_4 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2355791104, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__BloomTex_4(L_4);
		int32_t L_5 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral742038175, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__PreComposeTex_5(L_5);
		int32_t L_6 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral2542412538, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__TexelSize_6(L_6);
		int32_t L_7 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral1838316701, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__Colorize_7(L_7);
		int32_t L_8 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral570279171, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__VignetteShape_8(L_8);
		int32_t L_9 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral538452671, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__VignetteColor_9(L_9);
		int32_t L_10 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, _stringLiteral656160448, /*hidden argument*/NULL);
		((Uniforms_t356173120_StaticFields*)il2cpp_codegen_static_fields_for(Uniforms_t356173120_il2cpp_TypeInfo_var))->set__BrightnessContrast_10(L_10);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SleekRender.SleekRenderSettings::.ctor()
extern "C"  void SleekRenderSettings__ctor_m3690522529 (SleekRenderSettings_t4177321799 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bloomEnabled_3((bool)1);
		__this->set_bloomThreshold_4((0.6f));
		__this->set_bloomIntensity_5((2.5f));
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_bloomTint_6(L_0);
		__this->set_bloomTextureWidth_8(((int32_t)128));
		__this->set_bloomTextureHeight_9(((int32_t)128));
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (0.333333343f), (0.333333343f), (0.333333343f), /*hidden argument*/NULL);
		__this->set_bloomLumaVector_11(L_1);
		__this->set_colorizeExpanded_12((bool)1);
		__this->set_colorizeEnabled_13((bool)1);
		Color_t2555686324  L_2 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color32_t2600501292  L_3 = Color32_op_Implicit_m2658259763(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_colorize_14(L_3);
		__this->set_vignetteExpanded_15((bool)1);
		__this->set_vignetteEnabled_16((bool)1);
		__this->set_vignetteBeginRadius_17((0.166f));
		__this->set_vignetteExpandRadius_18((1.34f));
		Color_t2555686324  L_4 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_vignetteColor_19(L_4);
		__this->set_brightnessContrastEnabled_21((bool)1);
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

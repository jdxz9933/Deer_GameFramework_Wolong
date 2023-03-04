#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>
struct IEnumerable_1_t738A577130D5FBE55CDA8A3FF4898A00C43996CA;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>
struct IEnumerable_1_t8BC83955BB4626ACDAB88E89CABC85C7E3BEF89D;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>
struct IEnumerator_1_tCD1905A30C9C22D75C059E095E71B0BFE251D69B;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>
struct IEnumerator_1_tBC69ED349ABDD7F22B3A9CBABBE3DA89E2E648C5;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>
struct UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Kit.Physic.IRayStructBase
struct IRayStructBase_tCF6E4992C27785DE41AE1E04DAD450DCE2A7C904;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Kit.Physic.RaycastHelper
struct RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49
struct U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864;
// Kit.Physic.RaycastHelper/<GetRaycastHits>d__50
struct U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04;
// Kit.Physic.RaycastHelper/HitEvent
struct HitEvent_tDE06B3FCD1F037E09216C43214406B8C5D003619;
// Kit.Physic.RaycastHelper/PhysicRaycast
struct PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* eRayType_t7001D2EE16CA9B3D9ED2711D5AEE3E2CF378A34E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04119E78E6ED8B7871F708048BDC489D7D657083;
IL2CPP_EXTERN_C String_t* _stringLiteral09FCB558390DBD1CD8CB908BA9AF2EB69059913D;
IL2CPP_EXTERN_C String_t* _stringLiteral34EA83FCB72968CB9C9F7F55104E3A1510FE9884;
IL2CPP_EXTERN_C String_t* _stringLiteral35EAC1FFBECF4823C17FC1D459D5C28A1B852B0E;
IL2CPP_EXTERN_C String_t* _stringLiteral49FB99A102E6AB335033D9BF339F11AB3A7BBBA7;
IL2CPP_EXTERN_C String_t* _stringLiteral4C7698F4C6AF397FD442C2C313ED819C21B1ED6D;
IL2CPP_EXTERN_C String_t* _stringLiteral53A7E87840EE87FE39C2098611226EF8BA3B1E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral61543B678348A739486F4C238C933EE79A868276;
IL2CPP_EXTERN_C String_t* _stringLiteral6675D79D48D9A8ADF87563B7F80BCFB289EED09E;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral81E048DB01F27804F29EFA587B95ECF980EC3B48;
IL2CPP_EXTERN_C String_t* _stringLiteral95408E38D178A995B2DD658726B461208160063C;
IL2CPP_EXTERN_C String_t* _stringLiteralA6EBFFA7ABEBFC04A95EBF99F12C26153A920A56;
IL2CPP_EXTERN_C String_t* _stringLiteralB7139B6A7E3DBABDAD233C69E7C3916091800B67;
IL2CPP_EXTERN_C String_t* _stringLiteralB8EF24963AF4F465AFEF56796FC9460FF8960410;
IL2CPP_EXTERN_C String_t* _stringLiteralE39E157ED975E957C7C20C5E2D15684597646E85;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C const RuntimeMethod* CapsuleData_UpdateReference_mD9F5A79036B2EB818F25825CD0CC7E5F70724D69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CapsuleData__ctor_m66209A7C08991F60BE077CC092C74189496F328B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_CheckPhysic_mFAF2D1243C248B276A3D3F3B12B09913B2A0F85B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_GetCurrentStruct_m04056E375F2F7DAB9C991D42368A74E25D16E661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_0_mB911D120E20579295D4FA651F40F94DE1809C7E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_10_mFA7686AA5D1B347E7A0DF84AC0CC353C6428860F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_11_mA76788FE21EE1347629A9104BE6EE77B03560235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_12_m4791B63F99C35F95DE7ADC946188D3A274F37E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_13_m0FFB60ABD2C409BB9503990D5E3A0EEA9290F98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_14_m5CA5E0E22C4E2173C6836D2C66BF04156F11767D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_15_m27701BDB9F0B7BC4FB0B68B6B284EF00B3B70107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_16_mA3ADB575AC6F3721469019C949B8FC9FC6AE8A63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_17_m8F313ED3837CA09660DE227AE57D2EFC235958C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_18_mB4ABE81681C17DC62E141A828F823A8E70868855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_19_mF961D4DF803EDC6BEDE45A088FAA0D6824037AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_1_m043B800125FB65448DAEDCB6101AFCD5702CAE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_20_mB7DC82063F22DF58F1062564594C8ECE3D01894F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_21_mE088869C9F9484EFB42A1750AE1C0F912C9902B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_2_mE66F338B2F1F664311A28124A7BB1FAB567D784A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_3_mEE1B22332A308649C9417D27B3BDA3249776D568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_4_m9A3511AC6CA0338121D0BFCC85189899F03CCCEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_5_m790B4574F1EA3F3FABC92934C3D1BA188A009A61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_6_m38973ED1751F0C6FAFEC97D1CBC017C9821C59C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_7_mFCEE71C6F65552F3E60F15C47B76E11D68C5E8DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_8_m937A64AA9890F6B86FE765977398BC6866A1C5FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper_U3C_InitU3Eb__53_9_m93849DA12BDDECA559DED5B381619D5DA3849178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper__Init_mAA0DD628B3C13BC4AA41170F9E43834BF088EC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper__IsType_TisIOverlapStruct_t8C70871404986120173EBAEA7753823B7562D8F8_m7C45831E0C4476E30027793FFD077566D476564F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RaycastHelper__IsType_TisIRayAllStruct_t409B172530C2FD9CCE5A3757D90FBB81EECA2CB9_mF15C1E8504A5C698745122DB2936B46CC3111F57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetOverlapCollidersU3Ed__49_MoveNext_mD6D1E553E9FD82A486D8C75D86FDB1938D6F24B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetOverlapCollidersU3Ed__49_System_Collections_IEnumerator_Reset_m946347389D4553F4846F320712F5BB1C8A4D1C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRaycastHitsU3Ed__50_MoveNext_m89756B3D01AA891E97BB5F04D9CB747972EF7C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRaycastHitsU3Ed__50_System_Collections_IEnumerator_Reset_m4F68351A791F4B3444411819C215FBC8A6973229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m2CE796A2A22ECB38E60421FC535739234B38E95E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD94B9931EF86878A337A5E59374D3B225F858400 
{
};

// Kit.GizmosExtend
struct GizmosExtend_t001E9E41FF61628C63681DA989780A13153108DD  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49
struct U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864  : public RuntimeObject
{
	// System.Int32 Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Collider Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::<>2__current
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___U3CU3E2__current_1;
	// System.Int32 Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Kit.Physic.RaycastHelper Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::<>4__this
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* ___U3CU3E4__this_3;
	// System.Int32 Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::<i>5__2
	int32_t ___U3CiU3E5__2_4;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>
struct UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// Kit.Physic.BoxOverlapData
struct BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465 
{
	// UnityEngine.Vector3 Kit.Physic.BoxOverlapData::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_0;
	// UnityEngine.Vector3 Kit.Physic.BoxOverlapData::halfExtends
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___halfExtends_1;
	// UnityEngine.Quaternion Kit.Physic.BoxOverlapData::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_2;
	// System.Int32 Kit.Physic.BoxOverlapData::<hitCount>k__BackingField
	int32_t ___U3ChitCountU3Ek__BackingField_3;
};

// Kit.Physic.CapsuleData
struct CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 
{
	// UnityEngine.Vector3 Kit.Physic.CapsuleData::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_1;
	// System.Single Kit.Physic.CapsuleData::m_Radius
	float ___m_Radius_2;
	// System.Single Kit.Physic.CapsuleData::m_Height
	float ___m_Height_3;
	// System.Int32 Kit.Physic.CapsuleData::m_Direction
	int32_t ___m_Direction_4;
	// System.Boolean Kit.Physic.CapsuleData::m_Dirty
	bool ___m_Dirty_5;
	// UnityEngine.Matrix4x4 Kit.Physic.CapsuleData::m_Matrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Matrix_6;
	// UnityEngine.Vector3 Kit.Physic.CapsuleData::m_P0
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_P0_7;
	// UnityEngine.Vector3 Kit.Physic.CapsuleData::m_P1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_P1_8;
};
// Native definition for P/Invoke marshalling of Kit.Physic.CapsuleData
struct CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_1;
	float ___m_Radius_2;
	float ___m_Height_3;
	int32_t ___m_Direction_4;
	int32_t ___m_Dirty_5;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Matrix_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_P0_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_P1_8;
};
// Native definition for COM marshalling of Kit.Physic.CapsuleData
struct CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_1;
	float ___m_Radius_2;
	float ___m_Height_3;
	int32_t ___m_Direction_4;
	int32_t ___m_Dirty_5;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Matrix_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_P0_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_P1_8;
};

// Kit.Physic.CapsuleOverlapData
struct CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D 
{
	// UnityEngine.Vector3 Kit.Physic.CapsuleOverlapData::point0
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0_0;
	// UnityEngine.Vector3 Kit.Physic.CapsuleOverlapData::point1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1_1;
	// System.Single Kit.Physic.CapsuleOverlapData::radius
	float ___radius_2;
	// System.Int32 Kit.Physic.CapsuleOverlapData::<hitCount>k__BackingField
	int32_t ___U3ChitCountU3Ek__BackingField_3;
};

// Kit.ColorScope
struct ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 
{
	// UnityEngine.Color Kit.ColorScope::oldColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___oldColor_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Kit.Physic.SphereOverlapData
struct SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61 
{
	// UnityEngine.Vector3 Kit.Physic.SphereOverlapData::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_0;
	// System.Single Kit.Physic.SphereOverlapData::radius
	float ___radius_1;
	// System.Int32 Kit.Physic.SphereOverlapData::<hitCount>k__BackingField
	int32_t ___U3ChitCountU3Ek__BackingField_2;
};

// Kit.GizmosExtend/Box
struct Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 
{
	// UnityEngine.Vector3 Kit.GizmosExtend/Box::<localFrontTopLeft>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ClocalFrontTopLeftU3Ek__BackingField_0;
	// UnityEngine.Vector3 Kit.GizmosExtend/Box::<localFrontTopRight>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ClocalFrontTopRightU3Ek__BackingField_1;
	// UnityEngine.Vector3 Kit.GizmosExtend/Box::<localFrontBottomLeft>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ClocalFrontBottomLeftU3Ek__BackingField_2;
	// UnityEngine.Vector3 Kit.GizmosExtend/Box::<localFrontBottomRight>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3ClocalFrontBottomRightU3Ek__BackingField_3;
	// UnityEngine.Vector3 Kit.GizmosExtend/Box::<origin>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoriginU3Ek__BackingField_4;
};

// Kit.Physic.RaycastHelper/HitEvent
struct HitEvent_tDE06B3FCD1F037E09216C43214406B8C5D003619  : public UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9
{
};

// Kit.Physic.BoxCastData
struct BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3 
{
	// UnityEngine.Vector3 Kit.Physic.BoxCastData::center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center_0;
	// UnityEngine.Vector3 Kit.Physic.BoxCastData::halfExtends
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___halfExtends_1;
	// UnityEngine.Vector3 Kit.Physic.BoxCastData::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_2;
	// System.Single Kit.Physic.BoxCastData::maxDistance
	float ___maxDistance_3;
	// UnityEngine.Quaternion Kit.Physic.BoxCastData::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.RaycastHit Kit.Physic.BoxCastData::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_5;
	// System.Int32 Kit.Physic.BoxCastData::<hitCount>k__BackingField
	int32_t ___U3ChitCountU3Ek__BackingField_6;
};

// Kit.Physic.CapsuleCastData
struct CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C 
{
	// UnityEngine.Vector3 Kit.Physic.CapsuleCastData::point1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1_0;
	// UnityEngine.Vector3 Kit.Physic.CapsuleCastData::point2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point2_1;
	// System.Single Kit.Physic.CapsuleCastData::radius
	float ___radius_2;
	// UnityEngine.Vector3 Kit.Physic.CapsuleCastData::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_3;
	// System.Single Kit.Physic.CapsuleCastData::maxDistance
	float ___maxDistance_4;
	// UnityEngine.RaycastHit Kit.Physic.CapsuleCastData::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_5;
	// System.Int32 Kit.Physic.CapsuleCastData::<hitCount>k__BackingField
	int32_t ___U3ChitCountU3Ek__BackingField_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Kit.Physic.RaycastData
struct RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73 
{
	// UnityEngine.Vector3 Kit.Physic.RaycastData::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_0;
	// UnityEngine.Vector3 Kit.Physic.RaycastData::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_1;
	// System.Single Kit.Physic.RaycastData::maxDistance
	float ___maxDistance_2;
	// UnityEngine.RaycastHit Kit.Physic.RaycastData::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_3;
	// System.Int32 Kit.Physic.RaycastData::<hitCount>k__BackingField
	int32_t ___U3ChitCountU3Ek__BackingField_4;
};

// Kit.Physic.SphereCastData
struct SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32 
{
	// UnityEngine.Vector3 Kit.Physic.SphereCastData::origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin_0;
	// System.Single Kit.Physic.SphereCastData::radius
	float ___radius_1;
	// UnityEngine.Vector3 Kit.Physic.SphereCastData::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_2;
	// System.Single Kit.Physic.SphereCastData::maxDistance
	float ___maxDistance_3;
	// UnityEngine.RaycastHit Kit.Physic.SphereCastData::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_4;
	// System.Int32 Kit.Physic.SphereCastData::<hitCount>k__BackingField
	int32_t ___U3ChitCountU3Ek__BackingField_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Kit.Physic.RaycastHelper/<GetRaycastHits>d__50
struct U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04  : public RuntimeObject
{
	// System.Int32 Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.RaycastHit Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::<>2__current
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___U3CU3E2__current_1;
	// System.Int32 Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Kit.Physic.RaycastHelper Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::<>4__this
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* ___U3CU3E4__this_3;
	// System.Int32 Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::<i>5__2
	int32_t ___U3CiU3E5__2_4;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Kit.Physic.RaycastHelper/PhysicRaycast
struct PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Kit.Physic.RaycastHelper
struct RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Kit.Physic.RaycastData Kit.Physic.RaycastHelper::m_RayData
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73 ___m_RayData_4;
	// Kit.Physic.SphereCastData Kit.Physic.RaycastHelper::m_SphereRayData
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32 ___m_SphereRayData_5;
	// Kit.Physic.SphereOverlapData Kit.Physic.RaycastHelper::m_SphereOverlapData
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61 ___m_SphereOverlapData_6;
	// Kit.Physic.CapsuleCastData Kit.Physic.RaycastHelper::m_CapsulecastData
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C ___m_CapsulecastData_7;
	// Kit.Physic.CapsuleOverlapData Kit.Physic.RaycastHelper::m_CapsuleOverlapData
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D ___m_CapsuleOverlapData_8;
	// Kit.Physic.BoxCastData Kit.Physic.RaycastHelper::m_BoxcastData
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3 ___m_BoxcastData_9;
	// Kit.Physic.BoxOverlapData Kit.Physic.RaycastHelper::m_BoxOverlapData
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465 ___m_BoxOverlapData_10;
	// Kit.Physic.RaycastHelper/eRayType Kit.Physic.RaycastHelper::m_RayType
	int32_t ___m_RayType_11;
	// System.Single Kit.Physic.RaycastHelper::m_Distance
	float ___m_Distance_12;
	// UnityEngine.Vector3 Kit.Physic.RaycastHelper::m_LocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LocalPosition_13;
	// System.Single Kit.Physic.RaycastHelper::m_Radius
	float ___m_Radius_14;
	// UnityEngine.Vector3 Kit.Physic.RaycastHelper::m_LocalPoint1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LocalPoint1_15;
	// UnityEngine.Vector3 Kit.Physic.RaycastHelper::m_LocalPoint2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LocalPoint2_16;
	// UnityEngine.Vector3 Kit.Physic.RaycastHelper::m_LocalRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LocalRotation_17;
	// UnityEngine.Vector3 Kit.Physic.RaycastHelper::m_HalfExtends
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_HalfExtends_18;
	// System.Boolean Kit.Physic.RaycastHelper::m_UnSyncRotation
	bool ___m_UnSyncRotation_19;
	// UnityEngine.Collider[] Kit.Physic.RaycastHelper::m_OverlapColliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___m_OverlapColliders_20;
	// System.Int32 Kit.Physic.RaycastHelper::m_MemoryArraySize
	int32_t ___m_MemoryArraySize_21;
	// System.Int32 Kit.Physic.RaycastHelper::<m_HittedCount>k__BackingField
	int32_t ___U3Cm_HittedCountU3Ek__BackingField_22;
	// UnityEngine.RaycastHit[] Kit.Physic.RaycastHelper::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_23;
	// System.Boolean Kit.Physic.RaycastHelper::m_FixedUpdate
	bool ___m_FixedUpdate_24;
	// UnityEngine.LayerMask Kit.Physic.RaycastHelper::m_LayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_LayerMask_25;
	// UnityEngine.QueryTriggerInteraction Kit.Physic.RaycastHelper::m_QueryTriggerInteraction
	int32_t ___m_QueryTriggerInteraction_26;
	// Kit.Physic.RaycastHelper/eDebugMethod Kit.Physic.RaycastHelper::m_DebugMethod
	int32_t ___m_DebugMethod_27;
	// System.Boolean Kit.Physic.RaycastHelper::m_DebugLog
	bool ___m_DebugLog_28;
	// UnityEngine.Color Kit.Physic.RaycastHelper::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_29;
	// UnityEngine.Color Kit.Physic.RaycastHelper::m_HitColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HitColor_30;
	// Kit.Physic.RaycastHelper/HitEvent Kit.Physic.RaycastHelper::OnHit
	HitEvent_tDE06B3FCD1F037E09216C43214406B8C5D003619* ___OnHit_31;
	// System.Action Kit.Physic.RaycastHelper::m_DrawGizmos
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_DrawGizmos_32;
	// Kit.Physic.RaycastHelper/PhysicRaycast Kit.Physic.RaycastHelper::m_PhysicRaycast
	PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* ___m_PhysicRaycast_33;
	// System.Int32 Kit.Physic.RaycastHelper::m_FixedUpdateCount
	int32_t ___m_FixedUpdateCount_34;
	// System.Int32 Kit.Physic.RaycastHelper::m_CurrentFixedUpdate
	int32_t ___m_CurrentFixedUpdate_35;
};

// <Module>

// <Module>

// Kit.GizmosExtend

// Kit.GizmosExtend

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49

// Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49

// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_5;
};

// UnityEngine.Mathf

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.Bounds

// UnityEngine.Bounds

// Kit.Physic.BoxOverlapData

// Kit.Physic.BoxOverlapData

// Kit.Physic.CapsuleData
struct CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_StaticFields
{
	// Kit.Physic.CapsuleData Kit.Physic.CapsuleData::Zero
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___Zero_0;
};

// Kit.Physic.CapsuleData

// Kit.Physic.CapsuleOverlapData

// Kit.Physic.CapsuleOverlapData

// Kit.ColorScope

// Kit.ColorScope

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Plane

// UnityEngine.Plane

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.RectOffset

// UnityEngine.RectOffset

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Kit.Physic.SphereOverlapData

// Kit.Physic.SphereOverlapData

// Kit.GizmosExtend/Box

// Kit.GizmosExtend/Box

// Kit.Physic.RaycastHelper/HitEvent

// Kit.Physic.RaycastHelper/HitEvent

// Kit.Physic.BoxCastData

// Kit.Physic.BoxCastData

// Kit.Physic.CapsuleCastData

// Kit.Physic.CapsuleCastData

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// System.MulticastDelegate

// System.MulticastDelegate

// Kit.Physic.RaycastData

// Kit.Physic.RaycastData

// Kit.Physic.SphereCastData

// Kit.Physic.SphereCastData

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Kit.Physic.RaycastHelper/<GetRaycastHits>d__50

// Kit.Physic.RaycastHelper/<GetRaycastHits>d__50

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// System.NullReferenceException

// System.NullReferenceException

// UnityEngine.Transform

// UnityEngine.Transform

// Kit.Physic.RaycastHelper/PhysicRaycast

// Kit.Physic.RaycastHelper/PhysicRaycast

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.CapsuleCollider

// UnityEngine.CapsuleCollider

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Kit.Physic.RaycastHelper

// Kit.Physic.RaycastHelper
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean Kit.Physic.RaycastHelper::_IsType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper__IsType_TisRuntimeObject_mDF97BA9C89EFC79CFD5E7B43DEB367E82A0C9B37_gshared (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;

// UnityEngine.Color UnityEngine.Gizmos::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gizmos_get_color_mF7A6194876F0DB8D2629715134BAAD3765849A3B (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void Kit.ColorScope::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5 (ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) ;
// System.Void Kit.ColorScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA (ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawCircle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_up, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_radius, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_inNormal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_inPoint, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float* ___1_enter, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawCone(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawCone_mB1CD161228924B3886F6CEA9A4159F5250A063B3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_angle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawFrustum(UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawFrustum_m28C6ACBA916E64DC2C95ED561AE0B63E6534BE31 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_fov, float ___2_maxRange, float ___3_minRange, float ___4_aspect, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawPlane_m5808368120B11B25E98B7E224826F35F5CB9CFB6 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_upward, float ___3_height, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_color, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawSphere(UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawSphere_m9018456D3E0F8C90B1CE00358E6B796B6C6EFF02 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawDirection(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawDirection_m749B186E0FB522A21BA7489B66AB43F54749054F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, float ___2_distance, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend/Box::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box__ctor_mC06912515E63A79653ADCD675244BBE9424C8832 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawBox(Kit.GizmosExtend/Box,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBox_m70C6923905AE5AB2D6F61AD9592E99FFAB6150D4 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 ___0_box, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_frontTopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_frontTopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_frontBottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_frontBottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_backTopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_backTopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_backBottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_backBottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend::CastCenterOnCollision(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GizmosExtend_CastCenterOnCollision_m3C145E216ABF6AE3FBD53CCEF44355A46ADE0EDB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, float ___2_hitInfoDistance, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBox_m78C799ED32172303833806513374F4AECDE9DE97 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawLocalCube(UnityEngine.Color&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawLocalCube_mBA1C863646FFC8D4BABF977206F108310DD98452 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_lbb, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_rbb, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_lbf, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_rbf, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___5_lub, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___6_rub, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___7_luf, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___8_ruf, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawLocalCube(UnityEngine.Matrix4x4,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawLocalCube_m333D2761DB18A7CB0E7076518691A65A1BFB0BFE (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_space, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_center, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localFrontTopLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontTopLeft_m3EB767040D4B6DB0EDA798E04794A343503317E5_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend/Box::set_localFrontTopLeft(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_localFrontTopLeft_m1BEE47BBBF70B1FE9053C6C9C498B61991446891_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localFrontTopRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontTopRight_mFCD5583532C103AA63C8667F822B80ED4F976296_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend/Box::set_localFrontTopRight(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_localFrontTopRight_mE10AEA3BFF70CD5E73C6A927E07A6BCC0EC7FA69_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localFrontBottomLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontBottomLeft_m031D123CD7F13D36B11934CF89A57B565393CE0C_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend/Box::set_localFrontBottomLeft(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_localFrontBottomLeft_m4AF3425E297966EF5C65C8AEA323A68DCA60096C_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localFrontBottomRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontBottomRight_m9DB41484AE5BD77EC1ABB81EC0A0B0592FE1A67F_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend/Box::set_localFrontBottomRight(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_localFrontBottomRight_m18C4A4AAD0EA576C4C435CE9129A6E0130E74FF6_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localBackTopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackTopLeft_m8ADBBDF0ECC81A731644B48707F8A8A676E6E943 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localBackTopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackTopRight_m4ED244050F3C3C72358F77F0FF470996EFC39109 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localBackBottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackBottomLeft_m9064E1E5DE5ECF5FF76954CCC66E1697D1647FA7 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localBackBottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackBottomRight_mB7194DA20113F6D8232A9C5D8368159CC90A1ACA (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend/Box::set_origin(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_origin_m21E9C56EEE3394E8A3A4140A876CFC985B0D8590_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend/Box::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box__ctor_m9DB6830C319AE94CEDBCA74B42F64FEB287D6301 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend/Box::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box_Rotate_m74FA5AC8784CB49B1AEDBC5524B9A92DA83C0B88 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_orientation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.GizmosExtend::RotatePointAroundPivot(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GizmosExtend_RotatePointAroundPivot_m1280FAC46FB57EE40DC78F534B120750E9663C27 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pivot, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit Kit.Physic.BoxCastData::get_hitResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F_inline (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::set_hitResult(UnityEngine.RaycastHit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxCastData_set_hitResult_mB95FA30F706B30FD894B58979EF6183D033FB4D5_inline (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.BoxCastData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.BoxCastData::get_hitCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoxCastData_get_hitCount_mC236900E8E10AA04B4DCD2FA1E1C9A816FE9B66F_inline (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::set_hitCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxCastData_set_hitCount_mD3BCDE5C720CC8462F0ED326FBF58A6D27FCD967_inline (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData__ctor_mE3DFE216030E8539B0D5F6E4068ABD80EE76DEBF (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__localRotation, float ___4__maxDistance, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::.ctor(UnityEngine.Ray,System.Single,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData__ctor_m138FBE75777919187EAFABD6BE1146ED9D443CCB (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0__ray, float ___1__maxDistance, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__localRotation, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_Update_m981A928517CABAD2D512783D5683965D36B4E0F0 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__orientation, float ___4__maxDistance, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_BoxCast_mB641B1C6FAB006950E3FB982FA42631231F496F0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3_hitInfo, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4_orientation, float ___5_maxDistance, int32_t ___6_layerMask, int32_t ___7_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.BoxCastData::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxCastData_BoxCast_mFA2399FED2716EAF654788092770697F15BEBD02 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3__raycastHit, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4__orientation, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.BoxCastData::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxCastData_BoxCast_mDB70440FAEED4DA6F306F129C34681A8D9AD37B8 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__orientation, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.BoxCastData::BoxCast(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxCastData_BoxCast_mF3402501C04B3307CD2E84F29422A24E80271227 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_BoxCastNonAlloc_m88245841A55DC2FF1C2334AAFD4A7667698B4A52 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___3_results, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4_orientation, float ___5_maxDistance, int32_t ___6_layerMask, int32_t ___7_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.BoxCastData::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxCastData_BoxCastNonAlloc_mE51003B54319F59EEDDFC34875B3F75D4342407E (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___3__raycastHits, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4__orientation, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.BoxCastData::BoxCastNonAlloc(UnityEngine.RaycastHit[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxCastData_BoxCastNonAlloc_m9933A60F4F5D6F4CF75415C3113F7AF0EFF4914B (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawBoxCastBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBoxCastBox_m11461E35C8AF07CE8BAD63EE0128B2A121773549 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_direction, float ___4_distance, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_color, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.Physic.BoxCastData::GetRayEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCastData_GetRayEndPoint_mF1A49BCFD33D0F6D591C31D052E28A4CCC2120AB (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawBoxCastOnHit(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBoxCastOnHit_mA2E0F0697D28E738FD20DC951CA026A0673ACF13 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_direction, float ___4_hitInfoDistance, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_color, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::DrawHitPointReference(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::DrawGizmos(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_DrawGizmos_m6AE870B0B33CD8D09FC32F600F29D0F1B2463872 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::DrawAllGizmos(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_DrawAllGizmos_m383B77252BF537AE61B051438EC8299E1BD8202C (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_Update_mE2674DC5097D992B93F3EC261F5E8A26B749A9BA (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxCastData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_Reset_mABF2F82297F406C47EA8B6A723E20689567F8978 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String Kit.Physic.BoxCastData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoxCastData_ToString_m2D6AEBC8887C524C7AF6AF4D3163115956140578 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.BoxOverlapData::get_hitCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoxOverlapData_get_hitCount_m8505E89DD5CBE80A1F1EBFD2D35868C88C0FB869_inline (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxOverlapData::set_hitCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9_inline (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.BoxOverlapData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxOverlapData_get_hitted_mFF6BE85F1E92EA07D9C6AFA78A00D20F0CBDAE86 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxOverlapData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData__ctor_m6052A81164E83AF3D2D2B535A4E46890343A6584 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxOverlapData::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData_Update_m18B09C222DCA111CFDDB2D4A485638ED24E0E0CE (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, const RuntimeMethod* method) ;
// UnityEngine.Collider[] Kit.Physic.BoxOverlapData::Overlap(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* BoxOverlapData_Overlap_m995DAC83151D1A421945E3D1B6841E91B3D069E1 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Collider[] Kit.Physic.BoxOverlapData::Overlap(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* BoxOverlapData_Overlap_m99CDDC4EFBB39B1661837F6FF6CA11388B70208F (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapBox_mC38B579DEFD0341FCAEF8B8EC8B1E37A2C12366D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.BoxOverlapData::OverlapNonAlloc(UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxOverlapData_OverlapNonAlloc_m428135F78F3F5355E8BE1F71A284344A8BF5BD9B (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.BoxOverlapData::OverlapNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxOverlapData_OverlapNonAlloc_m94714B9283EBAE3A1378568DC130B0AD1532DA1B (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___3_results, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[],UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_m1D43D10CD88EF2D5440601D3CD14CA4EB449A295 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_results, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3_orientation, int32_t ___4_mask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxOverlapData::DrawOverlapGizmos(UnityEngine.Collider[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData_DrawOverlapGizmos_mBF2CE0F922540AA73BEB87F559E96B4DC72EF649 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) ;
// System.Void Kit.Physic.BoxOverlapData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData_Reset_m37BFD7E99645CE966A37A5587EAC84DBE84AD2A8 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String Kit.Physic.BoxOverlapData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoxOverlapData_ToString_m9263B8C9705DDF988A85ABEFAA8CC0286240113C (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit Kit.Physic.CapsuleCastData::get_hitResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF_inline (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::set_hitResult(UnityEngine.RaycastHit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CapsuleCastData_set_hitResult_m8FCAB186839C631894E970567A7EE7079E5D74DB_inline (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.CapsuleCastData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_get_hitted_m89C3C7558AA4CEE173A84B6A332DD5EF1673B9DE (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleCastData::get_hitCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CapsuleCastData_get_hitCount_m2DDBA73C2FB3829312EF970F0A0C892508F69342_inline (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::set_hitCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CapsuleCastData_set_hitCount_mF215AD2DC02DE85ADE601A78906BCB764CECC0A9_inline (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData__ctor_m75988A19A046954A0C8893DD789C601742169986 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.Physic.CapsuleData::get_p0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.Physic.CapsuleData::get_p1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// System.Single Kit.Physic.CapsuleData::get_radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::.ctor(Kit.Physic.CapsuleData,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData__ctor_m1F4376210E1C32FBC9F5CCA15C2F11A5A07F1022 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) ;
// Kit.Physic.CapsuleData Kit.Physic.CapsuleData::op_Explicit(UnityEngine.CapsuleCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 CapsuleData_op_Explicit_m24EC285A3353C6DB4560E4FAC95ED8C39DD1FFF1 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_collider, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::.ctor(UnityEngine.CapsuleCollider,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData__ctor_m5B05E10BBAB273EB56986E5FF613E0BAD3B93831 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_collider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_Update_m5F06B06A508E9DF8ACD552A82F31CCCF57C73051 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_mAB6E13B795FAFAFE366DE88B8C7A31C54EAE9EF7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point2, float ___2_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___4_hitInfo, float ___5_maxDistance, int32_t ___6_layerMask, int32_t ___7_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.CapsuleCastData::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_CapsuleCast_mFE8F15A7E11E06D79E80ADA839F9D4CEFD64ACC3 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___4__raycastHit, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.CapsuleCastData::CapsuleCast(Kit.Physic.CapsuleData,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_CapsuleCast_m1BC498919C25C3DB453CB7CEE88CFEABF4A0CC8A (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsule, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, int32_t ___3__layerMask, int32_t ___4__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.CapsuleCastData::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_CapsuleCast_mF7108AD98965DAF02E4F851E1C9ED78A0E4AC647 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.CapsuleCastData::CapsuleCast(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_CapsuleCast_m34746C8E473CED7D1CFF0FDB86931BD946E70817 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleCastData::CapsuleCastNonAlloc(Kit.Physic.CapsuleData,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_CapsuleCastNonAlloc_m4D799D6E2E4F44C15E433D2569ED503593E1A4C8 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleCastData::CapsuleCastNonAlloc(UnityEngine.CapsuleCollider,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_CapsuleCastNonAlloc_m251C713F3C4D434BE80F41CEBCDFE6EF71C389F4 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleCastData::CapsuleCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_CapsuleCastNonAlloc_m480D6D94D8211EB7E13F8AF48AE94597238C131A (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___4__raycastHits, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::CapsuleCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_CapsuleCastNonAlloc_m8190CE6AFACAFF3996D60D60BD110E0AC2E2583D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point2, float ___2_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___4_results, float ___5_maxDistance, int32_t ___6_layerMask, int32_t ___7_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleCastData::CapsuleCastNonAlloc(UnityEngine.RaycastHit[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_CapsuleCastNonAlloc_m27EBA0B300141248BD8518BCF9F997F26CF03F25 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] Kit.Physic.CapsuleCastData::GetEndPoints(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* CapsuleCastData_GetEndPoints_mB2EA56EB07ABF9F832E55A7D930327AB127F0EBE (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, float ___0__distance, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point2, float ___2_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::DrawGizmos(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_DrawGizmos_mA288E9F959D8791F9C9B69BDB8DD102D421F107A (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::DrawAllGizmos(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_DrawAllGizmos_m5177E181F6F2E7BA8D1BED023C757932433C7476 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::Update(Kit.Physic.CapsuleData,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_Update_m562275C0184D914899DAA5E7FB5506A69778A5D5 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::.ctor(UnityEngine.CapsuleCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_colliderRef, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::Update(UnityEngine.CapsuleCollider,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_Update_mA370A92799B1D830AF4A76FE3A6899544137886A (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_collider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleCastData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_Reset_mEEF8DD91963433ADDB46ED9842AA665E396F1DA1 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) ;
// System.String Kit.Physic.CapsuleCastData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CapsuleCastData_ToString_m543596A1A95894FC787E3D9D8F92DA281632E12C (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.Physic.CapsuleData::get_center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_center_m3B6059D3CB8BF21509CDE389E93C6FD072F18CEB (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_radius_m83F69CBA138A504C0B91F06E0D0211DB46F21019 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Kit.Physic.CapsuleData::get_height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CapsuleData_get_height_m5BCB654887F4ADFF6D048382BF855F9602840F71_inline (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_height_mD8A2EB1588EA5A6588D74FEB55290D2AAF3FED10 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleData::get_direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CapsuleData_get_direction_mD196AD135013CFBC6C55D99915AAE1141615EAD1_inline (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::set_direction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_direction_mDD37DB3F0DCE8796FE45122816310CDD85A07CCD (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.Physic.CapsuleData::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_position_m0B437E8A6A5A70AA8588D456DC7B144E153CCD0D (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Kit.Physic.CapsuleData::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CapsuleData_get_rotation_m9FA769A6E47D795D903291181BAD384F2F192211 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetTRS_m8002A569FE81574DABE86044C8FF6F7C44DA21AA (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_position_mB7650A619C6211532AA344D9473074CC5891B440 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_rotation_mFF67AF7E5FA8D8E26A5B9FFC98C81527D6AC91D7 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.CapsuleCollider::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCollider_get_direction_mE6D56B0990E3F2FACA983679C251949FE3FC6DFA (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::.ctor(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Single,Kit.Physic.eCapsuleDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData__ctor_m66209A7C08991F60BE077CC092C74189496F328B (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0__transform, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_center, float ___2_radius, float ___3_height, int32_t ___4_direction, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,System.Single,Kit.Physic.eCapsuleDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData__ctor_mA73254860476E93D7C26630A1E67BA253BD08382 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1__rot, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_center, float ___3_radius, float ___4_height, int32_t ___5_direction, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleData::UpdateReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_UpdateReference_mD9F5A79036B2EB818F25825CD0CC7E5F70724D69 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleOverlapData::get_hitCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_get_hitCount_m7BF8D27D74F378CAD3EEC7F95D4D5160001A118E_inline (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::set_hitCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4_inline (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.CapsuleOverlapData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleOverlapData_get_hitted_m30ED5ABB4748F79DD6B0BDCE8F82119A48EE638C (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::.ctor(Kit.Physic.CapsuleData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData__ctor_m2E505BAAD8062E61E05A519B38A7C4A4672A9125 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::.ctor(UnityEngine.CapsuleCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData__ctor_m4CBFB4AAEF55168894C42198AE2FE7FF6787BFA3 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData__ctor_m3728FFD9B6F888E72987AE5519859D5F211DD08A (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::Update(UnityEngine.CapsuleCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_Update_m83F48E5E70AEBC5C626CE64FB8820171A4C4D51C (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, const RuntimeMethod* method) ;
// UnityEngine.Collider[] Kit.Physic.CapsuleOverlapData::Overlap(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_mB70134B16B7D75010C500E9E92C29A12C5FFD1B6 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Collider[] Kit.Physic.CapsuleOverlapData::Overlap(UnityEngine.CapsuleCollider,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_m395E6BAF0665695BF4950D40AEE1035607FA0775 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::Update(Kit.Physic.CapsuleData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_Update_m80A95DE8D7006F507778118B36BB0F2B05A87432 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsule, const RuntimeMethod* method) ;
// UnityEngine.Collider[] Kit.Physic.CapsuleOverlapData::Overlap(Kit.Physic.CapsuleData,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_m908C7FB0F088A93C5BE7C109A919557E924A4B5E (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_Update_m0FFDB6A1301900C37913F86FB5207E0B699474EE (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, const RuntimeMethod* method) ;
// UnityEngine.Collider[] Kit.Physic.CapsuleOverlapData::Overlap(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_mCA406F1680830C8274E2F9D2377E6C3D0BF85D2D (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapCapsule_mE60FD023CFCAFCA0CD4A7D3BD01A8A2C20FC7415 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point1, float ___2_radius, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleOverlapData::OverlapNonAlloc(Kit.Physic.CapsuleData,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_OverlapNonAlloc_m5747867DCD3B714187E9B772497DE12ADB3339F8 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___1_results, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleOverlapData::OverlapNonAlloc(UnityEngine.CapsuleCollider,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_OverlapNonAlloc_m76098E9CC409DAAFB8A3E92AE41CF56235F6A6D3 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___1_results, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleOverlapData::OverlapNonAlloc(UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_OverlapNonAlloc_mC3627F4E6F3D12E3B8C848EFA471081C301F179B (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.CapsuleOverlapData::OverlapNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_OverlapNonAlloc_m1085C34A02E20B72565C3F03A25D0B8EA94C7236 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___3_results, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::OverlapCapsuleNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_OverlapCapsuleNonAlloc_mD13F4F0604878062489892A77D92A161681DB167 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point1, float ___2_radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___3_results, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::DrawOverlapGizmos(UnityEngine.Collider[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_DrawOverlapGizmos_m409F74AB2941BB9D94AC282EB14D0847857C67A0 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) ;
// System.Void Kit.Physic.CapsuleOverlapData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_Reset_mA0015F97E7D8FA6477E26D0B553F30D11C08DB67 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) ;
// System.String Kit.Physic.CapsuleOverlapData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CapsuleOverlapData_ToString_m96AC1BB630BD9FE987F2A312193D331A8F8AA828 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit Kit.Physic.RaycastData::get_hitResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 RaycastData_get_hitResult_mBFDD1C1A64E46959F1AE1F53792B27AAAC11AA2C_inline (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::set_hitResult(UnityEngine.RaycastHit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastData_set_hitResult_mA22B3171DBCE425311D5D7F47ECF993F5A86786E_inline (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.RaycastData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.RaycastData::get_hitCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RaycastData_get_hitCount_m6E0DE8C711D81AD272E27666FD7025F5C73C2FE3_inline (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::set_hitCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastData_set_hitCount_mFC2938D0CC67ED1216E5FB3418D6F617FE181BFF_inline (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData__ctor_m7660EABB53494809E3E2BCBB582AFA2445A8FE7E (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__distance, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::.ctor(UnityEngine.Ray,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData__ctor_m525EEE69ED8DA6F192AEC119A71A71B0BA590962 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_distance, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_Update_m5E68BB7A28922F95C6A0FBE4E2CF878B00DC66A0 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA782767AD4F149FBEA32C71460DFF061B7563688 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.RaycastData::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastData_Raycast_m7114E8300524A97AD0FCDBFC8ECBE68CC059DFAD (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2__raycastHit, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.RaycastData::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastData_Raycast_mFE04754F5462FF2B8319A79559BF7F36722B6D0C (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, int32_t ___3__layerMask, int32_t ___4__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.RaycastData::Raycast(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastData_Raycast_m700CB39CBEB94AFFF8922EDEA9620DA37D8A7F76 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_mB8FE279E06CE87D77387AA9A10562B8052DC8836 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___2_results, float ___3_maxDistance, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.RaycastData::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[]&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastData_RaycastNonAlloc_m0AA912047D1981A24874656F2AB5A145AF36468B (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.RaycastData::RaycastNonAlloc(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastData_RaycastNonAlloc_m79E765CBD50BD7DC35FE0A5C94D95B8BDB829036 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void Kit.GizmosExtend::DrawPoint(UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawPoint_m1E1DE3BCA49E4E4848F11F0B1F0B78A6570941B9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, float ___2_scale, const RuntimeMethod* method) ;
// System.Single Kit.Physic.RaycastData::GetHandleSize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastData_GetHandleSize_m57D65744C4B513448573249FB136CAA4F32C0619 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.Physic.RaycastData::GetRayEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastData_GetRayEndPoint_m0C5F5F7FC37EA6B1C8C6BD4639EF0699CE45564E (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::DrawGizmos(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_DrawGizmos_mF9AD791E88120A3F0DFED4CC69C4F5B52063EF98 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::DrawAllGizmos(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_DrawAllGizmos_mBB8BEBD6055314B9E463860C4A8CE314BB204EA0 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_Reset_m309E45FEF0E089981E61B93271F77E48EEA2AD79 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) ;
// System.String Kit.Physic.RaycastData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RaycastData_ToString_mAEF63C48AD92964C51BAFD2167A8ADEC9F752260 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastHelper::_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper__Init_mAA0DD628B3C13BC4AA41170F9E43834BF088EC06 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastHelper::_DrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper__DrawGizmos_m86B08D10038AFDEA486AA5E9ABFA16DF6A76BA7C (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.RaycastHelper::CheckPhysic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_CheckPhysic_mFAF2D1243C248B276A3D3F3B12B09913B2A0F85B (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, bool ___0_forceUpdate, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.RaycastHelper/PhysicRaycast::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_inline (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.SphereCastData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.SphereOverlapData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereOverlapData_get_hitted_mB28B0E30933C4AFC6187E2659293FFBCBF0091AE (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOverlapCollidersU3Ed__49__ctor_m9C2C784723DF4C9227EBBA4F2256B0A5834AF5AE (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRaycastHitsU3Ed__50__ctor_mC4AC85E091C5D92FDC9E253889FDB8ED65146925 (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastHelper::set_m_HittedCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.RaycastHelper::_IsType<Kit.Physic.IOverlapStruct>()
inline bool RaycastHelper__IsType_TisIOverlapStruct_t8C70871404986120173EBAEA7753823B7562D8F8_m7C45831E0C4476E30027793FFD077566D476564F (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798*, const RuntimeMethod*))RaycastHelper__IsType_TisRuntimeObject_mDF97BA9C89EFC79CFD5E7B43DEB367E82A0C9B37_gshared)(__this, method);
}
// System.Boolean Kit.Physic.RaycastHelper::_IsType<Kit.Physic.IRayAllStruct>()
inline bool RaycastHelper__IsType_TisIRayAllStruct_t409B172530C2FD9CCE5A3757D90FBB81EECA2CB9_mF15C1E8504A5C698745122DB2936B46CC3111F57 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798*, const RuntimeMethod*))RaycastHelper__IsType_TisRuntimeObject_mDF97BA9C89EFC79CFD5E7B43DEB367E82A0C9B37_gshared)(__this, method);
}
// System.Void Kit.Physic.SphereCastData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_Reset_mD36F9552A6C8BE840E5053E38D8FC49B5E9D1832 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereOverlapData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData_Reset_mA3D80F1E9406DED6C3B6E4D67D1FED49EBF002A1 (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastHelper/PhysicRaycast::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917 (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>::Invoke(T0)
inline void UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9 (UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Void Kit.Physic.RaycastHelper::_TriggerHitEvent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.RaycastHelper::get_m_HittedCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.SphereCastData::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCastData_SphereCast_m2F2E4D5507FB9BE7D50CF8360F6E5434F0DAAFE8 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit Kit.Physic.SphereCastData::get_hitResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 SphereCastData_get_hitResult_m3698907ADC738183AE0A51378A449D7331AA841C_inline (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereCastData::DrawGizmos(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_DrawGizmos_m66D1D6188824183204C9B44B992B9DC8F570A835 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.SphereCastData::SphereCastNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,UnityEngine.RaycastHit[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereCastData_SphereCastNonAlloc_m5DD2503929721BA801940E516C88E6B660B41B58 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___4__raycastHits, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereCastData::DrawAllGizmos(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_DrawAllGizmos_mA4B324A1F4F2E1F43FF02C985A3EE2258CDF9BC8 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.SphereOverlapData::OverlapNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereOverlapData_OverlapNonAlloc_m27A32A1AF5FEB36DAFD0C9990DDA4B834F9085B6 (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___2_results, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereOverlapData::DrawOverlapGizmos(UnityEngine.Collider[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData_DrawOverlapGizmos_m0C33125CA55F7AE15D3F88962BEC125FEB2A7FF4 (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>::.ctor()
inline void UnityEvent_1__ctor_m2CE796A2A22ECB38E60421FC535739234B38E95E (UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6F7DAA44329E0A5BBE174392C2710CA4D27B46F9*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_mC82F2E769BD9FF89D7F7E88D78B7F98FA56D4F91 (RuntimeObject* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Collider> Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::System.Collections.Generic.IEnumerable<UnityEngine.Collider>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetOverlapCollidersU3Ed__49_System_Collections_Generic_IEnumerableU3CUnityEngine_ColliderU3E_GetEnumerator_m6A3EB2B8C984007D1F3B6D76AC98AB400F226D60 (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit> Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::System.Collections.Generic.IEnumerable<UnityEngine.RaycastHit>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRaycastHitsU3Ed__50_System_Collections_Generic_IEnumerableU3CUnityEngine_RaycastHitU3E_GetEnumerator_mF5FB82B2C7B9EF2A348DD340363744CD5677D140 (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereCastData::set_hitResult(UnityEngine.RaycastHit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereCastData_set_hitResult_m06CC846F3FC1D5157E79FE475F589BECEA57C0A3_inline (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.SphereCastData::get_hitCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SphereCastData_get_hitCount_m09E763E4BADF8D1067B9A17A76DB20A851AE29E7_inline (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereCastData::set_hitCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereCastData_set_hitCount_m1C815A018D0C0C8B40E38313500C99AAE1872673_inline (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereCastData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData__ctor_m26C65072BDD2D6EE17E6ECC9F050482B80D055BB (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__distance, float ___3__radius, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereCastData::.ctor(UnityEngine.Ray,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData__ctor_mA70297479B70C6F7403ADEB877B30B783A9F58C6 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0__ray, float ___1__distance, float ___2__radius, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereCastData::Update(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_Update_mD8A2FC87859D4816546FE781335FB1B6B6298747 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, float ___1_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3_hitInfo, float ___4_maxDistance, int32_t ___5_layerMask, int32_t ___6_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.SphereCastData::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCastData_SphereCast_m758A621332393319EBBB4568EF1B346B65731FD4 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3__raycastHit, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Boolean Kit.Physic.SphereCastData::SphereCast(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCastData_SphereCast_mFB5EC62CBD4C53816E6A5313B0CB264419AE8732 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::SphereCastNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_SphereCastNonAlloc_m21B951284ED5217AB1395B08B963C4C9661F928C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, float ___1_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___3_results, float ___4_maxDistance, int32_t ___5_layerMask, int32_t ___6_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.SphereCastData::SphereCastNonAlloc(UnityEngine.RaycastHit[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereCastData_SphereCastNonAlloc_m02CAC24506EC251F25B522CA29BD2583F7F83BF5 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Kit.Physic.SphereCastData::GetRayEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereCastData_GetRayEndPoint_mBB8869B81FD92E3239B4413F656F4C453C8622D1 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) ;
// System.String Kit.Physic.SphereCastData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SphereCastData_ToString_mEBC43E18CEC377FC559B9C4D723837CFFD0EC076 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.SphereOverlapData::get_hitCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SphereOverlapData_get_hitCount_mA9A070C99066643A97B68210C98E1895EA6DD8D1_inline (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereOverlapData::set_hitCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6_inline (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereOverlapData::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData__ctor_m6F754C8D1543F8AA165F4424DAE542E8D4D1AE0D (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, const RuntimeMethod* method) ;
// System.Void Kit.Physic.SphereOverlapData::Update(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData_Update_m80C0671172A9E592E33AF4EC299F5AFBDC7FBB2B (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, const RuntimeMethod* method) ;
// UnityEngine.Collider[] Kit.Physic.SphereOverlapData::Overlap(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* SphereOverlapData_Overlap_m795C8F02E263256A79E0A6FEA80D0182F060E64A (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Collider[] Kit.Physic.SphereOverlapData::Overlap(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* SphereOverlapData_Overlap_mE567EA7A35CD7B9A6A2F010ABF7EB8B9DF9AEB4F (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m348CF43E53C703DEF4A6780A3B9DE2A1FB958318 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 Kit.Physic.SphereOverlapData::OverlapNonAlloc(UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereOverlapData_OverlapNonAlloc_mF5B1D2D9B1BB27E249DC76EB8A73E7A542CC09AC (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_mED890C8454FCC0354A94F97453707FA01B27AE83 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___2_results, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.String Kit.Physic.SphereOverlapData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SphereOverlapData_ToString_mE03E50F73EFE127510289DB28A3946D6D9FE41BF (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
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
// System.Void Kit.ColorScope::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5 (ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// oldColor = Gizmos.color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Gizmos_get_color_mF7A6194876F0DB8D2629715134BAAD3765849A3B(NULL);
		__this->___oldColor_0 = L_0;
		// Gizmos.color = color == default(Color) ? oldColor : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		bool L_3;
		L_3 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_color;
		G_B3_0 = L_4;
		goto IL_0025;
	}

IL_001f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___oldColor_0;
		G_B3_0 = L_5;
	}

IL_0025:
	{
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(G_B3_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method)
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26*>(__this + _offset);
	ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5(_thisAdjusted, ___0_color, method);
}
// System.Void Kit.ColorScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA (ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = oldColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___oldColor_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26*>(__this + _offset);
	ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Kit.GizmosExtend::DrawPoint(UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawPoint_m1E1DE3BCA49E4E4848F11F0B1F0B78A6570941B9 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, float ___2_scale, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___1_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawRay(position + (Vector3.up * (scale * 0.5f)), -Vector3.up * scale);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
			L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
			float L_3 = ___2_scale;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
			L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, ((float)il2cpp_codegen_multiply(L_3, (0.5f))), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
			L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_4, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
			L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
			L_7 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_6, NULL);
			float L_8 = ___2_scale;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
			L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_5, L_9, NULL);
			// Gizmos.DrawRay(position + (Vector3.right * (scale * 0.5f)), -Vector3.right * scale);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
			L_11 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
			float L_12 = ___2_scale;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
			L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, ((float)il2cpp_codegen_multiply(L_12, (0.5f))), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
			L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_13, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
			L_15 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
			L_16 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_15, NULL);
			float L_17 = ___2_scale;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
			L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_14, L_18, NULL);
			// Gizmos.DrawRay(position + (Vector3.forward * (scale * 0.5f)), -Vector3.forward * scale);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
			L_20 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
			float L_21 = ___2_scale;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
			L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, ((float)il2cpp_codegen_multiply(L_21, (0.5f))), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
			L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_22, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
			L_24 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
			L_25 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_24, NULL);
			float L_26 = ___2_scale;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
			L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_23, L_27, NULL);
			// }
			goto IL_009c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawRay_mADE4E57D92285E9DF3ECAAF97207C78C469BB223 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0011:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawRay(position, direction);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_direction;
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_1, L_2, NULL);
			// }
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawLine_m01A5491102FE6425655B3FA0C46EFC8D9CC40155 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0011:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawLine(from, to);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_from;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_to;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_1, L_2, NULL);
			// }
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawBounds(UnityEngine.Bounds,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBounds_m94F755F39EE93BC5B26CDBC6FF44DF346AD7382F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// Vector3
		//     ruf = bounds.center + new Vector3(bounds.extents.x, bounds.extents.y, bounds.extents.z),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_2, L_4, L_6, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_7, NULL);
		V_0 = L_8;
		// rub = bounds.center + new Vector3(bounds.extents.x, bounds.extents.y, -bounds.extents.z),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_13 = L_12.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_11, L_13, ((-L_15)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_16, NULL);
		V_1 = L_17;
		// luf = bounds.center + new Vector3(-bounds.extents.x, bounds.extents.y, bounds.extents.z),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_24 = L_23.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), ((-L_20)), L_22, L_24, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_25, NULL);
		V_2 = L_26;
		// lub = bounds.center + new Vector3(-bounds.extents.x, bounds.extents.y, -bounds.extents.z),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_29 = L_28.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_31 = L_30.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_33 = L_32.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), ((-L_29)), L_31, ((-L_33)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_34, NULL);
		V_3 = L_35;
		// rdf = bounds.center + new Vector3(bounds.extents.x, -bounds.extents.y, bounds.extents.z),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_38 = L_37.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_40 = L_39.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_42 = L_41.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_38, ((-L_40)), L_42, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_43, NULL);
		V_4 = L_44;
		// rdb = bounds.center + new Vector3(bounds.extents.x, -bounds.extents.y, -bounds.extents.z),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_47 = L_46.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_49 = L_48.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_51 = L_50.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), L_47, ((-L_49)), ((-L_51)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_45, L_52, NULL);
		V_5 = L_53;
		// lfd = bounds.center + new Vector3(-bounds.extents.x, -bounds.extents.y, bounds.extents.z),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_56 = L_55.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_58 = L_57.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_60 = L_59.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), ((-L_56)), ((-L_58)), L_60, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_61, NULL);
		V_6 = L_62;
		// lbd = bounds.center + new Vector3(-bounds.extents.x, -bounds.extents.y, -bounds.extents.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___0_bounds), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_65 = L_64.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_67 = L_66.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___0_bounds), NULL);
		float L_69 = L_68.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), ((-L_65)), ((-L_67)), ((-L_69)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_63, L_70, NULL);
		V_7 = L_71;
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_72 = ___1_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_8), L_72, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_022a:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_8), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawLine(ruf, luf);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_2;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_73, L_74, NULL);
			// Gizmos.DrawLine(ruf, rub);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_1;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_75, L_76, NULL);
			// Gizmos.DrawLine(luf, lub);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_3;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_77, L_78, NULL);
			// Gizmos.DrawLine(rub, lub);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_3;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_79, L_80, NULL);
			// Gizmos.DrawLine(ruf, rdf);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_4;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_81, L_82, NULL);
			// Gizmos.DrawLine(rub, rdb);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_5;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_83, L_84, NULL);
			// Gizmos.DrawLine(luf, lfd);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_6;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_85, L_86, NULL);
			// Gizmos.DrawLine(lub, lbd);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_3;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_7;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_87, L_88, NULL);
			// Gizmos.DrawLine(rdf, lfd);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_6;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_89, L_90, NULL);
			// Gizmos.DrawLine(rdf, rdb);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_5;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_91, L_92, NULL);
			// Gizmos.DrawLine(lfd, lbd);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = V_6;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_7;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_93, L_94, NULL);
			// Gizmos.DrawLine(lbd, rdb);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_7;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_5;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_95, L_96, NULL);
			// }
			goto IL_0238;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0238:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawCircle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_up, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_radius, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// up = ((up == default(Vector3)) ? Vector3.up : up).normalized * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_up;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_5;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_up;
		G_B3_0 = L_3;
		goto IL_001a;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		G_B3_0 = L_4;
	}

IL_001a:
	{
		V_5 = G_B3_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_6 = ___3_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		___1_up = L_7;
		// Vector3
		//     forward = Vector3.Slerp(up, -up, 0.5f),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_8, L_10, (0.5f), NULL);
		V_0 = L_11;
		// right = Vector3.Cross(up, forward).normalized * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_12, L_13, NULL);
		V_5 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_16 = ___3_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		V_1 = L_17;
		// Matrix4x4 matrix = new Matrix4x4()
		// {
		//     m00 = right.x,
		//     m10 = right.y,
		//     m20 = right.z,
		// 
		//     m01 = up.x,
		//     m11 = up.y,
		//     m21 = up.z,
		// 
		//     m02 = forward.x,
		//     m12 = forward.y,
		//     m22 = forward.z
		// };
		il2cpp_codegen_initobj((&V_6), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19 = L_18.___x_2;
		(&V_6)->___m00_0 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		float L_21 = L_20.___y_3;
		(&V_6)->___m10_1 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23 = L_22.___z_4;
		(&V_6)->___m20_2 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_up;
		float L_25 = L_24.___x_2;
		(&V_6)->___m01_4 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___1_up;
		float L_27 = L_26.___y_3;
		(&V_6)->___m11_5 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___1_up;
		float L_29 = L_28.___z_4;
		(&V_6)->___m21_6 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		float L_31 = L_30.___x_2;
		(&V_6)->___m02_8 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		float L_33 = L_32.___y_3;
		(&V_6)->___m12_9 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		float L_35 = L_34.___z_4;
		(&V_6)->___m22_10 = L_35;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_36 = V_6;
		V_2 = L_36;
		// Vector3
		//     lastPoint = position + matrix.MultiplyPoint3x4(new Vector3(Mathf.Cos(0), 0, Mathf.Sin(0))),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_position;
		float L_38;
		L_38 = cosf((0.0f));
		float L_39;
		L_39 = sinf((0.0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), L_38, (0.0f), L_39, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_41, NULL);
		V_3 = L_42;
		// nextPoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_4 = L_43;
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = ___2_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_7), L_44, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0166:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_7), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// for (int i = 0; i <= 90; i++)
				V_8 = 0;
				goto IL_015e_1;
			}

IL_0114_1:
			{
				// nextPoint = position + matrix.MultiplyPoint3x4(
				//     new Vector3(
				//         Mathf.Cos((i * 4) * Mathf.Deg2Rad),
				//         0f,
				//         Mathf.Sin((i * 4) * Mathf.Deg2Rad)
				//         )
				//     );
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___0_position;
				int32_t L_46 = V_8;
				float L_47;
				L_47 = cosf(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(L_46, 4))), (0.0174532924f))));
				int32_t L_48 = V_8;
				float L_49;
				L_49 = sinf(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(L_48, 4))), (0.0174532924f))));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
				memset((&L_50), 0, sizeof(L_50));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), L_47, (0.0f), L_49, /*hidden argument*/NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
				L_51 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_50, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
				L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_45, L_51, NULL);
				V_4 = L_52;
				// Gizmos.DrawLine(lastPoint, nextPoint);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_4;
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_53, L_54, NULL);
				// lastPoint = nextPoint;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_4;
				V_3 = L_55;
				// for (int i = 0; i <= 90; i++)
				int32_t L_56 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_56, 1));
			}

IL_015e_1:
			{
				// for (int i = 0; i <= 90; i++)
				int32_t L_57 = V_8;
				if ((((int32_t)L_57) <= ((int32_t)((int32_t)90))))
				{
					goto IL_0114_1;
				}
			}
			{
				// }
				goto IL_0174;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0174:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawCylinder(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawCylinder_m4E05C7DC9C6154E71AD54647187A5E2E6146AF21 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_radius, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3
		//     up = (end - start).normalized * radius,
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		float L_4 = ___3_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// forward = Vector3.Slerp(up, -up, 0.5f),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_6, L_8, (0.5f), NULL);
		V_1 = L_9;
		// right = Vector3.Cross(up, forward).normalized * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_10, L_11, NULL);
		V_3 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		float L_14 = ___3_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		V_2 = L_15;
		// DrawCircle(start, up, color, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___2_color;
		float L_19 = ___3_radius;
		GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF(L_16, L_17, L_18, L_19, NULL);
		// DrawCircle(end, -up, color, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_21, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___2_color;
		float L_24 = ___3_radius;
		GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF(L_20, L_22, L_23, L_24, NULL);
		// DrawCircle((start + end) * 0.5f, up, color, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___1_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = ___2_color;
		float L_31 = ___3_radius;
		GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF(L_28, L_29, L_30, L_31, NULL);
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = ___2_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_4), L_32, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_4), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawLine(start + right, end + right);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
			L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_33, L_34, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
			L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_37, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_35, L_38, NULL);
			// Gizmos.DrawLine(start - right, end - right);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
			L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_39, L_40, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
			L_44 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_43, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_41, L_44, NULL);
			// Gizmos.DrawLine(start + forward, end + forward);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
			L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_45, L_46, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
			L_50 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_48, L_49, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_47, L_50, NULL);
			// Gizmos.DrawLine(start - forward, end - forward);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
			L_53 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_51, L_52, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
			L_56 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_54, L_55, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_53, L_56, NULL);
			// Gizmos.DrawLine(start - right, start + right);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
			L_59 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_57, L_58, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
			L_62 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_60, L_61, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_59, L_62, NULL);
			// Gizmos.DrawLine(start - forward, start + forward);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
			L_65 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_63, L_64, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
			L_68 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_66, L_67, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_65, L_68, NULL);
			// Gizmos.DrawLine(end - right, end + right);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
			L_71 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_69, L_70, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
			L_74 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_72, L_73, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_71, L_74, NULL);
			// Gizmos.DrawLine(end - forward, end + forward);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
			L_77 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_75, L_76, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
			L_80 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_78, L_79, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_77, L_80, NULL);
			// }
			goto IL_011e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011e:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawCone(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawCone_mB1CD161228924B3886F6CEA9A4159F5250A063B3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_angle, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_5;
	memset((&V_5), 0, sizeof(V_5));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// float length = direction.magnitude;
		float L_0;
		L_0 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___1_direction), NULL);
		V_0 = L_0;
		// angle = Mathf.Clamp(angle, 0f, 90f);
		float L_1 = ___3_angle;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, (0.0f), (90.0f), NULL);
		___3_angle = L_2;
		// Vector3
		//     forward = direction,
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_direction;
		V_1 = L_3;
		// up = Vector3.Slerp(forward, -forward, 0.5f),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_4, L_6, (0.5f), NULL);
		V_2 = L_7;
		// right = Vector3.Cross(forward, up).normalized * length,
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_8, L_9, NULL);
		V_8 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
		float L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		V_3 = L_13;
		// slerpedVector = Vector3.Slerp(forward, up, angle / 90.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16 = ___3_angle;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_14, L_15, ((float)(L_16/(90.0f))), NULL);
		V_4 = L_17;
		// Plane farPlane = new Plane(-direction, position + forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_21, NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_5), L_19, L_22, NULL);
		// Ray distRay = new Ray(position, slerpedVector);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_4;
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_6), L_23, L_24, NULL);
		// farPlane.Raycast(distRay, out dist);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_25 = V_6;
		bool L_26;
		L_26 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_5), L_25, (&V_7), NULL);
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___2_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_9), L_27, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0113:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_9), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawRay(position, slerpedVector.normalized * dist);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
			L_29 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
			float L_30 = V_7;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
			L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_30, NULL);
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_28, L_31, NULL);
			// Gizmos.DrawRay(position, Vector3.Slerp(forward, -up, angle / 90.0f).normalized * dist);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
			L_35 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_34, NULL);
			float L_36 = ___3_angle;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
			L_37 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_33, L_35, ((float)(L_36/(90.0f))), NULL);
			V_8 = L_37;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
			L_38 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
			float L_39 = V_7;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
			L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_32, L_40, NULL);
			// Gizmos.DrawRay(position, Vector3.Slerp(forward, right, angle / 90.0f).normalized * dist);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_3;
			float L_44 = ___3_angle;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
			L_45 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_42, L_43, ((float)(L_44/(90.0f))), NULL);
			V_8 = L_45;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
			L_46 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
			float L_47 = V_7;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
			L_48 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, L_47, NULL);
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_41, L_48, NULL);
			// Gizmos.DrawRay(position, Vector3.Slerp(forward, -right, angle / 90.0f).normalized * dist);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_1;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_3;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
			L_52 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_51, NULL);
			float L_53 = ___3_angle;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
			L_54 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_50, L_52, ((float)(L_53/(90.0f))), NULL);
			V_8 = L_54;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
			L_55 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
			float L_56 = V_7;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
			L_57 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_55, L_56, NULL);
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_49, L_57, NULL);
			// }
			goto IL_0121;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0121:
	{
		// DrawCircle(position + forward, direction, color, (forward - (slerpedVector.normalized * dist)).magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_58, L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = ___1_direction;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_62 = ___2_color;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_65 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_64, L_65, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_63, L_66, NULL);
		V_8 = L_67;
		float L_68;
		L_68 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF(L_60, L_61, L_62, L_68, NULL);
		// DrawCircle(position + (forward * 0.5f), direction, color, ((forward * 0.5f) - (slerpedVector.normalized * (dist * 0.5f))).magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_70, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_69, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = ___1_direction;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = ___2_color;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_75, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_78 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_77, ((float)il2cpp_codegen_multiply(L_78, (0.5f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_76, L_79, NULL);
		V_8 = L_80;
		float L_81;
		L_81 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF(L_72, L_73, L_74, L_81, NULL);
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawArrow(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawArrow_m200E8F33AC747011211BC12CA8960B419BCB5801 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_angle, float ___4_headLength, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (direction == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return; // can't draw a thing
		return;
	}

IL_000e:
	{
		// if (angle < 0f)
		float L_3 = ___3_angle;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// angle = Mathf.Abs(angle);
		float L_4 = ___3_angle;
		float L_5;
		L_5 = fabsf(L_4);
		___3_angle = L_5;
	}

IL_001e:
	{
		// if (angle > 0f)
		float L_6 = ___3_angle;
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// float length = direction.magnitude;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___1_direction), NULL);
		// float arrowLength = length * Mathf.Clamp01(headLength);
		float L_8 = ___4_headLength;
		float L_9;
		L_9 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_8, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_9));
		// Vector3 headDir = direction.normalized * -arrowLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___1_direction), NULL);
		float L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, ((-L_11)), NULL);
		V_1 = L_12;
		// DrawCone(position + direction, headDir, color, angle);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___2_color;
		float L_18 = ___3_angle;
		GizmosExtend_DrawCone_mB1CD161228924B3886F6CEA9A4159F5250A063B3(L_15, L_16, L_17, L_18, NULL);
	}

IL_0054:
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___2_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_2), L_19, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_2), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawRay(position, direction);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___1_direction;
			Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_20, L_21, NULL);
			// }
			goto IL_0073;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawCapsule(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point2, float ___2_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		// if (point1 == point2)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_point2;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___3_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_3, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawWireSphere(point1, radius);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_point1;
			float L_5 = ___2_radius;
			Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_4, L_5, NULL);
			// }
			goto IL_0376;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		// float
		//     height = (point1 - point2).magnitude,
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		V_7 = L_8;
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		V_1 = L_9;
		// sideLength = Mathf.Max(0, (height * 0.5f));
		float L_10 = V_1;
		float L_11;
		L_11 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)il2cpp_codegen_multiply(L_10, (0.5f))), NULL);
		V_2 = L_11;
		// Vector3
		//     up = (point2 - point1).normalized * radius,
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		V_7 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		float L_16 = ___2_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		V_3 = L_17;
		// forward = Vector3.Slerp(up, -up, 0.5f),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_18, L_20, (0.5f), NULL);
		V_4 = L_21;
		// right = Vector3.Cross(up, forward).normalized * radius,
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_22, L_23, NULL);
		V_7 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		float L_26 = ___2_radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		V_5 = L_27;
		// middle = (point2 + point1) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___1_point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___0_point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, (0.5f), NULL);
		V_6 = L_31;
		// point1 = middle + ((point1 - middle).normalized * sideLength);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___0_point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_33, L_34, NULL);
		V_7 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		float L_37 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_38, NULL);
		___0_point1 = L_39;
		// point2 = middle + ((point2 - middle).normalized * sideLength);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___1_point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_41, L_42, NULL);
		V_7 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		float L_45 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_46, NULL);
		___1_point2 = L_47;
		// DrawCircle(point1, up, color, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ___0_point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50 = ___3_color;
		float L_51 = ___2_radius;
		GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF(L_48, L_49, L_50, L_51, NULL);
		// DrawCircle(point2, -up, color, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ___1_point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_53, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55 = ___3_color;
		float L_56 = ___2_radius;
		GizmosExtend_DrawCircle_m95DEFE8632013D09EA465E7397B541A4A4F752BF(L_52, L_54, L_55, L_56, NULL);
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57 = ___3_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_57, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0368:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Gizmos.DrawLine(point1 + right, point2 + right);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
				L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_58, L_59, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
				L_63 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_62, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_60, L_63, NULL);
				// Gizmos.DrawLine(point1 - right, point2 - right);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
				L_66 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_64, L_65, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
				L_69 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_67, L_68, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_66, L_69, NULL);
				// Gizmos.DrawLine(point1 + forward, point2 + forward);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
				L_72 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_70, L_71, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
				L_75 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_73, L_74, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_72, L_75, NULL);
				// Gizmos.DrawLine(point1 - forward, point2 - forward);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
				L_78 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_76, L_77, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
				L_81 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_79, L_80, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_78, L_81, NULL);
				// for (int i = 1; i < 26; i++)
				V_8 = 1;
				goto IL_035d_1;
			}

IL_015f_1:
			{
				// Gizmos.DrawLine(Vector3.Slerp(right, -up, i / 25.0f) + point1, Vector3.Slerp(right, -up, (i - 1) / 25.0f) + point1);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
				L_84 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_83, NULL);
				int32_t L_85 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
				L_86 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_82, L_84, ((float)(((float)L_85)/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
				L_88 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_86, L_87, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
				L_91 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_90, NULL);
				int32_t L_92 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
				L_93 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_89, L_91, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_92, 1)))/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
				L_95 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_93, L_94, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_88, L_95, NULL);
				// Gizmos.DrawLine(Vector3.Slerp(-right, -up, i / 25.0f) + point1, Vector3.Slerp(-right, -up, (i - 1) / 25.0f) + point1);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
				L_97 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_96, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
				L_99 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_98, NULL);
				int32_t L_100 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
				L_101 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_97, L_99, ((float)(((float)L_100)/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
				L_103 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_101, L_102, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
				L_105 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_104, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
				L_107 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_106, NULL);
				int32_t L_108 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
				L_109 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_105, L_107, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_108, 1)))/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
				L_111 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_109, L_110, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_103, L_111, NULL);
				// Gizmos.DrawLine(Vector3.Slerp(forward, -up, i / 25.0f) + point1, Vector3.Slerp(forward, -up, (i - 1) / 25.0f) + point1);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
				L_114 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_113, NULL);
				int32_t L_115 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
				L_116 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_112, L_114, ((float)(((float)L_115)/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
				L_118 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_116, L_117, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
				L_121 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_120, NULL);
				int32_t L_122 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
				L_123 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_119, L_121, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_122, 1)))/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
				L_125 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_123, L_124, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_118, L_125, NULL);
				// Gizmos.DrawLine(Vector3.Slerp(-forward, -up, i / 25.0f) + point1, Vector3.Slerp(-forward, -up, (i - 1) / 25.0f) + point1);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
				L_127 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_126, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
				L_129 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_128, NULL);
				int32_t L_130 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
				L_131 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_127, L_129, ((float)(((float)L_130)/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
				L_133 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_131, L_132, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
				L_135 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_134, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
				L_137 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_136, NULL);
				int32_t L_138 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
				L_139 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_135, L_137, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_138, 1)))/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = ___0_point1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
				L_141 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_139, L_140, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_133, L_141, NULL);
				// Gizmos.DrawLine(Vector3.Slerp(right, up, i / 25.0f) + point2, Vector3.Slerp(right, up, (i - 1) / 25.0f) + point2);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = V_3;
				int32_t L_144 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
				L_145 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_142, L_143, ((float)(((float)L_144)/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147;
				L_147 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_145, L_146, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = V_3;
				int32_t L_150 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
				L_151 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_148, L_149, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_150, 1)))/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
				L_153 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_151, L_152, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_147, L_153, NULL);
				// Gizmos.DrawLine(Vector3.Slerp(-right, up, i / 25.0f) + point2, Vector3.Slerp(-right, up, (i - 1) / 25.0f) + point2);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
				L_155 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_154, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = V_3;
				int32_t L_157 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
				L_158 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_155, L_156, ((float)(((float)L_157)/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160;
				L_160 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_158, L_159, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
				L_162 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_161, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163 = V_3;
				int32_t L_164 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
				L_165 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_162, L_163, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_164, 1)))/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
				L_167 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_165, L_166, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_160, L_167, NULL);
				// Gizmos.DrawLine(Vector3.Slerp(forward, up, i / 25.0f) + point2, Vector3.Slerp(forward, up, (i - 1) / 25.0f) + point2);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169 = V_3;
				int32_t L_170 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171;
				L_171 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_168, L_169, ((float)(((float)L_170)/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
				L_173 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_171, L_172, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175 = V_3;
				int32_t L_176 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177;
				L_177 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_174, L_175, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_176, 1)))/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_178 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179;
				L_179 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_177, L_178, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_173, L_179, NULL);
				// Gizmos.DrawLine(Vector3.Slerp(-forward, up, i / 25.0f) + point2, Vector3.Slerp(-forward, up, (i - 1) / 25.0f) + point2);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181;
				L_181 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_180, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = V_3;
				int32_t L_183 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184;
				L_184 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_181, L_182, ((float)(((float)L_183)/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186;
				L_186 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_184, L_185, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188;
				L_188 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_187, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189 = V_3;
				int32_t L_190 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191;
				L_191 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_188, L_189, ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_190, 1)))/(25.0f))), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192 = ___1_point2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
				L_193 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_191, L_192, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_186, L_193, NULL);
				// for (int i = 1; i < 26; i++)
				int32_t L_194 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_194, 1));
			}

IL_035d_1:
			{
				// for (int i = 1; i < 26; i++)
				int32_t L_195 = V_8;
				if ((((int32_t)L_195) < ((int32_t)((int32_t)26))))
				{
					goto IL_015f_1;
				}
			}
			{
				// }
				goto IL_0376;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0376:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawFrustum(UnityEngine.Camera,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawFrustum_mA6F903BAAD85A18F5B1C6F78DFD2EF5509C6DC7E (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___1_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.matrix = Matrix4x4.TRS(camera.transform.position, camera.transform.rotation, Vector3.one);
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___0_camera;
			NullCheck(L_1);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
			L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
			NullCheck(L_2);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
			L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___0_camera;
			NullCheck(L_4);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
			L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
			NullCheck(L_5);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
			L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
			L_7 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
			L_8 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_3, L_6, L_7, NULL);
			Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_8, NULL);
			// Gizmos.DrawFrustum(Vector3.zero, camera.fieldOfView, camera.farClipPlane, camera.nearClipPlane, camera.aspect);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
			L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = ___0_camera;
			NullCheck(L_10);
			float L_11;
			L_11 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_10, NULL);
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = ___0_camera;
			NullCheck(L_12);
			float L_13;
			L_13 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_12, NULL);
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = ___0_camera;
			NullCheck(L_14);
			float L_15;
			L_15 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_14, NULL);
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ___0_camera;
			NullCheck(L_16);
			float L_17;
			L_17 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_16, NULL);
			Gizmos_DrawFrustum_m28C6ACBA916E64DC2C95ED561AE0B63E6534BE31(L_9, L_11, L_13, L_15, L_17, NULL);
			// Gizmos.matrix = Matrix4x4.identity;
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
			L_18 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
			Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_18, NULL);
			// }
			goto IL_0069;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawPlane_m5808368120B11B25E98B7E224826F35F5CB9CFB6 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_upward, float ___3_height, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_color, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float width = Vector3.Distance(start, end);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_end;
		float L_2;
		L_2 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (Mathf.Approximately(width, 0f))
		float L_3 = V_0;
		bool L_4;
		L_4 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_3, (0.0f), NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___4_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_1), L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Quaternion rotation =
			//     Quaternion.LookRotation(end - start, upward) *
			//     Quaternion.Euler(0f, -90f, 0f);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_end;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_start;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
			L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___2_upward;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
			L_10 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_8, L_9, NULL);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
			L_11 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (-90.0f), (0.0f), NULL);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
			L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_11, NULL);
			V_2 = L_12;
			// Gizmos.matrix = Matrix4x4.TRS(start, rotation, Vector3.one);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_start;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
			L_15 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16;
			L_16 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_13, L_14, L_15, NULL);
			Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_16, NULL);
			// Gizmos.DrawCube(
			//     new Vector3(width * 0.5f, height * 0.5f, 0f),
			//     new Vector3(width, height, float.Epsilon));
			float L_17 = V_0;
			float L_18 = ___3_height;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
			memset((&L_19), 0, sizeof(L_19));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)il2cpp_codegen_multiply(L_17, (0.5f))), ((float)il2cpp_codegen_multiply(L_18, (0.5f))), (0.0f), /*hidden argument*/NULL);
			float L_20 = V_0;
			float L_21 = ___3_height;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
			memset((&L_22), 0, sizeof(L_22));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), L_20, L_21, (1.40129846E-45f), /*hidden argument*/NULL);
			Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F(L_19, L_22, NULL);
			// Gizmos.matrix = Matrix4x4.identity;
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23;
			L_23 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
			Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_23, NULL);
			// }
			goto IL_009a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawPlane(UnityEngine.Transform,System.Single,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawPlane_m5CF3CACDE0A9A61099A2B2002A0360A26BEA44A3 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_self, float ___1_width, float ___2_height, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) 
{
	{
		// DrawPlane(self.position, self.position + (self.forward * width), self.up, height, color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_self;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_self;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_self;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6 = ___1_width;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_self;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_9, NULL);
		float L_11 = ___2_height;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___3_color;
		GizmosExtend_DrawPlane_m5808368120B11B25E98B7E224826F35F5CB9CFB6(L_1, L_8, L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawSphere(UnityEngine.Transform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawSphere_m1F4DBA357A899C493C51E387F0F7D86C5D3C560D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_self, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	{
		// DrawSphere(self.position, self.localScale.x, color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_self;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_self;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___x_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_color;
		GizmosExtend_DrawSphere_m9018456D3E0F8C90B1CE00358E6B796B6C6EFF02(L_1, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawSphere(UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawSphere_m9018456D3E0F8C90B1CE00358E6B796B6C6EFF02 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0011:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawSphere(position, radius);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_position;
			float L_2 = ___1_radius;
			Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_1, L_2, NULL);
			// }
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawDirection(UnityEngine.Transform,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawDirection_m67E13650EF29B5FD86EA1CE0F3C680B9207A61F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_self, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	{
		// DrawDirection(self.position, Vector3.forward, self.localScale.x, color);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_self;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_self;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___x_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_color;
		GizmosExtend_DrawDirection_m749B186E0FB522A21BA7489B66AB43F54749054F(L_1, L_2, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawDirection(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawDirection_m749B186E0FB522A21BA7489B66AB43F54749054F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, float ___2_distance, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___3_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawLine(position, position + (direction * distance));
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_direction;
			float L_4 = ___2_distance;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
			L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
			L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_1, L_6, NULL);
			// }
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawLabel(UnityEngine.Vector3,System.String,UnityEngine.GUIStyle,UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawLabel_mFC5C5FADFAB1CB610563346AB4CF019B7A5AF09F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, String_t* ___1_text, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, float ___4_offsetX, float ___5_offsetY, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBox_m78C799ED32172303833806513374F4AECDE9DE97 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) 
{
	{
		// DrawBox(new Box(origin, halfExtents, orientation), color);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_halfExtents;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_orientation;
		Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Box__ctor_mC06912515E63A79653ADCD675244BBE9424C8832((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___3_color;
		GizmosExtend_DrawBox_m70C6923905AE5AB2D6F61AD9592E99FFAB6150D4(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawBox(Kit.GizmosExtend/Box,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBox_m70C6923905AE5AB2D6F61AD9592E99FFAB6150D4 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 ___0_box, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___1_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ee:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawLine(box.frontTopLeft, box.frontTopRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
			L_1 = Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
			L_2 = Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_1, L_2, NULL);
			// Gizmos.DrawLine(box.frontTopRight, box.frontBottomRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
			L_3 = Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
			L_4 = Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_3, L_4, NULL);
			// Gizmos.DrawLine(box.frontBottomRight, box.frontBottomLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
			L_5 = Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
			L_6 = Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_5, L_6, NULL);
			// Gizmos.DrawLine(box.frontBottomLeft, box.frontTopLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
			L_7 = Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
			L_8 = Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_7, L_8, NULL);
			// Gizmos.DrawLine(box.backTopLeft, box.backTopRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
			L_9 = Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
			L_10 = Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_9, L_10, NULL);
			// Gizmos.DrawLine(box.backTopRight, box.backBottomRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
			L_11 = Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
			L_12 = Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_11, L_12, NULL);
			// Gizmos.DrawLine(box.backBottomRight, box.backBottomLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
			L_13 = Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
			L_14 = Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_13, L_14, NULL);
			// Gizmos.DrawLine(box.backBottomLeft, box.backTopLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
			L_15 = Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
			L_16 = Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_15, L_16, NULL);
			// Gizmos.DrawLine(box.frontTopLeft, box.backTopLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
			L_17 = Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
			L_18 = Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_17, L_18, NULL);
			// Gizmos.DrawLine(box.frontTopRight, box.backTopRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
			L_19 = Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
			L_20 = Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_19, L_20, NULL);
			// Gizmos.DrawLine(box.frontBottomRight, box.backBottomRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
			L_21 = Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
			L_22 = Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_21, L_22, NULL);
			// Gizmos.DrawLine(box.frontBottomLeft, box.backBottomLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
			L_23 = Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F((&___0_box), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
			L_24 = Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9((&___0_box), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_23, L_24, NULL);
			// }
			goto IL_00fc;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawBoxCastOnHit(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBoxCastOnHit_mA2E0F0697D28E738FD20DC951CA026A0673ACF13 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_direction, float ___4_hitInfoDistance, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_color, const RuntimeMethod* method) 
{
	{
		// origin = CastCenterOnCollision(origin, direction, hitInfoDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___3_direction;
		float L_2 = ___4_hitInfoDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = GizmosExtend_CastCenterOnCollision_m3C145E216ABF6AE3FBD53CCEF44355A46ADE0EDB(L_0, L_1, L_2, NULL);
		___0_origin = L_3;
		// DrawBox(origin, halfExtents, orientation, color);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_halfExtents;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___2_orientation;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___5_color;
		GizmosExtend_DrawBox_m78C799ED32172303833806513374F4AECDE9DE97(L_4, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawBoxCastBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawBoxCastBox_m11461E35C8AF07CE8BAD63EE0128B2A121773549 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_direction, float ___4_distance, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_color, const RuntimeMethod* method) 
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// direction.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&___3_direction), NULL);
		// Box bottomBox = new Box(origin, halfExtents, orientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_halfExtents;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_orientation;
		Box__ctor_mC06912515E63A79653ADCD675244BBE9424C8832((&V_0), L_0, L_1, L_2, NULL);
		// Box topBox = new Box(origin + (direction * distance), halfExtents, orientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___3_direction;
		float L_5 = ___4_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_halfExtents;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___2_orientation;
		Box__ctor_mC06912515E63A79653ADCD675244BBE9424C8832((&V_1), L_7, L_8, L_9, NULL);
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___5_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_2), L_10, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cb:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_2), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawLine(bottomBox.backBottomLeft, topBox.backBottomLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
			L_11 = Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9((&V_0), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
			L_12 = Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9((&V_1), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_11, L_12, NULL);
			// Gizmos.DrawLine(bottomBox.backBottomRight, topBox.backBottomRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
			L_13 = Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E((&V_0), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
			L_14 = Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E((&V_1), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_13, L_14, NULL);
			// Gizmos.DrawLine(bottomBox.backTopLeft, topBox.backTopLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
			L_15 = Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0((&V_0), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
			L_16 = Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0((&V_1), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_15, L_16, NULL);
			// Gizmos.DrawLine(bottomBox.backTopRight, topBox.backTopRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
			L_17 = Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160((&V_0), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
			L_18 = Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160((&V_1), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_17, L_18, NULL);
			// Gizmos.DrawLine(bottomBox.frontTopLeft, topBox.frontTopLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
			L_19 = Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49((&V_0), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
			L_20 = Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49((&V_1), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_19, L_20, NULL);
			// Gizmos.DrawLine(bottomBox.frontTopRight, topBox.frontTopRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
			L_21 = Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2((&V_0), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
			L_22 = Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2((&V_1), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_21, L_22, NULL);
			// Gizmos.DrawLine(bottomBox.frontBottomLeft, topBox.frontBottomLeft);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
			L_23 = Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F((&V_0), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
			L_24 = Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F((&V_1), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_23, L_24, NULL);
			// Gizmos.DrawLine(bottomBox.frontBottomRight, topBox.frontBottomRight);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
			L_25 = Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72((&V_0), NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
			L_26 = Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72((&V_1), NULL);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_25, L_26, NULL);
			// }
			goto IL_00d9;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		// DrawBox(bottomBox, color);
		Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 L_27 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = ___5_color;
		GizmosExtend_DrawBox_m70C6923905AE5AB2D6F61AD9592E99FFAB6150D4(L_27, L_28, NULL);
		// DrawBox(topBox, color);
		Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 L_29 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = ___5_color;
		GizmosExtend_DrawBox_m70C6923905AE5AB2D6F61AD9592E99FFAB6150D4(L_29, L_30, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Kit.GizmosExtend::CastCenterOnCollision(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GizmosExtend_CastCenterOnCollision_m3C145E216ABF6AE3FBD53CCEF44355A46ADE0EDB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, float ___2_hitInfoDistance, const RuntimeMethod* method) 
{
	{
		// return origin + (direction.normalized * hitInfoDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___1_direction), NULL);
		float L_2 = ___2_hitInfoDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 Kit.GizmosExtend::RotatePointAroundPivot(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GizmosExtend_RotatePointAroundPivot_m1280FAC46FB57EE40DC78F534B120750E9663C27 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pivot, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = point - pivot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_pivot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// return pivot + rotation * direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_pivot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_6, NULL);
		return L_7;
	}
}
// System.Void Kit.GizmosExtend::DrawLocalCube(UnityEngine.Color&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawLocalCube_mBA1C863646FFC8D4BABF977206F108310DD98452 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_lbb, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_rbb, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_lbf, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_rbf, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___5_lub, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___6_rub, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___7_luf, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___8_ruf, const RuntimeMethod* method) 
{
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_0);
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_0), L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Gizmos.DrawLine(lbb, rbb);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_lbb;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___2_rbb;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_3, L_5, NULL);
			// Gizmos.DrawLine(rbb, lbf);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___2_rbb;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___3_lbf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_8);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_7, L_9, NULL);
			// Gizmos.DrawLine(lbf, rbf);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___3_lbf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_10);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___4_rbf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_12);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_11, L_13, NULL);
			// Gizmos.DrawLine(rbf, lbb);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___4_rbf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_14);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___1_lbb;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_16);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_15, L_17, NULL);
			// Gizmos.DrawLine(lub, rub);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___5_lub;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_18);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___6_rub;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_20);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_19, L_21, NULL);
			// Gizmos.DrawLine(rub, luf);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = ___6_rub;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_22);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = ___7_luf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_24);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_23, L_25, NULL);
			// Gizmos.DrawLine(luf, ruf);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = ___7_luf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_26);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___8_ruf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_28);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_27, L_29, NULL);
			// Gizmos.DrawLine(ruf, lub);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___8_ruf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_30);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = ___5_lub;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_32);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_31, L_33, NULL);
			// Gizmos.DrawLine(lbb, lub);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = ___1_lbb;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_34);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = ___5_lub;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_36);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_35, L_37, NULL);
			// Gizmos.DrawLine(rbb, rub);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = ___2_rbb;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_38);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = ___6_rub;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_40);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_39, L_41, NULL);
			// Gizmos.DrawLine(lbf, luf);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = ___3_lbf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_42);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = ___7_luf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_44);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_43, L_45, NULL);
			// Gizmos.DrawLine(rbf, ruf);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = ___4_rbf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_46);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48 = ___8_ruf;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_48);
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_47, L_49, NULL);
			// }
			goto IL_00f8;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawLocalCube(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawLocalCube_m7B45BE79AFC6CCC03B2EA0BDCF1CFC881D34D518 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_center, const RuntimeMethod* method) 
{
	{
		// Box box = new Box(transform.position, size * 0.5f, transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (0.5f), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_transform;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Box__ctor_mC06912515E63A79653ADCD675244BBE9424C8832((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		// DrawBox(box, color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___2_color;
		GizmosExtend_DrawBox_m70C6923905AE5AB2D6F61AD9592E99FFAB6150D4(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawLocalCube(UnityEngine.Matrix4x4,UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawLocalCube_m333D2761DB18A7CB0E7076518691A65A1BFB0BFE (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_space, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_center, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// size = (size == default(Vector3)) ? Vector3.one : size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_size;
		il2cpp_codegen_initobj((&V_8), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_8;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_size;
		G_B3_0 = L_3;
		goto IL_001a;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		G_B3_0 = L_4;
	}

IL_001a:
	{
		___1_size = G_B3_0;
		// Vector3
		//     lbb = space.MultiplyPoint3x4(center + ((-size) * 0.5f)),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___3_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_space), L_9, NULL);
		V_0 = L_10;
		// rbb = space.MultiplyPoint3x4(center + (new Vector3(size.x, -size.y, -size.z) * 0.5f)),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___3_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_size;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_size;
		float L_15 = L_14.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___1_size;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_13, ((-L_15)), ((-L_17)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_space), L_20, NULL);
		V_1 = L_21;
		// lbf = space.MultiplyPoint3x4(center + (new Vector3(size.x, -size.y, size.z) * 0.5f)),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___3_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___1_size;
		float L_24 = L_23.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___1_size;
		float L_26 = L_25.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___1_size;
		float L_28 = L_27.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), L_24, ((-L_26)), L_28, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_space), L_31, NULL);
		V_2 = L_32;
		// rbf = space.MultiplyPoint3x4(center + (new Vector3(-size.x, -size.y, size.z) * 0.5f)),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___3_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___1_size;
		float L_35 = L_34.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___1_size;
		float L_37 = L_36.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___1_size;
		float L_39 = L_38.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), ((-L_35)), ((-L_37)), L_39, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_33, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_space), L_42, NULL);
		V_3 = L_43;
		// lub = space.MultiplyPoint3x4(center + (new Vector3(-size.x, size.y, -size.z) * 0.5f)),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___3_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___1_size;
		float L_46 = L_45.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = ___1_size;
		float L_48 = L_47.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___1_size;
		float L_50 = L_49.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_51), ((-L_46)), L_48, ((-L_50)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_space), L_53, NULL);
		V_4 = L_54;
		// rub = space.MultiplyPoint3x4(center + (new Vector3(size.x, size.y, -size.z) * 0.5f)),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = ___3_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___1_size;
		float L_57 = L_56.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = ___1_size;
		float L_59 = L_58.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ___1_size;
		float L_61 = L_60.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_62), L_57, L_59, ((-L_61)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_62, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_55, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_space), L_64, NULL);
		V_5 = L_65;
		// luf = space.MultiplyPoint3x4(center + ((size) * 0.5f)),
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = ___3_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ___1_size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_66, L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_space), L_69, NULL);
		V_6 = L_70;
		// ruf = space.MultiplyPoint3x4(center + (new Vector3(-size.x, size.y, size.z) * 0.5f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = ___3_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ___1_size;
		float L_73 = L_72.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___1_size;
		float L_75 = L_74.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = ___1_size;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((-L_73)), L_75, L_77, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_78, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_71, L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___0_space), L_80, NULL);
		V_7 = L_81;
		// DrawLocalCube(ref color, ref lbb, ref rbb, ref lbf, ref rbf, ref lub, ref rub, ref luf, ref ruf);
		GizmosExtend_DrawLocalCube_mBA1C863646FFC8D4BABF977206F108310DD98452((&___2_color), (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), NULL);
		// }
		return;
	}
}
// System.Void Kit.GizmosExtend::DrawLocalCube(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtend_DrawLocalCube_m852E9917E5CB121B767F5BE62DE80BD0BD4D6457 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_size, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, const RuntimeMethod* method) 
{
	{
		// DrawLocalCube(Matrix4x4.TRS(position, rotation, Vector3.one), size, color, Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_0, L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___2_size;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___3_color;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		GizmosExtend_DrawLocalCube_m333D2761DB18A7CB0E7076518691A65A1BFB0BFE(L_3, L_4, L_5, L_6, NULL);
		// }
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
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localFrontTopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontTopLeft_m3EB767040D4B6DB0EDA798E04794A343503317E5 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontTopLeft { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ClocalFrontTopLeftU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontTopLeft_m3EB767040D4B6DB0EDA798E04794A343503317E5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_localFrontTopLeft_m3EB767040D4B6DB0EDA798E04794A343503317E5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.GizmosExtend/Box::set_localFrontTopLeft(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box_set_localFrontTopLeft_m1BEE47BBBF70B1FE9053C6C9C498B61991446891 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontTopLeft { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3ClocalFrontTopLeftU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Box_set_localFrontTopLeft_m1BEE47BBBF70B1FE9053C6C9C498B61991446891_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Box_set_localFrontTopLeft_m1BEE47BBBF70B1FE9053C6C9C498B61991446891_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localFrontTopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontTopRight_mFCD5583532C103AA63C8667F822B80ED4F976296 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontTopRight { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ClocalFrontTopRightU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontTopRight_mFCD5583532C103AA63C8667F822B80ED4F976296_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_localFrontTopRight_mFCD5583532C103AA63C8667F822B80ED4F976296_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.GizmosExtend/Box::set_localFrontTopRight(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box_set_localFrontTopRight_mE10AEA3BFF70CD5E73C6A927E07A6BCC0EC7FA69 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontTopRight { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3ClocalFrontTopRightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Box_set_localFrontTopRight_mE10AEA3BFF70CD5E73C6A927E07A6BCC0EC7FA69_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Box_set_localFrontTopRight_mE10AEA3BFF70CD5E73C6A927E07A6BCC0EC7FA69_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localFrontBottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontBottomLeft_m031D123CD7F13D36B11934CF89A57B565393CE0C (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontBottomLeft { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ClocalFrontBottomLeftU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontBottomLeft_m031D123CD7F13D36B11934CF89A57B565393CE0C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_localFrontBottomLeft_m031D123CD7F13D36B11934CF89A57B565393CE0C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.GizmosExtend/Box::set_localFrontBottomLeft(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box_set_localFrontBottomLeft_m4AF3425E297966EF5C65C8AEA323A68DCA60096C (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontBottomLeft { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3ClocalFrontBottomLeftU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Box_set_localFrontBottomLeft_m4AF3425E297966EF5C65C8AEA323A68DCA60096C_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Box_set_localFrontBottomLeft_m4AF3425E297966EF5C65C8AEA323A68DCA60096C_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localFrontBottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontBottomRight_m9DB41484AE5BD77EC1ABB81EC0A0B0592FE1A67F (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontBottomRight { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ClocalFrontBottomRightU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontBottomRight_m9DB41484AE5BD77EC1ABB81EC0A0B0592FE1A67F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_localFrontBottomRight_m9DB41484AE5BD77EC1ABB81EC0A0B0592FE1A67F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.GizmosExtend/Box::set_localFrontBottomRight(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box_set_localFrontBottomRight_m18C4A4AAD0EA576C4C435CE9129A6E0130E74FF6 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontBottomRight { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3ClocalFrontBottomRightU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Box_set_localFrontBottomRight_m18C4A4AAD0EA576C4C435CE9129A6E0130E74FF6_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Box_set_localFrontBottomRight_m18C4A4AAD0EA576C4C435CE9129A6E0130E74FF6_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localBackTopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackTopLeft_m8ADBBDF0ECC81A731644B48707F8A8A676E6E943 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localBackTopLeft { get { return -localFrontBottomRight; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontBottomRight_m9DB41484AE5BD77EC1ABB81EC0A0B0592FE1A67F_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackTopLeft_m8ADBBDF0ECC81A731644B48707F8A8A676E6E943_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_localBackTopLeft_m8ADBBDF0ECC81A731644B48707F8A8A676E6E943(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localBackTopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackTopRight_m4ED244050F3C3C72358F77F0FF470996EFC39109 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localBackTopRight { get { return -localFrontBottomLeft; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontBottomLeft_m031D123CD7F13D36B11934CF89A57B565393CE0C_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackTopRight_m4ED244050F3C3C72358F77F0FF470996EFC39109_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_localBackTopRight_m4ED244050F3C3C72358F77F0FF470996EFC39109(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localBackBottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackBottomLeft_m9064E1E5DE5ECF5FF76954CCC66E1697D1647FA7 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localBackBottomLeft { get { return -localFrontTopRight; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontTopRight_mFCD5583532C103AA63C8667F822B80ED4F976296_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackBottomLeft_m9064E1E5DE5ECF5FF76954CCC66E1697D1647FA7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_localBackBottomLeft_m9064E1E5DE5ECF5FF76954CCC66E1697D1647FA7(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_localBackBottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackBottomRight_mB7194DA20113F6D8232A9C5D8368159CC90A1ACA (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localBackBottomRight { get { return -localFrontTopLeft; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontTopLeft_m3EB767040D4B6DB0EDA798E04794A343503317E5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localBackBottomRight_mB7194DA20113F6D8232A9C5D8368159CC90A1ACA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_localBackBottomRight_mB7194DA20113F6D8232A9C5D8368159CC90A1ACA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_frontTopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 frontTopLeft { get { return localFrontTopLeft + origin; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontTopLeft_m3EB767040D4B6DB0EDA798E04794A343503317E5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_frontTopLeft_m918F8ACEFAD5591FE0AC055EAADD65E386646D49(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_frontTopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 frontTopRight { get { return localFrontTopRight + origin; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontTopRight_mFCD5583532C103AA63C8667F822B80ED4F976296_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_frontTopRight_m1F8FFE138210CD10A1B5568401DA408584688DF2(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_frontBottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 frontBottomLeft { get { return localFrontBottomLeft + origin; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontBottomLeft_m031D123CD7F13D36B11934CF89A57B565393CE0C_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_frontBottomLeft_m4F00AD67C2952EAE7013D6F2DB82A7519799D14F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_frontBottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 frontBottomRight { get { return localFrontBottomRight + origin; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontBottomRight_m9DB41484AE5BD77EC1ABB81EC0A0B0592FE1A67F_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_frontBottomRight_m997D19D84143A3EE633E7073A41304C966D57D72(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_backTopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 backTopLeft { get { return localBackTopLeft + origin; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localBackTopLeft_m8ADBBDF0ECC81A731644B48707F8A8A676E6E943(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_backTopLeft_m9F2102DC9DBD32A7B3B12E6CE4AB817046F23BD0(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_backTopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 backTopRight { get { return localBackTopRight + origin; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localBackTopRight_m4ED244050F3C3C72358F77F0FF470996EFC39109(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_backTopRight_m38A50CF77DE776C7BFC0C73EBD1F81B6CA064160(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_backBottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 backBottomLeft { get { return localBackBottomLeft + origin; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localBackBottomLeft_m9064E1E5DE5ECF5FF76954CCC66E1697D1647FA7(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_backBottomLeft_m68EE458CA4C0BE4D5361C60531F8C07204E639D9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_backBottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 backBottomRight { get { return localBackBottomRight + origin; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localBackBottomRight_mB7194DA20113F6D8232A9C5D8368159CC90A1ACA(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_backBottomRight_m5CE4F7D79EACCAB6598FF9A662FD5E644AB3385E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.GizmosExtend/Box::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 origin { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CoriginU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.GizmosExtend/Box::set_origin(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box_set_origin_m21E9C56EEE3394E8A3A4140A876CFC985B0D8590 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 origin { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CoriginU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Box_set_origin_m21E9C56EEE3394E8A3A4140A876CFC985B0D8590_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Box_set_origin_m21E9C56EEE3394E8A3A4140A876CFC985B0D8590_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Kit.GizmosExtend/Box::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box__ctor_mC06912515E63A79653ADCD675244BBE9424C8832 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, const RuntimeMethod* method) 
{
	{
		// public Box(Vector3 origin, Vector3 halfExtents, Quaternion orientation) : this(origin, halfExtents)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_halfExtents;
		Box__ctor_m9DB6830C319AE94CEDBCA74B42F64FEB287D6301(__this, L_0, L_1, NULL);
		// Rotate(orientation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_orientation;
		Box_Rotate_m74FA5AC8784CB49B1AEDBC5524B9A92DA83C0B88(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Box__ctor_mC06912515E63A79653ADCD675244BBE9424C8832_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_orientation, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Box__ctor_mC06912515E63A79653ADCD675244BBE9424C8832(_thisAdjusted, ___0_origin, ___1_halfExtents, ___2_orientation, method);
}
// System.Void Kit.GizmosExtend/Box::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box__ctor_m9DB6830C319AE94CEDBCA74B42F64FEB287D6301 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, const RuntimeMethod* method) 
{
	{
		// public Box(Vector3 origin, Vector3 halfExtents) : this()
		il2cpp_codegen_initobj(__this, sizeof(Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0));
		// this.localFrontTopLeft = new Vector3(-halfExtents.x, halfExtents.y, -halfExtents.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_halfExtents;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_halfExtents;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_halfExtents;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), L_3, ((-L_5)), /*hidden argument*/NULL);
		Box_set_localFrontTopLeft_m1BEE47BBBF70B1FE9053C6C9C498B61991446891_inline(__this, L_6, NULL);
		// this.localFrontTopRight = new Vector3(halfExtents.x, halfExtents.y, -halfExtents.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_halfExtents;
		float L_8 = L_7.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_halfExtents;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_halfExtents;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_8, L_10, ((-L_12)), /*hidden argument*/NULL);
		Box_set_localFrontTopRight_mE10AEA3BFF70CD5E73C6A927E07A6BCC0EC7FA69_inline(__this, L_13, NULL);
		// this.localFrontBottomLeft = new Vector3(-halfExtents.x, -halfExtents.y, -halfExtents.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_halfExtents;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___1_halfExtents;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_halfExtents;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((-L_15)), ((-L_17)), ((-L_19)), /*hidden argument*/NULL);
		Box_set_localFrontBottomLeft_m4AF3425E297966EF5C65C8AEA323A68DCA60096C_inline(__this, L_20, NULL);
		// this.localFrontBottomRight = new Vector3(halfExtents.x, -halfExtents.y, -halfExtents.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___1_halfExtents;
		float L_22 = L_21.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___1_halfExtents;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___1_halfExtents;
		float L_26 = L_25.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_22, ((-L_24)), ((-L_26)), /*hidden argument*/NULL);
		Box_set_localFrontBottomRight_m18C4A4AAD0EA576C4C435CE9129A6E0130E74FF6_inline(__this, L_27, NULL);
		// this.origin = origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___0_origin;
		Box_set_origin_m21E9C56EEE3394E8A3A4140A876CFC985B0D8590_inline(__this, L_28, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Box__ctor_m9DB6830C319AE94CEDBCA74B42F64FEB287D6301_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_halfExtents, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Box__ctor_m9DB6830C319AE94CEDBCA74B42F64FEB287D6301(_thisAdjusted, ___0_origin, ___1_halfExtents, method);
}
// System.Void Kit.GizmosExtend/Box::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Box_Rotate_m74FA5AC8784CB49B1AEDBC5524B9A92DA83C0B88 (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_orientation, const RuntimeMethod* method) 
{
	{
		// localFrontTopLeft = RotatePointAroundPivot(localFrontTopLeft, Vector3.zero, orientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Box_get_localFrontTopLeft_m3EB767040D4B6DB0EDA798E04794A343503317E5_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___0_orientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = GizmosExtend_RotatePointAroundPivot_m1280FAC46FB57EE40DC78F534B120750E9663C27(L_0, L_1, L_2, NULL);
		Box_set_localFrontTopLeft_m1BEE47BBBF70B1FE9053C6C9C498B61991446891_inline(__this, L_3, NULL);
		// localFrontTopRight = RotatePointAroundPivot(localFrontTopRight, Vector3.zero, orientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Box_get_localFrontTopRight_mFCD5583532C103AA63C8667F822B80ED4F976296_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___0_orientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = GizmosExtend_RotatePointAroundPivot_m1280FAC46FB57EE40DC78F534B120750E9663C27(L_4, L_5, L_6, NULL);
		Box_set_localFrontTopRight_mE10AEA3BFF70CD5E73C6A927E07A6BCC0EC7FA69_inline(__this, L_7, NULL);
		// localFrontBottomLeft = RotatePointAroundPivot(localFrontBottomLeft, Vector3.zero, orientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Box_get_localFrontBottomLeft_m031D123CD7F13D36B11934CF89A57B565393CE0C_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___0_orientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = GizmosExtend_RotatePointAroundPivot_m1280FAC46FB57EE40DC78F534B120750E9663C27(L_8, L_9, L_10, NULL);
		Box_set_localFrontBottomLeft_m4AF3425E297966EF5C65C8AEA323A68DCA60096C_inline(__this, L_11, NULL);
		// localFrontBottomRight = RotatePointAroundPivot(localFrontBottomRight, Vector3.zero, orientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Box_get_localFrontBottomRight_m9DB41484AE5BD77EC1ABB81EC0A0B0592FE1A67F_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___0_orientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = GizmosExtend_RotatePointAroundPivot_m1280FAC46FB57EE40DC78F534B120750E9663C27(L_12, L_13, L_14, NULL);
		Box_set_localFrontBottomRight_m18C4A4AAD0EA576C4C435CE9129A6E0130E74FF6_inline(__this, L_15, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Box_Rotate_m74FA5AC8784CB49B1AEDBC5524B9A92DA83C0B88_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_orientation, const RuntimeMethod* method)
{
	Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0*>(__this + _offset);
	Box_Rotate_m74FA5AC8784CB49B1AEDBC5524B9A92DA83C0B88(_thisAdjusted, ___0_orientation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Kit.Physic.BoxCastData Kit.Physic.BoxCastData::get_NONE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3 BoxCastData_get_NONE_m38E28A009FD2CE2AA011733C25A46933A86B47B5 (const RuntimeMethod* method) 
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static BoxCastData NONE { get { return default(BoxCastData); } }
		il2cpp_codegen_initobj((&V_0), sizeof(BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3));
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RaycastHit Kit.Physic.BoxCastData::get_hitResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___hit_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 _returnValue;
	_returnValue = BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.BoxCastData::set_hitResult(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_set_hitResult_mB95FA30F706B30FD894B58979EF6183D033FB4D5 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___hit_5 = L_0;
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData_set_hitResult_mB95FA30F706B30FD894B58979EF6183D033FB4D5_AdjustorThunk (RuntimeObject* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData_set_hitResult_mB95FA30F706B30FD894B58979EF6183D033FB4D5_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean Kit.Physic.BoxCastData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool hitted { get { return hit.transform != null; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = (&__this->___hit_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.BoxCastData::get_hitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxCastData_get_hitCount_mC236900E8E10AA04B4DCD2FA1E1C9A816FE9B66F (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoxCastData_get_hitCount_mC236900E8E10AA04B4DCD2FA1E1C9A816FE9B66F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoxCastData_get_hitCount_mC236900E8E10AA04B4DCD2FA1E1C9A816FE9B66F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.BoxCastData::set_hitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_set_hitCount_mD3BCDE5C720CC8462F0ED326FBF58A6D27FCD967 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData_set_hitCount_mD3BCDE5C720CC8462F0ED326FBF58A6D27FCD967_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData_set_hitCount_mD3BCDE5C720CC8462F0ED326FBF58A6D27FCD967_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Kit.Physic.BoxCastData::.ctor(UnityEngine.Ray,System.Single,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData__ctor_m138FBE75777919187EAFABD6BE1146ED9D443CCB (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0__ray, float ___1__maxDistance, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__localRotation, const RuntimeMethod* method) 
{
	{
		// : this(_ray.origin, _halfExtends, _ray.direction, _localRotation, _maxDistance)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0__ray), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___2__halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0__ray), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___3__localRotation;
		float L_4 = ___1__maxDistance;
		BoxCastData__ctor_mE3DFE216030E8539B0D5F6E4068ABD80EE76DEBF(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// { }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData__ctor_m138FBE75777919187EAFABD6BE1146ED9D443CCB_AdjustorThunk (RuntimeObject* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0__ray, float ___1__maxDistance, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__localRotation, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData__ctor_m138FBE75777919187EAFABD6BE1146ED9D443CCB(_thisAdjusted, ___0__ray, ___1__maxDistance, ___2__halfExtends, ___3__localRotation, method);
}
// System.Void Kit.Physic.BoxCastData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData__ctor_mE3DFE216030E8539B0D5F6E4068ABD80EE76DEBF (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__localRotation, float ___4__maxDistance, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B2_0 = NULL;
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B1_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B3_1 = NULL;
	{
		// : this()
		il2cpp_codegen_initobj(__this, sizeof(BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3));
		// center = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___center_0 = L_0;
		// direction = _direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___2__direction;
		__this->___direction_2 = L_1;
		// maxDistance = _maxDistance;
		float L_2 = ___4__maxDistance;
		__this->___maxDistance_3 = L_2;
		// halfExtends = _halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1__halfExtends;
		__this->___halfExtends_1 = L_3;
		// orientation = (_localRotation == default(Quaternion)) ? Quaternion.identity : _localRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___3__localRotation;
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_4, L_5, NULL);
		G_B1_0 = __this;
		if (L_6)
		{
			G_B2_0 = __this;
			goto IL_003b;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___3__localRotation;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0040;
	}

IL_003b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0040:
	{
		G_B3_1->___orientation_4 = G_B3_0;
		// hit = new RaycastHit();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->___hit_5);
		il2cpp_codegen_initobj(L_9, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData__ctor_mE3DFE216030E8539B0D5F6E4068ABD80EE76DEBF_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__localRotation, float ___4__maxDistance, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData__ctor_mE3DFE216030E8539B0D5F6E4068ABD80EE76DEBF(_thisAdjusted, ___0__origin, ___1__halfExtends, ___2__direction, ___3__localRotation, ___4__maxDistance, method);
}
// System.Boolean Kit.Physic.BoxCastData::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxCastData_BoxCast_mFA2399FED2716EAF654788092770697F15BEBD02 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3__raycastHit, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4__orientation, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B2_0 = NULL;
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B3_1 = NULL;
	{
		// Update(_center, _halfExtends, _direction, _orientation, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2__direction;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___4__orientation;
		float L_4 = ___5__maxDistance;
		BoxCastData_Update_m981A928517CABAD2D512783D5683965D36B4E0F0(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// bool tmp = Physics.BoxCast(_center, _halfExtends, _direction, out _raycastHit, _orientation, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0__center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1__halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___2__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_8 = ___3__raycastHit;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___4__orientation;
		float L_10 = ___5__maxDistance;
		int32_t L_11 = ___6__layerMask;
		int32_t L_12 = ___7__queryTriggerInteraction;
		bool L_13;
		L_13 = Physics_BoxCast_mB641B1C6FAB006950E3FB982FA42631231F496F0(L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		V_0 = L_13;
		// hit = _raycastHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_14 = ___3__raycastHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_15 = (*(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)L_14);
		__this->___hit_5 = L_15;
		// hitCount = tmp ? 1 : 0;
		bool L_16 = V_0;
		G_B1_0 = __this;
		if (L_16)
		{
			G_B2_0 = __this;
			goto IL_0034;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0035:
	{
		BoxCastData_set_hitCount_mD3BCDE5C720CC8462F0ED326FBF58A6D27FCD967_inline(G_B3_1, G_B3_0, NULL);
		// return tmp;
		bool L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C  bool BoxCastData_BoxCast_mFA2399FED2716EAF654788092770697F15BEBD02_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3__raycastHit, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4__orientation, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = BoxCastData_BoxCast_mFA2399FED2716EAF654788092770697F15BEBD02(_thisAdjusted, ___0__center, ___1__halfExtends, ___2__direction, ___3__raycastHit, ___4__orientation, ___5__maxDistance, ___6__layerMask, ___7__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.BoxCastData::BoxCast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxCastData_BoxCast_mDB70440FAEED4DA6F306F129C34681A8D9AD37B8 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__orientation, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return BoxCast(_center, _halfExtends, _direction, out hit, _orientation, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = (&__this->___hit_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___3__orientation;
		float L_5 = ___4__maxDistance;
		int32_t L_6 = ___5__layerMask;
		int32_t L_7 = ___6__queryTriggerInteraction;
		bool L_8;
		L_8 = BoxCastData_BoxCast_mFA2399FED2716EAF654788092770697F15BEBD02(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool BoxCastData_BoxCast_mDB70440FAEED4DA6F306F129C34681A8D9AD37B8_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__orientation, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = BoxCastData_BoxCast_mDB70440FAEED4DA6F306F129C34681A8D9AD37B8(_thisAdjusted, ___0__center, ___1__halfExtends, ___2__direction, ___3__orientation, ___4__maxDistance, ___5__layerMask, ___6__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.BoxCastData::BoxCast(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxCastData_BoxCast_mF3402501C04B3307CD2E84F29422A24E80271227 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return BoxCast(center, halfExtends, direction, out hit, orientation, maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___center_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___halfExtends_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___direction_2;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = (&__this->___hit_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->___orientation_4;
		float L_5 = __this->___maxDistance_3;
		int32_t L_6 = ___0__layerMask;
		int32_t L_7 = ___1__queryTriggerInteraction;
		bool L_8;
		L_8 = BoxCastData_BoxCast_mFA2399FED2716EAF654788092770697F15BEBD02(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool BoxCastData_BoxCast_mF3402501C04B3307CD2E84F29422A24E80271227_AdjustorThunk (RuntimeObject* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	bool _returnValue;
	_returnValue = BoxCastData_BoxCast_mF3402501C04B3307CD2E84F29422A24E80271227(_thisAdjusted, ___0__layerMask, ___1__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.BoxCastData::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],UnityEngine.Quaternion,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxCastData_BoxCastNonAlloc_mE51003B54319F59EEDDFC34875B3F75D4342407E (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___3__raycastHits, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4__orientation, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B2_0 = NULL;
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B1_0 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B3_1 = NULL;
	{
		// Update(_center, _halfExtends, _direction, _orientation, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2__direction;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___4__orientation;
		float L_4 = ___5__maxDistance;
		BoxCastData_Update_m981A928517CABAD2D512783D5683965D36B4E0F0(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// hitCount = Physics.BoxCastNonAlloc(_center, _halfExtends, _direction, _raycastHits, _orientation, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0__center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1__halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___2__direction;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_8 = ___3__raycastHits;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___4__orientation;
		float L_10 = ___5__maxDistance;
		int32_t L_11 = ___6__layerMask;
		int32_t L_12 = ___7__queryTriggerInteraction;
		int32_t L_13;
		L_13 = Physics_BoxCastNonAlloc_m88245841A55DC2FF1C2334AAFD4A7667698B4A52(L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		BoxCastData_set_hitCount_mD3BCDE5C720CC8462F0ED326FBF58A6D27FCD967_inline(__this, L_13, NULL);
		// hit = (hitCount > 0) ? _raycastHits[0] : default(RaycastHit);
		int32_t L_14;
		L_14 = BoxCastData_get_hitCount_mC236900E8E10AA04B4DCD2FA1E1C9A816FE9B66F_inline(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_15 = V_0;
		G_B3_0 = L_15;
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_003a:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_16 = ___3__raycastHits;
		NullCheck(L_16);
		int32_t L_17 = 0;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		G_B3_0 = L_18;
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		G_B3_1->___hit_5 = G_B3_0;
		// return hitCount;
		int32_t L_19;
		L_19 = BoxCastData_get_hitCount_mC236900E8E10AA04B4DCD2FA1E1C9A816FE9B66F_inline(__this, NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C  int32_t BoxCastData_BoxCastNonAlloc_mE51003B54319F59EEDDFC34875B3F75D4342407E_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___3__raycastHits, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___4__orientation, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoxCastData_BoxCastNonAlloc_mE51003B54319F59EEDDFC34875B3F75D4342407E(_thisAdjusted, ___0__center, ___1__halfExtends, ___2__direction, ___3__raycastHits, ___4__orientation, ___5__maxDistance, ___6__layerMask, ___7__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.BoxCastData::BoxCastNonAlloc(UnityEngine.RaycastHit[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxCastData_BoxCastNonAlloc_m9933A60F4F5D6F4CF75415C3113F7AF0EFF4914B (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return BoxCastNonAlloc(center, halfExtends, direction, _raycastHits, orientation, maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___center_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___halfExtends_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___direction_2;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_3 = ___0__raycastHits;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->___orientation_4;
		float L_5 = __this->___maxDistance_3;
		int32_t L_6 = ___1__layerMask;
		int32_t L_7 = ___2__queryTriggerInteraction;
		int32_t L_8;
		L_8 = BoxCastData_BoxCastNonAlloc_mE51003B54319F59EEDDFC34875B3F75D4342407E(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t BoxCastData_BoxCastNonAlloc_m9933A60F4F5D6F4CF75415C3113F7AF0EFF4914B_AdjustorThunk (RuntimeObject* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoxCastData_BoxCastNonAlloc_m9933A60F4F5D6F4CF75415C3113F7AF0EFF4914B(_thisAdjusted, ___0__raycastHits, ___1__layerMask, ___2__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Void Kit.Physic.BoxCastData::DrawGizmos(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_DrawGizmos_m6AE870B0B33CD8D09FC32F600F29D0F1B2463872 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___0_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___1_hitColor;
		G_B6_0 = L_8;
		goto IL_0034;
	}

IL_002f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0034:
	{
		___1_hitColor = G_B6_0;
		// GizmosExtend.DrawBoxCastBox(center, halfExtends, orientation, direction, maxDistance, color);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___center_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___halfExtends_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = __this->___orientation_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___direction_2;
		float L_14 = __this->___maxDistance_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___0_color;
		GizmosExtend_DrawBoxCastBox_m11461E35C8AF07CE8BAD63EE0128B2A121773549(L_10, L_11, L_12, L_13, L_14, L_15, NULL);
		// if (hitted)
		bool L_16;
		L_16 = BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188(__this, NULL);
		if (!L_16)
		{
			goto IL_00cc;
		}
	}
	{
		// using (new ColorScope(hitColor))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___1_hitColor;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_1), L_17, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00be:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Vector3 point = GetRayEndPoint();
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
			L_18 = BoxCastData_GetRayEndPoint_mF1A49BCFD33D0F6D591C31D052E28A4CCC2120AB(__this, NULL);
			V_2 = L_18;
			// Gizmos.DrawLine(center, point);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___center_0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
			Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_19, L_20, NULL);
			// GizmosExtend.DrawBoxCastOnHit(center, halfExtends, orientation, direction, hitResult.distance);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___center_0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___halfExtends_1;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = __this->___orientation_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___direction_2;
			RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_25;
			L_25 = BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F_inline(__this, NULL);
			V_3 = L_25;
			float L_26;
			L_26 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_3), NULL);
			il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = V_0;
			GizmosExtend_DrawBoxCastOnHit_mA2E0F0697D28E738FD20DC951CA026A0673ACF13(L_21, L_22, L_23, L_24, L_26, L_27, NULL);
			// RaycastData.DrawHitPointReference(hitResult);
			RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_28;
			L_28 = BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F_inline(__this, NULL);
			RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0(L_28, NULL);
			// }
			goto IL_00cc;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData_DrawGizmos_m6AE870B0B33CD8D09FC32F600F29D0F1B2463872_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData_DrawGizmos_m6AE870B0B33CD8D09FC32F600F29D0F1B2463872(_thisAdjusted, ___0_color, ___1_hitColor, method);
}
// System.Void Kit.Physic.BoxCastData::DrawAllGizmos(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_DrawAllGizmos_m383B77252BF537AE61B051438EC8299E1BD8202C (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	float G_B8_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B8_2;
	memset((&G_B8_2), 0, sizeof(G_B8_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_3;
	memset((&G_B8_3), 0, sizeof(G_B8_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_4;
	memset((&G_B8_4), 0, sizeof(G_B8_4));
	float G_B7_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_3;
	memset((&G_B7_3), 0, sizeof(G_B7_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_4;
	memset((&G_B7_4), 0, sizeof(G_B7_4));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	float G_B9_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B9_3;
	memset((&G_B9_3), 0, sizeof(G_B9_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_4;
	memset((&G_B9_4), 0, sizeof(G_B9_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_5;
	memset((&G_B9_5), 0, sizeof(G_B9_5));
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___2_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___3_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___3_hitColor;
		G_B6_0 = L_8;
		goto IL_0036;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0036:
	{
		___3_hitColor = G_B6_0;
		// GizmosExtend.DrawBoxCastBox(center, halfExtends, orientation, direction, maxDistance,
		//     validArraySize > 0 ? hitColor : color);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___center_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___halfExtends_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = __this->___orientation_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___direction_2;
		float L_14 = __this->___maxDistance_3;
		int32_t L_15 = ___1_validArraySize;
		G_B7_0 = L_14;
		G_B7_1 = L_13;
		G_B7_2 = L_12;
		G_B7_3 = L_11;
		G_B7_4 = L_10;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			G_B8_0 = L_14;
			G_B8_1 = L_13;
			G_B8_2 = L_12;
			G_B8_3 = L_11;
			G_B8_4 = L_10;
			goto IL_005d;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___2_color;
		G_B9_0 = L_16;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		G_B9_5 = G_B7_4;
		goto IL_005f;
	}

IL_005d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___3_hitColor;
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		G_B9_5 = G_B8_4;
	}

IL_005f:
	{
		GizmosExtend_DrawBoxCastBox_m11461E35C8AF07CE8BAD63EE0128B2A121773549(G_B9_5, G_B9_4, G_B9_3, G_B9_2, G_B9_1, G_B9_0, NULL);
		// if (validArraySize > 0)
		int32_t L_18 = ___1_validArraySize;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		// using (new ColorScope(hitColor))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___3_hitColor;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_1), L_19, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				V_2 = 0;
				goto IL_0086_1;
			}

IL_0075_1:
			{
				// RaycastData.DrawHitPointReference(raycastHits[i]);
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_20 = ___0_raycastHits;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_21 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_20);
				int32_t L_22 = V_2;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0(L_24, NULL);
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				int32_t L_25 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			}

IL_0086_1:
			{
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				int32_t L_26 = V_2;
				int32_t L_27 = ___1_validArraySize;
				if ((((int32_t)L_26) >= ((int32_t)L_27)))
				{
					goto IL_0091_1;
				}
			}
			{
				int32_t L_28 = V_2;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_29 = ___0_raycastHits;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_30 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_29);
				NullCheck(L_30);
				if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
				{
					goto IL_0075_1;
				}
			}

IL_0091_1:
			{
				goto IL_00a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData_DrawAllGizmos_m383B77252BF537AE61B051438EC8299E1BD8202C_AdjustorThunk (RuntimeObject* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData_DrawAllGizmos_m383B77252BF537AE61B051438EC8299E1BD8202C(_thisAdjusted, ___0_raycastHits, ___1_validArraySize, ___2_color, ___3_hitColor, method);
}
// System.Void Kit.Physic.BoxCastData::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_Update_m981A928517CABAD2D512783D5683965D36B4E0F0 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__orientation, float ___4__maxDistance, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B2_0 = NULL;
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B1_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B3_1 = NULL;
	{
		// Update(_center, _direction, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___2__direction;
		float L_2 = ___4__maxDistance;
		BoxCastData_Update_mE2674DC5097D992B93F3EC261F5E8A26B749A9BA(__this, L_0, L_1, L_2, NULL);
		// halfExtends = _halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1__halfExtends;
		__this->___halfExtends_1 = L_3;
		// orientation = (_orientation == default(Quaternion)) ? Quaternion.identity : _orientation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___3__orientation;
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_4, L_5, NULL);
		G_B1_0 = __this;
		if (L_6)
		{
			G_B2_0 = __this;
			goto IL_0028;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___3__orientation;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_0028:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		G_B3_1->___orientation_4 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData_Update_m981A928517CABAD2D512783D5683965D36B4E0F0_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3__orientation, float ___4__maxDistance, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData_Update_m981A928517CABAD2D512783D5683965D36B4E0F0(_thisAdjusted, ___0__center, ___1__halfExtends, ___2__direction, ___3__orientation, ___4__maxDistance, method);
}
// System.Void Kit.Physic.BoxCastData::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_Update_mE2674DC5097D992B93F3EC261F5E8A26B749A9BA (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) 
{
	{
		// center = _center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__center;
		__this->___center_0 = L_0;
		// direction = _direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__direction;
		__this->___direction_2 = L_1;
		// maxDistance = _maxDistance;
		float L_2 = ___2__maxDistance;
		__this->___maxDistance_3 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData_Update_mE2674DC5097D992B93F3EC261F5E8A26B749A9BA_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData_Update_mE2674DC5097D992B93F3EC261F5E8A26B749A9BA(_thisAdjusted, ___0__center, ___1__direction, ___2__maxDistance, method);
}
// System.Void Kit.Physic.BoxCastData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCastData_Reset_mABF2F82297F406C47EA8B6A723E20689567F8978 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) 
{
	{
		// center = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___center_0 = L_0;
		// direction = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___direction_2 = L_1;
		// halfExtends = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___halfExtends_1 = L_2;
		// maxDistance = 0f;
		__this->___maxDistance_3 = (0.0f);
		// orientation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___orientation_4 = L_3;
		// hit = new RaycastHit();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___hit_5);
		il2cpp_codegen_initobj(L_4, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxCastData_Reset_mABF2F82297F406C47EA8B6A723E20689567F8978_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	BoxCastData_Reset_mABF2F82297F406C47EA8B6A723E20689567F8978(_thisAdjusted, method);
}
// System.String Kit.Physic.BoxCastData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoxCastData_ToString_m2D6AEBC8887C524C7AF6AF4D3163115956140578 (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FCB558390DBD1CD8CB908BA9AF2EB69059913D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35EAC1FFBECF4823C17FC1D459D5C28A1B852B0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (hitted) ?
		//     string.Format("origin {0:F2}, Distance: {1:F2}, Direction : {3:F2}, Hit: {4} ({5:F2})", center, maxDistance, direction, hit.transform.name, hit.point) :
		//     string.Format("origin {0:F2}, Distance: {1:F2}, Direction : {3:F2}, Hit: None", center, maxDistance, direction);
		bool L_0;
		L_0 = BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188(__this, NULL);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___center_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___maxDistance_3;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___direction_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7;
		RuntimeObject* L_9 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral09FCB558390DBD1CD8CB908BA9AF2EB69059913D, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0034:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___center_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		float L_17 = __this->___maxDistance_3;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___direction_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21;
		RuntimeObject* L_23 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_25 = (&__this->___hit_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_25, NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_29 = (&__this->___hit_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30;
		RuntimeObject* L_32 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral35EAC1FFBECF4823C17FC1D459D5C28A1B852B0E, L_28, NULL);
		return L_33;
	}
}
IL2CPP_EXTERN_C  String_t* BoxCastData_ToString_m2D6AEBC8887C524C7AF6AF4D3163115956140578_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BoxCastData_ToString_m2D6AEBC8887C524C7AF6AF4D3163115956140578(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.Physic.BoxCastData::GetRayEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCastData_GetRayEndPoint_mF1A49BCFD33D0F6D591C31D052E28A4CCC2120AB (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return center + direction.normalized * ((hitted) ? hitResult.distance : maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___center_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___direction_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_1, NULL);
		bool L_3;
		L_3 = BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188(__this, NULL);
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		float L_4 = __this->___maxDistance_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002f;
	}

IL_0021:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_5;
		L_5 = BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F_inline(__this, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B3_1, G_B3_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B3_2, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCastData_GetRayEndPoint_mF1A49BCFD33D0F6D591C31D052E28A4CCC2120AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = BoxCastData_GetRayEndPoint_mF1A49BCFD33D0F6D591C31D052E28A4CCC2120AB(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Kit.Physic.BoxOverlapData Kit.Physic.BoxOverlapData::get_NONE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465 BoxOverlapData_get_NONE_mA5AFE1114EABD34EDCE8310D7C01A45D5EF9BE5A (const RuntimeMethod* method) 
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static BoxOverlapData NONE { get { return default(BoxOverlapData); } }
		il2cpp_codegen_initobj((&V_0), sizeof(BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465));
		BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465 L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Kit.Physic.BoxOverlapData::get_hitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxOverlapData_get_hitCount_m8505E89DD5CBE80A1F1EBFD2D35868C88C0FB869 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoxOverlapData_get_hitCount_m8505E89DD5CBE80A1F1EBFD2D35868C88C0FB869_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoxOverlapData_get_hitCount_m8505E89DD5CBE80A1F1EBFD2D35868C88C0FB869_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.BoxOverlapData::set_hitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean Kit.Physic.BoxOverlapData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoxOverlapData_get_hitted_mFF6BE85F1E92EA07D9C6AFA78A00D20F0CBDAE86 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) 
{
	{
		// public bool hitted { get { return hitCount > 0; } }
		int32_t L_0;
		L_0 = BoxOverlapData_get_hitCount_m8505E89DD5CBE80A1F1EBFD2D35868C88C0FB869_inline(__this, NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BoxOverlapData_get_hitted_mFF6BE85F1E92EA07D9C6AFA78A00D20F0CBDAE86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	bool _returnValue;
	_returnValue = BoxOverlapData_get_hitted_mFF6BE85F1E92EA07D9C6AFA78A00D20F0CBDAE86(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.BoxOverlapData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData__ctor_m6052A81164E83AF3D2D2B535A4E46890343A6584 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, const RuntimeMethod* method) 
{
	{
		// public BoxOverlapData(Vector3 _origin, Vector3 _halfExtends, Quaternion _orientation) : this()
		il2cpp_codegen_initobj(__this, sizeof(BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465));
		// origin = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___origin_0 = L_0;
		// halfExtends = _halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__halfExtends;
		__this->___halfExtends_1 = L_1;
		// orientation = _orientation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2__orientation;
		__this->___orientation_2 = L_2;
		// hitCount = 0;
		BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9_inline(__this, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxOverlapData__ctor_m6052A81164E83AF3D2D2B535A4E46890343A6584_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	BoxOverlapData__ctor_m6052A81164E83AF3D2D2B535A4E46890343A6584(_thisAdjusted, ___0__origin, ___1__halfExtends, ___2__orientation, method);
}
// UnityEngine.Collider[] Kit.Physic.BoxOverlapData::Overlap(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* BoxOverlapData_Overlap_m99CDDC4EFBB39B1661837F6FF6CA11388B70208F (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(_origin, _halfExtends, _orientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__halfExtends;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2__orientation;
		BoxOverlapData_Update_m18B09C222DCA111CFDDB2D4A485638ED24E0E0CE(__this, L_0, L_1, L_2, NULL);
		// return Overlap(layerMask, queryTriggerInteraction);
		int32_t L_3 = ___3_layerMask;
		int32_t L_4 = ___4_queryTriggerInteraction;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5;
		L_5 = BoxOverlapData_Overlap_m995DAC83151D1A421945E3D1B6841E91B3D069E1(__this, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* BoxOverlapData_Overlap_m99CDDC4EFBB39B1661837F6FF6CA11388B70208F_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* _returnValue;
	_returnValue = BoxOverlapData_Overlap_m99CDDC4EFBB39B1661837F6FF6CA11388B70208F(_thisAdjusted, ___0__origin, ___1__halfExtends, ___2__orientation, ___3_layerMask, ___4_queryTriggerInteraction, method);
	return _returnValue;
}
// UnityEngine.Collider[] Kit.Physic.BoxOverlapData::Overlap(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* BoxOverlapData_Overlap_m995DAC83151D1A421945E3D1B6841E91B3D069E1 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method) 
{
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	{
		// Collider[] rst = Physics.OverlapBox(origin, halfExtends, orientation, layerMask, queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___halfExtends_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___orientation_2;
		int32_t L_3 = ___0_layerMask;
		int32_t L_4 = ___1_queryTriggerInteraction;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5;
		L_5 = Physics_OverlapBox_mC38B579DEFD0341FCAEF8B8EC8B1E37A2C12366D(L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// hitCount = rst.Length;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = V_0;
		NullCheck(L_6);
		BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9_inline(__this, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		// return rst;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* BoxOverlapData_Overlap_m995DAC83151D1A421945E3D1B6841E91B3D069E1_AdjustorThunk (RuntimeObject* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* _returnValue;
	_returnValue = BoxOverlapData_Overlap_m995DAC83151D1A421945E3D1B6841E91B3D069E1(_thisAdjusted, ___0_layerMask, ___1_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.BoxOverlapData::OverlapNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxOverlapData_OverlapNonAlloc_m94714B9283EBAE3A1378568DC130B0AD1532DA1B (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___3_results, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(_origin, _halfExtends, _orientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__halfExtends;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2__orientation;
		BoxOverlapData_Update_m18B09C222DCA111CFDDB2D4A485638ED24E0E0CE(__this, L_0, L_1, L_2, NULL);
		// return OverlapNonAlloc(ref results, layerMask, queryTriggerInteraction);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_3 = ___3_results;
		int32_t L_4 = ___4_layerMask;
		int32_t L_5 = ___5_queryTriggerInteraction;
		int32_t L_6;
		L_6 = BoxOverlapData_OverlapNonAlloc_m428135F78F3F5355E8BE1F71A284344A8BF5BD9B(__this, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t BoxOverlapData_OverlapNonAlloc_m94714B9283EBAE3A1378568DC130B0AD1532DA1B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___3_results, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoxOverlapData_OverlapNonAlloc_m94714B9283EBAE3A1378568DC130B0AD1532DA1B(_thisAdjusted, ___0__origin, ___1__halfExtends, ___2__orientation, ___3_results, ___4_layerMask, ___5_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.BoxOverlapData::OverlapNonAlloc(UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoxOverlapData_OverlapNonAlloc_m428135F78F3F5355E8BE1F71A284344A8BF5BD9B (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// hitCount = Physics.OverlapBoxNonAlloc(origin, halfExtends, results, orientation, layerMask, queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___halfExtends_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_2 = ___0_results;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->___orientation_2;
		int32_t L_5 = ___1_layerMask;
		int32_t L_6 = ___2_queryTriggerInteraction;
		int32_t L_7;
		L_7 = Physics_OverlapBoxNonAlloc_m1D43D10CD88EF2D5440601D3CD14CA4EB449A295(L_0, L_1, L_3, L_4, L_5, L_6, NULL);
		BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9_inline(__this, L_7, NULL);
		// return hitCount;
		int32_t L_8;
		L_8 = BoxOverlapData_get_hitCount_m8505E89DD5CBE80A1F1EBFD2D35868C88C0FB869_inline(__this, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t BoxOverlapData_OverlapNonAlloc_m428135F78F3F5355E8BE1F71A284344A8BF5BD9B_AdjustorThunk (RuntimeObject* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoxOverlapData_OverlapNonAlloc_m428135F78F3F5355E8BE1F71A284344A8BF5BD9B(_thisAdjusted, ___0_results, ___1_layerMask, ___2_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Void Kit.Physic.BoxOverlapData::DrawOverlapGizmos(UnityEngine.Collider[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData_DrawOverlapGizmos_mBF2CE0F922540AA73BEB87F559E96B4DC72EF649 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B10_0 = NULL;
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B9_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B11_1 = NULL;
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___2_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___3_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___3_hitColor;
		G_B6_0 = L_8;
		goto IL_0036;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0036:
	{
		___3_hitColor = G_B6_0;
		// if (validArraySize == 0)
		int32_t L_10 = ___1_validArraySize;
		if (L_10)
		{
			goto IL_0054;
		}
	}
	{
		// GizmosExtend.DrawBox(origin, halfExtends, orientation, color);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___halfExtends_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = __this->___orientation_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___2_color;
		GizmosExtend_DrawBox_m78C799ED32172303833806513374F4AECDE9DE97(L_11, L_12, L_13, L_14, NULL);
		return;
	}

IL_0054:
	{
		// GizmosExtend.DrawBox(origin, halfExtends, orientation, hitColor);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___halfExtends_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = __this->___orientation_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___3_hitColor;
		GizmosExtend_DrawBox_m78C799ED32172303833806513374F4AECDE9DE97(L_15, L_16, L_17, L_18, NULL);
		// using (new ColorScope(validArraySize > 0 ? hitColor : color))
		int32_t L_19 = ___1_validArraySize;
		G_B9_0 = (&V_1);
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			G_B10_0 = (&V_1);
			goto IL_0076;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___2_color;
		G_B11_0 = L_20;
		G_B11_1 = G_B9_0;
		goto IL_0078;
	}

IL_0076:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = ___3_hitColor;
		G_B11_0 = L_21;
		G_B11_1 = G_B10_0;
	}

IL_0078:
	{
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5(G_B11_1, G_B11_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ab:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				V_2 = 0;
				goto IL_009e_1;
			}

IL_0081_1:
			{
				// Gizmos.DrawLine(origin, colliderResult[i].transform.position);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___origin_0;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_23 = ___0_colliderResult;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_24 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_23);
				int32_t L_25 = V_2;
				NullCheck(L_24);
				int32_t L_26 = L_25;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				NullCheck(L_27);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
				L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
				NullCheck(L_28);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
				L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_22, L_29, NULL);
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				int32_t L_30 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
			}

IL_009e_1:
			{
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				int32_t L_31 = V_2;
				int32_t L_32 = ___1_validArraySize;
				if ((((int32_t)L_31) >= ((int32_t)L_32)))
				{
					goto IL_00a9_1;
				}
			}
			{
				int32_t L_33 = V_2;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_34 = ___0_colliderResult;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_35 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_34);
				NullCheck(L_35);
				if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
				{
					goto IL_0081_1;
				}
			}

IL_00a9_1:
			{
				// }
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxOverlapData_DrawOverlapGizmos_mBF2CE0F922540AA73BEB87F559E96B4DC72EF649_AdjustorThunk (RuntimeObject* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	BoxOverlapData_DrawOverlapGizmos_mBF2CE0F922540AA73BEB87F559E96B4DC72EF649(_thisAdjusted, ___0_colliderResult, ___1_validArraySize, ___2_color, ___3_hitColor, method);
}
// System.Void Kit.Physic.BoxOverlapData::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData_Update_m18B09C222DCA111CFDDB2D4A485638ED24E0E0CE (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, const RuntimeMethod* method) 
{
	{
		// origin = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___origin_0 = L_0;
		// orientation = _orientation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___2__orientation;
		__this->___orientation_2 = L_1;
		// halfExtends = _halfExtends;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1__halfExtends;
		__this->___halfExtends_1 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxOverlapData_Update_m18B09C222DCA111CFDDB2D4A485638ED24E0E0CE_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__halfExtends, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2__orientation, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	BoxOverlapData_Update_m18B09C222DCA111CFDDB2D4A485638ED24E0E0CE(_thisAdjusted, ___0__origin, ___1__halfExtends, ___2__orientation, method);
}
// System.Void Kit.Physic.BoxOverlapData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxOverlapData_Reset_m37BFD7E99645CE966A37A5587EAC84DBE84AD2A8 (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// origin = halfExtends = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		V_0 = L_1;
		__this->___halfExtends_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		__this->___origin_0 = L_2;
		// orientation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___orientation_2 = L_3;
		// hitCount = 0;
		BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9_inline(__this, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoxOverlapData_Reset_m37BFD7E99645CE966A37A5587EAC84DBE84AD2A8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	BoxOverlapData_Reset_m37BFD7E99645CE966A37A5587EAC84DBE84AD2A8(_thisAdjusted, method);
}
// System.String Kit.Physic.BoxOverlapData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoxOverlapData_ToString_m9263B8C9705DDF988A85ABEFAA8CC0286240113C (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04119E78E6ED8B7871F708048BDC489D7D657083);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FB99A102E6AB335033D9BF339F11AB3A7BBBA7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (hitted) ?
		//     string.Format("Origin: {0:F2}, Extends: {1:F2}, Hit: {2}", origin, halfExtends, hitCount) :
		//     string.Format("Origin: {0:F2}, Extends: {1:F2}, Hit: None", origin, halfExtends);
		bool L_0;
		L_0 = BoxOverlapData_get_hitted_mFF6BE85F1E92EA07D9C6AFA78A00D20F0CBDAE86(__this, NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___halfExtends_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral04119E78E6ED8B7871F708048BDC489D7D657083, L_3, L_6, NULL);
		return L_7;
	}

IL_0029:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___halfExtends_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11;
		RuntimeObject* L_13 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_12);
		int32_t L_14;
		L_14 = BoxOverlapData_get_hitCount_m8505E89DD5CBE80A1F1EBFD2D35868C88C0FB869_inline(__this, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral49FB99A102E6AB335033D9BF339F11AB3A7BBBA7, L_10, L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* BoxOverlapData_ToString_m9263B8C9705DDF988A85ABEFAA8CC0286240113C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BoxOverlapData_ToString_m9263B8C9705DDF988A85ABEFAA8CC0286240113C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Kit.Physic.CapsuleCastData Kit.Physic.CapsuleCastData::get_NONE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C CapsuleCastData_get_NONE_mD839DE54880F011E81CCEF01E761DDACC063B034 (const RuntimeMethod* method) 
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static CapsuleCastData NONE { get { return default(CapsuleCastData); } }
		il2cpp_codegen_initobj((&V_0), sizeof(CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C));
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RaycastHit Kit.Physic.CapsuleCastData::get_hitResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___hit_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 _returnValue;
	_returnValue = CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleCastData::set_hitResult(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_set_hitResult_m8FCAB186839C631894E970567A7EE7079E5D74DB (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___hit_5 = L_0;
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData_set_hitResult_m8FCAB186839C631894E970567A7EE7079E5D74DB_AdjustorThunk (RuntimeObject* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData_set_hitResult_m8FCAB186839C631894E970567A7EE7079E5D74DB_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean Kit.Physic.CapsuleCastData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_get_hitted_m89C3C7558AA4CEE173A84B6A332DD5EF1673B9DE (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool hitted { get { return hit.transform != null; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = (&__this->___hit_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool CapsuleCastData_get_hitted_m89C3C7558AA4CEE173A84B6A332DD5EF1673B9DE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	bool _returnValue;
	_returnValue = CapsuleCastData_get_hitted_m89C3C7558AA4CEE173A84B6A332DD5EF1673B9DE(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleCastData::get_hitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_get_hitCount_m2DDBA73C2FB3829312EF970F0A0C892508F69342 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleCastData_get_hitCount_m2DDBA73C2FB3829312EF970F0A0C892508F69342_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleCastData_get_hitCount_m2DDBA73C2FB3829312EF970F0A0C892508F69342_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleCastData::set_hitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_set_hitCount_mF215AD2DC02DE85ADE601A78906BCB764CECC0A9 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData_set_hitCount_mF215AD2DC02DE85ADE601A78906BCB764CECC0A9_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData_set_hitCount_mF215AD2DC02DE85ADE601A78906BCB764CECC0A9_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Kit.Physic.CapsuleCastData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData__ctor_m75988A19A046954A0C8893DD789C601742169986 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, const RuntimeMethod* method) 
{
	{
		// public CapsuleCastData(Vector3 _point1, Vector3 _point2, float _radius, Vector3 _direction, float _maxDistance) : this()
		il2cpp_codegen_initobj(__this, sizeof(CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C));
		// point1 = _point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point1;
		__this->___point1_0 = L_0;
		// point2 = _point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point2;
		__this->___point2_1 = L_1;
		// radius = _radius;
		float L_2 = ___2__radius;
		__this->___radius_2 = L_2;
		// direction = _direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3__direction;
		__this->___direction_3 = L_3;
		// maxDistance = _maxDistance;
		float L_4 = ___4__maxDistance;
		__this->___maxDistance_4 = L_4;
		// hit = default(RaycastHit);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_5 = (&__this->___hit_5);
		il2cpp_codegen_initobj(L_5, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData__ctor_m75988A19A046954A0C8893DD789C601742169986_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData__ctor_m75988A19A046954A0C8893DD789C601742169986(_thisAdjusted, ___0__point1, ___1__point2, ___2__radius, ___3__direction, ___4__maxDistance, method);
}
// System.Void Kit.Physic.CapsuleCastData::.ctor(Kit.Physic.CapsuleData,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData__ctor_m1F4376210E1C32FBC9F5CCA15C2F11A5A07F1022 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) 
{
	{
		// this(capsuleData.p0, capsuleData.p1, capsuleData.radius, _direction, _maxDistance) { }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6((&___0_capsuleData), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9((&___0_capsuleData), NULL);
		float L_2;
		L_2 = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline((&___0_capsuleData), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1__direction;
		float L_4 = ___2__maxDistance;
		CapsuleCastData__ctor_m75988A19A046954A0C8893DD789C601742169986(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// this(capsuleData.p0, capsuleData.p1, capsuleData.radius, _direction, _maxDistance) { }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData__ctor_m1F4376210E1C32FBC9F5CCA15C2F11A5A07F1022_AdjustorThunk (RuntimeObject* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData__ctor_m1F4376210E1C32FBC9F5CCA15C2F11A5A07F1022(_thisAdjusted, ___0_capsuleData, ___1__direction, ___2__maxDistance, method);
}
// System.Void Kit.Physic.CapsuleCastData::.ctor(UnityEngine.CapsuleCollider,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData__ctor_m5B05E10BBAB273EB56986E5FF613E0BAD3B93831 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_collider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) 
{
	{
		// this((CapsuleData)collider, _direction, _maxDistance) { }
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_collider;
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_1;
		L_1 = CapsuleData_op_Explicit_m24EC285A3353C6DB4560E4FAC95ED8C39DD1FFF1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1__direction;
		float L_3 = ___2__maxDistance;
		CapsuleCastData__ctor_m1F4376210E1C32FBC9F5CCA15C2F11A5A07F1022(__this, L_1, L_2, L_3, NULL);
		// this((CapsuleData)collider, _direction, _maxDistance) { }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData__ctor_m5B05E10BBAB273EB56986E5FF613E0BAD3B93831_AdjustorThunk (RuntimeObject* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_collider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData__ctor_m5B05E10BBAB273EB56986E5FF613E0BAD3B93831(_thisAdjusted, ___0_collider, ___1__direction, ___2__maxDistance, method);
}
// System.Boolean Kit.Physic.CapsuleCastData::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_CapsuleCast_mFE8F15A7E11E06D79E80ADA839F9D4CEFD64ACC3 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___4__raycastHit, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method) 
{
	bool V_0 = false;
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* G_B2_0 = NULL;
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* G_B3_1 = NULL;
	{
		// Update(_point1, _point2, _radius, _direction, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point2;
		float L_2 = ___2__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3__direction;
		float L_4 = ___5__maxDistance;
		CapsuleCastData_Update_m5F06B06A508E9DF8ACD552A82F31CCCF57C73051(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// bool tmp = Physics.CapsuleCast(_point1, _point2, _radius, _direction, out _raycastHit, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0__point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1__point2;
		float L_7 = ___2__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___3__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = ___4__raycastHit;
		float L_10 = ___5__maxDistance;
		int32_t L_11 = ___6__layerMask;
		int32_t L_12 = ___7__queryTriggerInteraction;
		bool L_13;
		L_13 = Physics_CapsuleCast_mAB6E13B795FAFAFE366DE88B8C7A31C54EAE9EF7(L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		V_0 = L_13;
		// hit = _raycastHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_14 = ___4__raycastHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_15 = (*(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)L_14);
		__this->___hit_5 = L_15;
		// hitCount = tmp ? 1 : 0;
		bool L_16 = V_0;
		G_B1_0 = __this;
		if (L_16)
		{
			G_B2_0 = __this;
			goto IL_0034;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0035:
	{
		CapsuleCastData_set_hitCount_mF215AD2DC02DE85ADE601A78906BCB764CECC0A9_inline(G_B3_1, G_B3_0, NULL);
		// return tmp;
		bool L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C  bool CapsuleCastData_CapsuleCast_mFE8F15A7E11E06D79E80ADA839F9D4CEFD64ACC3_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___4__raycastHit, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	bool _returnValue;
	_returnValue = CapsuleCastData_CapsuleCast_mFE8F15A7E11E06D79E80ADA839F9D4CEFD64ACC3(_thisAdjusted, ___0__point1, ___1__point2, ___2__radius, ___3__direction, ___4__raycastHit, ___5__maxDistance, ___6__layerMask, ___7__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.CapsuleCastData::CapsuleCast(Kit.Physic.CapsuleData,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_CapsuleCast_m1BC498919C25C3DB453CB7CEE88CFEABF4A0CC8A (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsule, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, int32_t ___3__layerMask, int32_t ___4__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return CapsuleCast(capsule.p0, capsule.p1, capsule.radius, _direction, out hit, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6((&___0_capsule), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9((&___0_capsule), NULL);
		float L_2;
		L_2 = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline((&___0_capsule), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___hit_5);
		float L_5 = ___2__maxDistance;
		int32_t L_6 = ___3__layerMask;
		int32_t L_7 = ___4__queryTriggerInteraction;
		bool L_8;
		L_8 = CapsuleCastData_CapsuleCast_mFE8F15A7E11E06D79E80ADA839F9D4CEFD64ACC3(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool CapsuleCastData_CapsuleCast_m1BC498919C25C3DB453CB7CEE88CFEABF4A0CC8A_AdjustorThunk (RuntimeObject* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsule, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, int32_t ___3__layerMask, int32_t ___4__queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	bool _returnValue;
	_returnValue = CapsuleCastData_CapsuleCast_m1BC498919C25C3DB453CB7CEE88CFEABF4A0CC8A(_thisAdjusted, ___0_capsule, ___1__direction, ___2__maxDistance, ___3__layerMask, ___4__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.CapsuleCastData::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_CapsuleCast_mF7108AD98965DAF02E4F851E1C9ED78A0E4AC647 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return CapsuleCast(_point1, _point2, _radius, _direction, out hit, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point2;
		float L_2 = ___2__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___hit_5);
		float L_5 = ___4__maxDistance;
		int32_t L_6 = ___5__layerMask;
		int32_t L_7 = ___6__queryTriggerInteraction;
		bool L_8;
		L_8 = CapsuleCastData_CapsuleCast_mFE8F15A7E11E06D79E80ADA839F9D4CEFD64ACC3(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool CapsuleCastData_CapsuleCast_mF7108AD98965DAF02E4F851E1C9ED78A0E4AC647_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	bool _returnValue;
	_returnValue = CapsuleCastData_CapsuleCast_mF7108AD98965DAF02E4F851E1C9ED78A0E4AC647(_thisAdjusted, ___0__point1, ___1__point2, ___2__radius, ___3__direction, ___4__maxDistance, ___5__layerMask, ___6__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.CapsuleCastData::CapsuleCast(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleCastData_CapsuleCast_m34746C8E473CED7D1CFF0FDB86931BD946E70817 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return CapsuleCast(point1, point2, radius, direction, out hit, maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___point1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___point2_1;
		float L_2 = __this->___radius_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___direction_3;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___hit_5);
		float L_5 = __this->___maxDistance_4;
		int32_t L_6 = ___0__layerMask;
		int32_t L_7 = ___1__queryTriggerInteraction;
		bool L_8;
		L_8 = CapsuleCastData_CapsuleCast_mFE8F15A7E11E06D79E80ADA839F9D4CEFD64ACC3(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool CapsuleCastData_CapsuleCast_m34746C8E473CED7D1CFF0FDB86931BD946E70817_AdjustorThunk (RuntimeObject* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	bool _returnValue;
	_returnValue = CapsuleCastData_CapsuleCast_m34746C8E473CED7D1CFF0FDB86931BD946E70817(_thisAdjusted, ___0__layerMask, ___1__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleCastData::CapsuleCastNonAlloc(UnityEngine.CapsuleCollider,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_CapsuleCastNonAlloc_m251C713F3C4D434BE80F41CEBCDFE6EF71C389F4 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return CapsuleCastNonAlloc((CapsuleData)capsuleCollider, _direction, _raycastHits, _maxDistance, _layerMask, _queryTriggerInteraction);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_capsuleCollider;
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_1;
		L_1 = CapsuleData_op_Explicit_m24EC285A3353C6DB4560E4FAC95ED8C39DD1FFF1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1__direction;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_3 = ___2__raycastHits;
		float L_4 = ___3__maxDistance;
		int32_t L_5 = ___4__layerMask;
		int32_t L_6 = ___5__queryTriggerInteraction;
		int32_t L_7;
		L_7 = CapsuleCastData_CapsuleCastNonAlloc_m4D799D6E2E4F44C15E433D2569ED503593E1A4C8(__this, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleCastData_CapsuleCastNonAlloc_m251C713F3C4D434BE80F41CEBCDFE6EF71C389F4_AdjustorThunk (RuntimeObject* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleCastData_CapsuleCastNonAlloc_m251C713F3C4D434BE80F41CEBCDFE6EF71C389F4(_thisAdjusted, ___0_capsuleCollider, ___1__direction, ___2__raycastHits, ___3__maxDistance, ___4__layerMask, ___5__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleCastData::CapsuleCastNonAlloc(Kit.Physic.CapsuleData,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_CapsuleCastNonAlloc_m4D799D6E2E4F44C15E433D2569ED503593E1A4C8 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return CapsuleCastNonAlloc(capsuleData.p0, capsuleData.p1, capsuleData.radius, _direction, _raycastHits, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6((&___0_capsuleData), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9((&___0_capsuleData), NULL);
		float L_2;
		L_2 = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline((&___0_capsuleData), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1__direction;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4 = ___2__raycastHits;
		float L_5 = ___3__maxDistance;
		int32_t L_6 = ___4__layerMask;
		int32_t L_7 = ___5__queryTriggerInteraction;
		int32_t L_8;
		L_8 = CapsuleCastData_CapsuleCastNonAlloc_m480D6D94D8211EB7E13F8AF48AE94597238C131A(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleCastData_CapsuleCastNonAlloc_m4D799D6E2E4F44C15E433D2569ED503593E1A4C8_AdjustorThunk (RuntimeObject* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleCastData_CapsuleCastNonAlloc_m4D799D6E2E4F44C15E433D2569ED503593E1A4C8(_thisAdjusted, ___0_capsuleData, ___1__direction, ___2__raycastHits, ___3__maxDistance, ___4__layerMask, ___5__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleCastData::CapsuleCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_CapsuleCastNonAlloc_m480D6D94D8211EB7E13F8AF48AE94597238C131A (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___4__raycastHits, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* G_B2_0 = NULL;
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* G_B1_0 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* G_B3_1 = NULL;
	{
		// Update(_point1, _point2, _radius, _direction, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point2;
		float L_2 = ___2__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3__direction;
		float L_4 = ___5__maxDistance;
		CapsuleCastData_Update_m5F06B06A508E9DF8ACD552A82F31CCCF57C73051(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// hitCount = Physics.CapsuleCastNonAlloc(_point1, _point2, _radius, _direction, _raycastHits, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0__point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1__point2;
		float L_7 = ___2__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___3__direction;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_9 = ___4__raycastHits;
		float L_10 = ___5__maxDistance;
		int32_t L_11 = ___6__layerMask;
		int32_t L_12 = ___7__queryTriggerInteraction;
		int32_t L_13;
		L_13 = Physics_CapsuleCastNonAlloc_m8190CE6AFACAFF3996D60D60BD110E0AC2E2583D(L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		CapsuleCastData_set_hitCount_mF215AD2DC02DE85ADE601A78906BCB764CECC0A9_inline(__this, L_13, NULL);
		// hit = (hitCount > 0) ? _raycastHits[0] : default(RaycastHit); /// to define it's being hit, <see cref="hitted"/>
		int32_t L_14;
		L_14 = CapsuleCastData_get_hitCount_m2DDBA73C2FB3829312EF970F0A0C892508F69342_inline(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_15 = V_0;
		G_B3_0 = L_15;
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_003a:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_16 = ___4__raycastHits;
		NullCheck(L_16);
		int32_t L_17 = 0;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		G_B3_0 = L_18;
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		G_B3_1->___hit_5 = G_B3_0;
		// return hitCount;
		int32_t L_19;
		L_19 = CapsuleCastData_get_hitCount_m2DDBA73C2FB3829312EF970F0A0C892508F69342_inline(__this, NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleCastData_CapsuleCastNonAlloc_m480D6D94D8211EB7E13F8AF48AE94597238C131A_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___4__raycastHits, float ___5__maxDistance, int32_t ___6__layerMask, int32_t ___7__queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleCastData_CapsuleCastNonAlloc_m480D6D94D8211EB7E13F8AF48AE94597238C131A(_thisAdjusted, ___0__point1, ___1__point2, ___2__radius, ___3__direction, ___4__raycastHits, ___5__maxDistance, ___6__layerMask, ___7__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleCastData::CapsuleCastNonAlloc(UnityEngine.RaycastHit[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCastData_CapsuleCastNonAlloc_m27EBA0B300141248BD8518BCF9F997F26CF03F25 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return CapsuleCastNonAlloc(point1, point2, radius, direction, _raycastHits, maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___point1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___point2_1;
		float L_2 = __this->___radius_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___direction_3;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4 = ___0__raycastHits;
		float L_5 = __this->___maxDistance_4;
		int32_t L_6 = ___1__layerMask;
		int32_t L_7 = ___2__queryTriggerInteraction;
		int32_t L_8;
		L_8 = CapsuleCastData_CapsuleCastNonAlloc_m480D6D94D8211EB7E13F8AF48AE94597238C131A(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleCastData_CapsuleCastNonAlloc_m27EBA0B300141248BD8518BCF9F997F26CF03F25_AdjustorThunk (RuntimeObject* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleCastData_CapsuleCastNonAlloc_m27EBA0B300141248BD8518BCF9F997F26CF03F25(_thisAdjusted, ___0__raycastHits, ___1__layerMask, ___2__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleCastData::DrawGizmos(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_DrawGizmos_mA288E9F959D8791F9C9B69BDB8DD102D421F107A (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___0_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___1_hitColor;
		G_B6_0 = L_8;
		goto IL_0034;
	}

IL_002f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0034:
	{
		___1_hitColor = G_B6_0;
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___0_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_1), L_10, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0186:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3[] ep = GetEndPoints(maxDistance);
				float L_11 = __this->___maxDistance_4;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12;
				L_12 = CapsuleCastData_GetEndPoints_mB2EA56EB07ABF9F832E55A7D930327AB127F0EBE(__this, L_11, NULL);
				V_2 = L_12;
				// Gizmos.DrawLine(point1, ep[0]);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___point1_0;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_2;
				NullCheck(L_14);
				int32_t L_15 = 0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_13, L_16, NULL);
				// Gizmos.DrawLine(point2, ep[1]);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___point2_1;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_2;
				NullCheck(L_18);
				int32_t L_19 = 1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_17, L_20, NULL);
				// GizmosExtend.DrawCapsule(ep[0], ep[1], radius);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = V_2;
				NullCheck(L_21);
				int32_t L_22 = 0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
				NullCheck(L_24);
				int32_t L_25 = 1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				float L_27 = __this->___radius_2;
				il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
				GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64(L_23, L_26, L_27, L_28, NULL);
				// if (!hitted)
				bool L_29;
				L_29 = CapsuleCastData_get_hitted_m89C3C7558AA4CEE173A84B6A332DD5EF1673B9DE(__this, NULL);
				if (L_29)
				{
					goto IL_00be_1;
				}
			}
			{
				// GizmosExtend.DrawCapsule(point1, point2, radius);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___point1_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___point2_1;
				float L_32 = __this->___radius_2;
				il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = V_0;
				GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64(L_30, L_31, L_32, L_33, NULL);
				goto IL_0194;
			}

IL_00be_1:
			{
				// using (new ColorScope(hitColor))
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = ___1_hitColor;
				ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 L_35;
				memset((&L_35), 0, sizeof(L_35));
				ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&L_35), L_34, /*hidden argument*/NULL);
				V_3 = L_35;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0178_1:
					{// begin finally (depth: 2)
						ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_3), NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// GizmosExtend.DrawCapsule(point1, point2, radius);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___point1_0;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___point2_1;
					float L_38 = __this->___radius_2;
					il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = V_0;
					GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64(L_36, L_37, L_38, L_39, NULL);
					// ep = GetEndPoints(hitResult.distance);
					RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_40;
					L_40 = CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF_inline(__this, NULL);
					V_4 = L_40;
					float L_41;
					L_41 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_4), NULL);
					Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42;
					L_42 = CapsuleCastData_GetEndPoints_mB2EA56EB07ABF9F832E55A7D930327AB127F0EBE(__this, L_41, NULL);
					V_2 = L_42;
					// Gizmos.DrawLine(point1, ep[0]);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___point1_0;
					Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = V_2;
					NullCheck(L_44);
					int32_t L_45 = 0;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
					Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_43, L_46, NULL);
					// Gizmos.DrawLine(point2, ep[1]);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___point2_1;
					Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = V_2;
					NullCheck(L_48);
					int32_t L_49 = 1;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
					Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_47, L_50, NULL);
					// GizmosExtend.DrawCapsule(ep[0], ep[1], radius);
					Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = V_2;
					NullCheck(L_51);
					int32_t L_52 = 0;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
					Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_54 = V_2;
					NullCheck(L_54);
					int32_t L_55 = 1;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
					float L_57 = __this->___radius_2;
					il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = V_0;
					GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64(L_53, L_56, L_57, L_58, NULL);
					// Vector3 center = Vector3.Lerp(point1, point2, 0.5f);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = __this->___point1_0;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = __this->___point2_1;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
					L_61 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_59, L_60, (0.5f), NULL);
					// Gizmos.DrawLine(center, hitResult.point);
					RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_62;
					L_62 = CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF_inline(__this, NULL);
					V_4 = L_62;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
					L_63 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_4), NULL);
					Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_61, L_63, NULL);
					// RaycastData.DrawHitPointReference(hitResult);
					RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_64;
					L_64 = CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF_inline(__this, NULL);
					RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0(L_64, NULL);
					// }
					goto IL_0194;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0194:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData_DrawGizmos_mA288E9F959D8791F9C9B69BDB8DD102D421F107A_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData_DrawGizmos_mA288E9F959D8791F9C9B69BDB8DD102D421F107A(_thisAdjusted, ___0_color, ___1_hitColor, method);
}
// System.Void Kit.Physic.CapsuleCastData::DrawAllGizmos(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_DrawAllGizmos_m5177E181F6F2E7BA8D1BED023C757932433C7476 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B8_0 = NULL;
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B9_1 = NULL;
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___2_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___3_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___3_hitColor;
		G_B6_0 = L_8;
		goto IL_0036;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0036:
	{
		___3_hitColor = G_B6_0;
		// using (new ColorScope(validArraySize > 0 ? hitColor : color))
		int32_t L_10 = ___1_validArraySize;
		G_B7_0 = (&V_1);
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			G_B8_0 = (&V_1);
			goto IL_0041;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___2_color;
		G_B9_0 = L_11;
		G_B9_1 = G_B7_0;
		goto IL_0043;
	}

IL_0041:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___3_hitColor;
		G_B9_0 = L_12;
		G_B9_1 = G_B8_0;
	}

IL_0043:
	{
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5(G_B9_1, G_B9_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010e:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Vector3[] ep = GetEndPoints(maxDistance);
				float L_13 = __this->___maxDistance_4;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14;
				L_14 = CapsuleCastData_GetEndPoints_mB2EA56EB07ABF9F832E55A7D930327AB127F0EBE(__this, L_13, NULL);
				V_2 = L_14;
				// GizmosExtend.DrawCapsule(point1, point2, radius);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___point1_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___point2_1;
				float L_17 = __this->___radius_2;
				il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_0;
				GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64(L_15, L_16, L_17, L_18, NULL);
				// Gizmos.DrawLine(point1, ep[0]);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___point1_0;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = V_2;
				NullCheck(L_20);
				int32_t L_21 = 0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_19, L_22, NULL);
				// Gizmos.DrawLine(point2, ep[1]);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___point2_1;
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
				NullCheck(L_24);
				int32_t L_25 = 1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_23, L_26, NULL);
				// GizmosExtend.DrawCapsule(ep[0], ep[1], radius);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = V_2;
				NullCheck(L_27);
				int32_t L_28 = 0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = V_2;
				NullCheck(L_30);
				int32_t L_31 = 1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
				float L_33 = __this->___radius_2;
				il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = V_0;
				GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64(L_29, L_32, L_33, L_34, NULL);
				// Vector3 center = Vector3.Lerp(point1, point2, 0.5f);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___point1_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___point2_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
				L_37 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_35, L_36, (0.5f), NULL);
				V_3 = L_37;
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				V_4 = 0;
				goto IL_00ff_1;
			}

IL_00d7_1:
			{
				// Gizmos.DrawLine(center, raycastHits[i].point);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_3;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_39 = ___0_raycastHits;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_40 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_39);
				int32_t L_41 = V_4;
				NullCheck(L_40);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_38, L_42, NULL);
				// RaycastData.DrawHitPointReference(raycastHits[i]);
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_43 = ___0_raycastHits;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_44 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_43);
				int32_t L_45 = V_4;
				NullCheck(L_44);
				int32_t L_46 = L_45;
				RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
				RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0(L_47, NULL);
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				int32_t L_48 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			}

IL_00ff_1:
			{
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				int32_t L_49 = V_4;
				int32_t L_50 = ___1_validArraySize;
				if ((((int32_t)L_49) >= ((int32_t)L_50)))
				{
					goto IL_010c_1;
				}
			}
			{
				int32_t L_51 = V_4;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_52 = ___0_raycastHits;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_53 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_52);
				NullCheck(L_53);
				if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
				{
					goto IL_00d7_1;
				}
			}

IL_010c_1:
			{
				// }
				goto IL_011c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData_DrawAllGizmos_m5177E181F6F2E7BA8D1BED023C757932433C7476_AdjustorThunk (RuntimeObject* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData_DrawAllGizmos_m5177E181F6F2E7BA8D1BED023C757932433C7476(_thisAdjusted, ___0_raycastHits, ___1_validArraySize, ___2_color, ___3_hitColor, method);
}
// System.Void Kit.Physic.CapsuleCastData::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_Update_m5F06B06A508E9DF8ACD552A82F31CCCF57C73051 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, const RuntimeMethod* method) 
{
	{
		// point1 = _point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point1;
		__this->___point1_0 = L_0;
		// point2 = _point2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point2;
		__this->___point2_1 = L_1;
		// radius = _radius;
		float L_2 = ___2__radius;
		__this->___radius_2 = L_2;
		// direction = _direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3__direction;
		__this->___direction_3 = L_3;
		// maxDistance = _maxDistance;
		float L_4 = ___4__maxDistance;
		__this->___maxDistance_4 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData_Update_m5F06B06A508E9DF8ACD552A82F31CCCF57C73051_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point2, float ___2__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3__direction, float ___4__maxDistance, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData_Update_m5F06B06A508E9DF8ACD552A82F31CCCF57C73051(_thisAdjusted, ___0__point1, ___1__point2, ___2__radius, ___3__direction, ___4__maxDistance, method);
}
// System.Void Kit.Physic.CapsuleCastData::Update(Kit.Physic.CapsuleData,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_Update_m562275C0184D914899DAA5E7FB5506A69778A5D5 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) 
{
	{
		// Update(capsuleData.p0, capsuleData.p1, capsuleData.radius, _direction, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6((&___0_capsuleData), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9((&___0_capsuleData), NULL);
		float L_2;
		L_2 = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline((&___0_capsuleData), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1__direction;
		float L_4 = ___2__maxDistance;
		CapsuleCastData_Update_m5F06B06A508E9DF8ACD552A82F31CCCF57C73051(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData_Update_m562275C0184D914899DAA5E7FB5506A69778A5D5_AdjustorThunk (RuntimeObject* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData_Update_m562275C0184D914899DAA5E7FB5506A69778A5D5(_thisAdjusted, ___0_capsuleData, ___1__direction, ___2__maxDistance, method);
}
// System.Void Kit.Physic.CapsuleCastData::Update(UnityEngine.CapsuleCollider,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_Update_mA370A92799B1D830AF4A76FE3A6899544137886A (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_collider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) 
{
	{
		// Update(new CapsuleData(collider), _direction, _maxDistance);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_collider;
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_1;
		memset((&L_1), 0, sizeof(L_1));
		CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12((&L_1), L_0, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1__direction;
		float L_3 = ___2__maxDistance;
		CapsuleCastData_Update_m562275C0184D914899DAA5E7FB5506A69778A5D5(__this, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData_Update_mA370A92799B1D830AF4A76FE3A6899544137886A_AdjustorThunk (RuntimeObject* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_collider, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData_Update_mA370A92799B1D830AF4A76FE3A6899544137886A(_thisAdjusted, ___0_collider, ___1__direction, ___2__maxDistance, method);
}
// System.Void Kit.Physic.CapsuleCastData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCastData_Reset_mEEF8DD91963433ADDB46ED9842AA665E396F1DA1 (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// point1 = point2 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		V_0 = L_1;
		__this->___point2_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		__this->___point1_0 = L_2;
		// maxDistance = radius = 0f;
		float L_3 = (0.0f);
		V_1 = L_3;
		__this->___radius_2 = L_3;
		float L_4 = V_1;
		__this->___maxDistance_4 = L_4;
		// direction = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___direction_3 = L_5;
		// hit = new RaycastHit();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___hit_5);
		il2cpp_codegen_initobj(L_6, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleCastData_Reset_mEEF8DD91963433ADDB46ED9842AA665E396F1DA1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	CapsuleCastData_Reset_mEEF8DD91963433ADDB46ED9842AA665E396F1DA1(_thisAdjusted, method);
}
// System.String Kit.Physic.CapsuleCastData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CapsuleCastData_ToString_m543596A1A95894FC787E3D9D8F92DA281632E12C (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6675D79D48D9A8ADF87563B7F80BCFB289EED09E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81E048DB01F27804F29EFA587B95ECF980EC3B48);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (hitted) ?
		//     string.Format("Radius {0:F2}, Distance: {1:F2}, Hit: {2} ({3:F2})", radius, maxDistance, hit.transform.name, hit.point) :
		//     string.Format("Radius {0:F2}, Distance: {1:F2}, Hit: None", radius, maxDistance);
		bool L_0;
		L_0 = CapsuleCastData_get_hitted_m89C3C7558AA4CEE173A84B6A332DD5EF1673B9DE(__this, NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		float L_1 = __this->___radius_2;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___maxDistance_4;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6675D79D48D9A8ADF87563B7F80BCFB289EED09E, L_3, L_6, NULL);
		return L_7;
	}

IL_0029:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		float L_10 = __this->___radius_2;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = __this->___maxDistance_4;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_18 = (&__this->___hit_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_22 = (&__this->___hit_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23;
		RuntimeObject* L_25 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_25);
		String_t* L_26;
		L_26 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral81E048DB01F27804F29EFA587B95ECF980EC3B48, L_21, NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C  String_t* CapsuleCastData_ToString_m543596A1A95894FC787E3D9D8F92DA281632E12C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = CapsuleCastData_ToString_m543596A1A95894FC787E3D9D8F92DA281632E12C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3[] Kit.Physic.CapsuleCastData::GetEndPoints(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* CapsuleCastData_GetEndPoints_mB2EA56EB07ABF9F832E55A7D930327AB127F0EBE (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, float ___0__distance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 vector = _distance * direction.normalized;
		float L_0 = ___0__distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___direction_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_0, L_2, NULL);
		V_0 = L_3;
		// return new[] { point1 + vector, point2 + vector };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___point1_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___point2_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_12);
		return L_9;
	}
}
IL2CPP_EXTERN_C  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* CapsuleCastData_GetEndPoints_mB2EA56EB07ABF9F832E55A7D930327AB127F0EBE_AdjustorThunk (RuntimeObject* __this, float ___0__distance, const RuntimeMethod* method)
{
	CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C*>(__this + _offset);
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* _returnValue;
	_returnValue = CapsuleCastData_GetEndPoints_mB2EA56EB07ABF9F832E55A7D930327AB127F0EBE(_thisAdjusted, ___0__distance, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Kit.Physic.CapsuleData
IL2CPP_EXTERN_C void CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshal_pinvoke(const CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31& unmarshaled, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Center_1 = unmarshaled.___m_Center_1;
	marshaled.___m_Radius_2 = unmarshaled.___m_Radius_2;
	marshaled.___m_Height_3 = unmarshaled.___m_Height_3;
	marshaled.___m_Direction_4 = unmarshaled.___m_Direction_4;
	marshaled.___m_Dirty_5 = static_cast<int32_t>(unmarshaled.___m_Dirty_5);
	marshaled.___m_Matrix_6 = unmarshaled.___m_Matrix_6;
	marshaled.___m_P0_7 = unmarshaled.___m_P0_7;
	marshaled.___m_P1_8 = unmarshaled.___m_P1_8;
}
IL2CPP_EXTERN_C void CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshal_pinvoke_back(const CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshaled_pinvoke& marshaled, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_Center_temp_0;
	memset((&unmarshaledm_Center_temp_0), 0, sizeof(unmarshaledm_Center_temp_0));
	unmarshaledm_Center_temp_0 = marshaled.___m_Center_1;
	unmarshaled.___m_Center_1 = unmarshaledm_Center_temp_0;
	float unmarshaledm_Radius_temp_1 = 0.0f;
	unmarshaledm_Radius_temp_1 = marshaled.___m_Radius_2;
	unmarshaled.___m_Radius_2 = unmarshaledm_Radius_temp_1;
	float unmarshaledm_Height_temp_2 = 0.0f;
	unmarshaledm_Height_temp_2 = marshaled.___m_Height_3;
	unmarshaled.___m_Height_3 = unmarshaledm_Height_temp_2;
	int32_t unmarshaledm_Direction_temp_3 = 0;
	unmarshaledm_Direction_temp_3 = marshaled.___m_Direction_4;
	unmarshaled.___m_Direction_4 = unmarshaledm_Direction_temp_3;
	bool unmarshaledm_Dirty_temp_4 = false;
	unmarshaledm_Dirty_temp_4 = static_cast<bool>(marshaled.___m_Dirty_5);
	unmarshaled.___m_Dirty_5 = unmarshaledm_Dirty_temp_4;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 unmarshaledm_Matrix_temp_5;
	memset((&unmarshaledm_Matrix_temp_5), 0, sizeof(unmarshaledm_Matrix_temp_5));
	unmarshaledm_Matrix_temp_5 = marshaled.___m_Matrix_6;
	unmarshaled.___m_Matrix_6 = unmarshaledm_Matrix_temp_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_P0_temp_6;
	memset((&unmarshaledm_P0_temp_6), 0, sizeof(unmarshaledm_P0_temp_6));
	unmarshaledm_P0_temp_6 = marshaled.___m_P0_7;
	unmarshaled.___m_P0_7 = unmarshaledm_P0_temp_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_P1_temp_7;
	memset((&unmarshaledm_P1_temp_7), 0, sizeof(unmarshaledm_P1_temp_7));
	unmarshaledm_P1_temp_7 = marshaled.___m_P1_8;
	unmarshaled.___m_P1_8 = unmarshaledm_P1_temp_7;
}
// Conversion method for clean up from marshalling of: Kit.Physic.CapsuleData
IL2CPP_EXTERN_C void CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshal_pinvoke_cleanup(CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Kit.Physic.CapsuleData
IL2CPP_EXTERN_C void CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshal_com(const CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31& unmarshaled, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshaled_com& marshaled)
{
	marshaled.___m_Center_1 = unmarshaled.___m_Center_1;
	marshaled.___m_Radius_2 = unmarshaled.___m_Radius_2;
	marshaled.___m_Height_3 = unmarshaled.___m_Height_3;
	marshaled.___m_Direction_4 = unmarshaled.___m_Direction_4;
	marshaled.___m_Dirty_5 = static_cast<int32_t>(unmarshaled.___m_Dirty_5);
	marshaled.___m_Matrix_6 = unmarshaled.___m_Matrix_6;
	marshaled.___m_P0_7 = unmarshaled.___m_P0_7;
	marshaled.___m_P1_8 = unmarshaled.___m_P1_8;
}
IL2CPP_EXTERN_C void CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshal_com_back(const CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshaled_com& marshaled, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31& unmarshaled)
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_Center_temp_0;
	memset((&unmarshaledm_Center_temp_0), 0, sizeof(unmarshaledm_Center_temp_0));
	unmarshaledm_Center_temp_0 = marshaled.___m_Center_1;
	unmarshaled.___m_Center_1 = unmarshaledm_Center_temp_0;
	float unmarshaledm_Radius_temp_1 = 0.0f;
	unmarshaledm_Radius_temp_1 = marshaled.___m_Radius_2;
	unmarshaled.___m_Radius_2 = unmarshaledm_Radius_temp_1;
	float unmarshaledm_Height_temp_2 = 0.0f;
	unmarshaledm_Height_temp_2 = marshaled.___m_Height_3;
	unmarshaled.___m_Height_3 = unmarshaledm_Height_temp_2;
	int32_t unmarshaledm_Direction_temp_3 = 0;
	unmarshaledm_Direction_temp_3 = marshaled.___m_Direction_4;
	unmarshaled.___m_Direction_4 = unmarshaledm_Direction_temp_3;
	bool unmarshaledm_Dirty_temp_4 = false;
	unmarshaledm_Dirty_temp_4 = static_cast<bool>(marshaled.___m_Dirty_5);
	unmarshaled.___m_Dirty_5 = unmarshaledm_Dirty_temp_4;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 unmarshaledm_Matrix_temp_5;
	memset((&unmarshaledm_Matrix_temp_5), 0, sizeof(unmarshaledm_Matrix_temp_5));
	unmarshaledm_Matrix_temp_5 = marshaled.___m_Matrix_6;
	unmarshaled.___m_Matrix_6 = unmarshaledm_Matrix_temp_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_P0_temp_6;
	memset((&unmarshaledm_P0_temp_6), 0, sizeof(unmarshaledm_P0_temp_6));
	unmarshaledm_P0_temp_6 = marshaled.___m_P0_7;
	unmarshaled.___m_P0_7 = unmarshaledm_P0_temp_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_P1_temp_7;
	memset((&unmarshaledm_P1_temp_7), 0, sizeof(unmarshaledm_P1_temp_7));
	unmarshaledm_P1_temp_7 = marshaled.___m_P1_8;
	unmarshaled.___m_P1_8 = unmarshaledm_P1_temp_7;
}
// Conversion method for clean up from marshalling of: Kit.Physic.CapsuleData
IL2CPP_EXTERN_C void CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshal_com_cleanup(CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31_marshaled_com& marshaled)
{
}
// UnityEngine.Vector3 Kit.Physic.CapsuleData::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 center { get { return m_Center; } set { m_Center = value; m_Dirty = true; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleData::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_center_m3B6059D3CB8BF21509CDE389E93C6FD072F18CEB (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 center { get { return m_Center; } set { m_Center = value; m_Dirty = true; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_Center_1 = L_0;
		// public Vector3 center { get { return m_Center; } set { m_Center = value; m_Dirty = true; } }
		__this->___m_Dirty_5 = (bool)1;
		// public Vector3 center { get { return m_Center; } set { m_Center = value; m_Dirty = true; } }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData_set_center_m3B6059D3CB8BF21509CDE389E93C6FD072F18CEB_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData_set_center_m3B6059D3CB8BF21509CDE389E93C6FD072F18CEB(_thisAdjusted, ___0_value, method);
}
// System.Single Kit.Physic.CapsuleData::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public float radius { get { return m_Radius; } set { m_Radius = value; m_Dirty = true; } }
		float L_0 = __this->___m_Radius_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	float _returnValue;
	_returnValue = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleData::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_radius_m83F69CBA138A504C0B91F06E0D0211DB46F21019 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float radius { get { return m_Radius; } set { m_Radius = value; m_Dirty = true; } }
		float L_0 = ___0_value;
		__this->___m_Radius_2 = L_0;
		// public float radius { get { return m_Radius; } set { m_Radius = value; m_Dirty = true; } }
		__this->___m_Dirty_5 = (bool)1;
		// public float radius { get { return m_Radius; } set { m_Radius = value; m_Dirty = true; } }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData_set_radius_m83F69CBA138A504C0B91F06E0D0211DB46F21019_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData_set_radius_m83F69CBA138A504C0B91F06E0D0211DB46F21019(_thisAdjusted, ___0_value, method);
}
// System.Single Kit.Physic.CapsuleData::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleData_get_height_m5BCB654887F4ADFF6D048382BF855F9602840F71 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public float height { get { return m_Height; } set { m_Height = value; m_Dirty = true; } }
		float L_0 = __this->___m_Height_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float CapsuleData_get_height_m5BCB654887F4ADFF6D048382BF855F9602840F71_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	float _returnValue;
	_returnValue = CapsuleData_get_height_m5BCB654887F4ADFF6D048382BF855F9602840F71_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleData::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_height_mD8A2EB1588EA5A6588D74FEB55290D2AAF3FED10 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float height { get { return m_Height; } set { m_Height = value; m_Dirty = true; } }
		float L_0 = ___0_value;
		__this->___m_Height_3 = L_0;
		// public float height { get { return m_Height; } set { m_Height = value; m_Dirty = true; } }
		__this->___m_Dirty_5 = (bool)1;
		// public float height { get { return m_Height; } set { m_Height = value; m_Dirty = true; } }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData_set_height_mD8A2EB1588EA5A6588D74FEB55290D2AAF3FED10_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData_set_height_mD8A2EB1588EA5A6588D74FEB55290D2AAF3FED10(_thisAdjusted, ___0_value, method);
}
// System.Int32 Kit.Physic.CapsuleData::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleData_get_direction_mD196AD135013CFBC6C55D99915AAE1141615EAD1 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public int direction { get { return m_Direction; } set { m_Direction = value; m_Dirty = true; } }
		int32_t L_0 = __this->___m_Direction_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleData_get_direction_mD196AD135013CFBC6C55D99915AAE1141615EAD1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleData_get_direction_mD196AD135013CFBC6C55D99915AAE1141615EAD1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleData::set_direction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_direction_mDD37DB3F0DCE8796FE45122816310CDD85A07CCD (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int direction { get { return m_Direction; } set { m_Direction = value; m_Dirty = true; } }
		int32_t L_0 = ___0_value;
		__this->___m_Direction_4 = L_0;
		// public int direction { get { return m_Direction; } set { m_Direction = value; m_Dirty = true; } }
		__this->___m_Dirty_5 = (bool)1;
		// public int direction { get { return m_Direction; } set { m_Direction = value; m_Dirty = true; } }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData_set_direction_mDD37DB3F0DCE8796FE45122816310CDD85A07CCD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData_set_direction_mDD37DB3F0DCE8796FE45122816310CDD85A07CCD(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector3 Kit.Physic.CapsuleData::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_position_m0B437E8A6A5A70AA8588D456DC7B144E153CCD0D (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 position { get { return m_Matrix.GetColumn(3); } set { m_Matrix.SetTRS(value, rotation, Vector3.one); m_Dirty = true; } }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->___m_Matrix_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(L_0, 3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_position_m0B437E8A6A5A70AA8588D456DC7B144E153CCD0D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CapsuleData_get_position_m0B437E8A6A5A70AA8588D456DC7B144E153CCD0D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleData::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_position_mB7650A619C6211532AA344D9473074CC5891B440 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 position { get { return m_Matrix.GetColumn(3); } set { m_Matrix.SetTRS(value, rotation, Vector3.one); m_Dirty = true; } }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->___m_Matrix_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = CapsuleData_get_rotation_m9FA769A6E47D795D903291181BAD384F2F192211(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_SetTRS_m8002A569FE81574DABE86044C8FF6F7C44DA21AA(L_0, L_1, L_2, L_3, NULL);
		// public Vector3 position { get { return m_Matrix.GetColumn(3); } set { m_Matrix.SetTRS(value, rotation, Vector3.one); m_Dirty = true; } }
		__this->___m_Dirty_5 = (bool)1;
		// public Vector3 position { get { return m_Matrix.GetColumn(3); } set { m_Matrix.SetTRS(value, rotation, Vector3.one); m_Dirty = true; } }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData_set_position_mB7650A619C6211532AA344D9473074CC5891B440_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData_set_position_mB7650A619C6211532AA344D9473074CC5891B440(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Quaternion Kit.Physic.CapsuleData::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CapsuleData_get_rotation_m9FA769A6E47D795D903291181BAD384F2F192211 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector4
		// lhs = m_Matrix.GetColumn(2),
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->___m_Matrix_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(L_0, 2, NULL);
		V_0 = L_1;
		// rhs = m_Matrix.GetColumn(1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = (&__this->___m_Matrix_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(L_2, 1, NULL);
		V_1 = L_3;
		// if (lhs == Vector4.zero && rhs == Vector4.zero)
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		bool L_6;
		L_6 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		bool L_9;
		L_9 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// return Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		return L_10;
	}

IL_003a:
	{
		// return Quaternion.LookRotation(lhs, rhs);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_11, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_12, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CapsuleData_get_rotation_m9FA769A6E47D795D903291181BAD384F2F192211_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = CapsuleData_get_rotation_m9FA769A6E47D795D903291181BAD384F2F192211(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleData::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_set_rotation_mFF67AF7E5FA8D8E26A5B9FFC98C81527D6AC91D7 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Matrix.SetTRS(position, value, Vector3.one); m_Dirty = true; }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = (&__this->___m_Matrix_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CapsuleData_get_position_m0B437E8A6A5A70AA8588D456DC7B144E153CCD0D(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_SetTRS_m8002A569FE81574DABE86044C8FF6F7C44DA21AA(L_0, L_1, L_2, L_3, NULL);
		// set { m_Matrix.SetTRS(position, value, Vector3.one); m_Dirty = true; }
		__this->___m_Dirty_5 = (bool)1;
		// set { m_Matrix.SetTRS(position, value, Vector3.one); m_Dirty = true; }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData_set_rotation_mFF67AF7E5FA8D8E26A5B9FFC98C81527D6AC91D7_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData_set_rotation_mFF67AF7E5FA8D8E26A5B9FFC98C81527D6AC91D7(_thisAdjusted, ___0_value, method);
}
// System.Void Kit.Physic.CapsuleData::.ctor(UnityEngine.CapsuleCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_colliderRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(colliderRef.transform, colliderRef.center, colliderRef.radius, colliderRef.height, (eCapsuleDirection)colliderRef.direction)
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_colliderRef;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = ___0_colliderRef;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_2, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = ___0_colliderRef;
		NullCheck(L_4);
		float L_5;
		L_5 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_4, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_6 = ___0_colliderRef;
		NullCheck(L_6);
		float L_7;
		L_7 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_6, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_8 = ___0_colliderRef;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = CapsuleCollider_get_direction_mE6D56B0990E3F2FACA983679C251949FE3FC6DFA(L_8, NULL);
		CapsuleData__ctor_m66209A7C08991F60BE077CC092C74189496F328B(__this, L_1, L_3, L_5, L_7, L_9, NULL);
		// if (colliderRef == null)
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_10 = ___0_colliderRef;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0033;
		}
	}
	{
		// throw new System.NullReferenceException();
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_12 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12_RuntimeMethod_var)));
	}

IL_0033:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12_AdjustorThunk (RuntimeObject* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_colliderRef, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12(_thisAdjusted, ___0_colliderRef, method);
}
// System.Void Kit.Physic.CapsuleData::.ctor(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Single,Kit.Physic.eCapsuleDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData__ctor_m66209A7C08991F60BE077CC092C74189496F328B (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0__transform, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_center, float ___2_radius, float ___3_height, int32_t ___4_direction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(_transform.position, _transform.rotation, center, radius, height, direction)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0__transform;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0__transform;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_center;
		float L_5 = ___2_radius;
		float L_6 = ___3_height;
		int32_t L_7 = ___4_direction;
		CapsuleData__ctor_mA73254860476E93D7C26630A1E67BA253BD08382(__this, L_1, L_3, L_4, L_5, L_6, L_7, NULL);
		// if (_transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___0__transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0027;
		}
	}
	{
		// throw new System.NullReferenceException();
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_10 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CapsuleData__ctor_m66209A7C08991F60BE077CC092C74189496F328B_RuntimeMethod_var)));
	}

IL_0027:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData__ctor_m66209A7C08991F60BE077CC092C74189496F328B_AdjustorThunk (RuntimeObject* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0__transform, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_center, float ___2_radius, float ___3_height, int32_t ___4_direction, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData__ctor_m66209A7C08991F60BE077CC092C74189496F328B(_thisAdjusted, ___0__transform, ___1_center, ___2_radius, ___3_height, ___4_direction, method);
}
// System.Void Kit.Physic.CapsuleData::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,System.Single,Kit.Physic.eCapsuleDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData__ctor_mA73254860476E93D7C26630A1E67BA253BD08382 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1__rot, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_center, float ___3_radius, float ___4_height, int32_t ___5_direction, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Center = center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___2_center;
		__this->___m_Center_1 = L_0;
		// m_Radius = radius;
		float L_1 = ___3_radius;
		__this->___m_Radius_2 = L_1;
		// m_Height = height;
		float L_2 = ___4_height;
		__this->___m_Height_3 = L_2;
		// m_Direction = (int)direction; // 0,1,2
		int32_t L_3 = ___5_direction;
		__this->___m_Direction_4 = L_3;
		// m_Dirty = true;
		__this->___m_Dirty_5 = (bool)1;
		// m_Matrix = new Matrix4x4();
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_4 = (&__this->___m_Matrix_6);
		il2cpp_codegen_initobj(L_4, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// m_Matrix.SetTRS(_pos, _rot, Vector3.one);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_5 = (&__this->___m_Matrix_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0__pos;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___1__rot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_SetTRS_m8002A569FE81574DABE86044C8FF6F7C44DA21AA(L_5, L_6, L_7, L_8, NULL);
		// m_P0 = m_P1 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9;
		V_0 = L_10;
		__this->___m_P1_8 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		__this->___m_P0_7 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData__ctor_mA73254860476E93D7C26630A1E67BA253BD08382_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1__rot, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_center, float ___3_radius, float ___4_height, int32_t ___5_direction, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData__ctor_mA73254860476E93D7C26630A1E67BA253BD08382(_thisAdjusted, ___0__pos, ___1__rot, ___2_center, ___3_radius, ___4_height, ___5_direction, method);
}
// UnityEngine.Vector3 Kit.Physic.CapsuleData::get_p0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Dirty)
		bool L_0 = __this->___m_Dirty_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdateReference();
		CapsuleData_UpdateReference_mD9F5A79036B2EB818F25825CD0CC7E5F70724D69(__this, NULL);
	}

IL_000e:
	{
		// return m_P0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_P0_7;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.Physic.CapsuleData::get_p1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Dirty)
		bool L_0 = __this->___m_Dirty_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdateReference();
		CapsuleData_UpdateReference_mD9F5A79036B2EB818F25825CD0CC7E5F70724D69(__this, NULL);
	}

IL_000e:
	{
		// return m_P1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_P1_8;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleData::UpdateReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleData_UpdateReference_mD9F5A79036B2EB818F25825CD0CC7E5F70724D69 (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (m_Dirty)
		bool L_0 = __this->___m_Dirty_5;
		if (!L_0)
		{
			goto IL_018b;
		}
	}
	{
		// if (height < radius * 2f)
		float L_1;
		L_1 = CapsuleData_get_height_m5BCB654887F4ADFF6D048382BF855F9602840F71_inline(__this, NULL);
		float L_2;
		L_2 = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline(__this, NULL);
		if ((!(((float)L_1) < ((float)((float)il2cpp_codegen_multiply(L_2, (2.0f)))))))
		{
			goto IL_0044;
		}
	}
	{
		// m_P0 = m_P1 = m_Matrix.MultiplyPoint3x4(center);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = (&__this->___m_Matrix_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		V_0 = L_6;
		__this->___m_P1_8 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		__this->___m_P0_7 = L_7;
		goto IL_018b;
	}

IL_0044:
	{
		// float half = Mathf.Clamp((height / 2f) - radius, 0f, float.PositiveInfinity);
		float L_8;
		L_8 = CapsuleData_get_height_m5BCB654887F4ADFF6D048382BF855F9602840F71_inline(__this, NULL);
		float L_9;
		L_9 = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline(__this, NULL);
		float L_10;
		L_10 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(((float)(L_8/(2.0f))), L_9)), (0.0f), (std::numeric_limits<float>::infinity()), NULL);
		V_1 = L_10;
		// switch (direction)
		int32_t L_11;
		L_11 = CapsuleData_get_direction_mD196AD135013CFBC6C55D99915AAE1141615EAD1_inline(__this, NULL);
		V_2 = L_11;
		int32_t L_12 = V_2;
		switch (L_12)
		{
			case 0:
			{
				goto IL_0085;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_0112;
			}
		}
	}
	{
		goto IL_0157;
	}

IL_0085:
	{
		// m_P0 = center + new Vector3(-half, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline(__this, NULL);
		float L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((-L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_15, NULL);
		__this->___m_P0_7 = L_16;
		// m_P1 = center + new Vector3(half, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline(__this, NULL);
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_18, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_19, NULL);
		__this->___m_P1_8 = L_20;
		// break;
		goto IL_015d;
	}

IL_00cd:
	{
		// m_P0 = center + new Vector3(0f, half, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline(__this, NULL);
		float L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.0f), L_22, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_23, NULL);
		__this->___m_P0_7 = L_24;
		// m_P1 = center + new Vector3(0f, -half, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline(__this, NULL);
		float L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), (0.0f), ((-L_26)), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_27, NULL);
		__this->___m_P1_8 = L_28;
		// break;
		goto IL_015d;
	}

IL_0112:
	{
		// m_P0 = center + new Vector3(0f, 0f, half);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline(__this, NULL);
		float L_30 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.0f), (0.0f), L_30, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_31, NULL);
		__this->___m_P0_7 = L_32;
		// m_P1 = center + new Vector3(0f, 0f, -half);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline(__this, NULL);
		float L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), (0.0f), (0.0f), ((-L_34)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_33, L_35, NULL);
		__this->___m_P1_8 = L_36;
		// break;
		goto IL_015d;
	}

IL_0157:
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_37 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_37, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CapsuleData_UpdateReference_mD9F5A79036B2EB818F25825CD0CC7E5F70724D69_RuntimeMethod_var)));
	}

IL_015d:
	{
		// m_P0 = m_Matrix.MultiplyPoint3x4(m_P0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_38 = (&__this->___m_Matrix_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->___m_P0_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_38, L_39, NULL);
		__this->___m_P0_7 = L_40;
		// m_P1 = m_Matrix.MultiplyPoint3x4(m_P1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_41 = (&__this->___m_Matrix_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = __this->___m_P1_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_41, L_42, NULL);
		__this->___m_P1_8 = L_43;
	}

IL_018b:
	{
		// m_Dirty = false;
		__this->___m_Dirty_5 = (bool)0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleData_UpdateReference_mD9F5A79036B2EB818F25825CD0CC7E5F70724D69_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31*>(__this + _offset);
	CapsuleData_UpdateReference_mD9F5A79036B2EB818F25825CD0CC7E5F70724D69(_thisAdjusted, method);
}
// Kit.Physic.CapsuleData Kit.Physic.CapsuleData::op_Explicit(UnityEngine.CapsuleCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 CapsuleData_op_Explicit_m24EC285A3353C6DB4560E4FAC95ED8C39DD1FFF1 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_collider, const RuntimeMethod* method) 
{
	{
		// return new CapsuleData(collider);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_collider;
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_1;
		memset((&L_1), 0, sizeof(L_1));
		CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
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
// Kit.Physic.CapsuleOverlapData Kit.Physic.CapsuleOverlapData::get_NONE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D CapsuleOverlapData_get_NONE_m1DA55DC42112AE1C3887475342A04F7C9B846605 (const RuntimeMethod* method) 
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static CapsuleOverlapData NONE { get { return default(CapsuleOverlapData); } }
		il2cpp_codegen_initobj((&V_0), sizeof(CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D));
		CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Kit.Physic.CapsuleOverlapData::get_hitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_get_hitCount_m7BF8D27D74F378CAD3EEC7F95D4D5160001A118E (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleOverlapData_get_hitCount_m7BF8D27D74F378CAD3EEC7F95D4D5160001A118E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleOverlapData_get_hitCount_m7BF8D27D74F378CAD3EEC7F95D4D5160001A118E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleOverlapData::set_hitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean Kit.Physic.CapsuleOverlapData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CapsuleOverlapData_get_hitted_m30ED5ABB4748F79DD6B0BDCE8F82119A48EE638C (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) 
{
	{
		// public bool hitted { get { return hitCount > 0; } }
		int32_t L_0;
		L_0 = CapsuleOverlapData_get_hitCount_m7BF8D27D74F378CAD3EEC7F95D4D5160001A118E_inline(__this, NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool CapsuleOverlapData_get_hitted_m30ED5ABB4748F79DD6B0BDCE8F82119A48EE638C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	bool _returnValue;
	_returnValue = CapsuleOverlapData_get_hitted_m30ED5ABB4748F79DD6B0BDCE8F82119A48EE638C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleOverlapData::.ctor(UnityEngine.CapsuleCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData__ctor_m4CBFB4AAEF55168894C42198AE2FE7FF6787BFA3 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, const RuntimeMethod* method) 
{
	{
		// public CapsuleOverlapData(CapsuleCollider capsuleCollider) : this(new CapsuleData(capsuleCollider)) { }
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_capsuleCollider;
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_1;
		memset((&L_1), 0, sizeof(L_1));
		CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12((&L_1), L_0, /*hidden argument*/NULL);
		CapsuleOverlapData__ctor_m2E505BAAD8062E61E05A519B38A7C4A4672A9125(__this, L_1, NULL);
		// public CapsuleOverlapData(CapsuleCollider capsuleCollider) : this(new CapsuleData(capsuleCollider)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData__ctor_m4CBFB4AAEF55168894C42198AE2FE7FF6787BFA3_AdjustorThunk (RuntimeObject* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData__ctor_m4CBFB4AAEF55168894C42198AE2FE7FF6787BFA3(_thisAdjusted, ___0_capsuleCollider, method);
}
// System.Void Kit.Physic.CapsuleOverlapData::.ctor(Kit.Physic.CapsuleData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData__ctor_m2E505BAAD8062E61E05A519B38A7C4A4672A9125 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, const RuntimeMethod* method) 
{
	{
		// public CapsuleOverlapData(CapsuleData capsuleData) : this(capsuleData.p0, capsuleData.p1, capsuleData.radius) { }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6((&___0_capsuleData), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9((&___0_capsuleData), NULL);
		float L_2;
		L_2 = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline((&___0_capsuleData), NULL);
		CapsuleOverlapData__ctor_m3728FFD9B6F888E72987AE5519859D5F211DD08A(__this, L_0, L_1, L_2, NULL);
		// public CapsuleOverlapData(CapsuleData capsuleData) : this(capsuleData.p0, capsuleData.p1, capsuleData.radius) { }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData__ctor_m2E505BAAD8062E61E05A519B38A7C4A4672A9125_AdjustorThunk (RuntimeObject* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData__ctor_m2E505BAAD8062E61E05A519B38A7C4A4672A9125(_thisAdjusted, ___0_capsuleData, method);
}
// System.Void Kit.Physic.CapsuleOverlapData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData__ctor_m3728FFD9B6F888E72987AE5519859D5F211DD08A (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, const RuntimeMethod* method) 
{
	{
		// public CapsuleOverlapData(Vector3 _point0, Vector3 _point1, float _radius) : this()
		il2cpp_codegen_initobj(__this, sizeof(CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D));
		// point0 = _point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point0;
		__this->___point0_0 = L_0;
		// point1 = _point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point1;
		__this->___point1_1 = L_1;
		// radius = _radius;
		float L_2 = ___2__radius;
		__this->___radius_2 = L_2;
		// hitCount = 0;
		CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4_inline(__this, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData__ctor_m3728FFD9B6F888E72987AE5519859D5F211DD08A_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData__ctor_m3728FFD9B6F888E72987AE5519859D5F211DD08A(_thisAdjusted, ___0__point0, ___1__point1, ___2__radius, method);
}
// UnityEngine.Collider[] Kit.Physic.CapsuleOverlapData::Overlap(UnityEngine.CapsuleCollider,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_m395E6BAF0665695BF4950D40AEE1035607FA0775 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(capsuleCollider);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_capsuleCollider;
		CapsuleOverlapData_Update_m83F48E5E70AEBC5C626CE64FB8820171A4C4D51C(__this, L_0, NULL);
		// return Overlap(layerMask, queryTriggerInteraction);
		int32_t L_1 = ___1_layerMask;
		int32_t L_2 = ___2_queryTriggerInteraction;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3;
		L_3 = CapsuleOverlapData_Overlap_mB70134B16B7D75010C500E9E92C29A12C5FFD1B6(__this, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_m395E6BAF0665695BF4950D40AEE1035607FA0775_AdjustorThunk (RuntimeObject* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* _returnValue;
	_returnValue = CapsuleOverlapData_Overlap_m395E6BAF0665695BF4950D40AEE1035607FA0775(_thisAdjusted, ___0_capsuleCollider, ___1_layerMask, ___2_queryTriggerInteraction, method);
	return _returnValue;
}
// UnityEngine.Collider[] Kit.Physic.CapsuleOverlapData::Overlap(Kit.Physic.CapsuleData,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_m908C7FB0F088A93C5BE7C109A919557E924A4B5E (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(capsuleData);
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_0 = ___0_capsuleData;
		CapsuleOverlapData_Update_m80A95DE8D7006F507778118B36BB0F2B05A87432(__this, L_0, NULL);
		// return Overlap(layerMask, queryTriggerInteraction);
		int32_t L_1 = ___1_layerMask;
		int32_t L_2 = ___2_queryTriggerInteraction;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3;
		L_3 = CapsuleOverlapData_Overlap_mB70134B16B7D75010C500E9E92C29A12C5FFD1B6(__this, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_m908C7FB0F088A93C5BE7C109A919557E924A4B5E_AdjustorThunk (RuntimeObject* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* _returnValue;
	_returnValue = CapsuleOverlapData_Overlap_m908C7FB0F088A93C5BE7C109A919557E924A4B5E(_thisAdjusted, ___0_capsuleData, ___1_layerMask, ___2_queryTriggerInteraction, method);
	return _returnValue;
}
// UnityEngine.Collider[] Kit.Physic.CapsuleOverlapData::Overlap(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_mCA406F1680830C8274E2F9D2377E6C3D0BF85D2D (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(_point0, _point1, _radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point1;
		float L_2 = ___2__radius;
		CapsuleOverlapData_Update_m0FFDB6A1301900C37913F86FB5207E0B699474EE(__this, L_0, L_1, L_2, NULL);
		// return Overlap(layerMask, queryTriggerInteraction);
		int32_t L_3 = ___3_layerMask;
		int32_t L_4 = ___4_queryTriggerInteraction;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5;
		L_5 = CapsuleOverlapData_Overlap_mB70134B16B7D75010C500E9E92C29A12C5FFD1B6(__this, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_mCA406F1680830C8274E2F9D2377E6C3D0BF85D2D_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* _returnValue;
	_returnValue = CapsuleOverlapData_Overlap_mCA406F1680830C8274E2F9D2377E6C3D0BF85D2D(_thisAdjusted, ___0__point0, ___1__point1, ___2__radius, ___3_layerMask, ___4_queryTriggerInteraction, method);
	return _returnValue;
}
// UnityEngine.Collider[] Kit.Physic.CapsuleOverlapData::Overlap(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_mB70134B16B7D75010C500E9E92C29A12C5FFD1B6 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method) 
{
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	{
		// Collider[] rst = Physics.OverlapCapsule(point0, point1, radius, layerMask, queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___point0_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___point1_1;
		float L_2 = __this->___radius_2;
		int32_t L_3 = ___0_layerMask;
		int32_t L_4 = ___1_queryTriggerInteraction;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5;
		L_5 = Physics_OverlapCapsule_mE60FD023CFCAFCA0CD4A7D3BD01A8A2C20FC7415(L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// hitCount = rst.Length;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = V_0;
		NullCheck(L_6);
		CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4_inline(__this, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		// return rst;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* CapsuleOverlapData_Overlap_mB70134B16B7D75010C500E9E92C29A12C5FFD1B6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* _returnValue;
	_returnValue = CapsuleOverlapData_Overlap_mB70134B16B7D75010C500E9E92C29A12C5FFD1B6(_thisAdjusted, ___0_layerMask, ___1_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleOverlapData::OverlapNonAlloc(UnityEngine.CapsuleCollider,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_OverlapNonAlloc_m76098E9CC409DAAFB8A3E92AE41CF56235F6A6D3 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___1_results, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return OverlapNonAlloc((CapsuleData)capsuleCollider, ref results, layerMask, queryTriggerInteraction);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_capsuleCollider;
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_1;
		L_1 = CapsuleData_op_Explicit_m24EC285A3353C6DB4560E4FAC95ED8C39DD1FFF1(L_0, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_2 = ___1_results;
		int32_t L_3 = ___2_layerMask;
		int32_t L_4 = ___3_queryTriggerInteraction;
		int32_t L_5;
		L_5 = CapsuleOverlapData_OverlapNonAlloc_m5747867DCD3B714187E9B772497DE12ADB3339F8(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleOverlapData_OverlapNonAlloc_m76098E9CC409DAAFB8A3E92AE41CF56235F6A6D3_AdjustorThunk (RuntimeObject* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___1_results, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleOverlapData_OverlapNonAlloc_m76098E9CC409DAAFB8A3E92AE41CF56235F6A6D3(_thisAdjusted, ___0_capsuleCollider, ___1_results, ___2_layerMask, ___3_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleOverlapData::OverlapNonAlloc(Kit.Physic.CapsuleData,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_OverlapNonAlloc_m5747867DCD3B714187E9B772497DE12ADB3339F8 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___1_results, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(capsuleData);
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_0 = ___0_capsuleData;
		CapsuleOverlapData_Update_m80A95DE8D7006F507778118B36BB0F2B05A87432(__this, L_0, NULL);
		// return OverlapNonAlloc(ref results, layerMask, queryTriggerInteraction);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_1 = ___1_results;
		int32_t L_2 = ___2_layerMask;
		int32_t L_3 = ___3_queryTriggerInteraction;
		int32_t L_4;
		L_4 = CapsuleOverlapData_OverlapNonAlloc_mC3627F4E6F3D12E3B8C848EFA471081C301F179B(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleOverlapData_OverlapNonAlloc_m5747867DCD3B714187E9B772497DE12ADB3339F8_AdjustorThunk (RuntimeObject* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsuleData, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___1_results, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleOverlapData_OverlapNonAlloc_m5747867DCD3B714187E9B772497DE12ADB3339F8(_thisAdjusted, ___0_capsuleData, ___1_results, ___2_layerMask, ___3_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleOverlapData::OverlapNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_OverlapNonAlloc_m1085C34A02E20B72565C3F03A25D0B8EA94C7236 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___3_results, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(_point0, _point1, _radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point1;
		float L_2 = ___2__radius;
		CapsuleOverlapData_Update_m0FFDB6A1301900C37913F86FB5207E0B699474EE(__this, L_0, L_1, L_2, NULL);
		// return OverlapNonAlloc(ref results, layerMask, queryTriggerInteraction);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_3 = ___3_results;
		int32_t L_4 = ___4_layerMask;
		int32_t L_5 = ___5_queryTriggerInteraction;
		int32_t L_6;
		L_6 = CapsuleOverlapData_OverlapNonAlloc_mC3627F4E6F3D12E3B8C848EFA471081C301F179B(__this, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleOverlapData_OverlapNonAlloc_m1085C34A02E20B72565C3F03A25D0B8EA94C7236_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___3_results, int32_t ___4_layerMask, int32_t ___5_queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleOverlapData_OverlapNonAlloc_m1085C34A02E20B72565C3F03A25D0B8EA94C7236(_thisAdjusted, ___0__point0, ___1__point1, ___2__radius, ___3_results, ___4_layerMask, ___5_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.CapsuleOverlapData::OverlapNonAlloc(UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_OverlapNonAlloc_mC3627F4E6F3D12E3B8C848EFA471081C301F179B (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// hitCount = Physics.OverlapCapsuleNonAlloc(point0, point1, radius, results, layerMask, queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___point0_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___point1_1;
		float L_2 = __this->___radius_2;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_3 = ___0_results;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_3);
		int32_t L_5 = ___1_layerMask;
		int32_t L_6 = ___2_queryTriggerInteraction;
		int32_t L_7;
		L_7 = Physics_OverlapCapsuleNonAlloc_mD13F4F0604878062489892A77D92A161681DB167(L_0, L_1, L_2, L_4, L_5, L_6, NULL);
		CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4_inline(__this, L_7, NULL);
		// return hitCount;
		int32_t L_8;
		L_8 = CapsuleOverlapData_get_hitCount_m7BF8D27D74F378CAD3EEC7F95D4D5160001A118E_inline(__this, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t CapsuleOverlapData_OverlapNonAlloc_mC3627F4E6F3D12E3B8C848EFA471081C301F179B_AdjustorThunk (RuntimeObject* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CapsuleOverlapData_OverlapNonAlloc_mC3627F4E6F3D12E3B8C848EFA471081C301F179B(_thisAdjusted, ___0_results, ___1_layerMask, ___2_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Void Kit.Physic.CapsuleOverlapData::DrawOverlapGizmos(UnityEngine.Collider[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_DrawOverlapGizmos_m409F74AB2941BB9D94AC282EB14D0847857C67A0 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B8_0 = NULL;
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B9_1 = NULL;
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___2_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___3_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___3_hitColor;
		G_B6_0 = L_8;
		goto IL_0036;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0036:
	{
		___3_hitColor = G_B6_0;
		// using (new ColorScope(validArraySize == 0 ? color : hitColor))
		int32_t L_10 = ___1_validArraySize;
		G_B7_0 = (&V_1);
		if (!L_10)
		{
			G_B8_0 = (&V_1);
			goto IL_0041;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___3_hitColor;
		G_B9_0 = L_11;
		G_B9_1 = G_B7_0;
		goto IL_0042;
	}

IL_0041:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___2_color;
		G_B9_0 = L_12;
		G_B9_1 = G_B8_0;
	}

IL_0042:
	{
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5(G_B9_1, G_B9_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// GizmosExtend.DrawCapsule(point0, point1, radius);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___point0_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___point1_1;
				float L_15 = __this->___radius_2;
				il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_0;
				GizmosExtend_DrawCapsule_mF15D4ADE29842A326EEEBB412610B81FD3000F64(L_13, L_14, L_15, L_16, NULL);
				// Vector3 origin = Vector3.Lerp(point0, point1, 0.5f);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___point0_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___point1_1;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_17, L_18, (0.5f), NULL);
				V_2 = L_19;
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				V_3 = 0;
				goto IL_009a_1;
			}

IL_0082_1:
			{
				// Gizmos.DrawLine(origin, colliderResult[i].transform.position);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_21 = ___0_colliderResult;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_22 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_21);
				int32_t L_23 = V_3;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				NullCheck(L_25);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
				L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
				NullCheck(L_26);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
				L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_20, L_27, NULL);
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				int32_t L_28 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
			}

IL_009a_1:
			{
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				int32_t L_29 = V_3;
				int32_t L_30 = ___1_validArraySize;
				if ((((int32_t)L_29) >= ((int32_t)L_30)))
				{
					goto IL_00a5_1;
				}
			}
			{
				int32_t L_31 = V_3;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_32 = ___0_colliderResult;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_33 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_32);
				NullCheck(L_33);
				if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
				{
					goto IL_0082_1;
				}
			}

IL_00a5_1:
			{
				// }
				goto IL_00b5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b5:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData_DrawOverlapGizmos_m409F74AB2941BB9D94AC282EB14D0847857C67A0_AdjustorThunk (RuntimeObject* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData_DrawOverlapGizmos_m409F74AB2941BB9D94AC282EB14D0847857C67A0(_thisAdjusted, ___0_colliderResult, ___1_validArraySize, ___2_color, ___3_hitColor, method);
}
// System.Void Kit.Physic.CapsuleOverlapData::Update(UnityEngine.CapsuleCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_Update_m83F48E5E70AEBC5C626CE64FB8820171A4C4D51C (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, const RuntimeMethod* method) 
{
	{
		// Update(new CapsuleData(capsuleCollider));
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = ___0_capsuleCollider;
		CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 L_1;
		memset((&L_1), 0, sizeof(L_1));
		CapsuleData__ctor_m2ED5141915C47146867576F87EABCDC3032FBF12((&L_1), L_0, /*hidden argument*/NULL);
		CapsuleOverlapData_Update_m80A95DE8D7006F507778118B36BB0F2B05A87432(__this, L_1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData_Update_m83F48E5E70AEBC5C626CE64FB8820171A4C4D51C_AdjustorThunk (RuntimeObject* __this, CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___0_capsuleCollider, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData_Update_m83F48E5E70AEBC5C626CE64FB8820171A4C4D51C(_thisAdjusted, ___0_capsuleCollider, method);
}
// System.Void Kit.Physic.CapsuleOverlapData::Update(Kit.Physic.CapsuleData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_Update_m80A95DE8D7006F507778118B36BB0F2B05A87432 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsule, const RuntimeMethod* method) 
{
	{
		// Update(capsule.p0, capsule.p1, capsule.radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CapsuleData_get_p0_mCA20B24C45AF626D79CBAF1431EF276CEE956CC6((&___0_capsule), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CapsuleData_get_p1_m802F2B52EE1BDEF366234BE034D3A7B8D38912A9((&___0_capsule), NULL);
		float L_2;
		L_2 = CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline((&___0_capsule), NULL);
		CapsuleOverlapData_Update_m0FFDB6A1301900C37913F86FB5207E0B699474EE(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData_Update_m80A95DE8D7006F507778118B36BB0F2B05A87432_AdjustorThunk (RuntimeObject* __this, CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31 ___0_capsule, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData_Update_m80A95DE8D7006F507778118B36BB0F2B05A87432(_thisAdjusted, ___0_capsule, method);
}
// System.Void Kit.Physic.CapsuleOverlapData::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_Update_m0FFDB6A1301900C37913F86FB5207E0B699474EE (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, const RuntimeMethod* method) 
{
	{
		// point0 = _point0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__point0;
		__this->___point0_0 = L_0;
		// point1 = _point1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__point1;
		__this->___point1_1 = L_1;
		// radius = _radius;
		float L_2 = ___2__radius;
		__this->___radius_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData_Update_m0FFDB6A1301900C37913F86FB5207E0B699474EE_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__point1, float ___2__radius, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData_Update_m0FFDB6A1301900C37913F86FB5207E0B699474EE(_thisAdjusted, ___0__point0, ___1__point1, ___2__radius, method);
}
// System.Void Kit.Physic.CapsuleOverlapData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleOverlapData_Reset_mA0015F97E7D8FA6477E26D0B553F30D11C08DB67 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// point0 = point1 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		V_0 = L_1;
		__this->___point1_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		__this->___point0_0 = L_2;
		// radius = 0f;
		__this->___radius_2 = (0.0f);
		// hitCount = 0;
		CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4_inline(__this, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CapsuleOverlapData_Reset_mA0015F97E7D8FA6477E26D0B553F30D11C08DB67_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	CapsuleOverlapData_Reset_mA0015F97E7D8FA6477E26D0B553F30D11C08DB67(_thisAdjusted, method);
}
// System.String Kit.Physic.CapsuleOverlapData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CapsuleOverlapData_ToString_m96AC1BB630BD9FE987F2A312193D331A8F8AA828 (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7139B6A7E3DBABDAD233C69E7C3916091800B67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE39E157ED975E957C7C20C5E2D15684597646E85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (hitted) ?
		//     string.Format("Point0: {0:F2}, Point1: {1:F2}, Radius: {2:F2}, Hit: {3}", point0, point1, radius, hitCount) :
		//     string.Format("Point0: {0:F2}, Point1: {1:F2}, Radius: {2:F2}, Hit: None", point0, point1, radius);
		bool L_0;
		L_0 = CapsuleOverlapData_get_hitted_m30ED5ABB4748F79DD6B0BDCE8F82119A48EE638C(__this, NULL);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___point0_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___point1_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_5);
		float L_7 = __this->___radius_2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralE39E157ED975E957C7C20C5E2D15684597646E85, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0034:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___point0_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___point1_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17;
		RuntimeObject* L_19 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		float L_21 = __this->___radius_2;
		float L_22 = L_21;
		RuntimeObject* L_23 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		int32_t L_25;
		L_25 = CapsuleOverlapData_get_hitCount_m7BF8D27D74F378CAD3EEC7F95D4D5160001A118E_inline(__this, NULL);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_27);
		String_t* L_28;
		L_28 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralB7139B6A7E3DBABDAD233C69E7C3916091800B67, L_24, NULL);
		return L_28;
	}
}
IL2CPP_EXTERN_C  String_t* CapsuleOverlapData_ToString_m96AC1BB630BD9FE987F2A312193D331A8F8AA828_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = CapsuleOverlapData_ToString_m96AC1BB630BD9FE987F2A312193D331A8F8AA828(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Kit.Physic.RaycastData Kit.Physic.RaycastData::get_NONE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73 RaycastData_get_NONE_mED93E8F066895E696393D730A23356278AA9B14C (const RuntimeMethod* method) 
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static RaycastData NONE { get { return default(RaycastData); } }
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73));
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RaycastHit Kit.Physic.RaycastData::get_hitResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 RaycastData_get_hitResult_mBFDD1C1A64E46959F1AE1F53792B27AAAC11AA2C (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___hit_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 RaycastData_get_hitResult_mBFDD1C1A64E46959F1AE1F53792B27AAAC11AA2C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 _returnValue;
	_returnValue = RaycastData_get_hitResult_mBFDD1C1A64E46959F1AE1F53792B27AAAC11AA2C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.RaycastData::set_hitResult(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_set_hitResult_mA22B3171DBCE425311D5D7F47ECF993F5A86786E (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___hit_3 = L_0;
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData_set_hitResult_mA22B3171DBCE425311D5D7F47ECF993F5A86786E_AdjustorThunk (RuntimeObject* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastData_set_hitResult_mA22B3171DBCE425311D5D7F47ECF993F5A86786E_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean Kit.Physic.RaycastData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool hitted { get { return hit.transform != null; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = (&__this->___hit_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	bool _returnValue;
	_returnValue = RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.RaycastData::get_hitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastData_get_hitCount_m6E0DE8C711D81AD272E27666FD7025F5C73C2FE3 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RaycastData_get_hitCount_m6E0DE8C711D81AD272E27666FD7025F5C73C2FE3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RaycastData_get_hitCount_m6E0DE8C711D81AD272E27666FD7025F5C73C2FE3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.RaycastData::set_hitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_set_hitCount_mFC2938D0CC67ED1216E5FB3418D6F617FE181BFF (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData_set_hitCount_mFC2938D0CC67ED1216E5FB3418D6F617FE181BFF_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastData_set_hitCount_mFC2938D0CC67ED1216E5FB3418D6F617FE181BFF_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Kit.Physic.RaycastData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData__ctor_m7660EABB53494809E3E2BCBB582AFA2445A8FE7E (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__distance, const RuntimeMethod* method) 
{
	{
		// : this()
		il2cpp_codegen_initobj(__this, sizeof(RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73));
		// origin = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___origin_0 = L_0;
		// direction = _direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__direction;
		__this->___direction_1 = L_1;
		// maxDistance = _distance;
		float L_2 = ___2__distance;
		__this->___maxDistance_2 = L_2;
		// hit = new RaycastHit();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = (&__this->___hit_3);
		il2cpp_codegen_initobj(L_3, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData__ctor_m7660EABB53494809E3E2BCBB582AFA2445A8FE7E_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__distance, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastData__ctor_m7660EABB53494809E3E2BCBB582AFA2445A8FE7E(_thisAdjusted, ___0__origin, ___1__direction, ___2__distance, method);
}
// System.Void Kit.Physic.RaycastData::.ctor(UnityEngine.Ray,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData__ctor_m525EEE69ED8DA6F192AEC119A71A71B0BA590962 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_distance, const RuntimeMethod* method) 
{
	{
		// : this(ray.origin, ray.direction, distance)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0_ray), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0_ray), NULL);
		float L_2 = ___1_distance;
		RaycastData__ctor_m7660EABB53494809E3E2BCBB582AFA2445A8FE7E(__this, L_0, L_1, L_2, NULL);
		// { }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData__ctor_m525EEE69ED8DA6F192AEC119A71A71B0BA590962_AdjustorThunk (RuntimeObject* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_distance, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastData__ctor_m525EEE69ED8DA6F192AEC119A71A71B0BA590962(_thisAdjusted, ___0_ray, ___1_distance, method);
}
// System.Boolean Kit.Physic.RaycastData::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastData_Raycast_m7114E8300524A97AD0FCDBFC8ECBE68CC059DFAD (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2__raycastHit, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* G_B2_0 = NULL;
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* G_B3_1 = NULL;
	{
		// Update(_origin, _direction, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__direction;
		float L_2 = ___3__maxDistance;
		RaycastData_Update_m5E68BB7A28922F95C6A0FBE4E2CF878B00DC66A0(__this, L_0, L_1, L_2, NULL);
		// bool tmp = Physics.Raycast(_origin, _direction, out _raycastHit, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0__origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_5 = ___2__raycastHit;
		float L_6 = ___3__maxDistance;
		int32_t L_7 = ___4__layerMask;
		int32_t L_8 = ___5__queryTriggerInteraction;
		bool L_9;
		L_9 = Physics_Raycast_mA782767AD4F149FBEA32C71460DFF061B7563688(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		// hit = _raycastHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_10 = ___2__raycastHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_11 = (*(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)L_10);
		__this->___hit_3 = L_11;
		// hitCount = tmp ? 1 : 0;
		bool L_12 = V_0;
		G_B1_0 = __this;
		if (L_12)
		{
			G_B2_0 = __this;
			goto IL_002c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		RaycastData_set_hitCount_mFC2938D0CC67ED1216E5FB3418D6F617FE181BFF_inline(G_B3_1, G_B3_0, NULL);
		// return tmp;
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C  bool RaycastData_Raycast_m7114E8300524A97AD0FCDBFC8ECBE68CC059DFAD_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2__raycastHit, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	bool _returnValue;
	_returnValue = RaycastData_Raycast_m7114E8300524A97AD0FCDBFC8ECBE68CC059DFAD(_thisAdjusted, ___0__origin, ___1__direction, ___2__raycastHit, ___3__maxDistance, ___4__layerMask, ___5__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.RaycastData::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastData_Raycast_mFE04754F5462FF2B8319A79559BF7F36722B6D0C (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, int32_t ___3__layerMask, int32_t ___4__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return Raycast(_origin, _direction, out hit, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_2 = (&__this->___hit_3);
		float L_3 = ___2__maxDistance;
		int32_t L_4 = ___3__layerMask;
		int32_t L_5 = ___4__queryTriggerInteraction;
		bool L_6;
		L_6 = RaycastData_Raycast_m7114E8300524A97AD0FCDBFC8ECBE68CC059DFAD(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool RaycastData_Raycast_mFE04754F5462FF2B8319A79559BF7F36722B6D0C_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, int32_t ___3__layerMask, int32_t ___4__queryTriggerInteraction, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	bool _returnValue;
	_returnValue = RaycastData_Raycast_mFE04754F5462FF2B8319A79559BF7F36722B6D0C(_thisAdjusted, ___0__origin, ___1__direction, ___2__maxDistance, ___3__layerMask, ___4__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.RaycastData::Raycast(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastData_Raycast_m700CB39CBEB94AFFF8922EDEA9620DA37D8A7F76 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return Raycast(origin, direction, out hit, maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___direction_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_2 = (&__this->___hit_3);
		float L_3 = __this->___maxDistance_2;
		int32_t L_4 = ___0__layerMask;
		int32_t L_5 = ___1__queryTriggerInteraction;
		bool L_6;
		L_6 = RaycastData_Raycast_m7114E8300524A97AD0FCDBFC8ECBE68CC059DFAD(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool RaycastData_Raycast_m700CB39CBEB94AFFF8922EDEA9620DA37D8A7F76_AdjustorThunk (RuntimeObject* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	bool _returnValue;
	_returnValue = RaycastData_Raycast_m700CB39CBEB94AFFF8922EDEA9620DA37D8A7F76(_thisAdjusted, ___0__layerMask, ___1__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.RaycastData::RaycastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[]&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastData_RaycastNonAlloc_m0AA912047D1981A24874656F2AB5A145AF36468B (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* G_B2_0 = NULL;
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* G_B1_0 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* G_B3_1 = NULL;
	{
		// Update(_origin, _direction, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__direction;
		float L_2 = ___3__maxDistance;
		RaycastData_Update_m5E68BB7A28922F95C6A0FBE4E2CF878B00DC66A0(__this, L_0, L_1, L_2, NULL);
		// hitCount = Physics.RaycastNonAlloc(_origin, _direction, _raycastHits, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0__origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1__direction;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_5 = ___2__raycastHits;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_6 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_5);
		float L_7 = ___3__maxDistance;
		int32_t L_8 = ___4__layerMask;
		int32_t L_9 = ___5__queryTriggerInteraction;
		int32_t L_10;
		L_10 = Physics_RaycastNonAlloc_mB8FE279E06CE87D77387AA9A10562B8052DC8836(L_3, L_4, L_6, L_7, L_8, L_9, NULL);
		RaycastData_set_hitCount_mFC2938D0CC67ED1216E5FB3418D6F617FE181BFF_inline(__this, L_10, NULL);
		// hit = (hitCount > 0) ? _raycastHits[0] : default(RaycastHit); /// to define it's being hit, <see cref="hitted"/>
		int32_t L_11;
		L_11 = RaycastData_get_hitCount_m6E0DE8C711D81AD272E27666FD7025F5C73C2FE3_inline(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_12 = V_0;
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		goto IL_003c;
	}

IL_0034:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_13 = ___2__raycastHits;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_14 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_13);
		NullCheck(L_14);
		int32_t L_15 = 0;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		G_B3_0 = L_16;
		G_B3_1 = G_B2_0;
	}

IL_003c:
	{
		G_B3_1->___hit_3 = G_B3_0;
		// return hitCount;
		int32_t L_17;
		L_17 = RaycastData_get_hitCount_m6E0DE8C711D81AD272E27666FD7025F5C73C2FE3_inline(__this, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  int32_t RaycastData_RaycastNonAlloc_m0AA912047D1981A24874656F2AB5A145AF36468B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___2__raycastHits, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RaycastData_RaycastNonAlloc_m0AA912047D1981A24874656F2AB5A145AF36468B(_thisAdjusted, ___0__origin, ___1__direction, ___2__raycastHits, ___3__maxDistance, ___4__layerMask, ___5__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.RaycastData::RaycastNonAlloc(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastData_RaycastNonAlloc_m79E765CBD50BD7DC35FE0A5C94D95B8BDB829036 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return RaycastNonAlloc(origin, direction, ref _raycastHits, maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___direction_1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_2 = ___0__raycastHits;
		float L_3 = __this->___maxDistance_2;
		int32_t L_4 = ___1__layerMask;
		int32_t L_5 = ___2__queryTriggerInteraction;
		int32_t L_6;
		L_6 = RaycastData_RaycastNonAlloc_m0AA912047D1981A24874656F2AB5A145AF36468B(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t RaycastData_RaycastNonAlloc_m79E765CBD50BD7DC35FE0A5C94D95B8BDB829036_AdjustorThunk (RuntimeObject* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RaycastData_RaycastNonAlloc_m79E765CBD50BD7DC35FE0A5C94D95B8BDB829036(_thisAdjusted, ___0__raycastHits, ___1__layerMask, ___2__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Void Kit.Physic.RaycastData::DrawHitPointReference(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GizmosExtend.DrawPoint(hit.point, scale: 0.1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&___0_hit), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		GizmosExtend_DrawPoint_m1E1DE3BCA49E4E4848F11F0B1F0B78A6570941B9(L_0, L_1, (0.100000001f), NULL);
		// }
		return;
	}
}
// System.Single Kit.Physic.RaycastData::GetHandleSize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastData_GetHandleSize_m57D65744C4B513448573249FB136CAA4F32C0619 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	{
		// return 0f;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C  float RaycastData_GetHandleSize_m57D65744C4B513448573249FB136CAA4F32C0619_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	float _returnValue;
	_returnValue = RaycastData_GetHandleSize_m57D65744C4B513448573249FB136CAA4F32C0619(_thisAdjusted, ___0_pos, method);
	return _returnValue;
}
// System.Void Kit.Physic.RaycastData::DrawGizmos(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_DrawGizmos_mF9AD791E88120A3F0DFED4CC69C4F5B52063EF98 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___0_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___1_hitColor;
		G_B6_0 = L_8;
		goto IL_0034;
	}

IL_002f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0034:
	{
		___1_hitColor = G_B6_0;
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___0_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_1), L_10, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fa:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Gizmos.DrawLine(origin, origin + direction * maxDistance);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___direction_1;
				float L_14 = __this->___maxDistance_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_15, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_11, L_16, NULL);
				// if (!hitted)
				bool L_17;
				L_17 = RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B(__this, NULL);
				if (L_17)
				{
					goto IL_009a_1;
				}
			}
			{
				// Gizmos.DrawWireCube(origin, Vector3.one * 0.1f * GetHandleSize(origin));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (0.100000001f), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___origin_0;
				float L_22;
				L_22 = RaycastData_GetHandleSize_m57D65744C4B513448573249FB136CAA4F32C0619(__this, L_21, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_22, NULL);
				Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_18, L_23, NULL);
				goto IL_0108;
			}

IL_009a_1:
			{
				// using (new ColorScope(hitColor))
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___1_hitColor;
				ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 L_25;
				memset((&L_25), 0, sizeof(L_25));
				ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&L_25), L_24, /*hidden argument*/NULL);
				V_2 = L_25;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ec_1:
					{// begin finally (depth: 2)
						ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_2), NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// Gizmos.DrawWireCube(origin, Vector3.one * 0.1f * GetHandleSize(origin));
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___origin_0;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
					L_27 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
					L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, (0.100000001f), NULL);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___origin_0;
					float L_30;
					L_30 = RaycastData_GetHandleSize_m57D65744C4B513448573249FB136CAA4F32C0619(__this, L_29, NULL);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
					L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_30, NULL);
					Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_26, L_31, NULL);
					// Vector3 point = GetRayEndPoint();
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
					L_32 = RaycastData_GetRayEndPoint_m0C5F5F7FC37EA6B1C8C6BD4639EF0699CE45564E(__this, NULL);
					V_3 = L_32;
					// Gizmos.DrawLine(origin, point);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___origin_0;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_3;
					Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_33, L_34, NULL);
					// DrawHitPointReference(hitResult);
					RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_35;
					L_35 = RaycastData_get_hitResult_mBFDD1C1A64E46959F1AE1F53792B27AAAC11AA2C_inline(__this, NULL);
					RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0(L_35, NULL);
					// }
					goto IL_0108;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0108:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData_DrawGizmos_mF9AD791E88120A3F0DFED4CC69C4F5B52063EF98_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastData_DrawGizmos_mF9AD791E88120A3F0DFED4CC69C4F5B52063EF98(_thisAdjusted, ___0_color, ___1_hitColor, method);
}
// System.Void Kit.Physic.RaycastData::DrawAllGizmos(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_DrawAllGizmos_mBB8BEBD6055314B9E463860C4A8CE314BB204EA0 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___2_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___3_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___3_hitColor;
		G_B6_0 = L_8;
		goto IL_0036;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0036:
	{
		___3_hitColor = G_B6_0;
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___2_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_1), L_10, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fc:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Gizmos.DrawLine(origin, origin + direction * maxDistance);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___direction_1;
				float L_14 = __this->___maxDistance_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_15, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_11, L_16, NULL);
				// if (validArraySize == 0)
				int32_t L_17 = ___1_validArraySize;
				if (L_17)
				{
					goto IL_0095_1;
				}
			}
			{
				// Gizmos.DrawWireCube(origin, Vector3.one * 0.1f * GetHandleSize(origin));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, (0.100000001f), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___origin_0;
				float L_22;
				L_22 = RaycastData_GetHandleSize_m57D65744C4B513448573249FB136CAA4F32C0619(__this, L_21, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_22, NULL);
				Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_18, L_23, NULL);
			}

IL_0095_1:
			{
				// using (new ColorScope(hitColor))
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___3_hitColor;
				ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 L_25;
				memset((&L_25), 0, sizeof(L_25));
				ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&L_25), L_24, /*hidden argument*/NULL);
				V_2 = L_25;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00ee_1:
					{// begin finally (depth: 2)
						ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_2), NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// if (validArraySize > 0)
						int32_t L_26 = ___1_validArraySize;
						if ((((int32_t)L_26) <= ((int32_t)0)))
						{
							goto IL_00cc_2;
						}
					}
					{
						// Gizmos.DrawWireCube(origin, Vector3.one * 0.1f * GetHandleSize(origin));
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___origin_0;
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
						L_28 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
						L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, (0.100000001f), NULL);
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___origin_0;
						float L_31;
						L_31 = RaycastData_GetHandleSize_m57D65744C4B513448573249FB136CAA4F32C0619(__this, L_30, NULL);
						Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
						L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_31, NULL);
						Gizmos_DrawWireCube_m343533B3955A2D04A8638280D0EF537274A1FD8B(L_27, L_32, NULL);
					}

IL_00cc_2:
					{
						// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
						V_3 = 0;
						goto IL_00e1_2;
					}

IL_00d0_2:
					{
						// DrawHitPointReference(raycastHits[i]);
						RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_33 = ___0_raycastHits;
						RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_34 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_33);
						int32_t L_35 = V_3;
						NullCheck(L_34);
						int32_t L_36 = L_35;
						RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
						RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0(L_37, NULL);
						// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
						int32_t L_38 = V_3;
						V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
					}

IL_00e1_2:
					{
						// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
						int32_t L_39 = V_3;
						int32_t L_40 = ___1_validArraySize;
						if ((((int32_t)L_39) >= ((int32_t)L_40)))
						{
							goto IL_00ec_2;
						}
					}
					{
						int32_t L_41 = V_3;
						RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_42 = ___0_raycastHits;
						RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_43 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_42);
						NullCheck(L_43);
						if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
						{
							goto IL_00d0_2;
						}
					}

IL_00ec_2:
					{
						// }
						goto IL_010a;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData_DrawAllGizmos_mBB8BEBD6055314B9E463860C4A8CE314BB204EA0_AdjustorThunk (RuntimeObject* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastData_DrawAllGizmos_mBB8BEBD6055314B9E463860C4A8CE314BB204EA0(_thisAdjusted, ___0_raycastHits, ___1_validArraySize, ___2_color, ___3_hitColor, method);
}
// System.Void Kit.Physic.RaycastData::Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_Update_m5E68BB7A28922F95C6A0FBE4E2CF878B00DC66A0 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method) 
{
	{
		// origin = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___origin_0 = L_0;
		// direction = _direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__direction;
		__this->___direction_1 = L_1;
		// maxDistance = _maxDistance;
		float L_2 = ___2__maxDistance;
		__this->___maxDistance_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData_Update_m5E68BB7A28922F95C6A0FBE4E2CF878B00DC66A0_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__maxDistance, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastData_Update_m5E68BB7A28922F95C6A0FBE4E2CF878B00DC66A0(_thisAdjusted, ___0__origin, ___1__direction, ___2__maxDistance, method);
}
// System.Void Kit.Physic.RaycastData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastData_Reset_m309E45FEF0E089981E61B93271F77E48EEA2AD79 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) 
{
	{
		// origin = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___origin_0 = L_0;
		// direction = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___direction_1 = L_1;
		// maxDistance = 0f;
		__this->___maxDistance_2 = (0.0f);
		// hit = new RaycastHit();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_2 = (&__this->___hit_3);
		il2cpp_codegen_initobj(L_2, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastData_Reset_m309E45FEF0E089981E61B93271F77E48EEA2AD79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	RaycastData_Reset_m309E45FEF0E089981E61B93271F77E48EEA2AD79(_thisAdjusted, method);
}
// System.String Kit.Physic.RaycastData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RaycastData_ToString_mAEF63C48AD92964C51BAFD2167A8ADEC9F752260 (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FCB558390DBD1CD8CB908BA9AF2EB69059913D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35EAC1FFBECF4823C17FC1D459D5C28A1B852B0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (hitted) ?
		//     string.Format("origin {0:F2}, Distance: {1:F2}, Direction : {3:F2}, Hit: {4} ({5:F2})", origin, maxDistance, direction, hit.transform.name, hit.point) :
		//     string.Format("origin {0:F2}, Distance: {1:F2}, Direction : {3:F2}, Hit: None", origin, maxDistance, direction);
		bool L_0;
		L_0 = RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B(__this, NULL);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___maxDistance_2;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___direction_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7;
		RuntimeObject* L_9 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral09FCB558390DBD1CD8CB908BA9AF2EB69059913D, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0034:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		float L_17 = __this->___maxDistance_2;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___direction_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21;
		RuntimeObject* L_23 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_25 = (&__this->___hit_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_25, NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_29 = (&__this->___hit_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30;
		RuntimeObject* L_32 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral35EAC1FFBECF4823C17FC1D459D5C28A1B852B0E, L_28, NULL);
		return L_33;
	}
}
IL2CPP_EXTERN_C  String_t* RaycastData_ToString_mAEF63C48AD92964C51BAFD2167A8ADEC9F752260_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RaycastData_ToString_mAEF63C48AD92964C51BAFD2167A8ADEC9F752260(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.Physic.RaycastData::GetRayEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastData_GetRayEndPoint_m0C5F5F7FC37EA6B1C8C6BD4639EF0699CE45564E (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return origin + direction.normalized * ((hitted) ? hitResult.distance : maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___direction_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_1, NULL);
		bool L_3;
		L_3 = RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B(__this, NULL);
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		float L_4 = __this->___maxDistance_2;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002f;
	}

IL_0021:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_5;
		L_5 = RaycastData_get_hitResult_mBFDD1C1A64E46959F1AE1F53792B27AAAC11AA2C_inline(__this, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B3_1, G_B3_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B3_2, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastData_GetRayEndPoint_m0C5F5F7FC37EA6B1C8C6BD4639EF0699CE45564E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = RaycastData_GetRayEndPoint_m0C5F5F7FC37EA6B1C8C6BD4639EF0699CE45564E(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Kit.Physic.RaycastHelper/eRayType Kit.Physic.RaycastHelper::get_RayType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastHelper_get_RayType_mBC7E3B98E8F1B5670C54713DE4E324FE3D3DD11A (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_RayType; }
		int32_t L_0 = __this->___m_RayType_11;
		return L_0;
	}
}
// System.Void Kit.Physic.RaycastHelper::set_RayType(Kit.Physic.RaycastHelper/eRayType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_set_RayType_m33A2E5D0FAAD254D1B4323E950EFD5D59CD35ABA (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (m_RayType != value)
		int32_t L_0 = __this->___m_RayType_11;
		int32_t L_1 = ___0_value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// m_RayType = value;
		int32_t L_2 = ___0_value;
		__this->___m_RayType_11 = L_2;
		// _Init();
		RaycastHelper__Init_mAA0DD628B3C13BC4AA41170F9E43834BF088EC06(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Int32 Kit.Physic.RaycastHelper::get_m_HittedCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// public int m_HittedCount { get; private set; }
		int32_t L_0 = __this->___U3Cm_HittedCountU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void Kit.Physic.RaycastHelper::set_m_HittedCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int m_HittedCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3Cm_HittedCountU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_OnValidate_m989A8CB488C6FC6D2DCE38FB6A44D4286916E80B (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_Distance = Mathf.Clamp(m_Distance, 0f, float.MaxValue);
		float L_0 = __this->___m_Distance_12;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), ((std::numeric_limits<float>::max)()), NULL);
		__this->___m_Distance_12 = L_1;
		// m_Radius = Mathf.Clamp(m_Radius, 0f, float.MaxValue);
		float L_2 = __this->___m_Radius_14;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), ((std::numeric_limits<float>::max)()), NULL);
		__this->___m_Radius_14 = L_3;
		// m_MemoryArraySize = Mathf.Max(m_MemoryArraySize, 0);
		int32_t L_4 = __this->___m_MemoryArraySize_21;
		int32_t L_5;
		L_5 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_4, 0, NULL);
		__this->___m_MemoryArraySize_21 = L_5;
		// m_HalfExtends.x = Mathf.Clamp(m_HalfExtends.x, 0f, float.MaxValue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___m_HalfExtends_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___m_HalfExtends_18);
		float L_8 = L_7->___x_2;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (0.0f), ((std::numeric_limits<float>::max)()), NULL);
		L_6->___x_2 = L_9;
		// m_HalfExtends.y = Mathf.Clamp(m_HalfExtends.y, 0f, float.MaxValue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___m_HalfExtends_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___m_HalfExtends_18);
		float L_12 = L_11->___y_3;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, (0.0f), ((std::numeric_limits<float>::max)()), NULL);
		L_10->___y_3 = L_13;
		// m_HalfExtends.z = Mathf.Clamp(m_HalfExtends.z, 0f, float.MaxValue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___m_HalfExtends_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___m_HalfExtends_18);
		float L_16 = L_15->___z_4;
		float L_17;
		L_17 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_16, (0.0f), ((std::numeric_limits<float>::max)()), NULL);
		L_14->___z_4 = L_17;
		// _Init();
		RaycastHelper__Init_mAA0DD628B3C13BC4AA41170F9E43834BF088EC06(__this, NULL);
		// }
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_Awake_m8EE3D355A8F199A06C6792AFE7F6BD8A92FCE734 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// _Init();
		RaycastHelper__Init_mAA0DD628B3C13BC4AA41170F9E43834BF088EC06(__this, NULL);
		// }
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_OnDrawGizmosSelected_m3E3D4743FE15EA122FFA1D624734D94B59094A68 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// if (m_DebugMethod == eDebugMethod.OnDrawGizmosSelected)
		int32_t L_0 = __this->___m_DebugMethod_27;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		// _DrawGizmos();
		RaycastHelper__DrawGizmos_m86B08D10038AFDEA486AA5E9ABFA16DF6A76BA7C(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_OnDrawGizmos_mFC80228ABEBEF972DC679BBAEF8A277EF1618111 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// if (m_DebugMethod == eDebugMethod.OnDrawGizmos)
		int32_t L_0 = __this->___m_DebugMethod_27;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// _DrawGizmos();
		RaycastHelper__DrawGizmos_m86B08D10038AFDEA486AA5E9ABFA16DF6A76BA7C(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_FixedUpdate_m4472D7F2348AC8ECCBE294F521E566D1404F5877 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_FixedUpdateCount++;
		int32_t L_0 = __this->___m_FixedUpdateCount_34;
		__this->___m_FixedUpdateCount_34 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (!m_FixedUpdate)
		bool L_1 = __this->___m_FixedUpdate_24;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// CheckPhysic(false);
		bool L_2;
		L_2 = RaycastHelper_CheckPhysic_mFAF2D1243C248B276A3D3F3B12B09913B2A0F85B(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::CheckPhysic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_CheckPhysic_mFAF2D1243C248B276A3D3F3B12B09913B2A0F85B (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, bool ___0_forceUpdate, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (forceUpdate || m_CurrentFixedUpdate != m_FixedUpdateCount)
		bool L_0 = ___0_forceUpdate;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->___m_CurrentFixedUpdate_35;
		int32_t L_2 = __this->___m_FixedUpdateCount_34;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0029;
		}
	}

IL_0011:
	{
		// m_CurrentFixedUpdate = m_FixedUpdateCount;
		int32_t L_3 = __this->___m_FixedUpdateCount_34;
		__this->___m_CurrentFixedUpdate_35 = L_3;
		// return m_PhysicRaycast();
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_4 = __this->___m_PhysicRaycast_33;
		NullCheck(L_4);
		bool L_5;
		L_5 = PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_inline(L_4, NULL);
		return L_5;
	}

IL_0029:
	{
		// switch (m_RayType)
		int32_t L_6 = __this->___m_RayType_11;
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) > ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_8 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)10))))
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_008e;
			}
			case 3:
			{
				goto IL_0141;
			}
			case 4:
			{
				goto IL_0141;
			}
			case 5:
			{
				goto IL_009a;
			}
			case 6:
			{
				goto IL_009a;
			}
			case 7:
			{
				goto IL_00ea;
			}
			case 8:
			{
				goto IL_0141;
			}
			case 9:
			{
				goto IL_0141;
			}
			case 10:
			{
				goto IL_0129;
			}
			case 11:
			{
				goto IL_0129;
			}
			case 12:
			{
				goto IL_0135;
			}
		}
	}
	{
		goto IL_0141;
	}

IL_0076:
	{
		// case eRayType.RaycastAll: return m_RayData.hitted;
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* L_9 = (&__this->___m_RayData_4);
		bool L_10;
		L_10 = RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B(L_9, NULL);
		return L_10;
	}

IL_0082:
	{
		// case eRayType.SphereCastAll: return m_SphereRayData.hitted;
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* L_11 = (&__this->___m_SphereRayData_5);
		bool L_12;
		L_12 = SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096(L_11, NULL);
		return L_12;
	}

IL_008e:
	{
		// case eRayType.SphereOverlap: return m_SphereOverlapData.hitted;
		SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* L_13 = (&__this->___m_SphereOverlapData_6);
		bool L_14;
		L_14 = SphereOverlapData_get_hitted_mB28B0E30933C4AFC6187E2659293FFBCBF0091AE(L_13, NULL);
		return L_14;
	}

IL_009a:
	{
		// m_CapsulecastData.Update(
		//     transform.TransformPoint(m_LocalPoint1),
		//     transform.TransformPoint(m_LocalPoint2),
		//     m_Radius, transform.forward, m_Distance);
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_15 = (&__this->___m_CapsulecastData_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___m_LocalPoint1_15;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_16, L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___m_LocalPoint2_16;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_19, L_20, NULL);
		float L_22 = __this->___m_Radius_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_23, NULL);
		float L_25 = __this->___m_Distance_12;
		CapsuleCastData_Update_m5F06B06A508E9DF8ACD552A82F31CCCF57C73051(L_15, L_18, L_21, L_22, L_24, L_25, NULL);
		// return m_CapsulecastData.hitted;
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_26 = (&__this->___m_CapsulecastData_7);
		bool L_27;
		L_27 = CapsuleCastData_get_hitted_m89C3C7558AA4CEE173A84B6A332DD5EF1673B9DE(L_26, NULL);
		return L_27;
	}

IL_00ea:
	{
		// m_CapsuleOverlapData.Update(
		//     transform.TransformPoint(m_LocalPoint1),
		//     transform.TransformPoint(m_LocalPoint2),
		//     m_Radius);
		CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* L_28 = (&__this->___m_CapsuleOverlapData_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___m_LocalPoint1_15;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_29, L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___m_LocalPoint2_16;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_32, L_33, NULL);
		float L_35 = __this->___m_Radius_14;
		CapsuleOverlapData_Update_m0FFDB6A1301900C37913F86FB5207E0B699474EE(L_28, L_31, L_34, L_35, NULL);
		// return m_CapsuleOverlapData.hitted;
		CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* L_36 = (&__this->___m_CapsuleOverlapData_8);
		bool L_37;
		L_37 = CapsuleOverlapData_get_hitted_m30ED5ABB4748F79DD6B0BDCE8F82119A48EE638C(L_36, NULL);
		return L_37;
	}

IL_0129:
	{
		// case eRayType.BoxCastAll: return m_BoxcastData.hitted;
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* L_38 = (&__this->___m_BoxcastData_9);
		bool L_39;
		L_39 = BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188(L_38, NULL);
		return L_39;
	}

IL_0135:
	{
		// case eRayType.BoxOverlap: return m_BoxOverlapData.hitted;
		BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* L_40 = (&__this->___m_BoxOverlapData_10);
		bool L_41;
		L_41 = BoxOverlapData_get_hitted_mFF6BE85F1E92EA07D9C6AFA78A00D20F0CBDAE86(L_40, NULL);
		return L_41;
	}

IL_0141:
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_42 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_42);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_42, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RaycastHelper_CheckPhysic_mFAF2D1243C248B276A3D3F3B12B09913B2A0F85B_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Collider> Kit.Physic.RaycastHelper::GetOverlapColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RaycastHelper_GetOverlapColliders_mAB93C69E5729FDC147556E4970C90C91304F11D0 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* L_0 = (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864*)il2cpp_codegen_object_new(U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetOverlapCollidersU3Ed__49__ctor_m9C2C784723DF4C9227EBBA4F2256B0A5834AF5AE(L_0, ((int32_t)-2), NULL);
		U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit> Kit.Physic.RaycastHelper::GetRaycastHits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RaycastHelper_GetRaycastHits_m40C2F8509242ABB4975DBA4934CC6073952BA0B2 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* L_0 = (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04*)il2cpp_codegen_object_new(U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetRaycastHitsU3Ed__50__ctor_mC4AC85E091C5D92FDC9E253889FDB8ED65146925(L_0, ((int32_t)-2), NULL);
		U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Void Kit.Physic.RaycastHelper::SetMemorySize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_SetMemorySize_mFAEC2EF7B7A64EEF3A6B006C616DD7813601412A (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper__IsType_TisIOverlapStruct_t8C70871404986120173EBAEA7753823B7562D8F8_m7C45831E0C4476E30027793FFD077566D476564F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper__IsType_TisIRayAllStruct_t409B172530C2FD9CCE5A3757D90FBB81EECA2CB9_mF15C1E8504A5C698745122DB2936B46CC3111F57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95408E38D178A995B2DD658726B461208160063C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_MemoryArraySize == size)
		int32_t L_0 = __this->___m_MemoryArraySize_21;
		int32_t L_1 = ___0_size;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (size < 0)
		int32_t L_2 = ___0_size;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// size = 0;
		___0_size = 0;
	}

IL_0011:
	{
		// if (size == 0)
		int32_t L_3 = ___0_size;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning(ZERO_MEMORY, this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral95408E38D178A995B2DD658726B461208160063C, __this, NULL);
	}

IL_001f:
	{
		// m_MemoryArraySize = size;
		int32_t L_4 = ___0_size;
		__this->___m_MemoryArraySize_21 = L_4;
		// m_HittedCount = 0;
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(__this, 0, NULL);
		// if (_IsType<IOverlapStruct>())
		bool L_5;
		L_5 = RaycastHelper__IsType_TisIOverlapStruct_t8C70871404986120173EBAEA7753823B7562D8F8_m7C45831E0C4476E30027793FFD077566D476564F(__this, RaycastHelper__IsType_TisIOverlapStruct_t8C70871404986120173EBAEA7753823B7562D8F8_m7C45831E0C4476E30027793FFD077566D476564F_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// m_OverlapColliders = new Collider[m_MemoryArraySize];
		int32_t L_6 = __this->___m_MemoryArraySize_21;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)SZArrayNew(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___m_OverlapColliders_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverlapColliders_20), (void*)L_7);
		return;
	}

IL_0047:
	{
		// else if (_IsType<IRayAllStruct>())
		bool L_8;
		L_8 = RaycastHelper__IsType_TisIRayAllStruct_t409B172530C2FD9CCE5A3757D90FBB81EECA2CB9_mF15C1E8504A5C698745122DB2936B46CC3111F57(__this, RaycastHelper__IsType_TisIRayAllStruct_t409B172530C2FD9CCE5A3757D90FBB81EECA2CB9_mF15C1E8504A5C698745122DB2936B46CC3111F57_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		// m_RaycastHits = new RaycastHit[m_MemoryArraySize];
		int32_t L_9 = __this->___m_MemoryArraySize_21;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_10 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___m_RaycastHits_23 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastHits_23), (void*)L_10);
	}

IL_0060:
	{
		// }
		return;
	}
}
// Kit.Physic.IRayStructBase Kit.Physic.RaycastHelper::GetCurrentStruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RaycastHelper_GetCurrentStruct_m04056E375F2F7DAB9C991D42368A74E25D16E661 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (m_RayType)
		int32_t L_0 = __this->___m_RayType_11;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)10))))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_009e;
			}
			case 4:
			{
				goto IL_009e;
			}
			case 5:
			{
				goto IL_006e;
			}
			case 6:
			{
				goto IL_006e;
			}
			case 7:
			{
				goto IL_007a;
			}
			case 8:
			{
				goto IL_009e;
			}
			case 9:
			{
				goto IL_009e;
			}
			case 10:
			{
				goto IL_0086;
			}
			case 11:
			{
				goto IL_0086;
			}
			case 12:
			{
				goto IL_0092;
			}
		}
	}
	{
		goto IL_009e;
	}

IL_004a:
	{
		// case eRayType.RaycastAll: return m_RayData;
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73 L_3 = __this->___m_RayData_4;
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73 L_4 = L_3;
		RuntimeObject* L_5 = Box(RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73_il2cpp_TypeInfo_var, &L_4);
		return (RuntimeObject*)L_5;
	}

IL_0056:
	{
		// case eRayType.SphereCastAll: return m_SphereRayData;
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32 L_6 = __this->___m_SphereRayData_5;
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32 L_7 = L_6;
		RuntimeObject* L_8 = Box(SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32_il2cpp_TypeInfo_var, &L_7);
		return (RuntimeObject*)L_8;
	}

IL_0062:
	{
		// case eRayType.SphereOverlap: return m_SphereOverlapData;
		SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61 L_9 = __this->___m_SphereOverlapData_6;
		SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61 L_10 = L_9;
		RuntimeObject* L_11 = Box(SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61_il2cpp_TypeInfo_var, &L_10);
		return (RuntimeObject*)L_11;
	}

IL_006e:
	{
		// case eRayType.CapsuleCastAll: return m_CapsulecastData;
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C L_12 = __this->___m_CapsulecastData_7;
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C L_13 = L_12;
		RuntimeObject* L_14 = Box(CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C_il2cpp_TypeInfo_var, &L_13);
		return (RuntimeObject*)L_14;
	}

IL_007a:
	{
		// case eRayType.CapsuleOverlap: return m_CapsuleOverlapData;
		CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D L_15 = __this->___m_CapsuleOverlapData_8;
		CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D L_16 = L_15;
		RuntimeObject* L_17 = Box(CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D_il2cpp_TypeInfo_var, &L_16);
		return (RuntimeObject*)L_17;
	}

IL_0086:
	{
		// case eRayType.BoxCastAll: return m_BoxcastData;
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3 L_18 = __this->___m_BoxcastData_9;
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3 L_19 = L_18;
		RuntimeObject* L_20 = Box(BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3_il2cpp_TypeInfo_var, &L_19);
		return (RuntimeObject*)L_20;
	}

IL_0092:
	{
		// case eRayType.BoxOverlap: return m_BoxOverlapData;
		BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465 L_21 = __this->___m_BoxOverlapData_10;
		BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465 L_22 = L_21;
		RuntimeObject* L_23 = Box(BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465_il2cpp_TypeInfo_var, &L_22);
		return (RuntimeObject*)L_23;
	}

IL_009e:
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_24 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RaycastHelper_GetCurrentStruct_m04056E375F2F7DAB9C991D42368A74E25D16E661_RuntimeMethod_var)));
	}
}
// System.Void Kit.Physic.RaycastHelper::_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper__Init_mAA0DD628B3C13BC4AA41170F9E43834BF088EC06 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_0_mB911D120E20579295D4FA651F40F94DE1809C7E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_10_mFA7686AA5D1B347E7A0DF84AC0CC353C6428860F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_11_mA76788FE21EE1347629A9104BE6EE77B03560235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_12_m4791B63F99C35F95DE7ADC946188D3A274F37E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_13_m0FFB60ABD2C409BB9503990D5E3A0EEA9290F98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_14_m5CA5E0E22C4E2173C6836D2C66BF04156F11767D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_15_m27701BDB9F0B7BC4FB0B68B6B284EF00B3B70107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_16_mA3ADB575AC6F3721469019C949B8FC9FC6AE8A63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_17_m8F313ED3837CA09660DE227AE57D2EFC235958C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_18_mB4ABE81681C17DC62E141A828F823A8E70868855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_19_mF961D4DF803EDC6BEDE45A088FAA0D6824037AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_1_m043B800125FB65448DAEDCB6101AFCD5702CAE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_20_mB7DC82063F22DF58F1062564594C8ECE3D01894F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_21_mE088869C9F9484EFB42A1750AE1C0F912C9902B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_2_mE66F338B2F1F664311A28124A7BB1FAB567D784A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_3_mEE1B22332A308649C9417D27B3BDA3249776D568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_4_m9A3511AC6CA0338121D0BFCC85189899F03CCCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_5_m790B4574F1EA3F3FABC92934C3D1BA188A009A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_6_m38973ED1751F0C6FAFEC97D1CBC017C9821C59C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_7_mFCEE71C6F65552F3E60F15C47B76E11D68C5E8DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_8_m937A64AA9890F6B86FE765977398BC6866A1C5FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper_U3C_InitU3Eb__53_9_m93849DA12BDDECA559DED5B381619D5DA3849178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// m_RayData.Reset();
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* L_0 = (&__this->___m_RayData_4);
		RaycastData_Reset_m309E45FEF0E089981E61B93271F77E48EEA2AD79(L_0, NULL);
		// m_SphereRayData.Reset();
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* L_1 = (&__this->___m_SphereRayData_5);
		SphereCastData_Reset_mD36F9552A6C8BE840E5053E38D8FC49B5E9D1832(L_1, NULL);
		// m_SphereOverlapData.Reset();
		SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* L_2 = (&__this->___m_SphereOverlapData_6);
		SphereOverlapData_Reset_mA3D80F1E9406DED6C3B6E4D67D1FED49EBF002A1(L_2, NULL);
		// m_CapsulecastData.Reset();
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_3 = (&__this->___m_CapsulecastData_7);
		CapsuleCastData_Reset_mEEF8DD91963433ADDB46ED9842AA665E396F1DA1(L_3, NULL);
		// m_CapsuleOverlapData.Reset();
		CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* L_4 = (&__this->___m_CapsuleOverlapData_8);
		CapsuleOverlapData_Reset_mA0015F97E7D8FA6477E26D0B553F30D11C08DB67(L_4, NULL);
		// m_BoxcastData.Reset();
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* L_5 = (&__this->___m_BoxcastData_9);
		BoxCastData_Reset_mABF2F82297F406C47EA8B6A723E20689567F8978(L_5, NULL);
		// m_BoxOverlapData.Reset();
		BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* L_6 = (&__this->___m_BoxOverlapData_10);
		BoxOverlapData_Reset_m37BFD7E99645CE966A37A5587EAC84DBE84AD2A8(L_6, NULL);
		// m_OverlapColliders = new Collider[0];
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)SZArrayNew(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_OverlapColliders_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverlapColliders_20), (void*)L_7);
		// m_RaycastHits = new RaycastHit[0];
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_8 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_RaycastHits_23 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastHits_23), (void*)L_8);
		// m_HittedCount = 0;
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(__this, 0, NULL);
		// switch (m_RayType)
		int32_t L_9 = __this->___m_RayType_11;
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_12 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)10))))
		{
			case 0:
			{
				goto IL_011f;
			}
			case 1:
			{
				goto IL_0148;
			}
			case 2:
			{
				goto IL_0182;
			}
			case 3:
			{
				goto IL_02ed;
			}
			case 4:
			{
				goto IL_02ed;
			}
			case 5:
			{
				goto IL_0259;
			}
			case 6:
			{
				goto IL_027f;
			}
			case 7:
			{
				goto IL_02b6;
			}
			case 8:
			{
				goto IL_02ed;
			}
			case 9:
			{
				goto IL_02ed;
			}
			case 10:
			{
				goto IL_01bc;
			}
			case 11:
			{
				goto IL_01e5;
			}
			case 12:
			{
				goto IL_021f;
			}
		}
	}
	{
		goto IL_02ed;
	}

IL_00bc:
	{
		// m_PhysicRaycast = () =>
		// {
		//     if (m_RayData.Raycast(transform.TransformPoint(m_LocalPosition), transform.forward, m_Distance, m_LayerMask, m_QueryTriggerInteraction))
		//     {
		//         _TriggerHitEvent(m_RayData.hitResult.transform);
		//     }
		//     return m_RayData.hitted;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_13 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_13, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_0_mB911D120E20579295D4FA651F40F94DE1809C7E0_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_13);
		// m_DrawGizmos = () =>
		// {
		//     m_RayData.DrawGizmos(m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_1_m043B800125FB65448DAEDCB6101AFCD5702CAE50_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_14);
		// } break;
		goto IL_02f3;
	}

IL_00e5:
	{
		// m_RaycastHits = new RaycastHit[m_MemoryArraySize];
		int32_t L_15 = __this->___m_MemoryArraySize_21;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_16 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->___m_RaycastHits_23 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastHits_23), (void*)L_16);
		// m_PhysicRaycast = () =>
		// {
		//     m_HittedCount = m_RayData.RaycastNonAlloc(transform.TransformPoint(m_LocalPosition), transform.forward, ref m_RaycastHits, m_Distance, m_LayerMask, m_QueryTriggerInteraction);
		//     Debug.Log("count: " + m_HittedCount + ", " + m_RaycastHits.Length);
		//     for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		//         _TriggerHitEvent(m_RaycastHits[i].transform);
		//     return m_HittedCount > 0;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_17 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_17, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_2_mE66F338B2F1F664311A28124A7BB1FAB567D784A_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_17);
		// m_DrawGizmos = () =>
		// {
		//     m_RayData.DrawAllGizmos(ref m_RaycastHits, m_HittedCount, m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_18, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_3_mEE1B22332A308649C9417D27B3BDA3249776D568_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_18);
		// } break;
		goto IL_02f3;
	}

IL_011f:
	{
		// m_PhysicRaycast = () =>
		// {
		//     if (m_SphereRayData.SphereCast(transform.TransformPoint(m_LocalPosition), m_Radius, transform.forward, m_Distance, m_LayerMask, m_QueryTriggerInteraction))
		//     {
		//         _TriggerHitEvent(m_SphereRayData.hitResult.transform);
		//     }
		//     return m_SphereRayData.hitted;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_19 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_19, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_4_m9A3511AC6CA0338121D0BFCC85189899F03CCCEE_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_19);
		// m_DrawGizmos = () =>
		// {
		//     m_SphereRayData.DrawGizmos(m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_20, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_5_m790B4574F1EA3F3FABC92934C3D1BA188A009A61_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_20);
		// } break;
		goto IL_02f3;
	}

IL_0148:
	{
		// m_RaycastHits = new RaycastHit[m_MemoryArraySize];
		int32_t L_21 = __this->___m_MemoryArraySize_21;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_22 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->___m_RaycastHits_23 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastHits_23), (void*)L_22);
		// m_PhysicRaycast = () =>
		// {
		//     m_HittedCount = m_SphereRayData.SphereCastNonAlloc(transform.TransformPoint(m_LocalPosition), m_Radius,transform.forward, m_Distance, m_RaycastHits, m_LayerMask, m_QueryTriggerInteraction);
		//     for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		//         _TriggerHitEvent(m_RaycastHits[i].transform);
		//     return m_HittedCount > 0;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_23 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_23, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_6_m38973ED1751F0C6FAFEC97D1CBC017C9821C59C5_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_23);
		// m_DrawGizmos = () =>
		// {
		//     m_SphereRayData.DrawAllGizmos(ref m_RaycastHits, m_HittedCount, m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_24, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_7_mFCEE71C6F65552F3E60F15C47B76E11D68C5E8DF_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_24);
		// } break;
		goto IL_02f3;
	}

IL_0182:
	{
		// m_OverlapColliders = new Collider[m_MemoryArraySize];
		int32_t L_25 = __this->___m_MemoryArraySize_21;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_26 = (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)SZArrayNew(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->___m_OverlapColliders_20 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverlapColliders_20), (void*)L_26);
		// m_PhysicRaycast = () =>
		// {
		//     m_HittedCount = m_SphereOverlapData.OverlapNonAlloc(transform.TransformPoint(m_LocalPosition), m_Radius, ref m_OverlapColliders, m_LayerMask, m_QueryTriggerInteraction);
		//     for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		//         _TriggerHitEvent(m_OverlapColliders[i].transform);
		//     return m_HittedCount > 0;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_27 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_27, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_8_m937A64AA9890F6B86FE765977398BC6866A1C5FB_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_27);
		// m_DrawGizmos = () =>
		// {
		//     m_SphereOverlapData.DrawOverlapGizmos(ref m_OverlapColliders, m_HittedCount, m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_28, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_9_m93849DA12BDDECA559DED5B381619D5DA3849178_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_28);
		// } break;
		goto IL_02f3;
	}

IL_01bc:
	{
		// m_PhysicRaycast = () =>
		// {
		//     if (m_BoxcastData.BoxCast(transform.TransformPoint(m_LocalPosition), m_HalfExtends, transform.forward, (m_UnSyncRotation) ? Quaternion.Euler(m_LocalRotation) : transform.rotation * Quaternion.Euler(m_LocalRotation), m_Distance, m_LayerMask, m_QueryTriggerInteraction))
		//     {
		//         _TriggerHitEvent(m_BoxcastData.hitResult.transform);
		//     }
		//     return m_BoxcastData.hitted;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_29 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_29, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_10_mFA7686AA5D1B347E7A0DF84AC0CC353C6428860F_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_29);
		// m_DrawGizmos = () =>
		// {
		//     m_BoxcastData.DrawGizmos(m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_30, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_11_mA76788FE21EE1347629A9104BE6EE77B03560235_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_30);
		// } break;
		goto IL_02f3;
	}

IL_01e5:
	{
		// m_RaycastHits = new RaycastHit[m_MemoryArraySize];
		int32_t L_31 = __this->___m_MemoryArraySize_21;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_32 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)L_31);
		__this->___m_RaycastHits_23 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastHits_23), (void*)L_32);
		// m_PhysicRaycast = () =>
		// {
		//     m_HittedCount = m_BoxcastData.BoxCastNonAlloc(transform.TransformPoint(m_LocalPosition), m_HalfExtends, transform.forward, m_RaycastHits, (m_UnSyncRotation) ? Quaternion.Euler(m_LocalRotation) : transform.rotation * Quaternion.Euler(m_LocalRotation), m_Distance, m_LayerMask, m_QueryTriggerInteraction);
		//     for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		//         _TriggerHitEvent(m_RaycastHits[i].transform);
		//     return m_HittedCount > 0;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_33 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_33, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_12_m4791B63F99C35F95DE7ADC946188D3A274F37E97_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_33);
		// m_DrawGizmos = () =>
		// {
		//     m_BoxcastData.DrawAllGizmos(ref m_RaycastHits, m_HittedCount, m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_34 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_34, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_13_m0FFB60ABD2C409BB9503990D5E3A0EEA9290F98A_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_34);
		// } break;
		goto IL_02f3;
	}

IL_021f:
	{
		// m_OverlapColliders = new Collider[m_MemoryArraySize];
		int32_t L_35 = __this->___m_MemoryArraySize_21;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_36 = (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)SZArrayNew(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var, (uint32_t)L_35);
		__this->___m_OverlapColliders_20 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverlapColliders_20), (void*)L_36);
		// m_PhysicRaycast = () =>
		// {
		//     m_HittedCount = m_BoxOverlapData.OverlapNonAlloc(transform.TransformPoint(m_LocalPosition), m_HalfExtends, (m_UnSyncRotation) ? Quaternion.Euler(m_LocalRotation) : transform.rotation * Quaternion.Euler(m_LocalRotation), ref m_OverlapColliders, m_LayerMask, m_QueryTriggerInteraction);
		//     for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		//         _TriggerHitEvent(m_OverlapColliders[i].transform);
		//     return m_HittedCount > 0;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_37 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_37, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_14_m5CA5E0E22C4E2173C6836D2C66BF04156F11767D_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_37);
		// m_DrawGizmos = () =>
		// {
		//     m_BoxOverlapData.DrawOverlapGizmos(ref m_OverlapColliders, m_HittedCount, m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_38 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_38, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_15_m27701BDB9F0B7BC4FB0B68B6B284EF00B3B70107_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_38);
		// } break;
		goto IL_02f3;
	}

IL_0259:
	{
		// m_PhysicRaycast = () =>
		// {
		//     if (m_CapsulecastData.CapsuleCast(
		//         transform.TransformPoint(m_LocalPoint1),
		//         transform.TransformPoint(m_LocalPoint2),
		//         m_Radius, transform.forward, m_Distance, m_LayerMask, m_QueryTriggerInteraction))
		//     {
		//         _TriggerHitEvent(m_CapsulecastData.hitResult.transform);
		//     }
		//     return m_CapsulecastData.hitted;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_39 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_39, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_16_mA3ADB575AC6F3721469019C949B8FC9FC6AE8A63_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_39);
		// m_DrawGizmos = () =>
		// {
		//     m_CapsulecastData.DrawGizmos(m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_40 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_40, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_17_m8F313ED3837CA09660DE227AE57D2EFC235958C7_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_40);
		// } break;
		goto IL_02f3;
	}

IL_027f:
	{
		// m_RaycastHits = new RaycastHit[m_MemoryArraySize];
		int32_t L_41 = __this->___m_MemoryArraySize_21;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_42 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->___m_RaycastHits_23 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastHits_23), (void*)L_42);
		// m_PhysicRaycast = () =>
		// {
		//     m_HittedCount = m_CapsulecastData.CapsuleCastNonAlloc(
		//         transform.TransformPoint(m_LocalPoint1),
		//         transform.TransformPoint(m_LocalPoint2),
		//         m_Radius, transform.forward, m_RaycastHits, m_Distance, m_LayerMask, m_QueryTriggerInteraction);
		//     for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		//         _TriggerHitEvent(m_RaycastHits[i].transform);
		//     return m_HittedCount > 0;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_43 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_43, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_18_mB4ABE81681C17DC62E141A828F823A8E70868855_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_43);
		// m_DrawGizmos = () =>
		// {
		//     m_CapsulecastData.DrawAllGizmos(ref m_RaycastHits, m_HittedCount, m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_44 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_44, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_19_mF961D4DF803EDC6BEDE45A088FAA0D6824037AFE_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_44);
		// } break;
		goto IL_02f3;
	}

IL_02b6:
	{
		// m_OverlapColliders = new Collider[m_MemoryArraySize];
		int32_t L_45 = __this->___m_MemoryArraySize_21;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_46 = (ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*)SZArrayNew(ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787_il2cpp_TypeInfo_var, (uint32_t)L_45);
		__this->___m_OverlapColliders_20 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverlapColliders_20), (void*)L_46);
		// m_PhysicRaycast = () =>
		// {
		//     m_HittedCount = m_CapsuleOverlapData.OverlapNonAlloc(
		//         transform.TransformPoint(m_LocalPoint1),
		//         transform.TransformPoint(m_LocalPoint2),
		//         m_Radius, ref m_OverlapColliders, m_LayerMask, m_QueryTriggerInteraction);
		//     for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		//         _TriggerHitEvent(m_OverlapColliders[i].transform);
		//     return m_HittedCount > 0;
		// };
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* L_47 = (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*)il2cpp_codegen_object_new(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917(L_47, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_20_mB7DC82063F22DF58F1062564594C8ECE3D01894F_RuntimeMethod_var), NULL);
		__this->___m_PhysicRaycast_33 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PhysicRaycast_33), (void*)L_47);
		// m_DrawGizmos = () =>
		// {
		//     m_CapsuleOverlapData.DrawOverlapGizmos(ref m_OverlapColliders, m_HittedCount, m_Color, m_HitColor);
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_48 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_48, __this, (intptr_t)((void*)RaycastHelper_U3C_InitU3Eb__53_21_mE088869C9F9484EFB42A1750AE1C0F912C9902B0_RuntimeMethod_var), NULL);
		__this->___m_DrawGizmos_32 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawGizmos_32), (void*)L_48);
		// } break;
		goto IL_02f3;
	}

IL_02ed:
	{
		// default: throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_49 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_49);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_49, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RaycastHelper__Init_mAA0DD628B3C13BC4AA41170F9E43834BF088EC06_RuntimeMethod_var)));
	}

IL_02f3:
	{
		// m_FixedUpdateCount = 0;
		__this->___m_FixedUpdateCount_34 = 0;
		// m_CurrentFixedUpdate = -1;
		__this->___m_CurrentFixedUpdate_35 = (-1);
		// }
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper::_DrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper__DrawGizmos_m86B08D10038AFDEA486AA5E9ABFA16DF6A76BA7C (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// _Init();
		RaycastHelper__Init_mAA0DD628B3C13BC4AA41170F9E43834BF088EC06(__this, NULL);
		// CheckPhysic();
		bool L_0;
		L_0 = RaycastHelper_CheckPhysic_mFAF2D1243C248B276A3D3F3B12B09913B2A0F85B(__this, (bool)0, NULL);
		// m_DrawGizmos();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___m_DrawGizmos_32;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
		// }
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper::_TriggerHitEvent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C7698F4C6AF397FD442C2C313ED819C21B1ED6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DebugLog && Application.isPlaying)
		bool L_0 = __this->___m_DebugLog_28;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.Log(string.Format("{0} : OnHit({1})", name, target.name, System.DateTime.Now), target);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_target;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral4C7698F4C6AF397FD442C2C313ED819C21B1ED6D, L_2, L_4, L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_target;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_8, L_9, NULL);
	}

IL_0035:
	{
		// OnHit.Invoke(target);
		HitEvent_tDE06B3FCD1F037E09216C43214406B8C5D003619* L_10 = __this->___OnHit_31;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___0_target;
		NullCheck(L_10);
		UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9(L_10, L_11, UnityEvent_1_Invoke_m8FBEE0769F307FC400EDC6446C02ED3CCF607FF9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper__ctor_mB8213788DEB7B83687FBCCDB21379605070B6F72 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// public float m_Distance = 1f;
		__this->___m_Distance_12 = (1.0f);
		// public Vector3 m_LocalPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_LocalPosition_13 = L_0;
		// public float m_Radius = 1f;
		__this->___m_Radius_14 = (1.0f);
		// public Vector3 m_LocalPoint1 = Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		__this->___m_LocalPoint1_15 = L_1;
		// public Vector3 m_LocalPoint2 = Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		__this->___m_LocalPoint2_16 = L_2;
		// public Vector3 m_LocalRotation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_LocalRotation_17 = L_3;
		// public Vector3 m_HalfExtends = new Vector3(.5f, .5f, .5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___m_HalfExtends_18 = L_4;
		// [SerializeField] private int m_MemoryArraySize = 1;
		__this->___m_MemoryArraySize_21 = 1;
		// public bool m_FixedUpdate = true;
		__this->___m_FixedUpdate_24 = (bool)1;
		// public LayerMask m_LayerMask = Physics.DefaultRaycastLayers;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5;
		L_5 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(((int32_t)-5), NULL);
		__this->___m_LayerMask_25 = L_5;
		// [SerializeField] eDebugMethod m_DebugMethod = eDebugMethod.OnDrawGizmos;
		__this->___m_DebugMethod_27 = 1;
		// [SerializeField] Color m_Color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_Color_29 = L_6;
		// [SerializeField] Color m_HitColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		__this->___m_HitColor_30 = L_7;
		// private int m_CurrentFixedUpdate = -1;
		__this->___m_CurrentFixedUpdate_35 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_0_mB911D120E20579295D4FA651F40F94DE1809C7E0 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_RayData.Raycast(transform.TransformPoint(m_LocalPosition), transform.forward, m_Distance, m_LayerMask, m_QueryTriggerInteraction))
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* L_0 = (&__this->___m_RayData_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPosition_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6 = __this->___m_Distance_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7 = __this->___m_LayerMask_25;
		int32_t L_8;
		L_8 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_7, NULL);
		int32_t L_9 = __this->___m_QueryTriggerInteraction_26;
		bool L_10;
		L_10 = RaycastData_Raycast_mFE04754F5462FF2B8319A79559BF7F36722B6D0C(L_0, L_3, L_5, L_6, L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// _TriggerHitEvent(m_RayData.hitResult.transform);
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* L_11 = (&__this->___m_RayData_4);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_12;
		L_12 = RaycastData_get_hitResult_mBFDD1C1A64E46959F1AE1F53792B27AAAC11AA2C_inline(L_11, NULL);
		V_0 = L_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_13, NULL);
	}

IL_0059:
	{
		// return m_RayData.hitted;
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* L_14 = (&__this->___m_RayData_4);
		bool L_15;
		L_15 = RaycastData_get_hitted_m8A2EF2A009154F47FDD5CD53D1FC91FF5632194B(L_14, NULL);
		return L_15;
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_1_m043B800125FB65448DAEDCB6101AFCD5702CAE50 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_RayData.DrawGizmos(m_Color, m_HitColor);
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* L_0 = (&__this->___m_RayData_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_HitColor_30;
		RaycastData_DrawGizmos_mF9AD791E88120A3F0DFED4CC69C4F5B52063EF98(L_0, L_1, L_2, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_2_mE66F338B2F1F664311A28124A7BB1FAB567D784A (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8EF24963AF4F465AFEF56796FC9460FF8960410);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// m_HittedCount = m_RayData.RaycastNonAlloc(transform.TransformPoint(m_LocalPosition), transform.forward, ref m_RaycastHits, m_Distance, m_LayerMask, m_QueryTriggerInteraction);
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* L_0 = (&__this->___m_RayData_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPosition_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_6 = (&__this->___m_RaycastHits_23);
		float L_7 = __this->___m_Distance_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = __this->___m_LayerMask_25;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_8, NULL);
		int32_t L_10 = __this->___m_QueryTriggerInteraction_26;
		int32_t L_11;
		L_11 = RaycastData_RaycastNonAlloc_m0AA912047D1981A24874656F2AB5A145AF36468B(L_0, L_3, L_5, L_6, L_7, L_9, L_10, NULL);
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(__this, L_11, NULL);
		// Debug.Log("count: " + m_HittedCount + ", " + m_RaycastHits.Length);
		int32_t L_12;
		L_12 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_14 = __this->___m_RaycastHits_23;
		NullCheck(L_14);
		V_0 = ((int32_t)(((RuntimeArray*)L_14)->max_length));
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_16;
		L_16 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralB8EF24963AF4F465AFEF56796FC9460FF8960410, L_13, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		V_1 = 0;
		goto IL_009b;
	}

IL_0080:
	{
		// _TriggerHitEvent(m_RaycastHits[i].transform);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_17 = __this->___m_RaycastHits_23;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_19, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_009b:
	{
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		int32_t L_21 = V_1;
		int32_t L_22;
		L_22 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_23 = V_1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_24 = __this->___m_RaycastHits_23;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0080;
		}
	}

IL_00af:
	{
		// return m_HittedCount > 0;
		int32_t L_25;
		L_25 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_3_mEE1B22332A308649C9417D27B3BDA3249776D568 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_RayData.DrawAllGizmos(ref m_RaycastHits, m_HittedCount, m_Color, m_HitColor);
		RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* L_0 = (&__this->___m_RayData_4);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_1 = (&__this->___m_RaycastHits_23);
		int32_t L_2;
		L_2 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_HitColor_30;
		RaycastData_DrawAllGizmos_mBB8BEBD6055314B9E463860C4A8CE314BB204EA0(L_0, L_1, L_2, L_3, L_4, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_4_m9A3511AC6CA0338121D0BFCC85189899F03CCCEE (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_SphereRayData.SphereCast(transform.TransformPoint(m_LocalPosition), m_Radius, transform.forward, m_Distance, m_LayerMask, m_QueryTriggerInteraction))
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* L_0 = (&__this->___m_SphereRayData_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPosition_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		float L_4 = __this->___m_Radius_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		float L_7 = __this->___m_Distance_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = __this->___m_LayerMask_25;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_8, NULL);
		int32_t L_10 = __this->___m_QueryTriggerInteraction_26;
		bool L_11;
		L_11 = SphereCastData_SphereCast_m2F2E4D5507FB9BE7D50CF8360F6E5434F0DAAFE8(L_0, L_3, L_4, L_6, L_7, L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// _TriggerHitEvent(m_SphereRayData.hitResult.transform);
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* L_12 = (&__this->___m_SphereRayData_5);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_13;
		L_13 = SphereCastData_get_hitResult_m3698907ADC738183AE0A51378A449D7331AA841C_inline(L_12, NULL);
		V_0 = L_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_14, NULL);
	}

IL_005f:
	{
		// return m_SphereRayData.hitted;
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* L_15 = (&__this->___m_SphereRayData_5);
		bool L_16;
		L_16 = SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096(L_15, NULL);
		return L_16;
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_5_m790B4574F1EA3F3FABC92934C3D1BA188A009A61 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_SphereRayData.DrawGizmos(m_Color, m_HitColor);
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* L_0 = (&__this->___m_SphereRayData_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_HitColor_30;
		SphereCastData_DrawGizmos_m66D1D6188824183204C9B44B992B9DC8F570A835(L_0, L_1, L_2, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_6_m38973ED1751F0C6FAFEC97D1CBC017C9821C59C5 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// m_HittedCount = m_SphereRayData.SphereCastNonAlloc(transform.TransformPoint(m_LocalPosition), m_Radius,transform.forward, m_Distance, m_RaycastHits, m_LayerMask, m_QueryTriggerInteraction);
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* L_0 = (&__this->___m_SphereRayData_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPosition_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		float L_4 = __this->___m_Radius_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		float L_7 = __this->___m_Distance_12;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_8 = __this->___m_RaycastHits_23;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9 = __this->___m_LayerMask_25;
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_9, NULL);
		int32_t L_11 = __this->___m_QueryTriggerInteraction_26;
		int32_t L_12;
		L_12 = SphereCastData_SphereCastNonAlloc_m5DD2503929721BA801940E516C88E6B660B41B58(L_0, L_3, L_4, L_6, L_7, L_8, L_10, L_11, NULL);
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(__this, L_12, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		V_0 = 0;
		goto IL_006f;
	}

IL_0054:
	{
		// _TriggerHitEvent(m_RaycastHits[i].transform);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_13 = __this->___m_RaycastHits_23;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_15, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_006f:
	{
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_19 = V_0;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_20 = __this->___m_RaycastHits_23;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0054;
		}
	}

IL_0083:
	{
		// return m_HittedCount > 0;
		int32_t L_21;
		L_21 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		return (bool)((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_7_mFCEE71C6F65552F3E60F15C47B76E11D68C5E8DF (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_SphereRayData.DrawAllGizmos(ref m_RaycastHits, m_HittedCount, m_Color, m_HitColor);
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* L_0 = (&__this->___m_SphereRayData_5);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_1 = (&__this->___m_RaycastHits_23);
		int32_t L_2;
		L_2 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_HitColor_30;
		SphereCastData_DrawAllGizmos_mA4B324A1F4F2E1F43FF02C985A3EE2258CDF9BC8(L_0, L_1, L_2, L_3, L_4, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_8_m937A64AA9890F6B86FE765977398BC6866A1C5FB (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// m_HittedCount = m_SphereOverlapData.OverlapNonAlloc(transform.TransformPoint(m_LocalPosition), m_Radius, ref m_OverlapColliders, m_LayerMask, m_QueryTriggerInteraction);
		SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* L_0 = (&__this->___m_SphereOverlapData_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPosition_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		float L_4 = __this->___m_Radius_14;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_5 = (&__this->___m_OverlapColliders_20);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = __this->___m_LayerMask_25;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_6, NULL);
		int32_t L_8 = __this->___m_QueryTriggerInteraction_26;
		int32_t L_9;
		L_9 = SphereOverlapData_OverlapNonAlloc_m27A32A1AF5FEB36DAFD0C9990DDA4B834F9085B6(L_0, L_3, L_4, L_5, L_7, L_8, NULL);
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(__this, L_9, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		V_0 = 0;
		goto IL_005a;
	}

IL_0043:
	{
		// _TriggerHitEvent(m_OverlapColliders[i].transform);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_10 = __this->___m_OverlapColliders_20;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_14, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_18 = V_0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_19 = __this->___m_OverlapColliders_20;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0043;
		}
	}

IL_006e:
	{
		// return m_HittedCount > 0;
		int32_t L_20;
		L_20 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		return (bool)((((int32_t)L_20) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_9_m93849DA12BDDECA559DED5B381619D5DA3849178 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_SphereOverlapData.DrawOverlapGizmos(ref m_OverlapColliders, m_HittedCount, m_Color, m_HitColor);
		SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* L_0 = (&__this->___m_SphereOverlapData_6);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_1 = (&__this->___m_OverlapColliders_20);
		int32_t L_2;
		L_2 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_HitColor_30;
		SphereOverlapData_DrawOverlapGizmos_m0C33125CA55F7AE15D3F88962BEC125FEB2A7FF4(L_0, L_1, L_2, L_3, L_4, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_10_mFA7686AA5D1B347E7A0DF84AC0CC353C6428860F (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B2_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B1_3 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B3_4 = NULL;
	{
		// if (m_BoxcastData.BoxCast(transform.TransformPoint(m_LocalPosition), m_HalfExtends, transform.forward, (m_UnSyncRotation) ? Quaternion.Euler(m_LocalRotation) : transform.rotation * Quaternion.Euler(m_LocalRotation), m_Distance, m_LayerMask, m_QueryTriggerInteraction))
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* L_0 = (&__this->___m_BoxcastData_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPosition_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_HalfExtends_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		bool L_7 = __this->___m_UnSyncRotation_19;
		G_B1_0 = L_6;
		G_B1_1 = L_4;
		G_B1_2 = L_3;
		G_B1_3 = L_0;
		if (L_7)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_4;
			G_B2_2 = L_3;
			G_B2_3 = L_0;
			goto IL_004d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___m_LocalRotation_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_9, L_11, NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0058;
	}

IL_004d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___m_LocalRotation_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_13, NULL);
		G_B3_0 = L_14;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0058:
	{
		float L_15 = __this->___m_Distance_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = __this->___m_LayerMask_25;
		int32_t L_17;
		L_17 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_16, NULL);
		int32_t L_18 = __this->___m_QueryTriggerInteraction_26;
		bool L_19;
		L_19 = BoxCastData_BoxCast_mDB70440FAEED4DA6F306F129C34681A8D9AD37B8(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_15, L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		// _TriggerHitEvent(m_BoxcastData.hitResult.transform);
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* L_20 = (&__this->___m_BoxcastData_9);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_21;
		L_21 = BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F_inline(L_20, NULL);
		V_0 = L_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_22, NULL);
	}

IL_008f:
	{
		// return m_BoxcastData.hitted;
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* L_23 = (&__this->___m_BoxcastData_9);
		bool L_24;
		L_24 = BoxCastData_get_hitted_m2CCA8BFC38510FBC9889DC258B8BD94FDA8DA188(L_23, NULL);
		return L_24;
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_11_mA76788FE21EE1347629A9104BE6EE77B03560235 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_BoxcastData.DrawGizmos(m_Color, m_HitColor);
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* L_0 = (&__this->___m_BoxcastData_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_HitColor_30;
		BoxCastData_DrawGizmos_m6AE870B0B33CD8D09FC32F600F29D0F1B2463872(L_0, L_1, L_2, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_12_m4791B63F99C35F95DE7ADC946188D3A274F37E97 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B2_4 = NULL;
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* G_B2_5 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_2;
	memset((&G_B1_2), 0, sizeof(G_B1_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B1_4 = NULL;
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* G_B1_5 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_3;
	memset((&G_B3_3), 0, sizeof(G_B3_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* G_B3_5 = NULL;
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* G_B3_6 = NULL;
	{
		// m_HittedCount = m_BoxcastData.BoxCastNonAlloc(transform.TransformPoint(m_LocalPosition), m_HalfExtends, transform.forward, m_RaycastHits, (m_UnSyncRotation) ? Quaternion.Euler(m_LocalRotation) : transform.rotation * Quaternion.Euler(m_LocalRotation), m_Distance, m_LayerMask, m_QueryTriggerInteraction);
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* L_0 = (&__this->___m_BoxcastData_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPosition_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_HalfExtends_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_7 = __this->___m_RaycastHits_23;
		bool L_8 = __this->___m_UnSyncRotation_19;
		G_B1_0 = L_7;
		G_B1_1 = L_6;
		G_B1_2 = L_4;
		G_B1_3 = L_3;
		G_B1_4 = L_0;
		G_B1_5 = __this;
		if (L_8)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_6;
			G_B2_2 = L_4;
			G_B2_3 = L_3;
			G_B2_4 = L_0;
			G_B2_5 = __this;
			goto IL_0054;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___m_LocalRotation_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_12, NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		G_B3_6 = G_B1_5;
		goto IL_005f;
	}

IL_0054:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___m_LocalRotation_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_14, NULL);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
		G_B3_6 = G_B2_5;
	}

IL_005f:
	{
		float L_16 = __this->___m_Distance_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = __this->___m_LayerMask_25;
		int32_t L_18;
		L_18 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_17, NULL);
		int32_t L_19 = __this->___m_QueryTriggerInteraction_26;
		int32_t L_20;
		L_20 = BoxCastData_BoxCastNonAlloc_mE51003B54319F59EEDDFC34875B3F75D4342407E(G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_16, L_18, L_19, NULL);
		NullCheck(G_B3_6);
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(G_B3_6, L_20, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		V_0 = 0;
		goto IL_009f;
	}

IL_0084:
	{
		// _TriggerHitEvent(m_RaycastHits[i].transform);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_21 = __this->___m_RaycastHits_23;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_23, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_009f:
	{
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		if ((((int32_t)L_25) >= ((int32_t)L_26)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_27 = V_0;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_28 = __this->___m_RaycastHits_23;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0084;
		}
	}

IL_00b3:
	{
		// return m_HittedCount > 0;
		int32_t L_29;
		L_29 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		return (bool)((((int32_t)L_29) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_13()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_13_m0FFB60ABD2C409BB9503990D5E3A0EEA9290F98A (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_BoxcastData.DrawAllGizmos(ref m_RaycastHits, m_HittedCount, m_Color, m_HitColor);
		BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* L_0 = (&__this->___m_BoxcastData_9);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_1 = (&__this->___m_RaycastHits_23);
		int32_t L_2;
		L_2 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_HitColor_30;
		BoxCastData_DrawAllGizmos_m383B77252BF537AE61B051438EC8299E1BD8202C(L_0, L_1, L_2, L_3, L_4, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_14()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_14_m5CA5E0E22C4E2173C6836D2C66BF04156F11767D (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* G_B2_2 = NULL;
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* G_B2_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* G_B1_2 = NULL;
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* G_B1_3 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* G_B3_3 = NULL;
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* G_B3_4 = NULL;
	{
		// m_HittedCount = m_BoxOverlapData.OverlapNonAlloc(transform.TransformPoint(m_LocalPosition), m_HalfExtends, (m_UnSyncRotation) ? Quaternion.Euler(m_LocalRotation) : transform.rotation * Quaternion.Euler(m_LocalRotation), ref m_OverlapColliders, m_LayerMask, m_QueryTriggerInteraction);
		BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* L_0 = (&__this->___m_BoxOverlapData_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPosition_13;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_HalfExtends_18;
		bool L_5 = __this->___m_UnSyncRotation_19;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_0;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_0;
			G_B2_3 = __this;
			goto IL_0043;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___m_LocalRotation_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_7, L_9, NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_004e;
	}

IL_0043:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___m_LocalRotation_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_11, NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_004e:
	{
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_13 = (&__this->___m_OverlapColliders_20);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_14 = __this->___m_LayerMask_25;
		int32_t L_15;
		L_15 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_14, NULL);
		int32_t L_16 = __this->___m_QueryTriggerInteraction_26;
		int32_t L_17;
		L_17 = BoxOverlapData_OverlapNonAlloc_m94714B9283EBAE3A1378568DC130B0AD1532DA1B(G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_13, L_15, L_16, NULL);
		NullCheck(G_B3_4);
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(G_B3_4, L_17, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		V_0 = 0;
		goto IL_008a;
	}

IL_0073:
	{
		// _TriggerHitEvent(m_OverlapColliders[i].transform);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_18 = __this->___m_OverlapColliders_20;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_22, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_008a:
	{
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		if ((((int32_t)L_24) >= ((int32_t)L_25)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_26 = V_0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_27 = __this->___m_OverlapColliders_20;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0073;
		}
	}

IL_009e:
	{
		// return m_HittedCount > 0;
		int32_t L_28;
		L_28 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		return (bool)((((int32_t)L_28) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_15_m27701BDB9F0B7BC4FB0B68B6B284EF00B3B70107 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_BoxOverlapData.DrawOverlapGizmos(ref m_OverlapColliders, m_HittedCount, m_Color, m_HitColor);
		BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* L_0 = (&__this->___m_BoxOverlapData_10);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_1 = (&__this->___m_OverlapColliders_20);
		int32_t L_2;
		L_2 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_HitColor_30;
		BoxOverlapData_DrawOverlapGizmos_mBF2CE0F922540AA73BEB87F559E96B4DC72EF649(L_0, L_1, L_2, L_3, L_4, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_16_mA3ADB575AC6F3721469019C949B8FC9FC6AE8A63 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_CapsulecastData.CapsuleCast(
		//     transform.TransformPoint(m_LocalPoint1),
		//     transform.TransformPoint(m_LocalPoint2),
		//     m_Radius, transform.forward, m_Distance, m_LayerMask, m_QueryTriggerInteraction))
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_0 = (&__this->___m_CapsulecastData_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPoint1_15;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___m_LocalPoint2_16;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		float L_7 = __this->___m_Radius_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		float L_10 = __this->___m_Distance_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = __this->___m_LayerMask_25;
		int32_t L_12;
		L_12 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_11, NULL);
		int32_t L_13 = __this->___m_QueryTriggerInteraction_26;
		bool L_14;
		L_14 = CapsuleCastData_CapsuleCast_mF7108AD98965DAF02E4F851E1C9ED78A0E4AC647(L_0, L_3, L_6, L_7, L_9, L_10, L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// _TriggerHitEvent(m_CapsulecastData.hitResult.transform);
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_15 = (&__this->___m_CapsulecastData_7);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_16;
		L_16 = CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF_inline(L_15, NULL);
		V_0 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_17, NULL);
	}

IL_0070:
	{
		// return m_CapsulecastData.hitted;
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_18 = (&__this->___m_CapsulecastData_7);
		bool L_19;
		L_19 = CapsuleCastData_get_hitted_m89C3C7558AA4CEE173A84B6A332DD5EF1673B9DE(L_18, NULL);
		return L_19;
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_17()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_17_m8F313ED3837CA09660DE227AE57D2EFC235958C7 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_CapsulecastData.DrawGizmos(m_Color, m_HitColor);
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_0 = (&__this->___m_CapsulecastData_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___m_HitColor_30;
		CapsuleCastData_DrawGizmos_mA288E9F959D8791F9C9B69BDB8DD102D421F107A(L_0, L_1, L_2, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_18()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_18_mB4ABE81681C17DC62E141A828F823A8E70868855 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// m_HittedCount = m_CapsulecastData.CapsuleCastNonAlloc(
		//     transform.TransformPoint(m_LocalPoint1),
		//     transform.TransformPoint(m_LocalPoint2),
		//     m_Radius, transform.forward, m_RaycastHits, m_Distance, m_LayerMask, m_QueryTriggerInteraction);
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_0 = (&__this->___m_CapsulecastData_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPoint1_15;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___m_LocalPoint2_16;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		float L_7 = __this->___m_Radius_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_10 = __this->___m_RaycastHits_23;
		float L_11 = __this->___m_Distance_12;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___m_LayerMask_25;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_12, NULL);
		int32_t L_14 = __this->___m_QueryTriggerInteraction_26;
		int32_t L_15;
		L_15 = CapsuleCastData_CapsuleCastNonAlloc_m480D6D94D8211EB7E13F8AF48AE94597238C131A(L_0, L_3, L_6, L_7, L_9, L_10, L_11, L_13, L_14, NULL);
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(__this, L_15, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		V_0 = 0;
		goto IL_0080;
	}

IL_0065:
	{
		// _TriggerHitEvent(m_RaycastHits[i].transform);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_16 = __this->___m_RaycastHits_23;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_18, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0080:
	{
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; i++)
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_22 = V_0;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_23 = __this->___m_RaycastHits_23;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0065;
		}
	}

IL_0094:
	{
		// return m_HittedCount > 0;
		int32_t L_24;
		L_24 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		return (bool)((((int32_t)L_24) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_19()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_19_mF961D4DF803EDC6BEDE45A088FAA0D6824037AFE (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_CapsulecastData.DrawAllGizmos(ref m_RaycastHits, m_HittedCount, m_Color, m_HitColor);
		CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* L_0 = (&__this->___m_CapsulecastData_7);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_1 = (&__this->___m_RaycastHits_23);
		int32_t L_2;
		L_2 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_HitColor_30;
		CapsuleCastData_DrawAllGizmos_m5177E181F6F2E7BA8D1BED023C757932433C7476(L_0, L_1, L_2, L_3, L_4, NULL);
		// };
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper::<_Init>b__53_20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHelper_U3C_InitU3Eb__53_20_mB7DC82063F22DF58F1062564594C8ECE3D01894F (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// m_HittedCount = m_CapsuleOverlapData.OverlapNonAlloc(
		//     transform.TransformPoint(m_LocalPoint1),
		//     transform.TransformPoint(m_LocalPoint2),
		//     m_Radius, ref m_OverlapColliders, m_LayerMask, m_QueryTriggerInteraction);
		CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* L_0 = (&__this->___m_CapsuleOverlapData_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_LocalPoint1_15;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___m_LocalPoint2_16;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_4, L_5, NULL);
		float L_7 = __this->___m_Radius_14;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_8 = (&__this->___m_OverlapColliders_20);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9 = __this->___m_LayerMask_25;
		int32_t L_10;
		L_10 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_9, NULL);
		int32_t L_11 = __this->___m_QueryTriggerInteraction_26;
		int32_t L_12;
		L_12 = CapsuleOverlapData_OverlapNonAlloc_m1085C34A02E20B72565C3F03A25D0B8EA94C7236(L_0, L_3, L_6, L_7, L_8, L_10, L_11, NULL);
		RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline(__this, L_12, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		V_0 = 0;
		goto IL_006b;
	}

IL_0054:
	{
		// _TriggerHitEvent(m_OverlapColliders[i].transform);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_13 = __this->___m_OverlapColliders_20;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		RaycastHelper__TriggerHitEvent_m61A88220F5D8219F73BBF9BB2F9113E6F2D69615(__this, L_17, NULL);
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_006b:
	{
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; i++)
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_21 = V_0;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_22 = __this->___m_OverlapColliders_20;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0054;
		}
	}

IL_007f:
	{
		// return m_HittedCount > 0;
		int32_t L_23;
		L_23 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		return (bool)((((int32_t)L_23) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Kit.Physic.RaycastHelper::<_Init>b__53_21()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHelper_U3C_InitU3Eb__53_21_mE088869C9F9484EFB42A1750AE1C0F912C9902B0 (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// m_CapsuleOverlapData.DrawOverlapGizmos(ref m_OverlapColliders, m_HittedCount, m_Color, m_HitColor);
		CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* L_0 = (&__this->___m_CapsuleOverlapData_8);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_1 = (&__this->___m_OverlapColliders_20);
		int32_t L_2;
		L_2 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_HitColor_30;
		CapsuleOverlapData_DrawOverlapGizmos_m409F74AB2941BB9D94AC282EB14D0847857C67A0(L_0, L_1, L_2, L_3, L_4, NULL);
		// };
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
bool PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_Multicast(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* currentDelegate = reinterpret_cast<PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_OpenInst(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_OpenStatic(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_OpenStaticInvoker(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke(__this->___method_ptr_0, method, NULL);
}
bool PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_ClosedStaticInvoker(PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4 (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Kit.Physic.RaycastHelper/PhysicRaycast::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicRaycast__ctor_m3D3E97AE375257951035270E19CD8BD673BF2917 (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_Multicast;
}
// System.Boolean Kit.Physic.RaycastHelper/PhysicRaycast::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Kit.Physic.RaycastHelper/PhysicRaycast::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PhysicRaycast_BeginInvoke_m8B4A7028E6A6A3FC871AAEB8E495CCF2BB4D0DEC (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Boolean Kit.Physic.RaycastHelper/PhysicRaycast::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhysicRaycast_EndInvoke_m717CAE9ACC04BECF4A942A5045C039C9CA8EF98A (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Kit.Physic.RaycastHelper/HitEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HitEvent__ctor_m4464E8DACBD2527A1184635047754D851BDE2D6A (HitEvent_tDE06B3FCD1F037E09216C43214406B8C5D003619* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m2CE796A2A22ECB38E60421FC535739234B38E95E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m2CE796A2A22ECB38E60421FC535739234B38E95E(__this, UnityEvent_1__ctor_m2CE796A2A22ECB38E60421FC535739234B38E95E_RuntimeMethod_var);
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
// System.Void Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOverlapCollidersU3Ed__49__ctor_m9C2C784723DF4C9227EBBA4F2256B0A5834AF5AE (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOverlapCollidersU3Ed__49_System_IDisposable_Dispose_m0E248F6F88871DE0ED906C2F8F4C392E32C80275 (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetOverlapCollidersU3Ed__49_MoveNext_mD6D1E553E9FD82A486D8C75D86FDB1938D6F24B2 (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper__IsType_TisIOverlapStruct_t8C70871404986120173EBAEA7753823B7562D8F8_m7C45831E0C4476E30027793FFD077566D476564F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (_IsType<IOverlapStruct>())
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = RaycastHelper__IsType_TisIOverlapStruct_t8C70871404986120173EBAEA7753823B7562D8F8_m7C45831E0C4476E30027793FFD077566D476564F(L_4, RaycastHelper__IsType_TisIOverlapStruct_t8C70871404986120173EBAEA7753823B7562D8F8_m7C45831E0C4476E30027793FFD077566D476564F_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0082;
		}
	}
	{
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; ++i)
		__this->___U3CiU3E5__2_4 = 0;
		goto IL_0062;
	}

IL_002f:
	{
		// yield return m_OverlapColliders[i];
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_6 = V_1;
		NullCheck(L_6);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = L_6->___m_OverlapColliders_20;
		int32_t L_8 = __this->___U3CiU3E5__2_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; ++i)
		int32_t L_11 = __this->___U3CiU3E5__2_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_2;
		__this->___U3CiU3E5__2_4 = L_12;
	}

IL_0062:
	{
		// for (int i = 0; i < m_HittedCount && i < m_OverlapColliders.Length; ++i)
		int32_t L_13 = __this->___U3CiU3E5__2_4;
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(L_14, NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_16 = __this->___U3CiU3E5__2_4;
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_17 = V_1;
		NullCheck(L_17);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_18 = L_17->___m_OverlapColliders_20;
		NullCheck(L_18);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_00b7;
	}

IL_0082:
	{
		// throw new System.Exception(GetType().Name + " : this method cannot use on " + m_RayType.ToString("F") + " type.");
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_19 = V_1;
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___m_RayType_11;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&eRayType_t7001D2EE16CA9B3D9ED2711D5AEE3E2CF378A34E_il2cpp_TypeInfo_var)), &L_24);
		String_t* L_26;
		L_26 = Enum_ToString_mC82F2E769BD9FF89D7F7E88D78B7F98FA56D4F91((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E)), NULL);
		String_t* L_27;
		L_27 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34EA83FCB72968CB9C9F7F55104E3A1510FE9884)), L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6EBFFA7ABEBFC04A95EBF99F12C26153A920A56)), NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetOverlapCollidersU3Ed__49_MoveNext_mD6D1E553E9FD82A486D8C75D86FDB1938D6F24B2_RuntimeMethod_var)));
	}

IL_00b7:
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.Collider Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::System.Collections.Generic.IEnumerator<UnityEngine.Collider>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* U3CGetOverlapCollidersU3Ed__49_System_Collections_Generic_IEnumeratorU3CUnityEngine_ColliderU3E_get_Current_m09796B2EF4CABAF86A3CD83258CAE074FCC3F402 (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, const RuntimeMethod* method) 
{
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOverlapCollidersU3Ed__49_System_Collections_IEnumerator_Reset_m946347389D4553F4846F320712F5BB1C8A4D1C57 (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetOverlapCollidersU3Ed__49_System_Collections_IEnumerator_Reset_m946347389D4553F4846F320712F5BB1C8A4D1C57_RuntimeMethod_var)));
	}
}
// System.Object Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetOverlapCollidersU3Ed__49_System_Collections_IEnumerator_get_Current_m9374FAF5394ABFB6BE49A932DD178354E135694B (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, const RuntimeMethod* method) 
{
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Collider> Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::System.Collections.Generic.IEnumerable<UnityEngine.Collider>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetOverlapCollidersU3Ed__49_System_Collections_Generic_IEnumerableU3CUnityEngine_ColliderU3E_GetEnumerator_m6A3EB2B8C984007D1F3B6D76AC98AB400F226D60 (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* L_3 = (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864*)il2cpp_codegen_object_new(U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetOverlapCollidersU3Ed__49__ctor_m9C2C784723DF4C9227EBBA4F2256B0A5834AF5AE(L_3, 0, NULL);
		V_0 = L_3;
		U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* L_4 = V_0;
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Kit.Physic.RaycastHelper/<GetOverlapColliders>d__49::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetOverlapCollidersU3Ed__49_System_Collections_IEnumerable_GetEnumerator_m6C343776F32E2CD69FBA9E1850BCEFB8797B7278 (U3CGetOverlapCollidersU3Ed__49_t74325AE48F23A5C7A7695BB8BEBE8FF6C76CA864* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetOverlapCollidersU3Ed__49_System_Collections_Generic_IEnumerableU3CUnityEngine_ColliderU3E_GetEnumerator_m6A3EB2B8C984007D1F3B6D76AC98AB400F226D60(__this, NULL);
		return L_0;
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
// System.Void Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRaycastHitsU3Ed__50__ctor_mC4AC85E091C5D92FDC9E253889FDB8ED65146925 (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRaycastHitsU3Ed__50_System_IDisposable_Dispose_mBCBFE8FE820A15ABBCE14AE7A8D9AEE3680C90BF (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRaycastHitsU3Ed__50_MoveNext_m89756B3D01AA891E97BB5F04D9CB747972EF7C64 (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHelper__IsType_TisIRayAllStruct_t409B172530C2FD9CCE5A3757D90FBB81EECA2CB9_mF15C1E8504A5C698745122DB2936B46CC3111F57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (_IsType<IRayAllStruct>())
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = RaycastHelper__IsType_TisIRayAllStruct_t409B172530C2FD9CCE5A3757D90FBB81EECA2CB9_mF15C1E8504A5C698745122DB2936B46CC3111F57(L_4, RaycastHelper__IsType_TisIRayAllStruct_t409B172530C2FD9CCE5A3757D90FBB81EECA2CB9_mF15C1E8504A5C698745122DB2936B46CC3111F57_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0086;
		}
	}
	{
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; ++i)
		__this->___U3CiU3E5__2_4 = 0;
		goto IL_0066;
	}

IL_002f:
	{
		// yield return m_RaycastHits[i];
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_6 = V_1;
		NullCheck(L_6);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_7 = L_6->___m_RaycastHits_23;
		int32_t L_8 = __this->___U3CiU3E5__2_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___U3CU3E2__current_1 = L_10;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; ++i)
		int32_t L_11 = __this->___U3CiU3E5__2_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_2;
		__this->___U3CiU3E5__2_4 = L_12;
	}

IL_0066:
	{
		// for (int i = 0; i < m_HittedCount && i < m_RaycastHits.Length; ++i)
		int32_t L_13 = __this->___U3CiU3E5__2_4;
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline(L_14, NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_16 = __this->___U3CiU3E5__2_4;
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_17 = V_1;
		NullCheck(L_17);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_18 = L_17->___m_RaycastHits_23;
		NullCheck(L_18);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_00bb;
	}

IL_0086:
	{
		// throw new System.Exception(GetType().Name + " : this method cannot use on " + m_RayType.ToString("F") + " type.");
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_19 = V_1;
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->___m_RayType_11;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&eRayType_t7001D2EE16CA9B3D9ED2711D5AEE3E2CF378A34E_il2cpp_TypeInfo_var)), &L_24);
		String_t* L_26;
		L_26 = Enum_ToString_mC82F2E769BD9FF89D7F7E88D78B7F98FA56D4F91((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E)), NULL);
		String_t* L_27;
		L_27 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral34EA83FCB72968CB9C9F7F55104E3A1510FE9884)), L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6EBFFA7ABEBFC04A95EBF99F12C26153A920A56)), NULL);
		Exception_t* L_28 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRaycastHitsU3Ed__50_MoveNext_m89756B3D01AA891E97BB5F04D9CB747972EF7C64_RuntimeMethod_var)));
	}

IL_00bb:
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.RaycastHit Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::System.Collections.Generic.IEnumerator<UnityEngine.RaycastHit>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 U3CGetRaycastHitsU3Ed__50_System_Collections_Generic_IEnumeratorU3CUnityEngine_RaycastHitU3E_get_Current_mBA10BB89628D5BC15ACD805E0A3E966CF857A90D (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, const RuntimeMethod* method) 
{
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRaycastHitsU3Ed__50_System_Collections_IEnumerator_Reset_m4F68351A791F4B3444411819C215FBC8A6973229 (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRaycastHitsU3Ed__50_System_Collections_IEnumerator_Reset_m4F68351A791F4B3444411819C215FBC8A6973229_RuntimeMethod_var)));
	}
}
// System.Object Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRaycastHitsU3Ed__50_System_Collections_IEnumerator_get_Current_mFB026A627D42FFA8E695639077190949B9D0487E (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___U3CU3E2__current_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_1 = L_0;
		RuntimeObject* L_2 = Box(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit> Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::System.Collections.Generic.IEnumerable<UnityEngine.RaycastHit>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRaycastHitsU3Ed__50_System_Collections_Generic_IEnumerableU3CUnityEngine_RaycastHitU3E_GetEnumerator_mF5FB82B2C7B9EF2A348DD340363744CD5677D140 (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* L_3 = (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04*)il2cpp_codegen_object_new(U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetRaycastHitsU3Ed__50__ctor_mC4AC85E091C5D92FDC9E253889FDB8ED65146925(L_3, 0, NULL);
		V_0 = L_3;
		U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* L_4 = V_0;
		RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Kit.Physic.RaycastHelper/<GetRaycastHits>d__50::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetRaycastHitsU3Ed__50_System_Collections_IEnumerable_GetEnumerator_mCB121F00C187A6A66A08253A4E188C58103A81CC (U3CGetRaycastHitsU3Ed__50_t792F12D06D6E87248E77CE9881FDE4AF956C3A04* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetRaycastHitsU3Ed__50_System_Collections_Generic_IEnumerableU3CUnityEngine_RaycastHitU3E_GetEnumerator_mF5FB82B2C7B9EF2A348DD340363744CD5677D140(__this, NULL);
		return L_0;
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
// Kit.Physic.SphereCastData Kit.Physic.SphereCastData::get_NONE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32 SphereCastData_get_NONE_m3CC26AF6F3DFA140EBD903D6ADB56E2FB78B31B9 (const RuntimeMethod* method) 
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static SphereCastData NONE { get { return default(SphereCastData); } }
		il2cpp_codegen_initobj((&V_0), sizeof(SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32));
		SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RaycastHit Kit.Physic.SphereCastData::get_hitResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 SphereCastData_get_hitResult_m3698907ADC738183AE0A51378A449D7331AA841C (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___hit_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 SphereCastData_get_hitResult_m3698907ADC738183AE0A51378A449D7331AA841C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 _returnValue;
	_returnValue = SphereCastData_get_hitResult_m3698907ADC738183AE0A51378A449D7331AA841C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.SphereCastData::set_hitResult(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_set_hitResult_m06CC846F3FC1D5157E79FE475F589BECEA57C0A3 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___hit_4 = L_0;
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCastData_set_hitResult_m06CC846F3FC1D5157E79FE475F589BECEA57C0A3_AdjustorThunk (RuntimeObject* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	SphereCastData_set_hitResult_m06CC846F3FC1D5157E79FE475F589BECEA57C0A3_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean Kit.Physic.SphereCastData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool hitted { get { return hit.transform != null; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_0 = (&__this->___hit_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	bool _returnValue;
	_returnValue = SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.SphereCastData::get_hitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereCastData_get_hitCount_m09E763E4BADF8D1067B9A17A76DB20A851AE29E7 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SphereCastData_get_hitCount_m09E763E4BADF8D1067B9A17A76DB20A851AE29E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SphereCastData_get_hitCount_m09E763E4BADF8D1067B9A17A76DB20A851AE29E7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.SphereCastData::set_hitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_set_hitCount_m1C815A018D0C0C8B40E38313500C99AAE1872673 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCastData_set_hitCount_m1C815A018D0C0C8B40E38313500C99AAE1872673_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	SphereCastData_set_hitCount_m1C815A018D0C0C8B40E38313500C99AAE1872673_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Kit.Physic.SphereCastData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData__ctor_m26C65072BDD2D6EE17E6ECC9F050482B80D055BB (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__distance, float ___3__radius, const RuntimeMethod* method) 
{
	{
		// public SphereCastData(Vector3 _origin, Vector3 _direction, float _distance, float _radius) : this()
		il2cpp_codegen_initobj(__this, sizeof(SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32));
		// origin = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___origin_0 = L_0;
		// direction = _direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1__direction;
		__this->___direction_2 = L_1;
		// maxDistance = _distance;
		float L_2 = ___2__distance;
		__this->___maxDistance_3 = L_2;
		// radius = _radius;
		float L_3 = ___3__radius;
		__this->___radius_1 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCastData__ctor_m26C65072BDD2D6EE17E6ECC9F050482B80D055BB_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1__direction, float ___2__distance, float ___3__radius, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	SphereCastData__ctor_m26C65072BDD2D6EE17E6ECC9F050482B80D055BB(_thisAdjusted, ___0__origin, ___1__direction, ___2__distance, ___3__radius, method);
}
// System.Void Kit.Physic.SphereCastData::.ctor(UnityEngine.Ray,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData__ctor_mA70297479B70C6F7403ADEB877B30B783A9F58C6 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0__ray, float ___1__distance, float ___2__radius, const RuntimeMethod* method) 
{
	{
		// : this(_ray.origin, _ray.direction, _distance, _radius)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___0__ray), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___0__ray), NULL);
		float L_2 = ___1__distance;
		float L_3 = ___2__radius;
		SphereCastData__ctor_m26C65072BDD2D6EE17E6ECC9F050482B80D055BB(__this, L_0, L_1, L_2, L_3, NULL);
		// { }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCastData__ctor_mA70297479B70C6F7403ADEB877B30B783A9F58C6_AdjustorThunk (RuntimeObject* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0__ray, float ___1__distance, float ___2__radius, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	SphereCastData__ctor_mA70297479B70C6F7403ADEB877B30B783A9F58C6(_thisAdjusted, ___0__ray, ___1__distance, ___2__radius, method);
}
// System.Boolean Kit.Physic.SphereCastData::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCastData_SphereCast_m758A621332393319EBBB4568EF1B346B65731FD4 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3__raycastHit, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method) 
{
	bool V_0 = false;
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* G_B2_0 = NULL;
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* G_B3_1 = NULL;
	{
		// Update(_origin, _radius, _direction, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		float L_1 = ___1__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2__direction;
		float L_3 = ___4__maxDistance;
		SphereCastData_Update_mD8A2FC87859D4816546FE781335FB1B6B6298747(__this, L_0, L_1, L_2, L_3, NULL);
		// bool tmp = Physics.SphereCast(_origin, _radius, _direction, out _raycastHit, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0__origin;
		float L_5 = ___1__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_7 = ___3__raycastHit;
		float L_8 = ___4__maxDistance;
		int32_t L_9 = ___5__layerMask;
		int32_t L_10 = ___6__queryTriggerInteraction;
		bool L_11;
		L_11 = Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D(L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		V_0 = L_11;
		// hit = _raycastHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_12 = ___3__raycastHit;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_13 = (*(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)L_12);
		__this->___hit_4 = L_13;
		// hitCount = tmp ? 1 : 0;
		bool L_14 = V_0;
		G_B1_0 = __this;
		if (L_14)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		SphereCastData_set_hitCount_m1C815A018D0C0C8B40E38313500C99AAE1872673_inline(G_B3_1, G_B3_0, NULL);
		// return tmp;
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C  bool SphereCastData_SphereCast_m758A621332393319EBBB4568EF1B346B65731FD4_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___3__raycastHit, float ___4__maxDistance, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	bool _returnValue;
	_returnValue = SphereCastData_SphereCast_m758A621332393319EBBB4568EF1B346B65731FD4(_thisAdjusted, ___0__origin, ___1__radius, ___2__direction, ___3__raycastHit, ___4__maxDistance, ___5__layerMask, ___6__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.SphereCastData::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCastData_SphereCast_m2F2E4D5507FB9BE7D50CF8360F6E5434F0DAAFE8 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return SphereCast(_origin, _radius, _direction, out hit, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		float L_1 = ___1__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2__direction;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = (&__this->___hit_4);
		float L_4 = ___3__maxDistance;
		int32_t L_5 = ___4__layerMask;
		int32_t L_6 = ___5__queryTriggerInteraction;
		bool L_7;
		L_7 = SphereCastData_SphereCast_m758A621332393319EBBB4568EF1B346B65731FD4(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool SphereCastData_SphereCast_m2F2E4D5507FB9BE7D50CF8360F6E5434F0DAAFE8_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, int32_t ___4__layerMask, int32_t ___5__queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	bool _returnValue;
	_returnValue = SphereCastData_SphereCast_m2F2E4D5507FB9BE7D50CF8360F6E5434F0DAAFE8(_thisAdjusted, ___0__origin, ___1__radius, ___2__direction, ___3__maxDistance, ___4__layerMask, ___5__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Boolean Kit.Physic.SphereCastData::SphereCast(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCastData_SphereCast_mFB5EC62CBD4C53816E6A5313B0CB264419AE8732 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return SphereCast(origin, radius, direction, out hit, maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		float L_1 = __this->___radius_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___direction_2;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = (&__this->___hit_4);
		float L_4 = __this->___maxDistance_3;
		int32_t L_5 = ___0__layerMask;
		int32_t L_6 = ___1__queryTriggerInteraction;
		bool L_7;
		L_7 = SphereCastData_SphereCast_m758A621332393319EBBB4568EF1B346B65731FD4(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool SphereCastData_SphereCast_mFB5EC62CBD4C53816E6A5313B0CB264419AE8732_AdjustorThunk (RuntimeObject* __this, int32_t ___0__layerMask, int32_t ___1__queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	bool _returnValue;
	_returnValue = SphereCastData_SphereCast_mFB5EC62CBD4C53816E6A5313B0CB264419AE8732(_thisAdjusted, ___0__layerMask, ___1__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.SphereCastData::SphereCastNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,UnityEngine.RaycastHit[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereCastData_SphereCastNonAlloc_m5DD2503929721BA801940E516C88E6B660B41B58 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___4__raycastHits, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* G_B2_0 = NULL;
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* G_B1_0 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* G_B3_1 = NULL;
	{
		// Update(_origin, _radius, _direction, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		float L_1 = ___1__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2__direction;
		float L_3 = ___3__maxDistance;
		SphereCastData_Update_mD8A2FC87859D4816546FE781335FB1B6B6298747(__this, L_0, L_1, L_2, L_3, NULL);
		// hitCount = Physics.SphereCastNonAlloc(_origin, _radius, _direction, _raycastHits, _maxDistance, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0__origin;
		float L_5 = ___1__radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2__direction;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_7 = ___4__raycastHits;
		float L_8 = ___3__maxDistance;
		int32_t L_9 = ___5__layerMask;
		int32_t L_10 = ___6__queryTriggerInteraction;
		int32_t L_11;
		L_11 = Physics_SphereCastNonAlloc_m21B951284ED5217AB1395B08B963C4C9661F928C(L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		SphereCastData_set_hitCount_m1C815A018D0C0C8B40E38313500C99AAE1872673_inline(__this, L_11, NULL);
		// hit = (hitCount > 0) ? _raycastHits[0] : default(RaycastHit);  /// to define it's being hit, <see cref="hitted"/>
		int32_t L_12;
		L_12 = SphereCastData_get_hitCount_m09E763E4BADF8D1067B9A17A76DB20A851AE29E7_inline(__this, NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_13 = V_0;
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		goto IL_003e;
	}

IL_0036:
	{
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_14 = ___4__raycastHits;
		NullCheck(L_14);
		int32_t L_15 = 0;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		G_B3_0 = L_16;
		G_B3_1 = G_B2_0;
	}

IL_003e:
	{
		G_B3_1->___hit_4 = G_B3_0;
		// return hitCount;
		int32_t L_17;
		L_17 = SphereCastData_get_hitCount_m09E763E4BADF8D1067B9A17A76DB20A851AE29E7_inline(__this, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  int32_t SphereCastData_SphereCastNonAlloc_m5DD2503929721BA801940E516C88E6B660B41B58_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___4__raycastHits, int32_t ___5__layerMask, int32_t ___6__queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SphereCastData_SphereCastNonAlloc_m5DD2503929721BA801940E516C88E6B660B41B58(_thisAdjusted, ___0__origin, ___1__radius, ___2__direction, ___3__maxDistance, ___4__raycastHits, ___5__layerMask, ___6__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.SphereCastData::SphereCastNonAlloc(UnityEngine.RaycastHit[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereCastData_SphereCastNonAlloc_m02CAC24506EC251F25B522CA29BD2583F7F83BF5 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// return SphereCastNonAlloc(origin, radius, direction, maxDistance, _raycastHits, _layerMask, _queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		float L_1 = __this->___radius_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___direction_2;
		float L_3 = __this->___maxDistance_3;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4 = ___0__raycastHits;
		int32_t L_5 = ___1__layerMask;
		int32_t L_6 = ___2__queryTriggerInteraction;
		int32_t L_7;
		L_7 = SphereCastData_SphereCastNonAlloc_m5DD2503929721BA801940E516C88E6B660B41B58(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t SphereCastData_SphereCastNonAlloc_m02CAC24506EC251F25B522CA29BD2583F7F83BF5_AdjustorThunk (RuntimeObject* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0__raycastHits, int32_t ___1__layerMask, int32_t ___2__queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SphereCastData_SphereCastNonAlloc_m02CAC24506EC251F25B522CA29BD2583F7F83BF5(_thisAdjusted, ___0__raycastHits, ___1__layerMask, ___2__queryTriggerInteraction, method);
	return _returnValue;
}
// System.Void Kit.Physic.SphereCastData::DrawGizmos(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_DrawGizmos_m66D1D6188824183204C9B44B992B9DC8F570A835 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___0_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___1_hitColor;
		G_B6_0 = L_8;
		goto IL_0034;
	}

IL_002f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0034:
	{
		___1_hitColor = G_B6_0;
		// using (new ColorScope(color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___0_color;
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&V_1), L_10, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f9:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Gizmos.DrawLine(origin, origin + direction * maxDistance);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___direction_2;
				float L_14 = __this->___maxDistance_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_15, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_11, L_16, NULL);
				// Gizmos.DrawWireSphere(origin + direction * maxDistance, radius);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___direction_2;
				float L_19 = __this->___maxDistance_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
				L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_20, NULL);
				float L_22 = __this->___radius_1;
				Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_21, L_22, NULL);
				// if (hitted)
				bool L_23;
				L_23 = SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096(__this, NULL);
				if (!L_23)
				{
					goto IL_00e6_1;
				}
			}
			{
				// using (new ColorScope(hitColor))
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___1_hitColor;
				ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 L_25;
				memset((&L_25), 0, sizeof(L_25));
				ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5((&L_25), L_24, /*hidden argument*/NULL);
				V_2 = L_25;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d8_1:
					{// begin finally (depth: 2)
						ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_2), NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// Vector3 point = GetRayEndPoint();
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
					L_26 = SphereCastData_GetRayEndPoint_mBB8869B81FD92E3239B4413F656F4C453C8622D1(__this, NULL);
					V_3 = L_26;
					// Gizmos.DrawLine(origin, point);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___origin_0;
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_3;
					Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_27, L_28, NULL);
					// Gizmos.DrawWireSphere(origin, radius);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___origin_0;
					float L_30 = __this->___radius_1;
					Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_29, L_30, NULL);
					// Gizmos.DrawWireSphere(point, radius);
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_3;
					float L_32 = __this->___radius_1;
					Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_31, L_32, NULL);
					// RaycastData.DrawHitPointReference(hitResult);
					RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_33;
					L_33 = SphereCastData_get_hitResult_m3698907ADC738183AE0A51378A449D7331AA841C_inline(__this, NULL);
					RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0(L_33, NULL);
					// }
					goto IL_0107;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00e6_1:
			{
				// Gizmos.DrawWireSphere(origin, radius);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->___origin_0;
				float L_35 = __this->___radius_1;
				Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_34, L_35, NULL);
				// }
				goto IL_0107;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0107:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCastData_DrawGizmos_m66D1D6188824183204C9B44B992B9DC8F570A835_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_hitColor, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	SphereCastData_DrawGizmos_m66D1D6188824183204C9B44B992B9DC8F570A835(_thisAdjusted, ___0_color, ___1_hitColor, method);
}
// System.Void Kit.Physic.SphereCastData::DrawAllGizmos(UnityEngine.RaycastHit[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_DrawAllGizmos_mA4B324A1F4F2E1F43FF02C985A3EE2258CDF9BC8 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B8_0 = NULL;
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B9_1 = NULL;
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___2_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___3_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___3_hitColor;
		G_B6_0 = L_8;
		goto IL_0036;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0036:
	{
		___3_hitColor = G_B6_0;
		// using (new ColorScope(validArraySize == 0 ? color : hitColor))
		int32_t L_10 = ___1_validArraySize;
		G_B7_0 = (&V_1);
		if (!L_10)
		{
			G_B8_0 = (&V_1);
			goto IL_0041;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___3_hitColor;
		G_B9_0 = L_11;
		G_B9_1 = G_B7_0;
		goto IL_0042;
	}

IL_0041:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___2_color;
		G_B9_0 = L_12;
		G_B9_1 = G_B8_0;
	}

IL_0042:
	{
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5(G_B9_1, G_B9_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c8:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Gizmos.DrawLine(origin, origin + direction * maxDistance);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___direction_2;
				float L_16 = __this->___maxDistance_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
				L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_17, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_13, L_18, NULL);
				// Gizmos.DrawWireSphere(origin, radius);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___origin_0;
				float L_20 = __this->___radius_1;
				Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_19, L_20, NULL);
				// Gizmos.DrawWireSphere(origin + direction * maxDistance, radius);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___origin_0;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___direction_2;
				float L_23 = __this->___maxDistance_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_24, NULL);
				float L_26 = __this->___radius_1;
				Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_25, L_26, NULL);
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				V_2 = 0;
				goto IL_00bb_1;
			}

IL_00aa_1:
			{
				// RaycastData.DrawHitPointReference(raycastHits[i]);
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_27 = ___0_raycastHits;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_28 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_27);
				int32_t L_29 = V_2;
				NullCheck(L_28);
				int32_t L_30 = L_29;
				RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
				RaycastData_DrawHitPointReference_m2CD99C441C1A791D4DBD60A2752039922978EBB0(L_31, NULL);
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				int32_t L_32 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
			}

IL_00bb_1:
			{
				// for (int i = 0; i < validArraySize && i < raycastHits.Length; i++)
				int32_t L_33 = V_2;
				int32_t L_34 = ___1_validArraySize;
				if ((((int32_t)L_33) >= ((int32_t)L_34)))
				{
					goto IL_00c6_1;
				}
			}
			{
				int32_t L_35 = V_2;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_36 = ___0_raycastHits;
				RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_37 = *((RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8**)L_36);
				NullCheck(L_37);
				if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
				{
					goto IL_00aa_1;
				}
			}

IL_00c6_1:
			{
				// }
				goto IL_00d6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d6:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCastData_DrawAllGizmos_mA4B324A1F4F2E1F43FF02C985A3EE2258CDF9BC8_AdjustorThunk (RuntimeObject* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_raycastHits, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	SphereCastData_DrawAllGizmos_mA4B324A1F4F2E1F43FF02C985A3EE2258CDF9BC8(_thisAdjusted, ___0_raycastHits, ___1_validArraySize, ___2_color, ___3_hitColor, method);
}
// System.Void Kit.Physic.SphereCastData::Update(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_Update_mD8A2FC87859D4816546FE781335FB1B6B6298747 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, const RuntimeMethod* method) 
{
	{
		// origin = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___origin_0 = L_0;
		// radius = _radius;
		float L_1 = ___1__radius;
		__this->___radius_1 = L_1;
		// direction = _direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2__direction;
		__this->___direction_2 = L_2;
		// maxDistance = _maxDistance;
		float L_3 = ___3__maxDistance;
		__this->___maxDistance_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCastData_Update_mD8A2FC87859D4816546FE781335FB1B6B6298747_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2__direction, float ___3__maxDistance, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	SphereCastData_Update_mD8A2FC87859D4816546FE781335FB1B6B6298747(_thisAdjusted, ___0__origin, ___1__radius, ___2__direction, ___3__maxDistance, method);
}
// System.Void Kit.Physic.SphereCastData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCastData_Reset_mD36F9552A6C8BE840E5053E38D8FC49B5E9D1832 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// origin = direction = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0;
		V_0 = L_1;
		__this->___direction_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		__this->___origin_0 = L_2;
		// radius = maxDistance = 0f;
		float L_3 = (0.0f);
		V_1 = L_3;
		__this->___maxDistance_3 = L_3;
		float L_4 = V_1;
		__this->___radius_1 = L_4;
		// hit = new RaycastHit();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_5 = (&__this->___hit_4);
		il2cpp_codegen_initobj(L_5, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereCastData_Reset_mD36F9552A6C8BE840E5053E38D8FC49B5E9D1832_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	SphereCastData_Reset_mD36F9552A6C8BE840E5053E38D8FC49B5E9D1832(_thisAdjusted, method);
}
// System.String Kit.Physic.SphereCastData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SphereCastData_ToString_mEBC43E18CEC377FC559B9C4D723837CFFD0EC076 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FCB558390DBD1CD8CB908BA9AF2EB69059913D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35EAC1FFBECF4823C17FC1D459D5C28A1B852B0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (hitted) ?
		//     string.Format("origin {0:F2}, Distance: {1:F2}, Direction : {3:F2}, Hit: {4} ({5:F2})", origin, maxDistance, direction, hit.transform.name, hit.point) :
		//     string.Format("origin {0:F2}, Distance: {1:F2}, Direction : {3:F2}, Hit: None", origin, maxDistance, direction);
		bool L_0;
		L_0 = SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096(__this, NULL);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___maxDistance_3;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___direction_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7;
		RuntimeObject* L_9 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral09FCB558390DBD1CD8CB908BA9AF2EB69059913D, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0034:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		float L_17 = __this->___maxDistance_3;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___direction_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21;
		RuntimeObject* L_23 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_25 = (&__this->___hit_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_25, NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_29 = (&__this->___hit_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30;
		RuntimeObject* L_32 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral35EAC1FFBECF4823C17FC1D459D5C28A1B852B0E, L_28, NULL);
		return L_33;
	}
}
IL2CPP_EXTERN_C  String_t* SphereCastData_ToString_mEBC43E18CEC377FC559B9C4D723837CFFD0EC076_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SphereCastData_ToString_mEBC43E18CEC377FC559B9C4D723837CFFD0EC076(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Kit.Physic.SphereCastData::GetRayEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereCastData_GetRayEndPoint_mBB8869B81FD92E3239B4413F656F4C453C8622D1 (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return origin + direction.normalized * ((hitted) ? hitResult.distance : maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___direction_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_1, NULL);
		bool L_3;
		L_3 = SphereCastData_get_hitted_m037CEA1CF0309155F632EF09684E486774EC2096(__this, NULL);
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		float L_4 = __this->___maxDistance_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002f;
	}

IL_0021:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_5;
		L_5 = SphereCastData_get_hitResult_m3698907ADC738183AE0A51378A449D7331AA841C_inline(__this, NULL);
		V_0 = L_5;
		float L_6;
		L_6 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B3_1, G_B3_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(G_B3_2, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SphereCastData_GetRayEndPoint_mBB8869B81FD92E3239B4413F656F4C453C8622D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = SphereCastData_GetRayEndPoint_mBB8869B81FD92E3239B4413F656F4C453C8622D1(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Kit.Physic.SphereOverlapData Kit.Physic.SphereOverlapData::get_NONE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61 SphereOverlapData_get_NONE_mD4E9FC79855CEE5641A6F51B6CB6416399CF3D62 (const RuntimeMethod* method) 
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static SphereOverlapData NONE { get { return default(SphereOverlapData); } }
		il2cpp_codegen_initobj((&V_0), sizeof(SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61));
		SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61 L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Kit.Physic.SphereOverlapData::get_hitCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereOverlapData_get_hitCount_mA9A070C99066643A97B68210C98E1895EA6DD8D1 (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t SphereOverlapData_get_hitCount_mA9A070C99066643A97B68210C98E1895EA6DD8D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SphereOverlapData_get_hitCount_mA9A070C99066643A97B68210C98E1895EA6DD8D1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.SphereOverlapData::set_hitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6 (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean Kit.Physic.SphereOverlapData::get_hitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereOverlapData_get_hitted_mB28B0E30933C4AFC6187E2659293FFBCBF0091AE (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) 
{
	{
		// public bool hitted { get { return hitCount > 0; } }
		int32_t L_0;
		L_0 = SphereOverlapData_get_hitCount_mA9A070C99066643A97B68210C98E1895EA6DD8D1_inline(__this, NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool SphereOverlapData_get_hitted_mB28B0E30933C4AFC6187E2659293FFBCBF0091AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	bool _returnValue;
	_returnValue = SphereOverlapData_get_hitted_mB28B0E30933C4AFC6187E2659293FFBCBF0091AE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Kit.Physic.SphereOverlapData::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData__ctor_m6F754C8D1543F8AA165F4424DAE542E8D4D1AE0D (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, const RuntimeMethod* method) 
{
	{
		// public SphereOverlapData(Vector3 _origin, float _radius) : this()
		il2cpp_codegen_initobj(__this, sizeof(SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61));
		// origin = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___origin_0 = L_0;
		// radius = _radius;
		float L_1 = ___1__radius;
		__this->___radius_1 = L_1;
		// hitCount = 0;
		SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6_inline(__this, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereOverlapData__ctor_m6F754C8D1543F8AA165F4424DAE542E8D4D1AE0D_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	SphereOverlapData__ctor_m6F754C8D1543F8AA165F4424DAE542E8D4D1AE0D(_thisAdjusted, ___0__origin, ___1__radius, method);
}
// UnityEngine.Collider[] Kit.Physic.SphereOverlapData::Overlap(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* SphereOverlapData_Overlap_mE567EA7A35CD7B9A6A2F010ABF7EB8B9DF9AEB4F (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(_origin, _radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		float L_1 = ___1__radius;
		SphereOverlapData_Update_m80C0671172A9E592E33AF4EC299F5AFBDC7FBB2B(__this, L_0, L_1, NULL);
		// return Overlap(layerMask, queryTriggerInteraction);
		int32_t L_2 = ___2_layerMask;
		int32_t L_3 = ___3_queryTriggerInteraction;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4;
		L_4 = SphereOverlapData_Overlap_m795C8F02E263256A79E0A6FEA80D0182F060E64A(__this, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* SphereOverlapData_Overlap_mE567EA7A35CD7B9A6A2F010ABF7EB8B9DF9AEB4F_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, int32_t ___2_layerMask, int32_t ___3_queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* _returnValue;
	_returnValue = SphereOverlapData_Overlap_mE567EA7A35CD7B9A6A2F010ABF7EB8B9DF9AEB4F(_thisAdjusted, ___0__origin, ___1__radius, ___2_layerMask, ___3_queryTriggerInteraction, method);
	return _returnValue;
}
// UnityEngine.Collider[] Kit.Physic.SphereOverlapData::Overlap(System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* SphereOverlapData_Overlap_m795C8F02E263256A79E0A6FEA80D0182F060E64A (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method) 
{
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	{
		// Collider[] hitCollider = Physics.OverlapSphere(origin, radius, layerMask, queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		float L_1 = __this->___radius_1;
		int32_t L_2 = ___0_layerMask;
		int32_t L_3 = ___1_queryTriggerInteraction;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4;
		L_4 = Physics_OverlapSphere_m348CF43E53C703DEF4A6780A3B9DE2A1FB958318(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// hitCount = hitCollider.Length;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5 = V_0;
		NullCheck(L_5);
		SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6_inline(__this, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		// return hitCollider;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* SphereOverlapData_Overlap_m795C8F02E263256A79E0A6FEA80D0182F060E64A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_layerMask, int32_t ___1_queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* _returnValue;
	_returnValue = SphereOverlapData_Overlap_m795C8F02E263256A79E0A6FEA80D0182F060E64A(_thisAdjusted, ___0_layerMask, ___1_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.SphereOverlapData::OverlapNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereOverlapData_OverlapNonAlloc_m27A32A1AF5FEB36DAFD0C9990DDA4B834F9085B6 (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___2_results, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// Update(_origin, _radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		float L_1 = ___1__radius;
		SphereOverlapData_Update_m80C0671172A9E592E33AF4EC299F5AFBDC7FBB2B(__this, L_0, L_1, NULL);
		// return OverlapNonAlloc(ref results, layerMask, queryTriggerInteraction);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_2 = ___2_results;
		int32_t L_3 = ___3_layerMask;
		int32_t L_4 = ___4_queryTriggerInteraction;
		int32_t L_5;
		L_5 = SphereOverlapData_OverlapNonAlloc_mF5B1D2D9B1BB27E249DC76EB8A73E7A542CC09AC(__this, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t SphereOverlapData_OverlapNonAlloc_m27A32A1AF5FEB36DAFD0C9990DDA4B834F9085B6_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___2_results, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SphereOverlapData_OverlapNonAlloc_m27A32A1AF5FEB36DAFD0C9990DDA4B834F9085B6(_thisAdjusted, ___0__origin, ___1__radius, ___2_results, ___3_layerMask, ___4_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Int32 Kit.Physic.SphereOverlapData::OverlapNonAlloc(UnityEngine.Collider[]&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SphereOverlapData_OverlapNonAlloc_mF5B1D2D9B1BB27E249DC76EB8A73E7A542CC09AC (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method) 
{
	{
		// hitCount = Physics.OverlapSphereNonAlloc(origin, radius, results, layerMask, queryTriggerInteraction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___origin_0;
		float L_1 = __this->___radius_1;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_2 = ___0_results;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_2);
		int32_t L_4 = ___1_layerMask;
		int32_t L_5 = ___2_queryTriggerInteraction;
		int32_t L_6;
		L_6 = Physics_OverlapSphereNonAlloc_mED890C8454FCC0354A94F97453707FA01B27AE83(L_0, L_1, L_3, L_4, L_5, NULL);
		SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6_inline(__this, L_6, NULL);
		// return hitCount;
		int32_t L_7;
		L_7 = SphereOverlapData_get_hitCount_mA9A070C99066643A97B68210C98E1895EA6DD8D1_inline(__this, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t SphereOverlapData_OverlapNonAlloc_mF5B1D2D9B1BB27E249DC76EB8A73E7A542CC09AC_AdjustorThunk (RuntimeObject* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_results, int32_t ___1_layerMask, int32_t ___2_queryTriggerInteraction, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SphereOverlapData_OverlapNonAlloc_mF5B1D2D9B1BB27E249DC76EB8A73E7A542CC09AC(_thisAdjusted, ___0_results, ___1_layerMask, ___2_queryTriggerInteraction, method);
	return _returnValue;
}
// System.Void Kit.Physic.SphereOverlapData::DrawOverlapGizmos(UnityEngine.Collider[]&,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData_DrawOverlapGizmos_m0C33125CA55F7AE15D3F88962BEC125FEB2A7FF4 (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B8_0 = NULL;
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	ColorScope_t5FA74F1C51613A7A4F01EA544155069930A65A26* G_B9_1 = NULL;
	{
		// color = color == default(Color) ? Color.white : color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___2_color;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_color;
		G_B3_0 = L_3;
		goto IL_0019;
	}

IL_0014:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		___2_color = G_B3_0;
		// hitColor = hitColor == default(Color) ? Color.red : hitColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___3_hitColor;
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		bool L_7;
		L_7 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___3_hitColor;
		G_B6_0 = L_8;
		goto IL_0036;
	}

IL_0031:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B6_0 = L_9;
	}

IL_0036:
	{
		___3_hitColor = G_B6_0;
		// using (new ColorScope(validArraySize == 0 ? color : hitColor))
		int32_t L_10 = ___1_validArraySize;
		G_B7_0 = (&V_1);
		if (!L_10)
		{
			G_B8_0 = (&V_1);
			goto IL_0041;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___3_hitColor;
		G_B9_0 = L_11;
		G_B9_1 = G_B7_0;
		goto IL_0042;
	}

IL_0041:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___2_color;
		G_B9_0 = L_12;
		G_B9_1 = G_B8_0;
	}

IL_0042:
	{
		ColorScope__ctor_mDEEDC3A90C51EFEB2FF63DA7FA767531E1AB92E5(G_B9_1, G_B9_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0086:
			{// begin finally (depth: 1)
				ColorScope_Dispose_mF9A26EC4DDDE779D39A002E8F07A57D29CFBDEBA((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// Gizmos.DrawWireSphere(origin, radius);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___origin_0;
				float L_14 = __this->___radius_1;
				Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_13, L_14, NULL);
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				V_2 = 0;
				goto IL_0079_1;
			}

IL_005c_1:
			{
				// Gizmos.DrawLine(origin, colliderResult[i].transform.position);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___origin_0;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_16 = ___0_colliderResult;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_17 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_16);
				int32_t L_18 = V_2;
				NullCheck(L_17);
				int32_t L_19 = L_18;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				NullCheck(L_20);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
				L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
				NullCheck(L_21);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
				L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_15, L_22, NULL);
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				int32_t L_23 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_0079_1:
			{
				// for (int i = 0; i < validArraySize && i < colliderResult.Length; ++i)
				int32_t L_24 = V_2;
				int32_t L_25 = ___1_validArraySize;
				if ((((int32_t)L_24) >= ((int32_t)L_25)))
				{
					goto IL_0084_1;
				}
			}
			{
				int32_t L_26 = V_2;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** L_27 = ___0_colliderResult;
				ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_28 = *((ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787**)L_27);
				NullCheck(L_28);
				if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
				{
					goto IL_005c_1;
				}
			}

IL_0084_1:
			{
				// }
				goto IL_0094;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereOverlapData_DrawOverlapGizmos_m0C33125CA55F7AE15D3F88962BEC125FEB2A7FF4_AdjustorThunk (RuntimeObject* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787** ___0_colliderResult, int32_t ___1_validArraySize, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_hitColor, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	SphereOverlapData_DrawOverlapGizmos_m0C33125CA55F7AE15D3F88962BEC125FEB2A7FF4(_thisAdjusted, ___0_colliderResult, ___1_validArraySize, ___2_color, ___3_hitColor, method);
}
// System.Void Kit.Physic.SphereOverlapData::Update(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData_Update_m80C0671172A9E592E33AF4EC299F5AFBDC7FBB2B (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, const RuntimeMethod* method) 
{
	{
		// origin = _origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0__origin;
		__this->___origin_0 = L_0;
		// radius = _radius;
		float L_1 = ___1__radius;
		__this->___radius_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereOverlapData_Update_m80C0671172A9E592E33AF4EC299F5AFBDC7FBB2B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0__origin, float ___1__radius, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	SphereOverlapData_Update_m80C0671172A9E592E33AF4EC299F5AFBDC7FBB2B(_thisAdjusted, ___0__origin, ___1__radius, method);
}
// System.Void Kit.Physic.SphereOverlapData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereOverlapData_Reset_mA3D80F1E9406DED6C3B6E4D67D1FED49EBF002A1 (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) 
{
	{
		// origin = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___origin_0 = L_0;
		// radius = 0f;
		__this->___radius_1 = (0.0f);
		// hitCount = 0;
		SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6_inline(__this, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SphereOverlapData_Reset_mA3D80F1E9406DED6C3B6E4D67D1FED49EBF002A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	SphereOverlapData_Reset_mA3D80F1E9406DED6C3B6E4D67D1FED49EBF002A1(_thisAdjusted, method);
}
// System.String Kit.Physic.SphereOverlapData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SphereOverlapData_ToString_mE03E50F73EFE127510289DB28A3946D6D9FE41BF (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53A7E87840EE87FE39C2098611226EF8BA3B1E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61543B678348A739486F4C238C933EE79A868276);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (hitted) ?
		//     string.Format("Origin: {0:F2}, Radius: {1:F2}, Hit: {2}", origin, radius, hitCount) :
		//     string.Format("Origin: {0:F2}, Radius: {1:F2}, Hit: None", origin, radius);
		bool L_0;
		L_0 = SphereOverlapData_get_hitted_mB28B0E30933C4AFC6187E2659293FFBCBF0091AE(__this, NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___radius_1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral61543B678348A739486F4C238C933EE79A868276, L_3, L_6, NULL);
		return L_7;
	}

IL_0029:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_9);
		float L_11 = __this->___radius_1;
		float L_12 = L_11;
		RuntimeObject* L_13 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_12);
		int32_t L_14;
		L_14 = SphereOverlapData_get_hitCount_mA9A070C99066643A97B68210C98E1895EA6DD8D1_inline(__this, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral53A7E87840EE87FE39C2098611226EF8BA3B1E2F, L_10, L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* SphereOverlapData_ToString_mE03E50F73EFE127510289DB28A3946D6D9FE41BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SphereOverlapData_ToString_mE03E50F73EFE127510289DB28A3946D6D9FE41BF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_5;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontTopLeft_m3EB767040D4B6DB0EDA798E04794A343503317E5_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontTopLeft { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ClocalFrontTopLeftU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_localFrontTopLeft_m1BEE47BBBF70B1FE9053C6C9C498B61991446891_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontTopLeft { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3ClocalFrontTopLeftU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontTopRight_mFCD5583532C103AA63C8667F822B80ED4F976296_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontTopRight { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ClocalFrontTopRightU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_localFrontTopRight_mE10AEA3BFF70CD5E73C6A927E07A6BCC0EC7FA69_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontTopRight { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3ClocalFrontTopRightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontBottomLeft_m031D123CD7F13D36B11934CF89A57B565393CE0C_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontBottomLeft { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ClocalFrontBottomLeftU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_localFrontBottomLeft_m4AF3425E297966EF5C65C8AEA323A68DCA60096C_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontBottomLeft { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3ClocalFrontBottomLeftU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_localFrontBottomRight_m9DB41484AE5BD77EC1ABB81EC0A0B0592FE1A67F_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontBottomRight { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3ClocalFrontBottomRightU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_localFrontBottomRight_m18C4A4AAD0EA576C4C435CE9129A6E0130E74FF6_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 localFrontBottomRight { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3ClocalFrontBottomRightU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Box_get_origin_mFD5D2C7FF12FF737E92A77042DEF273101771BB5_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 origin { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CoriginU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Box_set_origin_m21E9C56EEE3394E8A3A4140A876CFC985B0D8590_inline (Box_t857346ED05C018CA2BA3E886B39ECFA3A41DBEC0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 origin { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CoriginU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 BoxCastData_get_hitResult_m64D440ECB762292BB5E55D99D2F61611D13DCC6F_inline (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___hit_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxCastData_set_hitResult_mB95FA30F706B30FD894B58979EF6183D033FB4D5_inline (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___hit_5 = L_0;
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoxCastData_get_hitCount_mC236900E8E10AA04B4DCD2FA1E1C9A816FE9B66F_inline (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxCastData_set_hitCount_mD3BCDE5C720CC8462F0ED326FBF58A6D27FCD967_inline (BoxCastData_tD25AA404DB2F4D8695A3D33E08006B8419632CF3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoxOverlapData_get_hitCount_m8505E89DD5CBE80A1F1EBFD2D35868C88C0FB869_inline (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoxOverlapData_set_hitCount_mF3CB09269F894FBD7F7AB352FA964D01EBF6C2F9_inline (BoxOverlapData_t284C0640891089729CD6A1375A275803F2223465* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 CapsuleCastData_get_hitResult_m9D99E4B932B33B53AB787F191BDDD1E2E1775DBF_inline (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___hit_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CapsuleCastData_set_hitResult_m8FCAB186839C631894E970567A7EE7079E5D74DB_inline (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___hit_5 = L_0;
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CapsuleCastData_get_hitCount_m2DDBA73C2FB3829312EF970F0A0C892508F69342_inline (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CapsuleCastData_set_hitCount_mF215AD2DC02DE85ADE601A78906BCB764CECC0A9_inline (CapsuleCastData_t75430FC32F9D109B7ABDD1FE083925A3C820937C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CapsuleData_get_radius_mDBA8A87A4CD5B983B8712808EC2A35FCDDF0DAD3_inline (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public float radius { get { return m_Radius; } set { m_Radius = value; m_Dirty = true; } }
		float L_0 = __this->___m_Radius_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleData_get_center_m8A5538C292BF57A39A1786CAB6E2C9ACCA149E9D_inline (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 center { get { return m_Center; } set { m_Center = value; m_Dirty = true; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CapsuleData_get_height_m5BCB654887F4ADFF6D048382BF855F9602840F71_inline (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public float height { get { return m_Height; } set { m_Height = value; m_Dirty = true; } }
		float L_0 = __this->___m_Height_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CapsuleData_get_direction_mD196AD135013CFBC6C55D99915AAE1141615EAD1_inline (CapsuleData_t5DCFA85325898ED5F8E13D3EE6F43763FAFA9C31* __this, const RuntimeMethod* method) 
{
	{
		// public int direction { get { return m_Direction; } set { m_Direction = value; m_Dirty = true; } }
		int32_t L_0 = __this->___m_Direction_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_v;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_v;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_v;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_lhs;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_rhs;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_lhs;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_rhs;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_lhs;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_rhs;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_lhs;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_rhs;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CapsuleOverlapData_get_hitCount_m7BF8D27D74F378CAD3EEC7F95D4D5160001A118E_inline (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CapsuleOverlapData_set_hitCount_m11D841C0D30335B121CEA765A2EBF08A692359F4_inline (CapsuleOverlapData_t731B283443B5D1038C09CEDACC333BD63DAB7F7D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 RaycastData_get_hitResult_mBFDD1C1A64E46959F1AE1F53792B27AAAC11AA2C_inline (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___hit_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastData_set_hitResult_mA22B3171DBCE425311D5D7F47ECF993F5A86786E_inline (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___hit_3 = L_0;
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RaycastData_get_hitCount_m6E0DE8C711D81AD272E27666FD7025F5C73C2FE3_inline (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastData_set_hitCount_mFC2938D0CC67ED1216E5FB3418D6F617FE181BFF_inline (RaycastData_t3E90522EAB12B5A8046FF7E870B4F7E913A6CE73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhysicRaycast_Invoke_m394D8E98F753B6C585E8F0B67CC462C055DD264F_inline (PhysicRaycast_tA1242E44C78FE27B6B2EF9C00E1651E3DA980FF4* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastHelper_set_m_HittedCount_m565DA55AEE0985C606AD5B83DFE2CED819580C27_inline (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int m_HittedCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3Cm_HittedCountU3Ek__BackingField_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RaycastHelper_get_m_HittedCount_m89471EDF80B66D51C95630A986EC3FB82C2B2044_inline (RaycastHelper_tC7A3376ED596CE784220EAAFB601457B04AAE798* __this, const RuntimeMethod* method) 
{
	{
		// public int m_HittedCount { get; private set; }
		int32_t L_0 = __this->___U3Cm_HittedCountU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 SphereCastData_get_hitResult_m3698907ADC738183AE0A51378A449D7331AA841C_inline (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___hit_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereCastData_set_hitResult_m06CC846F3FC1D5157E79FE475F589BECEA57C0A3_inline (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ___0_value;
		__this->___hit_4 = L_0;
		// public RaycastHit hitResult { get { return hit; } set { hit = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SphereCastData_get_hitCount_m09E763E4BADF8D1067B9A17A76DB20A851AE29E7_inline (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereCastData_set_hitCount_m1C815A018D0C0C8B40E38313500C99AAE1872673_inline (SphereCastData_t5FECA24DDDF578B7B4F55E54FA9CA9251857BD32* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SphereOverlapData_get_hitCount_mA9A070C99066643A97B68210C98E1895EA6DD8D1_inline (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = __this->___U3ChitCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SphereOverlapData_set_hitCount_mBEAA19C62E4B969D81BD45349200B1B81F17C4C6_inline (SphereOverlapData_t0CCF5328AAE9974B0B2C003A39EEEA13363C3F61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int hitCount { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3ChitCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_c;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_c;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}

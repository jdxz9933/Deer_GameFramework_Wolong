#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>
struct List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<tackor.UIExtension.HorizontalSelector/Item>
struct Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<TMPro.TMP_Text>
struct UnityEvent_1_tFCD0B6BA1A2720685E34D3D17A6D8DCD6F415F37;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// tackor.UIExtension.HorizontalSelector/Item[]
struct ItemU5BU5D_tF0319F6EEF4E14412EF85660E4E689FCD4E7E0D3;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E;
// tackor.UIExtension.HorizontalSelector
struct HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// tackor.UIExtension.HorizontalSelector/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27;
// tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37
struct U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA;
// tackor.UIExtension.HorizontalSelector/Item
struct Item_tA4DB6B306B6671EAADFD790CC24391F081151C59;
// tackor.UIExtension.HorizontalSelector/ItemTextChangedEvent
struct ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70;
// tackor.UIExtension.HorizontalSelector/SelectorEvent
struct SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Item_tA4DB6B306B6671EAADFD790CC24391F081151C59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2180292338BD24193A67CCA833EBEC213E1DA2BA;
IL2CPP_EXTERN_C String_t* _stringLiteral47A467FCA64DDD3BAAD1070554D72F9211D266C8;
IL2CPP_EXTERN_C String_t* _stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C;
IL2CPP_EXTERN_C String_t* _stringLiteral54DF283530656981695D10D91E1B7A3BDDA12421;
IL2CPP_EXTERN_C String_t* _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
IL2CPP_EXTERN_C String_t* _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
IL2CPP_EXTERN_C String_t* _stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255;
IL2CPP_EXTERN_C String_t* _stringLiteralCD553BF5F87755D2D78FCAC2D8CCBED6E7F2ABBD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF6D5E73C35C60D365C5472417D568C1024FB4A9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mDDE24CB1FE54DFBDA113AD5EF9C5CFD7A02C6531_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD295A5E2CA98F76E0FA867BB5E55D763741C9CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2104E631A4CAB638B391C217AEDA3109BF8CC019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisableAnimatorU3Ed__37_System_Collections_IEnumerator_Reset_m58A05064FE8C4A1C336613296478A159BFD77FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CRemoveItemU3Eb__0_mAF4611E1FAA4B3C490EA275446E0880FB3E64487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m8BD9540647A9CC0247BE3121C45DB29B38A938EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD3258B155109CFB492F5BC0E4278A41483137CF0 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>
struct List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_tF0319F6EEF4E14412EF85660E4E689FCD4E7E0D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// tackor.UIExtension.HorizontalSelector/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27  : public RuntimeObject
{
	// System.String tackor.UIExtension.HorizontalSelector/<>c__DisplayClass32_0::itemTitle
	String_t* ___itemTitle_0;
};

// tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37
struct U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA  : public RuntimeObject
{
	// System.Int32 tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// tackor.UIExtension.HorizontalSelector tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::<>4__this
	HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* ___U3CU3E4__this_2;
};

// tackor.UIExtension.HorizontalSelector/Item
struct Item_tA4DB6B306B6671EAADFD790CC24391F081151C59  : public RuntimeObject
{
	// System.String tackor.UIExtension.HorizontalSelector/Item::itemTitle
	String_t* ___itemTitle_0;
	// UnityEngine.Sprite tackor.UIExtension.HorizontalSelector/Item::itemIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___itemIcon_1;
	// UnityEngine.Events.UnityEvent tackor.UIExtension.HorizontalSelector/Item::onItemSelect
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onItemSelect_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<TMPro.TMP_Text>
struct UnityEvent_1_tFCD0B6BA1A2720685E34D3D17A6D8DCD6F415F37  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// tackor.UIExtension.HorizontalSelector/ItemTextChangedEvent
struct ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70  : public UnityEvent_1_tFCD0B6BA1A2720685E34D3D17A6D8DCD6F415F37
{
};

// tackor.UIExtension.HorizontalSelector/SelectorEvent
struct SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Predicate`1<tackor.UIExtension.HorizontalSelector/Item>
struct Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// tackor.UIExtension.HorizontalSelector
struct HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text tackor.UIExtension.HorizontalSelector::label
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___label_4;
	// TMPro.TMP_Text tackor.UIExtension.HorizontalSelector::labelHelper
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___labelHelper_5;
	// UnityEngine.UI.Image tackor.UIExtension.HorizontalSelector::labelIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___labelIcon_6;
	// UnityEngine.UI.Image tackor.UIExtension.HorizontalSelector::labelIconHelper
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___labelIconHelper_7;
	// UnityEngine.UI.HorizontalLayoutGroup tackor.UIExtension.HorizontalSelector::contentLayout
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* ___contentLayout_8;
	// UnityEngine.UI.HorizontalLayoutGroup tackor.UIExtension.HorizontalSelector::contentLayoutHelper
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* ___contentLayoutHelper_9;
	// UnityEngine.Transform tackor.UIExtension.HorizontalSelector::indicatorParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___indicatorParent_10;
	// UnityEngine.GameObject tackor.UIExtension.HorizontalSelector::indicatorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___indicatorObject_11;
	// TMPro.TMP_Text tackor.UIExtension.HorizontalSelector::indicatorText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___indicatorText_12;
	// System.String tackor.UIExtension.HorizontalSelector::newItemTitle
	String_t* ___newItemTitle_13;
	// System.Boolean tackor.UIExtension.HorizontalSelector::enableIcon
	bool ___enableIcon_14;
	// System.Boolean tackor.UIExtension.HorizontalSelector::saveSelected
	bool ___saveSelected_15;
	// System.String tackor.UIExtension.HorizontalSelector::saveKey
	String_t* ___saveKey_17;
	// tackor.UIExtension.HorizontalSelector/IndicatorType tackor.UIExtension.HorizontalSelector::indicatorType
	int32_t ___indicatorType_18;
	// System.Boolean tackor.UIExtension.HorizontalSelector::invokeAtStart
	bool ___invokeAtStart_19;
	// System.Boolean tackor.UIExtension.HorizontalSelector::invertAnimation
	bool ___invertAnimation_20;
	// System.Boolean tackor.UIExtension.HorizontalSelector::loopSelection
	bool ___loopSelection_21;
	// System.Single tackor.UIExtension.HorizontalSelector::iconScale
	float ___iconScale_22;
	// System.Int32 tackor.UIExtension.HorizontalSelector::contentSpacing
	int32_t ___contentSpacing_23;
	// System.Int32 tackor.UIExtension.HorizontalSelector::defaultIndex
	int32_t ___defaultIndex_24;
	// System.Int32 tackor.UIExtension.HorizontalSelector::index
	int32_t ___index_25;
	// System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item> tackor.UIExtension.HorizontalSelector::items
	List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* ___items_26;
	// UnityEngine.Animator tackor.UIExtension.HorizontalSelector::m_Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_Animator_27;
	// tackor.UIExtension.HorizontalSelector/SelectorEvent tackor.UIExtension.HorizontalSelector::onValueChanged
	SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796* ___onValueChanged_28;
	// tackor.UIExtension.HorizontalSelector/ItemTextChangedEvent tackor.UIExtension.HorizontalSelector::onItemTextChanged
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* ___onItemTextChanged_29;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ReverseArrangement
	bool ___m_ReverseArrangement_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA  : public HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>
struct List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ItemU5BU5D_tF0319F6EEF4E14412EF85660E4E689FCD4E7E0D3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>

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

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// tackor.UIExtension.HorizontalSelector/<>c__DisplayClass32_0

// tackor.UIExtension.HorizontalSelector/<>c__DisplayClass32_0

// tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37

// tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37

// tackor.UIExtension.HorizontalSelector/Item

// tackor.UIExtension.HorizontalSelector/Item

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<TMPro.TMP_Text>

// UnityEngine.Events.UnityEvent`1<TMPro.TMP_Text>

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

// UnityEngine.Color32

// UnityEngine.Color32

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

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

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

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

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// tackor.UIExtension.HorizontalSelector/ItemTextChangedEvent

// tackor.UIExtension.HorizontalSelector/ItemTextChangedEvent

// tackor.UIExtension.HorizontalSelector/SelectorEvent

// tackor.UIExtension.HorizontalSelector/SelectorEvent

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// System.Predicate`1<tackor.UIExtension.HorizontalSelector/Item>

// System.Predicate`1<tackor.UIExtension.HorizontalSelector/Item>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// tackor.UIExtension.HorizontalSelector

// tackor.UIExtension.HorizontalSelector

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.LayoutGroup

// UnityEngine.UI.LayoutGroup

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.HorizontalLayoutGroup

// UnityEngine.UI.HorizontalLayoutGroup

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___0_arg0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void tackor.UIExtension.HorizontalSelector::SetupSelector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_SetupSelector_m8CEAA013FD9EE5E550BA0D84EB88E7E29FF86425 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) ;
// System.Void tackor.UIExtension.HorizontalSelector::UpdateContentLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_UpdateContentLayout_m932FA7AE5B853589C5452CB52C706EA662F79D4A (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>::get_Item(System.Int32)
inline Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* (*) (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared)(__this, ___0_arg0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>::get_Count()
inline int32_t List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<TMPro.TMP_Text>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F (UnityEvent_1_tFCD0B6BA1A2720685E34D3D17A6D8DCD6F415F37* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tFCD0B6BA1A2720685E34D3D17A6D8DCD6F415F37*, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::StopPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void tackor.UIExtension.HorizontalSelector/Item::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m7F306C606B379E9E933EC5337B8BD9C14B503398 (Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* __this, String_t* ___0_itemTitle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>::Add(T)
inline void List_1_Add_mF6D5E73C35C60D365C5472417D568C1024FB4A9D_inline (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* __this, Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E*, Item_tA4DB6B306B6671EAADFD790CC24391F081151C59*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void tackor.UIExtension.HorizontalSelector/Item::.ctor(System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m0CA77B1CFD58C9958476D4EF46038CA78E5EE6BE (Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* __this, String_t* ___0_itemTitle, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_itemIcon, const RuntimeMethod* method) ;
// System.Void tackor.UIExtension.HorizontalSelector/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m86861C0B5BD15EE1707EB1998471AA900F94D578 (U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<tackor.UIExtension.HorizontalSelector/Item>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m7C4FA4C4467EEE04B1AE7500FE13772144EC967A (Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>::Find(System.Predicate`1<T>)
inline Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* List_1_Find_mDDE24CB1FE54DFBDA113AD5EF9C5CFD7A02C6531 (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* __this, Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC* ___0_match, const RuntimeMethod* method)
{
	return ((  Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* (*) (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E*, Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___0_match, method);
}
// System.Boolean System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>::Remove(T)
inline bool List_1_Remove_mD295A5E2CA98F76E0FA867BB5E55D763741C9CEA (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* __this, Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E*, Item_tA4DB6B306B6671EAADFD790CC24391F081151C59*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void tackor.UIExtension.HorizontalSelector::UpdatePointIndicators()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_UpdatePointIndicators_m3CD012B0DF8DDCF91E0733800AE06F0885375092 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) ;
// System.Void tackor.UIExtension.HorizontalSelector::UpdateTextIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_UpdateTextIndicator_m785F45AB166F0DF34F4C3BD08DC7565C956DB420 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.HorizontalOrVerticalLayoutGroup::set_spacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859 (HorizontalOrVerticalLayoutGroup_tF1A06BC885BD6E7F38A8C43815549C111EEDEF2E* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform TMPro.TMP_Text::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_layoutRoot, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableAnimatorU3Ed__37__ctor_mD1D57E067690D8318B274BD51C177408BFDF78C8 (U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<tackor.UIExtension.HorizontalSelector/Item>::.ctor()
inline void List_1__ctor_m2104E631A4CAB638B391C217AEDA3109BF8CC019 (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, const RuntimeMethod*))UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<TMPro.TMP_Text>::.ctor()
inline void UnityEvent_1__ctor_m8BD9540647A9CC0247BE3121C45DB29B38A938EC (UnityEvent_1_tFCD0B6BA1A2720685E34D3D17A6D8DCD6F415F37* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tFCD0B6BA1A2720685E34D3D17A6D8DCD6F415F37*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// System.Void tackor.UIExtension.HorizontalSelector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_Awake_mBF0244B5795593BF028B99B458520032A6128313 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54DF283530656981695D10D91E1B7A3BDDA12421);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Animator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_Animator_27;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Animator = gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___m_Animator_27 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Animator_27), (void*)L_3);
	}

IL_001f:
	{
		// if (label == null || labelHelper == null)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___label_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___labelHelper_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}

IL_003b:
	{
		// Debug.LogError("<b><Horizontal Selector></b> Error: missing resources!", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral54DF283530656981695D10D91E1B7A3BDDA12421, __this, NULL);
		// return;
		return;
	}

IL_0047:
	{
		// SetupSelector();
		HorizontalSelector_SetupSelector_m8CEAA013FD9EE5E550BA0D84EB88E7E29FF86425(__this, NULL);
		// UpdateContentLayout();
		HorizontalSelector_UpdateContentLayout_m932FA7AE5B853589C5452CB52C706EA662F79D4A(__this, NULL);
		// if (invokeAtStart)
		bool L_8 = __this->___invokeAtStart_19;
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		// items[index].onItemSelect.Invoke();
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_9 = __this->___items_26;
		int32_t L_10 = __this->___index_25;
		NullCheck(L_9);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_11;
		L_11 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_9, L_10, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_11);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = L_11->___onItemSelect_2;
		NullCheck(L_12);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_12, NULL);
		// onValueChanged.Invoke(index);
		SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796* L_13 = __this->___onValueChanged_28;
		int32_t L_14 = __this->___index_25;
		NullCheck(L_13);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_13, L_14, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_OnEnable_mF229571011DDDD1CC92145F05B2234933E2AE302 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// StartCoroutine("DisableAnimator");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::NextItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_NextItem_m59196CD67044D67065BEF6E0AA1A81084CBB8AD9 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2180292338BD24193A67CCA833EBEC213E1DA2BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B10_0 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B9_0 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B26_0 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B25_0 = NULL;
	{
		// if (items.Count == 0) return;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_0 = __this->___items_26;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_0, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (items.Count == 0) return;
		return;
	}

IL_000e:
	{
		// StopCoroutine("DisableAnimator");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255, NULL);
		// m_Animator.enabled = true;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___m_Animator_27;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// if (loopSelection)
		bool L_3 = __this->___loopSelection_21;
		if (!L_3)
		{
			goto IL_0180;
		}
	}
	{
		// labelHelper.text = label.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___labelHelper_5;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___label_4;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_5);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// if (enableIcon && labelIcon != null)
		bool L_7 = __this->___enableIcon_14;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// labelIconHelper.sprite = labelIcon.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___labelIconHelper_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___labelIcon_6;
		NullCheck(L_11);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12;
		L_12 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_11, NULL);
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_12, NULL);
	}

IL_0072:
	{
		// index++;
		int32_t L_13 = __this->___index_25;
		__this->___index_25 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		// if (index > items.Count - 1)
		int32_t L_14 = __this->___index_25;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_15 = __this->___items_26;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_15, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_009c;
		}
	}
	{
		// index = 0;
		__this->___index_25 = 0;
	}

IL_009c:
	{
		// label.text = items[index].itemTitle;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17 = __this->___label_4;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_18 = __this->___items_26;
		int32_t L_19 = __this->___index_25;
		NullCheck(L_18);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_20;
		L_20 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_18, L_19, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21 = L_20->___itemTitle_0;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_21);
		// onItemTextChanged?.Invoke(label);
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_22 = __this->___onItemTextChanged_29;
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_23 = L_22;
		G_B9_0 = L_23;
		if (L_23)
		{
			G_B10_0 = L_23;
			goto IL_00c9;
		}
	}
	{
		goto IL_00d4;
	}

IL_00c9:
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_24 = __this->___label_4;
		NullCheck(G_B10_0);
		UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F(G_B10_0, L_24, UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var);
	}

IL_00d4:
	{
		// if (enableIcon && labelIcon != null)
		bool L_25 = __this->___enableIcon_14;
		if (!L_25)
		{
			goto IL_010b;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_010b;
		}
	}
	{
		// labelIcon.sprite = items[index].itemIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___labelIcon_6;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_29 = __this->___items_26;
		int32_t L_30 = __this->___index_25;
		NullCheck(L_29);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_31;
		L_31 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_29, L_30, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_31);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_32 = L_31->___itemIcon_1;
		NullCheck(L_28);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_28, L_32, NULL);
	}

IL_010b:
	{
		// items[index].onItemSelect.Invoke();
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_33 = __this->___items_26;
		int32_t L_34 = __this->___index_25;
		NullCheck(L_33);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_35;
		L_35 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_33, L_34, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_35);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_36 = L_35->___onItemSelect_2;
		NullCheck(L_36);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_36, NULL);
		// onValueChanged.Invoke(index);
		SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796* L_37 = __this->___onValueChanged_28;
		int32_t L_38 = __this->___index_25;
		NullCheck(L_37);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_37, L_38, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		// m_Animator.Play(null);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_39 = __this->___m_Animator_27;
		NullCheck(L_39);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_39, (String_t*)NULL, NULL);
		// m_Animator.StopPlayback();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_40 = __this->___m_Animator_27;
		NullCheck(L_40);
		Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0(L_40, NULL);
		// if (invertAnimation)
		bool L_41 = __this->___invertAnimation_20;
		if (!L_41)
		{
			goto IL_016b;
		}
	}
	{
		// m_Animator.Play("Previous");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = __this->___m_Animator_27;
		NullCheck(L_42);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_42, _stringLiteral2180292338BD24193A67CCA833EBEC213E1DA2BA, NULL);
		goto IL_02e2;
	}

IL_016b:
	{
		// m_Animator.Play("Forward");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_43 = __this->___m_Animator_27;
		NullCheck(L_43);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_43, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, NULL);
		goto IL_02e2;
	}

IL_0180:
	{
		// if (index != items.Count - 1)
		int32_t L_44 = __this->___index_25;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_45 = __this->___items_26;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_45, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if ((((int32_t)L_44) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_46, 1)))))
		{
			goto IL_02e2;
		}
	}
	{
		// labelHelper.text = label.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_47 = __this->___labelHelper_5;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_48 = __this->___label_4;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_48);
		NullCheck(L_47);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_47, L_49);
		// if (enableIcon && labelIcon != null)
		bool L_50 = __this->___enableIcon_14;
		if (!L_50)
		{
			goto IL_01da;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_01da;
		}
	}
	{
		// labelIconHelper.sprite = labelIcon.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_53 = __this->___labelIconHelper_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_54 = __this->___labelIcon_6;
		NullCheck(L_54);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_55;
		L_55 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_54, NULL);
		NullCheck(L_53);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_53, L_55, NULL);
	}

IL_01da:
	{
		// if (index >= items.Count - 1)
		int32_t L_56 = __this->___index_25;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_57 = __this->___items_26;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_57, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_58, 1)))))
		{
			goto IL_01f8;
		}
	}
	{
		// index = 0;
		__this->___index_25 = 0;
		goto IL_0206;
	}

IL_01f8:
	{
		// index++;
		int32_t L_59 = __this->___index_25;
		__this->___index_25 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0206:
	{
		// label.text = items[index].itemTitle;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_60 = __this->___label_4;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_61 = __this->___items_26;
		int32_t L_62 = __this->___index_25;
		NullCheck(L_61);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_63;
		L_63 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_61, L_62, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_63);
		String_t* L_64 = L_63->___itemTitle_0;
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_64);
		// onItemTextChanged?.Invoke(label);
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_65 = __this->___onItemTextChanged_29;
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_66 = L_65;
		G_B25_0 = L_66;
		if (L_66)
		{
			G_B26_0 = L_66;
			goto IL_0233;
		}
	}
	{
		goto IL_023e;
	}

IL_0233:
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_67 = __this->___label_4;
		NullCheck(G_B26_0);
		UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F(G_B26_0, L_67, UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var);
	}

IL_023e:
	{
		// if (enableIcon && labelIcon != null)
		bool L_68 = __this->___enableIcon_14;
		if (!L_68)
		{
			goto IL_0275;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_69 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_69, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_70)
		{
			goto IL_0275;
		}
	}
	{
		// labelIcon.sprite = items[index].itemIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_71 = __this->___labelIcon_6;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_72 = __this->___items_26;
		int32_t L_73 = __this->___index_25;
		NullCheck(L_72);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_74;
		L_74 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_72, L_73, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_74);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_75 = L_74->___itemIcon_1;
		NullCheck(L_71);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_71, L_75, NULL);
	}

IL_0275:
	{
		// items[index].onItemSelect.Invoke();
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_76 = __this->___items_26;
		int32_t L_77 = __this->___index_25;
		NullCheck(L_76);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_78;
		L_78 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_76, L_77, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_78);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_79 = L_78->___onItemSelect_2;
		NullCheck(L_79);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_79, NULL);
		// onValueChanged.Invoke(index);
		SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796* L_80 = __this->___onValueChanged_28;
		int32_t L_81 = __this->___index_25;
		NullCheck(L_80);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_80, L_81, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		// m_Animator.Play(null);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_82 = __this->___m_Animator_27;
		NullCheck(L_82);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_82, (String_t*)NULL, NULL);
		// m_Animator.StopPlayback();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_83 = __this->___m_Animator_27;
		NullCheck(L_83);
		Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0(L_83, NULL);
		// if (invertAnimation)
		bool L_84 = __this->___invertAnimation_20;
		if (!L_84)
		{
			goto IL_02d2;
		}
	}
	{
		// m_Animator.Play("Previous");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_85 = __this->___m_Animator_27;
		NullCheck(L_85);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_85, _stringLiteral2180292338BD24193A67CCA833EBEC213E1DA2BA, NULL);
		goto IL_02e2;
	}

IL_02d2:
	{
		// m_Animator.Play("Forward");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_86 = __this->___m_Animator_27;
		NullCheck(L_86);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_86, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, NULL);
	}

IL_02e2:
	{
		// if (saveSelected)
		bool L_87 = __this->___saveSelected_15;
		if (!L_87)
		{
			goto IL_0305;
		}
	}
	{
		// PlayerPrefs.SetInt($"{prefsSaveKey}{saveKey}", index);
		String_t* L_88 = __this->___saveKey_17;
		String_t* L_89;
		L_89 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C, L_88, NULL);
		int32_t L_90 = __this->___index_25;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_89, L_90, NULL);
	}

IL_0305:
	{
		// switch (indicatorType)
		int32_t L_91 = __this->___indicatorType_18;
		V_0 = L_91;
		int32_t L_92 = V_0;
		switch (L_92)
		{
			case 0:
			{
				goto IL_03c6;
			}
			case 1:
			{
				goto IL_0323;
			}
			case 2:
			{
				goto IL_0396;
			}
		}
	}
	{
		goto IL_03c6;
	}

IL_0323:
	{
		// for (int i = 0; i < items.Count; i++)
		V_1 = 0;
		goto IL_0386;
	}

IL_0327:
	{
		// GameObject go = indicatorParent.GetChild(i).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = __this->___indicatorParent_10;
		int32_t L_94 = V_1;
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_93, L_94, NULL);
		NullCheck(L_95);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96;
		L_96 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_95, NULL);
		// Transform onTrans = go.transform.Find("On");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = L_96;
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		NullCheck(L_98);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_98, _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73, NULL);
		V_2 = L_99;
		// Transform offTrans = go.transform.Find("Off");
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_100, _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5, NULL);
		// onTrans.gameObject.SetActive(index == i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = V_2;
		NullCheck(L_102);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103;
		L_103 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_102, NULL);
		int32_t L_104 = __this->___index_25;
		int32_t L_105 = V_1;
		NullCheck(L_103);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_103, (bool)((((int32_t)L_104) == ((int32_t)L_105))? 1 : 0), NULL);
		// offTrans.gameObject.SetActive(index != i);
		NullCheck(L_101);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106;
		L_106 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_101, NULL);
		int32_t L_107 = __this->___index_25;
		int32_t L_108 = V_1;
		NullCheck(L_106);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_106, (bool)((((int32_t)((((int32_t)L_107) == ((int32_t)L_108))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_109 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_0386:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_110 = V_1;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_111 = __this->___items_26;
		NullCheck(L_111);
		int32_t L_112;
		L_112 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_111, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if ((((int32_t)L_110) < ((int32_t)L_112)))
		{
			goto IL_0327;
		}
	}
	{
		// break;
		goto IL_03c6;
	}

IL_0396:
	{
		// indicatorText.text = String.Format("{0}/{1}", index, items.Count);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_113 = __this->___indicatorText_12;
		int32_t L_114 = __this->___index_25;
		int32_t L_115 = L_114;
		RuntimeObject* L_116 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_115);
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_117 = __this->___items_26;
		NullCheck(L_117);
		int32_t L_118;
		L_118 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_117, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		int32_t L_119 = L_118;
		RuntimeObject* L_120 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_119);
		String_t* L_121;
		L_121 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_116, L_120, NULL);
		NullCheck(L_113);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_113, L_121);
	}

IL_03c6:
	{
		// if (gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_122);
		bool L_123;
		L_123 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_122, NULL);
		if (!L_123)
		{
			goto IL_03df;
		}
	}
	{
		// StartCoroutine("DisableAnimator");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_124;
		L_124 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255, NULL);
	}

IL_03df:
	{
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::PreItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_PreItem_m6F5F711FA1AC31FEB4AE11246D55CB2851770C36 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2180292338BD24193A67CCA833EBEC213E1DA2BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B10_0 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B9_0 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B26_0 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B25_0 = NULL;
	{
		// if (items.Count == 0) return;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_0 = __this->___items_26;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_0, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (items.Count == 0) return;
		return;
	}

IL_000e:
	{
		// StopCoroutine("DisableAnimator");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255, NULL);
		// m_Animator.enabled = true;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___m_Animator_27;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// if (loopSelection)
		bool L_3 = __this->___loopSelection_21;
		if (!L_3)
		{
			goto IL_0180;
		}
	}
	{
		// labelHelper.text = label.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___labelHelper_5;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___label_4;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_5);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// if (enableIcon && labelIcon != null)
		bool L_7 = __this->___enableIcon_14;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// labelIconHelper.sprite = labelIcon.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___labelIconHelper_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___labelIcon_6;
		NullCheck(L_11);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12;
		L_12 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_11, NULL);
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_12, NULL);
	}

IL_0072:
	{
		// index--;
		int32_t L_13 = __this->___index_25;
		__this->___index_25 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		// if (index < 0)
		int32_t L_14 = __this->___index_25;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		// index = items.Count - 1;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_15 = __this->___items_26;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_15, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		__this->___index_25 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_009c:
	{
		// label.text = items[index].itemTitle;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17 = __this->___label_4;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_18 = __this->___items_26;
		int32_t L_19 = __this->___index_25;
		NullCheck(L_18);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_20;
		L_20 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_18, L_19, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21 = L_20->___itemTitle_0;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_21);
		// onItemTextChanged?.Invoke(label);
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_22 = __this->___onItemTextChanged_29;
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_23 = L_22;
		G_B9_0 = L_23;
		if (L_23)
		{
			G_B10_0 = L_23;
			goto IL_00c9;
		}
	}
	{
		goto IL_00d4;
	}

IL_00c9:
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_24 = __this->___label_4;
		NullCheck(G_B10_0);
		UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F(G_B10_0, L_24, UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var);
	}

IL_00d4:
	{
		// if (enableIcon && labelIcon != null)
		bool L_25 = __this->___enableIcon_14;
		if (!L_25)
		{
			goto IL_010b;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_010b;
		}
	}
	{
		// labelIcon.sprite = items[index].itemIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___labelIcon_6;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_29 = __this->___items_26;
		int32_t L_30 = __this->___index_25;
		NullCheck(L_29);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_31;
		L_31 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_29, L_30, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_31);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_32 = L_31->___itemIcon_1;
		NullCheck(L_28);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_28, L_32, NULL);
	}

IL_010b:
	{
		// items[index].onItemSelect.Invoke();
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_33 = __this->___items_26;
		int32_t L_34 = __this->___index_25;
		NullCheck(L_33);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_35;
		L_35 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_33, L_34, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_35);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_36 = L_35->___onItemSelect_2;
		NullCheck(L_36);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_36, NULL);
		// onValueChanged.Invoke(index);
		SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796* L_37 = __this->___onValueChanged_28;
		int32_t L_38 = __this->___index_25;
		NullCheck(L_37);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_37, L_38, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		// m_Animator.Play(null);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_39 = __this->___m_Animator_27;
		NullCheck(L_39);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_39, (String_t*)NULL, NULL);
		// m_Animator.StopPlayback();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_40 = __this->___m_Animator_27;
		NullCheck(L_40);
		Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0(L_40, NULL);
		// if (invertAnimation)
		bool L_41 = __this->___invertAnimation_20;
		if (!L_41)
		{
			goto IL_016b;
		}
	}
	{
		// m_Animator.Play("Forward");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = __this->___m_Animator_27;
		NullCheck(L_42);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_42, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, NULL);
		goto IL_02d4;
	}

IL_016b:
	{
		// m_Animator.Play("Previous");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_43 = __this->___m_Animator_27;
		NullCheck(L_43);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_43, _stringLiteral2180292338BD24193A67CCA833EBEC213E1DA2BA, NULL);
		goto IL_02d4;
	}

IL_0180:
	{
		// if (index != 0)
		int32_t L_44 = __this->___index_25;
		if (!L_44)
		{
			goto IL_02d4;
		}
	}
	{
		// labelHelper.text = label.text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_45 = __this->___labelHelper_5;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_46 = __this->___label_4;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_46);
		NullCheck(L_45);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_45, L_47);
		// if (enableIcon && labelIcon != null)
		bool L_48 = __this->___enableIcon_14;
		if (!L_48)
		{
			goto IL_01cd;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_49 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_01cd;
		}
	}
	{
		// labelIconHelper.sprite = labelIcon.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_51 = __this->___labelIconHelper_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_52 = __this->___labelIcon_6;
		NullCheck(L_52);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_53;
		L_53 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_52, NULL);
		NullCheck(L_51);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_51, L_53, NULL);
	}

IL_01cd:
	{
		// if (index == 0)
		int32_t L_54 = __this->___index_25;
		if (L_54)
		{
			goto IL_01ea;
		}
	}
	{
		// index = items.Count - 1;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_55 = __this->___items_26;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_55, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		__this->___index_25 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		goto IL_01f8;
	}

IL_01ea:
	{
		// index--;
		int32_t L_57 = __this->___index_25;
		__this->___index_25 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_01f8:
	{
		// label.text = items[index].itemTitle;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_58 = __this->___label_4;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_59 = __this->___items_26;
		int32_t L_60 = __this->___index_25;
		NullCheck(L_59);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_61;
		L_61 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_59, L_60, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_61);
		String_t* L_62 = L_61->___itemTitle_0;
		NullCheck(L_58);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_58, L_62);
		// onItemTextChanged?.Invoke(label);
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_63 = __this->___onItemTextChanged_29;
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_64 = L_63;
		G_B25_0 = L_64;
		if (L_64)
		{
			G_B26_0 = L_64;
			goto IL_0225;
		}
	}
	{
		goto IL_0230;
	}

IL_0225:
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_65 = __this->___label_4;
		NullCheck(G_B26_0);
		UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F(G_B26_0, L_65, UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var);
	}

IL_0230:
	{
		// if (enableIcon && labelIcon != null)
		bool L_66 = __this->___enableIcon_14;
		if (!L_66)
		{
			goto IL_0267;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_67 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_67, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_68)
		{
			goto IL_0267;
		}
	}
	{
		// labelIcon.sprite = items[index].itemIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_69 = __this->___labelIcon_6;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_70 = __this->___items_26;
		int32_t L_71 = __this->___index_25;
		NullCheck(L_70);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_72;
		L_72 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_70, L_71, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_72);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_73 = L_72->___itemIcon_1;
		NullCheck(L_69);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_69, L_73, NULL);
	}

IL_0267:
	{
		// items[index].onItemSelect.Invoke();
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_74 = __this->___items_26;
		int32_t L_75 = __this->___index_25;
		NullCheck(L_74);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_76;
		L_76 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_74, L_75, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_76);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_77 = L_76->___onItemSelect_2;
		NullCheck(L_77);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_77, NULL);
		// onValueChanged.Invoke(index);
		SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796* L_78 = __this->___onValueChanged_28;
		int32_t L_79 = __this->___index_25;
		NullCheck(L_78);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_78, L_79, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		// m_Animator.Play(null);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_80 = __this->___m_Animator_27;
		NullCheck(L_80);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_80, (String_t*)NULL, NULL);
		// m_Animator.StopPlayback();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_81 = __this->___m_Animator_27;
		NullCheck(L_81);
		Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0(L_81, NULL);
		// if (invertAnimation)
		bool L_82 = __this->___invertAnimation_20;
		if (!L_82)
		{
			goto IL_02c4;
		}
	}
	{
		// m_Animator.Play("Forward");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_83 = __this->___m_Animator_27;
		NullCheck(L_83);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_83, _stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1, NULL);
		goto IL_02d4;
	}

IL_02c4:
	{
		// m_Animator.Play("Previous");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_84 = __this->___m_Animator_27;
		NullCheck(L_84);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_84, _stringLiteral2180292338BD24193A67CCA833EBEC213E1DA2BA, NULL);
	}

IL_02d4:
	{
		// if (saveSelected)
		bool L_85 = __this->___saveSelected_15;
		if (!L_85)
		{
			goto IL_02f7;
		}
	}
	{
		// PlayerPrefs.SetInt($"{prefsSaveKey}{saveKey}", index);
		String_t* L_86 = __this->___saveKey_17;
		String_t* L_87;
		L_87 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C, L_86, NULL);
		int32_t L_88 = __this->___index_25;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_87, L_88, NULL);
	}

IL_02f7:
	{
		// switch (indicatorType)
		int32_t L_89 = __this->___indicatorType_18;
		V_0 = L_89;
		int32_t L_90 = V_0;
		switch (L_90)
		{
			case 0:
			{
				goto IL_03ba;
			}
			case 1:
			{
				goto IL_0315;
			}
			case 2:
			{
				goto IL_0388;
			}
		}
	}
	{
		goto IL_03ba;
	}

IL_0315:
	{
		// for (int i = 0; i < items.Count; i++)
		V_1 = 0;
		goto IL_0378;
	}

IL_0319:
	{
		// GameObject go = indicatorParent.GetChild(i).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91 = __this->___indicatorParent_10;
		int32_t L_92 = V_1;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_91, L_92, NULL);
		NullCheck(L_93);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94;
		L_94 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_93, NULL);
		// Transform onTrans = go.transform.Find("On");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = L_94;
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_95, NULL);
		NullCheck(L_96);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_96, _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73, NULL);
		V_2 = L_97;
		// Transform offTrans = go.transform.Find("Off");
		NullCheck(L_95);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_95, NULL);
		NullCheck(L_98);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99;
		L_99 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_98, _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5, NULL);
		// onTrans.gameObject.SetActive(index == i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100 = V_2;
		NullCheck(L_100);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101;
		L_101 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_100, NULL);
		int32_t L_102 = __this->___index_25;
		int32_t L_103 = V_1;
		NullCheck(L_101);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_101, (bool)((((int32_t)L_102) == ((int32_t)L_103))? 1 : 0), NULL);
		// offTrans.gameObject.SetActive(index != i);
		NullCheck(L_99);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104;
		L_104 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_99, NULL);
		int32_t L_105 = __this->___index_25;
		int32_t L_106 = V_1;
		NullCheck(L_104);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_104, (bool)((((int32_t)((((int32_t)L_105) == ((int32_t)L_106))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_107 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_0378:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_108 = V_1;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_109 = __this->___items_26;
		NullCheck(L_109);
		int32_t L_110;
		L_110 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_109, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if ((((int32_t)L_108) < ((int32_t)L_110)))
		{
			goto IL_0319;
		}
	}
	{
		// break;
		goto IL_03ba;
	}

IL_0388:
	{
		// indicatorText.text = String.Format("{0}/{1}", index + 1, items.Count);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_111 = __this->___indicatorText_12;
		int32_t L_112 = __this->___index_25;
		int32_t L_113 = ((int32_t)il2cpp_codegen_add(L_112, 1));
		RuntimeObject* L_114 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_113);
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_115 = __this->___items_26;
		NullCheck(L_115);
		int32_t L_116;
		L_116 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_115, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		int32_t L_117 = L_116;
		RuntimeObject* L_118 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_117);
		String_t* L_119;
		L_119 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_114, L_118, NULL);
		NullCheck(L_111);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_111, L_119);
	}

IL_03ba:
	{
		// if (gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120;
		L_120 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_120);
		bool L_121;
		L_121 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_120, NULL);
		if (!L_121)
		{
			goto IL_03d3;
		}
	}
	{
		// StartCoroutine("DisableAnimator");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_122;
		L_122 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral831761DA967BC5804C0C55EB5DEAE8D3EADA7255, NULL);
	}

IL_03d3:
	{
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::CreateNewItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_CreateNewItem_mB673CDBF61EF24ED515A86C1F2501CB2FF46D8EE (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tA4DB6B306B6671EAADFD790CC24391F081151C59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF6D5E73C35C60D365C5472417D568C1024FB4A9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* V_0 = NULL;
	{
		// Item item = new Item(title);
		String_t* L_0 = ___0_title;
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_1 = (Item_tA4DB6B306B6671EAADFD790CC24391F081151C59*)il2cpp_codegen_object_new(Item_tA4DB6B306B6671EAADFD790CC24391F081151C59_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Item__ctor_m7F306C606B379E9E933EC5337B8BD9C14B503398(L_1, L_0, NULL);
		V_0 = L_1;
		// newItemTitle = title;
		String_t* L_2 = ___0_title;
		__this->___newItemTitle_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newItemTitle_13), (void*)L_2);
		// items.Add(item);
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_3 = __this->___items_26;
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_4 = V_0;
		NullCheck(L_3);
		List_1_Add_mF6D5E73C35C60D365C5472417D568C1024FB4A9D_inline(L_3, L_4, List_1_Add_mF6D5E73C35C60D365C5472417D568C1024FB4A9D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::CreateNewItem(System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_CreateNewItem_mEDDBEB45B099A90B95942346E8080E6F56B9CDE6 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, String_t* ___0_title, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Item_tA4DB6B306B6671EAADFD790CC24391F081151C59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF6D5E73C35C60D365C5472417D568C1024FB4A9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* V_0 = NULL;
	{
		// Item item = new Item(title, sprite);
		String_t* L_0 = ___0_title;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___1_sprite;
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_2 = (Item_tA4DB6B306B6671EAADFD790CC24391F081151C59*)il2cpp_codegen_object_new(Item_tA4DB6B306B6671EAADFD790CC24391F081151C59_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Item__ctor_m0CA77B1CFD58C9958476D4EF46038CA78E5EE6BE(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// newItemTitle = title;
		String_t* L_3 = ___0_title;
		__this->___newItemTitle_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newItemTitle_13), (void*)L_3);
		// items.Add(item);
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_4 = __this->___items_26;
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_mF6D5E73C35C60D365C5472417D568C1024FB4A9D_inline(L_4, L_5, List_1_Add_mF6D5E73C35C60D365C5472417D568C1024FB4A9D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::RemoveItem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_RemoveItem_mEC2668C4982E6777B92C4799B9123338EB1FB4EB (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, String_t* ___0_itemTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mDDE24CB1FE54DFBDA113AD5EF9C5CFD7A02C6531_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD295A5E2CA98F76E0FA867BB5E55D763741C9CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CRemoveItemU3Eb__0_mAF4611E1FAA4B3C490EA275446E0880FB3E64487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27* L_0 = (U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass32_0__ctor_m86861C0B5BD15EE1707EB1998471AA900F94D578(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27* L_1 = V_0;
		String_t* L_2 = ___0_itemTitle;
		NullCheck(L_1);
		L_1->___itemTitle_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___itemTitle_0), (void*)L_2);
		// items.Remove(items.Find(x => x.itemTitle == itemTitle));
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_3 = __this->___items_26;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_4 = __this->___items_26;
		U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27* L_5 = V_0;
		Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC* L_6 = (Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC*)il2cpp_codegen_object_new(Predicate_1_tB26788B5A0B92FECE972DB8EDB4CF3AA22FB08FC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Predicate_1__ctor_m7C4FA4C4467EEE04B1AE7500FE13772144EC967A(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass32_0_U3CRemoveItemU3Eb__0_mAF4611E1FAA4B3C490EA275446E0880FB3E64487_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_7;
		L_7 = List_1_Find_mDDE24CB1FE54DFBDA113AD5EF9C5CFD7A02C6531(L_4, L_6, List_1_Find_mDDE24CB1FE54DFBDA113AD5EF9C5CFD7A02C6531_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_8;
		L_8 = List_1_Remove_mD295A5E2CA98F76E0FA867BB5E55D763741C9CEA(L_3, L_7, List_1_Remove_mD295A5E2CA98F76E0FA867BB5E55D763741C9CEA_RuntimeMethod_var);
		// SetupSelector();
		HorizontalSelector_SetupSelector_m8CEAA013FD9EE5E550BA0D84EB88E7E29FF86425(__this, NULL);
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::SetupSelector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_SetupSelector_m8CEAA013FD9EE5E550BA0D84EB88E7E29FF86425 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_1 = NULL;
	int32_t V_2 = 0;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B8_0 = NULL;
	ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* G_B7_0 = NULL;
	{
		// if (items.Count == 0) return;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_0 = __this->___items_26;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_0, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (items.Count == 0) return;
		return;
	}

IL_000e:
	{
		// if (saveSelected)
		bool L_2 = __this->___saveSelected_15;
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		// if (PlayerPrefs.HasKey($"{prefsSaveKey}{saveKey}"))
		String_t* L_3 = __this->___saveKey_17;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C, L_3, NULL);
		bool L_5;
		L_5 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_4, NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// defaultIndex = PlayerPrefs.GetInt($"{prefsSaveKey}{saveKey}");
		String_t* L_6 = __this->___saveKey_17;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C, L_6, NULL);
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_7, NULL);
		__this->___defaultIndex_24 = L_8;
		goto IL_0065;
	}

IL_004a:
	{
		// PlayerPrefs.SetInt($"{prefsSaveKey}{saveKey}", defaultIndex);
		String_t* L_9 = __this->___saveKey_17;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral48DD3AF078250F4FE049CA75E3D7AAFA8873286C, L_9, NULL);
		int32_t L_11 = __this->___defaultIndex_24;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_10, L_11, NULL);
	}

IL_0065:
	{
		// label.text = labelHelper.text = items[defaultIndex].itemTitle;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12 = __this->___label_4;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13 = __this->___labelHelper_5;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_14 = __this->___items_26;
		int32_t L_15 = __this->___defaultIndex_24;
		NullCheck(L_14);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_16;
		L_16 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_14, L_15, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17 = L_16->___itemTitle_0;
		String_t* L_18 = L_17;
		V_0 = L_18;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_18);
		String_t* L_19 = V_0;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_19);
		// onItemTextChanged?.Invoke(label);
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_20 = __this->___onItemTextChanged_29;
		ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* L_21 = L_20;
		G_B7_0 = L_21;
		if (L_21)
		{
			G_B8_0 = L_21;
			goto IL_00a0;
		}
	}
	{
		goto IL_00ab;
	}

IL_00a0:
	{
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_22 = __this->___label_4;
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F(G_B8_0, L_22, UnityEvent_1_Invoke_mD079E08C7E94DEF0F9D47CCCF3EBAC3193628A7F_RuntimeMethod_var);
	}

IL_00ab:
	{
		// if (enableIcon)
		bool L_23 = __this->___enableIcon_14;
		if (!L_23)
		{
			goto IL_00f2;
		}
	}
	{
		// if (labelIcon != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_0130;
		}
	}
	{
		// labelIcon.sprite = labelIconHelper.sprite = items[defaultIndex].itemIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___labelIcon_6;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___labelIconHelper_7;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_28 = __this->___items_26;
		int32_t L_29 = __this->___defaultIndex_24;
		NullCheck(L_28);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_30;
		L_30 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_28, L_29, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_30);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_31 = L_30->___itemIcon_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_32 = L_31;
		V_1 = L_32;
		NullCheck(L_27);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_27, L_32, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_33 = V_1;
		NullCheck(L_26);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_26, L_33, NULL);
		goto IL_0130;
	}

IL_00f2:
	{
		// if (labelIcon != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_35)
		{
			goto IL_0111;
		}
	}
	{
		// labelIcon.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36 = __this->___labelIcon_6;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
	}

IL_0111:
	{
		// if (labelIconHelper != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = __this->___labelIconHelper_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_0130;
		}
	}
	{
		// labelIconHelper.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___labelIconHelper_7;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
	}

IL_0130:
	{
		// index = defaultIndex;
		int32_t L_42 = __this->___defaultIndex_24;
		__this->___index_25 = L_42;
		// switch (indicatorType)
		int32_t L_43 = __this->___indicatorType_18;
		V_2 = L_43;
		int32_t L_44 = V_2;
		switch (L_44)
		{
			case 0:
			{
				goto IL_0165;
			}
			case 1:
			{
				goto IL_0157;
			}
			case 2:
			{
				goto IL_015e;
			}
		}
	}
	{
		goto IL_0165;
	}

IL_0157:
	{
		// UpdatePointIndicators();
		HorizontalSelector_UpdatePointIndicators_m3CD012B0DF8DDCF91E0733800AE06F0885375092(__this, NULL);
		// break;
		return;
	}

IL_015e:
	{
		// UpdateTextIndicator();
		HorizontalSelector_UpdateTextIndicator_m785F45AB166F0DF34F4C3BD08DC7565C956DB420(__this, NULL);
		// break;
		return;
	}

IL_0165:
	{
		// indicatorText.gameObject.SetActive(false);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_45 = __this->___indicatorText_12;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		// indicatorParent.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___indicatorParent_10;
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_47, NULL);
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
		// Destroy(indicatorParent.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = __this->___indicatorParent_10;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_50, NULL);
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::UpdateTextIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_UpdateTextIndicator_m785F45AB166F0DF34F4C3BD08DC7565C956DB420 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (indicatorType == IndicatorType.None) return;
		int32_t L_0 = __this->___indicatorType_18;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (indicatorType == IndicatorType.None) return;
		return;
	}

IL_0009:
	{
		// indicatorText.gameObject.SetActive(true);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___indicatorText_12;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// indicatorText.text = String.Format("{0}/{1}", index + 1, items.Count);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___indicatorText_12;
		int32_t L_4 = __this->___index_25;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_7 = __this->___items_26;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_7, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_6, L_10, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_11);
		// indicatorParent.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___indicatorParent_10;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::UpdatePointIndicators()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_UpdatePointIndicators_m3CD012B0DF8DDCF91E0733800AE06F0885375092 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	{
		// if (indicatorType == IndicatorType.None) return;
		int32_t L_0 = __this->___indicatorType_18;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (indicatorType == IndicatorType.None) return;
		return;
	}

IL_0009:
	{
		// indicatorParent.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___indicatorParent_10;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// indicatorText.gameObject.SetActive(false);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___indicatorText_12;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// foreach (Transform item in indicatorParent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___indicatorParent_10;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_5, NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_8 = V_1;
					if (!L_8)
					{
						goto IL_0068;
					}
				}
				{
					RuntimeObject* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0068:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_0039_1:
			{
				// foreach (Transform item in indicatorParent)
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				// Destroy(item.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
			}

IL_004e_1:
			{
				// foreach (Transform item in indicatorParent)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// for (int i = 0; i < items.Count; i++)
		V_2 = 0;
		goto IL_00fc;
	}

IL_0070:
	{
		// GameObject go = Instantiate(indicatorObject, Vector3.zero, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___indicatorObject_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_15, L_16, L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// go.transform.SetParent(indicatorParent, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___indicatorParent_10;
		NullCheck(L_20);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_20, L_21, (bool)0, NULL);
		// go.name = items[i].itemTitle;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_19;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_23 = __this->___items_26;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_25;
		L_25 = List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF(L_23, L_24, List_1_get_Item_mCF6C60A36C99B9AA481B93D41EC1E92352D094EF_RuntimeMethod_var);
		NullCheck(L_25);
		String_t* L_26 = L_25->___itemTitle_0;
		NullCheck(L_22);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_22, L_26, NULL);
		// Transform onObj = go.transform.Find("On");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_22;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_28, _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73, NULL);
		V_3 = L_29;
		// Transform offObj = go.transform.Find("Off");
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_30, _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5, NULL);
		// onObj.gameObject.SetActive(index == i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_3;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		int32_t L_34 = __this->___index_25;
		int32_t L_35 = V_2;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)((((int32_t)L_34) == ((int32_t)L_35))? 1 : 0), NULL);
		// offObj.gameObject.SetActive(index != i);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		int32_t L_37 = __this->___index_25;
		int32_t L_38 = V_2;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00fc:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_40 = V_2;
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_41 = __this->___items_26;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_inline(L_41, List_1_get_Count_mF4F0F59DB61D4E9723D916924B916D1908F68A42_RuntimeMethod_var);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_0070;
		}
	}
	{
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::UpdateContentLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector_UpdateContentLayout_m932FA7AE5B853589C5452CB52C706EA662F79D4A (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (contentLayout != null)
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_0 = __this->___contentLayout_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// contentLayout.spacing = contentSpacing;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_2 = __this->___contentLayout_8;
		int32_t L_3 = __this->___contentSpacing_23;
		NullCheck(L_2);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_2, ((float)L_3), NULL);
	}

IL_0020:
	{
		// if (contentLayoutHelper != null)
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_4 = __this->___contentLayoutHelper_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// contentLayoutHelper.spacing = contentSpacing;
		HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* L_6 = __this->___contentLayoutHelper_9;
		int32_t L_7 = __this->___contentSpacing_23;
		NullCheck(L_6);
		HorizontalOrVerticalLayoutGroup_set_spacing_m90373F54D37DA8DFA90E102DC60EC33E542FD859(L_6, ((float)L_7), NULL);
	}

IL_0040:
	{
		// if (labelIcon != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___labelIcon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		// labelIcon.transform.localScale = labelIconHelper.transform.localScale = Vector3.one * iconScale;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___labelIcon_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___labelIconHelper_7;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_15 = __this->___iconScale_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16;
		V_0 = L_17;
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		NullCheck(L_11);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_18, NULL);
	}

IL_0081:
	{
		// LayoutRebuilder.ForceRebuildLayoutImmediate(label.transform.GetComponent<RectTransform>());
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_19 = __this->___label_4;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8(L_19, NULL);
		NullCheck(L_20);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_20, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A(L_21, NULL);
		// LayoutRebuilder.ForceRebuildLayoutImmediate(label.transform.parent.GetComponent<RectTransform>());
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_22 = __this->___label_4;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8(L_22, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_23, NULL);
		NullCheck(L_24);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25;
		L_25 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_24, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A(L_25, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator tackor.UIExtension.HorizontalSelector::DisableAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HorizontalSelector_DisableAnimator_m84FAC648E99D66531E5E5027A3D28132D6A17462 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* L_0 = (U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA*)il2cpp_codegen_object_new(U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisableAnimatorU3Ed__37__ctor_mD1D57E067690D8318B274BD51C177408BFDF78C8(L_0, 0, NULL);
		U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalSelector__ctor_mE4EA93A4F9D92D167E9DF0D38F7AEBFD4B2B9295 (HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2104E631A4CAB638B391C217AEDA3109BF8CC019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD553BF5F87755D2D78FCAC2D8CCBED6E7F2ABBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool enableIcon = true;
		__this->___enableIcon_14 = (bool)1;
		// public string saveKey = "My Selector";
		__this->___saveKey_17 = _stringLiteralCD553BF5F87755D2D78FCAC2D8CCBED6E7F2ABBD;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saveKey_17), (void*)_stringLiteralCD553BF5F87755D2D78FCAC2D8CCBED6E7F2ABBD);
		// public IndicatorType indicatorType = IndicatorType.Point;
		__this->___indicatorType_18 = 1;
		// [Range(0.25f, 2.5f)] public float iconScale = 1;
		__this->___iconScale_22 = (1.0f);
		// [Range(1, 50)] public int contentSpacing = 15;
		__this->___contentSpacing_23 = ((int32_t)15);
		// public List<Item> items = new List<Item>();
		List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E* L_0 = (List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E*)il2cpp_codegen_object_new(List_1_tB4B3C4B581A56742D1FC8DAC356A8F09464ACA4E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2104E631A4CAB638B391C217AEDA3109BF8CC019(L_0, List_1__ctor_m2104E631A4CAB638B391C217AEDA3109BF8CC019_RuntimeMethod_var);
		__this->___items_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items_26), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void tackor.UIExtension.HorizontalSelector/SelectorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorEvent__ctor_m06646E0326F42938A403E178C639C8495C22718E (SelectorEvent_t5F0F2776A8E3D7F037E11D4ABE0A0F5A69798796* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(__this, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
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
// System.Void tackor.UIExtension.HorizontalSelector/ItemTextChangedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemTextChangedEvent__ctor_m498933E9D9510486715C1B62AB9331853CCA3F1D (ItemTextChangedEvent_t424D77193767A6D6506B134DC81E26E522EBEF70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m8BD9540647A9CC0247BE3121C45DB29B38A938EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m8BD9540647A9CC0247BE3121C45DB29B38A938EC(__this, UnityEvent_1__ctor_m8BD9540647A9CC0247BE3121C45DB29B38A938EC_RuntimeMethod_var);
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
// System.Void tackor.UIExtension.HorizontalSelector/Item::.ctor(System.String,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m0CA77B1CFD58C9958476D4EF46038CA78E5EE6BE (Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* __this, String_t* ___0_itemTitle, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_itemIcon, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A467FCA64DDD3BAAD1070554D72F9211D266C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string itemTitle = "Item Title";
		__this->___itemTitle_0 = _stringLiteral47A467FCA64DDD3BAAD1070554D72F9211D266C8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemTitle_0), (void*)_stringLiteral47A467FCA64DDD3BAAD1070554D72F9211D266C8);
		// public UnityEvent onItemSelect = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onItemSelect_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onItemSelect_2), (void*)L_0);
		// public Item(string itemTitle, Sprite itemIcon)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.itemTitle = itemTitle;
		String_t* L_1 = ___0_itemTitle;
		__this->___itemTitle_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemTitle_0), (void*)L_1);
		// this.itemIcon = itemIcon;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___1_itemIcon;
		__this->___itemIcon_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemIcon_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector/Item::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m7F306C606B379E9E933EC5337B8BD9C14B503398 (Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* __this, String_t* ___0_itemTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A467FCA64DDD3BAAD1070554D72F9211D266C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string itemTitle = "Item Title";
		__this->___itemTitle_0 = _stringLiteral47A467FCA64DDD3BAAD1070554D72F9211D266C8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemTitle_0), (void*)_stringLiteral47A467FCA64DDD3BAAD1070554D72F9211D266C8);
		// public UnityEvent onItemSelect = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onItemSelect_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onItemSelect_2), (void*)L_0);
		// public Item(string itemTitle)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.itemTitle = itemTitle;
		String_t* L_1 = ___0_itemTitle;
		__this->___itemTitle_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemTitle_0), (void*)L_1);
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
// System.Void tackor.UIExtension.HorizontalSelector/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m86861C0B5BD15EE1707EB1998471AA900F94D578 (U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean tackor.UIExtension.HorizontalSelector/<>c__DisplayClass32_0::<RemoveItem>b__0(tackor.UIExtension.HorizontalSelector/Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass32_0_U3CRemoveItemU3Eb__0_mAF4611E1FAA4B3C490EA275446E0880FB3E64487 (U3CU3Ec__DisplayClass32_0_t7FC0E9AC8975D8D00E924FADEFBE481E85C64E27* __this, Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* ___0_x, const RuntimeMethod* method) 
{
	{
		// items.Remove(items.Find(x => x.itemTitle == itemTitle));
		Item_tA4DB6B306B6671EAADFD790CC24391F081151C59* L_0 = ___0_x;
		NullCheck(L_0);
		String_t* L_1 = L_0->___itemTitle_0;
		String_t* L_2 = __this->___itemTitle_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableAnimatorU3Ed__37__ctor_mD1D57E067690D8318B274BD51C177408BFDF78C8 (U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableAnimatorU3Ed__37_System_IDisposable_Dispose_m4B581E0AF7735974B4A5368422BDC23B47412A34 (U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisableAnimatorU3Ed__37_MoveNext_mAD002FE416DD6441BB1D339E71AE6DB5457F2D86 (U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_Animator.enabled = false;
		HorizontalSelector_t042677679A5719E14C0C1652ECCA478388724714* L_5 = V_1;
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = L_5->___m_Animator_27;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisableAnimatorU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C4087C82425F5EF4E81F20EDA5BD09020B9D9E4 (U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableAnimatorU3Ed__37_System_Collections_IEnumerator_Reset_m58A05064FE8C4A1C336613296478A159BFD77FBF (U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisableAnimatorU3Ed__37_System_Collections_IEnumerator_Reset_m58A05064FE8C4A1C336613296478A159BFD77FBF_RuntimeMethod_var)));
	}
}
// System.Object tackor.UIExtension.HorizontalSelector/<DisableAnimator>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisableAnimatorU3Ed__37_System_Collections_IEnumerator_get_Current_m1354D1DDDD44B6CC84C2335BDF6AFD63BA219121 (U3CDisableAnimatorU3Ed__37_t2D20B7D84D7F2F1550A59CD578CCB3D1257F61EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_38;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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

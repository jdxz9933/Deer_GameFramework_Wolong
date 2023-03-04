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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA;
IL2CPP_EXTERN_C String_t* _stringLiteral1C697576D6B6B3B7535172F4276FEC57A6262CB1;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485;
IL2CPP_EXTERN_C String_t* _stringLiteralACC928BBF95D7E4FE37D898D1B2FA82BEC3B6EF0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerPrefsUtility_DecryptKey_m3C1D29FD8E4F5ED69B5504DF0BC13266D20F089A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerPrefsUtility_GetEncryptedValue_mE1C01FA2EB3CF9839E6A8161B0B15579FB2607F3_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t73F43542C40EAB2C5B46C92E9DC79231924A5B29 
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility
struct PlayerPrefsUtility_tB3A7A437FD48560B9668929DD4FB29251D68F807  : public RuntimeObject
{
};

// Sabresaurus.PlayerPrefsUtilities.SimpleEncryption
struct SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F  : public RuntimeObject
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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39  : public Rijndael_t282661761E53E282457A31F5675ACF53D64EE807
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// <Module>

// <Module>

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.Text.Encoding

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility

// Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility

// Sabresaurus.PlayerPrefsUtilities.SimpleEncryption
struct SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields
{
	// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::key
	String_t* ___key_0;
	// System.Security.Cryptography.RijndaelManaged Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::provider
	RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* ___provider_1;
};

// Sabresaurus.PlayerPrefsUtilities.SimpleEncryption

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Security.Cryptography.SymmetricAlgorithm

// System.Security.Cryptography.SymmetricAlgorithm

// System.ValueType

// System.ValueType

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

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

// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Security.Cryptography.Rijndael

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Security.Cryptography.RijndaelManaged

// System.Security.Cryptography.RijndaelManaged

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

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

// System.InvalidOperationException

// System.InvalidOperationException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::DecryptString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75 (String_t* ___0_sourceString, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::EncryptString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8 (String_t* ___0_sourceString, const RuntimeMethod* method) ;
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::EncryptFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_EncryptFloat_mF4D379D6530658C3AEBC3A5FDE6EDB890C1D19F4 (float ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::EncryptInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_EncryptInt_m271224D23A50CF46C3C5E02A91167222EB3A817B (int32_t ___0_value, const RuntimeMethod* method) ;
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::EncryptBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_EncryptBool_mDE79284E2DE1CC9DC374A17F734C9B3895C0DDEA (bool ___0_value, const RuntimeMethod* method) ;
// System.Single Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefsUtility_GetEncryptedFloat_m294F1AF229E79A9E977C9B80FDCC51640DC6D8B8 (String_t* ___0_key, float ___1_defaultValue, const RuntimeMethod* method) ;
// System.Int32 Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefsUtility_GetEncryptedInt_m9AAA20D4FA5D22545386FF09EED19EF817B54A9A (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// System.String Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsUtility_GetEncryptedString_m26DDD0A0C9A07E2D04286883265DC40D4E1AA5F1 (String_t* ___0_key, String_t* ___1_defaultValue, const RuntimeMethod* method) ;
// System.Boolean Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefsUtility_GetEncryptedBool_mCABF0B9EDC57E3E2696EE5D42102AE35BED5BB4D (String_t* ___0_key, bool ___1_defaultValue, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___0_startIndex, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Single Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::DecryptFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleEncryption_DecryptFloat_mC80C6D3BFAA9FC4EDD193B9C0A314C05B18FB654 (String_t* ___0_sourceString, const RuntimeMethod* method) ;
// System.Int32 Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::DecryptInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleEncryption_DecryptInt_mE6C20BC88C9F3760B9DFBA9ADAC4B84DD40B931F (String_t* ___0_sourceString, const RuntimeMethod* method) ;
// System.Boolean Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::DecryptBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleEncryption_DecryptBool_m03F8A255FC2507EA42747A680BD50FADA0EB2190 (String_t* ___0_sourceString, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m9FA53ACE6D7D7EDB34C808AA0856C9293D3C869C (String_t* ___0_s, RuntimeObject* ___1_provider, int32_t ___2_styles, const RuntimeMethod* method) ;
// System.String System.TimeSpan::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Parse_m4686E70A0FA2425C083A58B73A025D36F738AD35 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7 (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Void Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::SetupProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleEncryption_SetupProvider_mFDA0C06E02A4ECCFEBDECC563BFAC2F4CC0F5CF3 (const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549 (float ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m8129D5C616ECE5D5095473D8A931B65487C770BF (bool ___0_value, const RuntimeMethod* method) ;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Boolean System.BitConverter::ToBoolean(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_ToBoolean_mBDA6F9734B907F7BA1135819940F5D6C3E5085FB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
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
// System.Boolean Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::IsEncryptedKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefsUtility_IsEncryptedKey_mD4EED181DC9FD002B38A21DAC2ABADFD067F47B9 (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key.StartsWith(KEY_PREFIX))
		String_t* L_0 = ___0_key;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000f:
	{
		// return false;
		return (bool)0;
	}
}
// System.String Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::DecryptKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsUtility_DecryptKey_m3C1D29FD8E4F5ED69B5504DF0BC13266D20F089A (String_t* ___0_encryptedKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (encryptedKey.StartsWith(KEY_PREFIX))
		String_t* L_0 = ___0_encryptedKey;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// string strippedKey = encryptedKey.Substring(KEY_PREFIX.Length);
		String_t* L_2 = ___0_encryptedKey;
		NullCheck(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, NULL);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_2, L_3, NULL);
		// return SimpleEncryption.DecryptString(strippedKey);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_4, NULL);
		return L_5;
	}

IL_0023:
	{
		// throw new InvalidOperationException("Could not decrypt item, no match found in known encrypted key prefixes");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralACC928BBF95D7E4FE37D898D1B2FA82BEC3B6EF0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayerPrefsUtility_DecryptKey_m3C1D29FD8E4F5ED69B5504DF0BC13266D20F089A_RuntimeMethod_var)));
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::SetEncryptedFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsUtility_SetEncryptedFloat_m7BE7CB3C80A9BDFFDDD6AD107943425E17E039AC (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string encryptedKey = SimpleEncryption.EncryptString(key);
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_0, NULL);
		V_0 = L_1;
		// string encryptedValue = SimpleEncryption.EncryptFloat(value);
		float L_2 = ___1_value;
		String_t* L_3;
		L_3 = SimpleEncryption_EncryptFloat_mF4D379D6530658C3AEBC3A5FDE6EDB890C1D19F4(L_2, NULL);
		V_1 = L_3;
		// PlayerPrefs.SetString(KEY_PREFIX + encryptedKey, VALUE_FLOAT_PREFIX + encryptedValue);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, L_4, NULL);
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::SetEncryptedInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsUtility_SetEncryptedInt_m8437097FC2003AACC6D780C47A372993F3916F69 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string encryptedKey = SimpleEncryption.EncryptString(key);
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_0, NULL);
		V_0 = L_1;
		// string encryptedValue = SimpleEncryption.EncryptInt(value);
		int32_t L_2 = ___1_value;
		String_t* L_3;
		L_3 = SimpleEncryption_EncryptInt_m271224D23A50CF46C3C5E02A91167222EB3A817B(L_2, NULL);
		V_1 = L_3;
		// PlayerPrefs.SetString(KEY_PREFIX + encryptedKey, VALUE_INT_PREFIX + encryptedValue);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, L_4, NULL);
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::SetEncryptedString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsUtility_SetEncryptedString_mEACBFFC9C050AD56F564250E737FAFD5FE49FE6E (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string encryptedKey = SimpleEncryption.EncryptString(key);
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_0, NULL);
		V_0 = L_1;
		// string encryptedValue = SimpleEncryption.EncryptString(value);
		String_t* L_2 = ___1_value;
		String_t* L_3;
		L_3 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_2, NULL);
		V_1 = L_3;
		// PlayerPrefs.SetString(KEY_PREFIX + encryptedKey, VALUE_STRING_PREFIX + encryptedValue);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, L_4, NULL);
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::SetEncryptedBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsUtility_SetEncryptedBool_mA422835FD4B7D4DE29136DAE3B2DB15B8B30E248 (String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// string encryptedKey = SimpleEncryption.EncryptString(key);
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_0, NULL);
		V_0 = L_1;
		// string encryptedValue = SimpleEncryption.EncryptBool(value);
		bool L_2 = ___1_value;
		String_t* L_3;
		L_3 = SimpleEncryption_EncryptBool_mDE79284E2DE1CC9DC374A17F734C9B3895C0DDEA(L_2, NULL);
		V_1 = L_3;
		// PlayerPrefs.SetString(KEY_PREFIX + encryptedKey, VALUE_BOOL_PREFIX + encryptedValue);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, L_4, NULL);
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Object Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerPrefsUtility_GetEncryptedValue_mE1C01FA2EB3CF9839E6A8161B0B15579FB2607F3 (String_t* ___0_encryptedKey, String_t* ___1_encryptedValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (encryptedValue.StartsWith(VALUE_FLOAT_PREFIX))
		String_t* L_0 = ___1_encryptedValue;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// return GetEncryptedFloat(SimpleEncryption.DecryptString(encryptedKey.Substring(KEY_PREFIX.Length)));
		String_t* L_2 = ___0_encryptedKey;
		NullCheck(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, NULL);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_4, NULL);
		float L_6;
		L_6 = PlayerPrefsUtility_GetEncryptedFloat_m294F1AF229E79A9E977C9B80FDCC51640DC6D8B8(L_5, (0.0f), NULL);
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0032:
	{
		// else if (encryptedValue.StartsWith(VALUE_INT_PREFIX))
		String_t* L_9 = ___1_encryptedValue;
		NullCheck(L_9);
		bool L_10;
		L_10 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_9, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		// return GetEncryptedInt(SimpleEncryption.DecryptString(encryptedKey.Substring(KEY_PREFIX.Length)));
		String_t* L_11 = ___0_encryptedKey;
		NullCheck(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, NULL);
		NullCheck(L_11);
		String_t* L_13;
		L_13 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_11, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_13, NULL);
		int32_t L_15;
		L_15 = PlayerPrefsUtility_GetEncryptedInt_m9AAA20D4FA5D22545386FF09EED19EF817B54A9A(L_14, 0, NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		return L_17;
	}

IL_0060:
	{
		// else if (encryptedValue.StartsWith(VALUE_STRING_PREFIX))
		String_t* L_18 = ___1_encryptedValue;
		NullCheck(L_18);
		bool L_19;
		L_19 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_18, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, NULL);
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		// return GetEncryptedString(SimpleEncryption.DecryptString(encryptedKey.Substring(KEY_PREFIX.Length)));
		String_t* L_20 = ___0_encryptedKey;
		NullCheck(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, NULL);
		NullCheck(L_20);
		String_t* L_22;
		L_22 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_20, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_22, NULL);
		String_t* L_24;
		L_24 = PlayerPrefsUtility_GetEncryptedString_m26DDD0A0C9A07E2D04286883265DC40D4E1AA5F1(L_23, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_24;
	}

IL_008d:
	{
		// else if (encryptedValue.StartsWith(VALUE_BOOL_PREFIX))
		String_t* L_25 = ___1_encryptedValue;
		NullCheck(L_25);
		bool L_26;
		L_26 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_25, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, NULL);
		if (!L_26)
		{
			goto IL_00bb;
		}
	}
	{
		// return GetEncryptedBool(SimpleEncryption.DecryptString(encryptedKey.Substring(KEY_PREFIX.Length)));
		String_t* L_27 = ___0_encryptedKey;
		NullCheck(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, NULL);
		NullCheck(L_27);
		String_t* L_29;
		L_29 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_27, L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_29, NULL);
		bool L_31;
		L_31 = PlayerPrefsUtility_GetEncryptedBool_mCABF0B9EDC57E3E2696EE5D42102AE35BED5BB4D(L_30, (bool)0, NULL);
		bool L_32 = L_31;
		RuntimeObject* L_33 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_32);
		return L_33;
	}

IL_00bb:
	{
		// throw new InvalidOperationException("Could not decrypt item, no match found in known encrypted key prefixes");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_34 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralACC928BBF95D7E4FE37D898D1B2FA82BEC3B6EF0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayerPrefsUtility_GetEncryptedValue_mE1C01FA2EB3CF9839E6A8161B0B15579FB2607F3_RuntimeMethod_var)));
	}
}
// System.Single Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefsUtility_GetEncryptedFloat_m294F1AF229E79A9E977C9B80FDCC51640DC6D8B8 (String_t* ___0_key, float ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string encryptedKey = KEY_PREFIX + SimpleEncryption.EncryptString(key);
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, L_1, NULL);
		// string fetchedString = PlayerPrefs.GetString(encryptedKey);
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_2, NULL);
		V_0 = L_3;
		// if (!string.IsNullOrEmpty(fetchedString))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		// fetchedString = fetchedString.Remove(0, 1);
		String_t* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_6, 0, 1, NULL);
		V_0 = L_7;
		// return SimpleEncryption.DecryptFloat(fetchedString);
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = SimpleEncryption_DecryptFloat_mC80C6D3BFAA9FC4EDD193B9C0A314C05B18FB654(L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return defaultValue;
		float L_10 = ___1_defaultValue;
		return L_10;
	}
}
// System.Int32 Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefsUtility_GetEncryptedInt_m9AAA20D4FA5D22545386FF09EED19EF817B54A9A (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string encryptedKey = KEY_PREFIX + SimpleEncryption.EncryptString(key);
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, L_1, NULL);
		// string fetchedString = PlayerPrefs.GetString(encryptedKey);
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_2, NULL);
		V_0 = L_3;
		// if (!string.IsNullOrEmpty(fetchedString))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		// fetchedString = fetchedString.Remove(0, 1);
		String_t* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_6, 0, 1, NULL);
		V_0 = L_7;
		// return SimpleEncryption.DecryptInt(fetchedString);
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = SimpleEncryption_DecryptInt_mE6C20BC88C9F3760B9DFBA9ADAC4B84DD40B931F(L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return defaultValue;
		int32_t L_10 = ___1_defaultValue;
		return L_10;
	}
}
// System.String Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsUtility_GetEncryptedString_m26DDD0A0C9A07E2D04286883265DC40D4E1AA5F1 (String_t* ___0_key, String_t* ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string encryptedKey = KEY_PREFIX + SimpleEncryption.EncryptString(key);
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, L_1, NULL);
		// string fetchedString = PlayerPrefs.GetString(encryptedKey);
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_2, NULL);
		V_0 = L_3;
		// if (!string.IsNullOrEmpty(fetchedString))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		// fetchedString = fetchedString.Remove(0, 1);
		String_t* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_6, 0, 1, NULL);
		V_0 = L_7;
		// return SimpleEncryption.DecryptString(fetchedString);
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return defaultValue;
		String_t* L_10 = ___1_defaultValue;
		return L_10;
	}
}
// System.Boolean Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEncryptedBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefsUtility_GetEncryptedBool_mCABF0B9EDC57E3E2696EE5D42102AE35BED5BB4D (String_t* ___0_key, bool ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string encryptedKey = KEY_PREFIX + SimpleEncryption.EncryptString(key);
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA3CF9B8F99575FE0B105271E56CA8C3D4F5AE485, L_1, NULL);
		// string fetchedString = PlayerPrefs.GetString(encryptedKey);
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_2, NULL);
		V_0 = L_3;
		// if (!string.IsNullOrEmpty(fetchedString))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		// fetchedString = fetchedString.Remove(0, 1);
		String_t* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_6, 0, 1, NULL);
		V_0 = L_7;
		// return SimpleEncryption.DecryptBool(fetchedString);
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = SimpleEncryption_DecryptBool_m03F8A255FC2507EA42747A680BD50FADA0EB2190(L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return defaultValue;
		bool L_10 = ___1_defaultValue;
		return L_10;
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsUtility_SetBool_m8AF65F3DD407A1AB6C780910BB9823CADF7B445A (String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___1_value;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// PlayerPrefs.SetInt(key, 1);
		String_t* L_1 = ___0_key;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_1, 1, NULL);
		return;
	}

IL_000b:
	{
		// PlayerPrefs.SetInt(key, 0);
		String_t* L_2 = ___0_key;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_2, 0, NULL);
		// }
		return;
	}
}
// System.Boolean Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefsUtility_GetBool_m5B6B08A65C9C7F9DA9592510DDE0E8A97911CF10 (String_t* ___0_key, bool ___1_defaultValue, const RuntimeMethod* method) 
{
	{
		// if (PlayerPrefs.HasKey(key))
		String_t* L_0 = ___0_key;
		bool L_1;
		L_1 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// int value = PlayerPrefs.GetInt(key);
		String_t* L_2 = ___0_key;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_2, NULL);
		// if (value != 0)
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0012:
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// return defaultValue;
		bool L_4 = ___1_defaultValue;
		return L_4;
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::SetEnum(System.String,System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsUtility_SetEnum_mFCC64BD1036614C9DD2EFA8811E0C4E9DA836CAE (String_t* ___0_key, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___1_value, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.SetString(key, value.ToString());
		String_t* L_0 = ___0_key;
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_1 = ___1_value;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Object Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetEnum(System.String,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerPrefsUtility_GetEnum_m2B4B306A182E45981628A9A98BEB9BE953843D6A (String_t* ___0_key, Type_t* ___1_enumType, RuntimeObject* ___2_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string value = PlayerPrefs.GetString(key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_0, NULL);
		V_0 = L_1;
		// if (!string.IsNullOrEmpty(value))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return Enum.Parse(enumType, value);
		Type_t* L_4 = ___1_enumType;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_4, L_5, NULL);
		return L_6;
	}

IL_0017:
	{
		// return defaultValue;
		RuntimeObject* L_7 = ___2_defaultValue;
		return L_7;
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::SetDateTime(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsUtility_SetDateTime_m3D3AF3D4B5CD4B8ECDEA68A41D1CB9B3222B8335 (String_t* ___0_key, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(key, value.ToString("o", CultureInfo.InvariantCulture));
		String_t* L_0 = ___0_key;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&___1_value), _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA, L_1, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.DateTime Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetDateTime(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D PlayerPrefsUtility_GetDateTime_m93BA44021EAD7D1A9A63AD317C9F598B3655772D (String_t* ___0_key, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string stringValue = PlayerPrefs.GetString(key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_0, NULL);
		V_0 = L_1;
		// if (!string.IsNullOrEmpty(stringValue))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return DateTime.Parse(stringValue, CultureInfo.InvariantCulture, DateTimeStyles.RoundtripKind);
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_Parse_m9FA53ACE6D7D7EDB34C808AA0856C9293D3C869C(L_4, L_5, ((int32_t)128), NULL);
		return L_6;
	}

IL_0020:
	{
		// return defaultValue;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = ___1_defaultValue;
		return L_7;
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::SetTimeSpan(System.String,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsUtility_SetTimeSpan_mFB7A71BB20C8E818B358BFC97C2072DC03508E70 (String_t* ___0_key, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_value, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.SetString(key, value.ToString());
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = TimeSpan_ToString_m44D5BF48E35E18BB8B99A86B6535DA5E847FFE92((&___1_value), NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.TimeSpan Sabresaurus.PlayerPrefsUtilities.PlayerPrefsUtility::GetTimeSpan(System.String,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A PlayerPrefsUtility_GetTimeSpan_m74F41D2E15B6490DD6D32D1F7BCF568A03D3B5A1 (String_t* ___0_key, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string stringValue = PlayerPrefs.GetString(key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_0, NULL);
		V_0 = L_1;
		// if (!string.IsNullOrEmpty(stringValue))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return TimeSpan.Parse(stringValue);
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = TimeSpan_Parse_m4686E70A0FA2425C083A58B73A025D36F738AD35(L_4, NULL);
		return L_5;
	}

IL_0016:
	{
		// return defaultValue;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6 = ___1_defaultValue;
		return L_6;
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
// System.Void Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::SetupProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleEncryption_SetupProvider_mFDA0C06E02A4ECCFEBDECC563BFAC2F4CC0F5CF3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider = new RijndaelManaged();
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_0 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)il2cpp_codegen_object_new(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1), (void*)L_0);
		// provider.Key = Encoding.ASCII.GetBytes(key);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_1 = ((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		String_t* L_3 = ((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___key_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(27 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_4);
		// provider.Mode = CipherMode.ECB;
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_5 = ((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1;
		NullCheck(L_5);
		VirtualActionInvoker1< int32_t >::Invoke(18 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_5, 2);
		// }
		return;
	}
}
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::EncryptString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8 (String_t* ___0_sourceString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (provider == null)
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_0 = ((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// SetupProvider();
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		SimpleEncryption_SetupProvider_mFDA0C06E02A4ECCFEBDECC563BFAC2F4CC0F5CF3(NULL);
	}

IL_000c:
	{
		// ICryptoTransform encryptor = provider.CreateEncryptor();
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_1 = ((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_1);
		// byte[] sourceBytes = Encoding.UTF8.GetBytes(sourceString);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_4 = ___0_sourceString;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(27 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		V_0 = L_5;
		// byte[] outputBytes = encryptor.TransformFinalBlock(sourceBytes, 0, sourceBytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_2, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
		// return Convert.ToBase64String(outputBytes);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_8, NULL);
		return L_9;
	}
}
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::DecryptString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75 (String_t* ___0_sourceString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (provider == null)
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_0 = ((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// SetupProvider();
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		SimpleEncryption_SetupProvider_mFDA0C06E02A4ECCFEBDECC563BFAC2F4CC0F5CF3(NULL);
	}

IL_000c:
	{
		// ICryptoTransform decryptor = provider.CreateDecryptor();
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* L_1 = ((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_1);
		// byte[] sourceBytes = Convert.FromBase64String(sourceString);
		String_t* L_3 = ___0_sourceString;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_3, NULL);
		V_0 = L_4;
		// byte[] outputBytes = decryptor.TransformFinalBlock(sourceBytes, 0, sourceBytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377_il2cpp_TypeInfo_var, L_2, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		V_1 = L_7;
		// return Encoding.UTF8.GetString(outputBytes);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(47 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_8, L_9);
		return L_10;
	}
}
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::EncryptFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_EncryptFloat_mF4D379D6530658C3AEBC3A5FDE6EDB890C1D19F4 (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] bytes = BitConverter.GetBytes(value);
		float L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549(L_0, NULL);
		// string base64 = Convert.ToBase64String(bytes);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_1, NULL);
		// return SimpleEncryption.EncryptString(base64);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_2, NULL);
		return L_3;
	}
}
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::EncryptInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_EncryptInt_m271224D23A50CF46C3C5E02A91167222EB3A817B (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] bytes = BitConverter.GetBytes(value);
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_0, NULL);
		// string base64 = Convert.ToBase64String(bytes);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_1, NULL);
		// return SimpleEncryption.EncryptString(base64);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_2, NULL);
		return L_3;
	}
}
// System.String Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::EncryptBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleEncryption_EncryptBool_mDE79284E2DE1CC9DC374A17F734C9B3895C0DDEA (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] bytes = BitConverter.GetBytes(value);
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_m8129D5C616ECE5D5095473D8A931B65487C770BF(L_0, NULL);
		// string base64 = Convert.ToBase64String(bytes);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_1, NULL);
		// return SimpleEncryption.EncryptString(base64);
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = SimpleEncryption_EncryptString_mA676071F1420D73FAD46408D8A07412CA03E40E8(L_2, NULL);
		return L_3;
	}
}
// System.Single Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::DecryptFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleEncryption_DecryptFloat_mC80C6D3BFAA9FC4EDD193B9C0A314C05B18FB654 (String_t* ___0_sourceString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string decryptedString = SimpleEncryption.DecryptString(sourceString);
		String_t* L_0 = ___0_sourceString;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_0, NULL);
		// byte[] bytes = Convert.FromBase64String(decryptedString);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_1, NULL);
		// return BitConverter.ToSingle(bytes, 0);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_2, 0, NULL);
		return L_3;
	}
}
// System.Int32 Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::DecryptInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleEncryption_DecryptInt_mE6C20BC88C9F3760B9DFBA9ADAC4B84DD40B931F (String_t* ___0_sourceString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string decryptedString = SimpleEncryption.DecryptString(sourceString);
		String_t* L_0 = ___0_sourceString;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_0, NULL);
		// byte[] bytes = Convert.FromBase64String(decryptedString);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_1, NULL);
		// return BitConverter.ToInt32(bytes, 0);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_2, 0, NULL);
		return L_3;
	}
}
// System.Boolean Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::DecryptBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleEncryption_DecryptBool_m03F8A255FC2507EA42747A680BD50FADA0EB2190 (String_t* ___0_sourceString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string decryptedString = SimpleEncryption.DecryptString(sourceString);
		String_t* L_0 = ___0_sourceString;
		il2cpp_codegen_runtime_class_init_inline(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SimpleEncryption_DecryptString_mBCACC7BAC696BEA5238BFCE66C06CC5C15F84D75(L_0, NULL);
		// byte[] bytes = Convert.FromBase64String(decryptedString);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_1, NULL);
		// return BitConverter.ToBoolean(bytes, 0);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BitConverter_ToBoolean_mBDA6F9734B907F7BA1135819940F5D6C3E5085FB(L_2, 0, NULL);
		return L_3;
	}
}
// System.Void Sabresaurus.PlayerPrefsUtilities.SimpleEncryption::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleEncryption__cctor_mA96FABE0E087E3624F52F8A0DF090C47A4BE911C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C697576D6B6B3B7535172F4276FEC57A6262CB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string key = ":{j%6j?E:t#}G10mM%9hp5S=%}2,Y26C";
		((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___key_0 = _stringLiteral1C697576D6B6B3B7535172F4276FEC57A6262CB1;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___key_0), (void*)_stringLiteral1C697576D6B6B3B7535172F4276FEC57A6262CB1);
		// private static RijndaelManaged provider = null;
		((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1 = (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_StaticFields*)il2cpp_codegen_static_fields_for(SimpleEncryption_t23DFB0045737BFC739FD2F2AEA676D09655D1E4F_il2cpp_TypeInfo_var))->___provider_1), (void*)(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}

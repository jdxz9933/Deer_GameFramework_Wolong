#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericInterfaceFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct GenericInterfaceFuncInvoker9
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct GenericInterfaceFuncInvoker10
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct GenericInterfaceFuncInvoker11
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct GenericInterfaceFuncInvoker12
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct GenericInterfaceFuncInvoker13
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct GenericInterfaceFuncInvoker14
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct GenericInterfaceFuncInvoker15
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
struct GenericInterfaceFuncInvoker16
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
struct GenericInterfaceFuncInvoker17
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, T17, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79;
// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB;
// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// GameFramework.EventPool`1<GameFramework.Network.Packet>
struct EventPool_1_t4D3320856181BCC4D04EFE34C8BA75AF08520671;
// Google.Protobuf.FieldCodec`1<System.Object>
struct FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4;
// System.Func`3<System.Object,System.Object,System.Int32>
struct Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D;
// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
// GameFramework.GameFrameworkAction`1<GameFramework.Network.NetworkManager/NetworkChannelBase>
struct GameFrameworkAction_1_tC38C39543F636C9CEBDC0EF8326824D35280028E;
// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Int32>
struct GameFrameworkAction_2_t94634A08CAE544DD4F9BCDC6EA00B5CAF237E337;
// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Object>
struct GameFrameworkAction_2_t8E4B7F92D004A781DDFEAFA5AA33717C70697FE2;
// GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>
struct GameFrameworkAction_4_tF510E37B03774A4F07D09912F82897C24FDF45AF;
// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>
struct GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// Google.Protobuf.FieldCodec`1/InputMerger<System.Object>
struct InputMerger_t542A2DA3E03419636477930C3E4FDB8F47053F30;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.List`1<GameFramework.DataNode.DataNodeManager/DataNode>
struct List_1_tB0C18DB38897F6A767425B04C4F9AB186FB04D7E;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
// System.Collections.Generic.Queue`1<GameFramework.IReference>
struct Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<GameFramework.Network.Packet>
struct Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// Google.Protobuf.ValueReader`1<System.Object>
struct ValueReader_1_t914179245F7AF92982120EBE2E1F0005B7120D6A;
// Google.Protobuf.ValueWriter`1<System.Object>
struct ValueWriter_1_t6C508A7B681A703426E0375B37A02159DB7676BE;
// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Object>
struct ValuesMerger_t3E9CBE0258C114AB31F0638D167BFAB32545E61B;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93;
// GameFramework.IReference[]
struct IReferenceU5BU5D_t5D8C9B165835B5C56A53A7760FA10F073BBC4307;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource[]
struct IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// GameFramework.Network.Packet[]
struct PacketU5BU5D_tB0A93104E040C9A51563F1257BA77CD1879E4CC4;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// GameFramework.DataNode.DataNodeManager/DataNode[]
struct DataNodeU5BU5D_t79F21372EB5AC4EC270BF3667F1221A28D7EED7B;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425;
// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC;
// GameFramework.GameFrameworkException
struct GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// GameFramework.Network.INetworkChannelHelper
struct INetworkChannelHelper_tF3E193CD877106F05186C179CA83F5CDFC038831;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// GameFramework.IReference
struct IReference_t4A43D5C082F576985D9D0F7C2CCAB23346459315;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// GameFramework.Network.Packet
struct Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
// GameFramework.Variable
struct Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GameFramework.DataNode.DataNodeManager/DataNode
struct DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821;
// GameFramework.Network.NetworkManager/HeartBeatState
struct HeartBeatState_t11CF7244FD92AA7B5864126CC0EE8B9A67207AF0;
// GameFramework.Network.NetworkManager/NetworkChannelBase
struct NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946;
// GameFramework.Network.NetworkManager/ReceiveState
struct ReceiveState_tF68EF6CAC52F17F3AEAD32E2D446E8177D6104AC;
// GameFramework.Network.NetworkManager/SendState
struct SendState_tD954F2C00766233B6B8A123AEBA48B82A3FFE466;
// GameFramework.ReferencePool/ReferenceCollection
struct ReferenceCollection_t9862D83417541AB40CB4883E998C072F1DD1D8C1;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback
struct ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// GameFramework.Utility/Json/IJsonHelper
struct IJsonHelper_tFAFA9310F22934461FB6D0D230BBE95133BE619A;
// GameFramework.Utility/Text/ITextHelper
struct ITextHelper_tCEF9FD812E2E1CA782675286E8BC00741A8FB693;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperCodecs_tE553F7639B839C368D43033A632BD1D30EC9BCFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B;
IL2CPP_EXTERN_C String_t* _stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA;
IL2CPP_EXTERN_C String_t* _stringLiteral7210D872E945C71ACA8CEF51ACA40552C43E8605;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral88C23D2DCC01A74390EC3EE20DD1B0BFE5B056D4;
IL2CPP_EXTERN_C String_t* _stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralB1016F04C691B8C889B219F1776D5F05B0B5A9ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB348652F8B17FE2CDD3FC15246E01815A16B7730;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA;
IL2CPP_EXTERN_C String_t* _stringLiteralBCC178D5BE56C6C185E79192131F152693335504;
IL2CPP_EXTERN_C String_t* _stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F;
IL2CPP_EXTERN_C String_t* _stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488;
IL2CPP_EXTERN_C String_t* _stringLiteralDCDCD73749685BF6B077749DF549FC46C3116C5A;
IL2CPP_EXTERN_C String_t* _stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFC346A6506729A42044B13A196B02DC0BFFA76A9;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Json_ToObject_TisRuntimeObject_mE14A9E605410C6B807822C4D9D724697175BFFCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisRuntimeObject_m7B7316394C4F6E01623E388CC9007D6E70C93274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceCollection_Acquire_TisRuntimeObject_mFC91EE3023F34D155F8CCB001451E6F7D80F6F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceCollection_Add_TisRuntimeObject_m52487B44E99B109633F1737F81949ADAC9AEAA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m51EC38A17627C06A95F02A2EE2F803BFCCAF38F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m8D4916568B5A868DF689901919B9D899C2C8A4CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4F4A849801A63DBA1814A697CFDA938F1DA5C881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m83578FF79B4C7526F2B5F2164E0A8CC005628692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m391FB5D0A1B8F831E6AE53CDC83BE1ABB2F18231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB7249F0EAEEDA5EF060598D297C99965865934F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisException_t_m89DC02C9DD04BEBD153F890898794038E1A0D81C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF24606921ED479BA7BB4C9D1BD91E84B67511A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m52A69D03D98D3EEC3C7EB9B81537EDB1EFE55BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m111B38E1A4C3554A5FA24EA6654A02F13DBE9E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD9D4F7F02D6767F97892BB861DB7C829A9042584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m049AADEC5F8EA45BC0D19326C91E0BF981532693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m14E5323866B3EE02DB0BDC22F610FEC648AC3D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mC2EFA85B7E3F3768670238CB381BA176F6FA336B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m15D528D19480CE6F50864B79EE5617F7BCF8A2B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_m9561B3ACF5AD47C8DC5552EA79A6357BBAA3F43A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF699B6A2C102A8632E5F723D7FCA6B03A5E839E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m750F30EEAEAF01A5094E168F840E2A338141A9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_mF32D94494471499DB831C82B04B7303ECBA4696E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94E320D1D48183917F331AC93BACA9824664B783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m90248084624C469E9D2D41BD77D5794A6B5163CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8086EE3BE354E2D538FDA109FB5FA20935826354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_m64591640856351D2C22CC9AA6EF9C3BDFD8FB4D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m2846A9B6E154C846A5456D613363A1FA65CABA35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m6294215B26F6A414BC1D09D1DF3FB338B316E18A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD1DA29B9D05ED7248964FBE9067DAFEE94B51F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_m2F92755AB4044477697B9238B4DAEE9CC1189A23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_mBB6008823036427823F90D880B5CDEB00834E6E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF2AB17260B34578F590EC0D134CC9333994C8AE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m367C860FA20A6EBF9231C87F052D8122E87312BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mA6200FDADFA548719E195D01B37C341CFC1548C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mE5F0EE970DFA1EE418FA193C3B667658287B94B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2AD581CAD61401F4652DCF70F25B3A8916ADC931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFB1CF44BE3BA729787B36B37E705A9A5D9C726F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC5555991449064581125D65719A25585323D586D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m7D94B918A79FFB1DE9330FB519D12AB547E59066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4D946BCD0D7F46497EA8B7FD2479C1F48BBACD07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m909D0B407FE54040B470D2821CD196D91D89E903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC9FA5550E04E54D800C089E6811100660EE4816C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m8AB539A2119D9CAE7790EFEEF3C0BB605876DC89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m9242907570AEA14C903E0C61F8737B013FBEF62F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m13BFA97106021456A364822AB75DCB7062A24E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4536ED66D739D8948E3ABFFFF8D7640A1239CD5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m47EF871475180EEC58F272E6A7048CF250050505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_TisRuntimeObject_mEC3E4C8E4E6EB974EDBE4B9F5307CE175382EBAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_m86F50B130DB8AFB82CF2150CDB94601F858D5A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52EBF3611D2BB71A87ABA4C195A67AB8EF07538A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDC1C2E6702466CE0051154A5B55DE5B2CB86562F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_TisRuntimeObject_m73E973DC6D1FBB1FCC7830474965718F2DA99D74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_m253C99776E4DD3390140A597D9124F8680A81B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_m1A9E5816695A00231DF699BA560FCEE85E1FFFC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m06812189C8510651582A72C4B97468190633AD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Text_Format_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6A04065A83335FAE1846AB0D70DA731A9A557F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WrapperCodecs_GetCodec_TisRuntimeObject_m3878F3061B0CA9FA941C3513A0BB2444E76DE768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};

// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};

// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};

// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB  : public RuntimeObject
{
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};

// Google.Protobuf.FieldCodec`1<System.Object>
struct FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// Google.Protobuf.ValueWriter`1<T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	ValueWriter_1_t6C508A7B681A703426E0375B37A02159DB7676BE* ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// Google.Protobuf.ValueReader`1<T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	ValueReader_1_t914179245F7AF92982120EBE2E1F0005B7120D6A* ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t542A2DA3E03419636477930C3E4FDB8F47053F30* ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t3E9CBE0258C114AB31F0638D167BFAB32545E61B* ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	RuntimeObject* ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;
};

// System.Collections.Generic.Queue`1<GameFramework.IReference>
struct Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	IReferenceU5BU5D_t5D8C9B165835B5C56A53A7760FA10F073BBC4307* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<GameFramework.Network.Packet>
struct Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	PacketU5BU5D_tB0A93104E040C9A51563F1257BA77CD1879E4CC4* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D  : public RuntimeObject
{
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::imported
	bool ___imported_0;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::shared
	bool ___shared_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedExplicitRelease
	bool ___sharedExplicitRelease_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::requestFallBack
	bool ___requestFallBack_3;
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::writeCount
	uint32_t ___writeCount_4;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::cachedHash
	int32_t ___cachedHash_5;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::transientPassIndex
	int32_t ___transientPassIndex_6;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedResourceLastFrameUsed
	int32_t ___sharedResourceLastFrameUsed_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::m_Pool
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___m_Pool_8;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// GameFramework.Variable
struct Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// GameFramework.DataNode.DataNodeManager/DataNode
struct DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2  : public RuntimeObject
{
	// System.String GameFramework.DataNode.DataNodeManager/DataNode::m_Name
	String_t* ___m_Name_1;
	// GameFramework.Variable GameFramework.DataNode.DataNodeManager/DataNode::m_Data
	Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D* ___m_Data_2;
	// GameFramework.DataNode.DataNodeManager/DataNode GameFramework.DataNode.DataNodeManager/DataNode::m_Parent
	DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2* ___m_Parent_3;
	// System.Collections.Generic.List`1<GameFramework.DataNode.DataNodeManager/DataNode> GameFramework.DataNode.DataNodeManager/DataNode::m_Childs
	List_1_tB0C18DB38897F6A767425B04C4F9AB186FB04D7E* ___m_Childs_4;
};

// Google.Protobuf.FieldCodec/WrapperCodecs
struct WrapperCodecs_tE553F7639B839C368D43033A632BD1D30EC9BCFB  : public RuntimeObject
{
};

// GameFramework.Network.NetworkManager/NetworkChannelBase
struct NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946  : public RuntimeObject
{
	// System.String GameFramework.Network.NetworkManager/NetworkChannelBase::m_Name
	String_t* ___m_Name_1;
	// System.Collections.Generic.Queue`1<GameFramework.Network.Packet> GameFramework.Network.NetworkManager/NetworkChannelBase::m_SendPacketPool
	Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* ___m_SendPacketPool_2;
	// GameFramework.EventPool`1<GameFramework.Network.Packet> GameFramework.Network.NetworkManager/NetworkChannelBase::m_ReceivePacketPool
	EventPool_1_t4D3320856181BCC4D04EFE34C8BA75AF08520671* ___m_ReceivePacketPool_3;
	// GameFramework.Network.INetworkChannelHelper GameFramework.Network.NetworkManager/NetworkChannelBase::m_NetworkChannelHelper
	RuntimeObject* ___m_NetworkChannelHelper_4;
	// GameFramework.Network.AddressFamily GameFramework.Network.NetworkManager/NetworkChannelBase::m_AddressFamily
	uint8_t ___m_AddressFamily_5;
	// System.Boolean GameFramework.Network.NetworkManager/NetworkChannelBase::m_ResetHeartBeatElapseSecondsWhenReceivePacket
	bool ___m_ResetHeartBeatElapseSecondsWhenReceivePacket_6;
	// System.Single GameFramework.Network.NetworkManager/NetworkChannelBase::m_HeartBeatInterval
	float ___m_HeartBeatInterval_7;
	// System.Net.Sockets.Socket GameFramework.Network.NetworkManager/NetworkChannelBase::m_Socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_Socket_8;
	// GameFramework.Network.NetworkManager/SendState GameFramework.Network.NetworkManager/NetworkChannelBase::m_SendState
	SendState_tD954F2C00766233B6B8A123AEBA48B82A3FFE466* ___m_SendState_9;
	// GameFramework.Network.NetworkManager/ReceiveState GameFramework.Network.NetworkManager/NetworkChannelBase::m_ReceiveState
	ReceiveState_tF68EF6CAC52F17F3AEAD32E2D446E8177D6104AC* ___m_ReceiveState_10;
	// GameFramework.Network.NetworkManager/HeartBeatState GameFramework.Network.NetworkManager/NetworkChannelBase::m_HeartBeatState
	HeartBeatState_t11CF7244FD92AA7B5864126CC0EE8B9A67207AF0* ___m_HeartBeatState_11;
	// System.Int32 GameFramework.Network.NetworkManager/NetworkChannelBase::m_SentPacketCount
	int32_t ___m_SentPacketCount_12;
	// System.Int32 GameFramework.Network.NetworkManager/NetworkChannelBase::m_ReceivedPacketCount
	int32_t ___m_ReceivedPacketCount_13;
	// System.Boolean GameFramework.Network.NetworkManager/NetworkChannelBase::m_Active
	bool ___m_Active_14;
	// System.Boolean GameFramework.Network.NetworkManager/NetworkChannelBase::m_Disposed
	bool ___m_Disposed_15;
	// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Object> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelConnected
	GameFrameworkAction_2_t8E4B7F92D004A781DDFEAFA5AA33717C70697FE2* ___NetworkChannelConnected_16;
	// GameFramework.GameFrameworkAction`1<GameFramework.Network.NetworkManager/NetworkChannelBase> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelClosed
	GameFrameworkAction_1_tC38C39543F636C9CEBDC0EF8326824D35280028E* ___NetworkChannelClosed_17;
	// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Int32> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelMissHeartBeat
	GameFrameworkAction_2_t94634A08CAE544DD4F9BCDC6EA00B5CAF237E337* ___NetworkChannelMissHeartBeat_18;
	// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelError
	GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* ___NetworkChannelError_19;
	// GameFramework.GameFrameworkAction`2<GameFramework.Network.NetworkManager/NetworkChannelBase,System.Object> GameFramework.Network.NetworkManager/NetworkChannelBase::NetworkChannelCustomError
	GameFrameworkAction_2_t8E4B7F92D004A781DDFEAFA5AA33717C70697FE2* ___NetworkChannelCustomError_20;
};

// GameFramework.ReferencePool/ReferenceCollection
struct ReferenceCollection_t9862D83417541AB40CB4883E998C072F1DD1D8C1  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<GameFramework.IReference> GameFramework.ReferencePool/ReferenceCollection::m_References
	Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* ___m_References_0;
	// System.Type GameFramework.ReferencePool/ReferenceCollection::m_ReferenceType
	Type_t* ___m_ReferenceType_1;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_UsingReferenceCount
	int32_t ___m_UsingReferenceCount_2;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_AcquireReferenceCount
	int32_t ___m_AcquireReferenceCount_3;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_ReleaseReferenceCount
	int32_t ___m_ReleaseReferenceCount_4;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_AddReferenceCount
	int32_t ___m_AddReferenceCount_5;
	// System.Int32 GameFramework.ReferencePool/ReferenceCollection::m_RemoveReferenceCount
	int32_t ___m_RemoveReferenceCount_6;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE  : public RuntimeObject
{
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::resourceArray
	DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* ___resourceArray_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::sharedResourcesCount
	int32_t ___sharedResourcesCount_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::pool
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___pool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::createResourceCallback
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___createResourceCallback_3;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::releaseResourceCallback
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___releaseResourceCallback_4;
};

// GameFramework.Utility/Json
struct Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6  : public RuntimeObject
{
};

// GameFramework.Utility/Text
struct Text_t9B0386BA4B616DD00717C060044D992234FAA7BC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<System.Object>
struct U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data_0;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Vector4>
struct U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data_0;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>
struct U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data_0;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color>
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color32>
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A 
{
	// System.Object System.Buffers.ReadOnlySequence`1::_startObject
	RuntimeObject* ____startObject_0;
	// System.Object System.Buffers.ReadOnlySequence`1::_endObject
	RuntimeObject* ____endObject_1;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_startInteger
	int32_t ____startInteger_2;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_endInteger
	int32_t ____endInteger_3;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// GameFramework.GameFrameworkEventArgs
struct GameFrameworkEventArgs_t099CC5D418462FCA612A804E830D41A32A81E1E7  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements_2;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 
{
	// System.Object System.SequencePosition::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;
};
// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// GameFramework.TypeNamePair
struct TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 
{
	// System.Type GameFramework.TypeNamePair::m_Type
	Type_t* ___m_Type_0;
	// System.String GameFramework.TypeNamePair::m_Name
	String_t* ___m_Name_1;
};

// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557 
{
	// System.Buffers.IBufferWriter`1<System.Byte> Google.Protobuf.WriteBufferHelper::bufferWriter
	RuntimeObject* ___bufferWriter_0;
	// Google.Protobuf.CodedOutputStream Google.Protobuf.WriteBufferHelper::codedOutputStream
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_pinvoke
{
	RuntimeObject* ___bufferWriter_0;
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};
// Native definition for COM marshalling of Google.Protobuf.WriteBufferHelper
struct WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_com
{
	RuntimeObject* ___bufferWriter_0;
	CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___codedOutputStream_1;
};

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

// GameFramework.FileSystem.FileSystem/BlockData
struct BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 
{
	// System.Int32 GameFramework.FileSystem.FileSystem/BlockData::m_StringIndex
	int32_t ___m_StringIndex_1;
	// System.Int32 GameFramework.FileSystem.FileSystem/BlockData::m_ClusterIndex
	int32_t ___m_ClusterIndex_2;
	// System.Int32 GameFramework.FileSystem.FileSystem/BlockData::m_Length
	int32_t ___m_Length_3;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 
{
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndexInMap
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_pinvoke
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_com
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 
{
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlGroupingAndComplexity
	uint16_t* ___controlGroupingAndComplexity_16;
	// System.Boolean UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlGroupingInitialized
	bool ___controlGroupingInitialized_17;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices_18;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_pinvoke
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates_7;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates_8;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices_18;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_com
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates_7;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates_8;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices_18;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::visibleLightIndex
	uint16_t ___visibleLightIndex_0;
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::lightBufferIndex
	uint16_t ___lightBufferIndex_1;
	// UnityEngine.Light UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting
struct Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994__padding[1];
	};
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>
struct CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToRemove_3;
};

// System.Buffers.ReadOnlySequence`1/Enumerator<System.Byte>
struct Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1/Enumerator::_sequence
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_0;
	// System.SequencePosition System.Buffers.ReadOnlySequence`1/Enumerator::_next
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ____next_1;
	// System.ReadOnlyMemory`1<T> System.Buffers.ReadOnlySequence`1/Enumerator::_currentMemory
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ____currentMemory_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues_2;
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// GameFramework.BaseEventArgs
struct BaseEventArgs_t418986431DDD1147BB4044B692BE71CE27A30B50  : public GameFrameworkEventArgs_t099CC5D418462FCA612A804E830D41A32A81E1E7
{
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457  : public RuntimeObject
{
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780 
{
	// System.Int32 Google.Protobuf.WriterInternalState::limit
	int32_t ___limit_0;
	// System.Int32 Google.Protobuf.WriterInternalState::position
	int32_t ___position_1;
	// Google.Protobuf.WriteBufferHelper Google.Protobuf.WriterInternalState::writeBufferHelper
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557 ___writeBufferHelper_2;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_pinvoke
{
	int32_t ___limit_0;
	int32_t ___position_1;
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_pinvoke ___writeBufferHelper_2;
};
// Native definition for COM marshalling of Google.Protobuf.WriterInternalState
struct WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_com
{
	int32_t ___limit_0;
	int32_t ___position_1;
	WriteBufferHelper_t88D4023E94B7D52F4C518E266A90BE267DD10557_marshaled_com ___writeBufferHelper_2;
};

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// GameFramework.FileSystem.FileSystem/HeaderData
struct HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 
{
	// System.Byte[] GameFramework.FileSystem.FileSystem/HeaderData::m_Header
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Header_4;
	// System.Byte GameFramework.FileSystem.FileSystem/HeaderData::m_Version
	uint8_t ___m_Version_5;
	// System.Byte[] GameFramework.FileSystem.FileSystem/HeaderData::m_EncryptBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_EncryptBytes_6;
	// System.Int32 GameFramework.FileSystem.FileSystem/HeaderData::m_MaxFileCount
	int32_t ___m_MaxFileCount_7;
	// System.Int32 GameFramework.FileSystem.FileSystem/HeaderData::m_MaxBlockCount
	int32_t ___m_MaxBlockCount_8;
	// System.Int32 GameFramework.FileSystem.FileSystem/HeaderData::m_BlockCount
	int32_t ___m_BlockCount_9;
};
// Native definition for P/Invoke marshalling of GameFramework.FileSystem.FileSystem/HeaderData
struct HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_marshaled_pinvoke
{
	uint8_t ___m_Header_4[3];
	uint8_t ___m_Version_5;
	uint8_t ___m_EncryptBytes_6[4];
	int32_t ___m_MaxFileCount_7;
	int32_t ___m_MaxBlockCount_8;
	int32_t ___m_BlockCount_9;
};
// Native definition for COM marshalling of GameFramework.FileSystem.FileSystem/HeaderData
struct HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_marshaled_com
{
	uint8_t ___m_Header_4[3];
	uint8_t ___m_Version_5;
	uint8_t ___m_EncryptBytes_6[4];
	int32_t ___m_MaxFileCount_7;
	int32_t ___m_MaxBlockCount_8;
	int32_t ___m_BlockCount_9;
};

// GameFramework.FileSystem.FileSystem/StringData
struct StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 
{
	// System.Byte GameFramework.FileSystem.FileSystem/StringData::m_Length
	uint8_t ___m_Length_1;
	// System.Byte[] GameFramework.FileSystem.FileSystem/StringData::m_Bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Bytes_2;
};
// Native definition for P/Invoke marshalling of GameFramework.FileSystem.FileSystem/StringData
struct StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_marshaled_pinvoke
{
	uint8_t ___m_Length_1;
	uint8_t ___m_Bytes_2[255];
};
// Native definition for COM marshalling of GameFramework.FileSystem.FileSystem/StringData
struct StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_marshaled_com
{
	uint8_t ___m_Length_1;
	uint8_t ___m_Bytes_2[255];
};

// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D 
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___m_ControlScheme_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_pinvoke
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_com
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t* ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ExtendsLayout
	String_t* ___m_ExtendsLayout_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_8;
};

// UnityEngine.Mesh/MeshData
struct MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC 
{
	// System.IntPtr UnityEngine.Mesh/MeshData::m_Ptr
	intptr_t ___m_Ptr_0;
};

// GameFramework.Utility/Marshal
struct Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::Bits
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* ___additionalValues_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// GameFramework.GameFrameworkException
struct GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF  : public Exception_t
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t* ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;
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

// GameFramework.Network.Packet
struct Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037  : public BaseEventArgs_t418986431DDD1147BB4044B692BE71CE27A30B50
{
};

// Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B 
{
	// System.Nullable`1<System.Int32> Google.Protobuf.SegmentedBufferHelper::totalLength
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	// System.Buffers.ReadOnlySequence`1/Enumerator<System.Byte> Google.Protobuf.SegmentedBufferHelper::readOnlySequenceEnumerator
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	// Google.Protobuf.CodedInputStream Google.Protobuf.SegmentedBufferHelper::codedInputStream
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_pinvoke
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
};
// Native definition for COM marshalling of Google.Protobuf.SegmentedBufferHelper
struct SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_com
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___totalLength_0;
	Enumerator_t81A4C70A8A186500F66FD3F505D8B2E7C805D770 ___readOnlySequenceEnumerator_1;
	CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___codedInputStream_2;
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

// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t* ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A* ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4* ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79* ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t* ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C* ___m_StartingActuations_31;
};

// System.Func`3<System.Object,System.Object,System.Int32>
struct Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

// GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>
struct GameFrameworkAction_4_tF510E37B03774A4F07D09912F82897C24FDF45AF  : public MulticastDelegate_t
{
};

// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>
struct GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack_21;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C 
{
	// System.Int32 Google.Protobuf.ParserInternalState::bufferPos
	int32_t ___bufferPos_0;
	// System.Int32 Google.Protobuf.ParserInternalState::bufferSize
	int32_t ___bufferSize_1;
	// System.Int32 Google.Protobuf.ParserInternalState::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_2;
	// System.Int32 Google.Protobuf.ParserInternalState::currentLimit
	int32_t ___currentLimit_3;
	// System.Int32 Google.Protobuf.ParserInternalState::totalBytesRetired
	int32_t ___totalBytesRetired_4;
	// System.Int32 Google.Protobuf.ParserInternalState::recursionDepth
	int32_t ___recursionDepth_5;
	// Google.Protobuf.SegmentedBufferHelper Google.Protobuf.ParserInternalState::segmentedBufferHelper
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B ___segmentedBufferHelper_6;
	// System.UInt32 Google.Protobuf.ParserInternalState::lastTag
	uint32_t ___lastTag_7;
	// System.UInt32 Google.Protobuf.ParserInternalState::nextTag
	uint32_t ___nextTag_8;
	// System.Boolean Google.Protobuf.ParserInternalState::hasNextTag
	bool ___hasNextTag_9;
	// System.Int32 Google.Protobuf.ParserInternalState::sizeLimit
	int32_t ___sizeLimit_10;
	// System.Int32 Google.Protobuf.ParserInternalState::recursionLimit
	int32_t ___recursionLimit_11;
	// System.Boolean Google.Protobuf.ParserInternalState::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.ParserInternalState::<ExtensionRegistry>k__BackingField
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_pinvoke
{
	int32_t ___bufferPos_0;
	int32_t ___bufferSize_1;
	int32_t ___bufferSizeAfterLimit_2;
	int32_t ___currentLimit_3;
	int32_t ___totalBytesRetired_4;
	int32_t ___recursionDepth_5;
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_pinvoke ___segmentedBufferHelper_6;
	uint32_t ___lastTag_7;
	uint32_t ___nextTag_8;
	int32_t ___hasNextTag_9;
	int32_t ___sizeLimit_10;
	int32_t ___recursionLimit_11;
	int32_t ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};
// Native definition for COM marshalling of Google.Protobuf.ParserInternalState
struct ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_com
{
	int32_t ___bufferPos_0;
	int32_t ___bufferSize_1;
	int32_t ___bufferSizeAfterLimit_2;
	int32_t ___currentLimit_3;
	int32_t ___totalBytesRetired_4;
	int32_t ___recursionDepth_5;
	SegmentedBufferHelper_tB533BBE3FC95EE78A9A8120BCFCBFF46AE02126B_marshaled_com ___segmentedBufferHelper_6;
	uint32_t ___lastTag_7;
	uint32_t ___nextTag_8;
	int32_t ___hasNextTag_9;
	int32_t ___sizeLimit_10;
	int32_t ___recursionLimit_11;
	int32_t ___U3CDiscardUnknownFieldsU3Ek__BackingField_12;
	ExtensionRegistry_t3A02F9CABE27F85D70F5444B20C9640194BCBDCC* ___U3CExtensionRegistryU3Ek__BackingField_13;
};

// Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D 
{
	// System.Span`1<System.Byte> Google.Protobuf.WriteContext::buffer
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	// Google.Protobuf.WriterInternalState Google.Protobuf.WriteContext::state
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780 ___state_1;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D_marshaled_pinvoke
{
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_pinvoke ___state_1;
};
// Native definition for COM marshalling of Google.Protobuf.WriteContext
struct WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D_marshaled_com
{
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___buffer_0;
	WriterInternalState_tAACF88B10900BCAB675899ED5D745BC2882A1780_marshaled_com ___state_1;
};

// UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A 
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState/GlobalState::globalList
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionChange
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionControlsChanged
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_pinvoke
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_com
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList_0;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange_1;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged_2;
};

// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_InProcessControlStateChange
	bool ___m_InProcessControlStateChange_10;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputActionState::m_CurrentlyProcessingThisEvent
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_CurrentlyProcessingThisEvent_11;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnBeforeUpdateDelegate_12;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate_13;
};

// Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF 
{
	// System.ReadOnlySpan`1<System.Byte> Google.Protobuf.ParseContext::buffer
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	// Google.Protobuf.ParserInternalState Google.Protobuf.ParseContext::state
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C ___state_3;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF_marshaled_pinvoke
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_pinvoke ___state_3;
};
// Native definition for COM marshalling of Google.Protobuf.ParseContext
struct ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF_marshaled_com
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___buffer_2;
	ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C_marshaled_com ___state_3;
};

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.Byte>

// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.Int16>

// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.SByte>

// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.UInt16>

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>

// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>

// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>

// UnityEngine.Rendering.DynamicArray`1<System.Object>

// UnityEngine.Rendering.DynamicArray`1<System.Object>

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>

// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int16>

// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.SByte>

// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.UInt16>

// Google.Protobuf.FieldCodec`1<System.Object>
struct FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	RuntimeObject* ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;
};

// Google.Protobuf.FieldCodec`1<System.Object>

// System.Collections.Generic.Queue`1<GameFramework.IReference>

// System.Collections.Generic.Queue`1<GameFramework.IReference>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<GameFramework.Network.Packet>

// System.Collections.Generic.Queue`1<GameFramework.Network.Packet>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
};

// System.Net.Sockets.Socket

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.ValueType

// System.ValueType

// GameFramework.Variable

// GameFramework.Variable

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// GameFramework.DataNode.DataNodeManager/DataNode
struct DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2_StaticFields
{
	// GameFramework.DataNode.DataNodeManager/DataNode[] GameFramework.DataNode.DataNodeManager/DataNode::EmptyDataNodeArray
	DataNodeU5BU5D_t79F21372EB5AC4EC270BF3667F1221A28D7EED7B* ___EmptyDataNodeArray_0;
};

// GameFramework.DataNode.DataNodeManager/DataNode

// Google.Protobuf.FieldCodec/WrapperCodecs
struct WrapperCodecs_tE553F7639B839C368D43033A632BD1D30EC9BCFB_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Google.Protobuf.FieldCodec/WrapperCodecs::Codecs
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Codecs_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Google.Protobuf.FieldCodec/WrapperCodecs::Readers
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Readers_1;
};

// Google.Protobuf.FieldCodec/WrapperCodecs

// GameFramework.Network.NetworkManager/NetworkChannelBase

// GameFramework.Network.NetworkManager/NetworkChannelBase

// GameFramework.ReferencePool/ReferenceCollection

// GameFramework.ReferencePool/ReferenceCollection

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData

// GameFramework.Utility/Json
struct Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_StaticFields
{
	// GameFramework.Utility/Json/IJsonHelper GameFramework.Utility/Json::s_JsonHelper
	RuntimeObject* ___s_JsonHelper_0;
};

// GameFramework.Utility/Json

// GameFramework.Utility/Text
struct Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields
{
	// GameFramework.Utility/Text/ITextHelper GameFramework.Utility/Text::s_TextHelper
	RuntimeObject* ___s_TextHelper_0;
};

// GameFramework.Utility/Text

// Unity.Burst.Intrinsics.X86/Avx2

// Unity.Burst.Intrinsics.X86/Avx2

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	// System.UInt32[] Unity.Burst.Intrinsics.X86/Sse4_2::crctab
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

// Unity.Burst.Intrinsics.X86/Sse4_2

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<System.Object>

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<System.Object>

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Vector4>

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Vector4>

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>

// Unity.Collections.NativeArray`1<UnityEngine.Color>

// Unity.Collections.NativeArray`1<UnityEngine.Color>

// Unity.Collections.NativeArray`1<UnityEngine.Color32>

// Unity.Collections.NativeArray`1<UnityEngine.Color32>

// Unity.Collections.NativeArray`1<System.UInt64>

// Unity.Collections.NativeArray`1<System.UInt64>

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.ReadOnlyMemory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A_StaticFields
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___Empty_4;
};

// System.Buffers.ReadOnlySequence`1<System.Byte>

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

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

// UnityEngine.InputSystem.Utilities.FourCC

// UnityEngine.InputSystem.Utilities.FourCC

// GameFramework.GameFrameworkEventArgs

// GameFramework.GameFrameworkEventArgs

// UnityEngine.InputSystem.InputBinding

// UnityEngine.InputSystem.InputBinding

// UnityEngine.InputSystem.InputControlScheme

// UnityEngine.InputSystem.InputControlScheme

// UnityEngine.InputSystem.LowLevel.InputEventPtr

// UnityEngine.InputSystem.LowLevel.InputEventPtr

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.InputSystem.Utilities.PrimitiveValue

// UnityEngine.InputSystem.Utilities.PrimitiveValue

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.SByte

// System.SByte

// System.SequencePosition

// System.SequencePosition

// System.Single

// System.Single

// GameFramework.TypeNamePair

// GameFramework.TypeNamePair

// UnityEngine.InputSystem.Utilities.TypeTable

// UnityEngine.InputSystem.Utilities.TypeTable

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

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

// Google.Protobuf.WriteBufferHelper

// Google.Protobuf.WriteBufferHelper

// Unity.Burst.Intrinsics.v64

// Unity.Burst.Intrinsics.v64

// GameFramework.FileSystem.FileSystem/BlockData
struct BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_StaticFields
{
	// GameFramework.FileSystem.FileSystem/BlockData GameFramework.FileSystem.FileSystem/BlockData::Empty
	BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 ___Empty_0;
};

// GameFramework.FileSystem.FileSystem/BlockData

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByCookieSize
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByBufferIndex
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer

// System.ByReference`1<System.Byte>

// System.ByReference`1<System.Byte>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>

// System.Buffers.ReadOnlySequence`1/Enumerator<System.Byte>

// System.Buffers.ReadOnlySequence`1/Enumerator<System.Byte>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>

// GameFramework.BaseEventArgs

// GameFramework.BaseEventArgs

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields
{
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputProcessor::s_Processors
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Processors_0;
};

// UnityEngine.InputSystem.InputProcessor

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Google.Protobuf.WriterInternalState

// Google.Protobuf.WriterInternalState

// Unity.Burst.Intrinsics.v128

// Unity.Burst.Intrinsics.v128

// GameFramework.FileSystem.FileSystem/HeaderData
struct HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_StaticFields
{
	// System.Byte[] GameFramework.FileSystem.FileSystem/HeaderData::Header
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Header_3;
};

// GameFramework.FileSystem.FileSystem/HeaderData

// GameFramework.FileSystem.FileSystem/StringData
struct StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_StaticFields
{
	// System.Byte[] GameFramework.FileSystem.FileSystem/StringData::s_CachedBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_CachedBytes_0;
};

// GameFramework.FileSystem.FileSystem/StringData

// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax

// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax

// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder

// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder

// UnityEngine.Mesh/MeshData

// UnityEngine.Mesh/MeshData

// GameFramework.Utility/Marshal
struct Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields
{
	// System.IntPtr GameFramework.Utility/Marshal::s_CachedHGlobalPtr
	intptr_t ___s_CachedHGlobalPtr_1;
	// System.Int32 GameFramework.Utility/Marshal::s_CachedHGlobalSize
	int32_t ___s_CachedHGlobalSize_2;
};

// GameFramework.Utility/Marshal

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.Byte>

// System.Span`1<System.Byte>

// System.Span`1<System.Byte>

// GameFramework.GameFrameworkException

// GameFramework.GameFrameworkException

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout

// System.MulticastDelegate

// System.MulticastDelegate

// GameFramework.Network.Packet

// GameFramework.Network.Packet

// Google.Protobuf.SegmentedBufferHelper

// Google.Protobuf.SegmentedBufferHelper

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

// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation

// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation

// System.Func`3<System.Object,System.Object,System.Int32>

// System.Func`3<System.Object,System.Object,System.Int32>

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>

// GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>

// GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>

// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>

// GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>

// UnityEngine.InputSystem.InputControl`1<System.Single>

// UnityEngine.InputSystem.InputControl`1<System.Single>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// Google.Protobuf.ParserInternalState

// Google.Protobuf.ParserInternalState

// Google.Protobuf.WriteContext

// Google.Protobuf.WriteContext

// UnityEngine.InputSystem.InputActionState/GlobalState

// UnityEngine.InputSystem.InputActionState/GlobalState

// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700_StaticFields
{
	// UnityEngine.InputSystem.InputActionState/GlobalState UnityEngine.InputSystem.InputActionState::s_GlobalState
	GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A ___s_GlobalState_14;
};

// UnityEngine.InputSystem.InputActionState

// Google.Protobuf.ParseContext

// Google.Protobuf.ParseContext
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
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
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color32>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) ;
// System.Void GameFramework.GameFrameworkAction`4<System.Object,System.ByteEnum,System.Int32Enum,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFrameworkAction_4_Invoke_m6C76995EDD204C01F0E4FF6A746073846A345188_gshared_inline (GameFrameworkAction_4_tF510E37B03774A4F07D09912F82897C24FDF45AF* __this, RuntimeObject* ___0_arg1, uint8_t ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.DynamicArray`1<System.Object>::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DynamicArray`1<System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
// T& UnityEngine.Rendering.DynamicArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String GameFramework.Utility/Text::Format<System.Object>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_gshared (String_t* ___0_format, RuntimeObject* ___1_arg, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void GameFramework.DataNode.DataNodeManager/DataNode::SetData(GameFramework.Variable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNode_SetData_m0CA03719AB71E27B1FEDEB000FE21E8A7FEFF37D (DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2* __this, Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D* ___0_data, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeLengthSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeLengthSize_mDD8A8B210E918ED0C32B22CB48BE98AA0FE85301 (int32_t ___0_length, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128 (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, Type_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.ParseContext::ReadLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParseContext_ReadLength_m5574397F353C62DA04F0E0E5616C2159787C52E6_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.SegmentedBufferHelper::PushLimit(Google.Protobuf.ParserInternalState&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SegmentedBufferHelper_PushLimit_m13B57D290C3F6DE8D49B46CDEBA41496A8CC496A (ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___0_state, int32_t ___1_byteLimit, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.ParsingPrimitivesMessages::SkipLastField(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingPrimitivesMessages_SkipLastField_m8C3980E28CCE8DFA24D34951FE2248BE0253AE5A (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___0_buffer, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___1_state, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParseContext::ReadTag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.ParsingPrimitivesMessages::CheckReadEndOfStreamTag(Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingPrimitivesMessages_CheckReadEndOfStreamTag_m1A598174A7F6DCBF3E922FED7B5468CE8C4E9EB1 (ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___0_state, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.SegmentedBufferHelper::PopLimit(Google.Protobuf.ParserInternalState&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SegmentedBufferHelper_PopLimit_m9A9E2621E7721E325174872FBA832F7B5F409CA3 (ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___0_state, int32_t ___1_oldLimit, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WriteContext::WriteLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteContext_WriteLength_m5C0E4572780DDDAF32DF37BB7C9D590162FBDCC2 (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* __this, int32_t ___0_length, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputExtensions::IsInProgress(UnityEngine.InputSystem.InputActionPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA (int32_t ___0_phase, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_bindingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
inline float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::ThrowIfRebindInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.InternedString::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_str, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_interaction, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_processor, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::TryFindLayoutForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868 (Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5* __this, Type_t* ___0_layoutType, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh/MeshData::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___0_attr, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh/MeshData::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeIntoPtr(System.IntPtr,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeIntoPtr_m411198D0CF31164FFCB234D8033BE5FAC82EEED1 (intptr_t ___0_self, int32_t ___1_attr, int32_t ___2_format, int32_t ___3_dim, intptr_t ___4_dst, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_gshared)(__this, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color32>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_gshared)(__this, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_gshared)(__this, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_gshared)(__this, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_gshared)(__this, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void GameFramework.GameFrameworkAction`4<GameFramework.Network.NetworkManager/NetworkChannelBase,GameFramework.Network.NetworkErrorCode,System.Net.Sockets.SocketError,System.String>::Invoke(T1,T2,T3,T4)
inline void GameFrameworkAction_4_Invoke_m2BFE86941508CCEF10D53325CD310AA98A4C13F9_inline (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* __this, NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946* ___0_arg1, uint8_t ___1_arg2, int32_t ___2_arg3, String_t* ___3_arg4, const RuntimeMethod* method)
{
	((  void (*) (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91*, NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946*, uint8_t, int32_t, String_t*, const RuntimeMethod*))GameFrameworkAction_4_Invoke_m6C76995EDD204C01F0E4FF6A746073846A345188_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
// System.Void GameFramework.GameFrameworkException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693 (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<GameFramework.Network.Packet>::Enqueue(T)
inline void Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100 (Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* __this, Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA*, Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<GameFramework.IReference>::get_Count()
inline int32_t Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_inline (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<GameFramework.IReference>::Dequeue()
inline RuntimeObject* Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<GameFramework.IReference>::Enqueue(T)
inline void Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6 (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*, RuntimeObject*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_size()
inline int32_t DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::Resize(System.Int32,System.Boolean)
inline void DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1 (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared)(__this, ___0_newSize, ___1_keepContent, method);
}
// T& UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_Item(System.Int32)
inline IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared)(__this, ___0_index, method);
}
// System.String GameFramework.Utility/Text::Format<System.Exception>(System.String,T)
inline String_t* Text_Format_TisException_t_m89DC02C9DD04BEBD153F890898794038E1A0D81C (String_t* ___0_format, Exception_t* ___1_arg, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, Exception_t*, const RuntimeMethod*))Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_gshared)(___0_format, ___1_arg, method);
}
// System.Void GameFramework.GameFrameworkException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameFrameworkException__ctor_mA8FD70857BDEEA3C78BF9B13D62ED99E394143F5 (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Void GameFramework.Utility/Marshal::EnsureCachedHGlobalSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B (int32_t ___0_ensureSize, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___0_ptr, Type_t* ___1_structureType, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::SetBit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::GetBit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStriOutput(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParsingPrimitives::ParseRawVarint32(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ParsingPrimitives_ParseRawVarint32_m12E76CAA773AAED8FDAF192EBFAF830E615798BF (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___0_buffer, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___1_state, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.ParsingPrimitives::ParseTag(System.ReadOnlySpan`1<System.Byte>&,Google.Protobuf.ParserInternalState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ParsingPrimitives_ParseTag_mC3CDF9E540F71AEAB45BC4BAFAE69C8FB097DB64 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* ___0_buffer, ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* ___1_state, const RuntimeMethod* method) ;
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(63 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___0_array;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___0_array;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___0_array;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___0_array;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// T GameFramework.DataNode.DataNodeManager/DataNode::GetData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataNode_GetData_TisRuntimeObject_m336C7C3105546F06010115EF332390B0DC7312EA_gshared (DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2* __this, const RuntimeMethod* method) 
{
	{
		// return (T)m_Data;
		Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D* L_0 = (Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D*)__this->___m_Data_2;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// System.Void GameFramework.DataNode.DataNodeManager/DataNode::SetData<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataNode_SetData_TisRuntimeObject_m1D28E8601148BE936B2CB28D9C224226F0D10EE1_gshared (DataNode_tA2D1CAD79037F275279E454C3B66C9EB2F8964D2* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) 
{
	{
		// SetData((Variable)data);
		RuntimeObject* L_0 = ___0_data;
		DataNode_SetData_m0CA03719AB71E27B1FEDEB000FE21E8A7FEFF37D(__this, (Variable_t6CFAC66EE46EC9B6C7B4E78E89E89616C84C369D*)L_0, NULL);
		// }
		return;
	}
}
// System.Int32 Google.Protobuf.FieldCodec/WrapperCodecs::CalculateSize<System.Object>(T,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WrapperCodecs_CalculateSize_TisRuntimeObject_m3DBB3CDDAD4C21C07D88D6953B9463AF7B6CE416_gshared (RuntimeObject* ___0_value, FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* ___1_codec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* L_0 = ___1_codec;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeLengthSize_mDD8A8B210E918ED0C32B22CB48BE98AA0FE85301(L_3, NULL);
		int32_t L_5 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_4, L_5));
	}
}
// Google.Protobuf.FieldCodec`1<T> Google.Protobuf.FieldCodec/WrapperCodecs::GetCodec<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* WrapperCodecs_GetCodec_TisRuntimeObject_m3878F3061B0CA9FA941C3513A0BB2444E76DE768_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperCodecs_tE553F7639B839C368D43033A632BD1D30EC9BCFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Type_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WrapperCodecs_tE553F7639B839C368D43033A632BD1D30EC9BCFB_il2cpp_TypeInfo_var);
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_0 = ((WrapperCodecs_tE553F7639B839C368D43033A632BD1D30EC9BCFB_StaticFields*)il2cpp_codegen_static_fields_for(WrapperCodecs_tE553F7639B839C368D43033A632BD1D30EC9BCFB_il2cpp_TypeInfo_var))->___Codecs_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128(L_0, L_2, (&V_0), Dictionary_2_TryGetValue_m76D0309695A0582B3E29E97942ACD35DC4EFD128_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		Type_t* L_6 = L_5;
		G_B2_0 = L_6;
		G_B2_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7210D872E945C71ACA8CEF51ACA40552C43E8605));
		if (L_6)
		{
			G_B3_0 = L_6;
			G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7210D872E945C71ACA8CEF51ACA40552C43E8605));
			goto IL_002e;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0033;
	}

IL_002e:
	{
		NullCheck((RuntimeObject*)G_B3_0);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B3_0);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_0033:
	{
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WrapperCodecs_GetCodec_TisRuntimeObject_m3878F3061B0CA9FA941C3513A0BB2444E76DE768_RuntimeMethod_var)));
	}

IL_003e:
	{
		RuntimeObject* L_10 = V_0;
		return ((FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7*)CastclassSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T Google.Protobuf.FieldCodec/WrapperCodecs::Read<System.Object>(Google.Protobuf.ParseContext&,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperCodecs_Read_TisRuntimeObject_m81F504EDF3FECE1A8A872886291D30767B2E888E_gshared (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* ___0_ctx, FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* ___1_codec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_0 = ___0_ctx;
		int32_t L_1;
		L_1 = ParseContext_ReadLength_m5574397F353C62DA04F0E0E5616C2159787C52E6_inline(L_0, NULL);
		V_0 = L_1;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_2 = ___0_ctx;
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_3 = (ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C*)(&L_2->___state_3);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = SegmentedBufferHelper_PushLimit_m13B57D290C3F6DE8D49B46CDEBA41496A8CC496A(L_3, L_4, NULL);
		V_1 = L_5;
		FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* L_6 = ___1_codec;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_3 = L_7;
		goto IL_0041;
	}

IL_001d:
	{
		uint32_t L_8 = V_2;
		FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* L_9 = ___1_codec;
		NullCheck(L_9);
		uint32_t L_10;
		L_10 = ((  uint32_t (*) (FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0030;
		}
	}
	{
		FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* L_11 = ___1_codec;
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_12 = ___0_ctx;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7*, ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_3 = L_13;
		goto IL_0041;
	}

IL_0030:
	{
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_14 = ___0_ctx;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_15 = (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*)(&L_14->___buffer_2);
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_16 = ___0_ctx;
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_17 = (ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C*)(&L_16->___state_3);
		il2cpp_codegen_runtime_class_init_inline(ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var);
		ParsingPrimitivesMessages_SkipLastField_m8C3980E28CCE8DFA24D34951FE2248BE0253AE5A(L_15, L_17, NULL);
	}

IL_0041:
	{
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_18 = ___0_ctx;
		uint32_t L_19;
		L_19 = ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline(L_18, NULL);
		uint32_t L_20 = L_19;
		V_2 = L_20;
		if (L_20)
		{
			goto IL_001d;
		}
	}
	{
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_21 = ___0_ctx;
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_22 = (ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C*)(&L_21->___state_3);
		il2cpp_codegen_runtime_class_init_inline(ParsingPrimitivesMessages_t7E329824B6CDE2975470D909F2DB2073F4ACF0F2_il2cpp_TypeInfo_var);
		ParsingPrimitivesMessages_CheckReadEndOfStreamTag_m1A598174A7F6DCBF3E922FED7B5468CE8C4E9EB1(L_22, NULL);
		ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* L_23 = ___0_ctx;
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_24 = (ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C*)(&L_23->___state_3);
		int32_t L_25 = V_1;
		SegmentedBufferHelper_PopLimit_m9A9E2621E7721E325174872FBA832F7B5F409CA3(L_24, L_25, NULL);
		RuntimeObject* L_26 = V_3;
		return L_26;
	}
}
// System.Void Google.Protobuf.FieldCodec/WrapperCodecs::Write<System.Object>(Google.Protobuf.WriteContext&,T,Google.Protobuf.FieldCodec`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperCodecs_Write_TisRuntimeObject_m3F38484DCECC0BB1739077883AADB02AB1E156A4_gshared (WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* ___0_ctx, RuntimeObject* ___1_value, FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* ___2_codec, const RuntimeMethod* method) 
{
	{
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_0 = ___0_ctx;
		FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* L_1 = ___2_codec;
		RuntimeObject* L_2 = ___1_value;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ((  int32_t (*) (FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		WriteContext_WriteLength_m5C0E4572780DDDAF32DF37BB7C9D590162FBDCC2(L_0, L_3, NULL);
		FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7* L_4 = ___2_codec;
		WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D* L_5 = ___0_ctx;
		RuntimeObject* L_6 = ___1_value;
		NullCheck(L_4);
		((  void (*) (FieldCodec_1_t5E5853045CAC4F051697FDB8A12CC79D264D40D7*, WriteContext_tF80B3959AE2E6F9D5F8D447B35D859DA2ABD226D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		// if (m_State != null)
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// value = phase.IsInProgress() ?
		//     m_State.ReadValue<TValue>(bindingIndex, controlIndex) :
		//     m_State.ApplyProcessors(bindingIndex, value);
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, L_4, L_5, (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		// return value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		// if (m_State != null)
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// value = phase.IsInProgress() ?
		//     m_State.ReadValue<TValue>(bindingIndex, controlIndex) :
		//     m_State.ApplyProcessors(bindingIndex, value);
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		float L_5 = V_0;
		NullCheck(L_3);
		float L_6;
		L_6 = ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, float, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, L_4, L_5, (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		float L_10;
		L_10 = ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		// return value;
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// if (m_State != null)
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// value = phase.IsInProgress() ?
		//     m_State.ReadValue<TValue>(bindingIndex, controlIndex) :
		//     m_State.ApplyProcessors(bindingIndex, value);
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, L_4, L_5, (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		// return value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (m_State != null)
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// value = phase.IsInProgress() ?
		//     m_State.ReadValue<TValue>(bindingIndex, controlIndex) :
		//     m_State.ApplyProcessors(bindingIndex, value);
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, L_4, L_5, (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)__this->___m_State_0;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		// return value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_TisRuntimeObject_mD0F2FB39194CC7EAC8E22DFFCD9C9116BAFC7B5E_gshared (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThrowIfRebindInProgress();
		RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C(__this, NULL);
		// return WithExpectedControlType(typeof(TControl));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB(__this, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var interactionName = InputProcessor.s_Processors.FindNameForType(typeof(TInteraction));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_4;
		L_4 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors_0), L_3, NULL);
		V_0 = L_4;
		// if (interactionName.IsEmpty())
		bool L_5;
		L_5 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TInteraction)}' has not been registered as a processor");
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_7, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254_RuntimeMethod_var)));
	}

IL_004b:
	{
		// return WithInteraction(interactionName);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_10, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_12;
		L_12 = BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B(__this, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisRuntimeObject_mA9CD41BB913C678CE5891E3C51871CBFCFB13254(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var processorName = InputProcessor.s_Processors.FindNameForType(typeof(TProcessor));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_4;
		L_4 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors_0), L_3, NULL);
		V_0 = L_4;
		// if (processorName.IsEmpty())
		bool L_5;
		L_5 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TProcessor)}' has not been registered as a processor");
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_7, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE_RuntimeMethod_var)));
	}

IL_004b:
	{
		// return WithProcessor(processorName);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_10, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_12;
		L_12 = BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC(__this, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisRuntimeObject_m88180835A3724BF9C98DC39A8CB6146B2B3BC1DE(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var layoutName = InputControlLayout.s_Layouts.TryFindLayoutForType(typeof(TDevice)).ToString();
		il2cpp_codegen_runtime_class_init_inline(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2;
		L_2 = Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868((&((InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var))->___s_Layouts_15), L_1, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&V_1), NULL);
		V_0 = L_3;
		// if (string.IsNullOrEmpty(layoutName))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// layoutName = typeof(TDevice).Name;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_7);
		V_0 = L_8;
	}

IL_003b:
	{
		// return $"<{layoutName}>";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_9, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* Builder_WithType_TisRuntimeObject_m78AB1B3E3CC78CC83E7A66415AD992EF33CF8A7F_gshared (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline(__this, L_1, NULL);
		// return this;
		return __this;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<System.Object>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisRuntimeObject_mFE9A6CFE373BF8B47CB4E078C093E2CA7621B00C_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* ___2_p, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var tmp = data[a];
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* L_0 = ___2_p;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0->___data_0;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// data[a] = data[b];
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* L_5 = ___2_p;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_5->___data_0;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* L_8 = ___2_p;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_8->___data_0;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_12);
		// data[b] = tmp;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40* L_13 = ___2_p;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_13->___data_0;
		int32_t L_15 = ___1_b;
		RuntimeObject* L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_16);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<UnityEngine.Vector4>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* ___2_p, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tmp = data[a];
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_0 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_0->___data_0;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// data[a] = data[b];
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_5 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_5->___data_0;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_8 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_8->___data_0;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_12);
		// data[b] = tmp;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* L_13 = ___2_p;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_14 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_13->___data_0;
		int32_t L_15 = ___1_b;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_16);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___0_a, int32_t ___1_b, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* ___2_p, const RuntimeMethod* method) 
{
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tmp = data[a];
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_0 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_0->___data_0;
		int32_t L_2 = ___0_a;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// data[a] = data[b];
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_5 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_5->___data_0;
		int32_t L_7 = ___0_a;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_8 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_9 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_8->___data_0;
		int32_t L_10 = ___1_b;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_12);
		// data[b] = tmp;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* L_13 = ___2_p;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_14 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_13->___data_0;
		int32_t L_15 = ___1_b;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_16);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<System.Object>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisRuntimeObject_m4311827E7E157529882E08D52A07A4A9FB8A9A9B_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_0 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		// var iData = data[i];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// int j = i - 1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		// data[j + 1] = data[j];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___0_data;
		int32_t L_7 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___0_data;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (RuntimeObject*)L_11);
		// j--;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		// while (j >= 0 && compare(iData, data[j]) < 0)
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_14 = ___3_compare;
		RuntimeObject* L_15 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___0_data;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		// data[j + 1] = iData;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = ___0_data;
		int32_t L_22 = V_2;
		RuntimeObject* L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (RuntimeObject*)L_23);
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = ___2_end;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_0 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		// var iData = data[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___0_data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// int j = i - 1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		// data[j + 1] = data[j];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___0_data;
		int32_t L_7 = V_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = ___0_data;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_11);
		// j--;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		// while (j >= 0 && compare(iData, data[j]) < 0)
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_14 = ___3_compare;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___0_data;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		// data[j + 1] = iData;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___0_data;
		int32_t L_22 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_23);
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = ___2_end;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_0 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_004b;
	}

IL_0006:
	{
		// var iData = data[i];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = ___0_data;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// int j = i - 1;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0028;
	}

IL_0014:
	{
		// data[j + 1] = data[j];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___0_data;
		int32_t L_7 = V_2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = ___0_data;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_11);
		// j--;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		// while (j >= 0 && compare(iData, data[j]) < 0)
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_14 = ___3_compare;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = V_1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___0_data;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		int32_t L_20;
		L_20 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, L_15, L_19, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}

IL_003d:
	{
		// data[j + 1] = iData;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_21 = ___0_data;
		int32_t L_22 = V_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = V_1;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_23);
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004b:
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_25 = V_0;
		int32_t L_26 = ___2_end;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<System.Object>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sorting_Median3Pivot_TisRuntimeObject_m331E6EFCA267740A36CB1505C560A1A90DE3EC64_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___4_compare, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_data;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_2.___data_0;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_7 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_7.___data_0;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_13 = ___1_start;
		int32_t L_14 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0033:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_15 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_16 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16.___data_0;
		int32_t L_18 = ___2_pivot;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_21 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_21.___data_0;
		int32_t L_23 = ___1_start;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_27 = ___1_start;
		int32_t L_28 = ___2_pivot;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_005e:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_29 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_30 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_30.___data_0;
		int32_t L_32 = ___3_end;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_35 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_35.___data_0;
		int32_t L_37 = ___2_pivot;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_41 = ___2_pivot;
		int32_t L_42 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0089:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_tBDEB72CAA1519F9804B7D72B1BFDAE0519FCDA40 L_43 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_43.___data_0;
		int32_t L_45 = ___2_pivot;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___4_compare, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_data;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_2 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_2.___data_0;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_7 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_7.___data_0;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_13 = ___1_start;
		int32_t L_14 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0033:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_15 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_16 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_16.___data_0;
		int32_t L_18 = ___2_pivot;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_21 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_21.___data_0;
		int32_t L_23 = ___1_start;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_27 = ___1_start;
		int32_t L_28 = ___2_pivot;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_005e:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_29 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_30 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_30.___data_0;
		int32_t L_32 = ___3_end;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_35 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_35.___data_0;
		int32_t L_37 = ___2_pivot;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_41 = ___2_pivot;
		int32_t L_42 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0089:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_43 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_44 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_43.___data_0;
		int32_t L_45 = ___2_pivot;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_data;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_1 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_2 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_2.___data_0;
		int32_t L_4 = ___3_end;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_7 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_7.___data_0;
		int32_t L_9 = ___1_start;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_13 = ___1_start;
		int32_t L_14 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_13, L_14, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0033:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_15 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_16 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_17 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_16.___data_0;
		int32_t L_18 = ___2_pivot;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_21 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_21.___data_0;
		int32_t L_23 = ___1_start;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_15);
		int32_t L_26;
		L_26 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, L_20, L_25, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_27 = ___1_start;
		int32_t L_28 = ___2_pivot;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_27, L_28, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_005e:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_29 = ___4_compare;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_30 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_31 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_30.___data_0;
		int32_t L_32 = ___3_end;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_35 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_35.___data_0;
		int32_t L_37 = ___2_pivot;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_29);
		int32_t L_40;
		L_40 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_29, L_34, L_39, il2cpp_rgctx_method(method->rgctx_data, 1));
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_41 = ___2_pivot;
		int32_t L_42 = ___3_end;
		((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_41, L_42, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0089:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_43 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_44 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_43.___data_0;
		int32_t L_45 = ___2_pivot;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		return L_47;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<System.Object>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisRuntimeObject_mAEB1C1A3082076ADE5B61B6C9AC9A89101C53F67_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// int diff = end - start;
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_8 = ___3_compare;
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_11 = ___3_compare;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		RuntimeObject* L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_19 = ___3_compare;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		RuntimeObject* L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = ((  int32_t (*) (Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// if (start >= end)
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		// return end;
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		// var tmp = data[start];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		// data[start++] = data[end];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (RuntimeObject*)L_39);
		// data[end--] = tmp;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		RuntimeObject* L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (RuntimeObject*)L_43);
		// while (true)
		goto IL_001c;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// int diff = end - start;
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_8 = ___3_compare;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_11 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___3_compare;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// if (start >= end)
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		// return end;
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		// var tmp = data[start];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		// data[start++] = data[end];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_39);
		// data[end--] = tmp;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_43);
		// while (true)
		goto IL_001c;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// int diff = end - start;
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___3_compare;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// if (start >= end)
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		// return end;
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		// var tmp = data[start];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		// data[start++] = data[end];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_39);
		// data[end--] = tmp;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_43);
		// while (true)
		goto IL_001c;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<System.Object>(T[],System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisRuntimeObject_m5F0268010291B8DED7B27E8AEDA500B98D0599DD_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_data, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___1_compare, const RuntimeMethod* method) 
{
	{
		// QuickSort<T>(data, 0, data.Length - 1, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_data;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_data;
		NullCheck(L_1);
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_2 = ___1_compare;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<System.Object>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisRuntimeObject_mAAA1DBAA4A0A535AEAFF0BDE59F16D9907F96DEE_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int diff = end - start;
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (diff < 8)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_7 = ___3_compare;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// return;
		return;
	}

IL_0017:
	{
		// if (start < end)
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_13 = ___3_compare;
		int32_t L_14;
		L_14 = ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_14;
		// if (pivot >= 1)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_19 = ___3_compare;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0032:
	{
		// if (pivot + 1 < end)
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_25 = ___3_compare;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int diff = end - start;
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (diff < 8)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_7 = ___3_compare;
		((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// return;
		return;
	}

IL_0017:
	{
		// if (start < end)
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_13 = ___3_compare;
		int32_t L_14;
		L_14 = ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_14;
		// if (pivot >= 1)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___3_compare;
		((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0032:
	{
		// if (pivot + 1 < end)
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_25 = ___3_compare;
		((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int diff = end - start;
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (diff < 8)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_7 = ___3_compare;
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// return;
		return;
	}

IL_0017:
	{
		// if (start < end)
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_13 = ___3_compare;
		int32_t L_14;
		L_14 = ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_14;
		// if (pivot >= 1)
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___3_compare;
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0032:
	{
		// if (pivot + 1 < end)
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_25 = ___3_compare;
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___1_channel;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___1_channel;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___1_channel;
		int32_t L_21 = ___2_format;
		int32_t L_22 = ___3_dim;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_23 = ___0_buffer;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m411198D0CF31164FFCB234D8033BE5FAC82EEED1(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95(_thisAdjusted, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color32>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___1_channel;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___1_channel;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___1_channel;
		int32_t L_21 = ___2_format;
		int32_t L_22 = ___3_dim;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_23 = ___0_buffer;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m411198D0CF31164FFCB234D8033BE5FAC82EEED1(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9(_thisAdjusted, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___1_channel;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___1_channel;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___1_channel;
		int32_t L_21 = ___2_format;
		int32_t L_22 = ___3_dim;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_23 = ___0_buffer;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m411198D0CF31164FFCB234D8033BE5FAC82EEED1(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E(_thisAdjusted, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___1_channel;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___1_channel;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___1_channel;
		int32_t L_21 = ___2_format;
		int32_t L_22 = ___3_dim;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_23 = ___0_buffer;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m411198D0CF31164FFCB234D8033BE5FAC82EEED1(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811(_thisAdjusted, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___1_channel;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___1_channel;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___1_channel;
		int32_t L_21 = ___2_format;
		int32_t L_22 = ___3_dim;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_23 = ___0_buffer;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m411198D0CF31164FFCB234D8033BE5FAC82EEED1(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___0_buffer, int32_t ___1_channel, int32_t ___2_format, int32_t ___3_dim, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1(_thisAdjusted, ___0_buffer, ___1_channel, ___2_format, ___3_dim, method);
}
// System.Void GameFramework.Network.NetworkManager/NetworkChannelBase::Send<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_gshared (NetworkChannelBase_t2F483B960E0252DA2DFC58AEEE31900F4C33F946* __this, RuntimeObject* ___0_packet, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C23D2DCC01A74390EC3EE20DD1B0BFE5B056D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1016F04C691B8C889B219F1776D5F05B0B5A9ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCDCD73749685BF6B077749DF549FC46C3116C5A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* V_3 = NULL;
	bool V_4 = false;
	{
		// if (m_Socket == null)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)__this->___m_Socket_8;
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// string errorMessage = "You must connect first.";
		V_0 = _stringLiteral88C23D2DCC01A74390EC3EE20DD1B0BFE5B056D4;
		// if (NetworkChannelError != null)
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_1 = (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91*)__this->___NetworkChannelError_19;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// NetworkChannelError(this, NetworkErrorCode.SendError, SocketError.Success, errorMessage);
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_2 = (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91*)__this->___NetworkChannelError_19;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		GameFrameworkAction_4_Invoke_m2BFE86941508CCEF10D53325CD310AA98A4C13F9_inline(L_2, __this, (uint8_t)4, (int32_t)0, L_3, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// throw new GameFrameworkException(errorMessage);
		String_t* L_4 = V_0;
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_RuntimeMethod_var)));
	}

IL_002d:
	{
		// if (!m_Active)
		bool L_6 = (bool)__this->___m_Active_14;
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		// string errorMessage = "Socket is not active.";
		V_1 = _stringLiteralDCDCD73749685BF6B077749DF549FC46C3116C5A;
		// if (NetworkChannelError != null)
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_7 = (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91*)__this->___NetworkChannelError_19;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// NetworkChannelError(this, NetworkErrorCode.SendError, SocketError.Success, errorMessage);
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_8 = (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91*)__this->___NetworkChannelError_19;
		String_t* L_9 = V_1;
		NullCheck(L_8);
		GameFrameworkAction_4_Invoke_m2BFE86941508CCEF10D53325CD310AA98A4C13F9_inline(L_8, __this, (uint8_t)4, (int32_t)0, L_9, NULL);
		// return;
		return;
	}

IL_0053:
	{
		// throw new GameFrameworkException(errorMessage);
		String_t* L_10 = V_1;
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_11 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_RuntimeMethod_var)));
	}

IL_005a:
	{
		// if (packet == null)
		RuntimeObject* L_12 = ___0_packet;
		if (L_12)
		{
			goto IL_0087;
		}
	}
	{
		// string errorMessage = "Packet is invalid.";
		V_2 = _stringLiteralB1016F04C691B8C889B219F1776D5F05B0B5A9ED;
		// if (NetworkChannelError != null)
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_13 = (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91*)__this->___NetworkChannelError_19;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// NetworkChannelError(this, NetworkErrorCode.SendError, SocketError.Success, errorMessage);
		GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91* L_14 = (GameFrameworkAction_4_t824CB119BC70BEED1FF80E766CC6BF5D3DFABF91*)__this->___NetworkChannelError_19;
		String_t* L_15 = V_2;
		NullCheck(L_14);
		GameFrameworkAction_4_Invoke_m2BFE86941508CCEF10D53325CD310AA98A4C13F9_inline(L_14, __this, (uint8_t)4, (int32_t)0, L_15, NULL);
		// return;
		return;
	}

IL_0080:
	{
		// throw new GameFrameworkException(errorMessage);
		String_t* L_16 = V_2;
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_17 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkChannelBase_Send_TisRuntimeObject_mB33BB58C2A738B4770528058F6E17D6A1B9542A8_RuntimeMethod_var)));
	}

IL_0087:
	{
		// lock (m_SendPacketPool)
		Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* L_18 = (Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA*)__this->___m_SendPacketPool_2;
		V_3 = L_18;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ac:
			{// begin finally (depth: 1)
				{
					bool L_19 = V_4;
					if (!L_19)
					{
						goto IL_00b6;
					}
				}
				{
					Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* L_20 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_20, NULL);
				}

IL_00b6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* L_21 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_21, (&V_4), NULL);
			// m_SendPacketPool.Enqueue(packet);
			Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA* L_22 = (Queue_1_t660F5D873E35074D377EE57EBB64DBE1CFBF84EA*)__this->___m_SendPacketPool_2;
			RuntimeObject* L_23 = ___0_packet;
			NullCheck(L_22);
			Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100(L_22, (Packet_t124E03651F5A3D0B1228E93821CFBCF047F83037*)L_23, Queue_1_Enqueue_m3E9A9BC229AC247094ED26063E390573F5289100_RuntimeMethod_var);
			// }
			goto IL_00b7;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		// }
		return;
	}
}
// T GameFramework.ReferencePool/ReferenceCollection::Acquire<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReferenceCollection_Acquire_TisRuntimeObject_mFC91EE3023F34D155F8CCB001451E6F7D80F6F18_gshared (ReferenceCollection_t9862D83417541AB40CB4883E998C072F1DD1D8C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// if (typeof(T) != m_ReferenceType)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = (Type_t*)__this->___m_ReferenceType_1;
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// throw new GameFrameworkException("Type is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_4 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceCollection_Acquire_TisRuntimeObject_mFC91EE3023F34D155F8CCB001451E6F7D80F6F18_RuntimeMethod_var)));
	}

IL_0022:
	{
		// m_UsingReferenceCount++;
		int32_t L_5 = (int32_t)__this->___m_UsingReferenceCount_2;
		__this->___m_UsingReferenceCount_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// m_AcquireReferenceCount++;
		int32_t L_6 = (int32_t)__this->___m_AcquireReferenceCount_3;
		__this->___m_AcquireReferenceCount_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// lock (m_References)
		Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_7 = (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*)__this->___m_References_0;
		V_0 = L_7;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				{
					bool L_8 = V_1;
					if (!L_8)
					{
						goto IL_007b;
					}
				}
				{
					Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_9 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_9, NULL);
				}

IL_007b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_10 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_10, (&V_1), NULL);
				// if (m_References.Count > 0)
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_11 = (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*)__this->___m_References_0;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_inline(L_11, Queue_1_get_Count_mDCC20CE17590EB2B399F38C907F944C3AFA823FC_RuntimeMethod_var);
				if ((((int32_t)L_12) <= ((int32_t)0)))
				{
					goto IL_0070_1;
				}
			}
			{
				// return (T)m_References.Dequeue();
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_13 = (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*)__this->___m_References_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD(L_13, Queue_1_Dequeue_mF40DBC082F8E0F3CE77C04320BEF8F3EA26F90CD_RuntimeMethod_var);
				V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0090;
			}

IL_0070_1:
			{
				// }
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// m_AddReferenceCount++;
		int32_t L_15 = (int32_t)__this->___m_AddReferenceCount_5;
		__this->___m_AddReferenceCount_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		// return new T();
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}

IL_0090:
	{
		// }
		RuntimeObject* L_17 = V_2;
		return L_17;
	}
}
// System.Void GameFramework.ReferencePool/ReferenceCollection::Add<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceCollection_Add_TisRuntimeObject_m52487B44E99B109633F1737F81949ADAC9AEAA6C_gshared (ReferenceCollection_t9862D83417541AB40CB4883E998C072F1DD1D8C1* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* V_0 = NULL;
	bool V_1 = false;
	{
		// if (typeof(T) != m_ReferenceType)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = (Type_t*)__this->___m_ReferenceType_1;
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// throw new GameFrameworkException("Type is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_4 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF10066384A5432A4A413987D5CF4EE964DA0488)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceCollection_Add_TisRuntimeObject_m52487B44E99B109633F1737F81949ADAC9AEAA6C_RuntimeMethod_var)));
	}

IL_0022:
	{
		// lock (m_References)
		Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_5 = (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*)__this->___m_References_0;
		V_0 = L_5;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_1;
					if (!L_6)
					{
						goto IL_006c;
					}
				}
				{
					Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_7 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_7, NULL);
				}

IL_006c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_8 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_8, (&V_1), NULL);
				// m_AddReferenceCount += count;
				int32_t L_9 = (int32_t)__this->___m_AddReferenceCount_5;
				int32_t L_10 = ___0_count;
				__this->___m_AddReferenceCount_5 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
				goto IL_0058_1;
			}

IL_0043_1:
			{
				// m_References.Enqueue(new T());
				Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A* L_11 = (Queue_1_t371C9C362EF054EFB615F74EC341FBA2BB58FE1A*)__this->___m_References_0;
				RuntimeObject* L_12;
				L_12 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
				NullCheck(L_11);
				Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6(L_11, (RuntimeObject*)L_12, Queue_1_Enqueue_mACEC48F10658928DF78D7A74538882D9B8D608E6_RuntimeMethod_var);
			}

IL_0058_1:
			{
				// while (count-- > 0)
				int32_t L_13 = ___0_count;
				int32_t L_14 = L_13;
				___0_count = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
				if ((((int32_t)L_14) > ((int32_t)0)))
				{
					goto IL_0043_1;
				}
			}
			{
				// }
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::AddNewRenderGraphResource<System.Object>(ResType&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mB9040DF97633813729CADB454AAEAF31E23C7E91_gshared (RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE* __this, RuntimeObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		// int result = resourceArray.size;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_0 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_0, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		V_0 = L_1;
		// resourceArray.Resize(resourceArray.size + 1, true);
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_2 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_3 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_3, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		NullCheck(L_2);
		DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		// if (resourceArray[result] == null)
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_5 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_7;
		L_7 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_5, L_6, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_8 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_7);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		// resourceArray[result] = new ResType();
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_9 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_11;
		L_11 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_9, L_10, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_12);
	}

IL_004b:
	{
		// outRes = resourceArray[result] as ResType;
		RuntimeObject** L_13 = ___0_outRes;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_14 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_16;
		L_16 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_14, L_15, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_17 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_16);
		*(RuntimeObject**)L_13 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1))));
		// outRes.Reset(pooledResource ? pool : null);
		RuntimeObject** L_18 = ___0_outRes;
		bool L_19 = ___1_pooledResource;
		G_B3_0 = L_18;
		if (L_19)
		{
			G_B4_0 = L_18;
			goto IL_006f;
		}
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_0075;
	}

IL_006f:
	{
		IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* L_20 = (IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)__this->___pool_2;
		G_B5_0 = L_20;
		G_B5_1 = G_B4_0;
	}

IL_0075:
	{
		NullCheck((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* >::Invoke(4 /* System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::Reset(UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool) */, (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1), G_B5_0);
		// return result;
		int32_t L_21 = V_0;
		return L_21;
	}
}
// T GameFramework.Utility/Json::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_ToObject_TisRuntimeObject_mE14A9E605410C6B807822C4D9D724697175BFFCE_gshared (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_JsonHelper == null)
		RuntimeObject* L_0 = ((Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_StaticFields*)il2cpp_codegen_static_fields_for(Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_il2cpp_TypeInfo_var))->___s_JsonHelper_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new GameFrameworkException("JSON helper is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC346A6506729A42044B13A196B02DC0BFFA76A9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Json_ToObject_TisRuntimeObject_mE14A9E605410C6B807822C4D9D724697175BFFCE_RuntimeMethod_var)));
	}

IL_0012:
	{
	}
	try
	{// begin try (depth: 1)
		// return s_JsonHelper.ToObject<T>(json);
		RuntimeObject* L_2 = ((Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_StaticFields*)il2cpp_codegen_static_fields_for(Json_tF5C88BC9F94963C761DC65B673D3F317F838A8E6_il2cpp_TypeInfo_var))->___s_JsonHelper_0;
		String_t* L_3 = ___0_json;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_2, L_3);
		V_0 = L_4;
		goto IL_003e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0021:
	{// begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// if (exception is GameFrameworkException)
			Exception_t* L_5 = V_1;
			if (!((GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)IsInstClass((RuntimeObject*)L_5, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)))))
			{
				goto IL_002c;
			}
		}
		{
			// throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_002c:
		{
			// throw new GameFrameworkException(Text.Format("Can not convert to object with exception '{0}'.", exception), exception);
			Exception_t* L_6 = V_1;
			String_t* L_7;
			L_7 = Text_Format_TisException_t_m89DC02C9DD04BEBD153F890898794038E1A0D81C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB348652F8B17FE2CDD3FC15246E01815A16B7730)), L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisException_t_m89DC02C9DD04BEBD153F890898794038E1A0D81C_RuntimeMethod_var)));
			Exception_t* L_8 = V_1;
			GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
			NullCheck(L_9);
			GameFrameworkException__ctor_mA8FD70857BDEEA3C78BF9B13D62ED99E394143F5(L_9, L_7, L_8, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Json_ToObject_TisRuntimeObject_mE14A9E605410C6B807822C4D9D724697175BFFCE_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

IL_003e:
	{
		// }
		RuntimeObject* L_10 = V_0;
		return L_10;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<System.Object>(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_BytesToStructure_TisRuntimeObject_m8D806FE4475275A5159EA21A1CDEFCE44EC78FD0_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)), buffer, 0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<System.Object>(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_BytesToStructure_TisRuntimeObject_mB26D04720C245D8F3FFBE2711AA35D934ED09610_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)), buffer, startIndex);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int32_t L_4 = ___1_startIndex;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<System.Object>(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_BytesToStructure_TisRuntimeObject_mBB99F1C77B0D9D7A634CDEB6BF471FDC6F59370E_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(structureSize, buffer, 0);
		int32_t L_0 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/BlockData>(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mB5336313423C54579D9040EBB06A039B93E23F80_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(structureSize, buffer, 0);
		int32_t L_0 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 L_2;
		L_2 = ((  BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/HeaderData>(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_mAE90BD5A9C07872F661470AE4ED924F58230A9F6_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(structureSize, buffer, 0);
		int32_t L_0 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 L_2;
		L_2 = ((  HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/StringData>(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m8E9F0EFD720EAFBFCAB36C63A2A6A5CD894B6058_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BytesToStructure<T>(structureSize, buffer, 0);
		int32_t L_0 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_buffer;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 L_2;
		L_2 = ((  StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 (*) (int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<System.Object>(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___0_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Buffer is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___2_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > buffer.Length)
		int32_t L_6 = ___2_startIndex;
		int32_t L_7 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Buffer length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisRuntimeObject_mE808E690ECA8A3C2FD0A5DA5A1FC7B161D12EBC5_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.Copy(buffer, startIndex, s_CachedHGlobalPtr, structureSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_buffer;
		int32_t L_12 = ___2_startIndex;
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		int32_t L_14 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, L_12, L_13, L_14, NULL);
		// return (T)System.Runtime.InteropServices.Marshal.PtrToStructure(s_CachedHGlobalPtr, typeof(T));
		intptr_t L_15 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_15, L_17, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/BlockData>(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___0_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Buffer is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___2_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > buffer.Length)
		int32_t L_6 = ___2_startIndex;
		int32_t L_7 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Buffer length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_mA9FE742D530AE1F9EB46658249AC88DA5F3B6FE5_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.Copy(buffer, startIndex, s_CachedHGlobalPtr, structureSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_buffer;
		int32_t L_12 = ___2_startIndex;
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		int32_t L_14 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, L_12, L_13, L_14, NULL);
		// return (T)System.Runtime.InteropServices.Marshal.PtrToStructure(s_CachedHGlobalPtr, typeof(T));
		intptr_t L_15 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_15, L_17, NULL);
		return ((*(BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27*)((BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27*)(BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27*)UnBox(L_18, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/HeaderData>(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___0_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Buffer is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___2_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > buffer.Length)
		int32_t L_6 = ___2_startIndex;
		int32_t L_7 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Buffer length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m7C370B26F9AEF2E038B0EDF58C89B0A558EADDEC_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.Copy(buffer, startIndex, s_CachedHGlobalPtr, structureSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_buffer;
		int32_t L_12 = ___2_startIndex;
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		int32_t L_14 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, L_12, L_13, L_14, NULL);
		// return (T)System.Runtime.InteropServices.Marshal.PtrToStructure(s_CachedHGlobalPtr, typeof(T));
		intptr_t L_15 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_15, L_17, NULL);
		return ((*(HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076*)((HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076*)(HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076*)UnBox(L_18, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// T GameFramework.Utility/Marshal::BytesToStructure<GameFramework.FileSystem.FileSystem/StringData>(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_gshared (int32_t ___0_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___0_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (buffer == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Buffer is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CCED4563BB8DC2678BB73B7D1083B17508D9DA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___2_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > buffer.Length)
		int32_t L_6 = ___2_startIndex;
		int32_t L_7 = ___0_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Buffer length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A81955D1C6476EAB85E51DCDAD86C18DF784BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_BytesToStructure_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m71459719DEF131D63AD6C3683C2774B7A3A352FF_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.Copy(buffer, startIndex, s_CachedHGlobalPtr, structureSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_buffer;
		int32_t L_12 = ___2_startIndex;
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		int32_t L_14 = ___0_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, L_12, L_13, L_14, NULL);
		// return (T)System.Runtime.InteropServices.Marshal.PtrToStructure(s_CachedHGlobalPtr, typeof(T));
		intptr_t L_15 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeObject* L_18;
		L_18 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_15, L_17, NULL);
		return ((*(StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7*)((StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7*)(StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7*)UnBox(L_18, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
// System.Byte[] GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Marshal_StructureToBytes_TisRuntimeObject_m7250FF79F879B6829A8E6B7F21AFA9A87BED0DFB_gshared (RuntimeObject* ___0_structure, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return StructureToBytes(structure, System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)));
		RuntimeObject* L_0 = ___0_structure;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Byte[] GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Marshal_StructureToBytes_TisRuntimeObject_m7B7316394C4F6E01623E388CC9007D6E70C93274_gshared (RuntimeObject* ___0_structure, int32_t ___1_structureSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_m7B7316394C4F6E01623E388CC9007D6E70C93274_RuntimeMethod_var)));
	}

IL_000f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_2 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_2, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		RuntimeObject* L_3 = ___0_structure;
		intptr_t L_4 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, L_4, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// byte[] result = new byte[structureSize];
		int32_t L_5 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, 0, structureSize);
		intptr_t L_7 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_7, L_8, 0, L_9, NULL);
		// return result;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisRuntimeObject_mCFEE5EE51ED22BE009D36120D499C07ED9D58A8B_gshared (RuntimeObject* ___0_structure, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)), result, 0);
		RuntimeObject* L_0 = ___0_structure;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisRuntimeObject_m82B4B406E8168F8F63B56B90F85351FFBA99A992_gshared (RuntimeObject* ___0_structure, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_result, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, System.Runtime.InteropServices.Marshal.SizeOf(typeof(T)), result, startIndex);
		RuntimeObject* L_0 = ___0_structure;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_result;
		int32_t L_5 = ___2_startIndex;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisRuntimeObject_mC8F2085208EF87DADC3A7068DF14EE0EABA2DE02_gshared (RuntimeObject* ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, structureSize, result, 0);
		RuntimeObject* L_0 = ___0_structure;
		int32_t L_1 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/BlockData>(T,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m21F6A474DE309F11CB0EEE35FA4AD43B8BE1731C_gshared (BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, structureSize, result, 0);
		BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 L_0 = ___0_structure;
		int32_t L_1 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/HeaderData>(T,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_mDA4DD16A135AD36B3C74DBE7A829EA62759ED6AF_gshared (HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, structureSize, result, 0);
		HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 L_0 = ___0_structure;
		int32_t L_1 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/StringData>(T,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_m817144F37D217F47FF1B10BB072910EFAD52A0EC_gshared (StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StructureToBytes(structure, structureSize, result, 0);
		StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 L_0 = ___0_structure;
		int32_t L_1 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		((  void (*) (StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<System.Object>(T,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_gshared (RuntimeObject* ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, int32_t ___3_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (result == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Result is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___3_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > result.Length)
		int32_t L_6 = ___3_startIndex;
		int32_t L_7 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_result;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Result length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisRuntimeObject_mA28003ABA1F4E4463DA223107553A34C0DB5CD7D_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		RuntimeObject* L_11 = ___0_structure;
		intptr_t L_12 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, startIndex, structureSize);
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_result;
		int32_t L_15 = ___3_startIndex;
		int32_t L_16 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/BlockData>(T,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_gshared (BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, int32_t ___3_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (result == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Result is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___3_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > result.Length)
		int32_t L_6 = ___3_startIndex;
		int32_t L_7 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_result;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Result length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisBlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27_m74B2A211C1E6794B012912B7CC434E8C1E3462F5_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27 L_11 = ___0_structure;
		intptr_t L_12 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (BlockData_t5E8AF867053E9783DDB3C1BBBD48D346BE738E27, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, startIndex, structureSize);
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_result;
		int32_t L_15 = ___3_startIndex;
		int32_t L_16 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/HeaderData>(T,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_gshared (HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, int32_t ___3_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (result == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Result is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___3_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > result.Length)
		int32_t L_6 = ___3_startIndex;
		int32_t L_7 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_result;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Result length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisHeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076_m133D407856B6BD62579AC4AC194DA7727041E02E_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076 L_11 = ___0_structure;
		intptr_t L_12 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (HeaderData_tF9866C9B8C6C3494FC2BF155D8F8A6B0D591E076, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, startIndex, structureSize);
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_result;
		int32_t L_15 = ___3_startIndex;
		int32_t L_16 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void GameFramework.Utility/Marshal::StructureToBytes<GameFramework.FileSystem.FileSystem/StringData>(T,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_gshared (StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 ___0_structure, int32_t ___1_structureSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_result, int32_t ___3_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (structureSize < 0)
		int32_t L_0 = ___1_structureSize;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new GameFrameworkException("Structure size is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1985E6F2CD7CCBF956B222847A7667A0962481F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (result == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_result;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// throw new GameFrameworkException("Result is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_3 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91ADEC77F9553B067353DCA64028B0BF6042AB96)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var)));
	}

IL_001d:
	{
		// if (startIndex < 0)
		int32_t L_4 = ___3_startIndex;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// throw new GameFrameworkException("Start index is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_5 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EB2D57F08B8B41B01426EE72A13E09286FE1F0C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if (startIndex + structureSize > result.Length)
		int32_t L_6 = ___3_startIndex;
		int32_t L_7 = ___1_structureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_result;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// throw new GameFrameworkException("Result length is not enough.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_9 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE14B31787E4577DCE475C51FFECBC5F6BCDD6057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_StructureToBytes_TisStringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7_mDFC3088B00FC55A0939A8939B31802F31412F30C_RuntimeMethod_var)));
	}

IL_003f:
	{
		// EnsureCachedHGlobalSize(structureSize);
		int32_t L_10 = ___1_structureSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var);
		Marshal_EnsureCachedHGlobalSize_m570DC20AB9D4866FFAF64CFE03CC9B00D8D3A36B(L_10, NULL);
		// System.Runtime.InteropServices.Marshal.StructureToPtr(structure, s_CachedHGlobalPtr, true);
		StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7 L_11 = ___0_structure;
		intptr_t L_12 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		((  void (*) (StringData_tCCBB20271B9830E5BF42E214AE2AA9AF33C2EEF7, intptr_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, L_12, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// System.Runtime.InteropServices.Marshal.Copy(s_CachedHGlobalPtr, result, startIndex, structureSize);
		intptr_t L_13 = ((Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_StaticFields*)il2cpp_codegen_static_fields_for(Marshal_t0A36839B23198B34A1FEC239AE0B793725DD608E_il2cpp_TypeInfo_var))->___s_CachedHGlobalPtr_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_result;
		int32_t L_15 = ___3_startIndex;
		int32_t L_16 = ___1_structureSize;
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Byte>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m391FB5D0A1B8F831E6AE53CDC83BE1ABB2F18231_gshared (String_t* ___0_format, uint8_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m391FB5D0A1B8F831E6AE53CDC83BE1ABB2F18231_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		uint8_t L_4 = ___1_arg;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		uint8_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, uint8_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.ByteEnum>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m51EC38A17627C06A95F02A2EE2F803BFCCAF38F7_gshared (String_t* ___0_format, uint8_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m51EC38A17627C06A95F02A2EE2F803BFCCAF38F7_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		uint8_t L_4 = ___1_arg;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		uint8_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, uint8_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94E320D1D48183917F331AC93BACA9824664B783_gshared (String_t* ___0_format, int32_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94E320D1D48183917F331AC93BACA9824664B783_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		int32_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32Enum>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF24606921ED479BA7BB4C9D1BD91E84B67511A6_gshared (String_t* ___0_format, int32_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF24606921ED479BA7BB4C9D1BD91E84B67511A6_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		int32_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int64>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8086EE3BE354E2D538FDA109FB5FA20935826354_gshared (String_t* ___0_format, int64_t ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8086EE3BE354E2D538FDA109FB5FA20935826354_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		int64_t L_4 = ___1_arg;
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		int64_t L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, int64_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_gshared (String_t* ___0_format, RuntimeObject* ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_mA170485C1C17EF6CA90ACA1A2D749B7CC524FD6E_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_4, NULL);
		return L_5;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_6 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_7 = ___0_format;
		RuntimeObject* L_8 = ___1_arg;
		NullCheck(L_6);
		String_t* L_9;
		L_9 = GenericInterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_6, L_7, L_8);
		return L_9;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Single>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDC1C2E6702466CE0051154A5B55DE5B2CB86562F_gshared (String_t* ___0_format, float ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDC1C2E6702466CE0051154A5B55DE5B2CB86562F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		float L_4 = ___1_arg;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		float L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<GameFramework.TypeNamePair>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_m1A9E5816695A00231DF699BA560FCEE85E1FFFC6_gshared (String_t* ___0_format, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 ___1_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_m1A9E5816695A00231DF699BA560FCEE85E1FFFC6_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return string.Format(format, arg);
		String_t* L_3 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_4 = ___1_arg;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_6, NULL);
		return L_7;
	}

IL_0022:
	{
		// return s_TextHelper.Format(format, arg);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_10 = ___1_arg;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker2< String_t*, String_t*, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Int32>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m111B38E1A4C3554A5FA24EA6654A02F13DBE9E05_gshared (String_t* ___0_format, int32_t ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m111B38E1A4C3554A5FA24EA6654A02F13DBE9E05_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		int32_t L_7 = ___2_arg2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		int32_t L_13 = ___1_arg1;
		int32_t L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Int64>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD9D4F7F02D6767F97892BB861DB7C829A9042584_gshared (String_t* ___0_format, int32_t ___1_arg1, int64_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD9D4F7F02D6767F97892BB861DB7C829A9042584_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		int64_t L_7 = ___2_arg2;
		int64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		int32_t L_13 = ___1_arg1;
		int64_t L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, int64_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF699B6A2C102A8632E5F723D7FCA6B03A5E839E4_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF699B6A2C102A8632E5F723D7FCA6B03A5E839E4_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		int32_t L_11 = ___1_arg1;
		RuntimeObject* L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,GameFramework.TypeNamePair>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_mF32D94494471499DB831C82B04B7303ECBA4696E_gshared (String_t* ___0_format, int32_t ___1_arg1, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_mF32D94494471499DB831C82B04B7303ECBA4696E_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_7 = ___2_arg2;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		int32_t L_13 = ___1_arg1;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int32_t, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int64,System.Int64>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m90248084624C469E9D2D41BD77D5794A6B5163CF_gshared (String_t* ___0_format, int64_t ___1_arg1, int64_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m90248084624C469E9D2D41BD77D5794A6B5163CF_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		int64_t L_4 = ___1_arg1;
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		int64_t L_7 = ___2_arg2;
		int64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		int64_t L_13 = ___1_arg1;
		int64_t L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, int64_t, int64_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.ByteEnum>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m2846A9B6E154C846A5456D613363A1FA65CABA35_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, uint8_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m2846A9B6E154C846A5456D613363A1FA65CABA35_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		uint8_t L_5 = ___2_arg2;
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_4, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		RuntimeObject* L_11 = ___1_arg1;
		uint8_t L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, uint8_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Int32>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD1DA29B9D05ED7248964FBE9067DAFEE94B51F1_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, int32_t ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD1DA29B9D05ED7248964FBE9067DAFEE94B51F1_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		int32_t L_5 = ___2_arg2;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_4, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		RuntimeObject* L_11 = ___1_arg1;
		int32_t L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_mEC3E4C8E4E6EB974EDBE4B9F5307CE175382EBAD_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_mEC3E4C8E4E6EB974EDBE4B9F5307CE175382EBAD_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		RuntimeObject* L_5 = ___2_arg2;
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_7 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_8 = ___0_format;
		RuntimeObject* L_9 = ___1_arg1;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_7);
		String_t* L_11;
		L_11 = GenericInterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, L_9, L_10);
		return L_11;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Single,System.Object>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_m86F50B130DB8AFB82CF2150CDB94601F858D5A9F_gshared (String_t* ___0_format, float ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_m86F50B130DB8AFB82CF2150CDB94601F858D5A9F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		float L_4 = ___1_arg1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		float L_11 = ___1_arg1;
		RuntimeObject* L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, float, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Single,System.Single>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52EBF3611D2BB71A87ABA4C195A67AB8EF07538A_gshared (String_t* ___0_format, float ___1_arg1, float ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52EBF3611D2BB71A87ABA4C195A67AB8EF07538A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		float L_4 = ___1_arg1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		float L_7 = ___2_arg2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		float L_13 = ___1_arg1;
		float L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, float, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<GameFramework.TypeNamePair,System.Object>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_m253C99776E4DD3390140A597D9124F8680A81B42_gshared (String_t* ___0_format, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_m253C99776E4DD3390140A597D9124F8680A81B42_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_4 = ___1_arg1;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_7, NULL);
		return L_8;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_9 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_10 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_11 = ___1_arg1;
		RuntimeObject* L_12 = ___2_arg2;
		NullCheck(L_9);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker3< String_t*, String_t*, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<UnityEngine.Vector3,System.Single>(System.String,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6A04065A83335FAE1846AB0D70DA731A9A557F41_gshared (String_t* ___0_format, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg1, float ___2_arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6A04065A83335FAE1846AB0D70DA731A9A557F41_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// return string.Format(format, arg1, arg2);
		String_t* L_3 = ___0_format;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_arg1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		float L_7 = ___2_arg2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_0028:
	{
		// return s_TextHelper.Format(format, arg1, arg2);
		RuntimeObject* L_11 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_12 = ___0_format;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_arg1;
		float L_14 = ___2_arg2;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker3< String_t*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Int32,System.Int32>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m52A69D03D98D3EEC3C7EB9B81537EDB1EFE55BD2_gshared (String_t* ___0_format, int32_t ___1_arg1, int32_t ___2_arg2, int32_t ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m52A69D03D98D3EEC3C7EB9B81537EDB1EFE55BD2_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		int32_t L_7 = ___2_arg2;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		int32_t L_10 = ___3_arg3;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_9, L_12, NULL);
		return L_13;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_14 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_15 = ___0_format;
		int32_t L_16 = ___1_arg1;
		int32_t L_17 = ___2_arg2;
		int32_t L_18 = ___3_arg3;
		NullCheck(L_14);
		String_t* L_19;
		L_19 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, int32_t, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_14, L_15, L_16, L_17, L_18);
		return L_19;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object,System.DateTime>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m049AADEC5F8EA45BC0D19326C91E0BF981532693_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m049AADEC5F8EA45BC0D19326C91E0BF981532693_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_9);
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_7, L_10, NULL);
		return L_11;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_12 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_13 = ___0_format;
		int32_t L_14 = ___1_arg1;
		RuntimeObject* L_15 = ___2_arg2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16 = ___3_arg3;
		NullCheck(L_12);
		String_t* L_17;
		L_17 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_12, L_13, L_14, L_15, L_16);
		return L_17;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_m9561B3ACF5AD47C8DC5552EA79A6357BBAA3F43A_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_m9561B3ACF5AD47C8DC5552EA79A6357BBAA3F43A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		RuntimeObject* L_8 = ___3_arg3;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		int32_t L_12 = ___1_arg1;
		RuntimeObject* L_13 = ___2_arg2;
		RuntimeObject* L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Single,System.Single>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m750F30EEAEAF01A5094E168F840E2A338141A9DA_gshared (String_t* ___0_format, int32_t ___1_arg1, float ___2_arg2, float ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m750F30EEAEAF01A5094E168F840E2A338141A9DA_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		int32_t L_4 = ___1_arg1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		float L_7 = ___2_arg2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_8);
		float L_10 = ___3_arg3;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_9, L_12, NULL);
		return L_13;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_14 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_15 = ___0_format;
		int32_t L_16 = ___1_arg1;
		float L_17 = ___2_arg2;
		float L_18 = ___3_arg3;
		NullCheck(L_14);
		String_t* L_19;
		L_19 = GenericInterfaceFuncInvoker4< String_t*, String_t*, int32_t, float, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_14, L_15, L_16, L_17, L_18);
		return L_19;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.ByteEnum,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_m64591640856351D2C22CC9AA6EF9C3BDFD8FB4D1_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, uint8_t ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_m64591640856351D2C22CC9AA6EF9C3BDFD8FB4D1_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		uint8_t L_5 = ___2_arg2;
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_6);
		RuntimeObject* L_8 = ___3_arg3;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_7, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_arg1;
		uint8_t L_13 = ___2_arg2;
		RuntimeObject* L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Int32,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m6294215B26F6A414BC1D09D1DF3FB338B316E18A_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, int32_t ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m6294215B26F6A414BC1D09D1DF3FB338B316E18A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		int32_t L_5 = ___2_arg2;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_6);
		RuntimeObject* L_8 = ___3_arg3;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_7, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_arg1;
		int32_t L_13 = ___2_arg2;
		RuntimeObject* L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Int32>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m367C860FA20A6EBF9231C87F052D8122E87312BA_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, int32_t ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m367C860FA20A6EBF9231C87F052D8122E87312BA_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		RuntimeObject* L_5 = ___2_arg2;
		int32_t L_6 = ___3_arg3;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_5, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		RuntimeObject* L_12 = ___1_arg1;
		RuntimeObject* L_13 = ___2_arg2;
		int32_t L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m47EF871475180EEC58F272E6A7048CF250050505_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m47EF871475180EEC58F272E6A7048CF250050505_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		RuntimeObject* L_4 = ___1_arg1;
		RuntimeObject* L_5 = ___2_arg2;
		RuntimeObject* L_6 = ___3_arg3;
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_8 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_9 = ___0_format;
		RuntimeObject* L_10 = ___1_arg1;
		RuntimeObject* L_11 = ___2_arg2;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_8);
		String_t* L_13;
		L_13 = GenericInterfaceFuncInvoker4< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_8, L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.String GameFramework.Utility/Text::Format<GameFramework.TypeNamePair,System.Object,System.Object>(System.String,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_TisRuntimeObject_m73E973DC6D1FBB1FCC7830474965718F2DA99D74_gshared (String_t* ___0_format, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisTypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28_TisRuntimeObject_TisRuntimeObject_m73E973DC6D1FBB1FCC7830474965718F2DA99D74_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3);
		String_t* L_3 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_4 = ___1_arg1;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_5);
		RuntimeObject* L_7 = ___2_arg2;
		RuntimeObject* L_8 = ___3_arg3;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_3, L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3);
		RuntimeObject* L_10 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_11 = ___0_format;
		TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28 L_12 = ___1_arg1;
		RuntimeObject* L_13 = ___2_arg2;
		RuntimeObject* L_14 = ___3_arg3;
		NullCheck(L_10);
		String_t* L_15;
		L_15 = GenericInterfaceFuncInvoker4< String_t*, String_t*, TypeNamePair_t621A77F09DEE2F84B37ADBF8878205AE0487EE28, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_10, L_11, L_12, L_13, L_14);
		return L_15;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object,System.Object,System.DateTime>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mC2EFA85B7E3F3768670238CB381BA176F6FA336B_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mC2EFA85B7E3F3768670238CB381BA176F6FA336B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___1_arg1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_17;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_18 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_19 = ___0_format;
		int32_t L_20 = ___1_arg1;
		RuntimeObject* L_21 = ___2_arg2;
		RuntimeObject* L_22 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_23 = ___4_arg4;
		NullCheck(L_18);
		String_t* L_24;
		L_24 = GenericInterfaceFuncInvoker5< String_t*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_18, L_19, L_20, L_21, L_22, L_23);
		return L_24;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m15D528D19480CE6F50864B79EE5617F7BCF8A2B0_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m15D528D19480CE6F50864B79EE5617F7BCF8A2B0_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___1_arg1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___4_arg4;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_15;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_16 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_17 = ___0_format;
		int32_t L_18 = ___1_arg1;
		RuntimeObject* L_19 = ___2_arg2;
		RuntimeObject* L_20 = ___3_arg3;
		RuntimeObject* L_21 = ___4_arg4;
		NullCheck(L_16);
		String_t* L_22;
		L_22 = GenericInterfaceFuncInvoker5< String_t*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_16, L_17, L_18, L_19, L_20, L_21);
		return L_22;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Boolean,System.Object>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_m2F92755AB4044477697B9238B4DAEE9CC1189A23_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, bool ___3_arg3, RuntimeObject* ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_m2F92755AB4044477697B9238B4DAEE9CC1189A23_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		bool L_10 = ___3_arg3;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		RuntimeObject* L_14 = ___4_arg4;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_15;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_16 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_17 = ___0_format;
		RuntimeObject* L_18 = ___1_arg1;
		RuntimeObject* L_19 = ___2_arg2;
		bool L_20 = ___3_arg3;
		RuntimeObject* L_21 = ___4_arg4;
		NullCheck(L_16);
		String_t* L_22;
		L_22 = GenericInterfaceFuncInvoker5< String_t*, String_t*, RuntimeObject*, RuntimeObject*, bool, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_16, L_17, L_18, L_19, L_20, L_21);
		return L_22;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.ByteEnum,System.Object>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_mBB6008823036427823F90D880B5CDEB00834E6E8_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, uint8_t ___3_arg3, RuntimeObject* ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_TisRuntimeObject_mBB6008823036427823F90D880B5CDEB00834E6E8_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		uint8_t L_10 = ___3_arg3;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		RuntimeObject* L_14 = ___4_arg4;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_15;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_16 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_17 = ___0_format;
		RuntimeObject* L_18 = ___1_arg1;
		RuntimeObject* L_19 = ___2_arg2;
		uint8_t L_20 = ___3_arg3;
		RuntimeObject* L_21 = ___4_arg4;
		NullCheck(L_16);
		String_t* L_22;
		L_22 = GenericInterfaceFuncInvoker5< String_t*, String_t*, RuntimeObject*, RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_16, L_17, L_18, L_19, L_20, L_21);
		return L_22;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Int32,System.Object>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF2AB17260B34578F590EC0D134CC9333994C8AE6_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, int32_t ___3_arg3, RuntimeObject* ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_mF2AB17260B34578F590EC0D134CC9333994C8AE6_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		int32_t L_10 = ___3_arg3;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		RuntimeObject* L_14 = ___4_arg4;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_15;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_16 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_17 = ___0_format;
		RuntimeObject* L_18 = ___1_arg1;
		RuntimeObject* L_19 = ___2_arg2;
		int32_t L_20 = ___3_arg3;
		RuntimeObject* L_21 = ___4_arg4;
		NullCheck(L_16);
		String_t* L_22;
		L_22 = GenericInterfaceFuncInvoker5< String_t*, String_t*, RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_16, L_17, L_18, L_19, L_20, L_21);
		return L_22;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4536ED66D739D8948E3ABFFFF8D7640A1239CD5B_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4536ED66D739D8948E3ABFFFF8D7640A1239CD5B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_11, NULL);
		return L_13;
	}

IL_0047:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4);
		RuntimeObject* L_14 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_15 = ___0_format;
		RuntimeObject* L_16 = ___1_arg1;
		RuntimeObject* L_17 = ___2_arg2;
		RuntimeObject* L_18 = ___3_arg3;
		RuntimeObject* L_19 = ___4_arg4;
		NullCheck(L_14);
		String_t* L_20;
		L_20 = GenericInterfaceFuncInvoker5< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_14, L_15, L_16, L_17, L_18, L_19);
		return L_20;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Byte,System.Byte,System.Byte,System.Byte,System.Single>(System.String,T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m83578FF79B4C7526F2B5F2164E0A8CC005628692_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, float ___5_arg5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m83578FF79B4C7526F2B5F2164E0A8CC005628692_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		float L_22 = ___5_arg5;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_25;
	}

IL_0051:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5);
		RuntimeObject* L_26 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_27 = ___0_format;
		uint8_t L_28 = ___1_arg1;
		uint8_t L_29 = ___2_arg2;
		uint8_t L_30 = ___3_arg3;
		uint8_t L_31 = ___4_arg4;
		float L_32 = ___5_arg5;
		NullCheck(L_26);
		String_t* L_33;
		L_33 = GenericInterfaceFuncInvoker6< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, float >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_26, L_27, L_28, L_29, L_30, L_31, L_32);
		return L_33;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m13BFA97106021456A364822AB75DCB7062A24E04_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m13BFA97106021456A364822AB75DCB7062A24E04_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_13, NULL);
		return L_15;
	}

IL_0051:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5);
		RuntimeObject* L_16 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_17 = ___0_format;
		RuntimeObject* L_18 = ___1_arg1;
		RuntimeObject* L_19 = ___2_arg2;
		RuntimeObject* L_20 = ___3_arg3;
		RuntimeObject* L_21 = ___4_arg4;
		RuntimeObject* L_22 = ___5_arg5;
		NullCheck(L_16);
		String_t* L_23;
		L_23 = GenericInterfaceFuncInvoker6< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_16, L_17, L_18, L_19, L_20, L_21, L_22);
		return L_23;
	}
}
// System.String GameFramework.Utility/Text::Format<UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32Enum>(System.String,T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m06812189C8510651582A72C4B97468190633AD0B_gshared (String_t* ___0_format, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_arg1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_arg2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_arg3, float ___4_arg4, int32_t ___5_arg5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m06812189C8510651582A72C4B97468190633AD0B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_arg1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___2_arg2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___3_arg3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		float L_18 = ___4_arg4;
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = ___5_arg5;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_25;
	}

IL_0051:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5);
		RuntimeObject* L_26 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_27 = ___0_format;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___1_arg1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ___2_arg2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___3_arg3;
		float L_31 = ___4_arg4;
		int32_t L_32 = ___5_arg5;
		NullCheck(L_26);
		String_t* L_33;
		L_33 = GenericInterfaceFuncInvoker6< String_t*, String_t*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, int32_t >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 5), L_26, L_27, L_28, L_29, L_30, L_31, L_32);
		return L_33;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Char,System.Char,System.Char,System.Char,System.Char,System.Char>(System.String,T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB7249F0EAEEDA5EF060598D297C99965865934F4_gshared (String_t* ___0_format, Il2CppChar ___1_arg1, Il2CppChar ___2_arg2, Il2CppChar ___3_arg3, Il2CppChar ___4_arg4, Il2CppChar ___5_arg5, Il2CppChar ___6_arg6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB7249F0EAEEDA5EF060598D297C99965865934F4_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Il2CppChar L_6 = ___1_arg1;
		Il2CppChar L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Il2CppChar L_10 = ___2_arg2;
		Il2CppChar L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		Il2CppChar L_14 = ___3_arg3;
		Il2CppChar L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		Il2CppChar L_18 = ___4_arg4;
		Il2CppChar L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		Il2CppChar L_22 = ___5_arg5;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		Il2CppChar L_26 = ___6_arg6;
		Il2CppChar L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_25, NULL);
		return L_29;
	}

IL_005b:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		RuntimeObject* L_30 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_31 = ___0_format;
		Il2CppChar L_32 = ___1_arg1;
		Il2CppChar L_33 = ___2_arg2;
		Il2CppChar L_34 = ___3_arg3;
		Il2CppChar L_35 = ___4_arg4;
		Il2CppChar L_36 = ___5_arg5;
		Il2CppChar L_37 = ___6_arg6;
		NullCheck(L_30);
		String_t* L_38;
		L_38 = GenericInterfaceFuncInvoker7< String_t*, String_t*, Il2CppChar, Il2CppChar, Il2CppChar, Il2CppChar, Il2CppChar, Il2CppChar >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 6), L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37);
		return L_38;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Int32,System.Object,System.Object,System.DateTime,System.Int32,System.Object>(System.String,T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m14E5323866B3EE02DB0BDC22F610FEC648AC3D1B_gshared (String_t* ___0_format, int32_t ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_arg4, int32_t ___5_arg5, RuntimeObject* ___6_arg6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_TisRuntimeObject_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m14E5323866B3EE02DB0BDC22F610FEC648AC3D1B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = ___1_arg1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		RuntimeObject* L_10 = ___2_arg2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___3_arg3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = ___5_arg5;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		RuntimeObject* L_22 = ___6_arg6;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_23;
	}

IL_005b:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		RuntimeObject* L_24 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_25 = ___0_format;
		int32_t L_26 = ___1_arg1;
		RuntimeObject* L_27 = ___2_arg2;
		RuntimeObject* L_28 = ___3_arg3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = ___4_arg4;
		int32_t L_30 = ___5_arg5;
		RuntimeObject* L_31 = ___6_arg6;
		NullCheck(L_24);
		String_t* L_32;
		L_32 = GenericInterfaceFuncInvoker7< String_t*, String_t*, int32_t, RuntimeObject*, RuntimeObject*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 6), L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31);
		return L_32;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m9242907570AEA14C903E0C61F8737B013FBEF62F_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m9242907570AEA14C903E0C61F8737B013FBEF62F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_15, NULL);
		return L_17;
	}

IL_005b:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6);
		RuntimeObject* L_18 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_19 = ___0_format;
		RuntimeObject* L_20 = ___1_arg1;
		RuntimeObject* L_21 = ___2_arg2;
		RuntimeObject* L_22 = ___3_arg3;
		RuntimeObject* L_23 = ___4_arg4;
		RuntimeObject* L_24 = ___5_arg5;
		RuntimeObject* L_25 = ___6_arg6;
		NullCheck(L_18);
		String_t* L_26;
		L_26 = GenericInterfaceFuncInvoker7< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 6), L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25);
		return L_26;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Byte,System.Byte,System.Byte,System.Byte,System.DateTime,System.Int32,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m8D4916568B5A868DF689901919B9D899C2C8A4CB_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___5_arg5, int32_t ___6_arg6, RuntimeObject* ___7_arg7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisRuntimeObject_m8D4916568B5A868DF689901919B9D899C2C8A4CB_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22 = ___5_arg5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26 = ___6_arg6;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_25;
		RuntimeObject* L_30 = ___7_arg7;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_29, NULL);
		return L_31;
	}

IL_0065:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		RuntimeObject* L_32 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_33 = ___0_format;
		uint8_t L_34 = ___1_arg1;
		uint8_t L_35 = ___2_arg2;
		uint8_t L_36 = ___3_arg3;
		uint8_t L_37 = ___4_arg4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38 = ___5_arg5;
		int32_t L_39 = ___6_arg6;
		RuntimeObject* L_40 = ___7_arg7;
		NullCheck(L_32);
		String_t* L_41;
		L_41 = GenericInterfaceFuncInvoker8< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, int32_t, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40);
		return L_41;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Byte,System.Byte,System.Byte,System.Byte,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4F4A849801A63DBA1814A697CFDA938F1DA5C881_gshared (String_t* ___0_format, uint8_t ___1_arg1, uint8_t ___2_arg2, uint8_t ___3_arg3, uint8_t ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4F4A849801A63DBA1814A697CFDA938F1DA5C881_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint8_t L_6 = ___1_arg1;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		uint8_t L_10 = ___2_arg2;
		uint8_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		uint8_t L_14 = ___3_arg3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		uint8_t L_18 = ___4_arg4;
		uint8_t L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		RuntimeObject* L_22 = ___5_arg5;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___6_arg6;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___7_arg7;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_26);
		String_t* L_27;
		L_27 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_25, NULL);
		return L_27;
	}

IL_0065:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		RuntimeObject* L_28 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_29 = ___0_format;
		uint8_t L_30 = ___1_arg1;
		uint8_t L_31 = ___2_arg2;
		uint8_t L_32 = ___3_arg3;
		uint8_t L_33 = ___4_arg4;
		RuntimeObject* L_34 = ___5_arg5;
		RuntimeObject* L_35 = ___6_arg6;
		RuntimeObject* L_36 = ___7_arg7;
		NullCheck(L_28);
		String_t* L_37;
		L_37 = GenericInterfaceFuncInvoker8< String_t*, String_t*, uint8_t, uint8_t, uint8_t, uint8_t, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36);
		return L_37;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m8AB539A2119D9CAE7790EFEEF3C0BB605876DC89_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m8AB539A2119D9CAE7790EFEEF3C0BB605876DC89_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_17, NULL);
		return L_19;
	}

IL_0065:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
		RuntimeObject* L_20 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_21 = ___0_format;
		RuntimeObject* L_22 = ___1_arg1;
		RuntimeObject* L_23 = ___2_arg2;
		RuntimeObject* L_24 = ___3_arg3;
		RuntimeObject* L_25 = ___4_arg4;
		RuntimeObject* L_26 = ___5_arg5;
		RuntimeObject* L_27 = ___6_arg6;
		RuntimeObject* L_28 = ___7_arg7;
		NullCheck(L_20);
		String_t* L_29;
		L_29 = GenericInterfaceFuncInvoker8< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 7), L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_28);
		return L_29;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC9FA5550E04E54D800C089E6811100660EE4816C_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC9FA5550E04E54D800C089E6811100660EE4816C_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_006f;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_19, NULL);
		return L_21;
	}

IL_006f:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
		RuntimeObject* L_22 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_23 = ___0_format;
		RuntimeObject* L_24 = ___1_arg1;
		RuntimeObject* L_25 = ___2_arg2;
		RuntimeObject* L_26 = ___3_arg3;
		RuntimeObject* L_27 = ___4_arg4;
		RuntimeObject* L_28 = ___5_arg5;
		RuntimeObject* L_29 = ___6_arg6;
		RuntimeObject* L_30 = ___7_arg7;
		RuntimeObject* L_31 = ___8_arg8;
		NullCheck(L_22);
		String_t* L_32;
		L_32 = GenericInterfaceFuncInvoker9< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 8), L_22, L_23, L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31);
		return L_32;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m909D0B407FE54040B470D2821CD196D91D89E903_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m909D0B407FE54040B470D2821CD196D91D89E903_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_007a;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_21, NULL);
		return L_23;
	}

IL_007a:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
		RuntimeObject* L_24 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_25 = ___0_format;
		RuntimeObject* L_26 = ___1_arg1;
		RuntimeObject* L_27 = ___2_arg2;
		RuntimeObject* L_28 = ___3_arg3;
		RuntimeObject* L_29 = ___4_arg4;
		RuntimeObject* L_30 = ___5_arg5;
		RuntimeObject* L_31 = ___6_arg6;
		RuntimeObject* L_32 = ___7_arg7;
		RuntimeObject* L_33 = ___8_arg8;
		RuntimeObject* L_34 = ___9_arg9;
		NullCheck(L_24);
		String_t* L_35;
		L_35 = GenericInterfaceFuncInvoker10< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 9), L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31, L_32, L_33, L_34);
		return L_35;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4D946BCD0D7F46497EA8B7FD2479C1F48BBACD07_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m4D946BCD0D7F46497EA8B7FD2479C1F48BBACD07_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0085;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_23, NULL);
		return L_25;
	}

IL_0085:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
		RuntimeObject* L_26 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_27 = ___0_format;
		RuntimeObject* L_28 = ___1_arg1;
		RuntimeObject* L_29 = ___2_arg2;
		RuntimeObject* L_30 = ___3_arg3;
		RuntimeObject* L_31 = ___4_arg4;
		RuntimeObject* L_32 = ___5_arg5;
		RuntimeObject* L_33 = ___6_arg6;
		RuntimeObject* L_34 = ___7_arg7;
		RuntimeObject* L_35 = ___8_arg8;
		RuntimeObject* L_36 = ___9_arg9;
		RuntimeObject* L_37 = ___10_arg10;
		NullCheck(L_26);
		String_t* L_38;
		L_38 = GenericInterfaceFuncInvoker11< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 10), L_26, L_27, L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37);
		return L_38;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m7D94B918A79FFB1DE9330FB519D12AB547E59066_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m7D94B918A79FFB1DE9330FB519D12AB547E59066_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_0090;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		String_t* L_27;
		L_27 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_25, NULL);
		return L_27;
	}

IL_0090:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
		RuntimeObject* L_28 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_29 = ___0_format;
		RuntimeObject* L_30 = ___1_arg1;
		RuntimeObject* L_31 = ___2_arg2;
		RuntimeObject* L_32 = ___3_arg3;
		RuntimeObject* L_33 = ___4_arg4;
		RuntimeObject* L_34 = ___5_arg5;
		RuntimeObject* L_35 = ___6_arg6;
		RuntimeObject* L_36 = ___7_arg7;
		RuntimeObject* L_37 = ___8_arg8;
		RuntimeObject* L_38 = ___9_arg9;
		RuntimeObject* L_39 = ___10_arg10;
		RuntimeObject* L_40 = ___11_arg11;
		NullCheck(L_28);
		String_t* L_41;
		L_41 = GenericInterfaceFuncInvoker12< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 11), L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40);
		return L_41;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC5555991449064581125D65719A25585323D586D_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mC5555991449064581125D65719A25585323D586D_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_009e;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		String_t* L_29;
		L_29 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_27, NULL);
		return L_29;
	}

IL_009e:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
		RuntimeObject* L_30 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_31 = ___0_format;
		RuntimeObject* L_32 = ___1_arg1;
		RuntimeObject* L_33 = ___2_arg2;
		RuntimeObject* L_34 = ___3_arg3;
		RuntimeObject* L_35 = ___4_arg4;
		RuntimeObject* L_36 = ___5_arg5;
		RuntimeObject* L_37 = ___6_arg6;
		RuntimeObject* L_38 = ___7_arg7;
		RuntimeObject* L_39 = ___8_arg8;
		RuntimeObject* L_40 = ___9_arg9;
		RuntimeObject* L_41 = ___10_arg10;
		RuntimeObject* L_42 = ___11_arg11;
		RuntimeObject* L_43 = ___12_arg12;
		NullCheck(L_30);
		String_t* L_44;
		L_44 = GenericInterfaceFuncInvoker13< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 12), L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43);
		return L_44;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFB1CF44BE3BA729787B36B37E705A9A5D9C726F4_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, RuntimeObject* ___13_arg13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mFB1CF44BE3BA729787B36B37E705A9A5D9C726F4_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_00a9;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		RuntimeObject* L_30 = ___13_arg13;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_29, NULL);
		return L_31;
	}

IL_00a9:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
		RuntimeObject* L_32 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_33 = ___0_format;
		RuntimeObject* L_34 = ___1_arg1;
		RuntimeObject* L_35 = ___2_arg2;
		RuntimeObject* L_36 = ___3_arg3;
		RuntimeObject* L_37 = ___4_arg4;
		RuntimeObject* L_38 = ___5_arg5;
		RuntimeObject* L_39 = ___6_arg6;
		RuntimeObject* L_40 = ___7_arg7;
		RuntimeObject* L_41 = ___8_arg8;
		RuntimeObject* L_42 = ___9_arg9;
		RuntimeObject* L_43 = ___10_arg10;
		RuntimeObject* L_44 = ___11_arg11;
		RuntimeObject* L_45 = ___12_arg12;
		RuntimeObject* L_46 = ___13_arg13;
		NullCheck(L_32);
		String_t* L_47;
		L_47 = GenericInterfaceFuncInvoker14< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 13), L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46);
		return L_47;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2AD581CAD61401F4652DCF70F25B3A8916ADC931_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, RuntimeObject* ___13_arg13, RuntimeObject* ___14_arg14, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m2AD581CAD61401F4652DCF70F25B3A8916ADC931_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_00b4;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		RuntimeObject* L_30 = ___13_arg13;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
		RuntimeObject* L_32 = ___14_arg14;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_31, NULL);
		return L_33;
	}

IL_00b4:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
		RuntimeObject* L_34 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_35 = ___0_format;
		RuntimeObject* L_36 = ___1_arg1;
		RuntimeObject* L_37 = ___2_arg2;
		RuntimeObject* L_38 = ___3_arg3;
		RuntimeObject* L_39 = ___4_arg4;
		RuntimeObject* L_40 = ___5_arg5;
		RuntimeObject* L_41 = ___6_arg6;
		RuntimeObject* L_42 = ___7_arg7;
		RuntimeObject* L_43 = ___8_arg8;
		RuntimeObject* L_44 = ___9_arg9;
		RuntimeObject* L_45 = ___10_arg10;
		RuntimeObject* L_46 = ___11_arg11;
		RuntimeObject* L_47 = ___12_arg12;
		RuntimeObject* L_48 = ___13_arg13;
		RuntimeObject* L_49 = ___14_arg14;
		NullCheck(L_34);
		String_t* L_50;
		L_50 = GenericInterfaceFuncInvoker15< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 14), L_34, L_35, L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, L_49);
		return L_50;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mE5F0EE970DFA1EE418FA193C3B667658287B94B9_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, RuntimeObject* ___13_arg13, RuntimeObject* ___14_arg14, RuntimeObject* ___15_arg15, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mE5F0EE970DFA1EE418FA193C3B667658287B94B9_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_00bf;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		RuntimeObject* L_30 = ___13_arg13;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
		RuntimeObject* L_32 = ___14_arg14;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_31;
		RuntimeObject* L_34 = ___15_arg15;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)L_34);
		String_t* L_35;
		L_35 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_33, NULL);
		return L_35;
	}

IL_00bf:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
		RuntimeObject* L_36 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_37 = ___0_format;
		RuntimeObject* L_38 = ___1_arg1;
		RuntimeObject* L_39 = ___2_arg2;
		RuntimeObject* L_40 = ___3_arg3;
		RuntimeObject* L_41 = ___4_arg4;
		RuntimeObject* L_42 = ___5_arg5;
		RuntimeObject* L_43 = ___6_arg6;
		RuntimeObject* L_44 = ___7_arg7;
		RuntimeObject* L_45 = ___8_arg8;
		RuntimeObject* L_46 = ___9_arg9;
		RuntimeObject* L_47 = ___10_arg10;
		RuntimeObject* L_48 = ___11_arg11;
		RuntimeObject* L_49 = ___12_arg12;
		RuntimeObject* L_50 = ___13_arg13;
		RuntimeObject* L_51 = ___14_arg14;
		RuntimeObject* L_52 = ___15_arg15;
		NullCheck(L_36);
		String_t* L_53;
		L_53 = GenericInterfaceFuncInvoker16< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 15), L_36, L_37, L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, L_49, L_50, L_51, L_52);
		return L_53;
	}
}
// System.String GameFramework.Utility/Text::Format<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>(System.String,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mA6200FDADFA548719E195D01B37C341CFC1548C0_gshared (String_t* ___0_format, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, RuntimeObject* ___3_arg3, RuntimeObject* ___4_arg4, RuntimeObject* ___5_arg5, RuntimeObject* ___6_arg6, RuntimeObject* ___7_arg7, RuntimeObject* ___8_arg8, RuntimeObject* ___9_arg9, RuntimeObject* ___10_arg10, RuntimeObject* ___11_arg11, RuntimeObject* ___12_arg12, RuntimeObject* ___13_arg13, RuntimeObject* ___14_arg14, RuntimeObject* ___15_arg15, RuntimeObject* ___16_arg16, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (format == null)
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new GameFrameworkException("Format is invalid.");
		GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF* L_1 = (GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameFrameworkException_t213393CA03B73E08C53FC0A75602901F8E8FC8DF_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		GameFrameworkException__ctor_m613E817832536BC84E6AF08A7E5DB935FCB8A693(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0558BDB16466C5D97D67CF54F87E0213C38C327B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Text_Format_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mA6200FDADFA548719E195D01B37C341CFC1548C0_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (s_TextHelper == null)
		RuntimeObject* L_2 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		if (L_2)
		{
			goto IL_00ca;
		}
	}
	{
		// return string.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
		String_t* L_3 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6 = ___1_arg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___2_arg2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___3_arg3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___4_arg4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___5_arg5;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___6_arg6;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___7_arg7;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		RuntimeObject* L_20 = ___8_arg8;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		RuntimeObject* L_22 = ___9_arg9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		RuntimeObject* L_24 = ___10_arg10;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
		RuntimeObject* L_26 = ___11_arg11;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
		RuntimeObject* L_28 = ___12_arg12;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		RuntimeObject* L_30 = ___13_arg13;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
		RuntimeObject* L_32 = ___14_arg14;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_31;
		RuntimeObject* L_34 = ___15_arg15;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_33;
		RuntimeObject* L_36 = ___16_arg16;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject*)L_36);
		String_t* L_37;
		L_37 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_3, L_35, NULL);
		return L_37;
	}

IL_00ca:
	{
		// return s_TextHelper.Format(format, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
		RuntimeObject* L_38 = ((Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_StaticFields*)il2cpp_codegen_static_fields_for(Text_t9B0386BA4B616DD00717C060044D992234FAA7BC_il2cpp_TypeInfo_var))->___s_TextHelper_0;
		String_t* L_39 = ___0_format;
		RuntimeObject* L_40 = ___1_arg1;
		RuntimeObject* L_41 = ___2_arg2;
		RuntimeObject* L_42 = ___3_arg3;
		RuntimeObject* L_43 = ___4_arg4;
		RuntimeObject* L_44 = ___5_arg5;
		RuntimeObject* L_45 = ___6_arg6;
		RuntimeObject* L_46 = ___7_arg7;
		RuntimeObject* L_47 = ___8_arg8;
		RuntimeObject* L_48 = ___9_arg9;
		RuntimeObject* L_49 = ___10_arg10;
		RuntimeObject* L_50 = ___11_arg11;
		RuntimeObject* L_51 = ___12_arg12;
		RuntimeObject* L_52 = ___13_arg13;
		RuntimeObject* L_53 = ___14_arg14;
		RuntimeObject* L_54 = ___15_arg15;
		RuntimeObject* L_55 = ___16_arg16;
		NullCheck(L_38);
		String_t* L_56;
		L_56 = GenericInterfaceFuncInvoker17< String_t*, String_t*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 16), L_38, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, L_49, L_50, L_51, L_52, L_53, L_54, L_55);
		return L_56;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		double* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		double* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		int32_t* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		int32_t* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		int64_t* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int64_t* ___5_mask, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		int64_t* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		float* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, int32_t* ___5_mask, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___3_scale;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___1_base_addr;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___5_mask;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___5_mask;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		float* L_12 = ___0_dptr;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___4_n;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		uint8_t* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_14;
		L_14 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_15 = V_7;
		uint8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_25;
		L_25 = ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t L_26 = V_8;
		uint8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_29;
		L_29 = ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t L_30 = V_8;
		uint8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_39;
		L_39 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_40 = V_7;
		uint8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_120;
		L_120 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint8_t);
		uint8_t L_124 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint8_t));
		uint8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		int16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		int16_t* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_14;
		L_14 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_15 = V_7;
		int16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_25;
		L_25 = ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int16_t L_26 = V_8;
		int16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_29;
		L_29 = ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int16_t L_30 = V_8;
		int16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_39;
		L_39 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_40 = V_7;
		int16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_50 = V_7;
		int16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_120;
		L_120 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int16_t);
		int16_t L_124 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int16_t));
		int16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	int8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		int8_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		int8_t* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_14;
		L_14 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_15 = V_7;
		int8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_25;
		L_25 = ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int8_t L_26 = V_8;
		int8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_29;
		L_29 = ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int8_t L_30 = V_8;
		int8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_39;
		L_39 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_40 = V_7;
		int8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_50 = V_7;
		int8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_120;
		L_120 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int8_t);
		int8_t L_124 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int8_t));
		int8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		uint16_t* L_6 = ___2_b;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___3_blen;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_14;
		L_14 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_15 = V_7;
		uint16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_25;
		L_25 = ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint16_t L_26 = V_8;
		uint16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_29;
		L_29 = ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint16_t L_30 = V_8;
		uint16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_39;
		L_39 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_40 = V_7;
		uint16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___4_len;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___4_len;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___5_imm8;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___4_len;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___4_len;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___4_len;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___4_len;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___4_len;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___6_allOnes;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___4_len;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___4_len;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___5_imm8;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___5_imm8;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_120;
		L_120 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_121 = ___2_b;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint16_t);
		uint16_t L_124 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint16_t));
		uint16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___4_len;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Byte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint8_t));
		uint8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Int16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.SByte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int8_t V_1 = 0x0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.UInt16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint16_t));
		uint16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_max;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___1_max;
		return L_11;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Byte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___0_len, int32_t ___1_imm8, uint8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint8_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint8_t);
		uint8_t L_7 = ___2_allOnesT;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		uint8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint8_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Int16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___0_len, int32_t ___1_imm8, int16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int16_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int16_t);
		int16_t L_7 = ___2_allOnesT;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		int16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int16_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.SByte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___0_len, int32_t ___1_imm8, int8_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int8_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int8_t);
		int8_t L_7 = ___2_allOnesT;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		int8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int8_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.UInt16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___0_len, int32_t ___1_imm8, uint16_t ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___1_imm8;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint16_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___3_intRes2;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint16_t);
		uint16_t L_7 = ___2_allOnesT;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		uint16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint16_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___3_intRes2;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___0_a, int32_t ___1_alen, uint8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___0_a, int32_t ___1_alen, int16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___0_a, int32_t ___1_alen, int8_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, int8_t ___7_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		int8_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int8_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___0_a, int32_t ___1_alen, uint16_t* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, uint16_t ___7_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		uint16_t* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		uint16_t L_10 = ___7_allOnesT;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___0_a, uint8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_4 = ___1_b;
		uint8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___0_a, int16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___0_a;
		int16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_4 = ___1_b;
		int16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___0_a, int8_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, int8_t ___5_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___0_a;
		int8_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_4 = ___1_b;
		int8_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int8_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___0_a, uint16_t* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, uint16_t ___5_allOnesT, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___0_a;
		uint16_t* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_4 = ___1_b;
		uint16_t* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		uint16_t L_14 = ___5_allOnesT;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParseContext_ReadLength_m5574397F353C62DA04F0E0E5616C2159787C52E6_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		uint32_t L_2;
		L_2 = ParsingPrimitives_ParseRawVarint32_m12E76CAA773AAED8FDAF192EBFAF830E615798BF(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ParseContext_ReadTag_m01B263948EC529915711371EE50F8EAEB484E265_inline (ParseContext_tC04F8D72236E3ED9155AAD861769A3C56AEEB0EF* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* L_0 = (&__this->___buffer_2);
		ParserInternalState_t3044183736150999B222F94BFC5A875FA33EB36C* L_1 = (&__this->___state_3);
		uint32_t L_2;
		L_2 = ParsingPrimitives_ParseTag_mC3CDF9E540F71AEAB45BC4BAFAE69C8FB097DB64(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type type { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CtypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameFrameworkAction_4_Invoke_m6C76995EDD204C01F0E4FF6A746073846A345188_gshared_inline (GameFrameworkAction_4_tF510E37B03774A4F07D09912F82897C24FDF45AF* __this, RuntimeObject* ___0_arg1, uint8_t ___1_arg2, int32_t ___2_arg3, RuntimeObject* ___3_arg4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, uint8_t, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		// public int size { get; private set; }
		int32_t L_0 = (int32_t)__this->___U3CsizeU3Ek__BackingField_1;
		return L_0;
	}
}

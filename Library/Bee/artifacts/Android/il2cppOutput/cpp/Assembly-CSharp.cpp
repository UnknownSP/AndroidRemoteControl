#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.String[]>
struct Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputProcessor_1_tCC7634AB386F9C6888B89C0FD440251E67C5D8F7;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.String[]>
struct TaskFactory_1_t238CEB4BCB70F06A874C8D5DDCE901DC42021651;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t5DDD425C30A76CA8F6F29A896C7DA59363A13CC2;
// System.Threading.Tasks.Task`1<System.String[]>
struct Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.LowLevel.TouchState>[]
struct InputProcessor_1U5BU5D_t2D9B681F9F0B39759619A0D4617FB6B20FB10AC0;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;
// UnityEngine.InputSystem.Controls.TouchControl[]
struct TouchControlU5BU5D_t339733075857CFF82B4E43BFB310F2350225836D;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.InputSystem.Controls.DeltaControl
struct DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B;
// UnityEngine.InputSystem.Controls.DoubleControl
struct DoubleControl_t3707A6260424A2F3636669A2BAFF5CB5E91D2486;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LaunchButtonControl
struct LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// MainControl
struct MainControl_tB6B2F9693976F8BA95CCC3E48F7C4B002C2B0DDE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TCPClient
struct TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3;
// TCPConnection
struct TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96;
// TCPTestClient
struct TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// UnityEngine.InputSystem.Controls.TouchControl
struct TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079;
// UnityEngine.InputSystem.Controls.TouchPhaseControl
struct TouchPhaseControl_t4652C6E0EBFAFA85A31607769876B02C1C9FCAEC;
// UnityEngine.InputSystem.Controls.TouchPressControl
struct TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB;
// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04FA4F20A6C08D4F3DA6BB600F3D56CE9883F7C9;
IL2CPP_EXTERN_C String_t* _stringLiteral15ABA1A04898BEFC8B3C8918C10803CACA669ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral16E6665FD2D70C2AB3B1A05BB0B7DDFBB000B4DC;
IL2CPP_EXTERN_C String_t* _stringLiteral1D75CD5DAD8312BC1D321AA6E419A0AB39D58559;
IL2CPP_EXTERN_C String_t* _stringLiteral26DEA1AD9978012EAC63532F2AE9FCF814E8C5C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2852A3BF696AE8671BC2EA5E25B5AC307B40C9D6;
IL2CPP_EXTERN_C String_t* _stringLiteral44A4C68059EF44A091851ECB8AC776660839BFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral514741D662272615A569DEDBFBF335E68A2FAFE6;
IL2CPP_EXTERN_C String_t* _stringLiteral52000E07B24F803890FB7BCC4F106161587D307D;
IL2CPP_EXTERN_C String_t* _stringLiteral5EEAE25D1AE198E9AFA361876D17701175F40C1E;
IL2CPP_EXTERN_C String_t* _stringLiteral67C084E5A72DDE0B6DF5C0E5C4368A2D90616AD8;
IL2CPP_EXTERN_C String_t* _stringLiteral7B41E39F1231FA81834C28469E9416087B99054E;
IL2CPP_EXTERN_C String_t* _stringLiteral7BDBE49F8400C8FDAB7F40A18406E3E11C2BAB22;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9F7EE93A53188BA468B07C8536933C365149F8;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC72675E1A3FC78EAA644800F11DCDC84878868;
IL2CPP_EXTERN_C String_t* _stringLiteral94A6ADE7049C8C56AA2ACA9C1C81FB706F464137;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB9F752AC11E7072F12A3FD98802A2F19E81518;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D605A9087410128B41F667A579D1A26C21F6F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB6ECD9DA586D0BEE942EE64B5972BFB412CC6D0A;
IL2CPP_EXTERN_C String_t* _stringLiteralB81B2A9DC4148829420893BA9EAE4A715BA7299C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8F2F8573A363FD6AAE2D57D9F5981AEEACC0B4D;
IL2CPP_EXTERN_C String_t* _stringLiteralCBA48D26FA11BB0C1511A0BFCF790CBEEC801D32;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralDB24400D85D869769C316674988EA50F4E330AF5;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA97DEF9C54B8707EF4BDC449EE30FB1D247338;
IL2CPP_EXTERN_C String_t* _stringLiteralE02B516CD596E9A24F34F191D56C40E22CFA5310;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFA34E42F95E26EE39BFEC728A45AE28A931F938F;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF49E00F6A7E8B5D6244E20C74A1752B3241384;
IL2CPP_EXTERN_C String_t* _stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_mBC5CDDCAC1598E441DCAF4FE957C281E65AC062D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m5142C85028505662A809A775C076BF680854352A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m8D864A774323D68EF188DCA65181C53AFB8B3E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m056072D25BED97F087752455C477468C5489D81A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LaunchButtonControl_U3CTCPReceiveDataU3Eb__15_0_m449DE131C754F6BFB36586B989F48C0C5487E30F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LaunchButtonControl_buttonClick_m18C276B5E7D8B7D52D346C4EEC06342DD2524983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TCPTestClient_ListenForData_mC7FC0FB92F3E0EF83BBF8706B03DBB9831BCDCC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m83205D2CAC0257ACFB3799DA5DD484B0D4B9DDED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mBB1935B8D8B149149221600F42DA9073C73FBD5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mB26BFA07AC14EF917B761C0D201B116283728D55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_m30A0A4970A5D9BC0D172D7E609DF152DC6354098_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58  : public RuntimeObject
{
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.LowLevel.TouchState>>
struct InlinedArray_1_tD4AEEFFEC2CBF49D196A92D16CE8DA15F1532FCD 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tCC7634AB386F9C6888B89C0FD440251E67C5D8F7* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t2D9B681F9F0B39759619A0D4617FB6B20FB10AC0* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>
struct ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	TouchControlU5BU5D_t339733075857CFF82B4E43BFB310F2350225836D* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>
struct TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>
struct TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.String[]>
struct Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
};

// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::_streamSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____streamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::_ownsSocket
	bool ____ownsSocket_6;
	// System.Boolean System.Net.Sockets.NetworkStream::_readable
	bool ____readable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::_writeable
	bool ____writeable_8;
	// System.Int32 System.Net.Sockets.NetworkStream::_closeTimeout
	int32_t ____closeTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::_cleanedUp
	bool ____cleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentReadTimeout
	int32_t ____currentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::_currentWriteTimeout
	int32_t ____currentWriteTimeout_12;
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

// UnityEngine.InputSystem.LowLevel.TouchState
struct TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.InputSystem.LowLevel.TouchState::touchId
					int32_t ___touchId_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___touchId_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_2_OffsetPadding[4];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::position
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_2_OffsetPadding_forAlignmentOnly[4];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___delta_3_OffsetPadding[12];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::delta
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___delta_3_OffsetPadding_forAlignmentOnly[12];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pressure_4_OffsetPadding[20];
					// System.Single UnityEngine.InputSystem.LowLevel.TouchState::pressure
					float ___pressure_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pressure_4_OffsetPadding_forAlignmentOnly[20];
					float ___pressure_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___radius_5_OffsetPadding[24];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::radius
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___radius_5_OffsetPadding_forAlignmentOnly[24];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___phaseId_6_OffsetPadding[32];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::phaseId
					uint8_t ___phaseId_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___phaseId_6_OffsetPadding_forAlignmentOnly[32];
					uint8_t ___phaseId_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___tapCount_7_OffsetPadding[33];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::tapCount
					uint8_t ___tapCount_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___tapCount_7_OffsetPadding_forAlignmentOnly[33];
					uint8_t ___tapCount_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___displayIndex_8_OffsetPadding[34];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::displayIndex
					uint8_t ___displayIndex_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___displayIndex_8_OffsetPadding_forAlignmentOnly[34];
					uint8_t ___displayIndex_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___flags_9_OffsetPadding[35];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::flags
					uint8_t ___flags_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___flags_9_OffsetPadding_forAlignmentOnly[35];
					uint8_t ___flags_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___updateStepCount_10_OffsetPadding[36];
					// System.UInt32 UnityEngine.InputSystem.LowLevel.TouchState::updateStepCount
					uint32_t ___updateStepCount_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___updateStepCount_10_OffsetPadding_forAlignmentOnly[36];
					uint32_t ___updateStepCount_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startTime_11_OffsetPadding[40];
					// System.Double UnityEngine.InputSystem.LowLevel.TouchState::startTime
					double ___startTime_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startTime_11_OffsetPadding_forAlignmentOnly[40];
					double ___startTime_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startPosition_12_OffsetPadding[48];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::startPosition
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startPosition_12_OffsetPadding_forAlignmentOnly[48];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_12_forAlignmentOnly;
				};
			};
		};
		uint8_t TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97__padding[56];
	};
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// LaunchButtonControl/<Update>d__12
struct U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D 
{
	// System.Int32 LaunchButtonControl/<Update>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder LaunchButtonControl/<Update>d__12::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// LaunchButtonControl LaunchButtonControl/<Update>d__12::<>4__this
	LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* ___U3CU3E4__this_2;
	// System.Threading.Tasks.Task LaunchButtonControl/<Update>d__12::<task>5__2
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CtaskU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task> LaunchButtonControl/<Update>d__12::<>u__1
	TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 ___U3CU3Eu__1_4;
};

// System.Func`1<System.String[]>
struct Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	float ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	float ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tD4AEEFFEC2CBF49D196A92D16CE8DA15F1532FCD ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// LaunchButtonControl/<TCPReceiveData>d__15
struct U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F 
{
	// System.Int32 LaunchButtonControl/<TCPReceiveData>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder LaunchButtonControl/<TCPReceiveData>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// LaunchButtonControl LaunchButtonControl/<TCPReceiveData>d__15::<>4__this
	LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]> LaunchButtonControl/<TCPReceiveData>d__15::<>u__1
	TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A ___U3CU3Eu__1_3;
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_30;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_31;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_32;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_33;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_34;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_35;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_36;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_37;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_38;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<position>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CpositionU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Pointer::<delta>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CdeltaU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<radius>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CradiusU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pointer::<pressure>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpressureU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pointer::<press>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CpressU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Pointer::<displayIndex>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CdisplayIndexU3Ek__BackingField_49;
};

// UnityEngine.InputSystem.Controls.TouchControl
struct TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079  : public InputControl_1_t8328183BE585255AE6A8A1F8D5C9DEEDE891A3B3
{
	// UnityEngine.InputSystem.Controls.TouchPressControl UnityEngine.InputSystem.Controls.TouchControl::<press>k__BackingField
	TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB* ___U3CpressU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Controls.TouchControl::<displayIndex>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CdisplayIndexU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Controls.TouchControl::<touchId>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CtouchIdU3Ek__BackingField_30;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::<position>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CpositionU3Ek__BackingField_31;
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Controls.TouchControl::<delta>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CdeltaU3Ek__BackingField_32;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.TouchControl::<pressure>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpressureU3Ek__BackingField_33;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::<radius>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CradiusU3Ek__BackingField_34;
	// UnityEngine.InputSystem.Controls.TouchPhaseControl UnityEngine.InputSystem.Controls.TouchControl::<phase>k__BackingField
	TouchPhaseControl_t4652C6E0EBFAFA85A31607769876B02C1C9FCAEC* ___U3CphaseU3Ek__BackingField_35;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Controls.TouchControl::<indirectTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CindirectTouchU3Ek__BackingField_36;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Controls.TouchControl::<tap>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CtapU3Ek__BackingField_37;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Controls.TouchControl::<tapCount>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CtapCountU3Ek__BackingField_38;
	// UnityEngine.InputSystem.Controls.DoubleControl UnityEngine.InputSystem.Controls.TouchControl::<startTime>k__BackingField
	DoubleControl_t3707A6260424A2F3636669A2BAFF5CB5E91D2486* ___U3CstartTimeU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::<startPosition>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CstartPositionU3Ek__BackingField_40;
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_39;
};

// LaunchButtonControl
struct LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LaunchButtonControl::ButtonObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ButtonObject_4;
	// UnityEngine.UI.Button LaunchButtonControl::launchButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___launchButton_5;
	// TCPConnection LaunchButtonControl::TCPCon
	TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* ___TCPCon_6;
	// System.Boolean LaunchButtonControl::_enabledTCP
	bool ____enabledTCP_7;
	// System.Boolean LaunchButtonControl::_enabledLaunch
	bool ____enabledLaunch_8;
	// LaunchButtonControl/ControlPhase LaunchButtonControl::controlPhase
	int32_t ___controlPhase_9;
	// System.Single LaunchButtonControl::caseTime
	float ___caseTime_10;
	// System.Int32 LaunchButtonControl::processState
	int32_t ___processState_11;
	// System.Boolean LaunchButtonControl::_buttonClick
	bool ____buttonClick_12;
	// System.String[] LaunchButtonControl::receiveTCP
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___receiveTCP_13;
};

// MainControl
struct MainControl_tB6B2F9693976F8BA95CCC3E48F7C4B002C2B0DDE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TCPConnection MainControl::TCPcon
	TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* ___TCPcon_4;
	// System.Boolean MainControl::_useTCP
	bool ____useTCP_5;
	// LaunchButtonControl MainControl::launchButtonControl
	LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* ___launchButtonControl_6;
	// System.Boolean MainControl::_TCPConnected
	bool ____TCPConnected_7;
};

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Mouse::<scroll>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CscrollU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<leftButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftButtonU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<middleButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmiddleButtonU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<rightButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightButtonU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<backButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbackButtonU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<forwardButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CforwardButtonU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Mouse::<clickCount>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CclickCountU3Ek__BackingField_57;
};

// System.Net.Sockets.SocketException
struct SocketException_t6D10102A62EA871BD31748E026A372DB6804083B  : public Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9
{
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_EndPoint_19;
};

// TCPClient
struct TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TCPClient::m_ipAddress
	String_t* ___m_ipAddress_4;
	// System.Int32 TCPClient::m_port
	int32_t ___m_port_5;
	// System.Net.Sockets.TcpClient TCPClient::m_tcpClient
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___m_tcpClient_6;
	// System.Net.Sockets.NetworkStream TCPClient::m_networkStream
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* ___m_networkStream_7;
	// System.Boolean TCPClient::m_isConnection
	bool ___m_isConnection_8;
	// System.String TCPClient::m_message
	String_t* ___m_message_9;
};

// TCPConnection
struct TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TCPConnection::IPAddress
	String_t* ___IPAddress_4;
	// System.Int32 TCPConnection::Port
	int32_t ___Port_5;
	// System.Net.Sockets.TcpClient TCPConnection::tcpClient
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___tcpClient_6;
	// System.Net.Sockets.NetworkStream TCPConnection::networkStream
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* ___networkStream_7;
	// System.Boolean TCPConnection::_isConnection
	bool ____isConnection_8;
	// System.String TCPConnection::SendMess
	String_t* ___SendMess_9;
};

// TCPTestClient
struct TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Net.Sockets.TcpClient TCPTestClient::socketConnection
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___socketConnection_4;
	// System.Threading.Thread TCPTestClient::clientReceiveThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___clientReceiveThread_5;
};

// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.TouchControl UnityEngine.InputSystem.Touchscreen::<primaryTouch>k__BackingField
	TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* ___U3CprimaryTouchU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> UnityEngine.InputSystem.Touchscreen::<touches>k__BackingField
	ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E ___U3CtouchesU3Ek__BackingField_52;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.InputSystem.Controls.TouchPressControl
struct TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB  : public ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF
{
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

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
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// UnityEngine.GUILayoutOption

// UnityEngine.GUILayoutOption

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Net.Sockets.TcpClient

// System.Net.Sockets.TcpClient

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>

// System.Threading.Tasks.Task`1<System.String[]>
struct Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t238CEB4BCB70F06A874C8D5DDCE901DC42021651* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String[]>

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t5DDD425C30A76CA8F6F29A896C7DA59363A13CC2* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>

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

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Net.Sockets.NetworkStream

// System.Net.Sockets.NetworkStream

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.GameObject

// UnityEngine.GameObject

// LaunchButtonControl/<Update>d__12

// LaunchButtonControl/<Update>d__12

// System.Func`1<System.String[]>

// System.Func`1<System.String[]>

// System.Threading.ThreadStart

// System.Threading.ThreadStart

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// LaunchButtonControl/<TCPReceiveData>d__15

// LaunchButtonControl/<TCPReceiveData>d__15

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.InputSystem.Controls.TouchControl

// UnityEngine.InputSystem.Controls.TouchControl

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_40;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_41;
};

// UnityEngine.InputSystem.Controls.ButtonControl

// LaunchButtonControl

// LaunchButtonControl

// MainControl

// MainControl

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields
{
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::<current>k__BackingField
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___U3CcurrentU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::s_PlatformMouseDevice
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___s_PlatformMouseDevice_59;
};

// UnityEngine.InputSystem.Mouse

// System.Net.Sockets.SocketException

// System.Net.Sockets.SocketException

// TCPClient

// TCPClient

// TCPConnection

// TCPConnection

// TCPTestClient

// TCPTestClient

// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_StaticFields
{
	// UnityEngine.InputSystem.Touchscreen UnityEngine.InputSystem.Touchscreen::<current>k__BackingField
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* ___U3CcurrentU3Ek__BackingField_53;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapTime
	float ___s_TapTime_54;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapDelayTime
	float ___s_TapDelayTime_55;
	// System.Single UnityEngine.InputSystem.Touchscreen::s_TapRadiusSquared
	float ___s_TapRadiusSquared_56;
};

// UnityEngine.InputSystem.Touchscreen

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.InputSystem.Controls.TouchPressControl

// UnityEngine.InputSystem.Controls.TouchPressControl

// UnityEngine.UI.Button

// UnityEngine.UI.Button
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
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* m_Items[1];

	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LaunchButtonControl/<Update>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m056072D25BED97F087752455C477468C5489D81A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LaunchButtonControl/<TCPReceiveData>d__15>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m5142C85028505662A809A775C076BF680854352A_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LaunchButtonControl/<Update>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m2EC29F906911B86996BC8386CF5080A42CB640DA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_function, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LaunchButtonControl/<TCPReceiveData>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m3422AF072B9731159C81DF17DC963093F5E5A59F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* ___1_stateMachine, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_get_Item_m20907EA946F72D55FC8BD8031EA4F9BF13AE164D_gshared (ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LaunchButtonControl/<Update>d__12>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m056072D25BED97F087752455C477468C5489D81A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m056072D25BED97F087752455C477468C5489D81A_gshared)(__this, ___0_stateMachine, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LaunchButtonControl/<TCPReceiveData>d__15>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m5142C85028505662A809A775C076BF680854352A (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m5142C85028505662A809A775C076BF680854352A_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String TCPConnection::ReceiveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TCPConnection_ReceiveData_m97064B32C2D927D7B1CC81F5217623CBEA721F0D (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void TCPConnection::SendData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPConnection_SendData_mABB16FF6D756EE76EF6B87FC356D7A7F35B4D562 (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task LaunchButtonControl::TCPReceiveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LaunchButtonControl_TCPReceiveData_m3C9725F372C0374412CED321D8D7D4EB8611F386 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___0_millisecondsDelay, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* Task_WhenAny_mB37C83589A7905F54439E02A6F75E2F7EA150019 (TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* ___0_tasks, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::GetAwaiter()
inline TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3 (Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 (*) (Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148 (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>,LaunchButtonControl/<Update>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m8D864A774323D68EF188DCA65181C53AFB8B3E57 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* ___0_awaiter, U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*, U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m2EC29F906911B86996BC8386CF5080A42CB640DA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>::GetResult()
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* __this, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void LaunchButtonControl/<Update>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__12_MoveNext_m6C085034981C1B7A443C481F2946F8AA79FB7E42 (U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void LaunchButtonControl/<Update>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__12_SetStateMachine_m19C77735B0B1C3E91C88777E17D6186213F7E0F8 (U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.String[]>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mA160C9E5D9920E34222EF230D4061FB0CDD5690A (Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.String[]>(System.Func`1<TResult>)
inline Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4* Task_Run_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_m30A0A4970A5D9BC0D172D7E609DF152DC6354098 (Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE* ___0_function, const RuntimeMethod* method)
{
	return ((  Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4* (*) (Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE*, const RuntimeMethod*))Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared)(___0_function, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String[]>::GetAwaiter()
inline TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A Task_1_GetAwaiter_mB26BFA07AC14EF917B761C0D201B116283728D55 (Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A (*) (Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mBB1935B8D8B149149221600F42DA9073C73FBD5A (TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>,LaunchButtonControl/<TCPReceiveData>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_mBC5CDDCAC1598E441DCAF4FE957C281E65AC062D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A* ___0_awaiter, U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A*, U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m3422AF072B9731159C81DF17DC963093F5E5A59F_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>::GetResult()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* TaskAwaiter_1_GetResult_m83205D2CAC0257ACFB3799DA5DD484B0D4B9DDED (TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void LaunchButtonControl/<TCPReceiveData>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTCPReceiveDataU3Ed__15_MoveNext_mBD150EB709BE967DA915373F3AFD31232EB4FFF6 (U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void LaunchButtonControl/<TCPReceiveData>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTCPReceiveDataU3Ed__15_SetStateMachine_mE0FDBC189088D8D8E71FD53ADADDDBA8408DA466 (U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Boolean TCPConnection::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCPConnection_Connect_m8E494C2042B976C97692617D86A5E086FA7546F8 (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, const RuntimeMethod* method) ;
// System.Void LaunchButtonControl::setTCPConnection(TCPConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchButtonControl_setTCPConnection_mFE22E7818AB1913267B75822FAF2A9FBCED56335 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* ___0_con, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.TcpClient::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m51F653BB31E296E37086AD7FDC8F34F2F827B57D (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, String_t* ___0_hostname, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayout_TextField_m64415904042BAED0AC8EAD7169358443C2DCF1AD (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E (String_t* ___0_text, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___1_options, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.TcpClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Dispose_m533DFCEE37B4299BBB5FACD9A98F8181EC2386D0 (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Touchscreen UnityEngine.InputSystem.Touchscreen::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* Touchscreen_get_current_m6D9CD2446B30224D18E695DF0ECC3A00E4F7B708_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::get_leftButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* Mouse_get_leftButton_m1015BCBE6BE30B1D1D2702736A4E64120F6B5DFB_inline (Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> UnityEngine.InputSystem.Touchscreen::get_touches()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E Touchscreen_get_touches_mEFA7C5B2A80963C7947BCBDBE6258F5083B1CE66_inline (Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>::get_Item(System.Int32)
inline TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C (ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* (*) (ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m20907EA946F72D55FC8BD8031EA4F9BF13AE164D_gshared)(__this, ___0_index, method);
}
// UnityEngine.InputSystem.Controls.TouchPressControl UnityEngine.InputSystem.Controls.TouchControl::get_press()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB* TouchControl_get_press_mFE6656905CFF085E99AE78F24FF71C0CA5DC5E81_inline (TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* __this, const RuntimeMethod* method) ;
// System.Void TCPTestClient::ConnectToTcpServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestClient_ConnectToTcpServer_m6EDA12B5A5E71D0F9F8903BA786789EC31C2A254 (TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void TCPTestClient::SendMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestClient_SendMessage_mB3D3C021291D4827BECE3663BE658156EFC8DD85 (TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
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
// System.Void LaunchButtonControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchButtonControl_Start_m37991ED341C3AE2BE48F2655091AC917D0C49CE2 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaunchButtonControl_buttonClick_m18C276B5E7D8B7D52D346C4EEC06342DD2524983_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04FA4F20A6C08D4F3DA6BB600F3D56CE9883F7C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ButtonObject = GameObject.Find("LaunchButton");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral04FA4F20A6C08D4F3DA6BB600F3D56CE9883F7C9, NULL);
		__this->___ButtonObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ButtonObject_4), (void*)L_0);
		// launchButton = ButtonObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___ButtonObject_4;
		NullCheck(L_1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_1, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___launchButton_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___launchButton_5), (void*)L_2);
		// launchButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___launchButton_5;
		NullCheck(L_3);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_3, (bool)0, NULL);
		// launchButton.onClick.AddListener(buttonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___launchButton_5;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)LaunchButtonControl_buttonClick_m18C276B5E7D8B7D52D346C4EEC06342DD2524983_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void LaunchButtonControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchButtonControl_Update_m386892365ABB4104D013CE0819B2E08C7D856DE2 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m056072D25BED97F087752455C477468C5489D81A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m056072D25BED97F087752455C477468C5489D81A(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m056072D25BED97F087752455C477468C5489D81A_RuntimeMethod_var);
		return;
	}
}
// System.Void LaunchButtonControl::buttonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchButtonControl_buttonClick_m18C276B5E7D8B7D52D346C4EEC06342DD2524983 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
{
	{
		// _buttonClick = true;
		__this->____buttonClick_12 = (bool)1;
		// }
		return;
	}
}
// System.Void LaunchButtonControl::setTCPConnection(TCPConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchButtonControl_setTCPConnection_mFE22E7818AB1913267B75822FAF2A9FBCED56335 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* ___0_con, const RuntimeMethod* method) 
{
	{
		// TCPCon = con;
		TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_0 = ___0_con;
		__this->___TCPCon_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TCPCon_6), (void*)L_0);
		// _enabledTCP = true;
		__this->____enabledTCP_7 = (bool)1;
		// }
		return;
	}
}
// System.Threading.Tasks.Task LaunchButtonControl::TCPReceiveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LaunchButtonControl_TCPReceiveData_m3C9725F372C0374412CED321D8D7D4EB8611F386 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m5142C85028505662A809A775C076BF680854352A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m5142C85028505662A809A775C076BF680854352A(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_m5142C85028505662A809A775C076BF680854352A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void LaunchButtonControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchButtonControl__ctor_m5A9284D62A0B75EA51A02A5F11FDF86E7A9E2F8D (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int processState = -1;
		__this->___processState_11 = (-1);
		// string[] receiveTCP = new string[] { };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___receiveTCP_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receiveTCP_13), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.String[] LaunchButtonControl::<TCPReceiveData>b__15_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* LaunchButtonControl_U3CTCPReceiveDataU3Eb__15_0_m449DE131C754F6BFB36586B989F48C0C5487E30F (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// await Task.Run(() => receiveTCP = TCPCon.ReceiveData().Split(new string[] { ":" }, System.StringSplitOptions.None));
		TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_0 = __this->___TCPCon_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TCPConnection_ReceiveData_m97064B32C2D927D7B1CC81F5217623CBEA721F0D(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_1, L_3, 0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		V_0 = L_5;
		__this->___receiveTCP_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receiveTCP_13), (void*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
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
// System.Void LaunchButtonControl/<Update>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__12_MoveNext_m6C085034981C1B7A443C481F2946F8AA79FB7E42 (U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m8D864A774323D68EF188DCA65181C53AFB8B3E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D75CD5DAD8312BC1D321AA6E419A0AB39D58559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DEA1AD9978012EAC63532F2AE9FCF814E8C5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FC72675E1A3FC78EAA644800F11DCDC84878868);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB24400D85D869769C316674988EA50F4E330AF5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* V_1 = NULL;
	TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00ed_1;
			}
		}
		{
			// if (!_enabledTCP) return;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->____enabledTCP_7;
			if (L_4)
			{
				goto IL_0021_1;
			}
		}
		{
			// if (!_enabledTCP) return;
			goto IL_0227;
		}

IL_0021_1:
		{
			// if (!_enabledLaunch)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = L_5->____enabledLaunch_8;
			if (L_6)
			{
				goto IL_0048_1;
			}
		}
		{
			// controlPhase = ControlPhase.WaitEnable;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_7 = V_1;
			NullCheck(L_7);
			L_7->___controlPhase_9 = 0;
			// launchButton.interactable = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_8 = V_1;
			NullCheck(L_8);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = L_8->___launchButton_5;
			NullCheck(L_9);
			Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_9, (bool)0, NULL);
			// _buttonClick = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_10 = V_1;
			NullCheck(L_10);
			L_10->____buttonClick_12 = (bool)0;
			// return;
			goto IL_0227;
		}

IL_0048_1:
		{
			// caseTime += Time.deltaTime;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_11 = V_1;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_12 = V_1;
			NullCheck(L_12);
			float L_13 = L_12->___caseTime_10;
			float L_14;
			L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
			NullCheck(L_11);
			L_11->___caseTime_10 = ((float)il2cpp_codegen_add(L_13, L_14));
			// if (caseTime >= 0.05f)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_15 = V_1;
			NullCheck(L_15);
			float L_16 = L_15->___caseTime_10;
			if ((!(((float)L_16) >= ((float)(0.0500000007f)))))
			{
				goto IL_0152_1;
			}
		}
		{
			// caseTime = 0.0f;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_17 = V_1;
			NullCheck(L_17);
			L_17->___caseTime_10 = (0.0f);
			// if(controlPhase != ControlPhase.WaitBallLaunch)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_18 = V_1;
			NullCheck(L_18);
			int32_t L_19 = L_18->___controlPhase_9;
			if ((((int32_t)L_19) == ((int32_t)2)))
			{
				goto IL_008e_1;
			}
		}
		{
			// TCPCon.SendData("GET:st1_processState:");
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_20 = V_1;
			NullCheck(L_20);
			TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_21 = L_20->___TCPCon_6;
			NullCheck(L_21);
			TCPConnection_SendData_mABB16FF6D756EE76EF6B87FC356D7A7F35B4D562(L_21, _stringLiteralDB24400D85D869769C316674988EA50F4E330AF5, NULL);
		}

IL_008e_1:
		{
			// var task = TCPReceiveData();
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_22 = V_1;
			NullCheck(L_22);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_23;
			L_23 = LaunchButtonControl_TCPReceiveData_m3C9725F372C0374412CED321D8D7D4EB8611F386(L_22, NULL);
			__this->___U3CtaskU3E5__2_3 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__2_3), (void*)L_23);
			// if (await Task.WhenAny(task, Task.Delay(1000)) == task)
			TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_24 = (TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3*)(TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3*)SZArrayNew(TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var, (uint32_t)2);
			TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_25 = L_24;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_26 = __this->___U3CtaskU3E5__2_3;
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, L_26);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_26);
			TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_27 = L_25;
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_28;
			L_28 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(((int32_t)1000), NULL);
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, L_28);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_28);
			Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* L_29;
			L_29 = Task_WhenAny_mB37C83589A7905F54439E02A6F75E2F7EA150019(L_27, NULL);
			NullCheck(L_29);
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_30;
			L_30 = Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3(L_29, Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3_RuntimeMethod_var);
			V_2 = L_30;
			bool L_31;
			L_31 = TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148((&V_2), TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_0109_1;
			}
		}
		{
			int32_t L_32 = 0;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_33 = V_2;
			__this->___U3CU3Eu__1_4 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_34 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m8D864A774323D68EF188DCA65181C53AFB8B3E57(L_34, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D_m8D864A774323D68EF188DCA65181C53AFB8B3E57_RuntimeMethod_var);
			goto IL_023a;
		}

IL_00ed_1:
		{
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_35 = __this->___U3CU3Eu__1_4;
			V_2 = L_35;
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* L_36 = (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_36, sizeof(TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_0109_1:
		{
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_38;
			L_38 = TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC((&V_2), TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC_RuntimeMethod_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_39 = __this->___U3CtaskU3E5__2_3;
			if ((!(((RuntimeObject*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_38) == ((RuntimeObject*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_39))))
			{
				goto IL_0141_1;
			}
		}
		{
			// if (receiveTCP[0].Contains("st1_processState"))
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_40 = V_1;
			NullCheck(L_40);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40->___receiveTCP_13;
			NullCheck(L_41);
			int32_t L_42 = 0;
			String_t* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
			NullCheck(L_43);
			bool L_44;
			L_44 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_43, _stringLiteral1D75CD5DAD8312BC1D321AA6E419A0AB39D58559, NULL);
			if (!L_44)
			{
				goto IL_014b_1;
			}
		}
		{
			// processState = int.Parse(receiveTCP[1]);
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_45 = V_1;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_46 = V_1;
			NullCheck(L_46);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46->___receiveTCP_13;
			NullCheck(L_47);
			int32_t L_48 = 1;
			String_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
			int32_t L_50;
			L_50 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_49, NULL);
			NullCheck(L_45);
			L_45->___processState_11 = L_50;
			goto IL_014b_1;
		}

IL_0141_1:
		{
			// Debug.Log("TCP Error");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral26DEA1AD9978012EAC63532F2AE9FCF814E8C5C1, NULL);
		}

IL_014b_1:
		{
			// }
			__this->___U3CtaskU3E5__2_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__2_3), (void*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL);
		}

IL_0152_1:
		{
			// switch (controlPhase)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_51 = V_1;
			NullCheck(L_51);
			int32_t L_52 = L_51->___controlPhase_9;
			V_3 = L_52;
			int32_t L_53 = V_3;
			switch (L_53)
			{
				case 0:
				{
					goto IL_0174_1;
				}
				case 1:
				{
					goto IL_01a0_1;
				}
				case 2:
				{
					goto IL_01dc_1;
				}
				case 3:
				{
					goto IL_01fd_1;
				}
			}
		}
		{
			goto IL_020c_1;
		}

IL_0174_1:
		{
			// launchButton.interactable = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_54 = V_1;
			NullCheck(L_54);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_55 = L_54->___launchButton_5;
			NullCheck(L_55);
			Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_55, (bool)0, NULL);
			// if(processState == 0)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_56 = V_1;
			NullCheck(L_56);
			int32_t L_57 = L_56->___processState_11;
			if (L_57)
			{
				goto IL_020c_1;
			}
		}
		{
			// launchButton.interactable = true;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_58 = V_1;
			NullCheck(L_58);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_59 = L_58->___launchButton_5;
			NullCheck(L_59);
			Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_59, (bool)1, NULL);
			// controlPhase = ControlPhase.WaitPush;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_60 = V_1;
			NullCheck(L_60);
			L_60->___controlPhase_9 = 1;
			// break;
			goto IL_020c_1;
		}

IL_01a0_1:
		{
			// if (_buttonClick || processState != 0)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_61 = V_1;
			NullCheck(L_61);
			bool L_62 = L_61->____buttonClick_12;
			if (L_62)
			{
				goto IL_01b0_1;
			}
		}
		{
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_63 = V_1;
			NullCheck(L_63);
			int32_t L_64 = L_63->___processState_11;
			if (!L_64)
			{
				goto IL_020c_1;
			}
		}

IL_01b0_1:
		{
			// TCPCon.SendData("SET:st1_ballLaunch:");
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_65 = V_1;
			NullCheck(L_65);
			TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_66 = L_65->___TCPCon_6;
			NullCheck(L_66);
			TCPConnection_SendData_mABB16FF6D756EE76EF6B87FC356D7A7F35B4D562(L_66, _stringLiteral8FC72675E1A3FC78EAA644800F11DCDC84878868, NULL);
			// controlPhase = ControlPhase.WaitBallLaunch;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_67 = V_1;
			NullCheck(L_67);
			L_67->___controlPhase_9 = 2;
			// launchButton.interactable = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_68 = V_1;
			NullCheck(L_68);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_69 = L_68->___launchButton_5;
			NullCheck(L_69);
			Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_69, (bool)0, NULL);
			// _buttonClick = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_70 = V_1;
			NullCheck(L_70);
			L_70->____buttonClick_12 = (bool)0;
			// break;
			goto IL_020c_1;
		}

IL_01dc_1:
		{
			// TCPCon.SendData("SET:st1_ballLaunch:");
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_71 = V_1;
			NullCheck(L_71);
			TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_72 = L_71->___TCPCon_6;
			NullCheck(L_72);
			TCPConnection_SendData_mABB16FF6D756EE76EF6B87FC356D7A7F35B4D562(L_72, _stringLiteral8FC72675E1A3FC78EAA644800F11DCDC84878868, NULL);
			// if (processState != 0)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_73 = V_1;
			NullCheck(L_73);
			int32_t L_74 = L_73->___processState_11;
			if (!L_74)
			{
				goto IL_020c_1;
			}
		}
		{
			// controlPhase = ControlPhase.WaitBallOut;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_75 = V_1;
			NullCheck(L_75);
			L_75->___controlPhase_9 = 3;
			// break;
			goto IL_020c_1;
		}

IL_01fd_1:
		{
			// if (processState == 0)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_76 = V_1;
			NullCheck(L_76);
			int32_t L_77 = L_76->___processState_11;
			if (L_77)
			{
				goto IL_020c_1;
			}
		}
		{
			// controlPhase = ControlPhase.WaitEnable;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_78 = V_1;
			NullCheck(L_78);
			L_78->___controlPhase_9 = 0;
		}

IL_020c_1:
		{
			goto IL_0227;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_020e;
		}
		throw e;
	}

CATCH_020e:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_79 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_80 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_79, L_80, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_023a;
	}// end catch (depth: 1)

IL_0227:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_81 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_81, NULL);
	}

IL_023a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__12_MoveNext_m6C085034981C1B7A443C481F2946F8AA79FB7E42_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D*>(__this + _offset);
	U3CUpdateU3Ed__12_MoveNext_m6C085034981C1B7A443C481F2946F8AA79FB7E42(_thisAdjusted, method);
}
// System.Void LaunchButtonControl/<Update>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__12_SetStateMachine_m19C77735B0B1C3E91C88777E17D6186213F7E0F8 (U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__12_SetStateMachine_m19C77735B0B1C3E91C88777E17D6186213F7E0F8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__12_tB8432358B6DA2A61234A7891955CF1871AF1737D*>(__this + _offset);
	U3CUpdateU3Ed__12_SetStateMachine_m19C77735B0B1C3E91C88777E17D6186213F7E0F8(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LaunchButtonControl/<TCPReceiveData>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTCPReceiveDataU3Ed__15_MoveNext_mBD150EB709BE967DA915373F3AFD31232EB4FFF6 (U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_mBC5CDDCAC1598E441DCAF4FE957C281E65AC062D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaunchButtonControl_U3CTCPReceiveDataU3Eb__15_0_m449DE131C754F6BFB36586B989F48C0C5487E30F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m83205D2CAC0257ACFB3799DA5DD484B0D4B9DDED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mBB1935B8D8B149149221600F42DA9073C73FBD5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mB26BFA07AC14EF917B761C0D201B116283728D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_m30A0A4970A5D9BC0D172D7E609DF152DC6354098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* V_1 = NULL;
	TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051_1;
			}
		}
		{
			// await Task.Run(() => receiveTCP = TCPCon.ReceiveData().Split(new string[] { ":" }, System.StringSplitOptions.None));
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_3 = V_1;
			Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE* L_4 = (Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE*)il2cpp_codegen_object_new(Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Func_1__ctor_mA160C9E5D9920E34222EF230D4061FB0CDD5690A(L_4, L_3, (intptr_t)((void*)LaunchButtonControl_U3CTCPReceiveDataU3Eb__15_0_m449DE131C754F6BFB36586B989F48C0C5487E30F_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_tE31926224A424AEAE794D9D841B463DE8C3889D4* L_5;
			L_5 = Task_Run_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_m30A0A4970A5D9BC0D172D7E609DF152DC6354098(L_4, Task_Run_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_m30A0A4970A5D9BC0D172D7E609DF152DC6354098_RuntimeMethod_var);
			NullCheck(L_5);
			TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A L_6;
			L_6 = Task_1_GetAwaiter_mB26BFA07AC14EF917B761C0D201B116283728D55(L_5, Task_1_GetAwaiter_mB26BFA07AC14EF917B761C0D201B116283728D55_RuntimeMethod_var);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_mBB1935B8D8B149149221600F42DA9073C73FBD5A((&V_2), TaskAwaiter_1_get_IsCompleted_mBB1935B8D8B149149221600F42DA9073C73FBD5A_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_mBC5CDDCAC1598E441DCAF4FE957C281E65AC062D(L_10, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F_mBC5CDDCAC1598E441DCAF4FE957C281E65AC062D_RuntimeMethod_var);
			goto IL_00a1;
		}

IL_0051_1:
		{
			TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A* L_12 = (TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_006d_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14;
			L_14 = TaskAwaiter_1_GetResult_m83205D2CAC0257ACFB3799DA5DD484B0D4B9DDED((&V_2), TaskAwaiter_1_GetResult_m83205D2CAC0257ACFB3799DA5DD484B0D4B9DDED_RuntimeMethod_var);
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_15 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_16 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_15, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a1;
	}// end catch (depth: 1)

IL_008e:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_17, NULL);
	}

IL_00a1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTCPReceiveDataU3Ed__15_MoveNext_mBD150EB709BE967DA915373F3AFD31232EB4FFF6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F*>(__this + _offset);
	U3CTCPReceiveDataU3Ed__15_MoveNext_mBD150EB709BE967DA915373F3AFD31232EB4FFF6(_thisAdjusted, method);
}
// System.Void LaunchButtonControl/<TCPReceiveData>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTCPReceiveDataU3Ed__15_SetStateMachine_mE0FDBC189088D8D8E71FD53ADADDDBA8408DA466 (U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTCPReceiveDataU3Ed__15_SetStateMachine_mE0FDBC189088D8D8E71FD53ADADDDBA8408DA466_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTCPReceiveDataU3Ed__15_t1844D5E3F0FAA3A4A977688B826BD0691E1BC92F*>(__this + _offset);
	U3CTCPReceiveDataU3Ed__15_SetStateMachine_mE0FDBC189088D8D8E71FD53ADADDDBA8408DA466(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainControl_Start_mF312DAC47AF69FA976384EC6BE8D9973F57AD97E (MainControl_tB6B2F9693976F8BA95CCC3E48F7C4B002C2B0DDE* __this, const RuntimeMethod* method) 
{
	{
		// if (_useTCP)
		bool L_0 = __this->____useTCP_5;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// if (TCPcon.Connect())
		TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_1 = __this->___TCPcon_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = TCPConnection_Connect_m8E494C2042B976C97692617D86A5E086FA7546F8(L_1, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// _TCPConnected = true;
		__this->____TCPConnected_7 = (bool)1;
		// launchButtonControl.setTCPConnection(TCPcon);
		LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_3 = __this->___launchButtonControl_6;
		TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_4 = __this->___TCPcon_4;
		NullCheck(L_3);
		LaunchButtonControl_setTCPConnection_mFE22E7818AB1913267B75822FAF2A9FBCED56335(L_3, L_4, NULL);
	}

IL_002d:
	{
		// launchButtonControl._enabledLaunch = true;
		LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_5 = __this->___launchButtonControl_6;
		NullCheck(L_5);
		L_5->____enabledLaunch_8 = (bool)1;
		// }
		return;
	}
}
// System.Void MainControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainControl_Update_mC19562AEFA5FC3312CF12D55A3837408E976659B (MainControl_tB6B2F9693976F8BA95CCC3E48F7C4B002C2B0DDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6ECD9DA586D0BEE942EE64B5972BFB412CC6D0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_TCPConnected && _useTCP)
		bool L_0 = __this->____TCPConnected_7;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		bool L_1 = __this->____useTCP_5;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// Debug.Log("Non TCP Connection");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB6ECD9DA586D0BEE942EE64B5972BFB412CC6D0A, NULL);
		// return;
		return;
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void MainControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainControl__ctor_m2B2210A74E2F0F655B7C4A47972AD180CC4BEC48 (MainControl_tB6B2F9693976F8BA95CCC3E48F7C4B002C2B0DDE* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool _useTCP = true;
		__this->____useTCP_5 = (bool)1;
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
// System.Void TCPClient::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_Awake_mC2EE22D235345E47B8453B98674175A0F394A6A8 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44A4C68059EF44A091851ECB8AC776660839BFCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514741D662272615A569DEDBFBF335E68A2FAFE6);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Debug.LogFormat(m_ipAddress + "????");
		String_t* L_0 = __this->___m_ipAddress_4;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral44A4C68059EF44A091851ECB8AC776660839BFCF, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(L_1, L_2, NULL);
		// m_tcpClient = new TcpClient(m_ipAddress, m_port);
		String_t* L_3 = __this->___m_ipAddress_4;
		int32_t L_4 = __this->___m_port_5;
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_5 = (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)il2cpp_codegen_object_new(TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TcpClient__ctor_m51F653BB31E296E37086AD7FDC8F34F2F827B57D(L_5, L_3, L_4, NULL);
		__this->___m_tcpClient_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_tcpClient_6), (void*)L_5);
		// m_networkStream = m_tcpClient.GetStream();
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_6 = __this->___m_tcpClient_6;
		NullCheck(L_6);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_7;
		L_7 = TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA(L_6, NULL);
		__this->___m_networkStream_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_networkStream_7), (void*)L_7);
		// m_isConnection = true;
		__this->___m_isConnection_8 = (bool)1;
		// Debug.LogFormat("????");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral514741D662272615A569DEDBFBF335E68A2FAFE6, L_8, NULL);
		// }
		goto IL_0067;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{// begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException)
		// Debug.LogError("????");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDA97DEF9C54B8707EF4BDC449EE30FB1D247338)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0067;
	}// end catch (depth: 1)

IL_0067:
	{
		// }
		return;
	}
}
// System.Void TCPClient::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_OnGUI_m20C74190B28C62AC706C4FA3660FD8DD97B35C78 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94A6ADE7049C8C56AA2ACA9C1C81FB706F464137);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81B2A9DC4148829420893BA9EAE4A715BA7299C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8F2F8573A363FD6AAE2D57D9F5981AEEACC0B4D);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!m_isConnection)
		bool L_0 = __this->___m_isConnection_8;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// GUILayout.Label("????????");
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_1;
		L_1 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		GUILayout_Label_m1709C16A433383CCFC1FEA0E585E14CBD78CD94B(_stringLiteralC8F2F8573A363FD6AAE2D57D9F5981AEEACC0B4D, L_1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// m_message = GUILayout.TextField(m_message);
		String_t* L_2 = __this->___m_message_9;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3;
		L_3 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		String_t* L_4;
		L_4 = GUILayout_TextField_m64415904042BAED0AC8EAD7169358443C2DCF1AD(L_2, L_3, NULL);
		__this->___m_message_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_message_9), (void*)L_4);
		// if (GUILayout.Button("??"))
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_inline(Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var);
		bool L_6;
		L_6 = GUILayout_Button_m8CF27DB531C6A54FF0F7BD8CDE4FB5030B159E9E(_stringLiteralB81B2A9DC4148829420893BA9EAE4A715BA7299C, L_5, NULL);
		if (!L_6)
		{
			goto IL_0088;
		}
	}
	try
	{// begin try (depth: 1)
		// var buffer = Encoding.UTF8.GetBytes(m_message);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_8 = __this->___m_message_9;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, L_8);
		V_0 = L_9;
		// m_networkStream.Write(buffer, 0, buffer.Length);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_10 = __this->___m_networkStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)));
		// Debug.LogFormat("?????{0}", m_message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		String_t* L_15 = __this->___m_message_9;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral94A6ADE7049C8C56AA2ACA9C1C81FB706F464137, L_14, NULL);
		// }
		goto IL_0088;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007b;
		}
		throw e;
	}

CATCH_007b:
	{// begin catch(System.Exception)
		// catch (Exception)
		// Debug.LogError("????");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16E6665FD2D70C2AB3B1A05BB0B7DDFBB000B4DC)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0088;
	}// end catch (depth: 1)

IL_0088:
	{
		// }
		return;
	}
}
// System.Void TCPClient::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient_OnDestroy_m9E889317C5E42AF8B17861033FC065CEDF81743F (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBA48D26FA11BB0C1511A0BFCF790CBEEC801D32);
		s_Il2CppMethodInitialized = true;
	}
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* G_B2_0 = NULL;
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* G_B1_0 = NULL;
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* G_B5_0 = NULL;
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* G_B4_0 = NULL;
	{
		// m_tcpClient?.Dispose();
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_0 = __this->___m_tcpClient_6;
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		TcpClient_Dispose_m533DFCEE37B4299BBB5FACD9A98F8181EC2386D0(G_B2_0, NULL);
	}

IL_0011:
	{
		// m_networkStream?.Dispose();
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_2 = __this->___m_networkStream_7;
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001d;
		}
	}
	{
		goto IL_0022;
	}

IL_001d:
	{
		NullCheck(G_B5_0);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(G_B5_0, NULL);
	}

IL_0022:
	{
		// Debug.Log("??");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCBA48D26FA11BB0C1511A0BFCF790CBEEC801D32, NULL);
		// }
		return;
	}
}
// System.Void TCPClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPClient__ctor_m9134901FF2D14FE1845B9016969626F00504D5D7 (TCPClient_t173087DF11AF8C1A74088363BE85884F43A3D6A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA34E42F95E26EE39BFEC728A45AE28A931F938F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string m_ipAddress = "192.168.1.16";
		__this->___m_ipAddress_4 = _stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ipAddress_4), (void*)_stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474);
		// public int m_port = 2001;
		__this->___m_port_5 = ((int32_t)2001);
		// private string m_message = "?????"; // ???????????
		__this->___m_message_9 = _stringLiteralFA34E42F95E26EE39BFEC728A45AE28A931F938F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_message_9), (void*)_stringLiteralFA34E42F95E26EE39BFEC728A45AE28A931F938F);
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
// System.Boolean TCPConnection::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCPConnection_Connect_m8E494C2042B976C97692617D86A5E086FA7546F8 (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D605A9087410128B41F667A579D1A26C21F6F6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// tcpClient = new TcpClient(IPAddress, Port);
		String_t* L_0 = __this->___IPAddress_4;
		int32_t L_1 = __this->___Port_5;
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_2 = (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)il2cpp_codegen_object_new(TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TcpClient__ctor_m51F653BB31E296E37086AD7FDC8F34F2F827B57D(L_2, L_0, L_1, NULL);
		__this->___tcpClient_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tcpClient_6), (void*)L_2);
		// networkStream = tcpClient.GetStream();
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_3 = __this->___tcpClient_6;
		NullCheck(L_3);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_4;
		L_4 = TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA(L_3, NULL);
		__this->___networkStream_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___networkStream_7), (void*)L_4);
		// _isConnection = true;
		__this->____isConnection_8 = (bool)1;
		// Debug.Log("Connected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB6D605A9087410128B41F667A579D1A26C21F6F6, NULL);
		// }
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003b;
		}
		throw e;
	}

CATCH_003b:
	{// begin catch(System.Object)
		// catch
		// Debug.LogError("Connection Failed");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCF49E00F6A7E8B5D6244E20C74A1752B3241384)), NULL);
		// return false;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004c;
	}// end catch (depth: 1)

IL_004a:
	{
		// return true;
		return (bool)1;
	}

IL_004c:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void TCPConnection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPConnection_Update_m14A59BDE6CCAB4E4A37F061D8DDA90443F11D526 (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* V_0 = NULL;
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* V_1 = NULL;
	ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!_isConnection)
		bool L_0 = __this->____isConnection_8;
		if (L_0)
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
		// var mouseInput = Mouse.current;
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_1;
		L_1 = Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline(NULL);
		V_0 = L_1;
		// var touchInput = Touchscreen.current;
		Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* L_2;
		L_2 = Touchscreen_get_current_m6D9CD2446B30224D18E695DF0ECC3A00E4F7B708_inline(NULL);
		V_1 = L_2;
		// if (mouseInput != null)
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// _isPressed = mouseInput.leftButton.wasPressedThisFrame;
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_4 = V_0;
		NullCheck(L_4);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_5;
		L_5 = Mouse_get_leftButton_m1015BCBE6BE30B1D1D2702736A4E64120F6B5DFB_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B(L_5, NULL);
	}

IL_0024:
	{
		// if (touchInput != null)
		Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// _isPressed = touchInput.touches[0].press.wasPressedThisFrame;
		Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* L_8 = V_1;
		NullCheck(L_8);
		ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E L_9;
		L_9 = Touchscreen_get_touches_mEFA7C5B2A80963C7947BCBDBE6258F5083B1CE66_inline(L_8, NULL);
		V_2 = L_9;
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_10;
		L_10 = ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C((&V_2), 0, ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C_RuntimeMethod_var);
		NullCheck(L_10);
		TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB* L_11;
		L_11 = TouchControl_get_press_mFE6656905CFF085E99AE78F24FF71C0CA5DC5E81_inline(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B(L_11, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void TCPConnection::SendData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPConnection_SendData_mABB16FF6D756EE76EF6B87FC356D7A7F35B4D562 (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2852A3BF696AE8671BC2EA5E25B5AC307B40C9D6);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// var buffer = Encoding.UTF8.GetBytes(str);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_str;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// networkStream.Write(buffer, 0, buffer.Length);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_3 = __this->___networkStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)));
		// Debug.Log("Sent:" + str);
		String_t* L_6 = ___0_str;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2852A3BF696AE8671BC2EA5E25B5AC307B40C9D6, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		goto IL_003b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002e;
		}
		throw e;
	}

CATCH_002e:
	{// begin catch(System.Exception)
		// catch (Exception)
		// Debug.LogError("Send Failed");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5EEAE25D1AE198E9AFA361876D17701175F40C1E)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003b;
	}// end catch (depth: 1)

IL_003b:
	{
		// }
		return;
	}
}
// System.String TCPConnection::ReceiveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TCPConnection_ReceiveData_m97064B32C2D927D7B1CC81F5217623CBEA721F0D (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// var rcvbuffer = new byte[256];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_1 = L_0;
		// var count = networkStream.Read(rcvbuffer, 0, rcvbuffer.Length);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_1 = __this->___networkStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_2 = L_4;
		// returnMess = Encoding.UTF8.GetString(rcvbuffer, 0, count);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_5);
		String_t* L_8;
		L_8 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		V_0 = L_8;
		// Debug.Log(returnMess);
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{// begin catch(System.Exception)
		// catch (Exception)
		// Debug.LogError("Recv Failed");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F9F7EE93A53188BA468B07C8536933C365149F8)), NULL);
		// returnMess = "Error";
		V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0045;
	}// end catch (depth: 1)

IL_0045:
	{
		// return returnMess;
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.Void TCPConnection::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPConnection_OnDestroy_m0CE06348A3D5F9D4F978A0929F879F2C16B5DEA5 (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15ABA1A04898BEFC8B3C8918C10803CACA669ECD);
		s_Il2CppMethodInitialized = true;
	}
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* G_B2_0 = NULL;
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* G_B1_0 = NULL;
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* G_B5_0 = NULL;
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* G_B4_0 = NULL;
	{
		// tcpClient?.Dispose();
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_0 = __this->___tcpClient_6;
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		TcpClient_Dispose_m533DFCEE37B4299BBB5FACD9A98F8181EC2386D0(G_B2_0, NULL);
	}

IL_0011:
	{
		// networkStream?.Dispose();
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_2 = __this->___networkStream_7;
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001d;
		}
	}
	{
		goto IL_0022;
	}

IL_001d:
	{
		NullCheck(G_B5_0);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(G_B5_0, NULL);
	}

IL_0022:
	{
		// Debug.Log("Disconnected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral15ABA1A04898BEFC8B3C8918C10803CACA669ECD, NULL);
		// }
		return;
	}
}
// System.Void TCPConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPConnection__ctor_mBA6ED71094BBA03075ED4A6DA7EE182CCBCC4C96 (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02B516CD596E9A24F34F191D56C40E22CFA5310);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public string IPAddress = "192.168.1.16";
		__this->___IPAddress_4 = _stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IPAddress_4), (void*)_stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474);
		// [SerializeField] public int Port = 2001;
		__this->___Port_5 = ((int32_t)2001);
		// private string SendMess = "testes";
		__this->___SendMess_9 = _stringLiteralE02B516CD596E9A24F34F191D56C40E22CFA5310;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SendMess_9), (void*)_stringLiteralE02B516CD596E9A24F34F191D56C40E22CFA5310);
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
// System.Void TCPTestClient::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestClient_Start_m15BE93C6335AE35A33979473B141E96A75838299 (TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8* __this, const RuntimeMethod* method) 
{
	{
		// ConnectToTcpServer();
		TCPTestClient_ConnectToTcpServer_m6EDA12B5A5E71D0F9F8903BA786789EC31C2A254(__this, NULL);
		// }
		return;
	}
}
// System.Void TCPTestClient::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestClient_Update_m53F2B81DC22D45AA4B23D8168F91A4BA48FC4AA8 (TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space))// || Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.Log("space");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		// SendMessage();
		TCPTestClient_SendMessage_mB3D3C021291D4827BECE3663BE658156EFC8DD85(__this, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void TCPTestClient::ConnectToTcpServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestClient_ConnectToTcpServer_m6EDA12B5A5E71D0F9F8903BA786789EC31C2A254 (TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCPTestClient_ListenForData_mC7FC0FB92F3E0EF83BBF8706B03DBB9831BCDCC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Exception_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	try
	{// begin try (depth: 1)
		// clientReceiveThread = new Thread(new ThreadStart(ListenForData));
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_0 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_0, __this, (intptr_t)((void*)TCPTestClient_ListenForData_mC7FC0FB92F3E0EF83BBF8706B03DBB9831BCDCC9_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_1, L_0, NULL);
		__this->___clientReceiveThread_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clientReceiveThread_5), (void*)L_1);
		// clientReceiveThread.IsBackground = true;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->___clientReceiveThread_5;
		NullCheck(L_2);
		Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30(L_2, (bool)1, NULL);
		// clientReceiveThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = __this->___clientReceiveThread_5;
		NullCheck(L_3);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_3, NULL);
		// }
		goto IL_004f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0030:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("On client connect exception " + e);
			Exception_t* L_4 = V_0;
			Exception_t* L_5 = L_4;
			G_B2_0 = L_5;
			G_B2_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EB9F752AC11E7072F12A3FD98802A2F19E81518));
			if (L_5)
			{
				G_B3_0 = L_5;
				G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EB9F752AC11E7072F12A3FD98802A2F19E81518));
				goto IL_003e;
			}
		}
		{
			G_B4_0 = ((String_t*)(NULL));
			G_B4_1 = G_B2_1;
			goto IL_0043;
		}

IL_003e:
		{
			NullCheck(G_B3_0);
			String_t* L_6;
			L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
			G_B4_0 = L_6;
			G_B4_1 = G_B3_1;
		}

IL_0043:
		{
			String_t* L_7;
			L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_004f;
		}
	}// end catch (depth: 1)

IL_004f:
	{
		// }
		return;
	}
}
// System.Void TCPTestClient::ListenForData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestClient_ListenForData_mC7FC0FB92F3E0EF83BBF8706B03DBB9831BCDCC9 (TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C084E5A72DDE0B6DF5C0E5C4368A2D90616AD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	String_t* V_4 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	try
	{// begin try (depth: 1)
		{
			// socketConnection = new TcpClient("192.168.1.16", 443);
			TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_0 = (TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58*)il2cpp_codegen_object_new(TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var);
			NullCheck(L_0);
			TcpClient__ctor_m51F653BB31E296E37086AD7FDC8F34F2F827B57D(L_0, _stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474, ((int32_t)443), NULL);
			__this->___socketConnection_4 = L_0;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___socketConnection_4), (void*)L_0);
			// Byte[] bytes = new Byte[1024];
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
			V_0 = L_1;
		}

IL_0020_1:
		{
			// using (NetworkStream stream = socketConnection.GetStream())
			TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_2 = __this->___socketConnection_4;
			NullCheck(L_2);
			NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_3;
			L_3 = TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA(L_2, NULL);
			V_1 = L_3;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_006e_1:
				{// begin finally (depth: 2)
					{
						NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_4 = V_1;
						if (!L_4)
						{
							goto IL_0077_1;
						}
					}
					{
						NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_5 = V_1;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
					}

IL_0077_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_005d_2;
				}

IL_002e_2:
				{
					// var incommingData = new byte[length];
					int32_t L_6 = V_2;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
					V_3 = L_7;
					// Array.Copy(bytes, 0, incommingData, 0, length);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_3;
					int32_t L_10 = V_2;
					Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
					// string serverMessage = Encoding.ASCII.GetString(incommingData);
					Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
					L_11 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
					NullCheck(L_11);
					String_t* L_13;
					L_13 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_11, L_12);
					V_4 = L_13;
					// Debug.Log("server message received as: " + serverMessage);
					String_t* L_14 = V_4;
					String_t* L_15;
					L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral67C084E5A72DDE0B6DF5C0E5C4368A2D90616AD8, L_14, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
				}

IL_005d_2:
				{
					// while ((length = stream.Read(bytes, 0, bytes.Length)) != 0)
					NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_16 = V_1;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
					NullCheck(L_18);
					NullCheck(L_16);
					int32_t L_19;
					L_19 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)));
					int32_t L_20 = L_19;
					V_2 = L_20;
					if (L_20)
					{
						goto IL_002e_2;
					}
				}
				{
					// }
					goto IL_0020_1;
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
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0078;
		}
		throw e;
	}

CATCH_0078:
	{// begin catch(System.Net.Sockets.SocketException)
		{
			// catch (SocketException socketException)
			V_5 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
			// Debug.LogError("Socket exception: " + socketException);
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_21 = V_5;
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_22 = L_21;
			G_B10_0 = L_22;
			G_B10_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BDBE49F8400C8FDAB7F40A18406E3E11C2BAB22));
			if (L_22)
			{
				G_B11_0 = L_22;
				G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BDBE49F8400C8FDAB7F40A18406E3E11C2BAB22));
				goto IL_0088;
			}
		}
		{
			G_B12_0 = ((String_t*)(NULL));
			G_B12_1 = G_B10_1;
			goto IL_008d;
		}

IL_0088:
		{
			NullCheck(G_B11_0);
			String_t* L_23;
			L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
			G_B12_0 = L_23;
			G_B12_1 = G_B11_1;
		}

IL_008d:
		{
			String_t* L_24;
			L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B12_1, G_B12_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_24, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0099;
		}
	}// end catch (depth: 1)

IL_0099:
	{
		// }
		return;
	}
}
// System.Void TCPTestClient::SendMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestClient_SendMessage_mB3D3C021291D4827BECE3663BE658156EFC8DD85 (TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52000E07B24F803890FB7BCC4F106161587D307D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B41E39F1231FA81834C28469E9416087B99054E);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		// if (socketConnection == null)
		TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_0 = __this->___socketConnection_4;
		if (L_0)
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
	}
	try
	{// begin try (depth: 1)
		{
			// NetworkStream stream = socketConnection.GetStream();
			TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* L_1 = __this->___socketConnection_4;
			NullCheck(L_1);
			NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_2;
			L_2 = TcpClient_GetStream_mDD54336B17D1267BD593E0A1EB9EDF3E9506AEBA(L_1, NULL);
			V_0 = L_2;
			// if (stream.CanWrite)
			NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_3 = V_0;
			NullCheck(L_3);
			bool L_4;
			L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
			if (!L_4)
			{
				goto IL_0045_1;
			}
		}
		{
			// string clientMessage = "This is a message from one of your clients.";
			V_1 = _stringLiteral52000E07B24F803890FB7BCC4F106161587D307D;
			// byte[] clientMessageAsByteArray = Encoding.ASCII.GetBytes(clientMessage);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
			String_t* L_6 = V_1;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// stream.Write(clientMessageAsByteArray, 0, clientMessageAsByteArray.Length);
			NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_8 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
			// Debug.Log("Client sent his message - should be received by server");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7B41E39F1231FA81834C28469E9416087B99054E, NULL);
		}

IL_0045_1:
		{
			// }
			goto IL_0066;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{// begin catch(System.Net.Sockets.SocketException)
		{
			// catch (SocketException socketException)
			V_3 = ((SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*)IL2CPP_GET_ACTIVE_EXCEPTION(SocketException_t6D10102A62EA871BD31748E026A372DB6804083B*));
			// Debug.Log("Socket exception: " + socketException);
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_11 = V_3;
			SocketException_t6D10102A62EA871BD31748E026A372DB6804083B* L_12 = L_11;
			G_B7_0 = L_12;
			G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BDBE49F8400C8FDAB7F40A18406E3E11C2BAB22));
			if (L_12)
			{
				G_B8_0 = L_12;
				G_B8_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BDBE49F8400C8FDAB7F40A18406E3E11C2BAB22));
				goto IL_0055;
			}
		}
		{
			G_B9_0 = ((String_t*)(NULL));
			G_B9_1 = G_B7_1;
			goto IL_005a;
		}

IL_0055:
		{
			NullCheck(G_B8_0);
			String_t* L_13;
			L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
			G_B9_0 = L_13;
			G_B9_1 = G_B8_1;
		}

IL_005a:
		{
			String_t* L_14;
			L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0066;
		}
	}// end catch (depth: 1)

IL_0066:
	{
		// }
		return;
	}
}
// System.Void TCPTestClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPTestClient__ctor_m23F3049AD180F29522F99BF39669A11AD87905F3 (TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public new static Mouse current { get; private set; }
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_0 = ((Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_58;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* Touchscreen_get_current_m6D9CD2446B30224D18E695DF0ECC3A00E4F7B708_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public new static Touchscreen current { get; internal set; }
		Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* L_0 = ((Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_StaticFields*)il2cpp_codegen_static_fields_for(Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_53;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* Mouse_get_leftButton_m1015BCBE6BE30B1D1D2702736A4E64120F6B5DFB_inline (Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl leftButton { get; protected set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CleftButtonU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E Touchscreen_get_touches_mEFA7C5B2A80963C7947BCBDBE6258F5083B1CE66_inline (Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<TouchControl> touches { get; protected set; }
		ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E L_0 = __this->___U3CtouchesU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB* TouchControl_get_press_mFE6656905CFF085E99AE78F24FF71C0CA5DC5E81_inline (TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* __this, const RuntimeMethod* method) 
{
	{
		// public TouchPressControl press { get; set; }
		TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB* L_0 = __this->___U3CpressU3Ek__BackingField_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}

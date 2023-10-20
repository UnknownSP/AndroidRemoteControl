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
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.String[]>
struct Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.LowLevel.TouchState>
struct InputProcessor_1_tCC7634AB386F9C6888B89C0FD440251E67C5D8F7;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
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
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.LowLevel.TouchState>[]
struct InputProcessor_1U5BU5D_t2D9B681F9F0B39759619A0D4617FB6B20FB10AC0;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;
// UnityEngine.InputSystem.Controls.TouchControl[]
struct TouchControlU5BU5D_t339733075857CFF82B4E43BFB310F2350225836D;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
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
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// CanvasControl
struct CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Configuration
struct Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// DebugControl
struct DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5;
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
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LaunchButtonControl
struct LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// MainControl
struct MainControl_tB6B2F9693976F8BA95CCC3E48F7C4B002C2B0DDE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.Sockets.NetworkStream
struct NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
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
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// UnityEngine.InputSystem.Controls.TouchControl
struct TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079;
// TouchHandler
struct TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D;
// UnityEngine.InputSystem.Controls.TouchPhaseControl
struct TouchPhaseControl_t4652C6E0EBFAFA85A31607769876B02C1C9FCAEC;
// UnityEngine.InputSystem.Controls.TouchPressControl
struct TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB;
// UnityEngine.InputSystem.Touchscreen
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
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
IL2CPP_EXTERN_C RuntimeClass* InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t6D10102A62EA871BD31748E026A372DB6804083B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral04FA4F20A6C08D4F3DA6BB600F3D56CE9883F7C9;
IL2CPP_EXTERN_C String_t* _stringLiteral09AB0A9CAD00EDEF1954EAB926F14CD620F14925;
IL2CPP_EXTERN_C String_t* _stringLiteral15ABA1A04898BEFC8B3C8918C10803CACA669ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral16E6665FD2D70C2AB3B1A05BB0B7DDFBB000B4DC;
IL2CPP_EXTERN_C String_t* _stringLiteral1D75CD5DAD8312BC1D321AA6E419A0AB39D58559;
IL2CPP_EXTERN_C String_t* _stringLiteral26DEA1AD9978012EAC63532F2AE9FCF814E8C5C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2852A3BF696AE8671BC2EA5E25B5AC307B40C9D6;
IL2CPP_EXTERN_C String_t* _stringLiteral44A4C68059EF44A091851ECB8AC776660839BFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3;
IL2CPP_EXTERN_C String_t* _stringLiteral514741D662272615A569DEDBFBF335E68A2FAFE6;
IL2CPP_EXTERN_C String_t* _stringLiteral52000E07B24F803890FB7BCC4F106161587D307D;
IL2CPP_EXTERN_C String_t* _stringLiteral5EEAE25D1AE198E9AFA361876D17701175F40C1E;
IL2CPP_EXTERN_C String_t* _stringLiteral60AF2C3EBDFC3A8140C3F6A52C29BF1C3D033C5B;
IL2CPP_EXTERN_C String_t* _stringLiteral63717794632FEDA33FCF6C202E592B6EA4DBC7F8;
IL2CPP_EXTERN_C String_t* _stringLiteral658A0E1FBA82B1261E098063C321163ED90EA5BD;
IL2CPP_EXTERN_C String_t* _stringLiteral67C084E5A72DDE0B6DF5C0E5C4368A2D90616AD8;
IL2CPP_EXTERN_C String_t* _stringLiteral682D22B77E6029500DCCD177A903BE6C580695CC;
IL2CPP_EXTERN_C String_t* _stringLiteral7B41E39F1231FA81834C28469E9416087B99054E;
IL2CPP_EXTERN_C String_t* _stringLiteral7BDBE49F8400C8FDAB7F40A18406E3E11C2BAB22;
IL2CPP_EXTERN_C String_t* _stringLiteral847FC3359E97A47DBE965F3CC41A2CFB6E4A7DC0;
IL2CPP_EXTERN_C String_t* _stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E7027D8D9266BD65C4CBB3B12146654C9DEBEF5;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9F7EE93A53188BA468B07C8536933C365149F8;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC72675E1A3FC78EAA644800F11DCDC84878868;
IL2CPP_EXTERN_C String_t* _stringLiteral94A6ADE7049C8C56AA2ACA9C1C81FB706F464137;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB9F752AC11E7072F12A3FD98802A2F19E81518;
IL2CPP_EXTERN_C String_t* _stringLiteralAB939E9BEF36D27CFB2FE9A376A25DBE0C4424FF;
IL2CPP_EXTERN_C String_t* _stringLiteralB3010E39F14639546C30061191E11EB17704B21A;
IL2CPP_EXTERN_C String_t* _stringLiteralB48475A65AC268BFA05EEC8E93F39C4DA21036D2;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D605A9087410128B41F667A579D1A26C21F6F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB6ECD9DA586D0BEE942EE64B5972BFB412CC6D0A;
IL2CPP_EXTERN_C String_t* _stringLiteralB81B2A9DC4148829420893BA9EAE4A715BA7299C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC198DCACBE0FBD82F39CAC3EB1570D48130175C;
IL2CPP_EXTERN_C String_t* _stringLiteralBFFF00872D05AB6A966525632704E7A260E066A4;
IL2CPP_EXTERN_C String_t* _stringLiteralC8F2F8573A363FD6AAE2D57D9F5981AEEACC0B4D;
IL2CPP_EXTERN_C String_t* _stringLiteralCBA48D26FA11BB0C1511A0BFCF790CBEEC801D32;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD9E7FF569066AE0F61DA67674C12A2CA5401E1BB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB24400D85D869769C316674988EA50F4E330AF5;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA97DEF9C54B8707EF4BDC449EE30FB1D247338;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB6648B16F17C9A3E8F10D9082AF6A680B61B54;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3;
IL2CPP_EXTERN_C String_t* _stringLiteralFA34E42F95E26EE39BFEC728A45AE28A931F938F;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF49E00F6A7E8B5D6244E20C74A1752B3241384;
IL2CPP_EXTERN_C String_t* _stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14_mC7F345AC4C0CA86560FAA00174268F70FBBE577F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m8011DBA7813DDC567CF2CBBCCD3D6EA28CAA7882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m582DAC89FF92CE4B380DEEEC48A9C4446E75CAC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_mD1DF0DA97B578F22F225AAA61C0E9CB3E8BB88FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m02C44DB75C164CEA7686258C61BB9C4A418332E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CanvasControl_GMButtonClick_m15EDE6C69FCA7F811530736B341B9086971BF7A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CanvasControl_TMButtonClick_m41C94512597636A6D395260920FAB2ABF2261B76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DebugControl_ButtonClick_mA79C1E94DA9A14D051BE278F035A7CA023D8A509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5_mBFC82FE49D8475F519B7CE8705C656AB8A9CC645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LaunchButtonControl_U3CTCPReceiveDataU3Eb__16_0_m03C414442EA6774DCE16D553E49F3627058F5763_RuntimeMethod_var;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
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

// LaunchButtonControl/<Update>d__13
struct U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59 
{
	// System.Int32 LaunchButtonControl/<Update>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder LaunchButtonControl/<Update>d__13::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// LaunchButtonControl LaunchButtonControl/<Update>d__13::<>4__this
	LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* ___U3CU3E4__this_2;
	// System.Threading.Tasks.Task LaunchButtonControl/<Update>d__13::<task>5__2
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CtaskU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task> LaunchButtonControl/<Update>d__13::<>u__1
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

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue_26;
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

// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String[] UnityEngine.InputSystem.InputSettings::m_SupportedDevices
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_SupportedDevices_4;
	// UnityEngine.InputSystem.InputSettings/UpdateMode UnityEngine.InputSystem.InputSettings::m_UpdateMode
	int32_t ___m_UpdateMode_5;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxEventBytesPerUpdate
	int32_t ___m_MaxEventBytesPerUpdate_6;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxQueuedEventsPerUpdate
	int32_t ___m_MaxQueuedEventsPerUpdate_7;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_CompensateForScreenOrientation
	bool ___m_CompensateForScreenOrientation_8;
	// UnityEngine.InputSystem.InputSettings/BackgroundBehavior UnityEngine.InputSystem.InputSettings::m_BackgroundBehavior
	int32_t ___m_BackgroundBehavior_9;
	// UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode UnityEngine.InputSystem.InputSettings::m_EditorInputBehaviorInPlayMode
	int32_t ___m_EditorInputBehaviorInPlayMode_10;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMin
	float ___m_DefaultDeadzoneMin_11;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMax
	float ___m_DefaultDeadzoneMax_12;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultButtonPressPoint
	float ___m_DefaultButtonPressPoint_13;
	// System.Single UnityEngine.InputSystem.InputSettings::m_ButtonReleaseThreshold
	float ___m_ButtonReleaseThreshold_14;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultTapTime
	float ___m_DefaultTapTime_15;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultSlowTapTime
	float ___m_DefaultSlowTapTime_16;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultHoldTime
	float ___m_DefaultHoldTime_17;
	// System.Single UnityEngine.InputSystem.InputSettings::m_TapRadius
	float ___m_TapRadius_18;
	// System.Single UnityEngine.InputSystem.InputSettings::m_MultiTapDelayTime
	float ___m_MultiTapDelayTime_19;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_DisableRedundantEventsMerging
	bool ___m_DisableRedundantEventsMerging_20;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_ShortcutKeysConsumeInputs
	bool ___m_ShortcutKeysConsumeInputs_21;
	// System.Collections.Generic.HashSet`1<System.String> UnityEngine.InputSystem.InputSettings::m_FeatureFlags
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___m_FeatureFlags_22;
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// LaunchButtonControl/<TCPReceiveData>d__16
struct U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F 
{
	// System.Int32 LaunchButtonControl/<TCPReceiveData>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder LaunchButtonControl/<TCPReceiveData>d__16::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// LaunchButtonControl LaunchButtonControl/<TCPReceiveData>d__16::<>4__this
	LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]> LaunchButtonControl/<TCPReceiveData>d__16::<>u__1
	TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A ___U3CU3Eu__1_3;
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

// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432  : public InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
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

// CanvasControl
struct CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Configuration CanvasControl::config
	Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* ___config_4;
	// CanvasControl/DisplayCanvas CanvasControl::displayCanvas
	int32_t ___displayCanvas_5;
	// UnityEngine.UI.Button CanvasControl::testModeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___testModeButton_6;
	// UnityEngine.UI.Button CanvasControl::gameModeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___gameModeButton_7;
	// UnityEngine.GameObject CanvasControl::MainCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MainCanvas_8;
	// UnityEngine.GameObject CanvasControl::TestModeCanvas_1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TestModeCanvas_1_9;
	// UnityEngine.GameObject CanvasControl::TestModeCanvas_2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TestModeCanvas_2_10;
	// UnityEngine.GameObject CanvasControl::TestModeHeader
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TestModeHeader_11;
	// System.Boolean CanvasControl::_canvasMoving
	bool ____canvasMoving_12;
	// System.Boolean CanvasControl::_moveTestMode
	bool ____moveTestMode_13;
	// System.Boolean CanvasControl::_moveGameMode
	bool ____moveGameMode_14;
	// System.Single CanvasControl::deltaTime
	float ___deltaTime_15;
	// System.Single CanvasControl::moveTMTime
	float ___moveTMTime_16;
	// System.Single CanvasControl::moveGMTime
	float ___moveGMTime_17;
	// DebugControl CanvasControl::debugControl
	DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* ___debugControl_18;
};

// Configuration
struct Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Configuration::_useTCP
	bool ____useTCP_4;
	// System.Int32 Configuration::displayWidth
	int32_t ___displayWidth_5;
	// System.Int32 Configuration::displayHeight
	int32_t ___displayHeight_6;
	// System.Single Configuration::canvasMovingTime
	float ___canvasMovingTime_7;
	// System.Single Configuration::longTapTime
	float ___longTapTime_8;
	// System.Single Configuration::flickTime
	float ___flickTime_9;
	// System.Single Configuration::flickStartPosL
	float ___flickStartPosL_10;
	// System.Single Configuration::flickStartPosR
	float ___flickStartPosR_11;
	// System.Single Configuration::flickMoveY
	float ___flickMoveY_12;
	// System.Single Configuration::flickMoveX
	float ___flickMoveX_13;
};

// DebugControl
struct DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DebugControl::CanvasObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CanvasObject_4;
	// TMPro.TextMeshProUGUI DebugControl::debugText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___debugText_5;
	// UnityEngine.UI.Button DebugControl::debugButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___debugButton_6;
	// System.String DebugControl::text
	String_t* ___text_7;
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
	// Configuration LaunchButtonControl::config
	Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* ___config_7;
	// System.Boolean LaunchButtonControl::_enabledTCP
	bool ____enabledTCP_8;
	// System.Boolean LaunchButtonControl::_enabledLaunch
	bool ____enabledLaunch_9;
	// LaunchButtonControl/ControlPhase LaunchButtonControl::controlPhase
	int32_t ___controlPhase_10;
	// System.Single LaunchButtonControl::caseTime
	float ___caseTime_11;
	// System.Int32 LaunchButtonControl::processState
	int32_t ___processState_12;
	// System.Boolean LaunchButtonControl::_buttonClick
	bool ____buttonClick_13;
	// System.String[] LaunchButtonControl::receiveTCP
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___receiveTCP_14;
};

// MainControl
struct MainControl_tB6B2F9693976F8BA95CCC3E48F7C4B002C2B0DDE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TCPConnection MainControl::TCPcon
	TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* ___TCPcon_4;
	// LaunchButtonControl MainControl::launchButtonControl
	LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* ___launchButtonControl_5;
	// System.Boolean MainControl::_TCPConnected
	bool ____TCPConnected_6;
	// Configuration MainControl::config
	Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* ___config_7;
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
};

// TCPTestClient
struct TCPTestClient_t715989F35B20C04B32AAC36E68213E59065E78A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Net.Sockets.TcpClient TCPTestClient::socketConnection
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ___socketConnection_4;
	// System.Threading.Thread TCPTestClient::clientReceiveThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___clientReceiveThread_5;
};

// TouchHandler
struct TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Configuration TouchHandler::config
	Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* ___config_4;
	// UnityEngine.InputSystem.InputSettings TouchHandler::inputSettings
	InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* ___inputSettings_5;
	// System.Boolean TouchHandler::_pressed
	bool ____pressed_6;
	// System.Boolean TouchHandler::_tapped
	bool ____tapped_7;
	// System.Boolean TouchHandler::_longtapped
	bool ____longtapped_8;
	// System.Boolean TouchHandler::_flickLtoR
	bool ____flickLtoR_9;
	// System.Boolean TouchHandler::_flickRtoL
	bool ____flickRtoL_10;
	// UnityEngine.Vector2 TouchHandler::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_11;
	// System.Boolean TouchHandler::_tapmoved
	bool ____tapmoved_12;
	// UnityEngine.Vector2 TouchHandler::maxPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maxPosition_13;
	// UnityEngine.Vector2 TouchHandler::minPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minPosition_14;
	// System.Single TouchHandler::tapTime
	float ___tapTime_15;
	// DebugControl TouchHandler::debugControl
	DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* ___debugControl_16;
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

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
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

// System.Double

// System.Double

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

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// LaunchButtonControl/<Update>d__13

// LaunchButtonControl/<Update>d__13

// System.Func`1<System.String[]>

// System.Func`1<System.String[]>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF_StaticFields
{
	// System.Boolean UnityEngine.InputSystem.InputSettings::optimizedControlsFeatureEnabled
	bool ___optimizedControlsFeatureEnabled_23;
	// System.Boolean UnityEngine.InputSystem.InputSettings::readValueCachingFeatureEnabled
	bool ___readValueCachingFeatureEnabled_24;
	// System.Boolean UnityEngine.InputSystem.InputSettings::paranoidReadValueCachingChecksEnabled
	bool ___paranoidReadValueCachingChecksEnabled_25;
};

// UnityEngine.InputSystem.InputSettings

// System.Threading.ThreadStart

// System.Threading.ThreadStart

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// LaunchButtonControl/<TCPReceiveData>d__16

// LaunchButtonControl/<TCPReceiveData>d__16

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.InputSystem.Controls.TouchControl

// UnityEngine.InputSystem.Controls.TouchControl

// UnityEngine.InputSystem.Controls.Vector2Control

// UnityEngine.InputSystem.Controls.Vector2Control

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_40;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_41;
};

// UnityEngine.InputSystem.Controls.ButtonControl

// CanvasControl

// CanvasControl

// Configuration

// Configuration

// DebugControl

// DebugControl

// LaunchButtonControl

// LaunchButtonControl

// MainControl

// MainControl

// System.Net.Sockets.SocketException

// System.Net.Sockets.SocketException

// TCPClient

// TCPClient

// TCPConnection

// TCPConnection

// TCPTestClient

// TCPTestClient

// TouchHandler

// TouchHandler

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

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
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
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LaunchButtonControl/<Update>d__13>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m02C44DB75C164CEA7686258C61BB9C4A418332E0_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LaunchButtonControl/<TCPReceiveData>d__16>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m582DAC89FF92CE4B380DEEEC48A9C4446E75CAC5_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LaunchButtonControl/<Update>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m394A7CEDAFCD1D92C9282BD61AC3D0574FC92F38_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_function, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,LaunchButtonControl/<TCPReceiveData>d__16>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m896D3E1ADF2FE0E34A2118D4837E6367E70CBD8E_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* ___1_stateMachine, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_get_Item_m20907EA946F72D55FC8BD8031EA4F9BF13AE164D_gshared (ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Configuration>()
inline Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<DebugControl>()
inline DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* GameObject_GetComponent_TisDebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5_mBFC82FE49D8475F519B7CE8705C656AB8A9CC645 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void CanvasControl::CanvasSet_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_CanvasSet_Default_m7505B4029D2EC94A99460B3AB544ECBD1E8047D9 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Boolean CanvasControl::CanvasMove_TestMode(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasControl_CanvasMove_TestMode_m78C4304FAA1A7E71A8F34E4B18B265FFB70B0951 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, float ___0_nowTime, const RuntimeMethod* method) ;
// System.Boolean CanvasControl::CanvasMove_GameMode(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasControl_CanvasMove_GameMode_mF5772B32040A385E21D45782ED99A90AAEEF993F (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, float ___0_nowTime, const RuntimeMethod* method) ;
// System.Void DebugControl::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl_SetActive_m87906D092271BA76CD770FE4727B1413B900A3AE (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, bool ___0__active, const RuntimeMethod* method) ;
// System.Void CanvasControl::CanvasSet_1ToGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_CanvasSet_1ToGM_m61D491D3B4DCF777F72DD40DF61F7CAD6C4BD5C6 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) ;
// System.Void CanvasControl::CanvasSet_2ToGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_CanvasSet_2ToGM_mFFD2D0D2E0168F87007A423DC6B98A1591491749 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void CanvasControl::CanvasSet_TMDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_CanvasSet_TMDefault_m2821CCB1910E61EE2D6C7AC203DD0A5E3B571798 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LaunchButtonControl/<Update>d__13>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m02C44DB75C164CEA7686258C61BB9C4A418332E0 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m02C44DB75C164CEA7686258C61BB9C4A418332E0_gshared)(__this, ___0_stateMachine, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<LaunchButtonControl/<TCPReceiveData>d__16>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m582DAC89FF92CE4B380DEEEC48A9C4446E75CAC5 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m582DAC89FF92CE4B380DEEEC48A9C4446E75CAC5_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.String TCPConnection::ReceiveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TCPConnection_ReceiveData_m97064B32C2D927D7B1CC81F5217623CBEA721F0D (TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task>,LaunchButtonControl/<Update>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_mD1DF0DA97B578F22F225AAA61C0E9CB3E8BB88FE (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* ___0_awaiter, U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*, U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m394A7CEDAFCD1D92C9282BD61AC3D0574FC92F38_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
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
// System.Void LaunchButtonControl/<Update>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__13_MoveNext_m482740C54AF901662F1BFBF270A7EA5EC83A476B (U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void LaunchButtonControl/<Update>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__13_SetStateMachine_mE1DDFF9758EE52502B23A708D998A90B6119C58C (U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>,LaunchButtonControl/<TCPReceiveData>d__16>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m8011DBA7813DDC567CF2CBBCCD3D6EA28CAA7882 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A* ___0_awaiter, U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A*, U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m896D3E1ADF2FE0E34A2118D4837E6367E70CBD8E_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
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
// System.Void LaunchButtonControl/<TCPReceiveData>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTCPReceiveDataU3Ed__16_MoveNext_mA026EA566F78A687DBB7E11092D288D0B572BF8A (U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void LaunchButtonControl/<TCPReceiveData>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTCPReceiveDataU3Ed__16_SetStateMachine_mD88C3FBD76A739D867B9F4A7527E43010F26AA8E (U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
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
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_m665B20BF660DA7CC22E9B316B51F5B980BC491B2 (String_t* ___0_className, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.InputSettings::get_tapRadius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputSettings_get_tapRadius_m669BD4AE475CF1B27CE75EA8C3A2D7EDB93E6C50_inline (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Touchscreen UnityEngine.InputSystem.Touchscreen::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* Touchscreen_get_current_m6D9CD2446B30224D18E695DF0ECC3A00E4F7B708_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl> UnityEngine.InputSystem.Touchscreen::get_touches()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E Touchscreen_get_touches_mEFA7C5B2A80963C7947BCBDBE6258F5083B1CE66_inline (Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Controls.TouchControl>::get_Item(System.Int32)
inline TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C (ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* (*) (ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m20907EA946F72D55FC8BD8031EA4F9BF13AE164D_gshared)(__this, ___0_index, method);
}
// UnityEngine.InputSystem.Controls.TouchPressControl UnityEngine.InputSystem.Controls.TouchControl::get_press()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB* TouchControl_get_press_mFE6656905CFF085E99AE78F24FF71C0CA5DC5E81_inline (TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasReleasedThisFrame_m492DB9A10A1EED0FACE2330E230A6DF7650EEC7D (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::get_startPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* TouchControl_get_startPosition_m426A12E819DF1C81A21015C806BC255E69C97783_inline (TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541 (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared)(__this, method);
}
// System.Void DebugControl::AddLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl_AddLog_mF72C3AD1C8312A324C0E33BC0EBA9C661802D22B (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.InputSettings::get_defaultTapTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputSettings_get_defaultTapTime_mC6FD6765646FF55571132E1D60D35B282D8806B7_inline (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Controls.TouchControl::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline (TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
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
// System.Void CanvasControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_Start_m47FE286CFD75AD934F100526B04D9FB5B9B8A888 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasControl_GMButtonClick_m15EDE6C69FCA7F811530736B341B9086971BF7A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasControl_TMButtonClick_m41C94512597636A6D395260920FAB2ABF2261B76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5_mBFC82FE49D8475F519B7CE8705C656AB8A9CC645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63717794632FEDA33FCF6C202E592B6EA4DBC7F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E7027D8D9266BD65C4CBB3B12146654C9DEBEF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3010E39F14639546C30061191E11EB17704B21A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB48475A65AC268BFA05EEC8E93F39C4DA21036D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC198DCACBE0FBD82F39CAC3EB1570D48130175C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9E7FF569066AE0F61DA67674C12A2CA5401E1BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// config = GameObject.Find("Configuration").GetComponent<Configuration>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3, NULL);
		NullCheck(L_0);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_1;
		L_1 = GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB(L_0, GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var);
		__this->___config_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_4), (void*)L_1);
		// MainCanvas = GameObject.Find("MainCanvas");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral63717794632FEDA33FCF6C202E592B6EA4DBC7F8, NULL);
		__this->___MainCanvas_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MainCanvas_8), (void*)L_2);
		// TestModeCanvas_1 = GameObject.Find("TestModeCanvas_1");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD9E7FF569066AE0F61DA67674C12A2CA5401E1BB, NULL);
		__this->___TestModeCanvas_1_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TestModeCanvas_1_9), (void*)L_3);
		// TestModeCanvas_2 = GameObject.Find("TestModeCanvas_2");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralBC198DCACBE0FBD82F39CAC3EB1570D48130175C, NULL);
		__this->___TestModeCanvas_2_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TestModeCanvas_2_10), (void*)L_4);
		// TestModeHeader = GameObject.Find("TestModeHeader");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB3010E39F14639546C30061191E11EB17704B21A, NULL);
		__this->___TestModeHeader_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TestModeHeader_11), (void*)L_5);
		// testModeButton = GameObject.Find("TMButton").GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB48475A65AC268BFA05EEC8E93F39C4DA21036D2, NULL);
		NullCheck(L_6);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7;
		L_7 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_6, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___testModeButton_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testModeButton_6), (void*)L_7);
		// gameModeButton = GameObject.Find("TM_GMButton").GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral8E7027D8D9266BD65C4CBB3B12146654C9DEBEF5, NULL);
		NullCheck(L_8);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9;
		L_9 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_8, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___gameModeButton_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameModeButton_7), (void*)L_9);
		// testModeButton.onClick.AddListener(TMButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___testModeButton_6;
		NullCheck(L_10);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_11;
		L_11 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_10, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_12 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_12, __this, (intptr_t)((void*)CanvasControl_TMButtonClick_m41C94512597636A6D395260920FAB2ABF2261B76_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_11, L_12, NULL);
		// gameModeButton.onClick.AddListener(GMButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___gameModeButton_7;
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_13, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)CanvasControl_GMButtonClick_m15EDE6C69FCA7F811530736B341B9086971BF7A2_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_15, NULL);
		// debugControl = GameObject.Find("MainCamera").GetComponent<DebugControl>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		NullCheck(L_16);
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_17;
		L_17 = GameObject_GetComponent_TisDebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5_mBFC82FE49D8475F519B7CE8705C656AB8A9CC645(L_16, GameObject_GetComponent_TisDebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5_mBFC82FE49D8475F519B7CE8705C656AB8A9CC645_RuntimeMethod_var);
		__this->___debugControl_18 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugControl_18), (void*)L_17);
		// CanvasSet_Default();
		CanvasControl_CanvasSet_Default_m7505B4029D2EC94A99460B3AB544ECBD1E8047D9(__this, NULL);
		// }
		return;
	}
}
// System.Void CanvasControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_Update_m75AB7A1F59B43DA4A429578D8234E24594B605E3 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	{
		// deltaTime = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___deltaTime_15 = L_0;
		// if (_moveTestMode)
		bool L_1 = __this->____moveTestMode_13;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// moveTMTime += deltaTime;
		float L_2 = __this->___moveTMTime_16;
		float L_3 = __this->___deltaTime_15;
		__this->___moveTMTime_16 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if (CanvasMove_TestMode(moveTMTime))
		float L_4 = __this->___moveTMTime_16;
		bool L_5;
		L_5 = CanvasControl_CanvasMove_TestMode_m78C4304FAA1A7E71A8F34E4B18B265FFB70B0951(__this, L_4, NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		// moveTMTime = 0.0f;
		__this->___moveTMTime_16 = (0.0f);
		// _moveTestMode = false;
		__this->____moveTestMode_13 = (bool)0;
		// displayCanvas = DisplayCanvas.TestModeCanvas_1;
		__this->___displayCanvas_5 = 1;
		// _canvasMoving = false;
		__this->____canvasMoving_12 = (bool)0;
	}

IL_0054:
	{
		// if (_moveGameMode)
		bool L_6 = __this->____moveGameMode_14;
		if (!L_6)
		{
			goto IL_009d;
		}
	}
	{
		// moveGMTime += deltaTime;
		float L_7 = __this->___moveGMTime_17;
		float L_8 = __this->___deltaTime_15;
		__this->___moveGMTime_17 = ((float)il2cpp_codegen_add(L_7, L_8));
		// if (CanvasMove_GameMode(moveGMTime))
		float L_9 = __this->___moveGMTime_17;
		bool L_10;
		L_10 = CanvasControl_CanvasMove_GameMode_mF5772B32040A385E21D45782ED99A90AAEEF993F(__this, L_9, NULL);
		if (!L_10)
		{
			goto IL_009d;
		}
	}
	{
		// moveGMTime = 0.0f;
		__this->___moveGMTime_17 = (0.0f);
		// _moveGameMode = false;
		__this->____moveGameMode_14 = (bool)0;
		// displayCanvas = DisplayCanvas.MainCanvas;
		__this->___displayCanvas_5 = 0;
		// _canvasMoving = false;
		__this->____canvasMoving_12 = (bool)0;
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void CanvasControl::TMButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_TMButtonClick_m41C94512597636A6D395260920FAB2ABF2261B76 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	{
		// if(!_canvasMoving && displayCanvas == DisplayCanvas.MainCanvas)
		bool L_0 = __this->____canvasMoving_12;
		if (L_0)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_1 = __this->___displayCanvas_5;
		if (L_1)
		{
			goto IL_003b;
		}
	}
	{
		// _canvasMoving = true;
		__this->____canvasMoving_12 = (bool)1;
		// _moveTestMode = true;
		__this->____moveTestMode_13 = (bool)1;
		// moveTMTime = 0.0f;
		__this->___moveTMTime_16 = (0.0f);
		// CanvasSet_Default();
		CanvasControl_CanvasSet_Default_m7505B4029D2EC94A99460B3AB544ECBD1E8047D9(__this, NULL);
		// debugControl.SetActive(true);
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_2 = __this->___debugControl_18;
		NullCheck(L_2);
		DebugControl_SetActive_m87906D092271BA76CD770FE4727B1413B900A3AE(L_2, (bool)1, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void CanvasControl::GMButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_GMButtonClick_m15EDE6C69FCA7F811530736B341B9086971BF7A2 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!_canvasMoving && (displayCanvas == DisplayCanvas.TestModeCanvas_1 || displayCanvas == DisplayCanvas.TestModeCanvas_2))
		bool L_0 = __this->____canvasMoving_12;
		if (L_0)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_1 = __this->___displayCanvas_5;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = __this->___displayCanvas_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_005e;
		}
	}

IL_001a:
	{
		// _canvasMoving = true;
		__this->____canvasMoving_12 = (bool)1;
		// _moveGameMode = true;
		__this->____moveGameMode_14 = (bool)1;
		// moveGMTime = 0.0f;
		__this->___moveGMTime_17 = (0.0f);
		// switch (displayCanvas)
		int32_t L_3 = __this->___displayCanvas_5;
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0052;
	}

IL_0044:
	{
		// CanvasSet_1ToGM();
		CanvasControl_CanvasSet_1ToGM_m61D491D3B4DCF777F72DD40DF61F7CAD6C4BD5C6(__this, NULL);
		// break;
		goto IL_0052;
	}

IL_004c:
	{
		// CanvasSet_2ToGM();
		CanvasControl_CanvasSet_2ToGM_mFFD2D0D2E0168F87007A423DC6B98A1591491749(__this, NULL);
	}

IL_0052:
	{
		// debugControl.SetActive(false);
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_6 = __this->___debugControl_18;
		NullCheck(L_6);
		DebugControl_SetActive_m87906D092271BA76CD770FE4727B1413B900A3AE(L_6, (bool)0, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void CanvasControl::CanvasSet_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_CanvasSet_Default_m7505B4029D2EC94A99460B3AB544ECBD1E8047D9 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	{
		// MainCanvas.transform.position = new Vector3(0, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MainCanvas_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// TestModeCanvas_1.transform.position = new Vector3(config.displayWidth, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___TestModeCanvas_1_9;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_5 = __this->___config_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), ((float)L_6), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_7, NULL);
		// TestModeHeader.transform.position = new Vector3(config.displayWidth, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___TestModeHeader_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_10 = __this->___config_4;
		NullCheck(L_10);
		int32_t L_11 = L_10->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)L_11), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
		// TestModeCanvas_2.transform.position = new Vector3(config.displayWidth * 2, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___TestModeCanvas_2_10;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_15 = __this->___config_4;
		NullCheck(L_15);
		int32_t L_16 = L_15->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)((int32_t)il2cpp_codegen_multiply(L_16, 2))), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_17, NULL);
		// }
		return;
	}
}
// System.Void CanvasControl::CanvasSet_TMDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_CanvasSet_TMDefault_m2821CCB1910E61EE2D6C7AC203DD0A5E3B571798 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	{
		// MainCanvas.transform.position = new Vector3(-config.displayWidth, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MainCanvas_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_2 = __this->___config_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), ((float)((-L_3))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// TestModeCanvas_1.transform.position = new Vector3(0, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___TestModeCanvas_1_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		// TestModeHeader.transform.position = new Vector3(0, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___TestModeHeader_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		// TestModeCanvas_2.transform.position = new Vector3(config.displayWidth, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___TestModeCanvas_2_10;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_13 = __this->___config_4;
		NullCheck(L_13);
		int32_t L_14 = L_13->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)L_14), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_15, NULL);
		// }
		return;
	}
}
// System.Void CanvasControl::CanvasSet_1ToGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_CanvasSet_1ToGM_m61D491D3B4DCF777F72DD40DF61F7CAD6C4BD5C6 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	{
		// MainCanvas.transform.position = new Vector3(-config.displayWidth, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MainCanvas_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_2 = __this->___config_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), ((float)((-L_3))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// TestModeCanvas_1.transform.position = new Vector3(0, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___TestModeCanvas_1_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		// TestModeHeader.transform.position = new Vector3(0, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___TestModeHeader_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		// TestModeCanvas_2.transform.position = new Vector3(config.displayWidth, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___TestModeCanvas_2_10;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_13 = __this->___config_4;
		NullCheck(L_13);
		int32_t L_14 = L_13->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)L_14), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_15, NULL);
		// }
		return;
	}
}
// System.Void CanvasControl::CanvasSet_2ToGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl_CanvasSet_2ToGM_mFFD2D0D2E0168F87007A423DC6B98A1591491749 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	{
		// MainCanvas.transform.position = new Vector3(-config.displayWidth, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MainCanvas_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_2 = __this->___config_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), ((float)((-L_3))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// TestModeCanvas_1.transform.position = new Vector3(config.displayWidth, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___TestModeCanvas_1_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_7 = __this->___config_4;
		NullCheck(L_7);
		int32_t L_8 = L_7->___displayWidth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)L_8), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// TestModeHeader.transform.position = new Vector3(0, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___TestModeHeader_11;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_12, NULL);
		// TestModeCanvas_2.transform.position = new Vector3(0, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___TestModeCanvas_2_10;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Boolean CanvasControl::CanvasMove_TestMode(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasControl_CanvasMove_TestMode_m78C4304FAA1A7E71A8F34E4B18B265FFB70B0951 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, float ___0_nowTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float timeDiffRatio = (config.canvasMovingTime - nowTime) / config.canvasMovingTime;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_0 = __this->___config_4;
		NullCheck(L_0);
		float L_1 = L_0->___canvasMovingTime_7;
		float L_2 = ___0_nowTime;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_3 = __this->___config_4;
		NullCheck(L_3);
		float L_4 = L_3->___canvasMovingTime_7;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_1, L_2))/L_4));
		// float movingRatio = 1.0f - timeDiffRatio * timeDiffRatio * timeDiffRatio * timeDiffRatio;
		float L_5 = V_0;
		float L_6 = V_0;
		float L_7 = V_0;
		float L_8 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7)), L_8))));
		// if (timeDiffRatio > 0.0f)
		float L_9 = V_0;
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_0113;
		}
	}
	{
		// MainCanvas.transform.position = new Vector3(-config.displayWidth * movingRatio, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___MainCanvas_8;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_12 = __this->___config_4;
		NullCheck(L_12);
		int32_t L_13 = L_12->___displayWidth_5;
		float L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)il2cpp_codegen_multiply(((float)((-L_13))), L_14)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_15, NULL);
		// TestModeCanvas_1.transform.position = new Vector3(config.displayWidth - config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___TestModeCanvas_1_9;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_18 = __this->___config_4;
		NullCheck(L_18);
		int32_t L_19 = L_18->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_20 = __this->___config_4;
		NullCheck(L_20);
		int32_t L_21 = L_20->___displayWidth_5;
		float L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_subtract(((float)L_19), ((float)il2cpp_codegen_multiply(((float)L_21), L_22)))), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_23, NULL);
		// TestModeHeader.transform.position = new Vector3(config.displayWidth - config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___TestModeHeader_11;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_26 = __this->___config_4;
		NullCheck(L_26);
		int32_t L_27 = L_26->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_28 = __this->___config_4;
		NullCheck(L_28);
		int32_t L_29 = L_28->___displayWidth_5;
		float L_30 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), ((float)il2cpp_codegen_subtract(((float)L_27), ((float)il2cpp_codegen_multiply(((float)L_29), L_30)))), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_31, NULL);
		// TestModeCanvas_2.transform.position = new Vector3(config.displayWidth * 2 - config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___TestModeCanvas_2_10;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_34 = __this->___config_4;
		NullCheck(L_34);
		int32_t L_35 = L_34->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_36 = __this->___config_4;
		NullCheck(L_36);
		int32_t L_37 = L_36->___displayWidth_5;
		float L_38 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), ((float)il2cpp_codegen_subtract(((float)((int32_t)il2cpp_codegen_multiply(L_35, 2))), ((float)il2cpp_codegen_multiply(((float)L_37), L_38)))), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_39, NULL);
		goto IL_011b;
	}

IL_0113:
	{
		// CanvasSet_TMDefault();
		CanvasControl_CanvasSet_TMDefault_m2821CCB1910E61EE2D6C7AC203DD0A5E3B571798(__this, NULL);
		// return true;
		return (bool)1;
	}

IL_011b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean CanvasControl::CanvasMove_GameMode(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasControl_CanvasMove_GameMode_mF5772B32040A385E21D45782ED99A90AAEEF993F (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, float ___0_nowTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// float timeDiffRatio = (config.canvasMovingTime - nowTime) / config.canvasMovingTime;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_0 = __this->___config_4;
		NullCheck(L_0);
		float L_1 = L_0->___canvasMovingTime_7;
		float L_2 = ___0_nowTime;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_3 = __this->___config_4;
		NullCheck(L_3);
		float L_4 = L_3->___canvasMovingTime_7;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_1, L_2))/L_4));
		// float movingRatio = 1.0f - timeDiffRatio * timeDiffRatio * timeDiffRatio * timeDiffRatio;
		float L_5 = V_0;
		float L_6 = V_0;
		float L_7 = V_0;
		float L_8 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7)), L_8))));
		// if (timeDiffRatio > 0.0f)
		float L_9 = V_0;
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_01ef;
		}
	}
	{
		// switch (displayCanvas)
		int32_t L_10 = __this->___displayCanvas_5;
		V_2 = L_10;
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		goto IL_01f7;
	}

IL_004a:
	{
		// MainCanvas.transform.position = new Vector3(-config.displayWidth + config.displayWidth * movingRatio, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___MainCanvas_8;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_15 = __this->___config_4;
		NullCheck(L_15);
		int32_t L_16 = L_15->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_17 = __this->___config_4;
		NullCheck(L_17);
		int32_t L_18 = L_17->___displayWidth_5;
		float L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)il2cpp_codegen_add(((float)((-L_16))), ((float)il2cpp_codegen_multiply(((float)L_18), L_19)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_20, NULL);
		// TestModeCanvas_1.transform.position = new Vector3(config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___TestModeCanvas_1_9;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_23 = __this->___config_4;
		NullCheck(L_23);
		int32_t L_24 = L_23->___displayWidth_5;
		float L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), ((float)il2cpp_codegen_multiply(((float)L_24), L_25)), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_26, NULL);
		// TestModeHeader.transform.position = new Vector3(config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___TestModeHeader_11;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_29 = __this->___config_4;
		NullCheck(L_29);
		int32_t L_30 = L_29->___displayWidth_5;
		float L_31 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), ((float)il2cpp_codegen_multiply(((float)L_30), L_31)), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_32, NULL);
		// TestModeCanvas_2.transform.position = new Vector3(config.displayWidth + config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___TestModeCanvas_2_10;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_35 = __this->___config_4;
		NullCheck(L_35);
		int32_t L_36 = L_35->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_37 = __this->___config_4;
		NullCheck(L_37);
		int32_t L_38 = L_37->___displayWidth_5;
		float L_39 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), ((float)il2cpp_codegen_add(((float)L_36), ((float)il2cpp_codegen_multiply(((float)L_38), L_39)))), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_40, NULL);
		// break;
		goto IL_01f7;
	}

IL_011e:
	{
		// MainCanvas.transform.position = new Vector3(-config.displayWidth + config.displayWidth * movingRatio, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___MainCanvas_8;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_43 = __this->___config_4;
		NullCheck(L_43);
		int32_t L_44 = L_43->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_45 = __this->___config_4;
		NullCheck(L_45);
		int32_t L_46 = L_45->___displayWidth_5;
		float L_47 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), ((float)il2cpp_codegen_add(((float)((-L_44))), ((float)il2cpp_codegen_multiply(((float)L_46), L_47)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_48, NULL);
		// TestModeCanvas_1.transform.position = new Vector3(config.displayWidth + config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___TestModeCanvas_1_9;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_51 = __this->___config_4;
		NullCheck(L_51);
		int32_t L_52 = L_51->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_53 = __this->___config_4;
		NullCheck(L_53);
		int32_t L_54 = L_53->___displayWidth_5;
		float L_55 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_56), ((float)il2cpp_codegen_add(((float)L_52), ((float)il2cpp_codegen_multiply(((float)L_54), L_55)))), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_50, L_56, NULL);
		// TestModeHeader.transform.position = new Vector3(config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___TestModeHeader_11;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_59 = __this->___config_4;
		NullCheck(L_59);
		int32_t L_60 = L_59->___displayWidth_5;
		float L_61 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_62), ((float)il2cpp_codegen_multiply(((float)L_60), L_61)), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_58, L_62, NULL);
		// TestModeCanvas_2.transform.position = new Vector3(config.displayWidth * movingRatio, 0, -2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___TestModeCanvas_2_10;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_65 = __this->___config_4;
		NullCheck(L_65);
		int32_t L_66 = L_65->___displayWidth_5;
		float L_67 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_multiply(((float)L_66), L_67)), (0.0f), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_64, L_68, NULL);
		// break;
		goto IL_01f7;
	}

IL_01ef:
	{
		// CanvasSet_Default();
		CanvasControl_CanvasSet_Default_m7505B4029D2EC94A99460B3AB544ECBD1E8047D9(__this, NULL);
		// return true;
		return (bool)1;
	}

IL_01f7:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void CanvasControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasControl__ctor_m7CA0F5F2DEBDAEA4330DE4DB74FFF0BE278BF195 (CanvasControl_tBE62F6F909970F4C0CB463263437E0F7C7E001AF* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Configuration::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_Start_m4DDFF2C2DA3F1A4577FFE161FAD0DA7E2676049C (Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Configuration::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration_Update_m42572306C35DA0CA5025282904E8297B6C48D606 (Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m9DC2BAD8BCD2A9026BD875F0DE49DBB9A19DA0F5 (Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public bool _useTCP = true;
		__this->____useTCP_4 = (bool)1;
		// [SerializeField] public int displayWidth = 1080;
		__this->___displayWidth_5 = ((int32_t)1080);
		// [SerializeField] public int displayHeight = 2280;
		__this->___displayHeight_6 = ((int32_t)2280);
		// [SerializeField] public float canvasMovingTime = 0.3f;
		__this->___canvasMovingTime_7 = (0.300000012f);
		// [SerializeField] public float longTapTime = 0.8f;
		__this->___longTapTime_8 = (0.800000012f);
		// [SerializeField] public float flickTime = 0.3f;
		__this->___flickTime_9 = (0.300000012f);
		// [SerializeField] public float flickStartPosL = 300.0f;
		__this->___flickStartPosL_10 = (300.0f);
		// [SerializeField] public float flickStartPosR = 780.0f;
		__this->___flickStartPosR_11 = (780.0f);
		// [SerializeField] public float flickMoveY = 300.0f;
		__this->___flickMoveY_12 = (300.0f);
		// [SerializeField] public float flickMoveX = 300.0f;
		__this->___flickMoveX_13 = (300.0f);
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
// System.Void DebugControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl_Start_m65A36C60CEEDFCBB22696CD29FDF12AB6EFE793B (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugControl_ButtonClick_mA79C1E94DA9A14D051BE278F035A7CA023D8A509_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AF2C3EBDFC3A8140C3F6A52C29BF1C3D033C5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB939E9BEF36D27CFB2FE9A376A25DBE0C4424FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CanvasObject = GameObject.Find("DebugCanvas");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral60AF2C3EBDFC3A8140C3F6A52C29BF1C3D033C5B, NULL);
		__this->___CanvasObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CanvasObject_4), (void*)L_0);
		// debugText = GameObject.Find("DebugText").GetComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralAB939E9BEF36D27CFB2FE9A376A25DBE0C4424FF, NULL);
		NullCheck(L_1);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2;
		L_2 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_1, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		__this->___debugText_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugText_5), (void*)L_2);
		// debugButton = GameObject.Find("DebugButton").GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF6A3463C3F0A237C6D59BD191E963BE8C8E0E6D3, NULL);
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___debugButton_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugButton_6), (void*)L_4);
		// debugButton.onClick.AddListener(ButtonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___debugButton_6;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)DebugControl_ButtonClick_mA79C1E94DA9A14D051BE278F035A7CA023D8A509_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// CanvasObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___CanvasObject_4;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// text = "";
		__this->___text_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void DebugControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl_Update_m3C3D2FCAAD72DA28DE344BE27ED08C555A0A07D5 (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, const RuntimeMethod* method) 
{
	{
		// debugText.text = text;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___debugText_5;
		String_t* L_1 = __this->___text_7;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void DebugControl::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl_SetActive_m87906D092271BA76CD770FE4727B1413B900A3AE (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, bool ___0__active, const RuntimeMethod* method) 
{
	{
		// CanvasObject.SetActive(_active);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___CanvasObject_4;
		bool L_1 = ___0__active;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DebugControl::AddLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl_AddLog_mF72C3AD1C8312A324C0E33BC0EBA9C661802D22B (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text += str + "\n";
		String_t* L_0 = __this->___text_7;
		String_t* L_1 = ___0_str;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, L_1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___text_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_7), (void*)L_2);
		// }
		return;
	}
}
// System.Void DebugControl::ResetLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl_ResetLog_m92DA4A9B3648DA72ACBE762CA79C11AC354416E9 (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = "";
		__this->___text_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void DebugControl::ButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl_ButtonClick_mA79C1E94DA9A14D051BE278F035A7CA023D8A509 (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = "";
		__this->___text_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void DebugControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugControl__ctor_m29943C0A56B441ACC4E348F2BF78A9A3BAC9690C (DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void LaunchButtonControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchButtonControl_Start_m37991ED341C3AE2BE48F2655091AC917D0C49CE2 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaunchButtonControl_buttonClick_m18C276B5E7D8B7D52D346C4EEC06342DD2524983_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04FA4F20A6C08D4F3DA6BB600F3D56CE9883F7C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// config = GameObject.Find("Configuration").GetComponent<Configuration>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3, NULL);
		NullCheck(L_0);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_1;
		L_1 = GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB(L_0, GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var);
		__this->___config_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_7), (void*)L_1);
		// ButtonObject = GameObject.Find("LaunchButton");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral04FA4F20A6C08D4F3DA6BB600F3D56CE9883F7C9, NULL);
		__this->___ButtonObject_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ButtonObject_4), (void*)L_2);
		// launchButton = ButtonObject.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___ButtonObject_4;
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___launchButton_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___launchButton_5), (void*)L_4);
		// launchButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___launchButton_5;
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)0, NULL);
		// launchButton.onClick.AddListener(buttonClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___launchButton_5;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)LaunchButtonControl_buttonClick_m18C276B5E7D8B7D52D346C4EEC06342DD2524983_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m02C44DB75C164CEA7686258C61BB9C4A418332E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59 V_0;
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
		AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m02C44DB75C164CEA7686258C61BB9C4A418332E0(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_m02C44DB75C164CEA7686258C61BB9C4A418332E0_RuntimeMethod_var);
		return;
	}
}
// System.Void LaunchButtonControl::buttonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchButtonControl_buttonClick_m18C276B5E7D8B7D52D346C4EEC06342DD2524983 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
{
	{
		// _buttonClick = true;
		__this->____buttonClick_13 = (bool)1;
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
		__this->____enabledTCP_8 = (bool)1;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m582DAC89FF92CE4B380DEEEC48A9C4446E75CAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F V_0;
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
		AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m582DAC89FF92CE4B380DEEEC48A9C4446E75CAC5(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m582DAC89FF92CE4B380DEEEC48A9C4446E75CAC5_RuntimeMethod_var);
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
		__this->___processState_12 = (-1);
		// string[] receiveTCP = new string[] { };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___receiveTCP_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receiveTCP_14), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.String[] LaunchButtonControl::<TCPReceiveData>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* LaunchButtonControl_U3CTCPReceiveDataU3Eb__16_0_m03C414442EA6774DCE16D553E49F3627058F5763 (LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* __this, const RuntimeMethod* method) 
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
		__this->___receiveTCP_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___receiveTCP_14), (void*)L_5);
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
// System.Void LaunchButtonControl/<Update>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__13_MoveNext_m482740C54AF901662F1BFBF270A7EA5EC83A476B (U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_mD1DF0DA97B578F22F225AAA61C0E9CB3E8BB88FE_RuntimeMethod_var);
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
				goto IL_00fa_1;
			}
		}
		{
			// if (!_enabledTCP || !config._useTCP) return;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->____enabledTCP_8;
			if (!L_4)
			{
				goto IL_0029_1;
			}
		}
		{
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_5 = V_1;
			NullCheck(L_5);
			Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_6 = L_5->___config_7;
			NullCheck(L_6);
			bool L_7 = L_6->____useTCP_4;
			if (L_7)
			{
				goto IL_002e_1;
			}
		}

IL_0029_1:
		{
			// if (!_enabledTCP || !config._useTCP) return;
			goto IL_0234;
		}

IL_002e_1:
		{
			// if (!_enabledLaunch)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = L_8->____enabledLaunch_9;
			if (L_9)
			{
				goto IL_0055_1;
			}
		}
		{
			// controlPhase = ControlPhase.WaitEnable;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_10 = V_1;
			NullCheck(L_10);
			L_10->___controlPhase_10 = 0;
			// launchButton.interactable = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_11 = V_1;
			NullCheck(L_11);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = L_11->___launchButton_5;
			NullCheck(L_12);
			Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_12, (bool)0, NULL);
			// _buttonClick = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_13 = V_1;
			NullCheck(L_13);
			L_13->____buttonClick_13 = (bool)0;
			// return;
			goto IL_0234;
		}

IL_0055_1:
		{
			// caseTime += Time.deltaTime;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_14 = V_1;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_15 = V_1;
			NullCheck(L_15);
			float L_16 = L_15->___caseTime_11;
			float L_17;
			L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
			NullCheck(L_14);
			L_14->___caseTime_11 = ((float)il2cpp_codegen_add(L_16, L_17));
			// if (caseTime >= 0.05f)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_18 = V_1;
			NullCheck(L_18);
			float L_19 = L_18->___caseTime_11;
			if ((!(((float)L_19) >= ((float)(0.0500000007f)))))
			{
				goto IL_015f_1;
			}
		}
		{
			// caseTime = 0.0f;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_20 = V_1;
			NullCheck(L_20);
			L_20->___caseTime_11 = (0.0f);
			// if(controlPhase != ControlPhase.WaitBallLaunch)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_21 = V_1;
			NullCheck(L_21);
			int32_t L_22 = L_21->___controlPhase_10;
			if ((((int32_t)L_22) == ((int32_t)2)))
			{
				goto IL_009b_1;
			}
		}
		{
			// TCPCon.SendData("GET:st1_processState:");
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_23 = V_1;
			NullCheck(L_23);
			TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_24 = L_23->___TCPCon_6;
			NullCheck(L_24);
			TCPConnection_SendData_mABB16FF6D756EE76EF6B87FC356D7A7F35B4D562(L_24, _stringLiteralDB24400D85D869769C316674988EA50F4E330AF5, NULL);
		}

IL_009b_1:
		{
			// var task = TCPReceiveData();
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_25 = V_1;
			NullCheck(L_25);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_26;
			L_26 = LaunchButtonControl_TCPReceiveData_m3C9725F372C0374412CED321D8D7D4EB8611F386(L_25, NULL);
			__this->___U3CtaskU3E5__2_3 = L_26;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__2_3), (void*)L_26);
			// if (await Task.WhenAny(task, Task.Delay(1000)) == task)
			TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_27 = (TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3*)(TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3*)SZArrayNew(TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var, (uint32_t)2);
			TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_28 = L_27;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_29 = __this->___U3CtaskU3E5__2_3;
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_29);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_29);
			TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_30 = L_28;
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_31;
			L_31 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(((int32_t)1000), NULL);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_31);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_31);
			Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11* L_32;
			L_32 = Task_WhenAny_mB37C83589A7905F54439E02A6F75E2F7EA150019(L_30, NULL);
			NullCheck(L_32);
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_33;
			L_33 = Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3(L_32, Task_1_GetAwaiter_mB7C249D2A7594DE278EC6A3405675C0E1AF09EE3_RuntimeMethod_var);
			V_2 = L_33;
			bool L_34;
			L_34 = TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148((&V_2), TaskAwaiter_1_get_IsCompleted_m8EAC0CF6F7399BA0A01909BE1E0A54FD68812148_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0116_1;
			}
		}
		{
			int32_t L_35 = 0;
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_36 = V_2;
			__this->___U3CU3Eu__1_4 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_37 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_mD1DF0DA97B578F22F225AAA61C0E9CB3E8BB88FE(L_37, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7_TisU3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59_mD1DF0DA97B578F22F225AAA61C0E9CB3E8BB88FE_RuntimeMethod_var);
			goto IL_0247;
		}

IL_00fa_1:
		{
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7 L_38 = __this->___U3CU3Eu__1_4;
			V_2 = L_38;
			TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7* L_39 = (TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_39, sizeof(TaskAwaiter_1_t58AB811C02B57D5FC9B9743F62F501304B2053F7));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
		}

IL_0116_1:
		{
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_41;
			L_41 = TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC((&V_2), TaskAwaiter_1_GetResult_m7FA9C259934C2CF76F8F2AF6045F8B9E258475FC_RuntimeMethod_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_42 = __this->___U3CtaskU3E5__2_3;
			if ((!(((RuntimeObject*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_41) == ((RuntimeObject*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_42))))
			{
				goto IL_014e_1;
			}
		}
		{
			// if (receiveTCP[0].Contains("st1_processState"))
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_43 = V_1;
			NullCheck(L_43);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43->___receiveTCP_14;
			NullCheck(L_44);
			int32_t L_45 = 0;
			String_t* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
			NullCheck(L_46);
			bool L_47;
			L_47 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_46, _stringLiteral1D75CD5DAD8312BC1D321AA6E419A0AB39D58559, NULL);
			if (!L_47)
			{
				goto IL_0158_1;
			}
		}
		{
			// processState = int.Parse(receiveTCP[1]);
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_48 = V_1;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_49 = V_1;
			NullCheck(L_49);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49->___receiveTCP_14;
			NullCheck(L_50);
			int32_t L_51 = 1;
			String_t* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
			int32_t L_53;
			L_53 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_52, NULL);
			NullCheck(L_48);
			L_48->___processState_12 = L_53;
			goto IL_0158_1;
		}

IL_014e_1:
		{
			// Debug.Log("TCP Error");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral26DEA1AD9978012EAC63532F2AE9FCF814E8C5C1, NULL);
		}

IL_0158_1:
		{
			// }
			__this->___U3CtaskU3E5__2_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtaskU3E5__2_3), (void*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL);
		}

IL_015f_1:
		{
			// switch (controlPhase)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_54 = V_1;
			NullCheck(L_54);
			int32_t L_55 = L_54->___controlPhase_10;
			V_3 = L_55;
			int32_t L_56 = V_3;
			switch (L_56)
			{
				case 0:
				{
					goto IL_0181_1;
				}
				case 1:
				{
					goto IL_01ad_1;
				}
				case 2:
				{
					goto IL_01e9_1;
				}
				case 3:
				{
					goto IL_020a_1;
				}
			}
		}
		{
			goto IL_0219_1;
		}

IL_0181_1:
		{
			// launchButton.interactable = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_57 = V_1;
			NullCheck(L_57);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_58 = L_57->___launchButton_5;
			NullCheck(L_58);
			Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_58, (bool)0, NULL);
			// if(processState == 0)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_59 = V_1;
			NullCheck(L_59);
			int32_t L_60 = L_59->___processState_12;
			if (L_60)
			{
				goto IL_0219_1;
			}
		}
		{
			// launchButton.interactable = true;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_61 = V_1;
			NullCheck(L_61);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_62 = L_61->___launchButton_5;
			NullCheck(L_62);
			Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_62, (bool)1, NULL);
			// controlPhase = ControlPhase.WaitPush;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_63 = V_1;
			NullCheck(L_63);
			L_63->___controlPhase_10 = 1;
			// break;
			goto IL_0219_1;
		}

IL_01ad_1:
		{
			// if (_buttonClick || processState != 0)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_64 = V_1;
			NullCheck(L_64);
			bool L_65 = L_64->____buttonClick_13;
			if (L_65)
			{
				goto IL_01bd_1;
			}
		}
		{
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_66 = V_1;
			NullCheck(L_66);
			int32_t L_67 = L_66->___processState_12;
			if (!L_67)
			{
				goto IL_0219_1;
			}
		}

IL_01bd_1:
		{
			// TCPCon.SendData("SET:st1_ballLaunch:");
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_68 = V_1;
			NullCheck(L_68);
			TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_69 = L_68->___TCPCon_6;
			NullCheck(L_69);
			TCPConnection_SendData_mABB16FF6D756EE76EF6B87FC356D7A7F35B4D562(L_69, _stringLiteral8FC72675E1A3FC78EAA644800F11DCDC84878868, NULL);
			// controlPhase = ControlPhase.WaitBallLaunch;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_70 = V_1;
			NullCheck(L_70);
			L_70->___controlPhase_10 = 2;
			// launchButton.interactable = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_71 = V_1;
			NullCheck(L_71);
			Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_72 = L_71->___launchButton_5;
			NullCheck(L_72);
			Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_72, (bool)0, NULL);
			// _buttonClick = false;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_73 = V_1;
			NullCheck(L_73);
			L_73->____buttonClick_13 = (bool)0;
			// break;
			goto IL_0219_1;
		}

IL_01e9_1:
		{
			// TCPCon.SendData("SET:st1_ballLaunch:");
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_74 = V_1;
			NullCheck(L_74);
			TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_75 = L_74->___TCPCon_6;
			NullCheck(L_75);
			TCPConnection_SendData_mABB16FF6D756EE76EF6B87FC356D7A7F35B4D562(L_75, _stringLiteral8FC72675E1A3FC78EAA644800F11DCDC84878868, NULL);
			// if (processState != 0)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_76 = V_1;
			NullCheck(L_76);
			int32_t L_77 = L_76->___processState_12;
			if (!L_77)
			{
				goto IL_0219_1;
			}
		}
		{
			// controlPhase = ControlPhase.WaitBallOut;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_78 = V_1;
			NullCheck(L_78);
			L_78->___controlPhase_10 = 3;
			// break;
			goto IL_0219_1;
		}

IL_020a_1:
		{
			// if (processState == 0)
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_79 = V_1;
			NullCheck(L_79);
			int32_t L_80 = L_79->___processState_12;
			if (L_80)
			{
				goto IL_0219_1;
			}
		}
		{
			// controlPhase = ControlPhase.WaitEnable;
			LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_81 = V_1;
			NullCheck(L_81);
			L_81->___controlPhase_10 = 0;
		}

IL_0219_1:
		{
			goto IL_0234;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_021b;
		}
		throw e;
	}

CATCH_021b:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_82 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_83 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_82, L_83, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0247;
	}// end catch (depth: 1)

IL_0234:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_84 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_84, NULL);
	}

IL_0247:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__13_MoveNext_m482740C54AF901662F1BFBF270A7EA5EC83A476B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59*>(__this + _offset);
	U3CUpdateU3Ed__13_MoveNext_m482740C54AF901662F1BFBF270A7EA5EC83A476B(_thisAdjusted, method);
}
// System.Void LaunchButtonControl/<Update>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__13_SetStateMachine_mE1DDFF9758EE52502B23A708D998A90B6119C58C (U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__13_SetStateMachine_mE1DDFF9758EE52502B23A708D998A90B6119C58C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__13_t7F4FB4E841448329E7A7E9A4D7B7D634CC30CC59*>(__this + _offset);
	U3CUpdateU3Ed__13_SetStateMachine_mE1DDFF9758EE52502B23A708D998A90B6119C58C(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LaunchButtonControl/<TCPReceiveData>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTCPReceiveDataU3Ed__16_MoveNext_mA026EA566F78A687DBB7E11092D288D0B572BF8A (U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m8011DBA7813DDC567CF2CBBCCD3D6EA28CAA7882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t3830193E4A14533AA30817DAC0FF42793286EFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaunchButtonControl_U3CTCPReceiveDataU3Eb__16_0_m03C414442EA6774DCE16D553E49F3627058F5763_RuntimeMethod_var);
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
			Func_1__ctor_mA160C9E5D9920E34222EF230D4061FB0CDD5690A(L_4, L_3, (intptr_t)((void*)LaunchButtonControl_U3CTCPReceiveDataU3Eb__16_0_m03C414442EA6774DCE16D553E49F3627058F5763_RuntimeMethod_var), NULL);
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
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m8011DBA7813DDC567CF2CBBCCD3D6EA28CAA7882(L_10, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0E21B063BE3BF31D10B7AA9DBE4EE94929C1DD7A_TisU3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F_m8011DBA7813DDC567CF2CBBCCD3D6EA28CAA7882_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  void U3CTCPReceiveDataU3Ed__16_MoveNext_mA026EA566F78A687DBB7E11092D288D0B572BF8A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F*>(__this + _offset);
	U3CTCPReceiveDataU3Ed__16_MoveNext_mA026EA566F78A687DBB7E11092D288D0B572BF8A(_thisAdjusted, method);
}
// System.Void LaunchButtonControl/<TCPReceiveData>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTCPReceiveDataU3Ed__16_SetStateMachine_mD88C3FBD76A739D867B9F4A7527E43010F26AA8E (U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTCPReceiveDataU3Ed__16_SetStateMachine_mD88C3FBD76A739D867B9F4A7527E43010F26AA8E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CTCPReceiveDataU3Ed__16_tFF892F092A23E2A3B5F2067D3317413E7443AB9F*>(__this + _offset);
	U3CTCPReceiveDataU3Ed__16_SetStateMachine_mD88C3FBD76A739D867B9F4A7527E43010F26AA8E(_thisAdjusted, ___0_stateMachine, method);
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
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// config = GameObject.Find("Configuration").GetComponent<Configuration>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3, NULL);
		NullCheck(L_0);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_1;
		L_1 = GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB(L_0, GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var);
		__this->___config_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_7), (void*)L_1);
		// if (config._useTCP)
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_2 = __this->___config_7;
		NullCheck(L_2);
		bool L_3 = L_2->____useTCP_4;
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// if (TCPcon.Connect())
		TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_4 = __this->___TCPcon_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = TCPConnection_Connect_m8E494C2042B976C97692617D86A5E086FA7546F8(L_4, NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// _TCPConnected = true;
		__this->____TCPConnected_6 = (bool)1;
		// launchButtonControl.setTCPConnection(TCPcon);
		LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_6 = __this->___launchButtonControl_5;
		TCPConnection_t92DAABC53A04B736D124C05BBA878CC37DADBD96* L_7 = __this->___TCPcon_4;
		NullCheck(L_6);
		LaunchButtonControl_setTCPConnection_mFE22E7818AB1913267B75822FAF2A9FBCED56335(L_6, L_7, NULL);
	}

IL_0047:
	{
		// launchButtonControl._enabledLaunch = true;
		LaunchButtonControl_t66F4CBF5C316E91367A8D9D562B4E47BA066261F* L_8 = __this->___launchButtonControl_5;
		NullCheck(L_8);
		L_8->____enabledLaunch_9 = (bool)1;
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
		// if (!_TCPConnected && config._useTCP)
		bool L_0 = __this->____TCPConnected_6;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_1 = __this->___config_7;
		NullCheck(L_1);
		bool L_2 = L_1->____useTCP_4;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.Log("Non TCP Connection");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB6ECD9DA586D0BEE942EE64B5972BFB412CC6D0A, NULL);
		// return;
		return;
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void MainControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainControl__ctor_m2B2210A74E2F0F655B7C4A47972AD180CC4BEC48 (MainControl_tB6B2F9693976F8BA95CCC3E48F7C4B002C2B0DDE* __this, const RuntimeMethod* method) 
{
	{
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
	{
		// if (!_isConnection)
		bool L_0 = __this->____isConnection_8;
		// return;
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
	}
	try
	{// begin try (depth: 1)
		// var buffer = Encoding.UTF8.GetBytes(str);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___0_str;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		V_0 = L_3;
		// networkStream.Write(buffer, 0, buffer.Length);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_4 = __this->___networkStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		// Debug.Log("Sent:" + str);
		String_t* L_7 = ___0_str;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2852A3BF696AE8671BC2EA5E25B5AC307B40C9D6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{// begin catch(System.Exception)
		// catch (Exception)
		// Debug.LogError("Send Failed");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5EEAE25D1AE198E9AFA361876D17701175F40C1E)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0045;
	}// end catch (depth: 1)

IL_0045:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB6648B16F17C9A3E8F10D9082AF6A680B61B54);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!_isConnection)
		bool L_0 = __this->____isConnection_8;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return "Non Conncection";
		return _stringLiteralDFB6648B16F17C9A3E8F10D9082AF6A680B61B54;
	}

IL_000e:
	{
	}
	try
	{// begin try (depth: 1)
		// var rcvbuffer = new byte[256];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_1 = L_1;
		// var count = networkStream.Read(rcvbuffer, 0, rcvbuffer.Length);
		NetworkStream_tF39C3684B6D572BF47F518AD1DB1F4B12CEE4AE0* L_2 = __this->___networkStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_2 = L_5;
		// returnMess = Encoding.UTF8.GetString(rcvbuffer, 0, count);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_6);
		String_t* L_9;
		L_9 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, L_8);
		V_0 = L_9;
		// Debug.Log(returnMess);
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// }
		goto IL_0054;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception)
		// Debug.LogError("Recv Failed");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F9F7EE93A53188BA468B07C8536933C365149F8)), NULL);
		// returnMess = "Error";
		V_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0054;
	}// end catch (depth: 1)

IL_0054:
	{
		// return returnMess;
		String_t* L_11 = V_0;
		return L_11;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public string IPAddress = "192.168.1.16";
		__this->___IPAddress_4 = _stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IPAddress_4), (void*)_stringLiteralFFC55BB0A23E31E0EFF7248CDE6AC6C895CD3474);
		// [SerializeField] public int Port = 2001;
		__this->___Port_5 = ((int32_t)2001);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler_Start_m6B0B5F04E29C13B8F518229A1177D1E1D40A5A0B (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5_mBFC82FE49D8475F519B7CE8705C656AB8A9CC645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFFF00872D05AB6A966525632704E7A260E066A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputSettings = ScriptableObject.CreateInstance("InputSettings") as InputSettings;
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_0;
		L_0 = ScriptableObject_CreateInstance_m665B20BF660DA7CC22E9B316B51F5B980BC491B2(_stringLiteralBFFF00872D05AB6A966525632704E7A260E066A4, NULL);
		__this->___inputSettings_5 = ((InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF*)IsInstClass((RuntimeObject*)L_0, InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputSettings_5), (void*)((InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF*)IsInstClass((RuntimeObject*)L_0, InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF_il2cpp_TypeInfo_var)));
		// config = GameObject.Find("Configuration").GetComponent<Configuration>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4DD342E178F1F07A26AE765969AC1415EE89E0B3, NULL);
		NullCheck(L_1);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_2;
		L_2 = GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB(L_1, GameObject_GetComponent_TisConfiguration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2_mA2FDB7A3914C7BA256089365089D3636862995CB_RuntimeMethod_var);
		__this->___config_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_4), (void*)L_2);
		// Debug.Log(inputSettings.tapRadius);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_3 = __this->___inputSettings_5;
		NullCheck(L_3);
		float L_4;
		L_4 = InputSettings_get_tapRadius_m669BD4AE475CF1B27CE75EA8C3A2D7EDB93E6C50_inline(L_3, NULL);
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// maxPosition = new Vector2(0.0f, 0.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___maxPosition_13 = L_7;
		// minPosition = new Vector2(config.displayWidth, config.displayHeight);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_8 = __this->___config_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_10 = __this->___config_4;
		NullCheck(L_10);
		int32_t L_11 = L_10->___displayHeight_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), ((float)L_9), ((float)L_11), /*hidden argument*/NULL);
		__this->___minPosition_14 = L_12;
		// position = new Vector2(0.0f, 0.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___position_11 = L_13;
		// debugControl = GameObject.Find("MainCamera").GetComponent<DebugControl>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		NullCheck(L_14);
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_15;
		L_15 = GameObject_GetComponent_TisDebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5_mBFC82FE49D8475F519B7CE8705C656AB8A9CC645(L_14, GameObject_GetComponent_TisDebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5_mBFC82FE49D8475F519B7CE8705C656AB8A9CC645_RuntimeMethod_var);
		__this->___debugControl_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugControl_16), (void*)L_15);
		// }
		return;
	}
}
// System.Void TouchHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler_Update_m1138E0E69A5CDDD4511BE8E6E445983B83B626DF (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09AB0A9CAD00EDEF1954EAB926F14CD620F14925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658A0E1FBA82B1261E098063C321163ED90EA5BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682D22B77E6029500DCCD177A903BE6C580695CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral847FC3359E97A47DBE965F3CC41A2CFB6E4A7DC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758);
		s_Il2CppMethodInitialized = true;
	}
	TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* V_0 = NULL;
	ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var touchInput = Touchscreen.current;
		Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* L_0;
		L_0 = Touchscreen_get_current_m6D9CD2446B30224D18E695DF0ECC3A00E4F7B708_inline(NULL);
		// var primaryTouch = touchInput.touches[0];
		NullCheck(L_0);
		ReadOnlyArray_1_t1AB67C13630F5ECC78559C8BCEFFC00C4457333E L_1;
		L_1 = Touchscreen_get_touches_mEFA7C5B2A80963C7947BCBDBE6258F5083B1CE66_inline(L_0, NULL);
		V_1 = L_1;
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_2;
		L_2 = ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C((&V_1), 0, ReadOnlyArray_1_get_Item_m8214EE7BC64119BFC600CFABF40483B334B4CC7C_RuntimeMethod_var);
		V_0 = L_2;
		// if (primaryTouch.press.wasPressedThisFrame)
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_3 = V_0;
		NullCheck(L_3);
		TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB* L_4;
		L_4 = TouchControl_get_press_mFE6656905CFF085E99AE78F24FF71C0CA5DC5E81_inline(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B(L_4, NULL);
		if (!L_5)
		{
			goto IL_0095;
		}
	}
	{
		// _pressed = true;
		__this->____pressed_6 = (bool)1;
		// _tapmoved = false;
		__this->____tapmoved_12 = (bool)0;
		// tapTime = 0.0f;
		__this->___tapTime_15 = (0.0f);
		// _flickLtoR = false;
		__this->____flickLtoR_9 = (bool)0;
		// _flickRtoL = false;
		__this->____flickRtoL_10 = (bool)0;
		// maxPosition = new Vector2(0.0f, 0.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___maxPosition_13 = L_6;
		// minPosition = new Vector2(config.displayWidth, config.displayHeight);
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_7 = __this->___config_4;
		NullCheck(L_7);
		int32_t L_8 = L_7->___displayWidth_5;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_9 = __this->___config_4;
		NullCheck(L_9);
		int32_t L_10 = L_9->___displayHeight_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)L_8), ((float)L_10), /*hidden argument*/NULL);
		__this->___minPosition_14 = L_11;
		// position = new Vector2(0.0f, 0.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___position_11 = L_12;
	}

IL_0095:
	{
		// if (primaryTouch.press.wasReleasedThisFrame)
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_13 = V_0;
		NullCheck(L_13);
		TouchPressControl_tD5BD68D9FDEAC889591DD7A499864893A43C7CEB* L_14;
		L_14 = TouchControl_get_press_mFE6656905CFF085E99AE78F24FF71C0CA5DC5E81_inline(L_13, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = ButtonControl_get_wasReleasedThisFrame_m492DB9A10A1EED0FACE2330E230A6DF7650EEC7D(L_14, NULL);
		if (!L_15)
		{
			goto IL_01dd;
		}
	}
	{
		// _pressed = false;
		__this->____pressed_6 = (bool)0;
		// _tapmoved = false;
		__this->____tapmoved_12 = (bool)0;
		// _longtapped = false;
		__this->____longtapped_8 = (bool)0;
		// if (tapTime <= config.flickTime && Mathf.Abs(maxPosition.y - minPosition.y) <= config.flickMoveY && Mathf.Abs(maxPosition.x - minPosition.x) >= config.flickMoveX)
		float L_16 = __this->___tapTime_15;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_17 = __this->___config_4;
		NullCheck(L_17);
		float L_18 = L_17->___flickTime_9;
		if ((!(((float)L_16) <= ((float)L_18))))
		{
			goto IL_01a1;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___maxPosition_13);
		float L_20 = L_19->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minPosition_14);
		float L_22 = L_21->___y_1;
		float L_23;
		L_23 = fabsf(((float)il2cpp_codegen_subtract(L_20, L_22)));
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_24 = __this->___config_4;
		NullCheck(L_24);
		float L_25 = L_24->___flickMoveY_12;
		if ((!(((float)L_23) <= ((float)L_25))))
		{
			goto IL_01a1;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___maxPosition_13);
		float L_27 = L_26->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minPosition_14);
		float L_29 = L_28->___x_0;
		float L_30;
		L_30 = fabsf(((float)il2cpp_codegen_subtract(L_27, L_29)));
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_31 = __this->___config_4;
		NullCheck(L_31);
		float L_32 = L_31->___flickMoveX_13;
		if ((!(((float)L_30) >= ((float)L_32))))
		{
			goto IL_01a1;
		}
	}
	{
		// if (primaryTouch.startPosition.ReadValue().x <= config.flickStartPosL)
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_33 = V_0;
		NullCheck(L_33);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_34;
		L_34 = TouchControl_get_startPosition_m426A12E819DF1C81A21015C806BC255E69C97783_inline(L_33, NULL);
		NullCheck(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_34, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_36 = L_35.___x_0;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_37 = __this->___config_4;
		NullCheck(L_37);
		float L_38 = L_37->___flickStartPosL_10;
		if ((!(((float)L_36) <= ((float)L_38))))
		{
			goto IL_0163;
		}
	}
	{
		// _flickLtoR = true;
		__this->____flickLtoR_9 = (bool)1;
		// Debug.Log("FlickLtoR");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral09AB0A9CAD00EDEF1954EAB926F14CD620F14925, NULL);
		// debugControl.AddLog("FlickLtoR");
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_39 = __this->___debugControl_16;
		NullCheck(L_39);
		DebugControl_AddLog_mF72C3AD1C8312A324C0E33BC0EBA9C661802D22B(L_39, _stringLiteral09AB0A9CAD00EDEF1954EAB926F14CD620F14925, NULL);
	}

IL_0163:
	{
		// if (primaryTouch.startPosition.ReadValue().x >= config.flickStartPosR)
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_40 = V_0;
		NullCheck(L_40);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_41;
		L_41 = TouchControl_get_startPosition_m426A12E819DF1C81A21015C806BC255E69C97783_inline(L_40, NULL);
		NullCheck(L_41);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_41, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_43 = L_42.___x_0;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_44 = __this->___config_4;
		NullCheck(L_44);
		float L_45 = L_44->___flickStartPosR_11;
		if ((!(((float)L_43) >= ((float)L_45))))
		{
			goto IL_01a1;
		}
	}
	{
		// _flickRtoL = true;
		__this->____flickRtoL_10 = (bool)1;
		// Debug.Log("FlickRtoL");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral658A0E1FBA82B1261E098063C321163ED90EA5BD, NULL);
		// debugControl.AddLog("FlickRtoL");
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_46 = __this->___debugControl_16;
		NullCheck(L_46);
		DebugControl_AddLog_mF72C3AD1C8312A324C0E33BC0EBA9C661802D22B(L_46, _stringLiteral658A0E1FBA82B1261E098063C321163ED90EA5BD, NULL);
	}

IL_01a1:
	{
		// if (tapTime <= inputSettings.defaultTapTime && !_tapmoved)
		float L_47 = __this->___tapTime_15;
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_48 = __this->___inputSettings_5;
		NullCheck(L_48);
		float L_49;
		L_49 = InputSettings_get_defaultTapTime_mC6FD6765646FF55571132E1D60D35B282D8806B7_inline(L_48, NULL);
		if ((!(((float)L_47) <= ((float)L_49))))
		{
			goto IL_01dd;
		}
	}
	{
		bool L_50 = __this->____tapmoved_12;
		if (L_50)
		{
			goto IL_01dd;
		}
	}
	{
		// _tapped = true;
		__this->____tapped_7 = (bool)1;
		// Debug.Log("Tap");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758, NULL);
		// debugControl.AddLog("Tap");
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_51 = __this->___debugControl_16;
		NullCheck(L_51);
		DebugControl_AddLog_mF72C3AD1C8312A324C0E33BC0EBA9C661802D22B(L_51, _stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758, NULL);
	}

IL_01dd:
	{
		// if (_pressed)
		bool L_52 = __this->____pressed_6;
		if (!L_52)
		{
			goto IL_02eb;
		}
	}
	{
		// tapTime += Time.deltaTime;
		float L_53 = __this->___tapTime_15;
		float L_54;
		L_54 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___tapTime_15 = ((float)il2cpp_codegen_add(L_53, L_54));
		// position = primaryTouch.position.ReadValue();
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_55 = V_0;
		NullCheck(L_55);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_56;
		L_56 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_55, NULL);
		NullCheck(L_56);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_56, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		__this->___position_11 = L_57;
		// if (maxPosition.x <= primaryTouch.position.ReadValue().x) maxPosition.x = primaryTouch.position.ReadValue().x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_58 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___maxPosition_13);
		float L_59 = L_58->___x_0;
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_60 = V_0;
		NullCheck(L_60);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_61;
		L_61 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_60, NULL);
		NullCheck(L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_61, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_63 = L_62.___x_0;
		if ((!(((float)L_59) <= ((float)L_63))))
		{
			goto IL_0243;
		}
	}
	{
		// if (maxPosition.x <= primaryTouch.position.ReadValue().x) maxPosition.x = primaryTouch.position.ReadValue().x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___maxPosition_13);
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_65 = V_0;
		NullCheck(L_65);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_66;
		L_66 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_65, NULL);
		NullCheck(L_66);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		L_67 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_66, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_68 = L_67.___x_0;
		L_64->___x_0 = L_68;
	}

IL_0243:
	{
		// if (minPosition.x >= primaryTouch.position.ReadValue().x) minPosition.x = primaryTouch.position.ReadValue().x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minPosition_14);
		float L_70 = L_69->___x_0;
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_71 = V_0;
		NullCheck(L_71);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_72;
		L_72 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_71, NULL);
		NullCheck(L_72);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_72, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_74 = L_73.___x_0;
		if ((!(((float)L_70) >= ((float)L_74))))
		{
			goto IL_027b;
		}
	}
	{
		// if (minPosition.x >= primaryTouch.position.ReadValue().x) minPosition.x = primaryTouch.position.ReadValue().x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minPosition_14);
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_76 = V_0;
		NullCheck(L_76);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_77;
		L_77 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_76, NULL);
		NullCheck(L_77);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		L_78 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_77, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_79 = L_78.___x_0;
		L_75->___x_0 = L_79;
	}

IL_027b:
	{
		// if (maxPosition.y <= primaryTouch.position.ReadValue().y) maxPosition.y = primaryTouch.position.ReadValue().y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_80 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___maxPosition_13);
		float L_81 = L_80->___y_1;
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_82 = V_0;
		NullCheck(L_82);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_83;
		L_83 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_82, NULL);
		NullCheck(L_83);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84;
		L_84 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_83, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_85 = L_84.___y_1;
		if ((!(((float)L_81) <= ((float)L_85))))
		{
			goto IL_02b3;
		}
	}
	{
		// if (maxPosition.y <= primaryTouch.position.ReadValue().y) maxPosition.y = primaryTouch.position.ReadValue().y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_86 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___maxPosition_13);
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_87 = V_0;
		NullCheck(L_87);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_88;
		L_88 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_87, NULL);
		NullCheck(L_88);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89;
		L_89 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_88, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_90 = L_89.___y_1;
		L_86->___y_1 = L_90;
	}

IL_02b3:
	{
		// if (minPosition.y >= primaryTouch.position.ReadValue().y) minPosition.y = primaryTouch.position.ReadValue().y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_91 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minPosition_14);
		float L_92 = L_91->___y_1;
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_93 = V_0;
		NullCheck(L_93);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_94;
		L_94 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_93, NULL);
		NullCheck(L_94);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95;
		L_95 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_94, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_96 = L_95.___y_1;
		if ((!(((float)L_92) >= ((float)L_96))))
		{
			goto IL_02eb;
		}
	}
	{
		// if (minPosition.y >= primaryTouch.position.ReadValue().y) minPosition.y = primaryTouch.position.ReadValue().y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_97 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minPosition_14);
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_98 = V_0;
		NullCheck(L_98);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_99;
		L_99 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_98, NULL);
		NullCheck(L_99);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		L_100 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_99, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_101 = L_100.___y_1;
		L_97->___y_1 = L_101;
	}

IL_02eb:
	{
		// if (_pressed && !_tapmoved)
		bool L_102 = __this->____pressed_6;
		if (!L_102)
		{
			goto IL_0344;
		}
	}
	{
		bool L_103 = __this->____tapmoved_12;
		if (L_103)
		{
			goto IL_0344;
		}
	}
	{
		// if (Vector2.Distance(primaryTouch.startPosition.ReadValue(), primaryTouch.position.ReadValue()) > inputSettings.tapRadius)
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_104 = V_0;
		NullCheck(L_104);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_105;
		L_105 = TouchControl_get_startPosition_m426A12E819DF1C81A21015C806BC255E69C97783_inline(L_104, NULL);
		NullCheck(L_105);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106;
		L_106 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_105, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* L_107 = V_0;
		NullCheck(L_107);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_108;
		L_108 = TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline(L_107, NULL);
		NullCheck(L_108);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		L_109 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_108, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		float L_110;
		L_110 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_106, L_109, NULL);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_111 = __this->___inputSettings_5;
		NullCheck(L_111);
		float L_112;
		L_112 = InputSettings_get_tapRadius_m669BD4AE475CF1B27CE75EA8C3A2D7EDB93E6C50_inline(L_111, NULL);
		if ((!(((float)L_110) > ((float)L_112))))
		{
			goto IL_0344;
		}
	}
	{
		// _tapmoved = true;
		__this->____tapmoved_12 = (bool)1;
		// Debug.Log("tap Moved");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral847FC3359E97A47DBE965F3CC41A2CFB6E4A7DC0, NULL);
		// debugControl.AddLog("tap Moved");
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_113 = __this->___debugControl_16;
		NullCheck(L_113);
		DebugControl_AddLog_mF72C3AD1C8312A324C0E33BC0EBA9C661802D22B(L_113, _stringLiteral847FC3359E97A47DBE965F3CC41A2CFB6E4A7DC0, NULL);
	}

IL_0344:
	{
		// if (_pressed)
		bool L_114 = __this->____pressed_6;
		if (!L_114)
		{
			goto IL_0390;
		}
	}
	{
		// if (!_tapmoved && tapTime >= config.longTapTime && !_longtapped)
		bool L_115 = __this->____tapmoved_12;
		if (L_115)
		{
			goto IL_0390;
		}
	}
	{
		float L_116 = __this->___tapTime_15;
		Configuration_tABB2DE2BA71E03BA9199DC7C97B7BD7F9505ADF2* L_117 = __this->___config_4;
		NullCheck(L_117);
		float L_118 = L_117->___longTapTime_8;
		if ((!(((float)L_116) >= ((float)L_118))))
		{
			goto IL_0390;
		}
	}
	{
		bool L_119 = __this->____longtapped_8;
		if (L_119)
		{
			goto IL_0390;
		}
	}
	{
		// _longtapped = true;
		__this->____longtapped_8 = (bool)1;
		// Debug.Log("Long tap");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral682D22B77E6029500DCCD177A903BE6C580695CC, NULL);
		// debugControl.AddLog("Long tap");
		DebugControl_t7EFB7C88C5DD798987E617C06EB95400BE5EDDD5* L_120 = __this->___debugControl_16;
		NullCheck(L_120);
		DebugControl_AddLog_mF72C3AD1C8312A324C0E33BC0EBA9C661802D22B(L_120, _stringLiteral682D22B77E6029500DCCD177A903BE6C580695CC, NULL);
	}

IL_0390:
	{
		// }
		return;
	}
}
// System.Void TouchHandler::ResetTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler_ResetTap_m6E0409C94C8216C490A8B546EA25363620B59E84 (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, const RuntimeMethod* method) 
{
	{
		// _tapped = false;
		__this->____tapped_7 = (bool)0;
		// }
		return;
	}
}
// System.Void TouchHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler__ctor_mDF2FCF69149565CEA7539FA3AE2C1C61E9BC35BC (TouchHandler_tB817ACADDBAF3E5E6625F3D541FE580091B9758D* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputSettings_get_tapRadius_m669BD4AE475CF1B27CE75EA8C3A2D7EDB93E6C50_inline (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TapRadius;
		float L_0 = __this->___m_TapRadius_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* TouchControl_get_startPosition_m426A12E819DF1C81A21015C806BC255E69C97783_inline (TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Control startPosition { get; set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = __this->___U3CstartPositionU3Ek__BackingField_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InputSettings_get_defaultTapTime_mC6FD6765646FF55571132E1D60D35B282D8806B7_inline (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DefaultTapTime;
		float L_0 = __this->___m_DefaultTapTime_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* TouchControl_get_position_m362565B94CA1CF45F79F7EAB5FE75B9BCB1ACAAF_inline (TouchControl_t3A64A795FF61A8B27E5EBD61632F23AFCC725079* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Control position { get; set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = __this->___U3CpositionU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
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
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
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

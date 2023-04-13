#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.XR.Hands.XRHand>
struct Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF;
// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997;
// System.Action`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_3_t838D6B6BB4BFFC6E8430C389747DB008A0B26146;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct List_1_tE4111BEC044D13259EFD4EC5907636C855887179;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// Node[]
struct NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Hands.XRHandSubsystem[]
struct XRHandSubsystemU5BU5D_t50FB94CEB7EB1A2A292728A49A7B732A8CF8C50F;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// ArrowScript
struct ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Controller
struct Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EnableSimulate
struct EnableSimulate_t08FED2ECDC82F136E53CD15FAC14B85FD46B3B5F;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Flip
struct Flip_tCC3630F7FDA71E1C98CA8C7EFDF4DBA56EEC0A40;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer
struct LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// LogClick
struct LogClick_tD2AC9E282BA23635A4DA7F28F7ADD5FEB96A901B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer
struct RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344;
// SCripts
struct SCripts_tA0F724D5B7BBED9C7970002F4EDD66832F3DA501;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// SkyBox
struct SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD;
// Startup
struct Startup_t5BDB41C20F47A29D458E2C896A97CB9BE5711382;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// TabletController
struct TabletController_tFB43386417403F59ED374A96C4456288FBB4F05A;
// TabletScript
struct TabletScript_t4AFB6AD54748FE3B249DB565E4BFF2F631D4381A;
// TabletToggle
struct TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E;
// TestMat
struct TestMat_tD7CD960111F522FA09DE10852D8CE030E1E4FBCA;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Toggle
struct Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// VideoButton
struct VideoButton_t8E3ADFF8DF7E1791DF6F05F0A6CAFE2D8075443D;
// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE;
// VideoController
struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC;
// VideoInfo
struct VideoInfo_tC3F239DE94828502B07DFC683B41AF22B648FDE9;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects
struct HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926;
// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects
struct HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE4111BEC044D13259EFD4EC5907636C855887179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439;
IL2CPP_EXTERN_C String_t* _stringLiteral36AF11980966FD53F29C0D0A37FF8BC59EB5FC85;
IL2CPP_EXTERN_C String_t* _stringLiteral3CD5D33537838F5694AC36BDFDFD8C3C0AFF021F;
IL2CPP_EXTERN_C String_t* _stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50;
IL2CPP_EXTERN_C String_t* _stringLiteral47856CFFE18FCB88EE8FEE543EC2798F93E49CF3;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral89560C1A46DB731E32EB21F6E49C4A935DBE9EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralA669C5E797F155D12E27827640DACC40DA825122;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralCD3263FC27C561A834538842AB627D2DB1E78E09;
IL2CPP_EXTERN_C String_t* _stringLiteralD31A632016AF60717D7799DCFF6B2D5E57D886B9;
IL2CPP_EXTERN_C String_t* _stringLiteralD5EE873084E228BF3E84D2FD089BAC0AD1B71FA1;
IL2CPP_EXTERN_C String_t* _stringLiteralE16EED961058125D81E09FCA0B5A362770A7CAB5;
IL2CPP_EXTERN_C String_t* _stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m286CA8B39FB3CCC909718E30B0D54D73F3861577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m79EACF1A878EAA6CEFC90C16165F8940B58E27D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m9744A7B27D046A8A65C16D26BE0322E8BED18767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCE1081B77173997D20733D3C9D5117E787662A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects__ctor_m4B3ABF1BB5221E99F8998DC77562B8078459B054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects__ctor_m7C8BF105D91099BB71E93DE487C35540E1F2C616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeftHandVisualizer_OnTrackingAcquired_m4D690EE325F434A562CDA146433C15CCB34D96B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeftHandVisualizer_OnTrackingLost_m0F5DD18B31451C23CF0F76D1B2C57E71A63B4D4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LeftHandVisualizer_OnUpdatedHands_m63F989A4FA9A63F6ADF8CD59C316C752C79B51C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m571D52D1CFC36A69BDAFBAC74B0F075F8BB773BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m75273E2FDEA382223C6F78765C1A71E6A758CF9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RightHandVisualizer_OnTrackingAcquired_mC94589E3078091908E377A3969E585FA65B88B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RightHandVisualizer_OnTrackingLost_mF030E3EC983A141AF64C6BA77A89A1050853EE67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RightHandVisualizer_OnUpdatedHands_m60E61BFBECE2A440F011E6EF640A5668A6562782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m280C9268C53E673EC602C1138398BB10FD2A7604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoController_DoStuff_mF48DD677FDE047BD8C31540B12D0D21D9C6D5B7C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct List_1_tE4111BEC044D13259EFD4EC5907636C855887179  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRHandSubsystemU5BU5D_t50FB94CEB7EB1A2A292728A49A7B732A8CF8C50F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE4111BEC044D13259EFD4EC5907636C855887179_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRHandSubsystemU5BU5D_t50FB94CEB7EB1A2A292728A49A7B732A8CF8C50F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// GlobalVariables
struct GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E  : public RuntimeObject
{
};

struct GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E_StaticFields
{
	// System.Int32 GlobalVariables::<Numberoflocations>k__BackingField
	int32_t ___U3CNumberoflocationsU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects
struct HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::m_HandRoot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_HandRoot_0;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::m_DrawJointsParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DrawJointsParent_1;
	// UnityEngine.Transform[] UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::m_JointXforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_JointXforms_2;
	// UnityEngine.GameObject[] UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::m_DrawJoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_DrawJoints_3;
	// UnityEngine.GameObject[] UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::m_VelocityParents
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_VelocityParents_4;
	// UnityEngine.LineRenderer[] UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::m_Lines
	LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* ___m_Lines_5;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::m_IsTracked
	bool ___m_IsTracked_6;
};

struct HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields
{
	// UnityEngine.Vector3[] UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::s_LinePointsReuse
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_LinePointsReuse_7;
};

// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects
struct HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::m_HandRoot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_HandRoot_0;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::m_DrawJointsParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DrawJointsParent_1;
	// UnityEngine.Transform[] UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::m_JointXforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_JointXforms_2;
	// UnityEngine.GameObject[] UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::m_DrawJoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_DrawJoints_3;
	// UnityEngine.GameObject[] UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::m_VelocityParents
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_VelocityParents_4;
	// UnityEngine.LineRenderer[] UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::m_Lines
	LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* ___m_Lines_5;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::m_IsTracked
	bool ___m_IsTracked_6;
};

struct HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields
{
	// UnityEngine.Vector3[] UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::s_LinePointsReuse
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_LinePointsReuse_7;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<System.Boolean>
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>
struct NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t4EC188EAF26474EF44BBDD06B2470EA6BFD1EAB7 
{
	// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects/<>c__DisplayClass9_0::<>4__this
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* ___U3CU3E4__this_0;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects/<>c__DisplayClass9_0::debugDrawPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab_1;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects/<>c__DisplayClass9_0::velocityPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab_2;
};

// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t283EC0359DA1A43EE54A2A74BF89DBF2F17BDC83 
{
	// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects/<>c__DisplayClass9_0::<>4__this
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* ___U3CU3E4__this_0;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects/<>c__DisplayClass9_0::debugDrawPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab_1;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects/<>c__DisplayClass9_0::velocityPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab_2;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5  : public RuntimeObject
{
	// UnityEngine.Vector2 Node::Coordinates
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Coordinates_0;
	// System.Single Node::xCoordinate
	float ___xCoordinate_1;
	// System.Single Node::yCoordinate
	float ___yCoordinate_2;
	// System.Single Node::pose
	float ___pose_3;
	// UnityEngine.Texture2D Node::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_4;
	// System.String Node::locationName
	String_t* ___locationName_5;
	// System.Boolean Node::isActive
	bool ___isActive_6;
	// System.Boolean Node::isHighlighted
	bool ___isHighlighted_7;
	// Node[] Node::neighbours
	NodeU5BU5D_tA31D50700DD3041E9DA274A8ABF29E7EF09CE4A8* ___neighbours_8;
	// System.Int32 Node::nodeType
	int32_t ___nodeType_9;
	// UnityEngine.GameObject Node::mySkybox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mySkybox_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 
{
	// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint> UnityEngine.XR.Hands.XRHand::m_Joints
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::m_RootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::m_Handedness
	int32_t ___m_Handedness_2;
	// System.Boolean UnityEngine.XR.Hands.XRHand::<isTracked>k__BackingField
	bool ___U3CisTrackedU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_pinvoke
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	int32_t ___m_Handedness_2;
	int32_t ___U3CisTrackedU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_com
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	int32_t ___m_Handedness_2;
	int32_t ___U3CisTrackedU3Ek__BackingField_3;
};

// UnityEngine.XR.Hands.XRHandJoint
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 
{
	// System.Int32 UnityEngine.XR.Hands.XRHandJoint::m_IdAndHandedness
	int32_t ___m_IdAndHandedness_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHandJoint::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// System.Single UnityEngine.XR.Hands.XRHandJoint::m_Radius
	float ___m_Radius_2;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_LinearVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LinearVelocity_3;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_4;
	// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::m_TrackingState
	int32_t ___m_TrackingState_5;
};

// System.Action`1<UnityEngine.XR.Hands.XRHand>
struct Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752  : public MulticastDelegate_t
{
};

// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
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

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C  : public SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2
{
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_LeftHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_LeftHand_4;
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_RightHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_RightHand_5;
	// Unity.Collections.NativeArray`1<System.Boolean> UnityEngine.XR.Hands.XRHandSubsystem::m_JointsInLayout
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___m_JointsInLayout_6;
	// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::<updateSuccessFlags>k__BackingField
	int32_t ___U3CupdateSuccessFlagsU3Ek__BackingField_7;
	// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::updatedHands
	Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* ___updatedHands_8;
	// System.Action`1<UnityEngine.XR.Hands.XRHand> UnityEngine.XR.Hands.XRHandSubsystem::trackingAcquired
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* ___trackingAcquired_9;
	// System.Action`1<UnityEngine.XR.Hands.XRHand> UnityEngine.XR.Hands.XRHandSubsystem::trackingLost
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* ___trackingLost_10;
	// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::handsUpdated
	Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* ___handsUpdated_11;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// ArrowScript
struct ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ArrowScript::angleBetweenCameraandMe
	float ___angleBetweenCameraandMe_4;
	// System.Single ArrowScript::myAngle
	float ___myAngle_5;
	// System.Single ArrowScript::CameraAngle
	float ___CameraAngle_6;
	// System.Single ArrowScript::Threshold
	float ___Threshold_7;
	// UnityEngine.Vector3 ArrowScript::curScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___curScale_8;
	// UnityEngine.Vector3 ArrowScript::zoomScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zoomScale_9;
	// UnityEngine.GameObject ArrowScript::MyParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MyParent_10;
	// UnityEngine.GameObject ArrowScript::TransformTo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TransformTo_11;
	// System.Single ArrowScript::transitionSpeed
	float ___transitionSpeed_12;
	// System.Boolean ArrowScript::active
	bool ___active_13;
	// UnityEngine.Quaternion ArrowScript::myOriginalAngle
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___myOriginalAngle_14;
	// UnityEngine.Vector3 ArrowScript::InitialCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___InitialCameraPosition_15;
	// UnityEngine.Vector3 ArrowScript::myDifference
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___myDifference_16;
};

// Controller
struct Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Controller::CurrentlyInside
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CurrentlyInside_4;
	// UnityEngine.Material Controller::transparentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___transparentMaterial_5;
};

// EnableSimulate
struct EnableSimulate_t08FED2ECDC82F136E53CD15FAC14B85FD46B3B5F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnableSimulate::toDisable
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___toDisable_4;
};

// Flip
struct Flip_tCC3630F7FDA71E1C98CA8C7EFDF4DBA56EEC0A40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer
struct LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_UseOptimizedControls
	bool ___m_UseOptimizedControls_4;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_Origin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_Origin_5;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_LeftHandMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftHandMesh_6;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_RightHandMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightHandMesh_7;
	// UnityEngine.Material UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_HandMeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_HandMeshMaterial_8;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_DrawMeshes
	bool ___m_DrawMeshes_9;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_PreviousDrawMeshes
	bool ___m_PreviousDrawMeshes_10;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_DebugDrawPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DebugDrawPrefab_11;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_DebugDrawJoints
	bool ___m_DebugDrawJoints_12;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_PreviousDebugDrawJoints
	bool ___m_PreviousDebugDrawJoints_13;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_VelocityPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_VelocityPrefab_14;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_VelocityType
	int32_t ___m_VelocityType_15;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_PreviousVelocityType
	int32_t ___m_PreviousVelocityType_16;
	// UnityEngine.XR.Hands.XRHandSubsystem UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_Subsystem
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___m_Subsystem_17;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_LeftHandGameObjects
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* ___m_LeftHandGameObjects_18;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::m_RightHandGameObjects
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* ___m_RightHandGameObjects_19;
};

struct LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem> UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::s_SubsystemsReuse
	List_1_tE4111BEC044D13259EFD4EC5907636C855887179* ___s_SubsystemsReuse_20;
};

// LogClick
struct LogClick_tD2AC9E282BA23635A4DA7F28F7ADD5FEB96A901B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer
struct RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_UseOptimizedControls
	bool ___m_UseOptimizedControls_4;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_Origin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_Origin_5;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_LeftHandMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftHandMesh_6;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_RightHandMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightHandMesh_7;
	// UnityEngine.Material UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_HandMeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_HandMeshMaterial_8;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_DrawMeshes
	bool ___m_DrawMeshes_9;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_PreviousDrawMeshes
	bool ___m_PreviousDrawMeshes_10;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_DebugDrawPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DebugDrawPrefab_11;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_DebugDrawJoints
	bool ___m_DebugDrawJoints_12;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_PreviousDebugDrawJoints
	bool ___m_PreviousDebugDrawJoints_13;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_VelocityPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_VelocityPrefab_14;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_VelocityType
	int32_t ___m_VelocityType_15;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_PreviousVelocityType
	int32_t ___m_PreviousVelocityType_16;
	// UnityEngine.XR.Hands.XRHandSubsystem UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_Subsystem
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___m_Subsystem_17;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_LeftHandGameObjects
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* ___m_LeftHandGameObjects_18;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::m_RightHandGameObjects
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* ___m_RightHandGameObjects_19;
};

struct RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem> UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::s_SubsystemsReuse
	List_1_tE4111BEC044D13259EFD4EC5907636C855887179* ___s_SubsystemsReuse_20;
};

// SCripts
struct SCripts_tA0F724D5B7BBED9C7970002F4EDD66832F3DA501  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SkyBox
struct SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material SkyBox::myMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___myMaterial_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SkyBox::neighbours
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___neighbours_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SkyBox::arrows
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___arrows_6;
	// System.String SkyBox::locationName
	String_t* ___locationName_7;
	// UnityEngine.GameObject SkyBox::XROrigin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___XROrigin_8;
	// UnityEngine.InputSystem.InputActionReference SkyBox::rightTrigger
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightTrigger_9;
	// System.Int32 SkyBox::counter
	int32_t ___counter_10;
};

// Startup
struct Startup_t5BDB41C20F47A29D458E2C896A97CB9BE5711382  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TabletController
struct TabletController_tFB43386417403F59ED374A96C4456288FBB4F05A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TabletController::tablet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tablet_4;
	// UnityEngine.GameObject TabletController::minimap
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___minimap_5;
};

// TabletScript
struct TabletScript_t4AFB6AD54748FE3B249DB565E4BFF2F631D4381A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TabletScript::screen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___screen_4;
};

// TabletToggle
struct TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionReference TabletToggle::leftPinch
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___leftPinch_4;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer TabletToggle::leftHandVisualizer
	LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* ___leftHandVisualizer_5;
	// UnityEngine.GameObject TabletToggle::leftHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftHand_6;
	// UnityEngine.InputSystem.InputActionReference TabletToggle::rightPinch
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___rightPinch_7;
	// UnityEngine.GameObject TabletToggle::tablet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tablet_8;
	// UnityEngine.InputSystem.InputAction TabletToggle::keyPress
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___keyPress_9;
	// System.Boolean TabletToggle::leftHandIsPinched
	bool ___leftHandIsPinched_10;
	// System.Boolean TabletToggle::rightHandIsPinched
	bool ___rightHandIsPinched_11;
};

// TestMat
struct TestMat_tD7CD960111F522FA09DE10852D8CE030E1E4FBCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Material> TestMat::materialList
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___materialList_4;
	// UnityEngine.InputSystem.InputAction TestMat::action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action_5;
	// UnityEngine.InputSystem.InputActionReference TestMat::actionRef
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionRef_6;
	// System.Int32 TestMat::ctr
	int32_t ___ctr_7;
};

// Toggle
struct Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Toggle::isTab
	bool ___isTab_4;
	// UnityEngine.GameObject Toggle::tablet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tablet_5;
	// UnityEngine.GameObject[] Toggle::disabledObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___disabledObjects_6;
	// UnityEngine.InputSystem.InputAction Toggle::primaryX
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___primaryX_7;
};

// VideoButton
struct VideoButton_t8E3ADFF8DF7E1791DF6F05F0A6CAFE2D8075443D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Video.VideoClip VideoButton::videoclip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___videoclip_4;
};

// VideoController
struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Video.VideoPlayer VideoController::videoPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___videoPlayer_6;
};

struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_StaticFields
{
	// UnityEngine.Video.VideoClip VideoController::videoClip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___videoClip_4;
	// UnityEngine.Events.UnityEvent VideoController::videoPlayEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___videoPlayEvent_5;
};

// VideoInfo
struct VideoInfo_tC3F239DE94828502B07DFC683B41AF22B648FDE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI VideoInfo::textPro
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textPro_4;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A  : public RuntimeArray
{
	ALIGN_FIELD (8) LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* m_Items[1];

	inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mFC076EF2A48CF6C01932E82D2F23489658D5D9B4_gshared (Action_3_t838D6B6BB4BFFC6E8430C389747DB008A0B26146* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetSubsystems<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystems_TisIl2CppFullySharedGenericAny_m2A22E59B364BEEEA01EA0CFEB94013D041DC47BC_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___subsystems0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisIl2CppFullySharedGenericAny_m754E9486E0B3F9C50B4261F1F2088D02098E214B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::ToggleRenderers<System.Object>(System.Boolean,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleRenderers_TisRuntimeObject_mEF5415DEA402D72B72B08240F325A1AAB8FACCF2_gshared (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisIl2CppFullySharedGenericAny_m8FE39C82005602F4FEA27DC201600DABE2481BD1_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::ToggleRenderers<System.Object>(System.Boolean,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleRenderers_TisRuntimeObject_m3CF4C5D68B38E993A2C52195DC2EDF9E92154BDE_gshared (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method) ;

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Controller>()
inline Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void SkyBox::addArrows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox_addArrows_mDC0D317E15820DD80871351EB7609B705F19679B (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::get_triggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.GameObject::GetComponent<ArrowScript>()
inline ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean ArrowScript::isActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrowScript_isActive_m1F0F4C21B1E945B3E717BE3BB541B84EE6F77BFE (ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SkyBox>()
inline SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_mC520BDF769C5B2824BE2CCC4ADC9CEBEE17A60B4 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void SkyBox::destroyArrows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox_destroyArrows_mCF76B35D1E603AA7B9A3F82FE5AFAEF5224C6A85 (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::GetTriangles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_GetTriangles_m2B70A746EE624B60BF9BA4528E4239B47EF42E16 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___submesh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void TabletToggle::UpdateTabletVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle_UpdateTabletVisibility_m7B843A1F9565A246F504206FE0561BBB6C7E364F (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::IsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void TabletToggle::ToggleTablet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle_ToggleTablet_m6DA4B87CB29A0A0A6D2B65F86834580678BE3F11 (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Toggle::DisableObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_DisableObjects_m016EE9BED247E6EA2B178A60D9FE203D9E721181 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) ;
// System.Void Toggle::EnableObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_EnableObjects_m60A6A30B5EDEAD4DE23B55F24B3FD38E407DD934 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputSettings UnityEngine.InputSystem.InputSystem::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* InputSystem_get_settings_mFAFDCA4665DFE068CEBBBB379972A390BD0E45C7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSettings::SetInternalFeatureFlag(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSettings_SetInternalFeatureFlag_mF593642B414A97107C5F4835FDFB2F185F1933E0 (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, String_t* ___featureName0, bool ___enabled1, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_leftHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHand::get_isTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::UpdateRenderingVisibility(UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* ___handGameObjects0, bool ___isTracked1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Hands.XRHand>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t838D6B6BB4BFFC6E8430C389747DB008A0B26146*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mFC076EF2A48CF6C01932E82D2F23489658D5D9B4_gshared)((Action_3_t838D6B6BB4BFFC6E8430C389747DB008A0B26146*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnDestroy_mD3AA7DE72F1829E459463D0EC1FC01D66CA1C964 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetSubsystems<UnityEngine.XR.Hands.XRHandSubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m280C9268C53E673EC602C1138398BB10FD2A7604 (List_1_tE4111BEC044D13259EFD4EC5907636C855887179* ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))SubsystemManager_GetSubsystems_TisIl2CppFullySharedGenericAny_m2A22E59B364BEEEA01EA0CFEB94013D041DC47BC_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)___subsystems0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>::get_Count()
inline int32_t List_1_get_Count_m571D52D1CFC36A69BDAFBAC74B0F075F8BB773BC_inline (List_1_tE4111BEC044D13259EFD4EC5907636C855887179* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>::get_Item(System.Int32)
inline XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* List_1_get_Item_m75273E2FDEA382223C6F78765C1A71E6A758CF9F (List_1_tE4111BEC044D13259EFD4EC5907636C855887179* __this, int32_t ___index0, const RuntimeMethod* method)
{
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::.ctor(UnityEngine.XR.Hands.Handedness,UnityEngine.Transform,UnityEngine.GameObject,UnityEngine.Material,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects__ctor_m7C8BF105D91099BB71E93DE487C35540E1F2C616 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, int32_t ___handedness0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshPrefab2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshMaterial3, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab5, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::ToggleDrawMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDrawMesh_mA32DC2B6F9C554BDBD9DE5301479A39C7A5611D0 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, bool ___drawMesh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::ToggleDebugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDebugDrawJoints_m7C00B124FE8632B4807E5FF1BDFD05FB9313C1FC (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::SetVelocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_SetVelocityType_m45ACD71D5008A4F3BDB03E8D045C96A9AC26CB86 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, int32_t ___velocityType0, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::get_handedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_rightHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::UpdateJoints(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.Hands.XRHand,System.Boolean,System.Boolean,System.Boolean,UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoints_mABB68C021C717F5D19164D731A4D85425E576B9E (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___xrOrigin0, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand1, bool ___areJointsTracked2, bool ___drawMeshes3, bool ___debugDrawJoints4, int32_t ___velocityType5, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::UpdateRootPose(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateRootPose_m686933B58C24AE053A22BAAF2A55640661B09284 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>::.ctor()
inline void List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4 (List_1_tE4111BEC044D13259EFD4EC5907636C855887179* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.XR.Hands.XRHandJointIDUtility::ToIndex(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC (int32_t ___jointId0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.SkinnedMeshRenderer>(T&)
inline bool Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_TryGetComponent_TisIl2CppFullySharedGenericAny_m754E9486E0B3F9C50B4261F1F2088D02098E214B_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)___component0, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::<.ctor>g__AssignJoint|9_0(UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects/<>c__DisplayClass9_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m4DA0F7B90A18ECEBDCE1A366D728E6F02080D1EE (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, int32_t ___jointId0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___jointXform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawJointsParent2, U3CU3Ec__DisplayClass9_0_t4EC188EAF26474EF44BBDD06B2470EA6BFD1EAB7* p3, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::GetFrontJointID(UnityEngine.XR.Hands.XRHandFingerID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_GetFrontJointID_m4392F7CCCB0AA92FB47F990F5326820725835D2A (int32_t ___fingerId0, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::GetBackJointID(UnityEngine.XR.Hands.XRHandFingerID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_GetBackJointID_m10CC45E0A8001CF5681C5271CA35797F3F20ED02 (int32_t ___fingerId0, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::FromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63 (int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::ToggleRenderers<UnityEngine.MeshRenderer>(System.Boolean,UnityEngine.Transform)
inline void HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCE1081B77173997D20733D3C9D5117E787662A05 (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method)
{
	((  void (*) (bool, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HandGameObjects_ToggleRenderers_TisRuntimeObject_mEF5415DEA402D72B72B08240F325A1AAB8FACCF2_gshared)(___toggle0, ___xform1, method);
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::ToggleRenderers<UnityEngine.LineRenderer>(System.Boolean,UnityEngine.Transform)
inline void HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m79EACF1A878EAA6CEFC90C16165F8940B58E27D9 (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method)
{
	((  void (*) (bool, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HandGameObjects_ToggleRenderers_TisRuntimeObject_mEF5415DEA402D72B72B08240F325A1AAB8FACCF2_gshared)(___toggle0, ___xform1, method);
}
// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::get_rootPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XROrigin_get_Origin_mCE6A3B327ACE6FAEDCC67A9DC952FEED191C26B6_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE (const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.XRHand::GetJoint(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::UpdateJoint(System.Boolean,UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType,UnityEngine.Pose,UnityEngine.XR.Hands.XRHandJoint,UnityEngine.Pose&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoint_m78B7DF2AFDA7598109469665A3D7445AD31DB93C (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, bool ___debugDrawJoints0, int32_t ___velocityType1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___originPose2, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___joint3, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___parentPose4, bool ___cacheParentPose5, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJoint::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___lhs0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.LineRenderer>(T&)
inline bool GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_TryGetComponent_TisIl2CppFullySharedGenericAny_m8FE39C82005602F4FEA27DC201600DABE2481BD1_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)___component0, method);
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetLinearVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___linearVelocity0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___angularVelocity0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::UpdateRenderingVisibility(UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* ___handGameObjects0, bool ___isTracked1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnDestroy_m629461090EBB5B11AB1A69FF94A8D5E71453201E (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::.ctor(UnityEngine.XR.Hands.Handedness,UnityEngine.Transform,UnityEngine.GameObject,UnityEngine.Material,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects__ctor_m4B3ABF1BB5221E99F8998DC77562B8078459B054 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, int32_t ___handedness0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshPrefab2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshMaterial3, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab5, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::ToggleDrawMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDrawMesh_m93229309413C5BD7B66A6E1F752E66A289538932 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, bool ___drawMesh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::ToggleDebugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDebugDrawJoints_m3C1679A45E62B0F32D9883BC045FA4653690EC43 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::SetVelocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_SetVelocityType_mF51757A5DDB3FAF34C8475E620C73F7926830BF7 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, int32_t ___velocityType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::UpdateJoints(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.Hands.XRHand,System.Boolean,System.Boolean,System.Boolean,UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoints_mF69FFDDBDF7E81FE2B509969BCB1DC2C41D12896 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___xrOrigin0, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand1, bool ___areJointsTracked2, bool ___drawMeshes3, bool ___debugDrawJoints4, int32_t ___velocityType5, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::UpdateRootPose(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateRootPose_m918EF10CC6D26C20050D7C263FF85AFC8FBF1470 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::<.ctor>g__AssignJoint|9_0(UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects/<>c__DisplayClass9_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m568B622187D4C3A5607E4F57ED91FCDC74B1633C (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, int32_t ___jointId0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___jointXform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawJointsParent2, U3CU3Ec__DisplayClass9_0_t283EC0359DA1A43EE54A2A74BF89DBF2F17BDC83* p3, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::ToggleRenderers<UnityEngine.MeshRenderer>(System.Boolean,UnityEngine.Transform)
inline void HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m9744A7B27D046A8A65C16D26BE0322E8BED18767 (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method)
{
	((  void (*) (bool, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HandGameObjects_ToggleRenderers_TisRuntimeObject_m3CF4C5D68B38E993A2C52195DC2EDF9E92154BDE_gshared)(___toggle0, ___xform1, method);
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::ToggleRenderers<UnityEngine.LineRenderer>(System.Boolean,UnityEngine.Transform)
inline void HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m286CA8B39FB3CCC909718E30B0D54D73F3861577 (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method)
{
	((  void (*) (bool, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HandGameObjects_ToggleRenderers_TisRuntimeObject_m3CF4C5D68B38E993A2C52195DC2EDF9E92154BDE_gshared)(___toggle0, ___xform1, method);
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::UpdateJoint(System.Boolean,UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType,UnityEngine.Pose,UnityEngine.XR.Hands.XRHandJoint,UnityEngine.Pose&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoint_mEF2C0E9609E6B80123EA66433867D4E6F67E03D3 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, bool ___debugDrawJoints0, int32_t ___velocityType1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___originPose2, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___joint3, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___parentPose4, bool ___cacheParentPose5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void ArrowScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowScript_Start_mA62A5B8BE89CD689296DCFBEE615334B74E4A7CA (ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* __this, const RuntimeMethod* method) 
{
	{
		// curScale = new Vector3(33.46707F,0.06694455F,100.5768F);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (33.4670715f), (0.066944547f), (100.576797f), /*hidden argument*/NULL);
		__this->___curScale_8 = L_0;
		// zoomScale =new Vector3(33.46707F,1.6694455F,100.5768F) ;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (33.4670715f), (1.66944551f), (100.576797f), /*hidden argument*/NULL);
		__this->___zoomScale_9 = L_1;
		// active = false;
		__this->___active_13 = (bool)0;
		// Threshold = 30;
		__this->___Threshold_7 = (30.0f);
		// myOriginalAngle = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		__this->___myOriginalAngle_14 = L_3;
		// InitialCameraPosition = Camera.main.gameObject.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		__this->___InitialCameraPosition_15 = L_7;
		// myDifference = InitialCameraPosition - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___InitialCameraPosition_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_10, NULL);
		__this->___myDifference_16 = L_11;
		// }
		return;
	}
}
// System.Void ArrowScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowScript_Update_m4747202A0415B5CB7F2F859B24D76DD173F7FDDF (ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B9_0 = 0;
	{
		// transform.position = Camera.main.gameObject.transform.position - myDifference;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___myDifference_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_4, L_5, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// transform.rotation = myOriginalAngle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___myOriginalAngle_14;
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_8, NULL);
		// Quaternion myView = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		V_0 = L_10;
		// Quaternion cameraAngle = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		V_1 = L_13;
		// Vector3 v = cameraAngle.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_2 = L_14;
		// CameraAngle = v.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16 = L_15.___y_3;
		__this->___CameraAngle_6 = L_16;
		// angleBetweenCameraandMe = 180 + transform.rotation.eulerAngles.y - CameraAngle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		V_3 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		float L_20 = L_19.___y_3;
		float L_21 = __this->___CameraAngle_6;
		__this->___angleBetweenCameraandMe_4 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add((180.0f), L_20)), L_21));
		goto IL_00ba;
	}

IL_009b:
	{
		// angleBetweenCameraandMe = angleBetweenCameraandMe-=360;
		float L_22 = __this->___angleBetweenCameraandMe_4;
		float L_23 = ((float)il2cpp_codegen_subtract(L_22, (360.0f)));
		V_4 = L_23;
		__this->___angleBetweenCameraandMe_4 = L_23;
		float L_24 = V_4;
		__this->___angleBetweenCameraandMe_4 = L_24;
	}

IL_00ba:
	{
		// while(angleBetweenCameraandMe>360){
		float L_25 = __this->___angleBetweenCameraandMe_4;
		V_5 = (bool)((((float)L_25) > ((float)(360.0f)))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00e3;
	}

IL_00cf:
	{
		// angleBetweenCameraandMe+=360;
		float L_27 = __this->___angleBetweenCameraandMe_4;
		__this->___angleBetweenCameraandMe_4 = ((float)il2cpp_codegen_add(L_27, (360.0f)));
	}

IL_00e3:
	{
		// while(angleBetweenCameraandMe<0){
		float L_28 = __this->___angleBetweenCameraandMe_4;
		V_6 = (bool)((((float)L_28) < ((float)(0.0f)))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_00cf;
		}
	}
	{
		// if((angleBetweenCameraandMe<=Threshold) || (360-angleBetweenCameraandMe<=Threshold) ){
		float L_30 = __this->___angleBetweenCameraandMe_4;
		float L_31 = __this->___Threshold_7;
		if ((((float)L_30) <= ((float)L_31)))
		{
			goto IL_011d;
		}
	}
	{
		float L_32 = __this->___angleBetweenCameraandMe_4;
		float L_33 = __this->___Threshold_7;
		G_B9_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((360.0f), L_32))) <= ((float)L_33)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B9_0 = 1;
	}

IL_011e:
	{
		V_7 = (bool)G_B9_0;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_015d;
		}
	}
	{
		// active = true;
		__this->___active_13 = (bool)1;
		// transform.localScale = Vector3.Lerp(transform.localScale, zoomScale, transitionSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___zoomScale_9;
		float L_39 = __this->___transitionSpeed_12;
		float L_40;
		L_40 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_37, L_38, ((float)il2cpp_codegen_multiply(L_39, L_40)), NULL);
		NullCheck(L_35);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_35, L_41, NULL);
		goto IL_0194;
	}

IL_015d:
	{
		// active = false;
		__this->___active_13 = (bool)0;
		// transform.localScale = Vector3.Lerp(transform.localScale, curScale, transitionSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___curScale_8;
		float L_46 = __this->___transitionSpeed_12;
		float L_47;
		L_47 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_44, L_45, ((float)il2cpp_codegen_multiply(L_46, L_47)), NULL);
		NullCheck(L_42);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_42, L_48, NULL);
	}

IL_0194:
	{
		// }
		return;
	}
}
// System.Boolean ArrowScript::isActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrowScript_isActive_m1F0F4C21B1E945B3E717BE3BB541B84EE6F77BFE (ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return active;
		bool L_0 = __this->___active_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void ArrowScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowScript__ctor_m49CA01FF02363891A4F87C9B9FEB66798F181794 (ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* __this, const RuntimeMethod* method) 
{
	{
		// public float transitionSpeed = 5f;
		__this->___transitionSpeed_12 = (5.0f);
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
// System.Void Controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Start_m6CF9E52A1D22548B67650167CBA335928CEC4796 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD3263FC27C561A834538842AB627D2DB1E78E09);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transparentMaterial = Resources.Load<Material>("Materials/OtherMaterials/Transparent");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128(_stringLiteralCD3263FC27C561A834538842AB627D2DB1E78E09, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128_RuntimeMethod_var);
		__this->___transparentMaterial_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___transparentMaterial_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Update_mDE8E185DE18C109FA2E8C6FCBFEB86F100F21634 (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_mD8A105DFD9CAFDD0B419A5ECD5BC3B789338476A (Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* __this, const RuntimeMethod* method) 
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
// System.Int32 GlobalVariables::get_Numberoflocations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlobalVariables_get_Numberoflocations_mDF8123A6898A61D9A1E1C8A807C8801E649F035F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Numberoflocations { get; set; }
		int32_t L_0 = ((GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E_il2cpp_TypeInfo_var))->___U3CNumberoflocationsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void GlobalVariables::set_Numberoflocations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalVariables_set_Numberoflocations_mB09E42B5518D2F369D358E496E6BF167380BC123 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Numberoflocations { get; set; }
		int32_t L_0 = ___value0;
		((GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVariables_tBB007C5C9EF320ABB21DA70F60975762475CB26E_il2cpp_TypeInfo_var))->___U3CNumberoflocationsU3Ek__BackingField_0 = L_0;
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
// System.Void Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m5DBFA7A6885EBEC3891ADE47E642413C0B376549 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void SkyBox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox_Start_mAE3B625B75364ED4700CD089DF7017F6B3FA632F (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47856CFFE18FCB88EE8FEE543EC2798F93E49CF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// string tag = "XROrigin";
		V_0 = _stringLiteral47856CFFE18FCB88EE8FEE543EC2798F93E49CF3;
		// XROrigin = GameObject.FindGameObjectsWithTag(tag)[0];
		String_t* L_0 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___XROrigin_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___XROrigin_8), (void*)L_3);
		// if(gameObject == XROrigin.GetComponent<Controller>().CurrentlyInside){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___XROrigin_8;
		NullCheck(L_5);
		Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* L_6;
		L_6 = GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537(L_5, GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___CurrentlyInside_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// XROrigin.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___XROrigin_8;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_13, NULL);
		// addArrows();
		SkyBox_addArrows_mDC0D317E15820DD80871351EB7609B705F19679B(__this, NULL);
		goto IL_005d;
	}

IL_005b:
	{
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void SkyBox::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox_Update_mFCA1BA9AE5327EE4A48BAA37C269BE678B9684F8 (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	bool V_4 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if(rightTrigger.action.triggered){
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___rightTrigger_9;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0121;
		}
	}
	{
		// if(XROrigin.GetComponent<Controller>().CurrentlyInside == gameObject && (counter <= 0)){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___XROrigin_8;
		NullCheck(L_4);
		Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* L_5;
		L_5 = GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537(L_4, GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___CurrentlyInside_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = __this->___counter_10;
		G_B4_0 = ((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 0;
	}

IL_0045:
	{
		V_1 = (bool)G_B4_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0120;
		}
	}
	{
		// foreach(GameObject arrow in arrows){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___arrows_6;
		NullCheck(L_11);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_12;
		L_12 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_11, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0102_1;
			}

IL_005f_1:
			{
				// foreach(GameObject arrow in arrows){
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_13;
				// if(arrow.GetComponent<ArrowScript>().isActive()){
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_3;
				NullCheck(L_14);
				ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* L_15;
				L_15 = GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E(L_14, GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
				NullCheck(L_15);
				bool L_16;
				L_16 = ArrowScript_isActive_m1F0F4C21B1E945B3E717BE3BB541B84EE6F77BFE(L_15, NULL);
				V_4 = L_16;
				bool L_17 = V_4;
				if (!L_17)
				{
					goto IL_0101_1;
				}
			}
			{
				// XROrigin.GetComponent<Controller>().CurrentlyInside = arrow.GetComponent<ArrowScript>().TransformTo;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___XROrigin_8;
				NullCheck(L_18);
				Controller_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9* L_19;
				L_19 = GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537(L_18, GameObject_GetComponent_TisController_t080F3A02FE42D755CC6A8B605F85CA157ED61BB9_mF364E4B94D1E222775B6AE8790360D39AF249537_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_3;
				NullCheck(L_20);
				ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* L_21;
				L_21 = GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E(L_20, GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
				NullCheck(L_21);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21->___TransformTo_11;
				NullCheck(L_19);
				L_19->___CurrentlyInside_4 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&L_19->___CurrentlyInside_4), (void*)L_22);
				// GameObject nextObject = arrow.GetComponent<ArrowScript>().TransformTo;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_3;
				NullCheck(L_23);
				ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* L_24;
				L_24 = GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E(L_23, GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
				NullCheck(L_24);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___TransformTo_11;
				V_5 = L_25;
				// XROrigin.transform.position = arrow.GetComponent<ArrowScript>().TransformTo.transform.position;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___XROrigin_8;
				NullCheck(L_26);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
				L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_3;
				NullCheck(L_28);
				ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* L_29;
				L_29 = GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E(L_28, GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
				NullCheck(L_29);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___TransformTo_11;
				NullCheck(L_30);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
				L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
				NullCheck(L_31);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
				L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
				NullCheck(L_27);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_32, NULL);
				// nextObject.GetComponent<SkyBox>().addArrows();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_5;
				NullCheck(L_33);
				SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* L_34;
				L_34 = GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679(L_33, GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
				NullCheck(L_34);
				SkyBox_addArrows_mDC0D317E15820DD80871351EB7609B705F19679B(L_34, NULL);
				// nextObject.GetComponent<SkyBox>().counter = 10;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_5;
				NullCheck(L_35);
				SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* L_36;
				L_36 = GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679(L_35, GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
				NullCheck(L_36);
				L_36->___counter_10 = ((int32_t)10);
				// RenderSettings.skybox = nextObject.GetComponent<SkyBox>().myMaterial;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_5;
				NullCheck(L_37);
				SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* L_38;
				L_38 = GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679(L_37, GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
				NullCheck(L_38);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = L_38->___myMaterial_4;
				RenderSettings_set_skybox_mC520BDF769C5B2824BE2CCC4ADC9CEBEE17A60B4(L_39, NULL);
				// destroyArrows();
				SkyBox_destroyArrows_mCF76B35D1E603AA7B9A3F82FE5AFAEF5224C6A85(__this, NULL);
				// break;
				goto IL_010e_1;
			}

IL_0101_1:
			{
			}

IL_0102_1:
			{
				// foreach(GameObject arrow in arrows){
				bool L_40;
				L_40 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_005f_1;
				}
			}

IL_010e_1:
			{
				goto IL_011f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011f:
	{
	}

IL_0120:
	{
	}

IL_0121:
	{
		// counter--;
		int32_t L_41 = __this->___counter_10;
		__this->___counter_10 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		// }
		return;
	}
}
// System.Void SkyBox::addArrows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox_addArrows_mDC0D317E15820DD80871351EB7609B705F19679B (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36AF11980966FD53F29C0D0A37FF8BC59EB5FC85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
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
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// foreach(GameObject neighbour in neighbours){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___neighbours_5;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_016e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0160_1;
			}

IL_0013_1:
			{
				// foreach(GameObject neighbour in neighbours){
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// GameObject prefab = Resources.Load<GameObject>("Prefabs/Arrow");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteral36AF11980966FD53F29C0D0A37FF8BC59EB5FC85, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
				V_2 = L_3;
				// GameObject arrow = Instantiate(prefab);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
				V_3 = L_5;
				// Vector3 a = Camera.main.gameObject.transform.position;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
				L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
				NullCheck(L_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
				NullCheck(L_7);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
				L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
				V_4 = L_9;
				// Vector3 b = neighbour.transform.position;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
				NullCheck(L_10);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
				V_5 = L_12;
				// Vector3 direction = a-b;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
				L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_13, L_14, NULL);
				V_6 = L_15;
				// arrow.transform.rotation =Quaternion.LookRotation(direction, Vector3.up);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
				NullCheck(L_16);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
				L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
				L_20 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_18, L_19, NULL);
				NullCheck(L_17);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_20, NULL);
				// direction = -direction;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_6;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
				L_22 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_21, NULL);
				V_6 = L_22;
				// Vector3 normalizedDirection = direction.normalized;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
				V_7 = L_23;
				// Vector3 position = a + 2.5f * normalizedDirection;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_7;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
				L_26 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((2.5f), L_25, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
				L_27 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_24, L_26, NULL);
				V_8 = L_27;
				// position.y = -0.4f;
				(&V_8)->___y_3 = (-0.400000006f);
				// arrow.transform.position = position;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_3;
				NullCheck(L_28);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
				L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_8;
				NullCheck(L_29);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_30, NULL);
				// arrow.GetComponent<ArrowScript>().MyParent = gameObject;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_3;
				NullCheck(L_31);
				ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* L_32;
				L_32 = GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E(L_31, GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
				L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				NullCheck(L_32);
				L_32->___MyParent_10 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(&L_32->___MyParent_10), (void*)L_33);
				// arrow.GetComponent<ArrowScript>().TransformTo = neighbour;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_3;
				NullCheck(L_34);
				ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* L_35;
				L_35 = GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E(L_34, GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_1;
				NullCheck(L_35);
				L_35->___TransformTo_11 = L_36;
				Il2CppCodeGenWriteBarrier((void**)(&L_35->___TransformTo_11), (void*)L_36);
				// arrow.GetComponent<ArrowScript>().myAngle = arrow.transform.rotation.eulerAngles.y;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_3;
				NullCheck(L_37);
				ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* L_38;
				L_38 = GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E(L_37, GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_3;
				NullCheck(L_39);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
				L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
				NullCheck(L_40);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
				L_41 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_40, NULL);
				V_9 = L_41;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_9), NULL);
				float L_43 = L_42.___y_3;
				NullCheck(L_38);
				L_38->___myAngle_5 = L_43;
				// arrow.GetComponent<ArrowScript>().myAngle = arrow.transform.rotation.eulerAngles.y;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = V_3;
				NullCheck(L_44);
				ArrowScript_tB4941C4839D8C40DDD55F642597819929491084E* L_45;
				L_45 = GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E(L_44, GameObject_GetComponent_TisArrowScript_tB4941C4839D8C40DDD55F642597819929491084E_m83E0E412BEDC5F2F762590FC51C462559438427E_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_3;
				NullCheck(L_46);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
				L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
				NullCheck(L_47);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
				L_48 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_47, NULL);
				V_9 = L_48;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
				L_49 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_9), NULL);
				float L_50 = L_49.___y_3;
				NullCheck(L_45);
				L_45->___myAngle_5 = L_50;
				// arrow.tag = "Arrow";
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_3;
				NullCheck(L_51);
				GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_51, _stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50, NULL);
				// arrow.name = gameObject.name + "_" + neighbour.GetComponent<SkyBox>().gameObject.name;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
				L_53 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				NullCheck(L_53);
				String_t* L_54;
				L_54 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_53, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = V_1;
				NullCheck(L_55);
				SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* L_56;
				L_56 = GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679(L_55, GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
				NullCheck(L_56);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
				L_57 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_56, NULL);
				NullCheck(L_57);
				String_t* L_58;
				L_58 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_57, NULL);
				String_t* L_59;
				L_59 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_54, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_58, NULL);
				NullCheck(L_52);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_52, L_59, NULL);
				// arrows.Add(arrow);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_60 = __this->___arrows_6;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_3;
				NullCheck(L_60);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_60, L_61, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			}

IL_0160_1:
			{
				// foreach(GameObject neighbour in neighbours){
				bool L_62;
				L_62 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_017d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_017d:
	{
		// }
		return;
	}
}
// System.Void SkyBox::destroyArrows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox_destroyArrows_mCF76B35D1E603AA7B9A3F82FE5AFAEF5224C6A85 (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach(GameObject arrow in arrows){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___arrows_6;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0010_1:
			{
				// foreach(GameObject arrow in arrows){
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// UnityEngine.Object.DestroyImmediate(arrow);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_3, NULL);
			}

IL_0021_1:
			{
				// foreach(GameObject arrow in arrows){
				bool L_4;
				L_4 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// arrows = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_5, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___arrows_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrows_6), (void*)L_5);
		// }
		return;
	}
}
// System.Void SkyBox::makemeVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox_makemeVisible_mFF073A01C6AB8AB5D3EA2AA41E716A58C483A4CC (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD31A632016AF60717D7799DCFF6B2D5E57D886B9);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// gameObject.GetComponent<Renderer>().material = gameObject.GetComponent<SkyBox>().myMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* L_3;
		L_3 = GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679(L_2, GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3->___myMaterial_4;
		NullCheck(L_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_1, L_4, NULL);
		// Material green = Resources.Load<Material>("OtherMaterials/GreenMaterial");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128(_stringLiteralD31A632016AF60717D7799DCFF6B2D5E57D886B9, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128_RuntimeMethod_var);
		V_0 = L_5;
		// foreach(GameObject arrow in arrows){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___arrows_6;
		NullCheck(L_6);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_7;
		L_7 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_6, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_003c_1:
			{
				// foreach(GameObject arrow in arrows){
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_2 = L_8;
				// arrow.GetComponent<Renderer>().material = green;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
				NullCheck(L_9);
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10;
				L_10 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_9, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_0;
				NullCheck(L_10);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_10, L_11, NULL);
			}

IL_0053_1:
			{
				// foreach(GameObject arrow in arrows){
				bool L_12;
				L_12 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_003c_1;
				}
			}
			{
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
// System.Void SkyBox::makeObjVisible(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox_makeObjVisible_m2CF3CFE8A7C28AF9099AB9498DFE5F4330E850F4 (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD31A632016AF60717D7799DCFF6B2D5E57D886B9);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// obj.GetComponent<Renderer>().material = obj.GetComponent<SkyBox>().myMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___obj0;
		NullCheck(L_2);
		SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* L_3;
		L_3 = GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679(L_2, GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3->___myMaterial_4;
		NullCheck(L_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_1, L_4, NULL);
		// Material green = Resources.Load<Material>("OtherMaterials/GreenMaterial");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128(_stringLiteralD31A632016AF60717D7799DCFF6B2D5E57D886B9, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_m28782CC70624922DAF3B0FB13930E4EB59848128_RuntimeMethod_var);
		V_0 = L_5;
		// foreach(GameObject arrow in obj.GetComponent<SkyBox>().arrows){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___obj0;
		NullCheck(L_6);
		SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* L_7;
		L_7 = GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679(L_6, GameObject_GetComponent_TisSkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD_m1ECDDF0240A8F8AD565C040665E3BDDDC5D45679_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = L_7->___arrows_6;
		NullCheck(L_8);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_9;
		L_9 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_8, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_0037_1:
			{
				// foreach(GameObject arrow in obj.GetComponent<SkyBox>().arrows){
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_2 = L_10;
				// arrow.GetComponent<Renderer>().material = green;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
				NullCheck(L_11);
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12;
				L_12 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_11, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_0;
				NullCheck(L_12);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_12, L_13, NULL);
			}

IL_004e_1:
			{
				// foreach(GameObject arrow in obj.GetComponent<SkyBox>().arrows){
				bool L_14;
				L_14 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void SkyBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyBox__ctor_m16E826A772E2819A2CBA855726FA478C51CCD360 (SkyBox_t7DEDF3E017138DE43BE3501B3DFC41035193CCBD* __this, const RuntimeMethod* method) 
{
	{
		// public int counter = 10;
		__this->___counter_10 = ((int32_t)10);
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
// System.Void EnableSimulate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSimulate_Awake_m2C8F4B9F3AFF18254D774C6F5F32CD3082EBCE39 (EnableSimulate_t08FED2ECDC82F136E53CD15FAC14B85FD46B3B5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for(int i=0; i<toDisable.Count; i++)
		V_0 = 0;
		goto IL_001c;
	}

IL_0005:
	{
		// toDisable[i].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___toDisable_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// for(int i=0; i<toDisable.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001c:
	{
		// for(int i=0; i<toDisable.Count; i++)
		int32_t L_4 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___toDisable_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_5, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnableSimulate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableSimulate__ctor_mA1BA483F432D9BD33E50D3FDC281A6B4381693AA (EnableSimulate_t08FED2ECDC82F136E53CD15FAC14B85FD46B3B5F* __this, const RuntimeMethod* method) 
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
// System.Void Flip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flip_Start_m658A4B5CCF7D96594098EEB355DC0C439CF23DFF (Flip_tCC3630F7FDA71E1C98CA8C7EFDF4DBA56EEC0A40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	{
		// Mesh mesh = this.GetComponent<MeshFilter>().mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0;
		L_0 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_0, NULL);
		V_0 = L_1;
		// Vector3[] normals = mesh.normals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = V_0;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_2, NULL);
		V_1 = L_3;
		// for (int i = 0; i < normals.Length; i++)
		V_2 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		// normals[i] = -normals[i];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_1;
		int32_t L_5 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_9, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// for (int i = 0; i < normals.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < normals.Length; i++)
		int32_t L_12 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_1;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0018;
		}
	}
	{
		// mesh.normals = normals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = V_1;
		NullCheck(L_15);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_15, L_16, NULL);
		// for (int i = 0; i < mesh.subMeshCount; i++)
		V_4 = 0;
		goto IL_009a;
	}

IL_0046:
	{
		// int[] tris = mesh.GetTriangles(i);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19;
		L_19 = Mesh_GetTriangles_m2B70A746EE624B60BF9BA4528E4239B47EF42E16(L_17, L_18, NULL);
		V_5 = L_19;
		// for (int j = 0; j < tris.Length; j+=3)
		V_6 = 0;
		goto IL_007a;
	}

IL_0056:
	{
		// int temp = tris[j];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_5;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		// tris[j] = tris[j+1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_5;
		int32_t L_25 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_5;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int32_t)L_29);
		// tris[j+1] = temp;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_5;
		int32_t L_31 = V_6;
		int32_t L_32 = V_7;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 1))), (int32_t)L_32);
		// for (int j = 0; j < tris.Length; j+=3)
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 3));
	}

IL_007a:
	{
		// for (int j = 0; j < tris.Length; j+=3)
		int32_t L_34 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_5;
		NullCheck(L_35);
		V_8 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))? 1 : 0);
		bool L_36 = V_8;
		if (L_36)
		{
			goto IL_0056;
		}
	}
	{
		// mesh.SetTriangles(tris,i);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_5;
		int32_t L_39 = V_4;
		NullCheck(L_37);
		Mesh_SetTriangles_mD97664344427EB85BB6DC2EF91479E03B9114258(L_37, L_38, L_39, NULL);
		// for (int i = 0; i < mesh.subMeshCount; i++)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_009a:
	{
		// for (int i = 0; i < mesh.subMeshCount; i++)
		int32_t L_41 = V_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_42, NULL);
		V_9 = (bool)((((int32_t)L_41) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_9;
		if (L_44)
		{
			goto IL_0046;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Flip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flip__ctor_mAB24813686573440838934ACD4EA28911AFDB1C2 (Flip_tCC3630F7FDA71E1C98CA8C7EFDF4DBA56EEC0A40* __this, const RuntimeMethod* method) 
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
// System.Void LogClick::logClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogClick_logClick_mE37155EC50E518C2DF5C81F3777DCB162E83B1C6 (LogClick_tD2AC9E282BA23635A4DA7F28F7ADD5FEB96A901B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89560C1A46DB731E32EB21F6E49C4A935DBE9EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("clicked!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral89560C1A46DB731E32EB21F6E49C4A935DBE9EAA, NULL);
		// }
		return;
	}
}
// System.Void LogClick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogClick_Start_m6170ED4049C45648C19F2ABDCF4202C3FD387B08 (LogClick_tD2AC9E282BA23635A4DA7F28F7ADD5FEB96A901B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LogClick::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogClick_Update_mCBE23326512EE9358840CAB5B94C4B6A2F99D149 (LogClick_tD2AC9E282BA23635A4DA7F28F7ADD5FEB96A901B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LogClick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogClick__ctor_mED9DCF186D030D5F02CDFE72E6EA35ADBAC7B380 (LogClick_tD2AC9E282BA23635A4DA7F28F7ADD5FEB96A901B* __this, const RuntimeMethod* method) 
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
// System.Void SCripts::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCripts_Start_m71CAFF22FAE6D73EB7EDD63B2B8875A4337E95A1 (SCripts_tA0F724D5B7BBED9C7970002F4EDD66832F3DA501* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SCripts::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCripts_Update_mA395409DA1BD24017903AF159FC4C71A00C72609 (SCripts_tA0F724D5B7BBED9C7970002F4EDD66832F3DA501* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SCripts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SCripts__ctor_m1802685A82894757A6F1930F3F73FE6AB2036EAF (SCripts_tA0F724D5B7BBED9C7970002F4EDD66832F3DA501* __this, const RuntimeMethod* method) 
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
// System.Void Startup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Startup_Start_m2FF5EE94A0F09A02AFD9781F07E779D80CB42428 (Startup_t5BDB41C20F47A29D458E2C896A97CB9BE5711382* __this, const RuntimeMethod* method) 
{
	{
		// transform.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Startup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Startup__ctor_mCEFB0404BFFF0BEEDA5F8397A559935EABBB502A (Startup_t5BDB41C20F47A29D458E2C896A97CB9BE5711382* __this, const RuntimeMethod* method) 
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
// System.Void TabletController::SwitchToMinimap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletController_SwitchToMinimap_mD4CC207F10E92797B8D2DF327FB1EBCBBEFA054A (TabletController_tFB43386417403F59ED374A96C4456288FBB4F05A* __this, const RuntimeMethod* method) 
{
	{
		// tablet.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tablet_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// minimap.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___minimap_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TabletController::SwitchToTablet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletController_SwitchToTablet_m59D479539D9A118F34D4436618B7D46E465C7A51 (TabletController_tFB43386417403F59ED374A96C4456288FBB4F05A* __this, const RuntimeMethod* method) 
{
	{
		// tablet.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tablet_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// minimap.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___minimap_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TabletController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletController__ctor_mE3559C14271537108FDDB32086E5304284F827D0 (TabletController_tFB43386417403F59ED374A96C4456288FBB4F05A* __this, const RuntimeMethod* method) 
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
// System.Void TabletScript::togglScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletScript_togglScreen_m215530E2F692583C226E8D90C37289039D1ECEAC (TabletScript_t4AFB6AD54748FE3B249DB565E4BFF2F631D4381A* __this, const RuntimeMethod* method) 
{
	{
		// screen.SetActive(!screen.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___screen_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___screen_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void TabletScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletScript_Awake_mE7D2F2170142359B2B0EEF0BD56A5002FA46AB85 (TabletScript_t4AFB6AD54748FE3B249DB565E4BFF2F631D4381A* __this, const RuntimeMethod* method) 
{
	{
		// screen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___screen_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TabletScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletScript_Update_m34FF3BEA8CE9009E7E69E34C119285D6C8604E07 (TabletScript_t4AFB6AD54748FE3B249DB565E4BFF2F631D4381A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TabletScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletScript__ctor_m80D818FD3AACCE4BF9236A93E4C1E2B649D92FD6 (TabletScript_t4AFB6AD54748FE3B249DB565E4BFF2F631D4381A* __this, const RuntimeMethod* method) 
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
// System.Void TabletToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle_Start_mDE4AA343091E2F97162E514FE63EB287365A5668 (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) 
{
	{
		// tablet.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tablet_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// leftHandIsPinched = false;
		__this->___leftHandIsPinched_10 = (bool)0;
		// rightHandIsPinched = false;
		__this->___rightHandIsPinched_11 = (bool)0;
		// }
		return;
	}
}
// System.Void TabletToggle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle_OnEnable_m72126107C2361D5A78ACB3CD732CDAD597252D5D (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) 
{
	{
		// keyPress.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___keyPress_9;
		NullCheck(L_0);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_0, NULL);
		// }
		return;
	}
}
// System.Void TabletToggle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle_OnDisable_m1161A3F3EBB65873E3F73C293803DB8ACB88C374 (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) 
{
	{
		// keyPress.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___keyPress_9;
		NullCheck(L_0);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_0, NULL);
		// }
		return;
	}
}
// System.Void TabletToggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle_Update_mF7217F964A1985DC074FA4F355BA171E1FEB8D92 (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) 
{
	{
		// UpdateTabletVisibility();
		TabletToggle_UpdateTabletVisibility_m7B843A1F9565A246F504206FE0561BBB6C7E364F(__this, NULL);
		// }
		return;
	}
}
// System.Void TabletToggle::UpdateTabletVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle_UpdateTabletVisibility_m7B843A1F9565A246F504206FE0561BBB6C7E364F (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// bool leftHandWasPinched = leftHandIsPinched;
		bool L_0 = __this->___leftHandIsPinched_10;
		V_0 = L_0;
		// bool rightHandWasPinched = rightHandIsPinched;
		bool L_1 = __this->___rightHandIsPinched_11;
		V_1 = L_1;
		// leftHandIsPinched = leftPinch.action.IsPressed();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___leftPinch_4;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_3, NULL);
		__this->___leftHandIsPinched_10 = L_4;
		// rightHandIsPinched = rightPinch.action.IsPressed();
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_5 = __this->___rightPinch_7;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_6, NULL);
		__this->___rightHandIsPinched_11 = L_7;
		// if(!leftHandWasPinched || !rightHandWasPinched)
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		bool L_9 = V_1;
		G_B3_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B3_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		// if(leftHandIsPinched && rightHandIsPinched)
		bool L_11 = __this->___leftHandIsPinched_10;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		bool L_12 = __this->___rightHandIsPinched_11;
		G_B7_0 = ((int32_t)(L_12));
		goto IL_005a;
	}

IL_0059:
	{
		G_B7_0 = 0;
	}

IL_005a:
	{
		V_3 = (bool)G_B7_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// ToggleTablet();
		TabletToggle_ToggleTablet_m6DA4B87CB29A0A0A6D2B65F86834580678BE3F11(__this, NULL);
	}

IL_0065:
	{
		// if(keyPress.triggered)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14 = __this->___keyPress_9;
		NullCheck(L_14);
		bool L_15;
		L_15 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_14, NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_007d;
		}
	}
	{
		// ToggleTablet();
		TabletToggle_ToggleTablet_m6DA4B87CB29A0A0A6D2B65F86834580678BE3F11(__this, NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void TabletToggle::ToggleTablet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle_ToggleTablet_m6DA4B87CB29A0A0A6D2B65F86834580678BE3F11 (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) 
{
	{
		// tablet.SetActive(!tablet.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tablet_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___tablet_8;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// leftHand.SetActive(!leftHand.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___leftHand_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___leftHand_6;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// leftHandVisualizer.enabled = !leftHandVisualizer.enabled;
		LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* L_6 = __this->___leftHandVisualizer_5;
		LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* L_7 = __this->___leftHandVisualizer_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_7, NULL);
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void TabletToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabletToggle__ctor_m798FE4186E72B639803E9AEABA5A24269A74C70E (TabletToggle_t25775B06E320CDD2749ABB3E40FD4EE16C6DE30E* __this, const RuntimeMethod* method) 
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
// System.Void TestMat::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMat_Start_m4F14627DC42E995FCAEA004B7BF7CE9E01617C17 (TestMat_tD7CD960111F522FA09DE10852D8CE030E1E4FBCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ctr = 0;
		__this->___ctr_7 = 0;
		// RenderSettings.skybox = materialList[0];
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_0 = __this->___materialList_4;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_0, 0, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		RenderSettings_set_skybox_mC520BDF769C5B2824BE2CCC4ADC9CEBEE17A60B4(L_1, NULL);
		// }
		return;
	}
}
// System.Void TestMat::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMat_OnEnable_m05710479ACDF06CA66322A7D858C901852828648 (TestMat_tD7CD960111F522FA09DE10852D8CE030E1E4FBCA* __this, const RuntimeMethod* method) 
{
	{
		// action.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_5;
		NullCheck(L_0);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_0, NULL);
		// }
		return;
	}
}
// System.Void TestMat::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMat_Update_m52069966D352B70D79D9D379FA99273ACFB15A0E (TestMat_tD7CD960111F522FA09DE10852D8CE030E1E4FBCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if(action.triggered || actionRef.action.triggered){
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___action_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_0, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___actionRef_6;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// ctr++;
		int32_t L_6 = __this->___ctr_7;
		__this->___ctr_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// RenderSettings.skybox = materialList[ctr];
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_7 = __this->___materialList_4;
		int32_t L_8 = __this->___ctr_7;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(L_7, L_8, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		RenderSettings_set_skybox_mC520BDF769C5B2824BE2CCC4ADC9CEBEE17A60B4(L_9, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void TestMat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestMat__ctor_m1CD9B9CAB5A089E69448A3345F7FF84950DD2092 (TestMat_tD7CD960111F522FA09DE10852D8CE030E1E4FBCA* __this, const RuntimeMethod* method) 
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
// System.Void Toggle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_OnEnable_m0868BCA5C9C5A6D097F30501A872715F2F1A8B9B (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	{
		// primaryX.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___primaryX_7;
		NullCheck(L_0);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_0, NULL);
		// }
		return;
	}
}
// System.Void Toggle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_OnDisable_m82F3F0F31A797C1EA15DD75D45CBD4C061DE6AC5 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	{
		// primaryX.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___primaryX_7;
		NullCheck(L_0);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_0, NULL);
		// }
		return;
	}
}
// System.Void Toggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_Start_m61FDC95CA2526858FEB07D7EB337DCCC4C271FE0 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	{
		// isTab = false;
		__this->___isTab_4 = (bool)0;
		// }
		return;
	}
}
// System.Void Toggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_Update_mFB0CB8F24EF84B4FEE45BF31433D32B0465E7A0D (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(primaryX.triggered)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___primaryX_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// isTab = !isTab;
		bool L_3 = __this->___isTab_4;
		__this->___isTab_4 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Toggle::DisableObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_DisableObjects_m016EE9BED247E6EA2B178A60D9FE203D9E721181 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for(int i=0; i<disabledObjects.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// disabledObjects[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___disabledObjects_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for(int i=0; i<disabledObjects.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for(int i=0; i<disabledObjects.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___disabledObjects_6;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Toggle::EnableObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_EnableObjects_m60A6A30B5EDEAD4DE23B55F24B3FD38E407DD934 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for(int i=0; i<disabledObjects.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// disabledObjects[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___disabledObjects_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// for(int i=0; i<disabledObjects.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for(int i=0; i<disabledObjects.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___disabledObjects_6;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Toggle::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_FixedUpdate_mF7E1E05601258C4122529C249282348F31B28944 (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(isTab){
		bool L_0 = __this->___isTab_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// tablet.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___tablet_5;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// DisableObjects();
		Toggle_DisableObjects_m016EE9BED247E6EA2B178A60D9FE203D9E721181(__this, NULL);
		goto IL_0039;
	}

IL_0023:
	{
		// tablet.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___tablet_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// EnableObjects();
		Toggle_EnableObjects_m60A6A30B5EDEAD4DE23B55F24B3FD38E407DD934(__this, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Toggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle__ctor_m2215E96AA142273E39F68756308609BDDD81FD7F (Toggle_t7CF154E34C5338E49F1CC10BC72A9647A25D79ED* __this, const RuntimeMethod* method) 
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
// System.Void VideoButton::PlayVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoButton_PlayVideo_m4BEB70A3F775B3DDAF1DEED4B4A0FCF2763654ED (VideoButton_t8E3ADFF8DF7E1791DF6F05F0A6CAFE2D8075443D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VideoController.videoClip = videoclip;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___videoclip_4;
		((VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_StaticFields*)il2cpp_codegen_static_fields_for(VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var))->___videoClip_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_StaticFields*)il2cpp_codegen_static_fields_for(VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var))->___videoClip_4), (void*)L_0);
		// VideoController.videoPlayEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = ((VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_StaticFields*)il2cpp_codegen_static_fields_for(VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var))->___videoPlayEvent_5;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// }
		return;
	}
}
// System.Void VideoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoButton__ctor_m154717E51EF27A4EC42A7F656766480CD739A029 (VideoButton_t8E3ADFF8DF7E1791DF6F05F0A6CAFE2D8075443D* __this, const RuntimeMethod* method) 
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
// System.Void VideoController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_OnEnable_mA04ABCD881A66648E4BD5DFCB86C1A5A0D5F3200 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoController_DoStuff_mF48DD677FDE047BD8C31540B12D0D21D9C6D5B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// videoPlayEvent.AddListener(DoStuff);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ((VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_StaticFields*)il2cpp_codegen_static_fields_for(VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var))->___videoPlayEvent_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)VideoController_DoStuff_mF48DD677FDE047BD8C31540B12D0D21D9C6D5B7C_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VideoController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_OnDisable_mC6DF10B660FBA0398934F41A45A726B6EC85BA3E (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoController_DoStuff_mF48DD677FDE047BD8C31540B12D0D21D9C6D5B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// videoPlayEvent.RemoveListener(DoStuff);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = ((VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_StaticFields*)il2cpp_codegen_static_fields_for(VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var))->___videoPlayEvent_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_1, __this, (intptr_t)((void*)VideoController_DoStuff_mF48DD677FDE047BD8C31540B12D0D21D9C6D5B7C_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VideoController::DoStuff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_DoStuff_mF48DD677FDE047BD8C31540B12D0D21D9C6D5B7C (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// videoPlayer.clip = videoClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_6;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_1 = ((VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_StaticFields*)il2cpp_codegen_static_fields_for(VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC_il2cpp_TypeInfo_var))->___videoClip_4;
		NullCheck(L_0);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_0, L_1, NULL);
		// videoPlayer.isLooping = false;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___videoPlayer_6;
		NullCheck(L_2);
		VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E(L_2, (bool)0, NULL);
		// videoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->___videoPlayer_6;
		NullCheck(L_3);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_3, NULL);
		// }
		return;
	}
}
// System.Void VideoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController__ctor_m103EB9AC18E394EF526FBFAD32074E59551F3F06 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
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
// System.Void VideoInfo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInfo_Start_m1A6C3927CCA95C3517B5B97CAA24B927C6EBAEFF (VideoInfo_tC3F239DE94828502B07DFC683B41AF22B648FDE9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VideoInfo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInfo_Update_m58E19D06B3DC2EC2C61169866AD770BFBFEAA71E (VideoInfo_tC3F239DE94828502B07DFC683B41AF22B648FDE9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VideoInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInfo__ctor_mC3CF68B044413D033E0E0EF623A9F2606E42BB1E (VideoInfo_tC3F239DE94828502B07DFC683B41AF22B648FDE9* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	bool V_3 = false;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		V_0 = L_2;
		// foreach (var loader in loaders)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006e_1;
			}

IL_001b_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
				L_8 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (loader.name.Equals("Oculus Loader"))
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
				NullCheck(L_10);
				bool L_11;
				L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_006d_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_RightController_5;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_LeftController_4;
				NullCheck(L_14);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_15);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
			}

IL_006d_1:
			{
			}

IL_006e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
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
// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::get_drawMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeftHandVisualizer_get_drawMeshes_mD0385EF85C2A4032E0E47749BD05B6F6003A7414 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DrawMeshes;
		bool L_0 = __this->___m_DrawMeshes_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::set_drawMeshes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_set_drawMeshes_mE5583B1C1DA68C4B3A70BE89FD531D0B2675D2E0 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DrawMeshes = value;
		bool L_0 = ___value0;
		__this->___m_DrawMeshes_9 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::get_debugDrawJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeftHandVisualizer_get_debugDrawJoints_m1473A63862CDB7179ABB52ADB6D4AD2BE17A146F (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DebugDrawJoints;
		bool L_0 = __this->___m_DebugDrawJoints_12;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::set_debugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_set_debugDrawJoints_m462AD549EB3CFAAB67D401042FC5DF438D69A50A (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DebugDrawJoints = value;
		bool L_0 = ___value0;
		__this->___m_DebugDrawJoints_12 = L_0;
		return;
	}
}
// UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::get_velocityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeftHandVisualizer_get_velocityType_m16D162E0CF37F24B02CA027E0D11C72A223BE830 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_VelocityType;
		int32_t L_0 = __this->___m_VelocityType_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::set_velocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_set_velocityType_mE018A9C1556C84A12C6DAF19ECDD069D8D4FBFED (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_VelocityType = value;
		int32_t L_0 = ___value0;
		__this->___m_VelocityType_15 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_Awake_m0DD5DABA1909840DF22D4B3FFAF9F8EB671CE363 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16EED961058125D81E09FCA0B5A362770A7CAB5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_UseOptimizedControls)
		bool L_0 = __this->___m_UseOptimizedControls_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// InputSystem.InputSystem.settings.SetInternalFeatureFlag("USE_OPTIMIZED_CONTROLS", true);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_2;
		L_2 = InputSystem_get_settings_mFAFDCA4665DFE068CEBBBB379972A390BD0E45C7(NULL);
		NullCheck(L_2);
		InputSettings_SetInternalFeatureFlag_mF593642B414A97107C5F4835FDFB2F185F1933E0(L_2, _stringLiteralE16EED961058125D81E09FCA0B5A362770A7CAB5, (bool)1, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_OnEnable_mC89B643936B6F5DDB5EE984D59593D2F01B74544 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_Subsystem == null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_17;
		V_0 = (bool)((((RuntimeObject*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_003e;
	}

IL_0010:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, m_Subsystem.leftHand.isTracked);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_2 = __this->___m_LeftHandGameObjects_18;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_3 = __this->___m_Subsystem_17;
		NullCheck(L_3);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_4;
		L_4 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_3, NULL);
		V_1 = L_4;
		bool L_5;
		L_5 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_1), NULL);
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_2, L_5, NULL);
		// UpdateRenderingVisibility(m_RightHandGameObjects, false);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_6 = __this->___m_RightHandGameObjects_19;
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_6, (bool)0, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_OnDisable_m33CA0F6518C5C052D54875B1378D28BDD7653DCB (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeftHandVisualizer_OnTrackingAcquired_m4D690EE325F434A562CDA146433C15CCB34D96B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeftHandVisualizer_OnTrackingLost_m0F5DD18B31451C23CF0F76D1B2C57E71A63B4D4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeftHandVisualizer_OnUpdatedHands_m63F989A4FA9A63F6ADF8CD59C316C752C79B51C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Subsystem != null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_17;
		V_0 = (bool)((!(((RuntimeObject*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008c;
		}
	}
	{
		// m_Subsystem.trackingAcquired -= OnTrackingAcquired;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_2 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_3 = L_2;
		NullCheck(L_3);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_4 = L_3->___trackingAcquired_9;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_5 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_5, __this, (intptr_t)((void*)LeftHandVisualizer_OnTrackingAcquired_m4D690EE325F434A562CDA146433C15CCB34D96B9_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___trackingAcquired_9 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_6, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___trackingAcquired_9), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_6, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.trackingLost -= OnTrackingLost;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_7 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_8 = L_7;
		NullCheck(L_8);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_9 = L_8->___trackingLost_10;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_10 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_10, __this, (intptr_t)((void*)LeftHandVisualizer_OnTrackingLost_m0F5DD18B31451C23CF0F76D1B2C57E71A63B4D4F_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___trackingLost_10 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_11, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___trackingLost_10), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_11, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.updatedHands -= OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_12 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_13 = L_12;
		NullCheck(L_13);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_14 = L_13->___updatedHands_8;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_15 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_15, __this, (intptr_t)((void*)LeftHandVisualizer_OnUpdatedHands_m63F989A4FA9A63F6ADF8CD59C316C752C79B51C1_RuntimeMethod_var), NULL);
		Delegate_t* L_16;
		L_16 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_14, L_15, NULL);
		NullCheck(L_13);
		L_13->___updatedHands_8 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_16, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___updatedHands_8), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_16, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
		// m_Subsystem = null;
		__this->___m_Subsystem_17 = (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_17), (void*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL);
	}

IL_008c:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, false);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_17 = __this->___m_LeftHandGameObjects_18;
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_17, (bool)0, NULL);
		// UpdateRenderingVisibility(m_RightHandGameObjects, false);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_18 = __this->___m_RightHandGameObjects_19;
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_18, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_OnDestroy_m56D54815AB0A401003E7F5D629B286932CA913F1 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_LeftHandGameObjects != null)
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_0 = __this->___m_LeftHandGameObjects_18;
		V_0 = (bool)((!(((RuntimeObject*)(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// m_LeftHandGameObjects.OnDestroy();
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_2 = __this->___m_LeftHandGameObjects_18;
		NullCheck(L_2);
		HandGameObjects_OnDestroy_mD3AA7DE72F1829E459463D0EC1FC01D66CA1C964(L_2, NULL);
		// m_LeftHandGameObjects = null;
		__this->___m_LeftHandGameObjects_18 = (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftHandGameObjects_18), (void*)(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)NULL);
	}

IL_0023:
	{
		// if (m_RightHandGameObjects != null)
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_3 = __this->___m_RightHandGameObjects_19;
		V_1 = (bool)((!(((RuntimeObject*)(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// m_RightHandGameObjects.OnDestroy();
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_5 = __this->___m_RightHandGameObjects_19;
		NullCheck(L_5);
		HandGameObjects_OnDestroy_mD3AA7DE72F1829E459463D0EC1FC01D66CA1C964(L_5, NULL);
		// m_RightHandGameObjects = null;
		__this->___m_RightHandGameObjects_19 = (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightHandGameObjects_19), (void*)(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_Update_mA323D458A1469E235D23CF533B90E971BAF02B96 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeftHandVisualizer_OnTrackingAcquired_m4D690EE325F434A562CDA146433C15CCB34D96B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeftHandVisualizer_OnTrackingLost_m0F5DD18B31451C23CF0F76D1B2C57E71A63B4D4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeftHandVisualizer_OnUpdatedHands_m63F989A4FA9A63F6ADF8CD59C316C752C79B51C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m571D52D1CFC36A69BDAFBAC74B0F075F8BB773BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75273E2FDEA382223C6F78765C1A71E6A758CF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m280C9268C53E673EC602C1138398BB10FD2A7604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (m_Subsystem != null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_17;
		V_0 = (bool)((!(((RuntimeObject*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_017f;
	}

IL_0013:
	{
		// SubsystemManager.GetSubsystems(s_SubsystemsReuse);
		il2cpp_codegen_runtime_class_init_inline(LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var);
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_2 = ((LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_StaticFields*)il2cpp_codegen_static_fields_for(LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m280C9268C53E673EC602C1138398BB10FD2A7604(L_2, SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m280C9268C53E673EC602C1138398BB10FD2A7604_RuntimeMethod_var);
		// if (s_SubsystemsReuse.Count == 0)
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_3 = ((LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_StaticFields*)il2cpp_codegen_static_fields_for(LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m571D52D1CFC36A69BDAFBAC74B0F075F8BB773BC_inline(L_3, List_1_get_Count_m571D52D1CFC36A69BDAFBAC74B0F075F8BB773BC_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// return;
		goto IL_017f;
	}

IL_0034:
	{
		// m_Subsystem = s_SubsystemsReuse[0];
		il2cpp_codegen_runtime_class_init_inline(LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var);
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_6 = ((LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_StaticFields*)il2cpp_codegen_static_fields_for(LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20;
		NullCheck(L_6);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_7;
		L_7 = List_1_get_Item_m75273E2FDEA382223C6F78765C1A71E6A758CF9F(L_6, 0, List_1_get_Item_m75273E2FDEA382223C6F78765C1A71E6A758CF9F_RuntimeMethod_var);
		__this->___m_Subsystem_17 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_17), (void*)L_7);
		// if (m_LeftHandGameObjects == null)
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_8 = __this->___m_LeftHandGameObjects_18;
		V_2 = (bool)((((RuntimeObject*)(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		// m_LeftHandGameObjects = new HandGameObjects(
		//     Handedness.Left,
		//     transform,
		//     m_LeftHandMesh,
		//     m_HandMeshMaterial,
		//     m_DebugDrawPrefab,
		//     m_VelocityPrefab);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftHandMesh_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___m_HandMeshMaterial_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_DebugDrawPrefab_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_VelocityPrefab_14;
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_15 = (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)il2cpp_codegen_object_new(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		HandGameObjects__ctor_m7C8BF105D91099BB71E93DE487C35540E1F2C616(L_15, 1, L_10, L_11, L_12, L_13, L_14, NULL);
		__this->___m_LeftHandGameObjects_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftHandGameObjects_18), (void*)L_15);
	}

IL_007e:
	{
		// if (m_RightHandGameObjects == null)
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_16 = __this->___m_RightHandGameObjects_19;
		V_3 = (bool)((((RuntimeObject*)(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		// m_RightHandGameObjects = new HandGameObjects(
		//     Handedness.Right,
		//     transform,
		//     m_RightHandMesh,
		//     m_HandMeshMaterial,
		//     m_DebugDrawPrefab,
		//     m_VelocityPrefab);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___m_RightHandMesh_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___m_HandMeshMaterial_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_DebugDrawPrefab_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___m_VelocityPrefab_14;
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_23 = (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)il2cpp_codegen_object_new(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		HandGameObjects__ctor_m7C8BF105D91099BB71E93DE487C35540E1F2C616(L_23, 2, L_18, L_19, L_20, L_21, L_22, NULL);
		__this->___m_RightHandGameObjects_19 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightHandGameObjects_19), (void*)L_23);
	}

IL_00b7:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, m_Subsystem.leftHand.isTracked);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_24 = __this->___m_LeftHandGameObjects_18;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_25 = __this->___m_Subsystem_17;
		NullCheck(L_25);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_26;
		L_26 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_25, NULL);
		V_4 = L_26;
		bool L_27;
		L_27 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_4), NULL);
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_24, L_27, NULL);
		// UpdateRenderingVisibility(m_RightHandGameObjects, false);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_28 = __this->___m_RightHandGameObjects_19;
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_28, (bool)0, NULL);
		// m_PreviousDrawMeshes = m_DrawMeshes;
		bool L_29 = __this->___m_DrawMeshes_9;
		__this->___m_PreviousDrawMeshes_10 = L_29;
		// m_PreviousDebugDrawJoints = m_DebugDrawJoints;
		bool L_30 = __this->___m_DebugDrawJoints_12;
		__this->___m_PreviousDebugDrawJoints_13 = L_30;
		// m_PreviousVelocityType = m_VelocityType;
		int32_t L_31 = __this->___m_VelocityType_15;
		__this->___m_PreviousVelocityType_16 = L_31;
		// m_Subsystem.trackingAcquired += OnTrackingAcquired;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_32 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_33 = L_32;
		NullCheck(L_33);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_34 = L_33->___trackingAcquired_9;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_35 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_35, __this, (intptr_t)((void*)LeftHandVisualizer_OnTrackingAcquired_m4D690EE325F434A562CDA146433C15CCB34D96B9_RuntimeMethod_var), NULL);
		Delegate_t* L_36;
		L_36 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_34, L_35, NULL);
		NullCheck(L_33);
		L_33->___trackingAcquired_9 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_36, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___trackingAcquired_9), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_36, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.trackingLost += OnTrackingLost;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_37 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_38 = L_37;
		NullCheck(L_38);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_39 = L_38->___trackingLost_10;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_40 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_40, __this, (intptr_t)((void*)LeftHandVisualizer_OnTrackingLost_m0F5DD18B31451C23CF0F76D1B2C57E71A63B4D4F_RuntimeMethod_var), NULL);
		Delegate_t* L_41;
		L_41 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_39, L_40, NULL);
		NullCheck(L_38);
		L_38->___trackingLost_10 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_41, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___trackingLost_10), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_41, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.updatedHands += OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_42 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_43 = L_42;
		NullCheck(L_43);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_44 = L_43->___updatedHands_8;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_45 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_45, __this, (intptr_t)((void*)LeftHandVisualizer_OnUpdatedHands_m63F989A4FA9A63F6ADF8CD59C316C752C79B51C1_RuntimeMethod_var), NULL);
		Delegate_t* L_46;
		L_46 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_44, L_45, NULL);
		NullCheck(L_43);
		L_43->___updatedHands_8 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_46, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_43->___updatedHands_8), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_46, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
	}

IL_017f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::UpdateRenderingVisibility(UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* ___handGameObjects0, bool ___isTracked1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B4_0 = NULL;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B5_1 = NULL;
	{
		// if (handGameObjects == null)
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_0 = ___handGameObjects0;
		V_0 = (bool)((((RuntimeObject*)(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		goto IL_003c;
	}

IL_000b:
	{
		// handGameObjects.ToggleDrawMesh(m_DrawMeshes && isTracked);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_2 = ___handGameObjects0;
		bool L_3 = __this->___m_DrawMeshes_9;
		bool L_4 = ___isTracked1;
		NullCheck(L_2);
		HandGameObjects_ToggleDrawMesh_mA32DC2B6F9C554BDBD9DE5301479A39C7A5611D0(L_2, (bool)((int32_t)((int32_t)L_3&(int32_t)L_4)), NULL);
		// handGameObjects.ToggleDebugDrawJoints(m_DebugDrawJoints && isTracked);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_5 = ___handGameObjects0;
		bool L_6 = __this->___m_DebugDrawJoints_12;
		bool L_7 = ___isTracked1;
		NullCheck(L_5);
		HandGameObjects_ToggleDebugDrawJoints_m7C00B124FE8632B4807E5FF1BDFD05FB9313C1FC(L_5, (bool)((int32_t)((int32_t)L_6&(int32_t)L_7)), NULL);
		// handGameObjects.SetVelocityType(isTracked ? m_VelocityType : VelocityType.None);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_8 = ___handGameObjects0;
		bool L_9 = ___isTracked1;
		G_B3_0 = L_8;
		if (L_9)
		{
			G_B4_0 = L_8;
			goto IL_0030;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		goto IL_0036;
	}

IL_0030:
	{
		int32_t L_10 = __this->___m_VelocityType_15;
		G_B5_0 = ((int32_t)(L_10));
		G_B5_1 = G_B4_0;
	}

IL_0036:
	{
		NullCheck(G_B5_1);
		HandGameObjects_SetVelocityType_m45ACD71D5008A4F3BDB03E8D045C96A9AC26CB86(G_B5_1, G_B5_0, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::OnTrackingAcquired(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_OnTrackingAcquired_m4D690EE325F434A562CDA146433C15CCB34D96B9 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (hand.handedness)
		int32_t L_0;
		L_0 = XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline((&___hand0), NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0017:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, true);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_4 = __this->___m_LeftHandGameObjects_18;
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_4, (bool)1, NULL);
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// UpdateRenderingVisibility(m_RightHandGameObjects, false);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_5 = __this->___m_RightHandGameObjects_19;
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_5, (bool)0, NULL);
		// break;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::OnTrackingLost(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_OnTrackingLost_m0F5DD18B31451C23CF0F76D1B2C57E71A63B4D4F (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (hand.handedness)
		int32_t L_0;
		L_0 = XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline((&___hand0), NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0017:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, false);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_4 = __this->___m_LeftHandGameObjects_18;
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_4, (bool)0, NULL);
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// UpdateRenderingVisibility(m_RightHandGameObjects, false);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_5 = __this->___m_RightHandGameObjects_19;
		LeftHandVisualizer_UpdateRenderingVisibility_m55291F168D6090A9A5AA200D13C1707514A48757(__this, L_5, (bool)0, NULL);
		// break;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::OnUpdatedHands(UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer_OnUpdatedHands_m63F989A4FA9A63F6ADF8CD59C316C752C79B51C1 (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___subsystem0, int32_t ___updateSuccessFlags1, int32_t ___updateType2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B9_0 = NULL;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B10_1 = NULL;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B12_0 = NULL;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B13_1 = NULL;
	{
		// if (updateType == XRHandSubsystem.UpdateType.Dynamic)
		int32_t L_0 = ___updateType2;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_01ab;
	}

IL_000e:
	{
		// bool leftHandTracked = subsystem.leftHand.isTracked;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_2 = ___subsystem0;
		NullCheck(L_2);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_3;
		L_3 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_2, NULL);
		V_3 = L_3;
		bool L_4;
		L_4 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_3), NULL);
		V_0 = L_4;
		// bool rightHandTracked = subsystem.rightHand.isTracked;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_5 = ___subsystem0;
		NullCheck(L_5);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_6;
		L_6 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_5, NULL);
		V_3 = L_6;
		bool L_7;
		L_7 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_3), NULL);
		V_1 = L_7;
		// if (m_PreviousDrawMeshes != m_DrawMeshes)
		bool L_8 = __this->___m_PreviousDrawMeshes_10;
		bool L_9 = __this->___m_DrawMeshes_9;
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		// m_LeftHandGameObjects.ToggleDrawMesh(m_DrawMeshes && leftHandTracked);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_11 = __this->___m_LeftHandGameObjects_18;
		bool L_12 = __this->___m_DrawMeshes_9;
		bool L_13 = V_0;
		NullCheck(L_11);
		HandGameObjects_ToggleDrawMesh_mA32DC2B6F9C554BDBD9DE5301479A39C7A5611D0(L_11, (bool)((int32_t)((int32_t)L_12&(int32_t)L_13)), NULL);
		// m_RightHandGameObjects.ToggleDrawMesh(false);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_14 = __this->___m_RightHandGameObjects_19;
		NullCheck(L_14);
		HandGameObjects_ToggleDrawMesh_mA32DC2B6F9C554BDBD9DE5301479A39C7A5611D0(L_14, (bool)0, NULL);
		// m_PreviousDrawMeshes = m_DrawMeshes;
		bool L_15 = __this->___m_DrawMeshes_9;
		__this->___m_PreviousDrawMeshes_10 = L_15;
	}

IL_0072:
	{
		// if (m_PreviousDebugDrawJoints != m_DebugDrawJoints)
		bool L_16 = __this->___m_PreviousDebugDrawJoints_13;
		bool L_17 = __this->___m_DebugDrawJoints_12;
		V_5 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00bf;
		}
	}
	{
		// m_LeftHandGameObjects.ToggleDebugDrawJoints(m_DebugDrawJoints && leftHandTracked);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_19 = __this->___m_LeftHandGameObjects_18;
		bool L_20 = __this->___m_DebugDrawJoints_12;
		bool L_21 = V_0;
		NullCheck(L_19);
		HandGameObjects_ToggleDebugDrawJoints_m7C00B124FE8632B4807E5FF1BDFD05FB9313C1FC(L_19, (bool)((int32_t)((int32_t)L_20&(int32_t)L_21)), NULL);
		// m_RightHandGameObjects.ToggleDebugDrawJoints(m_DebugDrawJoints && rightHandTracked);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_22 = __this->___m_RightHandGameObjects_19;
		bool L_23 = __this->___m_DebugDrawJoints_12;
		bool L_24 = V_1;
		NullCheck(L_22);
		HandGameObjects_ToggleDebugDrawJoints_m7C00B124FE8632B4807E5FF1BDFD05FB9313C1FC(L_22, (bool)((int32_t)((int32_t)L_23&(int32_t)L_24)), NULL);
		// m_PreviousDebugDrawJoints = m_DebugDrawJoints;
		bool L_25 = __this->___m_DebugDrawJoints_12;
		__this->___m_PreviousDebugDrawJoints_13 = L_25;
	}

IL_00bf:
	{
		// if (m_PreviousVelocityType != m_VelocityType)
		int32_t L_26 = __this->___m_PreviousVelocityType_16;
		int32_t L_27 = __this->___m_VelocityType_15;
		V_6 = (bool)((((int32_t)((((int32_t)L_26) == ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_0114;
		}
	}
	{
		// m_LeftHandGameObjects.SetVelocityType(leftHandTracked ? m_VelocityType : VelocityType.None);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_29 = __this->___m_LeftHandGameObjects_18;
		bool L_30 = V_0;
		G_B8_0 = L_29;
		if (L_30)
		{
			G_B9_0 = L_29;
			goto IL_00e3;
		}
	}
	{
		G_B10_0 = 2;
		G_B10_1 = G_B8_0;
		goto IL_00e9;
	}

IL_00e3:
	{
		int32_t L_31 = __this->___m_VelocityType_15;
		G_B10_0 = ((int32_t)(L_31));
		G_B10_1 = G_B9_0;
	}

IL_00e9:
	{
		NullCheck(G_B10_1);
		HandGameObjects_SetVelocityType_m45ACD71D5008A4F3BDB03E8D045C96A9AC26CB86(G_B10_1, G_B10_0, NULL);
		// m_RightHandGameObjects.SetVelocityType(rightHandTracked ? m_VelocityType : VelocityType.None);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_32 = __this->___m_RightHandGameObjects_19;
		bool L_33 = V_1;
		G_B11_0 = L_32;
		if (L_33)
		{
			G_B12_0 = L_32;
			goto IL_00fb;
		}
	}
	{
		G_B13_0 = 2;
		G_B13_1 = G_B11_0;
		goto IL_0101;
	}

IL_00fb:
	{
		int32_t L_34 = __this->___m_VelocityType_15;
		G_B13_0 = ((int32_t)(L_34));
		G_B13_1 = G_B12_0;
	}

IL_0101:
	{
		NullCheck(G_B13_1);
		HandGameObjects_SetVelocityType_m45ACD71D5008A4F3BDB03E8D045C96A9AC26CB86(G_B13_1, G_B13_0, NULL);
		// m_PreviousVelocityType = m_VelocityType;
		int32_t L_35 = __this->___m_VelocityType_15;
		__this->___m_PreviousVelocityType_16 = L_35;
	}

IL_0114:
	{
		// m_LeftHandGameObjects.UpdateJoints(
		//     m_Origin,
		//     subsystem.leftHand,
		//     (updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.LeftHandJoints) != 0,
		//     m_DrawMeshes,
		//     m_DebugDrawJoints,
		//     m_VelocityType);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_36 = __this->___m_LeftHandGameObjects_18;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_37 = __this->___m_Origin_5;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_38 = ___subsystem0;
		NullCheck(L_38);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_39;
		L_39 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_38, NULL);
		int32_t L_40 = ___updateSuccessFlags1;
		bool L_41 = __this->___m_DrawMeshes_9;
		bool L_42 = __this->___m_DebugDrawJoints_12;
		int32_t L_43 = __this->___m_VelocityType_15;
		NullCheck(L_36);
		HandGameObjects_UpdateJoints_mABB68C021C717F5D19164D731A4D85425E576B9E(L_36, L_37, L_39, (bool)((!(((uint32_t)((int32_t)((int32_t)L_40&2))) <= ((uint32_t)0)))? 1 : 0), L_41, L_42, L_43, NULL);
		// if ((updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.LeftHandRootPose) != 0)
		int32_t L_44 = ___updateSuccessFlags1;
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_44&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_45 = V_7;
		if (!L_45)
		{
			goto IL_0162;
		}
	}
	{
		// m_LeftHandGameObjects.UpdateRootPose(subsystem.leftHand);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_46 = __this->___m_LeftHandGameObjects_18;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_47 = ___subsystem0;
		NullCheck(L_47);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_48;
		L_48 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_47, NULL);
		NullCheck(L_46);
		HandGameObjects_UpdateRootPose_m686933B58C24AE053A22BAAF2A55640661B09284(L_46, L_48, NULL);
	}

IL_0162:
	{
		// m_RightHandGameObjects.UpdateJoints(
		//     m_Origin,
		//     subsystem.rightHand,
		//     (updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.RightHandJoints) != 0,
		//     false,
		//     m_DebugDrawJoints,
		//     m_VelocityType);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_49 = __this->___m_RightHandGameObjects_19;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_50 = __this->___m_Origin_5;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_51 = ___subsystem0;
		NullCheck(L_51);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_52;
		L_52 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_51, NULL);
		int32_t L_53 = ___updateSuccessFlags1;
		bool L_54 = __this->___m_DebugDrawJoints_12;
		int32_t L_55 = __this->___m_VelocityType_15;
		NullCheck(L_49);
		HandGameObjects_UpdateJoints_mABB68C021C717F5D19164D731A4D85425E576B9E(L_49, L_50, L_52, (bool)((!(((uint32_t)((int32_t)((int32_t)L_53&8))) <= ((uint32_t)0)))? 1 : 0), (bool)0, L_54, L_55, NULL);
		// if ((updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.RightHandRootPose) != 0)
		int32_t L_56 = ___updateSuccessFlags1;
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_56&4))) <= ((uint32_t)0)))? 1 : 0);
		bool L_57 = V_8;
		if (!L_57)
		{
			goto IL_01ab;
		}
	}
	{
		// m_RightHandGameObjects.UpdateRootPose(subsystem.rightHand);
		HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* L_58 = __this->___m_RightHandGameObjects_19;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_59 = ___subsystem0;
		NullCheck(L_59);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_60;
		L_60 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_59, NULL);
		NullCheck(L_58);
		HandGameObjects_UpdateRootPose_m686933B58C24AE053A22BAAF2A55640661B09284(L_58, L_60, NULL);
	}

IL_01ab:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer__ctor_m503F28E05A2A288AE23727F6FDCC7BA05636CCDF (LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeftHandVisualizer__cctor_m20536A0514718E8C42591CA01748417D98CF7DF9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE4111BEC044D13259EFD4EC5907636C855887179_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<XRHandSubsystem> s_SubsystemsReuse = new List<XRHandSubsystem>();
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_0 = (List_1_tE4111BEC044D13259EFD4EC5907636C855887179*)il2cpp_codegen_object_new(List_1_tE4111BEC044D13259EFD4EC5907636C855887179_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4(L_0, List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4_RuntimeMethod_var);
		((LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_StaticFields*)il2cpp_codegen_static_fields_for(LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_StaticFields*)il2cpp_codegen_static_fields_for(LeftHandVisualizer_t2ED51DFD6E8C57A1AAFE746E8B3CCF4665FED6BF_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20), (void*)L_0);
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
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::.ctor(UnityEngine.XR.Hands.Handedness,UnityEngine.Transform,UnityEngine.GameObject,UnityEngine.Material,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects__ctor_m7C8BF105D91099BB71E93DE487C35540E1F2C616 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, int32_t ___handedness0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshPrefab2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshMaterial3, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CD5D33537838F5694AC36BDFDFD8C3C0AFF021F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA669C5E797F155D12E27827640DACC40DA825122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5EE873084E228BF3E84D2FD089BAC0AD1B71FA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t4EC188EAF26474EF44BBDD06B2470EA6BFD1EAB7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_11 = NULL;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_16 = NULL;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_22 = NULL;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	int32_t G_B7_0 = 0;
	{
		// Transform[] m_JointXforms = new Transform[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_0;
		L_0 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(((int32_t)27), NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___m_JointXforms_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JointXforms_2), (void*)L_1);
		// GameObject[] m_DrawJoints = new GameObject[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(((int32_t)27), NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___m_DrawJoints_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJoints_3), (void*)L_3);
		// GameObject[] m_VelocityParents = new GameObject[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_4;
		L_4 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(((int32_t)27), NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___m_VelocityParents_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VelocityParents_4), (void*)L_5);
		// LineRenderer[] m_Lines = new LineRenderer[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_6;
		L_6 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(((int32_t)27), NULL);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_7 = (LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A*)(LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A*)SZArrayNew(LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___m_Lines_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Lines_5), (void*)L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___debugDrawPrefab4;
		(&V_0)->___debugDrawPrefab_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___debugDrawPrefab_1), (void*)L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___velocityPrefab5;
		(&V_0)->___velocityPrefab_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___velocityPrefab_2), (void*)L_9);
		// public HandGameObjects(
		//     Handedness handedness,
		//     Transform parent,
		//     GameObject meshPrefab,
		//     Material meshMaterial,
		//     GameObject debugDrawPrefab,
		//     GameObject velocityPrefab)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		(&V_0)->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_0), (void*)__this);
		// m_HandRoot = Instantiate(meshPrefab, parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___meshPrefab2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___parent1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		__this->___m_HandRoot_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HandRoot_0), (void*)L_12);
		// m_HandRoot.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_HandRoot_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_15, NULL);
		// m_HandRoot.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_HandRoot_0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_17);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_17, L_18, NULL);
		// Transform wristRootXform = null;
		V_1 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		V_2 = 0;
		goto IL_0128;
	}

IL_00aa:
	{
		// var child = m_HandRoot.transform.GetChild(childIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___m_HandRoot_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_20, L_21, NULL);
		V_3 = L_22;
		// if (child.gameObject.name.EndsWith(XRHandJointID.Wrist.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = V_3;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_24, NULL);
		V_5 = 1;
		Il2CppFakeBox<int32_t> L_26(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_27;
		L_27 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_26), NULL);
		NullCheck(L_25);
		bool L_28;
		L_28 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_25, L_27, NULL);
		V_4 = L_28;
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00e7;
		}
	}
	{
		// wristRootXform = child;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_3;
		V_1 = L_30;
		goto IL_0123;
	}

IL_00e7:
	{
		// else if (child.gameObject.name.EndsWith("Hand") && meshMaterial != null && child.TryGetComponent<SkinnedMeshRenderer>(out var renderer))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_3;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_33, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_34)
		{
			goto IL_0112;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = ___meshMaterial3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0112;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = V_3;
		NullCheck(L_37);
		bool L_38;
		L_38 = Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63(L_37, (&V_6), Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		G_B7_0 = ((int32_t)(L_38));
		goto IL_0113;
	}

IL_0112:
	{
		G_B7_0 = 0;
	}

IL_0113:
	{
		V_7 = (bool)G_B7_0;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0123;
		}
	}
	{
		// renderer.sharedMaterial = meshMaterial;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_40 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = ___meshMaterial3;
		NullCheck(L_40);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_40, L_41, NULL);
	}

IL_0123:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0128:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_43 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___m_HandRoot_0;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		NullCheck(L_45);
		int32_t L_46;
		L_46 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_45, NULL);
		V_8 = (bool)((((int32_t)L_43) < ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_8;
		if (L_47)
		{
			goto IL_00aa;
		}
	}
	{
		// m_DrawJointsParent = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_48, NULL);
		__this->___m_DrawJointsParent_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJointsParent_1), (void*)L_48);
		// m_DrawJointsParent.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___m_DrawJointsParent_1;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = ___parent1;
		NullCheck(L_50);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_50, L_51, NULL);
		// m_DrawJointsParent.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___m_DrawJointsParent_1;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_53);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_53, L_54, NULL);
		// m_DrawJointsParent.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___m_DrawJointsParent_1;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_55, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57;
		L_57 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_56);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_56, L_57, NULL);
		// m_DrawJointsParent.name = handedness + " Hand Debug Draw Joints";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___m_DrawJointsParent_1;
		Il2CppFakeBox<int32_t> L_59(Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var, (&___handedness0));
		String_t* L_60;
		L_60 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_59), NULL);
		String_t* L_61;
		L_61 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_60, _stringLiteralD5EE873084E228BF3E84D2FD089BAC0AD1B71FA1, NULL);
		NullCheck(L_58);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_58, L_61, NULL);
		// if (wristRootXform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_63;
		bool L_64 = V_9;
		if (!L_64)
		{
			goto IL_01cf;
		}
	}
	{
		// Debug.LogWarning("Hand transform hierarchy not set correctly - couldn't find Wrist joint!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3CD5D33537838F5694AC36BDFDFD8C3C0AFF021F, NULL);
		goto IL_03cb;
	}

IL_01cf:
	{
		// AssignJoint(XRHandJointID.Wrist, wristRootXform, m_DrawJointsParent.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___m_DrawJointsParent_1;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m4DA0F7B90A18ECEBDCE1A366D728E6F02080D1EE(__this, 1, L_65, L_67, (&V_0), NULL);
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		V_10 = 0;
		goto IL_03b7;
	}

IL_01ee:
	{
		// var child = wristRootXform.GetChild(childIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = V_1;
		int32_t L_69 = V_10;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_68, L_69, NULL);
		V_11 = L_70;
		// if (child.name.EndsWith(XRHandJointID.Palm.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = V_11;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_71, NULL);
		V_5 = 2;
		Il2CppFakeBox<int32_t> L_73(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_74;
		L_74 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_73), NULL);
		NullCheck(L_72);
		bool L_75;
		L_75 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_72, L_74, NULL);
		V_12 = L_75;
		bool L_76 = V_12;
		if (!L_76)
		{
			goto IL_0238;
		}
	}
	{
		// AssignJoint(XRHandJointID.Palm, child, m_DrawJointsParent.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77 = V_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___m_DrawJointsParent_1;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m4DA0F7B90A18ECEBDCE1A366D728E6F02080D1EE(__this, 2, L_77, L_79, (&V_0), NULL);
		// continue;
		goto IL_03b1;
	}

IL_0238:
	{
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_13 = 0;
		goto IL_039f;
	}

IL_0240:
	{
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_80 = V_13;
		V_14 = L_80;
		// var jointIdFront = fingerId.GetFrontJointID();
		int32_t L_81 = V_14;
		int32_t L_82;
		L_82 = XRHandJointIDUtility_GetFrontJointID_m4392F7CCCB0AA92FB47F990F5326820725835D2A(L_81, NULL);
		V_15 = L_82;
		// if (!child.name.EndsWith(jointIdFront.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = V_11;
		NullCheck(L_83);
		String_t* L_84;
		L_84 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_83, NULL);
		Il2CppFakeBox<int32_t> L_85(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_15));
		String_t* L_86;
		L_86 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_85), NULL);
		NullCheck(L_84);
		bool L_87;
		L_87 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_84, L_86, NULL);
		V_18 = (bool)((((int32_t)L_87) == ((int32_t)0))? 1 : 0);
		bool L_88 = V_18;
		if (!L_88)
		{
			goto IL_0275;
		}
	}
	{
		// continue;
		goto IL_0399;
	}

IL_0275:
	{
		// AssignJoint(jointIdFront, child, m_DrawJointsParent.transform);
		int32_t L_89 = V_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = V_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = __this->___m_DrawJointsParent_1;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m4DA0F7B90A18ECEBDCE1A366D728E6F02080D1EE(__this, L_89, L_90, L_92, (&V_0), NULL);
		// var lastChild = child;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = V_11;
		V_16 = L_93;
		// int jointIndexBack = fingerId.GetBackJointID().ToIndex();
		int32_t L_94 = V_14;
		int32_t L_95;
		L_95 = XRHandJointIDUtility_GetBackJointID_m10CC45E0A8001CF5681C5271CA35797F3F20ED02(L_94, NULL);
		int32_t L_96;
		L_96 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_95, NULL);
		V_17 = L_96;
		// for (int jointIndex = jointIdFront.ToIndex() + 1;
		int32_t L_97 = V_15;
		int32_t L_98;
		L_98 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_97, NULL);
		V_19 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		goto IL_0386;
	}

IL_02af:
	{
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		V_21 = 0;
		goto IL_02f7;
	}

IL_02b5:
	{
		// var nextChild = lastChild.GetChild(nextChildIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = V_16;
		int32_t L_100 = V_21;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_99, L_100, NULL);
		V_22 = L_101;
		// if (nextChild.name.EndsWith(XRHandJointIDUtility.FromIndex(jointIndex).ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = V_22;
		NullCheck(L_102);
		String_t* L_103;
		L_103 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_102, NULL);
		int32_t L_104 = V_19;
		int32_t L_105;
		L_105 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_104, NULL);
		V_5 = L_105;
		Il2CppFakeBox<int32_t> L_106(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_107;
		L_107 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_106), NULL);
		NullCheck(L_103);
		bool L_108;
		L_108 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_103, L_107, NULL);
		V_23 = L_108;
		bool L_109 = V_23;
		if (!L_109)
		{
			goto IL_02f0;
		}
	}
	{
		// lastChild = nextChild;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_110 = V_22;
		V_16 = L_110;
		// break;
		goto IL_0308;
	}

IL_02f0:
	{
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		int32_t L_111 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_02f7:
	{
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		int32_t L_112 = V_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113 = V_16;
		NullCheck(L_113);
		int32_t L_114;
		L_114 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_113, NULL);
		V_24 = (bool)((((int32_t)L_112) < ((int32_t)L_114))? 1 : 0);
		bool L_115 = V_24;
		if (L_115)
		{
			goto IL_02b5;
		}
	}

IL_0308:
	{
		// if (!lastChild.name.EndsWith(XRHandJointIDUtility.FromIndex(jointIndex).ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116 = V_16;
		NullCheck(L_116);
		String_t* L_117;
		L_117 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_116, NULL);
		int32_t L_118 = V_19;
		int32_t L_119;
		L_119 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_118, NULL);
		V_5 = L_119;
		Il2CppFakeBox<int32_t> L_120(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_121;
		L_121 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_120), NULL);
		NullCheck(L_117);
		bool L_122;
		L_122 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_117, L_121, NULL);
		V_25 = (bool)((((int32_t)L_122) == ((int32_t)0))? 1 : 0);
		bool L_123 = V_25;
		if (!L_123)
		{
			goto IL_035e;
		}
	}
	{
		// throw new InvalidOperationException("Hand transform hierarchy not set correctly - couldn't find " + XRHandJointIDUtility.FromIndex(jointIndex) + " joint!");
		int32_t L_124 = V_19;
		int32_t L_125;
		L_125 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_124, NULL);
		V_5 = L_125;
		Il2CppFakeBox<int32_t> L_126(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var)), (&V_5));
		String_t* L_127;
		L_127 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_126), NULL);
		String_t* L_128;
		L_128 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA669C5E797F155D12E27827640DACC40DA825122)), L_127, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_129 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_129);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_129, L_128, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_129, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HandGameObjects__ctor_m7C8BF105D91099BB71E93DE487C35540E1F2C616_RuntimeMethod_var)));
	}

IL_035e:
	{
		// var jointId = XRHandJointIDUtility.FromIndex(jointIndex);
		int32_t L_130 = V_19;
		int32_t L_131;
		L_131 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_130, NULL);
		V_20 = L_131;
		// AssignJoint(jointId, lastChild, m_DrawJointsParent.transform);
		int32_t L_132 = V_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133 = V_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = __this->___m_DrawJointsParent_1;
		NullCheck(L_134);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_134, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m4DA0F7B90A18ECEBDCE1A366D728E6F02080D1EE(__this, L_132, L_133, L_135, (&V_0), NULL);
		// ++jointIndex)
		int32_t L_136 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_0386:
	{
		// jointIndex <= jointIndexBack;
		int32_t L_137 = V_19;
		int32_t L_138 = V_17;
		V_26 = (bool)((((int32_t)((((int32_t)L_137) > ((int32_t)L_138))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_139 = V_26;
		if (L_139)
		{
			goto IL_02af;
		}
	}
	{
	}

IL_0399:
	{
		// ++fingerIndex)
		int32_t L_140 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_039f:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_141 = V_13;
		V_27 = (bool)((((int32_t)((((int32_t)L_141) > ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_142 = V_27;
		if (L_142)
		{
			goto IL_0240;
		}
	}
	{
	}

IL_03b1:
	{
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		int32_t L_143 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_03b7:
	{
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		int32_t L_144 = V_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145 = V_1;
		NullCheck(L_145);
		int32_t L_146;
		L_146 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_145, NULL);
		V_28 = (bool)((((int32_t)L_144) < ((int32_t)L_146))? 1 : 0);
		bool L_147 = V_28;
		if (L_147)
		{
			goto IL_01ee;
		}
	}
	{
	}

IL_03cb:
	{
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_29 = 0;
		goto IL_0421;
	}

IL_03d0:
	{
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_148 = V_29;
		V_30 = L_148;
		// var jointId = fingerId.GetFrontJointID();
		int32_t L_149 = V_30;
		int32_t L_150;
		L_150 = XRHandJointIDUtility_GetFrontJointID_m4392F7CCCB0AA92FB47F990F5326820725835D2A(L_149, NULL);
		V_31 = L_150;
		// if (m_JointXforms[jointId.ToIndex()] == null)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_151 = __this->___m_JointXforms_2;
		int32_t L_152 = V_31;
		int32_t L_153;
		L_153 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_152, NULL);
		NullCheck(L_151);
		int32_t L_154 = L_153;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_155 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_155, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_32 = L_156;
		bool L_157 = V_32;
		if (!L_157)
		{
			goto IL_041a;
		}
	}
	{
		// Debug.LogWarning("Hand transform hierarchy not set correctly - couldn't find " + jointId + " joint!");
		Il2CppFakeBox<int32_t> L_158(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_31));
		String_t* L_159;
		L_159 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_158), NULL);
		String_t* L_160;
		L_160 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA669C5E797F155D12E27827640DACC40DA825122, L_159, _stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_160, NULL);
	}

IL_041a:
	{
		// ++fingerIndex)
		int32_t L_161 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_0421:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_162 = V_29;
		V_33 = (bool)((((int32_t)((((int32_t)L_162) > ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_163 = V_33;
		if (L_163)
		{
			goto IL_03d0;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnDestroy_mD3AA7DE72F1829E459463D0EC1FC01D66CA1C964 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// Destroy(m_HandRoot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_HandRoot_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// m_HandRoot = null;
		__this->___m_HandRoot_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HandRoot_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		V_0 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		// Destroy(m_DrawJoints[jointIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_DrawJoints_3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// m_DrawJoints[jointIndex] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___m_DrawJoints_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, NULL);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0035:
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_8 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___m_DrawJoints_3;
		NullCheck(L_9);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0018;
		}
	}
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		V_2 = 0;
		goto IL_0065;
	}

IL_0048:
	{
		// Destroy(m_VelocityParents[jointIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___m_VelocityParents_4;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// m_VelocityParents[jointIndex] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___m_VelocityParents_4;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, NULL);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0065:
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_18 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___m_VelocityParents_4;
		NullCheck(L_19);
		V_3 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_0048;
		}
	}
	{
		// Destroy(m_DrawJointsParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_DrawJointsParent_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_21, NULL);
		// m_DrawJointsParent = null;
		__this->___m_DrawJointsParent_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJointsParent_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::ToggleDrawMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDrawMesh_mA32DC2B6F9C554BDBD9DE5301479A39C7A5611D0 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, bool ___drawMesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		V_0 = 0;
		goto IL_0031;
	}

IL_0005:
	{
		// var xform = m_HandRoot.transform.GetChild(childIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_HandRoot_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		V_1 = L_3;
		// if (xform.TryGetComponent<SkinnedMeshRenderer>(out var renderer))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63(L_4, (&V_2), Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// renderer.enabled = drawMesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_7 = V_2;
		bool L_8 = ___drawMesh0;
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, L_8, NULL);
	}

IL_002c:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_10 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_HandRoot_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_12, NULL);
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::ToggleDebugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDebugDrawJoints_m7C00B124FE8632B4807E5FF1BDFD05FB9313C1FC (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCE1081B77173997D20733D3C9D5117E787662A05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		V_0 = 0;
		goto IL_002e;
	}

IL_0005:
	{
		// ToggleRenderers<MeshRenderer>(debugDrawJoints, m_DrawJoints[jointIndex].transform);
		bool L_0 = ___debugDrawJoints0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_DrawJoints_3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCE1081B77173997D20733D3C9D5117E787662A05(L_0, L_5, HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCE1081B77173997D20733D3C9D5117E787662A05_RuntimeMethod_var);
		// m_Lines[jointIndex].enabled = debugDrawJoints;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_6 = __this->___m_Lines_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10 = ___debugDrawJoints0;
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, L_10, NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___m_DrawJoints_3;
		NullCheck(L_13);
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		// m_Lines[0].enabled = false;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_15 = __this->___m_Lines_5;
		NullCheck(L_15);
		int32_t L_16 = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::SetVelocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_SetVelocityType_m45ACD71D5008A4F3BDB03E8D045C96A9AC26CB86 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, int32_t ___velocityType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m79EACF1A878EAA6CEFC90C16165F8940B58E27D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		V_0 = 0;
		goto IL_0023;
	}

IL_0005:
	{
		// ToggleRenderers<LineRenderer>(velocityType != VelocityType.None, m_VelocityParents[jointIndex].transform);
		int32_t L_0 = ___velocityType0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_VelocityParents_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m79EACF1A878EAA6CEFC90C16165F8940B58E27D9((bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_5, HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m79EACF1A878EAA6CEFC90C16165F8940B58E27D9_RuntimeMethod_var);
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_7 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___m_VelocityParents_4;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::UpdateRootPose(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateRootPose_m686933B58C24AE053A22BAAF2A55640661B09284 (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var xform = m_JointXforms[XRHandJointID.Wrist.ToIndex()];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___m_JointXforms_2;
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(1, NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// xform.localPosition = hand.rootPose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline((&___hand0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___position_0;
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_6, NULL);
		// xform.localRotation = hand.rootPose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		L_8 = XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline((&___hand0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___rotation_1;
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::UpdateJoints(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.Hands.XRHand,System.Boolean,System.Boolean,System.Boolean,UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoints_mABB68C021C717F5D19164D731A4D85425E576B9E (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___xrOrigin0, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand1, bool ___areJointsTracked2, bool ___drawMeshes3, bool ___debugDrawJoints4, int32_t ___velocityType5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B3_0 = NULL;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* G_B4_1 = NULL;
	{
		// if (m_IsTracked != areJointsTracked)
		bool L_0 = __this->___m_IsTracked_6;
		bool L_1 = ___areJointsTracked2;
		V_3 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// ToggleDrawMesh(areJointsTracked && drawMeshes);
		bool L_3 = ___areJointsTracked2;
		bool L_4 = ___drawMeshes3;
		HandGameObjects_ToggleDrawMesh_mA32DC2B6F9C554BDBD9DE5301479A39C7A5611D0(__this, (bool)((int32_t)((int32_t)L_3&(int32_t)L_4)), NULL);
		// ToggleDebugDrawJoints(areJointsTracked && debugDrawJoints);
		bool L_5 = ___areJointsTracked2;
		bool L_6 = ___debugDrawJoints4;
		HandGameObjects_ToggleDebugDrawJoints_m7C00B124FE8632B4807E5FF1BDFD05FB9313C1FC(__this, (bool)((int32_t)((int32_t)L_5&(int32_t)L_6)), NULL);
		// SetVelocityType(areJointsTracked ? velocityType : VelocityType.None);
		bool L_7 = ___areJointsTracked2;
		G_B2_0 = __this;
		if (L_7)
		{
			G_B3_0 = __this;
			goto IL_002f;
		}
	}
	{
		G_B4_0 = 2;
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_002f:
	{
		int32_t L_8 = ___velocityType5;
		G_B4_0 = ((int32_t)(L_8));
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		NullCheck(G_B4_1);
		HandGameObjects_SetVelocityType_m45ACD71D5008A4F3BDB03E8D045C96A9AC26CB86(G_B4_1, G_B4_0, NULL);
		// m_IsTracked = areJointsTracked;
		bool L_9 = ___areJointsTracked2;
		__this->___m_IsTracked_6 = L_9;
	}

IL_003f:
	{
		// if (!m_IsTracked)
		bool L_10 = __this->___m_IsTracked_6;
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		// return;
		goto IL_0132;
	}

IL_0053:
	{
		// var originTransform = xrOrigin.Origin.transform;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_12 = ___xrOrigin0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = XROrigin_get_Origin_mCE6A3B327ACE6FAEDCC67A9DC952FEED191C26B6_inline(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		V_0 = L_14;
		// var originPose = new Pose(originTransform.position, originTransform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_1), L_16, L_18, NULL);
		// var wristPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		V_2 = L_19;
		// UpdateJoint(debugDrawJoints, velocityType, originPose, hand.GetJoint(XRHandJointID.Wrist), ref wristPose);
		bool L_20 = ___debugDrawJoints4;
		int32_t L_21 = ___velocityType5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_1;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_23;
		L_23 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), 1, NULL);
		HandGameObjects_UpdateJoint_m78B7DF2AFDA7598109469665A3D7445AD31DB93C(__this, L_20, L_21, L_22, L_23, (&V_2), (bool)1, NULL);
		// UpdateJoint(debugDrawJoints, velocityType, originPose, hand.GetJoint(XRHandJointID.Palm), ref wristPose, false);
		bool L_24 = ___debugDrawJoints4;
		int32_t L_25 = ___velocityType5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = V_1;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_27;
		L_27 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), 2, NULL);
		HandGameObjects_UpdateJoint_m78B7DF2AFDA7598109469665A3D7445AD31DB93C(__this, L_24, L_25, L_26, L_27, (&V_2), (bool)0, NULL);
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_5 = 0;
		goto IL_0121;
	}

IL_00ab:
	{
		// var parentPose = wristPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_28 = V_2;
		V_6 = L_28;
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_29 = V_5;
		V_7 = L_29;
		// int jointIndexBack = fingerId.GetBackJointID().ToIndex();
		int32_t L_30 = V_7;
		int32_t L_31;
		L_31 = XRHandJointIDUtility_GetBackJointID_m10CC45E0A8001CF5681C5271CA35797F3F20ED02(L_30, NULL);
		int32_t L_32;
		L_32 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_31, NULL);
		V_8 = L_32;
		// for (int jointIndex = fingerId.GetFrontJointID().ToIndex();
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = XRHandJointIDUtility_GetFrontJointID_m4392F7CCCB0AA92FB47F990F5326820725835D2A(L_33, NULL);
		int32_t L_35;
		L_35 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_34, NULL);
		V_9 = L_35;
		goto IL_010b;
	}

IL_00d1:
	{
		// if (m_JointXforms[jointIndex] != null)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_36 = __this->___m_JointXforms_2;
		int32_t L_37 = V_9;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_40;
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_0104;
		}
	}
	{
		// UpdateJoint(debugDrawJoints, velocityType, originPose, hand.GetJoint(XRHandJointIDUtility.FromIndex(jointIndex)), ref parentPose);
		bool L_42 = ___debugDrawJoints4;
		int32_t L_43 = ___velocityType5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_44 = V_1;
		int32_t L_45 = V_9;
		int32_t L_46;
		L_46 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_45, NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_47;
		L_47 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), L_46, NULL);
		HandGameObjects_UpdateJoint_m78B7DF2AFDA7598109469665A3D7445AD31DB93C(__this, L_42, L_43, L_44, L_47, (&V_6), (bool)1, NULL);
	}

IL_0104:
	{
		// ++jointIndex)
		int32_t L_48 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_010b:
	{
		// jointIndex <= jointIndexBack;
		int32_t L_49 = V_9;
		int32_t L_50 = V_8;
		V_11 = (bool)((((int32_t)((((int32_t)L_49) > ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_11;
		if (L_51)
		{
			goto IL_00d1;
		}
	}
	{
		// ++fingerIndex)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0121:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_53 = V_5;
		V_12 = (bool)((((int32_t)((((int32_t)L_53) > ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_12;
		if (L_54)
		{
			goto IL_00ab;
		}
	}

IL_0132:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::UpdateJoint(System.Boolean,UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/VelocityType,UnityEngine.Pose,UnityEngine.XR.Hands.XRHandJoint,UnityEngine.Pose&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoint_m78B7DF2AFDA7598109469665A3D7445AD31DB93C (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, bool ___debugDrawJoints0, int32_t ___velocityType1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___originPose2, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___joint3, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___parentPose4, bool ___cacheParentPose5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// int jointIndex = joint.id.ToIndex();
		int32_t L_0;
		L_0 = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394((&___joint3), NULL);
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_0, NULL);
		V_0 = L_1;
		// var xform = m_JointXforms[jointIndex];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___m_JointXforms_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// if (xform == null || !joint.TryGetPose(out var pose))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		bool L_8;
		L_8 = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E((&___joint3), (&V_2), NULL);
		G_B3_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 1;
	}

IL_002f:
	{
		V_5 = (bool)G_B3_0;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		goto IL_0225;
	}

IL_003a:
	{
		// m_DrawJoints[jointIndex].transform.localPosition = pose.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___m_DrawJoints_3;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_16, NULL);
		// m_DrawJoints[jointIndex].transform.localRotation = pose.rotation;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___m_DrawJoints_3;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = L_22.___rotation_1;
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_23, NULL);
		// if (debugDrawJoints && joint.id != XRHandJointID.Wrist)
		bool L_24 = ___debugDrawJoints0;
		if (!L_24)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_25;
		L_25 = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394((&___joint3), NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_25) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007f;
	}

IL_007e:
	{
		G_B8_0 = 0;
	}

IL_007f:
	{
		V_6 = (bool)G_B8_0;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00ca;
		}
	}
	{
		// s_LinePointsReuse[0] = parentPose.GetTransformedBy(originPose).position;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = ___parentPose4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29 = ___originPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_30;
		L_30 = Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30.___position_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_31);
		// s_LinePointsReuse[1] = pose.GetTransformedBy(originPose).position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33 = ___originPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_34;
		L_34 = Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF((&V_2), L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34.___position_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_35);
		// m_Lines[jointIndex].SetPositions(s_LinePointsReuse);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_36 = __this->___m_Lines_5;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_39);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_39, L_40, NULL);
	}

IL_00ca:
	{
		// var inverseParentRotation = Quaternion.Inverse(parentPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_41 = ___parentPose4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = L_41->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_42, NULL);
		V_3 = L_43;
		// xform.localPosition = inverseParentRotation * (pose.position - parentPose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_46 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = L_46.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_48 = ___parentPose4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = L_48->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_47, L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_45, L_50, NULL);
		NullCheck(L_44);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_44, L_51, NULL);
		// xform.localRotation = inverseParentRotation * pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_54 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = L_54.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_53, L_55, NULL);
		NullCheck(L_52);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_52, L_56, NULL);
		// if (cacheParentPose)
		bool L_57 = ___cacheParentPose5;
		V_7 = L_57;
		bool L_58 = V_7;
		if (!L_58)
		{
			goto IL_0119;
		}
	}
	{
		// parentPose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_59 = ___parentPose4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_60 = V_2;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_59 = L_60;
	}

IL_0119:
	{
		// if (velocityType != VelocityType.None && m_VelocityParents[jointIndex].TryGetComponent<LineRenderer>(out var renderer))
		int32_t L_61 = ___velocityType1;
		if ((((int32_t)L_61) == ((int32_t)2)))
		{
			goto IL_012e;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = __this->___m_VelocityParents_4;
		int32_t L_63 = V_0;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		bool L_66;
		L_66 = GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC(L_65, (&V_4), GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC_RuntimeMethod_var);
		G_B15_0 = ((int32_t)(L_66));
		goto IL_012f;
	}

IL_012e:
	{
		G_B15_0 = 0;
	}

IL_012f:
	{
		V_8 = (bool)G_B15_0;
		bool L_67 = V_8;
		if (!L_67)
		{
			goto IL_0225;
		}
	}
	{
		// m_VelocityParents[jointIndex].transform.localPosition = Vector3.zero;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_68 = __this->___m_VelocityParents_4;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_72);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_72, L_73, NULL);
		// m_VelocityParents[jointIndex].transform.localRotation = Quaternion.identity;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_74 = __this->___m_VelocityParents_4;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79;
		L_79 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_78);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_78, L_79, NULL);
		// s_LinePointsReuse[0] = s_LinePointsReuse[1] = m_VelocityParents[jointIndex].transform.position;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_82 = __this->___m_VelocityParents_4;
		int32_t L_83 = V_0;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_85, NULL);
		NullCheck(L_86);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = L_87;
		V_9 = L_88;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_9;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_89);
		// if (velocityType == VelocityType.Linear)
		int32_t L_90 = ___velocityType1;
		V_10 = (bool)((((int32_t)L_90) == ((int32_t)0))? 1 : 0);
		bool L_91 = V_10;
		if (!L_91)
		{
			goto IL_01d0;
		}
	}
	{
		// if (joint.TryGetLinearVelocity(out var velocity))
		bool L_92;
		L_92 = XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B((&___joint3), (&V_11), NULL);
		V_12 = L_92;
		bool L_93 = V_12;
		if (!L_93)
		{
			goto IL_01cd;
		}
	}
	{
		// s_LinePointsReuse[1] += velocity;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_94 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_95 = ((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_96, L_97, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_95 = L_98;
	}

IL_01cd:
	{
		goto IL_0217;
	}

IL_01d0:
	{
		// else if (velocityType == VelocityType.Angular)
		int32_t L_99 = ___velocityType1;
		V_13 = (bool)((((int32_t)L_99) == ((int32_t)1))? 1 : 0);
		bool L_100 = V_13;
		if (!L_100)
		{
			goto IL_0217;
		}
	}
	{
		// if (joint.TryGetAngularVelocity(out var velocity))
		bool L_101;
		L_101 = XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63((&___joint3), (&V_14), NULL);
		V_15 = L_101;
		bool L_102 = V_15;
		if (!L_102)
		{
			goto IL_0216;
		}
	}
	{
		// s_LinePointsReuse[1] += 0.05f * velocity.normalized;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_104 = ((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((0.0500000007f), L_106, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_105, L_107, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_104 = L_108;
	}

IL_0216:
	{
	}

IL_0217:
	{
		// renderer.SetPositions(s_LinePointsReuse);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_109 = V_4;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_110 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_109);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_109, L_110, NULL);
	}

IL_0225:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects__cctor_mB7FDF6DE350FF3537F46B104ADDBE83CCC510FA5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Vector3[] s_LinePointsReuse = new Vector3[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects::<.ctor>g__AssignJoint|9_0(UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.XR.Hands.Samples.VisualizerSample.LeftHandVisualizer/HandGameObjects/<>c__DisplayClass9_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m4DA0F7B90A18ECEBDCE1A366D728E6F02080D1EE (HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926* __this, int32_t ___jointId0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___jointXform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawJointsParent2, U3CU3Ec__DisplayClass9_0_t4EC188EAF26474EF44BBDD06B2470EA6BFD1EAB7* p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int jointIndex = jointId.ToIndex();
		int32_t L_0 = ___jointId0;
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_0, NULL);
		V_0 = L_1;
		// m_JointXforms[jointIndex] = jointXform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___m_JointXforms_2;
		int32_t L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___jointXform1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_4);
		// m_DrawJoints[jointIndex] = Instantiate(debugDrawPrefab);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___m_DrawJoints_3;
		int32_t L_6 = V_0;
		U3CU3Ec__DisplayClass9_0_t4EC188EAF26474EF44BBDD06B2470EA6BFD1EAB7* L_7 = p3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___debugDrawPrefab_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_9);
		// m_DrawJoints[jointIndex].transform.parent = drawJointsParent;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___m_DrawJoints_3;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___drawJointsParent2;
		NullCheck(L_14);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, L_15, NULL);
		// m_DrawJoints[jointIndex].name = jointId.ToString();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___m_DrawJoints_3;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Il2CppFakeBox<int32_t> L_20(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&___jointId0));
		String_t* L_21;
		L_21 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), NULL);
		NullCheck(L_19);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_19, L_21, NULL);
		// m_VelocityParents[jointIndex] = Instantiate(velocityPrefab);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___m_VelocityParents_4;
		int32_t L_23 = V_0;
		U3CU3Ec__DisplayClass9_0_t4EC188EAF26474EF44BBDD06B2470EA6BFD1EAB7* L_24 = p3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___velocityPrefab_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_26);
		// m_VelocityParents[jointIndex].transform.parent = jointXform;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = __this->___m_VelocityParents_4;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___jointXform1;
		NullCheck(L_31);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_31, L_32, NULL);
		// m_Lines[jointIndex] = m_DrawJoints[jointIndex].GetComponent<LineRenderer>();
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_33 = __this->___m_Lines_5;
		int32_t L_34 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___m_DrawJoints_3;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_39;
		L_39 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_38, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_39);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D*)L_39);
		// m_Lines[jointIndex].startWidth = m_Lines[jointIndex].endWidth = k_LineWidth;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_40 = __this->___m_Lines_5;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_44 = __this->___m_Lines_5;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		float L_48 = (0.00499999989f);
		V_1 = L_48;
		NullCheck(L_47);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_47, L_48, NULL);
		float L_49 = V_1;
		NullCheck(L_43);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_43, L_49, NULL);
		// s_LinePointsReuse[0] = s_LinePointsReuse[1] = jointXform.position;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = ___jointXform1;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53;
		V_2 = L_54;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_55);
		// m_Lines[jointIndex].SetPositions(s_LinePointsReuse);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_56 = __this->___m_Lines_5;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = ((HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t67B3015403CCBA18BC97A3548D23A8D6AD75A926_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_59);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_59, L_60, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::get_drawMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RightHandVisualizer_get_drawMeshes_m0983AFC2A6617A7A1F7A93C282C077D1D29E8E46 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DrawMeshes;
		bool L_0 = __this->___m_DrawMeshes_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::set_drawMeshes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_set_drawMeshes_m25C8359B6411E1D0C44DB541D5D92A7E58089DA4 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DrawMeshes = value;
		bool L_0 = ___value0;
		__this->___m_DrawMeshes_9 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::get_debugDrawJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RightHandVisualizer_get_debugDrawJoints_mE46FB66A3956C43169EFD34A96F417CAEAAE9E3A (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DebugDrawJoints;
		bool L_0 = __this->___m_DebugDrawJoints_12;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::set_debugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_set_debugDrawJoints_m657B7662636D6674AC3622A731BBF3FADE564EBC (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DebugDrawJoints = value;
		bool L_0 = ___value0;
		__this->___m_DebugDrawJoints_12 = L_0;
		return;
	}
}
// UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::get_velocityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightHandVisualizer_get_velocityType_m952846F163674FBAA7404734578B6AC5C7B5CCE0 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	{
		// get => m_VelocityType;
		int32_t L_0 = __this->___m_VelocityType_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::set_velocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_set_velocityType_m21ECEB072A35BBEFBC571EA6E0F8BC21508EF88B (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_VelocityType = value;
		int32_t L_0 = ___value0;
		__this->___m_VelocityType_15 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_Awake_mA6AD0943BE54D711A5E89164093E1E93BAB879D2 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16EED961058125D81E09FCA0B5A362770A7CAB5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_UseOptimizedControls)
		bool L_0 = __this->___m_UseOptimizedControls_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// InputSystem.InputSystem.settings.SetInternalFeatureFlag("USE_OPTIMIZED_CONTROLS", true);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_2;
		L_2 = InputSystem_get_settings_mFAFDCA4665DFE068CEBBBB379972A390BD0E45C7(NULL);
		NullCheck(L_2);
		InputSettings_SetInternalFeatureFlag_mF593642B414A97107C5F4835FDFB2F185F1933E0(L_2, _stringLiteralE16EED961058125D81E09FCA0B5A362770A7CAB5, (bool)1, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_OnEnable_mD6AEAEB48CB2F835EFE311C8CBE67C9AC969A6D6 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_Subsystem == null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_17;
		V_0 = (bool)((((RuntimeObject*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_003e;
	}

IL_0010:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, false);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_2 = __this->___m_LeftHandGameObjects_18;
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_2, (bool)0, NULL);
		// UpdateRenderingVisibility(m_RightHandGameObjects, m_Subsystem.rightHand.isTracked);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_3 = __this->___m_RightHandGameObjects_19;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_4 = __this->___m_Subsystem_17;
		NullCheck(L_4);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_5;
		L_5 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_4, NULL);
		V_1 = L_5;
		bool L_6;
		L_6 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_1), NULL);
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_3, L_6, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_OnDisable_m637EC0531D0A8585BCB4F5C03741D7E657F8A3E9 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RightHandVisualizer_OnTrackingAcquired_mC94589E3078091908E377A3969E585FA65B88B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RightHandVisualizer_OnTrackingLost_mF030E3EC983A141AF64C6BA77A89A1050853EE67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RightHandVisualizer_OnUpdatedHands_m60E61BFBECE2A440F011E6EF640A5668A6562782_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Subsystem != null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_17;
		V_0 = (bool)((!(((RuntimeObject*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008c;
		}
	}
	{
		// m_Subsystem.trackingAcquired -= OnTrackingAcquired;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_2 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_3 = L_2;
		NullCheck(L_3);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_4 = L_3->___trackingAcquired_9;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_5 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_5, __this, (intptr_t)((void*)RightHandVisualizer_OnTrackingAcquired_mC94589E3078091908E377A3969E585FA65B88B25_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___trackingAcquired_9 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_6, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___trackingAcquired_9), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_6, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.trackingLost -= OnTrackingLost;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_7 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_8 = L_7;
		NullCheck(L_8);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_9 = L_8->___trackingLost_10;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_10 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_10, __this, (intptr_t)((void*)RightHandVisualizer_OnTrackingLost_mF030E3EC983A141AF64C6BA77A89A1050853EE67_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___trackingLost_10 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_11, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___trackingLost_10), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_11, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.updatedHands -= OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_12 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_13 = L_12;
		NullCheck(L_13);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_14 = L_13->___updatedHands_8;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_15 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_15, __this, (intptr_t)((void*)RightHandVisualizer_OnUpdatedHands_m60E61BFBECE2A440F011E6EF640A5668A6562782_RuntimeMethod_var), NULL);
		Delegate_t* L_16;
		L_16 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_14, L_15, NULL);
		NullCheck(L_13);
		L_13->___updatedHands_8 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_16, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___updatedHands_8), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_16, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
		// m_Subsystem = null;
		__this->___m_Subsystem_17 = (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_17), (void*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL);
	}

IL_008c:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, false);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_17 = __this->___m_LeftHandGameObjects_18;
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_17, (bool)0, NULL);
		// UpdateRenderingVisibility(m_RightHandGameObjects, false);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_18 = __this->___m_RightHandGameObjects_19;
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_18, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_OnDestroy_m91F329FD64BE21E6A6EEA39C7B24389D854479FE (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_LeftHandGameObjects != null)
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_0 = __this->___m_LeftHandGameObjects_18;
		V_0 = (bool)((!(((RuntimeObject*)(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// m_LeftHandGameObjects.OnDestroy();
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_2 = __this->___m_LeftHandGameObjects_18;
		NullCheck(L_2);
		HandGameObjects_OnDestroy_m629461090EBB5B11AB1A69FF94A8D5E71453201E(L_2, NULL);
		// m_LeftHandGameObjects = null;
		__this->___m_LeftHandGameObjects_18 = (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftHandGameObjects_18), (void*)(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)NULL);
	}

IL_0023:
	{
		// if (m_RightHandGameObjects != null)
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_3 = __this->___m_RightHandGameObjects_19;
		V_1 = (bool)((!(((RuntimeObject*)(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// m_RightHandGameObjects.OnDestroy();
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_5 = __this->___m_RightHandGameObjects_19;
		NullCheck(L_5);
		HandGameObjects_OnDestroy_m629461090EBB5B11AB1A69FF94A8D5E71453201E(L_5, NULL);
		// m_RightHandGameObjects = null;
		__this->___m_RightHandGameObjects_19 = (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightHandGameObjects_19), (void*)(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_Update_mB0B7993C3263E1F321A72F1E458172F953962154 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m571D52D1CFC36A69BDAFBAC74B0F075F8BB773BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m75273E2FDEA382223C6F78765C1A71E6A758CF9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RightHandVisualizer_OnTrackingAcquired_mC94589E3078091908E377A3969E585FA65B88B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RightHandVisualizer_OnTrackingLost_mF030E3EC983A141AF64C6BA77A89A1050853EE67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RightHandVisualizer_OnUpdatedHands_m60E61BFBECE2A440F011E6EF640A5668A6562782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m280C9268C53E673EC602C1138398BB10FD2A7604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (m_Subsystem != null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_17;
		V_0 = (bool)((!(((RuntimeObject*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_017f;
	}

IL_0013:
	{
		// SubsystemManager.GetSubsystems(s_SubsystemsReuse);
		il2cpp_codegen_runtime_class_init_inline(RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var);
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_2 = ((RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_StaticFields*)il2cpp_codegen_static_fields_for(RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m280C9268C53E673EC602C1138398BB10FD2A7604(L_2, SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m280C9268C53E673EC602C1138398BB10FD2A7604_RuntimeMethod_var);
		// if (s_SubsystemsReuse.Count == 0)
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_3 = ((RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_StaticFields*)il2cpp_codegen_static_fields_for(RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m571D52D1CFC36A69BDAFBAC74B0F075F8BB773BC_inline(L_3, List_1_get_Count_m571D52D1CFC36A69BDAFBAC74B0F075F8BB773BC_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// return;
		goto IL_017f;
	}

IL_0034:
	{
		// m_Subsystem = s_SubsystemsReuse[0];
		il2cpp_codegen_runtime_class_init_inline(RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var);
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_6 = ((RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_StaticFields*)il2cpp_codegen_static_fields_for(RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20;
		NullCheck(L_6);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_7;
		L_7 = List_1_get_Item_m75273E2FDEA382223C6F78765C1A71E6A758CF9F(L_6, 0, List_1_get_Item_m75273E2FDEA382223C6F78765C1A71E6A758CF9F_RuntimeMethod_var);
		__this->___m_Subsystem_17 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_17), (void*)L_7);
		// if (m_LeftHandGameObjects == null)
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_8 = __this->___m_LeftHandGameObjects_18;
		V_2 = (bool)((((RuntimeObject*)(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		// m_LeftHandGameObjects = new HandGameObjects(
		//     Handedness.Left,
		//     transform,
		//     m_LeftHandMesh,
		//     m_HandMeshMaterial,
		//     m_DebugDrawPrefab,
		//     m_VelocityPrefab);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftHandMesh_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___m_HandMeshMaterial_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_DebugDrawPrefab_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_VelocityPrefab_14;
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_15 = (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)il2cpp_codegen_object_new(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		HandGameObjects__ctor_m4B3ABF1BB5221E99F8998DC77562B8078459B054(L_15, 1, L_10, L_11, L_12, L_13, L_14, NULL);
		__this->___m_LeftHandGameObjects_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftHandGameObjects_18), (void*)L_15);
	}

IL_007e:
	{
		// if (m_RightHandGameObjects == null)
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_16 = __this->___m_RightHandGameObjects_19;
		V_3 = (bool)((((RuntimeObject*)(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		// m_RightHandGameObjects = new HandGameObjects(
		//     Handedness.Right,
		//     transform,
		//     m_RightHandMesh,
		//     m_HandMeshMaterial,
		//     m_DebugDrawPrefab,
		//     m_VelocityPrefab);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___m_RightHandMesh_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___m_HandMeshMaterial_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_DebugDrawPrefab_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___m_VelocityPrefab_14;
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_23 = (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)il2cpp_codegen_object_new(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		HandGameObjects__ctor_m4B3ABF1BB5221E99F8998DC77562B8078459B054(L_23, 2, L_18, L_19, L_20, L_21, L_22, NULL);
		__this->___m_RightHandGameObjects_19 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightHandGameObjects_19), (void*)L_23);
	}

IL_00b7:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, false);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_24 = __this->___m_LeftHandGameObjects_18;
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_24, (bool)0, NULL);
		// UpdateRenderingVisibility(m_RightHandGameObjects, m_Subsystem.rightHand.isTracked);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_25 = __this->___m_RightHandGameObjects_19;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_26 = __this->___m_Subsystem_17;
		NullCheck(L_26);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_27;
		L_27 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_26, NULL);
		V_4 = L_27;
		bool L_28;
		L_28 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_4), NULL);
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_25, L_28, NULL);
		// m_PreviousDrawMeshes = m_DrawMeshes;
		bool L_29 = __this->___m_DrawMeshes_9;
		__this->___m_PreviousDrawMeshes_10 = L_29;
		// m_PreviousDebugDrawJoints = m_DebugDrawJoints;
		bool L_30 = __this->___m_DebugDrawJoints_12;
		__this->___m_PreviousDebugDrawJoints_13 = L_30;
		// m_PreviousVelocityType = m_VelocityType;
		int32_t L_31 = __this->___m_VelocityType_15;
		__this->___m_PreviousVelocityType_16 = L_31;
		// m_Subsystem.trackingAcquired += OnTrackingAcquired;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_32 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_33 = L_32;
		NullCheck(L_33);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_34 = L_33->___trackingAcquired_9;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_35 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_35, __this, (intptr_t)((void*)RightHandVisualizer_OnTrackingAcquired_mC94589E3078091908E377A3969E585FA65B88B25_RuntimeMethod_var), NULL);
		Delegate_t* L_36;
		L_36 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_34, L_35, NULL);
		NullCheck(L_33);
		L_33->___trackingAcquired_9 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_36, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___trackingAcquired_9), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_36, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.trackingLost += OnTrackingLost;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_37 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_38 = L_37;
		NullCheck(L_38);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_39 = L_38->___trackingLost_10;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_40 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_40, __this, (intptr_t)((void*)RightHandVisualizer_OnTrackingLost_mF030E3EC983A141AF64C6BA77A89A1050853EE67_RuntimeMethod_var), NULL);
		Delegate_t* L_41;
		L_41 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_39, L_40, NULL);
		NullCheck(L_38);
		L_38->___trackingLost_10 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_41, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___trackingLost_10), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_41, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.updatedHands += OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_42 = __this->___m_Subsystem_17;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_43 = L_42;
		NullCheck(L_43);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_44 = L_43->___updatedHands_8;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_45 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_45, __this, (intptr_t)((void*)RightHandVisualizer_OnUpdatedHands_m60E61BFBECE2A440F011E6EF640A5668A6562782_RuntimeMethod_var), NULL);
		Delegate_t* L_46;
		L_46 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_44, L_45, NULL);
		NullCheck(L_43);
		L_43->___updatedHands_8 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_46, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_43->___updatedHands_8), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_46, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
	}

IL_017f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::UpdateRenderingVisibility(UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* ___handGameObjects0, bool ___isTracked1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B4_0 = NULL;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B5_1 = NULL;
	{
		// if (handGameObjects == null)
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_0 = ___handGameObjects0;
		V_0 = (bool)((((RuntimeObject*)(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		goto IL_003c;
	}

IL_000b:
	{
		// handGameObjects.ToggleDrawMesh(m_DrawMeshes && isTracked);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_2 = ___handGameObjects0;
		bool L_3 = __this->___m_DrawMeshes_9;
		bool L_4 = ___isTracked1;
		NullCheck(L_2);
		HandGameObjects_ToggleDrawMesh_m93229309413C5BD7B66A6E1F752E66A289538932(L_2, (bool)((int32_t)((int32_t)L_3&(int32_t)L_4)), NULL);
		// handGameObjects.ToggleDebugDrawJoints(m_DebugDrawJoints && isTracked);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_5 = ___handGameObjects0;
		bool L_6 = __this->___m_DebugDrawJoints_12;
		bool L_7 = ___isTracked1;
		NullCheck(L_5);
		HandGameObjects_ToggleDebugDrawJoints_m3C1679A45E62B0F32D9883BC045FA4653690EC43(L_5, (bool)((int32_t)((int32_t)L_6&(int32_t)L_7)), NULL);
		// handGameObjects.SetVelocityType(isTracked ? m_VelocityType : VelocityType.None);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_8 = ___handGameObjects0;
		bool L_9 = ___isTracked1;
		G_B3_0 = L_8;
		if (L_9)
		{
			G_B4_0 = L_8;
			goto IL_0030;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		goto IL_0036;
	}

IL_0030:
	{
		int32_t L_10 = __this->___m_VelocityType_15;
		G_B5_0 = ((int32_t)(L_10));
		G_B5_1 = G_B4_0;
	}

IL_0036:
	{
		NullCheck(G_B5_1);
		HandGameObjects_SetVelocityType_mF51757A5DDB3FAF34C8475E620C73F7926830BF7(G_B5_1, G_B5_0, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::OnTrackingAcquired(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_OnTrackingAcquired_mC94589E3078091908E377A3969E585FA65B88B25 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (hand.handedness)
		int32_t L_0;
		L_0 = XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline((&___hand0), NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0017:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, true);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_4 = __this->___m_LeftHandGameObjects_18;
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_4, (bool)1, NULL);
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// UpdateRenderingVisibility(m_RightHandGameObjects, true);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_5 = __this->___m_RightHandGameObjects_19;
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_5, (bool)1, NULL);
		// break;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::OnTrackingLost(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_OnTrackingLost_mF030E3EC983A141AF64C6BA77A89A1050853EE67 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (hand.handedness)
		int32_t L_0;
		L_0 = XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline((&___hand0), NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0017:
	{
		// UpdateRenderingVisibility(m_LeftHandGameObjects, false);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_4 = __this->___m_LeftHandGameObjects_18;
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_4, (bool)0, NULL);
		// break;
		goto IL_0037;
	}

IL_0027:
	{
		// UpdateRenderingVisibility(m_RightHandGameObjects, false);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_5 = __this->___m_RightHandGameObjects_19;
		RightHandVisualizer_UpdateRenderingVisibility_mB785C50C66CEA35F4795F11A6A1168461790D75D(__this, L_5, (bool)0, NULL);
		// break;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::OnUpdatedHands(UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer_OnUpdatedHands_m60E61BFBECE2A440F011E6EF640A5668A6562782 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___subsystem0, int32_t ___updateSuccessFlags1, int32_t ___updateType2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B9_0 = NULL;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B10_1 = NULL;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B12_0 = NULL;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B13_1 = NULL;
	{
		// if (updateType == XRHandSubsystem.UpdateType.Dynamic)
		int32_t L_0 = ___updateType2;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_01ab;
	}

IL_000e:
	{
		// bool leftHandTracked = subsystem.leftHand.isTracked;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_2 = ___subsystem0;
		NullCheck(L_2);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_3;
		L_3 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_2, NULL);
		V_3 = L_3;
		bool L_4;
		L_4 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_3), NULL);
		V_0 = L_4;
		// bool rightHandTracked = subsystem.rightHand.isTracked;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_5 = ___subsystem0;
		NullCheck(L_5);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_6;
		L_6 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_5, NULL);
		V_3 = L_6;
		bool L_7;
		L_7 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_3), NULL);
		V_1 = L_7;
		// if (m_PreviousDrawMeshes != m_DrawMeshes)
		bool L_8 = __this->___m_PreviousDrawMeshes_10;
		bool L_9 = __this->___m_DrawMeshes_9;
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		// m_LeftHandGameObjects.ToggleDrawMesh(false);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_11 = __this->___m_LeftHandGameObjects_18;
		NullCheck(L_11);
		HandGameObjects_ToggleDrawMesh_m93229309413C5BD7B66A6E1F752E66A289538932(L_11, (bool)0, NULL);
		// m_RightHandGameObjects.ToggleDrawMesh(m_DrawMeshes && rightHandTracked);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_12 = __this->___m_RightHandGameObjects_19;
		bool L_13 = __this->___m_DrawMeshes_9;
		bool L_14 = V_1;
		NullCheck(L_12);
		HandGameObjects_ToggleDrawMesh_m93229309413C5BD7B66A6E1F752E66A289538932(L_12, (bool)((int32_t)((int32_t)L_13&(int32_t)L_14)), NULL);
		// m_PreviousDrawMeshes = m_DrawMeshes;
		bool L_15 = __this->___m_DrawMeshes_9;
		__this->___m_PreviousDrawMeshes_10 = L_15;
	}

IL_0072:
	{
		// if (m_PreviousDebugDrawJoints != m_DebugDrawJoints)
		bool L_16 = __this->___m_PreviousDebugDrawJoints_13;
		bool L_17 = __this->___m_DebugDrawJoints_12;
		V_5 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00bf;
		}
	}
	{
		// m_LeftHandGameObjects.ToggleDebugDrawJoints(m_DebugDrawJoints && leftHandTracked);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_19 = __this->___m_LeftHandGameObjects_18;
		bool L_20 = __this->___m_DebugDrawJoints_12;
		bool L_21 = V_0;
		NullCheck(L_19);
		HandGameObjects_ToggleDebugDrawJoints_m3C1679A45E62B0F32D9883BC045FA4653690EC43(L_19, (bool)((int32_t)((int32_t)L_20&(int32_t)L_21)), NULL);
		// m_RightHandGameObjects.ToggleDebugDrawJoints(m_DebugDrawJoints && rightHandTracked);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_22 = __this->___m_RightHandGameObjects_19;
		bool L_23 = __this->___m_DebugDrawJoints_12;
		bool L_24 = V_1;
		NullCheck(L_22);
		HandGameObjects_ToggleDebugDrawJoints_m3C1679A45E62B0F32D9883BC045FA4653690EC43(L_22, (bool)((int32_t)((int32_t)L_23&(int32_t)L_24)), NULL);
		// m_PreviousDebugDrawJoints = m_DebugDrawJoints;
		bool L_25 = __this->___m_DebugDrawJoints_12;
		__this->___m_PreviousDebugDrawJoints_13 = L_25;
	}

IL_00bf:
	{
		// if (m_PreviousVelocityType != m_VelocityType)
		int32_t L_26 = __this->___m_PreviousVelocityType_16;
		int32_t L_27 = __this->___m_VelocityType_15;
		V_6 = (bool)((((int32_t)((((int32_t)L_26) == ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_0114;
		}
	}
	{
		// m_LeftHandGameObjects.SetVelocityType(leftHandTracked ? m_VelocityType : VelocityType.None);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_29 = __this->___m_LeftHandGameObjects_18;
		bool L_30 = V_0;
		G_B8_0 = L_29;
		if (L_30)
		{
			G_B9_0 = L_29;
			goto IL_00e3;
		}
	}
	{
		G_B10_0 = 2;
		G_B10_1 = G_B8_0;
		goto IL_00e9;
	}

IL_00e3:
	{
		int32_t L_31 = __this->___m_VelocityType_15;
		G_B10_0 = ((int32_t)(L_31));
		G_B10_1 = G_B9_0;
	}

IL_00e9:
	{
		NullCheck(G_B10_1);
		HandGameObjects_SetVelocityType_mF51757A5DDB3FAF34C8475E620C73F7926830BF7(G_B10_1, G_B10_0, NULL);
		// m_RightHandGameObjects.SetVelocityType(rightHandTracked ? m_VelocityType : VelocityType.None);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_32 = __this->___m_RightHandGameObjects_19;
		bool L_33 = V_1;
		G_B11_0 = L_32;
		if (L_33)
		{
			G_B12_0 = L_32;
			goto IL_00fb;
		}
	}
	{
		G_B13_0 = 2;
		G_B13_1 = G_B11_0;
		goto IL_0101;
	}

IL_00fb:
	{
		int32_t L_34 = __this->___m_VelocityType_15;
		G_B13_0 = ((int32_t)(L_34));
		G_B13_1 = G_B12_0;
	}

IL_0101:
	{
		NullCheck(G_B13_1);
		HandGameObjects_SetVelocityType_mF51757A5DDB3FAF34C8475E620C73F7926830BF7(G_B13_1, G_B13_0, NULL);
		// m_PreviousVelocityType = m_VelocityType;
		int32_t L_35 = __this->___m_VelocityType_15;
		__this->___m_PreviousVelocityType_16 = L_35;
	}

IL_0114:
	{
		// m_LeftHandGameObjects.UpdateJoints(
		//     m_Origin,
		//     subsystem.leftHand,
		//     (updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.LeftHandJoints) != 0,
		//     false,
		//     m_DebugDrawJoints,
		//     m_VelocityType);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_36 = __this->___m_LeftHandGameObjects_18;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_37 = __this->___m_Origin_5;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_38 = ___subsystem0;
		NullCheck(L_38);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_39;
		L_39 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_38, NULL);
		int32_t L_40 = ___updateSuccessFlags1;
		bool L_41 = __this->___m_DebugDrawJoints_12;
		int32_t L_42 = __this->___m_VelocityType_15;
		NullCheck(L_36);
		HandGameObjects_UpdateJoints_mF69FFDDBDF7E81FE2B509969BCB1DC2C41D12896(L_36, L_37, L_39, (bool)((!(((uint32_t)((int32_t)((int32_t)L_40&2))) <= ((uint32_t)0)))? 1 : 0), (bool)0, L_41, L_42, NULL);
		// if ((updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.LeftHandRootPose) != 0)
		int32_t L_43 = ___updateSuccessFlags1;
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_43&1))) <= ((uint32_t)0)))? 1 : 0);
		bool L_44 = V_7;
		if (!L_44)
		{
			goto IL_015d;
		}
	}
	{
		// m_LeftHandGameObjects.UpdateRootPose(subsystem.leftHand);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_45 = __this->___m_LeftHandGameObjects_18;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_46 = ___subsystem0;
		NullCheck(L_46);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_47;
		L_47 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_46, NULL);
		NullCheck(L_45);
		HandGameObjects_UpdateRootPose_m918EF10CC6D26C20050D7C263FF85AFC8FBF1470(L_45, L_47, NULL);
	}

IL_015d:
	{
		// m_RightHandGameObjects.UpdateJoints(
		//     m_Origin,
		//     subsystem.rightHand,
		//     (updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.RightHandJoints) != 0,
		//     m_DrawMeshes,
		//     m_DebugDrawJoints,
		//     m_VelocityType);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_48 = __this->___m_RightHandGameObjects_19;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_49 = __this->___m_Origin_5;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_50 = ___subsystem0;
		NullCheck(L_50);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_51;
		L_51 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_50, NULL);
		int32_t L_52 = ___updateSuccessFlags1;
		bool L_53 = __this->___m_DrawMeshes_9;
		bool L_54 = __this->___m_DebugDrawJoints_12;
		int32_t L_55 = __this->___m_VelocityType_15;
		NullCheck(L_48);
		HandGameObjects_UpdateJoints_mF69FFDDBDF7E81FE2B509969BCB1DC2C41D12896(L_48, L_49, L_51, (bool)((!(((uint32_t)((int32_t)((int32_t)L_52&8))) <= ((uint32_t)0)))? 1 : 0), L_53, L_54, L_55, NULL);
		// if ((updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.RightHandRootPose) != 0)
		int32_t L_56 = ___updateSuccessFlags1;
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_56&4))) <= ((uint32_t)0)))? 1 : 0);
		bool L_57 = V_8;
		if (!L_57)
		{
			goto IL_01ab;
		}
	}
	{
		// m_RightHandGameObjects.UpdateRootPose(subsystem.rightHand);
		HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* L_58 = __this->___m_RightHandGameObjects_19;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_59 = ___subsystem0;
		NullCheck(L_59);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_60;
		L_60 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_59, NULL);
		NullCheck(L_58);
		HandGameObjects_UpdateRootPose_m918EF10CC6D26C20050D7C263FF85AFC8FBF1470(L_58, L_60, NULL);
	}

IL_01ab:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer__ctor_m46E07AA447EA34202F62A08B8D9240022E041FB8 (RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightHandVisualizer__cctor_mA7BBC229A58FFD6B3A82BB3CE0E758F30F816C15 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE4111BEC044D13259EFD4EC5907636C855887179_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<XRHandSubsystem> s_SubsystemsReuse = new List<XRHandSubsystem>();
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_0 = (List_1_tE4111BEC044D13259EFD4EC5907636C855887179*)il2cpp_codegen_object_new(List_1_tE4111BEC044D13259EFD4EC5907636C855887179_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4(L_0, List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4_RuntimeMethod_var);
		((RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_StaticFields*)il2cpp_codegen_static_fields_for(RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_StaticFields*)il2cpp_codegen_static_fields_for(RightHandVisualizer_tF2A48582FABE32DB5B15CA73D59583097F224344_il2cpp_TypeInfo_var))->___s_SubsystemsReuse_20), (void*)L_0);
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
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::.ctor(UnityEngine.XR.Hands.Handedness,UnityEngine.Transform,UnityEngine.GameObject,UnityEngine.Material,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects__ctor_m4B3ABF1BB5221E99F8998DC77562B8078459B054 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, int32_t ___handedness0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshPrefab2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshMaterial3, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CD5D33537838F5694AC36BDFDFD8C3C0AFF021F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA669C5E797F155D12E27827640DACC40DA825122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5EE873084E228BF3E84D2FD089BAC0AD1B71FA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t283EC0359DA1A43EE54A2A74BF89DBF2F17BDC83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_11 = NULL;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_16 = NULL;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_22 = NULL;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	int32_t G_B7_0 = 0;
	{
		// Transform[] m_JointXforms = new Transform[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_0;
		L_0 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(((int32_t)27), NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___m_JointXforms_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JointXforms_2), (void*)L_1);
		// GameObject[] m_DrawJoints = new GameObject[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(((int32_t)27), NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___m_DrawJoints_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJoints_3), (void*)L_3);
		// GameObject[] m_VelocityParents = new GameObject[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_4;
		L_4 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(((int32_t)27), NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___m_VelocityParents_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VelocityParents_4), (void*)L_5);
		// LineRenderer[] m_Lines = new LineRenderer[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_6;
		L_6 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(((int32_t)27), NULL);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_7 = (LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A*)(LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A*)SZArrayNew(LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___m_Lines_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Lines_5), (void*)L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___debugDrawPrefab4;
		(&V_0)->___debugDrawPrefab_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___debugDrawPrefab_1), (void*)L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___velocityPrefab5;
		(&V_0)->___velocityPrefab_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___velocityPrefab_2), (void*)L_9);
		// public HandGameObjects(
		//     Handedness handedness,
		//     Transform parent,
		//     GameObject meshPrefab,
		//     Material meshMaterial,
		//     GameObject debugDrawPrefab,
		//     GameObject velocityPrefab)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		(&V_0)->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_0), (void*)__this);
		// m_HandRoot = Instantiate(meshPrefab, parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___meshPrefab2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___parent1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		__this->___m_HandRoot_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HandRoot_0), (void*)L_12);
		// m_HandRoot.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_HandRoot_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_15, NULL);
		// m_HandRoot.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_HandRoot_0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_17);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_17, L_18, NULL);
		// Transform wristRootXform = null;
		V_1 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		V_2 = 0;
		goto IL_0128;
	}

IL_00aa:
	{
		// var child = m_HandRoot.transform.GetChild(childIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___m_HandRoot_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_20, L_21, NULL);
		V_3 = L_22;
		// if (child.gameObject.name.EndsWith(XRHandJointID.Wrist.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = V_3;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_24, NULL);
		V_5 = 1;
		Il2CppFakeBox<int32_t> L_26(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_27;
		L_27 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_26), NULL);
		NullCheck(L_25);
		bool L_28;
		L_28 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_25, L_27, NULL);
		V_4 = L_28;
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00e7;
		}
	}
	{
		// wristRootXform = child;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_3;
		V_1 = L_30;
		goto IL_0123;
	}

IL_00e7:
	{
		// else if (child.gameObject.name.EndsWith("Hand") && meshMaterial != null && child.TryGetComponent<SkinnedMeshRenderer>(out var renderer))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_3;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_33, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_34)
		{
			goto IL_0112;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = ___meshMaterial3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_0112;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = V_3;
		NullCheck(L_37);
		bool L_38;
		L_38 = Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63(L_37, (&V_6), Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		G_B7_0 = ((int32_t)(L_38));
		goto IL_0113;
	}

IL_0112:
	{
		G_B7_0 = 0;
	}

IL_0113:
	{
		V_7 = (bool)G_B7_0;
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_0123;
		}
	}
	{
		// renderer.sharedMaterial = meshMaterial;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_40 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = ___meshMaterial3;
		NullCheck(L_40);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_40, L_41, NULL);
	}

IL_0123:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0128:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_43 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___m_HandRoot_0;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		NullCheck(L_45);
		int32_t L_46;
		L_46 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_45, NULL);
		V_8 = (bool)((((int32_t)L_43) < ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_8;
		if (L_47)
		{
			goto IL_00aa;
		}
	}
	{
		// m_DrawJointsParent = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_48, NULL);
		__this->___m_DrawJointsParent_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJointsParent_1), (void*)L_48);
		// m_DrawJointsParent.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___m_DrawJointsParent_1;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = ___parent1;
		NullCheck(L_50);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_50, L_51, NULL);
		// m_DrawJointsParent.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___m_DrawJointsParent_1;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_53);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_53, L_54, NULL);
		// m_DrawJointsParent.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___m_DrawJointsParent_1;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_55, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57;
		L_57 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_56);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_56, L_57, NULL);
		// m_DrawJointsParent.name = handedness + " Hand Debug Draw Joints";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___m_DrawJointsParent_1;
		Il2CppFakeBox<int32_t> L_59(Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var, (&___handedness0));
		String_t* L_60;
		L_60 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_59), NULL);
		String_t* L_61;
		L_61 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_60, _stringLiteralD5EE873084E228BF3E84D2FD089BAC0AD1B71FA1, NULL);
		NullCheck(L_58);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_58, L_61, NULL);
		// if (wristRootXform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_63;
		bool L_64 = V_9;
		if (!L_64)
		{
			goto IL_01cf;
		}
	}
	{
		// Debug.LogWarning("Hand transform hierarchy not set correctly - couldn't find Wrist joint!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral3CD5D33537838F5694AC36BDFDFD8C3C0AFF021F, NULL);
		goto IL_03cb;
	}

IL_01cf:
	{
		// AssignJoint(XRHandJointID.Wrist, wristRootXform, m_DrawJointsParent.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___m_DrawJointsParent_1;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m568B622187D4C3A5607E4F57ED91FCDC74B1633C(__this, 1, L_65, L_67, (&V_0), NULL);
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		V_10 = 0;
		goto IL_03b7;
	}

IL_01ee:
	{
		// var child = wristRootXform.GetChild(childIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = V_1;
		int32_t L_69 = V_10;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_68, L_69, NULL);
		V_11 = L_70;
		// if (child.name.EndsWith(XRHandJointID.Palm.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = V_11;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_71, NULL);
		V_5 = 2;
		Il2CppFakeBox<int32_t> L_73(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_74;
		L_74 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_73), NULL);
		NullCheck(L_72);
		bool L_75;
		L_75 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_72, L_74, NULL);
		V_12 = L_75;
		bool L_76 = V_12;
		if (!L_76)
		{
			goto IL_0238;
		}
	}
	{
		// AssignJoint(XRHandJointID.Palm, child, m_DrawJointsParent.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77 = V_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___m_DrawJointsParent_1;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m568B622187D4C3A5607E4F57ED91FCDC74B1633C(__this, 2, L_77, L_79, (&V_0), NULL);
		// continue;
		goto IL_03b1;
	}

IL_0238:
	{
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_13 = 0;
		goto IL_039f;
	}

IL_0240:
	{
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_80 = V_13;
		V_14 = L_80;
		// var jointIdFront = fingerId.GetFrontJointID();
		int32_t L_81 = V_14;
		int32_t L_82;
		L_82 = XRHandJointIDUtility_GetFrontJointID_m4392F7CCCB0AA92FB47F990F5326820725835D2A(L_81, NULL);
		V_15 = L_82;
		// if (!child.name.EndsWith(jointIdFront.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = V_11;
		NullCheck(L_83);
		String_t* L_84;
		L_84 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_83, NULL);
		Il2CppFakeBox<int32_t> L_85(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_15));
		String_t* L_86;
		L_86 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_85), NULL);
		NullCheck(L_84);
		bool L_87;
		L_87 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_84, L_86, NULL);
		V_18 = (bool)((((int32_t)L_87) == ((int32_t)0))? 1 : 0);
		bool L_88 = V_18;
		if (!L_88)
		{
			goto IL_0275;
		}
	}
	{
		// continue;
		goto IL_0399;
	}

IL_0275:
	{
		// AssignJoint(jointIdFront, child, m_DrawJointsParent.transform);
		int32_t L_89 = V_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = V_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = __this->___m_DrawJointsParent_1;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m568B622187D4C3A5607E4F57ED91FCDC74B1633C(__this, L_89, L_90, L_92, (&V_0), NULL);
		// var lastChild = child;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = V_11;
		V_16 = L_93;
		// int jointIndexBack = fingerId.GetBackJointID().ToIndex();
		int32_t L_94 = V_14;
		int32_t L_95;
		L_95 = XRHandJointIDUtility_GetBackJointID_m10CC45E0A8001CF5681C5271CA35797F3F20ED02(L_94, NULL);
		int32_t L_96;
		L_96 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_95, NULL);
		V_17 = L_96;
		// for (int jointIndex = jointIdFront.ToIndex() + 1;
		int32_t L_97 = V_15;
		int32_t L_98;
		L_98 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_97, NULL);
		V_19 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		goto IL_0386;
	}

IL_02af:
	{
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		V_21 = 0;
		goto IL_02f7;
	}

IL_02b5:
	{
		// var nextChild = lastChild.GetChild(nextChildIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = V_16;
		int32_t L_100 = V_21;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_99, L_100, NULL);
		V_22 = L_101;
		// if (nextChild.name.EndsWith(XRHandJointIDUtility.FromIndex(jointIndex).ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = V_22;
		NullCheck(L_102);
		String_t* L_103;
		L_103 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_102, NULL);
		int32_t L_104 = V_19;
		int32_t L_105;
		L_105 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_104, NULL);
		V_5 = L_105;
		Il2CppFakeBox<int32_t> L_106(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_107;
		L_107 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_106), NULL);
		NullCheck(L_103);
		bool L_108;
		L_108 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_103, L_107, NULL);
		V_23 = L_108;
		bool L_109 = V_23;
		if (!L_109)
		{
			goto IL_02f0;
		}
	}
	{
		// lastChild = nextChild;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_110 = V_22;
		V_16 = L_110;
		// break;
		goto IL_0308;
	}

IL_02f0:
	{
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		int32_t L_111 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_02f7:
	{
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		int32_t L_112 = V_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113 = V_16;
		NullCheck(L_113);
		int32_t L_114;
		L_114 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_113, NULL);
		V_24 = (bool)((((int32_t)L_112) < ((int32_t)L_114))? 1 : 0);
		bool L_115 = V_24;
		if (L_115)
		{
			goto IL_02b5;
		}
	}

IL_0308:
	{
		// if (!lastChild.name.EndsWith(XRHandJointIDUtility.FromIndex(jointIndex).ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116 = V_16;
		NullCheck(L_116);
		String_t* L_117;
		L_117 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_116, NULL);
		int32_t L_118 = V_19;
		int32_t L_119;
		L_119 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_118, NULL);
		V_5 = L_119;
		Il2CppFakeBox<int32_t> L_120(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_121;
		L_121 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_120), NULL);
		NullCheck(L_117);
		bool L_122;
		L_122 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_117, L_121, NULL);
		V_25 = (bool)((((int32_t)L_122) == ((int32_t)0))? 1 : 0);
		bool L_123 = V_25;
		if (!L_123)
		{
			goto IL_035e;
		}
	}
	{
		// throw new InvalidOperationException("Hand transform hierarchy not set correctly - couldn't find " + XRHandJointIDUtility.FromIndex(jointIndex) + " joint!");
		int32_t L_124 = V_19;
		int32_t L_125;
		L_125 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_124, NULL);
		V_5 = L_125;
		Il2CppFakeBox<int32_t> L_126(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var)), (&V_5));
		String_t* L_127;
		L_127 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_126), NULL);
		String_t* L_128;
		L_128 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA669C5E797F155D12E27827640DACC40DA825122)), L_127, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_129 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_129);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_129, L_128, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_129, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HandGameObjects__ctor_m4B3ABF1BB5221E99F8998DC77562B8078459B054_RuntimeMethod_var)));
	}

IL_035e:
	{
		// var jointId = XRHandJointIDUtility.FromIndex(jointIndex);
		int32_t L_130 = V_19;
		int32_t L_131;
		L_131 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_130, NULL);
		V_20 = L_131;
		// AssignJoint(jointId, lastChild, m_DrawJointsParent.transform);
		int32_t L_132 = V_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133 = V_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = __this->___m_DrawJointsParent_1;
		NullCheck(L_134);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_134, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m568B622187D4C3A5607E4F57ED91FCDC74B1633C(__this, L_132, L_133, L_135, (&V_0), NULL);
		// ++jointIndex)
		int32_t L_136 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_0386:
	{
		// jointIndex <= jointIndexBack;
		int32_t L_137 = V_19;
		int32_t L_138 = V_17;
		V_26 = (bool)((((int32_t)((((int32_t)L_137) > ((int32_t)L_138))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_139 = V_26;
		if (L_139)
		{
			goto IL_02af;
		}
	}
	{
	}

IL_0399:
	{
		// ++fingerIndex)
		int32_t L_140 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_039f:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_141 = V_13;
		V_27 = (bool)((((int32_t)((((int32_t)L_141) > ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_142 = V_27;
		if (L_142)
		{
			goto IL_0240;
		}
	}
	{
	}

IL_03b1:
	{
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		int32_t L_143 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_03b7:
	{
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		int32_t L_144 = V_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145 = V_1;
		NullCheck(L_145);
		int32_t L_146;
		L_146 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_145, NULL);
		V_28 = (bool)((((int32_t)L_144) < ((int32_t)L_146))? 1 : 0);
		bool L_147 = V_28;
		if (L_147)
		{
			goto IL_01ee;
		}
	}
	{
	}

IL_03cb:
	{
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_29 = 0;
		goto IL_0421;
	}

IL_03d0:
	{
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_148 = V_29;
		V_30 = L_148;
		// var jointId = fingerId.GetFrontJointID();
		int32_t L_149 = V_30;
		int32_t L_150;
		L_150 = XRHandJointIDUtility_GetFrontJointID_m4392F7CCCB0AA92FB47F990F5326820725835D2A(L_149, NULL);
		V_31 = L_150;
		// if (m_JointXforms[jointId.ToIndex()] == null)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_151 = __this->___m_JointXforms_2;
		int32_t L_152 = V_31;
		int32_t L_153;
		L_153 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_152, NULL);
		NullCheck(L_151);
		int32_t L_154 = L_153;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_155 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_156;
		L_156 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_155, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_32 = L_156;
		bool L_157 = V_32;
		if (!L_157)
		{
			goto IL_041a;
		}
	}
	{
		// Debug.LogWarning("Hand transform hierarchy not set correctly - couldn't find " + jointId + " joint!");
		Il2CppFakeBox<int32_t> L_158(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_31));
		String_t* L_159;
		L_159 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_158), NULL);
		String_t* L_160;
		L_160 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA669C5E797F155D12E27827640DACC40DA825122, L_159, _stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_160, NULL);
	}

IL_041a:
	{
		// ++fingerIndex)
		int32_t L_161 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_0421:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_162 = V_29;
		V_33 = (bool)((((int32_t)((((int32_t)L_162) > ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_163 = V_33;
		if (L_163)
		{
			goto IL_03d0;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnDestroy_m629461090EBB5B11AB1A69FF94A8D5E71453201E (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// Destroy(m_HandRoot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_HandRoot_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// m_HandRoot = null;
		__this->___m_HandRoot_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HandRoot_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		V_0 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		// Destroy(m_DrawJoints[jointIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_DrawJoints_3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// m_DrawJoints[jointIndex] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___m_DrawJoints_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, NULL);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0035:
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_8 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___m_DrawJoints_3;
		NullCheck(L_9);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0018;
		}
	}
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		V_2 = 0;
		goto IL_0065;
	}

IL_0048:
	{
		// Destroy(m_VelocityParents[jointIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___m_VelocityParents_4;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// m_VelocityParents[jointIndex] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___m_VelocityParents_4;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, NULL);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0065:
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_18 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___m_VelocityParents_4;
		NullCheck(L_19);
		V_3 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_0048;
		}
	}
	{
		// Destroy(m_DrawJointsParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_DrawJointsParent_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_21, NULL);
		// m_DrawJointsParent = null;
		__this->___m_DrawJointsParent_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJointsParent_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::ToggleDrawMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDrawMesh_m93229309413C5BD7B66A6E1F752E66A289538932 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, bool ___drawMesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		V_0 = 0;
		goto IL_0031;
	}

IL_0005:
	{
		// var xform = m_HandRoot.transform.GetChild(childIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_HandRoot_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		V_1 = L_3;
		// if (xform.TryGetComponent<SkinnedMeshRenderer>(out var renderer))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63(L_4, (&V_2), Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// renderer.enabled = drawMesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_7 = V_2;
		bool L_8 = ___drawMesh0;
		NullCheck(L_7);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, L_8, NULL);
	}

IL_002c:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_10 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_HandRoot_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_12, NULL);
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::ToggleDebugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDebugDrawJoints_m3C1679A45E62B0F32D9883BC045FA4653690EC43 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m9744A7B27D046A8A65C16D26BE0322E8BED18767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		V_0 = 0;
		goto IL_002e;
	}

IL_0005:
	{
		// ToggleRenderers<MeshRenderer>(debugDrawJoints, m_DrawJoints[jointIndex].transform);
		bool L_0 = ___debugDrawJoints0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_DrawJoints_3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m9744A7B27D046A8A65C16D26BE0322E8BED18767(L_0, L_5, HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m9744A7B27D046A8A65C16D26BE0322E8BED18767_RuntimeMethod_var);
		// m_Lines[jointIndex].enabled = debugDrawJoints;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_6 = __this->___m_Lines_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10 = ___debugDrawJoints0;
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, L_10, NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___m_DrawJoints_3;
		NullCheck(L_13);
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		// m_Lines[0].enabled = false;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_15 = __this->___m_Lines_5;
		NullCheck(L_15);
		int32_t L_16 = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::SetVelocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_SetVelocityType_mF51757A5DDB3FAF34C8475E620C73F7926830BF7 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, int32_t ___velocityType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m286CA8B39FB3CCC909718E30B0D54D73F3861577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		V_0 = 0;
		goto IL_0023;
	}

IL_0005:
	{
		// ToggleRenderers<LineRenderer>(velocityType != VelocityType.None, m_VelocityParents[jointIndex].transform);
		int32_t L_0 = ___velocityType0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_VelocityParents_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m286CA8B39FB3CCC909718E30B0D54D73F3861577((bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_5, HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m286CA8B39FB3CCC909718E30B0D54D73F3861577_RuntimeMethod_var);
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_7 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___m_VelocityParents_4;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::UpdateRootPose(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateRootPose_m918EF10CC6D26C20050D7C263FF85AFC8FBF1470 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var xform = m_JointXforms[XRHandJointID.Wrist.ToIndex()];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___m_JointXforms_2;
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(1, NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// xform.localPosition = hand.rootPose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline((&___hand0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___position_0;
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_6, NULL);
		// xform.localRotation = hand.rootPose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		L_8 = XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline((&___hand0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___rotation_1;
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::UpdateJoints(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.Hands.XRHand,System.Boolean,System.Boolean,System.Boolean,UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoints_mF69FFDDBDF7E81FE2B509969BCB1DC2C41D12896 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___xrOrigin0, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand1, bool ___areJointsTracked2, bool ___drawMeshes3, bool ___debugDrawJoints4, int32_t ___velocityType5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B3_0 = NULL;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* G_B4_1 = NULL;
	{
		// if (m_IsTracked != areJointsTracked)
		bool L_0 = __this->___m_IsTracked_6;
		bool L_1 = ___areJointsTracked2;
		V_3 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// ToggleDrawMesh(areJointsTracked && drawMeshes);
		bool L_3 = ___areJointsTracked2;
		bool L_4 = ___drawMeshes3;
		HandGameObjects_ToggleDrawMesh_m93229309413C5BD7B66A6E1F752E66A289538932(__this, (bool)((int32_t)((int32_t)L_3&(int32_t)L_4)), NULL);
		// ToggleDebugDrawJoints(areJointsTracked && debugDrawJoints);
		bool L_5 = ___areJointsTracked2;
		bool L_6 = ___debugDrawJoints4;
		HandGameObjects_ToggleDebugDrawJoints_m3C1679A45E62B0F32D9883BC045FA4653690EC43(__this, (bool)((int32_t)((int32_t)L_5&(int32_t)L_6)), NULL);
		// SetVelocityType(areJointsTracked ? velocityType : VelocityType.None);
		bool L_7 = ___areJointsTracked2;
		G_B2_0 = __this;
		if (L_7)
		{
			G_B3_0 = __this;
			goto IL_002f;
		}
	}
	{
		G_B4_0 = 2;
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_002f:
	{
		int32_t L_8 = ___velocityType5;
		G_B4_0 = ((int32_t)(L_8));
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		NullCheck(G_B4_1);
		HandGameObjects_SetVelocityType_mF51757A5DDB3FAF34C8475E620C73F7926830BF7(G_B4_1, G_B4_0, NULL);
		// m_IsTracked = areJointsTracked;
		bool L_9 = ___areJointsTracked2;
		__this->___m_IsTracked_6 = L_9;
	}

IL_003f:
	{
		// if (!m_IsTracked)
		bool L_10 = __this->___m_IsTracked_6;
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		// return;
		goto IL_0132;
	}

IL_0053:
	{
		// var originTransform = xrOrigin.Origin.transform;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_12 = ___xrOrigin0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = XROrigin_get_Origin_mCE6A3B327ACE6FAEDCC67A9DC952FEED191C26B6_inline(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		V_0 = L_14;
		// var originPose = new Pose(originTransform.position, originTransform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_1), L_16, L_18, NULL);
		// var wristPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		L_19 = Pose_get_identity_m523758317678304723B886B84FEFC973E9FE1BBE(NULL);
		V_2 = L_19;
		// UpdateJoint(debugDrawJoints, velocityType, originPose, hand.GetJoint(XRHandJointID.Wrist), ref wristPose);
		bool L_20 = ___debugDrawJoints4;
		int32_t L_21 = ___velocityType5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_1;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_23;
		L_23 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), 1, NULL);
		HandGameObjects_UpdateJoint_mEF2C0E9609E6B80123EA66433867D4E6F67E03D3(__this, L_20, L_21, L_22, L_23, (&V_2), (bool)1, NULL);
		// UpdateJoint(debugDrawJoints, velocityType, originPose, hand.GetJoint(XRHandJointID.Palm), ref wristPose, false);
		bool L_24 = ___debugDrawJoints4;
		int32_t L_25 = ___velocityType5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = V_1;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_27;
		L_27 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), 2, NULL);
		HandGameObjects_UpdateJoint_mEF2C0E9609E6B80123EA66433867D4E6F67E03D3(__this, L_24, L_25, L_26, L_27, (&V_2), (bool)0, NULL);
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_5 = 0;
		goto IL_0121;
	}

IL_00ab:
	{
		// var parentPose = wristPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_28 = V_2;
		V_6 = L_28;
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_29 = V_5;
		V_7 = L_29;
		// int jointIndexBack = fingerId.GetBackJointID().ToIndex();
		int32_t L_30 = V_7;
		int32_t L_31;
		L_31 = XRHandJointIDUtility_GetBackJointID_m10CC45E0A8001CF5681C5271CA35797F3F20ED02(L_30, NULL);
		int32_t L_32;
		L_32 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_31, NULL);
		V_8 = L_32;
		// for (int jointIndex = fingerId.GetFrontJointID().ToIndex();
		int32_t L_33 = V_7;
		int32_t L_34;
		L_34 = XRHandJointIDUtility_GetFrontJointID_m4392F7CCCB0AA92FB47F990F5326820725835D2A(L_33, NULL);
		int32_t L_35;
		L_35 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_34, NULL);
		V_9 = L_35;
		goto IL_010b;
	}

IL_00d1:
	{
		// if (m_JointXforms[jointIndex] != null)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_36 = __this->___m_JointXforms_2;
		int32_t L_37 = V_9;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_40;
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_0104;
		}
	}
	{
		// UpdateJoint(debugDrawJoints, velocityType, originPose, hand.GetJoint(XRHandJointIDUtility.FromIndex(jointIndex)), ref parentPose);
		bool L_42 = ___debugDrawJoints4;
		int32_t L_43 = ___velocityType5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_44 = V_1;
		int32_t L_45 = V_9;
		int32_t L_46;
		L_46 = XRHandJointIDUtility_FromIndex_m6424BE94F0C73E652A8C00C3FD4216D65A3FDE63(L_45, NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_47;
		L_47 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), L_46, NULL);
		HandGameObjects_UpdateJoint_mEF2C0E9609E6B80123EA66433867D4E6F67E03D3(__this, L_42, L_43, L_44, L_47, (&V_6), (bool)1, NULL);
	}

IL_0104:
	{
		// ++jointIndex)
		int32_t L_48 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_010b:
	{
		// jointIndex <= jointIndexBack;
		int32_t L_49 = V_9;
		int32_t L_50 = V_8;
		V_11 = (bool)((((int32_t)((((int32_t)L_49) > ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_11;
		if (L_51)
		{
			goto IL_00d1;
		}
	}
	{
		// ++fingerIndex)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0121:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_53 = V_5;
		V_12 = (bool)((((int32_t)((((int32_t)L_53) > ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_12;
		if (L_54)
		{
			goto IL_00ab;
		}
	}

IL_0132:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::UpdateJoint(System.Boolean,UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/VelocityType,UnityEngine.Pose,UnityEngine.XR.Hands.XRHandJoint,UnityEngine.Pose&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoint_mEF2C0E9609E6B80123EA66433867D4E6F67E03D3 (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, bool ___debugDrawJoints0, int32_t ___velocityType1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___originPose2, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___joint3, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___parentPose4, bool ___cacheParentPose5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// int jointIndex = joint.id.ToIndex();
		int32_t L_0;
		L_0 = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394((&___joint3), NULL);
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_0, NULL);
		V_0 = L_1;
		// var xform = m_JointXforms[jointIndex];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___m_JointXforms_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// if (xform == null || !joint.TryGetPose(out var pose))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		bool L_8;
		L_8 = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E((&___joint3), (&V_2), NULL);
		G_B3_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 1;
	}

IL_002f:
	{
		V_5 = (bool)G_B3_0;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		goto IL_0225;
	}

IL_003a:
	{
		// m_DrawJoints[jointIndex].transform.localPosition = pose.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___m_DrawJoints_3;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_16, NULL);
		// m_DrawJoints[jointIndex].transform.localRotation = pose.rotation;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___m_DrawJoints_3;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = L_22.___rotation_1;
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_23, NULL);
		// if (debugDrawJoints && joint.id != XRHandJointID.Wrist)
		bool L_24 = ___debugDrawJoints0;
		if (!L_24)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_25;
		L_25 = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394((&___joint3), NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_25) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007f;
	}

IL_007e:
	{
		G_B8_0 = 0;
	}

IL_007f:
	{
		V_6 = (bool)G_B8_0;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00ca;
		}
	}
	{
		// s_LinePointsReuse[0] = parentPose.GetTransformedBy(originPose).position;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = ___parentPose4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29 = ___originPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_30;
		L_30 = Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30.___position_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_31);
		// s_LinePointsReuse[1] = pose.GetTransformedBy(originPose).position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33 = ___originPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_34;
		L_34 = Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF((&V_2), L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34.___position_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_35);
		// m_Lines[jointIndex].SetPositions(s_LinePointsReuse);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_36 = __this->___m_Lines_5;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_39);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_39, L_40, NULL);
	}

IL_00ca:
	{
		// var inverseParentRotation = Quaternion.Inverse(parentPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_41 = ___parentPose4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = L_41->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_42, NULL);
		V_3 = L_43;
		// xform.localPosition = inverseParentRotation * (pose.position - parentPose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_46 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = L_46.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_48 = ___parentPose4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = L_48->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_47, L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_45, L_50, NULL);
		NullCheck(L_44);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_44, L_51, NULL);
		// xform.localRotation = inverseParentRotation * pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_54 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55 = L_54.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_53, L_55, NULL);
		NullCheck(L_52);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_52, L_56, NULL);
		// if (cacheParentPose)
		bool L_57 = ___cacheParentPose5;
		V_7 = L_57;
		bool L_58 = V_7;
		if (!L_58)
		{
			goto IL_0119;
		}
	}
	{
		// parentPose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_59 = ___parentPose4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_60 = V_2;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_59 = L_60;
	}

IL_0119:
	{
		// if (velocityType != VelocityType.None && m_VelocityParents[jointIndex].TryGetComponent<LineRenderer>(out var renderer))
		int32_t L_61 = ___velocityType1;
		if ((((int32_t)L_61) == ((int32_t)2)))
		{
			goto IL_012e;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = __this->___m_VelocityParents_4;
		int32_t L_63 = V_0;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		bool L_66;
		L_66 = GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC(L_65, (&V_4), GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC_RuntimeMethod_var);
		G_B15_0 = ((int32_t)(L_66));
		goto IL_012f;
	}

IL_012e:
	{
		G_B15_0 = 0;
	}

IL_012f:
	{
		V_8 = (bool)G_B15_0;
		bool L_67 = V_8;
		if (!L_67)
		{
			goto IL_0225;
		}
	}
	{
		// m_VelocityParents[jointIndex].transform.localPosition = Vector3.zero;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_68 = __this->___m_VelocityParents_4;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_72);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_72, L_73, NULL);
		// m_VelocityParents[jointIndex].transform.localRotation = Quaternion.identity;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_74 = __this->___m_VelocityParents_4;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79;
		L_79 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_78);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_78, L_79, NULL);
		// s_LinePointsReuse[0] = s_LinePointsReuse[1] = m_VelocityParents[jointIndex].transform.position;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_80 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_82 = __this->___m_VelocityParents_4;
		int32_t L_83 = V_0;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_85, NULL);
		NullCheck(L_86);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = L_87;
		V_9 = L_88;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_9;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_89);
		// if (velocityType == VelocityType.Linear)
		int32_t L_90 = ___velocityType1;
		V_10 = (bool)((((int32_t)L_90) == ((int32_t)0))? 1 : 0);
		bool L_91 = V_10;
		if (!L_91)
		{
			goto IL_01d0;
		}
	}
	{
		// if (joint.TryGetLinearVelocity(out var velocity))
		bool L_92;
		L_92 = XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B((&___joint3), (&V_11), NULL);
		V_12 = L_92;
		bool L_93 = V_12;
		if (!L_93)
		{
			goto IL_01cd;
		}
	}
	{
		// s_LinePointsReuse[1] += velocity;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_94 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_95 = ((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_96, L_97, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_95 = L_98;
	}

IL_01cd:
	{
		goto IL_0217;
	}

IL_01d0:
	{
		// else if (velocityType == VelocityType.Angular)
		int32_t L_99 = ___velocityType1;
		V_13 = (bool)((((int32_t)L_99) == ((int32_t)1))? 1 : 0);
		bool L_100 = V_13;
		if (!L_100)
		{
			goto IL_0217;
		}
	}
	{
		// if (joint.TryGetAngularVelocity(out var velocity))
		bool L_101;
		L_101 = XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63((&___joint3), (&V_14), NULL);
		V_15 = L_101;
		bool L_102 = V_15;
		if (!L_102)
		{
			goto IL_0216;
		}
	}
	{
		// s_LinePointsReuse[1] += 0.05f * velocity.normalized;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_104 = ((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((0.0500000007f), L_106, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_105, L_107, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_104 = L_108;
	}

IL_0216:
	{
	}

IL_0217:
	{
		// renderer.SetPositions(s_LinePointsReuse);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_109 = V_4;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_110 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_109);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_109, L_110, NULL);
	}

IL_0225:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects__cctor_mC5693A57389F6EA8FED0AB5B4BA4537FC0DF4FA0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Vector3[] s_LinePointsReuse = new Vector3[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects::<.ctor>g__AssignJoint|9_0(UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.XR.Hands.Samples.VisualizerSample.RightHandVisualizer/HandGameObjects/<>c__DisplayClass9_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_U3C_ctorU3Eg__AssignJointU7C9_0_m568B622187D4C3A5607E4F57ED91FCDC74B1633C (HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C* __this, int32_t ___jointId0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___jointXform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawJointsParent2, U3CU3Ec__DisplayClass9_0_t283EC0359DA1A43EE54A2A74BF89DBF2F17BDC83* p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int jointIndex = jointId.ToIndex();
		int32_t L_0 = ___jointId0;
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_m3DF07DF2BB75DA6614F626449D46C7DE5B8A1BCC(L_0, NULL);
		V_0 = L_1;
		// m_JointXforms[jointIndex] = jointXform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___m_JointXforms_2;
		int32_t L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___jointXform1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_4);
		// m_DrawJoints[jointIndex] = Instantiate(debugDrawPrefab);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___m_DrawJoints_3;
		int32_t L_6 = V_0;
		U3CU3Ec__DisplayClass9_0_t283EC0359DA1A43EE54A2A74BF89DBF2F17BDC83* L_7 = p3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___debugDrawPrefab_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_9);
		// m_DrawJoints[jointIndex].transform.parent = drawJointsParent;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___m_DrawJoints_3;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___drawJointsParent2;
		NullCheck(L_14);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, L_15, NULL);
		// m_DrawJoints[jointIndex].name = jointId.ToString();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___m_DrawJoints_3;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Il2CppFakeBox<int32_t> L_20(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&___jointId0));
		String_t* L_21;
		L_21 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), NULL);
		NullCheck(L_19);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_19, L_21, NULL);
		// m_VelocityParents[jointIndex] = Instantiate(velocityPrefab);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___m_VelocityParents_4;
		int32_t L_23 = V_0;
		U3CU3Ec__DisplayClass9_0_t283EC0359DA1A43EE54A2A74BF89DBF2F17BDC83* L_24 = p3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___velocityPrefab_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_26);
		// m_VelocityParents[jointIndex].transform.parent = jointXform;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = __this->___m_VelocityParents_4;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___jointXform1;
		NullCheck(L_31);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_31, L_32, NULL);
		// m_Lines[jointIndex] = m_DrawJoints[jointIndex].GetComponent<LineRenderer>();
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_33 = __this->___m_Lines_5;
		int32_t L_34 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___m_DrawJoints_3;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_39;
		L_39 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_38, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_39);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D*)L_39);
		// m_Lines[jointIndex].startWidth = m_Lines[jointIndex].endWidth = k_LineWidth;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_40 = __this->___m_Lines_5;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_44 = __this->___m_Lines_5;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		float L_48 = (0.00499999989f);
		V_1 = L_48;
		NullCheck(L_47);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_47, L_48, NULL);
		float L_49 = V_1;
		NullCheck(L_43);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_43, L_49, NULL);
		// s_LinePointsReuse[0] = s_LinePointsReuse[1] = jointXform.position;
		il2cpp_codegen_runtime_class_init_inline(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = ___jointXform1;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53;
		V_2 = L_54;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_55);
		// m_Lines[jointIndex].SetPositions(s_LinePointsReuse);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_56 = __this->___m_Lines_5;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = ((HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_StaticFields*)il2cpp_codegen_static_fields_for(HandGameObjects_t733506ECF6D56A69E3E16B4BA9F367CEAF21E31C_il2cpp_TypeInfo_var))->___s_LinePointsReuse_7;
		NullCheck(L_59);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_59, L_60, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand leftHand => m_LeftHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_LeftHand_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public bool isTracked { get; internal set; }
		bool L_0 = __this->___U3CisTrackedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness handedness => m_Handedness;
		int32_t L_0 = __this->___m_Handedness_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand rightHand => m_RightHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_RightHand_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Pose rootPose => m_RootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_RootPose_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XROrigin_get_Origin_mCE6A3B327ACE6FAEDCC67A9DC952FEED191C26B6_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OriginBaseGameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_OriginBaseGameObject_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
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
		float L_2 = ___value0;
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
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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

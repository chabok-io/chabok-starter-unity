#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D;
// System.Collections.Generic.IEnumerable`1<JSONObject>
struct IEnumerable_1_tF4B16C9400B7CBAC9C59894A5878C230079AEB9F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,JSONObject>
struct KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,JSONObject>
struct ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,JSONObject>[]
struct EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// JSONObject[]
struct JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// AndroidPluginCallback
struct AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ChabokPush
struct ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// JSONObject
struct JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722;
// JSONObjectEnumer
struct JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9;
// Main
struct Main_tDB418C89D33CD2699713F36E95C4373C8892C046;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB;
// AndroidPluginCallback/OnSuccessEvent
struct OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04;
// AndroidPluginCallback/onErrorEvent
struct onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8;
// UnityEngine.Application/LogCallback
struct LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD;
// JSONObject/<BakeAsync>d__108
struct U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3;
// JSONObject/<PrintAsync>d__110
struct U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A;
// JSONObject/<StringifyAsync>d__113
struct U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61;
// JSONObject/AddJSONContents
struct AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16;
// JSONObject/FieldNotFound
struct FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00170DE1B1F87AB5BC0E1ACB89EC1E8761028DDB;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral052291F7DB4D20D4A05868B4E2B2FBA30E8C72BE;
IL2CPP_EXTERN_C String_t* _stringLiteral071C3BC0C76A7C3C0CABEF244EEE02A3AF7A1E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1D7B559D2443B7B91D8C57B59220774176D04300;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA520A6918DA67342F6D3A11B7796701CDFC871;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD3A58A758D76D844ED9738C8E97E391BE3F2A9;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral2F4EE77C4F7B247E4CF48B5F94768D41B8313B25;
IL2CPP_EXTERN_C String_t* _stringLiteral319D1EB2B79ACDA1B65E4BA4BA666745E69FEECF;
IL2CPP_EXTERN_C String_t* _stringLiteral387662C9A326D3E411B80614F2923E0A45213D3E;
IL2CPP_EXTERN_C String_t* _stringLiteral3E8CAAA11C75D11B813C686E18F3E02443B2A332;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4311B78947B4BC248CEEE85AEF8C8CBDA5DB0616;
IL2CPP_EXTERN_C String_t* _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4E910634FD1B4E69D8A04A4EC4B3A4E1D7C65C70;
IL2CPP_EXTERN_C String_t* _stringLiteral576C579AEC169DD0F9584B16EE8AAC91ABCDD396;
IL2CPP_EXTERN_C String_t* _stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5D7E10FB1136637DF3EEA7E332D50E75ECCFAE35;
IL2CPP_EXTERN_C String_t* _stringLiteral609C21B8A252D459962504AA2276A0E24B2878EF;
IL2CPP_EXTERN_C String_t* _stringLiteral62564D387B16A3803250F43550BB3601EFD53E90;
IL2CPP_EXTERN_C String_t* _stringLiteral688DAF8365F2089E7ED7C16138972E5239A50B2A;
IL2CPP_EXTERN_C String_t* _stringLiteral6996DC0CC92C7C284749109C7F02D201312B6A5C;
IL2CPP_EXTERN_C String_t* _stringLiteral7036BA73163DAA855C27E7DC7A4EFABC45E304C3;
IL2CPP_EXTERN_C String_t* _stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D;
IL2CPP_EXTERN_C String_t* _stringLiteral7744FB15E8739D759829A38383DDCF47358A2096;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7A767413CF3615981E3F378B2C401F9413BCD42C;
IL2CPP_EXTERN_C String_t* _stringLiteral81FB3075BDD9E586E0CE75E4ABEE09AF789BD1EF;
IL2CPP_EXTERN_C String_t* _stringLiteral88FA4D914079998FE2AD6F824512882FA16FFAD3;
IL2CPP_EXTERN_C String_t* _stringLiteral8A88DEF28104508D70E81DC82A27CDD95EDDA6DC;
IL2CPP_EXTERN_C String_t* _stringLiteral8FEA2EDB43B6373E211547DF5AB654D25934B827;
IL2CPP_EXTERN_C String_t* _stringLiteral90769F53329CDE4435A77180E60F42364B329519;
IL2CPP_EXTERN_C String_t* _stringLiteral92005D7137C29BFA8D55427CB7512A49F739ECC4;
IL2CPP_EXTERN_C String_t* _stringLiteral9216BDEF5172F1DBAACFFF605E8C99BD4A930973;
IL2CPP_EXTERN_C String_t* _stringLiteral9386BFC1C0E64BD062C81BDBD606E5D5DA8E2682;
IL2CPP_EXTERN_C String_t* _stringLiteral98A6C258598283701F58B97B11A6F4BE184680B5;
IL2CPP_EXTERN_C String_t* _stringLiteral9B616C76333DA9EEE6F490F452DA4E08A004E0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral9DFDC5E5D14ABE1881B487BEE6650B1E5F9AEC01;
IL2CPP_EXTERN_C String_t* _stringLiteral9F10603D7AF69CA2B90934A25E3CAEE4BB99FA70;
IL2CPP_EXTERN_C String_t* _stringLiteralA57F692809412BBB13F764D9044820BC70823E64;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6;
IL2CPP_EXTERN_C String_t* _stringLiteralAF12339BAFE5071170B1E358779B8AE7C00A38AC;
IL2CPP_EXTERN_C String_t* _stringLiteralB15CD2F429F36DD25EB8839CCFD610CB005268F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD44D684FF80592612D10DBEA03749DC162B2814;
IL2CPP_EXTERN_C String_t* _stringLiteralBE95F14B294498A053E2A3388F29261A95F7E571;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC36907BC3283133F5640F6886CE37197C479727D;
IL2CPP_EXTERN_C String_t* _stringLiteralC384FC3C39C9AC30043193059DA0638FF8928E99;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7436BD01144335ED4A469BD8EEEF3DE6244EF06;
IL2CPP_EXTERN_C String_t* _stringLiteralC793A84A0561BAC7662A5C2978058A0359D8C0A0;
IL2CPP_EXTERN_C String_t* _stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B;
IL2CPP_EXTERN_C String_t* _stringLiteralCACBCAED8E6677B2E4D1925BBEE222A72F075836;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCF7BD9E95AB6A4FDFFEC5B20FF9595C7F1F28305;
IL2CPP_EXTERN_C String_t* _stringLiteralD33B84F5140C97845927D2B88735C5546BB05DD2;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD8E86767550974737A0B2F15037D37C12BBE9B33;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F25E370C030BF023C4362D923097BB04A97318;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE383FC68E38A26C06F89B3817E7A6A8D9B42EC42;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE3F21DCF0EA9BEEE61C939C25E335B1DB4C9EF9E;
IL2CPP_EXTERN_C String_t* _stringLiteralE49F526F33D8B64E5C93A5D5649D7D5F968A075C;
IL2CPP_EXTERN_C String_t* _stringLiteralE4BD3ABD4F5DBC17E019A412606C5F7C99C9ABEA;
IL2CPP_EXTERN_C String_t* _stringLiteralE60E55FFA39342CB1DB630CDA80C3E018BCD5145;
IL2CPP_EXTERN_C String_t* _stringLiteralEC287F78D98F4A8B0C22265938D0C94FF90FC171;
IL2CPP_EXTERN_C String_t* _stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490;
IL2CPP_EXTERN_C String_t* _stringLiteralED3C1912EC734623EB86701B6BCF6DCA79E51F7F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5E5757FBD8F04A55780E7DDE89461E34334064A;
IL2CPP_EXTERN_C String_t* _stringLiteralF6744B47CAA0FCF3A6888DE50A398A08B7CC6088;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE9F4FA638B34BB8565B653C1739A2FE8284AC1;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m23CCEE945E50B56BDDD26F5985B089157DC687A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Main_HandleLog_m7436497A1357F3729CD182D55DF2592974503FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBakeAsyncU3Ed__108_System_Collections_IEnumerator_Reset_m4F60D38879DCF5320C154FC2A706F12A8E4C92FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPrintAsyncU3Ed__110_System_Collections_IEnumerator_Reset_m9249FD1FDC646EA9AFAC3F3FD54BD5C5C6476EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStringifyAsyncU3Ed__113_System_Collections_IEnumerator_Reset_m90144F5211628EF59F8AA7D02EB77085A619690F_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct  Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___entries_1)); }
	inline EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8404F3DFD50F3CD5644CB25FC492541D1A3B8951* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___keys_7)); }
	inline KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8394EC9CE67058B23CB1F3E043B24DE2EA46FFAA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ___values_8)); }
	inline ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8D8A56C06E996E3CFBAD59E6272CAA58669C6A95 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<JSONObject>
struct  List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D, ____items_1)); }
	inline JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* get__items_1() const { return ____items_1; }
	inline JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_StaticFields, ____emptyArray_5)); }
	inline JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// ChabokPush
struct  ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236  : public RuntimeObject
{
public:

public:
};

struct ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields
{
public:
	// System.Object ChabokPush::podlock
	RuntimeObject * ___podlock_0;
	// ChabokPush ChabokPush::instance
	ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * ___instance_1;

public:
	inline static int32_t get_offset_of_podlock_0() { return static_cast<int32_t>(offsetof(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields, ___podlock_0)); }
	inline RuntimeObject * get_podlock_0() const { return ___podlock_0; }
	inline RuntimeObject ** get_address_of_podlock_0() { return &___podlock_0; }
	inline void set_podlock_0(RuntimeObject * value)
	{
		___podlock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___podlock_0), (void*)value);
	}

	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields, ___instance_1)); }
	inline ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * get_instance_1() const { return ___instance_1; }
	inline ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_1), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
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
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
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
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// JSONObjectEnumer
struct  JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9  : public RuntimeObject
{
public:
	// JSONObject JSONObjectEnumer::_jobj
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ____jobj_0;
	// System.Int32 JSONObjectEnumer::position
	int32_t ___position_1;

public:
	inline static int32_t get_offset_of__jobj_0() { return static_cast<int32_t>(offsetof(JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9, ____jobj_0)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get__jobj_0() const { return ____jobj_0; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of__jobj_0() { return &____jobj_0; }
	inline void set__jobj_0(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		____jobj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jobj_0), (void*)value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9, ___position_1)); }
	inline int32_t get_position_1() const { return ___position_1; }
	inline int32_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int32_t value)
	{
		___position_1 = value;
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.WWWForm
struct  WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___formData_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_formData_0() const { return ___formData_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fieldNames_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fileNames_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___types_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_types_3() const { return ___types_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___boundary_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// JSONObject/<BakeAsync>d__108
struct  U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3  : public RuntimeObject
{
public:
	// System.Int32 JSONObject/<BakeAsync>d__108::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSONObject/<BakeAsync>d__108::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 JSONObject/<BakeAsync>d__108::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// JSONObject JSONObject/<BakeAsync>d__108::<>4__this
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<System.String> JSONObject/<BakeAsync>d__108::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3, ___U3CU3E4__this_3)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}
};


// JSONObject/<PrintAsync>d__110
struct  U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A  : public RuntimeObject
{
public:
	// System.Int32 JSONObject/<PrintAsync>d__110::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String JSONObject/<PrintAsync>d__110::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 JSONObject/<PrintAsync>d__110::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// JSONObject JSONObject/<PrintAsync>d__110::<>4__this
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___U3CU3E4__this_3;
	// System.Boolean JSONObject/<PrintAsync>d__110::pretty
	bool ___pretty_4;
	// System.Boolean JSONObject/<PrintAsync>d__110::<>3__pretty
	bool ___U3CU3E3__pretty_5;
	// System.Text.StringBuilder JSONObject/<PrintAsync>d__110::<builder>5__2
	StringBuilder_t * ___U3CbuilderU3E5__2_6;
	// System.Collections.IEnumerator JSONObject/<PrintAsync>d__110::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A, ___U3CU3E4__this_3)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_4() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A, ___pretty_4)); }
	inline bool get_pretty_4() const { return ___pretty_4; }
	inline bool* get_address_of_pretty_4() { return &___pretty_4; }
	inline void set_pretty_4(bool value)
	{
		___pretty_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__pretty_5() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A, ___U3CU3E3__pretty_5)); }
	inline bool get_U3CU3E3__pretty_5() const { return ___U3CU3E3__pretty_5; }
	inline bool* get_address_of_U3CU3E3__pretty_5() { return &___U3CU3E3__pretty_5; }
	inline void set_U3CU3E3__pretty_5(bool value)
	{
		___U3CU3E3__pretty_5 = value;
	}

	inline static int32_t get_offset_of_U3CbuilderU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A, ___U3CbuilderU3E5__2_6)); }
	inline StringBuilder_t * get_U3CbuilderU3E5__2_6() const { return ___U3CbuilderU3E5__2_6; }
	inline StringBuilder_t ** get_address_of_U3CbuilderU3E5__2_6() { return &___U3CbuilderU3E5__2_6; }
	inline void set_U3CbuilderU3E5__2_6(StringBuilder_t * value)
	{
		___U3CbuilderU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbuilderU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_7() { return static_cast<int32_t>(offsetof(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A, ___U3CU3E7__wrap2_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_7() const { return ___U3CU3E7__wrap2_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_7() { return &___U3CU3E7__wrap2_7; }
	inline void set_U3CU3E7__wrap2_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_7), (void*)value);
	}
};


// JSONObject/<StringifyAsync>d__113
struct  U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61  : public RuntimeObject
{
public:
	// System.Int32 JSONObject/<StringifyAsync>d__113::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object JSONObject/<StringifyAsync>d__113::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 JSONObject/<StringifyAsync>d__113::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 JSONObject/<StringifyAsync>d__113::depth
	int32_t ___depth_3;
	// System.Int32 JSONObject/<StringifyAsync>d__113::<>3__depth
	int32_t ___U3CU3E3__depth_4;
	// JSONObject JSONObject/<StringifyAsync>d__113::<>4__this
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___U3CU3E4__this_5;
	// System.Text.StringBuilder JSONObject/<StringifyAsync>d__113::builder
	StringBuilder_t * ___builder_6;
	// System.Text.StringBuilder JSONObject/<StringifyAsync>d__113::<>3__builder
	StringBuilder_t * ___U3CU3E3__builder_7;
	// System.Boolean JSONObject/<StringifyAsync>d__113::pretty
	bool ___pretty_8;
	// System.Boolean JSONObject/<StringifyAsync>d__113::<>3__pretty
	bool ___U3CU3E3__pretty_9;
	// System.Int32 JSONObject/<StringifyAsync>d__113::<i>5__2
	int32_t ___U3CiU3E5__2_10;
	// System.Collections.IEnumerator JSONObject/<StringifyAsync>d__113::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_depth_3() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___depth_3)); }
	inline int32_t get_depth_3() const { return ___depth_3; }
	inline int32_t* get_address_of_depth_3() { return &___depth_3; }
	inline void set_depth_3(int32_t value)
	{
		___depth_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__depth_4() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CU3E3__depth_4)); }
	inline int32_t get_U3CU3E3__depth_4() const { return ___U3CU3E3__depth_4; }
	inline int32_t* get_address_of_U3CU3E3__depth_4() { return &___U3CU3E3__depth_4; }
	inline void set_U3CU3E3__depth_4(int32_t value)
	{
		___U3CU3E3__depth_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CU3E4__this_5)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_builder_6() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___builder_6)); }
	inline StringBuilder_t * get_builder_6() const { return ___builder_6; }
	inline StringBuilder_t ** get_address_of_builder_6() { return &___builder_6; }
	inline void set_builder_6(StringBuilder_t * value)
	{
		___builder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__builder_7() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CU3E3__builder_7)); }
	inline StringBuilder_t * get_U3CU3E3__builder_7() const { return ___U3CU3E3__builder_7; }
	inline StringBuilder_t ** get_address_of_U3CU3E3__builder_7() { return &___U3CU3E3__builder_7; }
	inline void set_U3CU3E3__builder_7(StringBuilder_t * value)
	{
		___U3CU3E3__builder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__builder_7), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_8() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___pretty_8)); }
	inline bool get_pretty_8() const { return ___pretty_8; }
	inline bool* get_address_of_pretty_8() { return &___pretty_8; }
	inline void set_pretty_8(bool value)
	{
		___pretty_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__pretty_9() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CU3E3__pretty_9)); }
	inline bool get_U3CU3E3__pretty_9() const { return ___U3CU3E3__pretty_9; }
	inline bool* get_address_of_U3CU3E3__pretty_9() { return &___U3CU3E3__pretty_9; }
	inline void set_U3CU3E3__pretty_9(bool value)
	{
		___U3CU3E3__pretty_9 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_10() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CiU3E5__2_10)); }
	inline int32_t get_U3CiU3E5__2_10() const { return ___U3CiU3E5__2_10; }
	inline int32_t* get_address_of_U3CiU3E5__2_10() { return &___U3CiU3E5__2_10; }
	inline void set_U3CiU3E5__2_10(int32_t value)
	{
		___U3CiU3E5__2_10 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_11() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61, ___U3CU3E7__wrap2_11)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_11() const { return ___U3CU3E7__wrap2_11; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_11() { return &___U3CU3E7__wrap2_11; }
	inline void set_U3CU3E7__wrap2_11(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_11), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>
struct  KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464, ___value_1)); }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * get_value_1() const { return ___value_1; }
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D12
struct  __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794__padding[12];
	};

public:
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,JSONObject>
struct  Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___dictionary_0)); }
	inline Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___current_3)); }
	inline KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0;

public:
	inline static int32_t get_offset_of_U313BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U313BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0() const { return ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U313BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0() { return &___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0; }
	inline void set_U313BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.LogType
struct  LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JSONObject/Type
struct  Type_tFB7AD7B1ACDF9E6885ACE5620CA86463D26225EF 
{
public:
	// System.Int32 JSONObject/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tFB7AD7B1ACDF9E6885ACE5620CA86463D26225EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AndroidPluginCallback
struct  AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// AndroidPluginCallback/OnSuccessEvent AndroidPluginCallback::OnSuccess
	OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * ___OnSuccess_4;
	// AndroidPluginCallback/onErrorEvent AndroidPluginCallback::OnError
	onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * ___OnError_5;

public:
	inline static int32_t get_offset_of_OnSuccess_4() { return static_cast<int32_t>(offsetof(AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7, ___OnSuccess_4)); }
	inline OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * get_OnSuccess_4() const { return ___OnSuccess_4; }
	inline OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 ** get_address_of_OnSuccess_4() { return &___OnSuccess_4; }
	inline void set_OnSuccess_4(OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * value)
	{
		___OnSuccess_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSuccess_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_5() { return static_cast<int32_t>(offsetof(AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7, ___OnError_5)); }
	inline onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * get_OnError_5() const { return ___OnError_5; }
	inline onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 ** get_address_of_OnError_5() { return &___OnError_5; }
	inline void set_OnError_5(onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * value)
	{
		___OnError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// JSONObject
struct  JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722  : public RuntimeObject
{
public:
	// JSONObject/Type JSONObject::type
	int32_t ___type_6;
	// System.Collections.Generic.List`1<JSONObject> JSONObject::list
	List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * ___list_7;
	// System.Collections.Generic.List`1<System.String> JSONObject::keys
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___keys_8;
	// System.String JSONObject::str
	String_t* ___str_9;
	// System.Single JSONObject::n
	float ___n_10;
	// System.Boolean JSONObject::useInt
	bool ___useInt_11;
	// System.Int64 JSONObject::i
	int64_t ___i_12;
	// System.Boolean JSONObject::b
	bool ___b_13;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_list_7() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___list_7)); }
	inline List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * get_list_7() const { return ___list_7; }
	inline List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D ** get_address_of_list_7() { return &___list_7; }
	inline void set_list_7(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * value)
	{
		___list_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_7), (void*)value);
	}

	inline static int32_t get_offset_of_keys_8() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___keys_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_keys_8() const { return ___keys_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_keys_8() { return &___keys_8; }
	inline void set_keys_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___keys_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_8), (void*)value);
	}

	inline static int32_t get_offset_of_str_9() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___str_9)); }
	inline String_t* get_str_9() const { return ___str_9; }
	inline String_t** get_address_of_str_9() { return &___str_9; }
	inline void set_str_9(String_t* value)
	{
		___str_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_9), (void*)value);
	}

	inline static int32_t get_offset_of_n_10() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___n_10)); }
	inline float get_n_10() const { return ___n_10; }
	inline float* get_address_of_n_10() { return &___n_10; }
	inline void set_n_10(float value)
	{
		___n_10 = value;
	}

	inline static int32_t get_offset_of_useInt_11() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___useInt_11)); }
	inline bool get_useInt_11() const { return ___useInt_11; }
	inline bool* get_address_of_useInt_11() { return &___useInt_11; }
	inline void set_useInt_11(bool value)
	{
		___useInt_11 = value;
	}

	inline static int32_t get_offset_of_i_12() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___i_12)); }
	inline int64_t get_i_12() const { return ___i_12; }
	inline int64_t* get_address_of_i_12() { return &___i_12; }
	inline void set_i_12(int64_t value)
	{
		___i_12 = value;
	}

	inline static int32_t get_offset_of_b_13() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722, ___b_13)); }
	inline bool get_b_13() const { return ___b_13; }
	inline bool* get_address_of_b_13() { return &___b_13; }
	inline void set_b_13(bool value)
	{
		___b_13 = value;
	}
};

struct JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields
{
public:
	// System.Char[] JSONObject::WHITESPACE
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___WHITESPACE_5;
	// System.Diagnostics.Stopwatch JSONObject::printWatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___printWatch_15;

public:
	inline static int32_t get_offset_of_WHITESPACE_5() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields, ___WHITESPACE_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_WHITESPACE_5() const { return ___WHITESPACE_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_WHITESPACE_5() { return &___WHITESPACE_5; }
	inline void set_WHITESPACE_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___WHITESPACE_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WHITESPACE_5), (void*)value);
	}

	inline static int32_t get_offset_of_printWatch_15() { return static_cast<int32_t>(offsetof(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields, ___printWatch_15)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_printWatch_15() const { return ___printWatch_15; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_printWatch_15() { return &___printWatch_15; }
	inline void set_printWatch_15(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___printWatch_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___printWatch_15), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.FormatException
struct  FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// AndroidPluginCallback/OnSuccessEvent
struct  OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04  : public MulticastDelegate_t
{
public:

public:
};


// AndroidPluginCallback/onErrorEvent
struct  onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Application/LogCallback
struct  LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD  : public MulticastDelegate_t
{
public:

public:
};


// JSONObject/AddJSONContents
struct  AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16  : public MulticastDelegate_t
{
public:

public:
};


// JSONObject/FieldNotFound
struct  FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6  : public MulticastDelegate_t
{
public:

public:
};


// JSONObject/GetFieldResponse
struct  GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Main
struct  Main_tDB418C89D33CD2699713F36E95C4373C8892C046  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Main::txt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___txt_4;
	// UnityEngine.UI.Image Main::PopUp
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___PopUp_5;
	// System.String Main::error
	String_t* ___error_6;
	// ChabokPush Main::chabokPush
	ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * ___chabokPush_7;

public:
	inline static int32_t get_offset_of_txt_4() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___txt_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_txt_4() const { return ___txt_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_txt_4() { return &___txt_4; }
	inline void set_txt_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___txt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txt_4), (void*)value);
	}

	inline static int32_t get_offset_of_PopUp_5() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___PopUp_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_PopUp_5() const { return ___PopUp_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_PopUp_5() { return &___PopUp_5; }
	inline void set_PopUp_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___PopUp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PopUp_5), (void*)value);
	}

	inline static int32_t get_offset_of_error_6() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___error_6)); }
	inline String_t* get_error_6() const { return ___error_6; }
	inline String_t** get_address_of_error_6() { return &___error_6; }
	inline void set_error_6(String_t* value)
	{
		___error_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_6), (void*)value);
	}

	inline static int32_t get_offset_of_chabokPush_7() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___chabokPush_7)); }
	inline ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * get_chabokPush_7() const { return ___chabokPush_7; }
	inline ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 ** get_address_of_chabokPush_7() { return &___chabokPush_7; }
	inline void set_chabokPush_7(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * value)
	{
		___chabokPush_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chabokPush_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// JSONObject[]
struct JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * m_Items[1];

public:
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerable_ElementAt_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m663E9D5916D3CFA4BE2F42FEB251D7BFB1DCAA38_gshared (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_gshared (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void AndroidPluginCallback/OnSuccessEvent::Invoke(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccessEvent_Invoke_mFF2312ED02279A920A4ABA8E720BF448BC6303C7 (OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___count0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void AndroidPluginCallback/onErrorEvent::Invoke(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onErrorEvent_Invoke_m5F128EA1D514950CB932F8FE617A6494224D9251 (onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___exception0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void ChabokPush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__ctor_mD6EC45F49A0F06FB7FFC12078BE447706B9014A2 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571 (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m663E9D5916D3CFA4BE2F42FEB251D7BFB1DCAA38_gshared)(___source0, ___index1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.String ChabokPush::variableType(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChabokPush_variableType_mC43CE69FF3092AA116AC2852E0C248B037865041 (RuntimeObject * ___variable0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5 (String_t* ___separator0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, const RuntimeMethod* method);
// System.Void ChabokPush::iosSetUserAttribute(System.String[],System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosSetUserAttribute_m2961F06FFB31C35E3D079982962AFA18F9E35934 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___attrKeys0, String_t* ___attrValues1, String_t* ___attrTypes2, int32_t ___dicSize3, const RuntimeMethod* method);
// System.Void ChabokPush::iosTrack(System.String,System.String[],System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosTrack_mB97B47D1969765E243EC1E85BA7BFF61079F49D8 (String_t* ___name0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___attrKeys1, String_t* ___attrValues2, String_t* ___attrTypes3, int32_t ___dicSize4, const RuntimeMethod* method);
// System.Void ChabokPush::iosTrackPurchase(System.String,System.Double,System.String,System.String[],System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosTrackPurchase_m05753A76A6A65734B3F6772E1ECD9636058CECAC (String_t* ___eventName0, double ___revenue1, String_t* ___currency2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___attrKeys3, String_t* ___attrValues4, String_t* ___attrTypes5, int32_t ___dicSize6, const RuntimeMethod* method);
// System.Void ChabokPush::iosLogin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosLogin_mFA15AC45F7C288ED8816074360E89BCF3776ECF4 (String_t* ___userId0, const RuntimeMethod* method);
// System.Void ChabokPush::iosLogout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosLogout_mA8C17FCF87028E954169FC4DB22B9A3B3A8488CB (const RuntimeMethod* method);
// System.Void ChabokPush::iosAddTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosAddTag_mFB5A168FCC9329FD0CB0685C86B65E12666CE35A (String_t* ___tagName0, const RuntimeMethod* method);
// System.Void ChabokPush::iosRemoveTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosRemoveTag_m03A0510C084071859645C44EDBA40119D5AC5332 (String_t* ___tagName0, const RuntimeMethod* method);
// System.Void ChabokPush::_setUserAttribute(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__setUserAttribute_m8366BE2C2F5F9C482447E9E2B6CD6261C30BE7D0 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___attributes0, const RuntimeMethod* method);
// System.Void ChabokPush::iosIncrementUserAttributeValue(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosIncrementUserAttributeValue_m4C39D45B3759603E9E0BF50FFBB7D8C3A7226176 (String_t* ___key0, double ___value1, const RuntimeMethod* method);
// System.Void ChabokPush::iosDecrementUserAttributeValue(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosDecrementUserAttributeValue_mC15D940D98D42B3A4D4AB4C8D0DC11B91C57758B (String_t* ___key0, double ___value1, const RuntimeMethod* method);
// System.Void ChabokPush::iosAddToUserAttributeArray(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosAddToUserAttributeArray_mC430441D62942C8910BC8904ED143D365505E7DC (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void ChabokPush::iosRemoveFromUserAttributeArray(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosRemoveFromUserAttributeArray_mA22635A70C07ECC2BEFA32EC70B3275218B77685 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void ChabokPush::_track(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__track_m2FC29C80BFE857193263533723992DCC3950C949 (String_t* ___name0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___attributes1, const RuntimeMethod* method);
// System.Void ChabokPush::iosTrackRevenue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosTrackRevenue_m4C81A9F4369D83A0F650F6C7B65471E056941CF7 (double ___revenue0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m23CCEE945E50B56BDDD26F5985B089157DC687A5 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void ChabokPush::_trackPurchase(System.String,System.Double,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__trackPurchase_mC1D50A81DF163A56B0884D6882169E33DDC6B25D (String_t* ___eventName0, double ___revenue1, String_t* ___currency2, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___attributes3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<JSONObject>::get_Count()
inline int32_t List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// JSONObject JSONObject::Create(JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D (int32_t ___t0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JSONObject>::.ctor()
inline void List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// JSONObject JSONObject::CreateStringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02 (String_t* ___val0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JSONObject>::Add(!0)
inline void List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,JSONObject>::GetEnumerator()
inline Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033  Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E (Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033  (*) (Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,JSONObject>::get_Current()
inline KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_inline (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  (*) (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_inline (KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,JSONObject>::get_Value()
inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_inline (KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 * __this, const RuntimeMethod* method)
{
	return ((  JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * (*) (KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,JSONObject>::MoveNext()
inline bool Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56 (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,JSONObject>::Dispose()
inline void Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void JSONObject/AddJSONContents::Invoke(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents_Invoke_m5EB8C5BFCDB131C8317BE615AE64AB300FF77008 (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___self0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JSONObject>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<JSONObject>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mAD15D168DB9973AE0F2B2954CE31C2CBC772D2C8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// JSONObject JSONObject::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE (const RuntimeMethod* method);
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Parse_m37AF1F1D86E0D2CE4873C410679DD9F003AD793B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mBC08244C02CF34E9B4D669CA6EF13DA5C92EA23B (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mC7DA377611A8C1B83EE4D5284F8DC3E7C61A2194 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0)
inline int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, Il2CppChar, const RuntimeMethod*))Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_gshared)(___array0, ___value1, method);
}
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m6869838BC7DFE7BA8C73FF0CDC7DAB93B25F3C73 (String_t* ___val0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method);
// JSONObject JSONObject::CreateBakedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_CreateBakedObject_mD1360B3E5E493D5647B64617F0E894A42307FCDD (String_t* ___val0, const RuntimeMethod* method);
// JSONObject JSONObject::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108 (bool ___val0, const RuntimeMethod* method);
// System.Void JSONObject::Add(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method);
// JSONObject JSONObject::Create(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4 (float ___val0, const RuntimeMethod* method);
// JSONObject JSONObject::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2 (int32_t ___val0, const RuntimeMethod* method);
// JSONObject JSONObject::Create(JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_mAB52FC035F2BB8998E2F36C840605B466157A88E (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content0, const RuntimeMethod* method);
// System.Boolean JSONObject::op_Implicit(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___o0, const RuntimeMethod* method);
// System.Void JSONObject::AddField(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj1, const RuntimeMethod* method);
// JSONObject JSONObject::Create(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m344E63B4E4A74F15284F157069013679E9F9BC0A (int64_t ___val0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void JSONObject::SetField(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj1, const RuntimeMethod* method);
// System.Boolean JSONObject::HasField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method);
// JSONObject JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<JSONObject>::Remove(!0)
inline bool List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(!0)
inline bool List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(!0)
inline int32_t List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<JSONObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mB39F437E39BE18848FA47612216038F35970AD14 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<JSONObject>::get_Item(System.Int32)
inline JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void JSONObject/FieldNotFound::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m37FA2DD85D282EF09CD3790ECFAD348DACEF06B2 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m75931E7F217795B23CE49E908882C35D623DDBB6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Boolean JSONObject::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.Int64&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m43C478E125C950A25092B00522F4D8C06123CE25 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int64_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m6A8761BFDC11E5DFBDF08B2120BA0D0395BE0A2F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, uint32_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Boolean JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m34E78B3470121297625809968A259E7FD9BD0792 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t** ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method);
// System.Void JSONObject/GetFieldResponse::Invoke(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse_Invoke_mF1BEAD17E9225211812605D01371DE9834947986 (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<JSONObject>::Clear()
inline void List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.String JSONObject::Print(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method);
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___left0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___right1, const RuntimeMethod* method);
// System.Void JSONObject::Absorb(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Absorb_mDBE9D614A08AACFFBAA3CBC8AEF44C34C9C0C208 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method);
// JSONObject JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean JSONObject::get_isContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isContainer_mE8E9995704509192E5B1958110C461BAC07B8C67 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// System.Int32 JSONObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mA2253EB63C14426FD03F768405554601E47A56A0 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___index0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value1, const RuntimeMethod* method);
// System.Void JSONObject/<BakeAsync>d__108::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__108__ctor_mA04798BFE61915852DEA53D616C68C5C5F749CCA (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___depth0, StringBuilder_t * ___builder1, bool ___pretty2, const RuntimeMethod* method);
// System.Void JSONObject/<PrintAsync>d__110::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__110__ctor_m5A43C6475E4A6D106611642768C9E5B5C513B8B7 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void JSONObject/<StringifyAsync>d__113::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113__ctor_m954F17288382055AD65E54E2B141D29870D81A03 (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m1D712B17D4BDBE43D1E12EA52885C5D345C1CFA2 (int64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Boolean System.Single::IsInfinity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsInfinity_m10D3B235800230231AFC34AFEC4D320D06F794C1 (float ___f0, const RuntimeMethod* method);
// System.Boolean System.Single::IsNegativeInfinity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNegativeInfinity_m08D484739F9E73C171CFC2819E30A983E87C68AB (float ___f0, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<JSONObject>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7 (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * __this, int32_t ___index0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *, int32_t, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// JSONObject JSONObject::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_GetField_m3181F5223EF85F862D7C542FA18FD9AC1C626F2F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Boolean::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6AF340BBFF7B2ABB5987CE80AE6335EE96BC71E9 (bool* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// JSONObjectEnumer JSONObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * JSONObject_GetEnumerator_m7BF3CF650EB93A6EEABAE9D1E0A8E9B9448EC3E3 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// System.Void JSONObjectEnumer::.ctor(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObjectEnumer__ctor_mEF7DA5C1719EBC32DD882E9E24EFB915628C79ED (JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___jsonObject0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// JSONObject JSONObjectEnumer::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObjectEnumer_get_Current_m1F61D887777122282FF5E9542F430327DBBAED56 (JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * __this, const RuntimeMethod* method);
// System.Boolean JSONObject::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsArray_m192D16D4CC2C846BC1F6FA1A3CFE7A76369738C3 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method);
// ChabokPush ChabokPush::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * ChabokPush_GetInstance_m26FEDFC5A1DCBD5428D99B3E28491AA201754A8E (const RuntimeMethod* method);
// System.Void ChabokPush::Login(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_Login_m74957D1F851F54EAF62236D5A081053FFE3A1CA4 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___userId0, const RuntimeMethod* method);
// System.Void Main::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Log_m426DA9189457956ADD558035C095906128B6AFCC (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, RuntimeObject * ___text0, const RuntimeMethod* method);
// System.Void ChabokPush::AddTag(System.String,AndroidPluginCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_AddTag_mA3C018FFC5CBBFBC066883E0738F1797F9C99E31 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___tagName0, AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * ___callback1, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m4DA8AA49E6923EDCFB8927D588AE3D79B218545D (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ChabokPush::SetUserAttributes(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_SetUserAttributes_m07C0D80DD48C56D469496E6393BC9AE9CDBA2834 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___attributes0, const RuntimeMethod* method);
// System.Void ChabokPush::IncrementUserAttribute(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_IncrementUserAttribute_m1685634A22A0531928A2CEDD536F613BEF469274 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___attribute0, double ___value1, const RuntimeMethod* method);
// System.Void ChabokPush::DecrementUserAttribute(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_DecrementUserAttribute_m1C1315FE16AFB989D9D1303D7C3483ECB3BF94B8 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___attribute0, double ___value1, const RuntimeMethod* method);
// System.Void ChabokPush::AddToUserAttributeArray(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_AddToUserAttributeArray_mE9AECAE9B2762B69C35B1338753E474FE8B2F4BC (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void ChabokPush::RemoveFromUserAttributeArray(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_RemoveFromUserAttributeArray_m2858929DD18FE9D45D6D9B0CE262EE8B273E6E3E (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void ChabokPush::Track(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_Track_mA98231BFF3F781875A29D1131646886930A57AFD (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___title0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___eventData1, const RuntimeMethod* method);
// System.Void ChabokPush::TrackRevenue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_TrackRevenue_m6A4C7699099B3D13BAAA060E81345CAEDC1CA942 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, double ___value0, const RuntimeMethod* method);
// System.Void ChabokPush::TrackPurchase(System.String,System.Double,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_TrackPurchase_m6F2C40F93614899622B2248C9892C65617399418 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___title0, double ___value1, String_t* ___currency2, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___purchaseData3, const RuntimeMethod* method);
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE48C0F4824539FB22E7326AC130DDDD31F1E73B7 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_mE344A51214CF8CE1E24F1F8B7CD71DA099072943 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void JSONObject/<BakeAsync>d__108::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__108_U3CU3Em__Finally1_m46BD16C617A81F5EA34A1ACCE396B0839D5724CB (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_PrintAsync_m109E1BB961985C7BA46DBD74D2569BDB3DB0412A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method);
// System.Void JSONObject/<BakeAsync>d__108::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__108_System_IDisposable_Dispose_m510970F2FA743A25DD797AAB2FAB0F3C4DB0C339 (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> JSONObject/<BakeAsync>d__108::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__108_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m4E596D386FBB84C92DA9FF995EF5FE7C235451D7 (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method);
// System.Void JSONObject/<PrintAsync>d__110::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__110_U3CU3Em__Finally1_mDD6F4B458A0BBEE0E544F9F01792E0EDBDF42EB7 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___depth0, StringBuilder_t * ___builder1, bool ___pretty2, const RuntimeMethod* method);
// System.Void JSONObject/<PrintAsync>d__110::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__110_System_IDisposable_Dispose_mA90CC52D229E3C1E7A1753F20BF5094A518A4AB6 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> JSONObject/<PrintAsync>d__110::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__110_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m090A067E3FEFA2D75883ECF0BD733CFF47D80964 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method);
// System.Void JSONObject/<StringifyAsync>d__113::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113_U3CU3Em__Finally1_m663BEBB2B51194D6F6E6C14F30037AF4895A104E (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method);
// System.Void JSONObject/<StringifyAsync>d__113::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113_U3CU3Em__Finally2_m3253B19374AF257FC1D6926372946A63F9647504 (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Void JSONObject/<StringifyAsync>d__113::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113_System_IDisposable_Dispose_mA1B228032B652F768CF1A9E978149F6532E33FEC (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> JSONObject/<StringifyAsync>d__113::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__113_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m6E2672DCB3CCE5B3A9606BCACC4C114E0F3BD34F (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL iosLogin(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosLogout();
IL2CPP_EXTERN_C void DEFAULT_CALL iosSubscribeEvent(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosAddTag(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosAddTags(char**, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL iosRemoveTag(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosRemoveTags(char**, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL iosAddToUserAttributeArray(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosSetUserAttribute(char**, char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL iosUnsetUserAttribute(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosRemoveFromUserAttributeArray(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosIncrementUserAttribute(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosIncrementUserAttributeValue(char*, double);
IL2CPP_EXTERN_C void DEFAULT_CALL iosDecrementUserAttribute(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL iosDecrementUserAttributeValue(char*, double);
IL2CPP_EXTERN_C void DEFAULT_CALL iosTrack(char*, char**, char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL iosTrackRevenue(double);
IL2CPP_EXTERN_C void DEFAULT_CALL iosTrackPurchase(char*, double, char*, char**, char*, char*, int32_t);
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
// System.Void AndroidPluginCallback::add_OnSuccess(AndroidPluginCallback/OnSuccessEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_OnSuccess_mD724BCA1775025395DBCF383BEDEDBEA43C8564A (AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * __this, OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * V_0 = NULL;
	OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * V_1 = NULL;
	OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * V_2 = NULL;
	{
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_0 = __this->get_OnSuccess_4();
		V_0 = L_0;
	}

IL_0007:
	{
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_1 = V_0;
		V_1 = L_1;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_2 = V_1;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 *)CastclassSealed((RuntimeObject*)L_4, OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04_il2cpp_TypeInfo_var));
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 ** L_5 = __this->get_address_of_OnSuccess_4();
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_6 = V_2;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_7 = V_1;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 *>((OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_9 = V_0;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 *)L_9) == ((RuntimeObject*)(OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPluginCallback::remove_OnSuccess(AndroidPluginCallback/OnSuccessEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_OnSuccess_m22E68B5403694B73870FDC204DF2247D7D4DF133 (AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * __this, OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * V_0 = NULL;
	OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * V_1 = NULL;
	OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * V_2 = NULL;
	{
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_0 = __this->get_OnSuccess_4();
		V_0 = L_0;
	}

IL_0007:
	{
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_1 = V_0;
		V_1 = L_1;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_2 = V_1;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 *)CastclassSealed((RuntimeObject*)L_4, OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04_il2cpp_TypeInfo_var));
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 ** L_5 = __this->get_address_of_OnSuccess_4();
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_6 = V_2;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_7 = V_1;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 *>((OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_9 = V_0;
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 *)L_9) == ((RuntimeObject*)(OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPluginCallback::add_OnError(AndroidPluginCallback/onErrorEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_add_OnError_m706B145DF2578A0FBE5C7CB88F51F987FCBE78A0 (AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * __this, onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * V_0 = NULL;
	onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * V_1 = NULL;
	onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * V_2 = NULL;
	{
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_0 = __this->get_OnError_5();
		V_0 = L_0;
	}

IL_0007:
	{
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_1 = V_0;
		V_1 = L_1;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_2 = V_1;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 *)CastclassSealed((RuntimeObject*)L_4, onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8_il2cpp_TypeInfo_var));
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 ** L_5 = __this->get_address_of_OnError_5();
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_6 = V_2;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_7 = V_1;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 *>((onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 **)L_5, L_6, L_7);
		V_0 = L_8;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_9 = V_0;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 *)L_9) == ((RuntimeObject*)(onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPluginCallback::remove_OnError(AndroidPluginCallback/onErrorEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_remove_OnError_mE620EE9E205B94A14F214D89696DA6151C6BB96E (AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * __this, onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * V_0 = NULL;
	onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * V_1 = NULL;
	onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * V_2 = NULL;
	{
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_0 = __this->get_OnError_5();
		V_0 = L_0;
	}

IL_0007:
	{
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_1 = V_0;
		V_1 = L_1;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_2 = V_1;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 *)CastclassSealed((RuntimeObject*)L_4, onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8_il2cpp_TypeInfo_var));
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 ** L_5 = __this->get_address_of_OnError_5();
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_6 = V_2;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_7 = V_1;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 *>((onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 **)L_5, L_6, L_7);
		V_0 = L_8;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_9 = V_0;
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 *)L_9) == ((RuntimeObject*)(onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void AndroidPluginCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback__ctor_m824250441EA19F72C22B6EB3062C963F772F4106 (AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9386BFC1C0E64BD062C81BDBD606E5D5DA8E2682);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidPluginCallback() : base("com.adpdigital.push.Callback") { }
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral9386BFC1C0E64BD062C81BDBD606E5D5DA8E2682, /*hidden argument*/NULL);
		// public AndroidPluginCallback() : base("com.adpdigital.push.Callback") { }
		return;
	}
}
// System.Void AndroidPluginCallback::onSuccess(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_onSuccess_m87B12022522B8A63B8FC613707B724775BD6F7E0 (AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral576C579AEC169DD0F9584B16EE8AAC91ABCDD396);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (OnSuccess != null)
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_0 = __this->get_OnSuccess_4();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnSuccess.Invoke(count);
		OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * L_1 = __this->get_OnSuccess_4();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___count0;
		NullCheck(L_1);
		OnSuccessEvent_Invoke_mFF2312ED02279A920A4ABA8E720BF448BC6303C7(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// Debug.Log("ENTER callback onSuccess: " + count);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ___count0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = _stringLiteral576C579AEC169DD0F9584B16EE8AAC91ABCDD396;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = _stringLiteral576C579AEC169DD0F9584B16EE8AAC91ABCDD396;
			goto IL_0021;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0026;
	}

IL_0021:
	{
		NullCheck(G_B4_0);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_1;
	}

IL_0026:
	{
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AndroidPluginCallback::onError(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPluginCallback_onError_m53C9E3B222E2E3F0CFE6F7E6CB4DD82BC92DDC4C (AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33B84F5140C97845927D2B88735C5546BB05DD2);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (OnError != null)
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_0 = __this->get_OnError_5();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnError.Invoke(exception);
		onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * L_1 = __this->get_OnError_5();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = ___exception0;
		NullCheck(L_1);
		onErrorEvent_Invoke_m5F128EA1D514950CB932F8FE617A6494224D9251(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// Debug.Log("ENTER callback onError: " + exception);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ___exception0;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = _stringLiteralD33B84F5140C97845927D2B88735C5546BB05DD2;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = _stringLiteralD33B84F5140C97845927D2B88735C5546BB05DD2;
			goto IL_0021;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0026;
	}

IL_0021:
	{
		NullCheck(G_B4_0);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_5;
		G_B5_1 = G_B4_1;
	}

IL_0026:
	{
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
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
// System.Void ChabokPush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__ctor_mD6EC45F49A0F06FB7FFC12078BE447706B9014A2 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, const RuntimeMethod* method)
{
	{
		// private ChabokPush() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// ChabokPush ChabokPush::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * ChabokPush_GetInstance_m26FEDFC5A1DCBD5428D99B3E28491AA201754A8E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_0 = ((ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields*)il2cpp_codegen_static_fields_for(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var))->get_instance_1();
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		// lock (podlock)
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields*)il2cpp_codegen_static_fields_for(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var))->get_podlock_0();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (instance == null)
			IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
			ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_3 = ((ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields*)il2cpp_codegen_static_fields_for(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var))->get_instance_1();
			if (L_3)
			{
				goto IL_0028;
			}
		}

IL_001e:
		{
			// instance = new ChabokPush();
			ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_4 = (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 *)il2cpp_codegen_object_new(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
			ChabokPush__ctor_mD6EC45F49A0F06FB7FFC12078BE447706B9014A2(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
			((ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields*)il2cpp_codegen_static_fields_for(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var))->set_instance_1(L_4);
		}

IL_0028:
		{
			// }
			IL2CPP_LEAVE(0x34, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_7 = ((ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields*)il2cpp_codegen_static_fields_for(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var))->get_instance_1();
		return L_7;
	}
}
// System.Void ChabokPush::iosLogin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosLogin_mFA15AC45F7C288ED8816074360E89BCF3776ECF4 (String_t* ___userId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___userId0' to native representation
	char* ____userId0_marshaled = NULL;
	____userId0_marshaled = il2cpp_codegen_marshal_string(___userId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosLogin)(____userId0_marshaled);

	// Marshaling cleanup of parameter '___userId0' native representation
	il2cpp_codegen_marshal_free(____userId0_marshaled);
	____userId0_marshaled = NULL;

}
// System.Void ChabokPush::iosLogout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosLogout_mA8C17FCF87028E954169FC4DB22B9A3B3A8488CB (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosLogout)();

}
// System.Void ChabokPush::iosSubscribeEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosSubscribeEvent_m69C6A86FF20DF7463EF7D0F176326DA43BDD4629 (String_t* ___eventName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___eventName0' to native representation
	char* ____eventName0_marshaled = NULL;
	____eventName0_marshaled = il2cpp_codegen_marshal_string(___eventName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosSubscribeEvent)(____eventName0_marshaled);

	// Marshaling cleanup of parameter '___eventName0' native representation
	il2cpp_codegen_marshal_free(____eventName0_marshaled);
	____eventName0_marshaled = NULL;

}
// System.Void ChabokPush::iosAddTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosAddTag_mFB5A168FCC9329FD0CB0685C86B65E12666CE35A (String_t* ___tagName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___tagName0' to native representation
	char* ____tagName0_marshaled = NULL;
	____tagName0_marshaled = il2cpp_codegen_marshal_string(___tagName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosAddTag)(____tagName0_marshaled);

	// Marshaling cleanup of parameter '___tagName0' native representation
	il2cpp_codegen_marshal_free(____tagName0_marshaled);
	____tagName0_marshaled = NULL;

}
// System.Void ChabokPush::iosAddTags(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosAddTags_mBF398D746EEF50AF920ADF461A8F0D0F7B4F4BDF (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tags0, int32_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t);

	// Marshaling of parameter '___tags0' to native representation
	char** ____tags0_marshaled = NULL;
	if (___tags0 != NULL)
	{
		il2cpp_array_size_t ____tags0_Length = (___tags0)->max_length;
		____tags0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____tags0_Length + 1);
		(____tags0_marshaled)[____tags0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____tags0_Length); i++)
		{
			(____tags0_marshaled)[i] = il2cpp_codegen_marshal_string((___tags0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____tags0_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosAddTags)(____tags0_marshaled, ___size1);

	// Marshaling cleanup of parameter '___tags0' native representation
	if (____tags0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____tags0_marshaled_CleanupLoopCount = (___tags0 != NULL) ? (___tags0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____tags0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____tags0_marshaled)[i]);
			(____tags0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____tags0_marshaled);
		____tags0_marshaled = NULL;
	}

}
// System.Void ChabokPush::iosRemoveTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosRemoveTag_m03A0510C084071859645C44EDBA40119D5AC5332 (String_t* ___tagName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___tagName0' to native representation
	char* ____tagName0_marshaled = NULL;
	____tagName0_marshaled = il2cpp_codegen_marshal_string(___tagName0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosRemoveTag)(____tagName0_marshaled);

	// Marshaling cleanup of parameter '___tagName0' native representation
	il2cpp_codegen_marshal_free(____tagName0_marshaled);
	____tagName0_marshaled = NULL;

}
// System.Void ChabokPush::iosRemoveTags(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosRemoveTags_m95CA8FD3EAA77DB5DDFB9D27FACF533A4C90CCC0 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___tags0, int32_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, int32_t);

	// Marshaling of parameter '___tags0' to native representation
	char** ____tags0_marshaled = NULL;
	if (___tags0 != NULL)
	{
		il2cpp_array_size_t ____tags0_Length = (___tags0)->max_length;
		____tags0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____tags0_Length + 1);
		(____tags0_marshaled)[____tags0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____tags0_Length); i++)
		{
			(____tags0_marshaled)[i] = il2cpp_codegen_marshal_string((___tags0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____tags0_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosRemoveTags)(____tags0_marshaled, ___size1);

	// Marshaling cleanup of parameter '___tags0' native representation
	if (____tags0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____tags0_marshaled_CleanupLoopCount = (___tags0 != NULL) ? (___tags0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____tags0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____tags0_marshaled)[i]);
			(____tags0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____tags0_marshaled);
		____tags0_marshaled = NULL;
	}

}
// System.Void ChabokPush::iosAddToUserAttributeArray(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosAddToUserAttributeArray_mC430441D62942C8910BC8904ED143D365505E7DC (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Marshaling of parameter '___value1' to native representation
	char* ____value1_marshaled = NULL;
	____value1_marshaled = il2cpp_codegen_marshal_string(___value1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosAddToUserAttributeArray)(____key0_marshaled, ____value1_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_marshal_free(____value1_marshaled);
	____value1_marshaled = NULL;

}
// System.Void ChabokPush::iosSetUserAttribute(System.String[],System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosSetUserAttribute_m2961F06FFB31C35E3D079982962AFA18F9E35934 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___attrKeys0, String_t* ___attrValues1, String_t* ___attrTypes2, int32_t ___dicSize3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char**, char*, char*, int32_t);

	// Marshaling of parameter '___attrKeys0' to native representation
	char** ____attrKeys0_marshaled = NULL;
	if (___attrKeys0 != NULL)
	{
		il2cpp_array_size_t ____attrKeys0_Length = (___attrKeys0)->max_length;
		____attrKeys0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____attrKeys0_Length + 1);
		(____attrKeys0_marshaled)[____attrKeys0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____attrKeys0_Length); i++)
		{
			(____attrKeys0_marshaled)[i] = il2cpp_codegen_marshal_string((___attrKeys0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____attrKeys0_marshaled = NULL;
	}

	// Marshaling of parameter '___attrValues1' to native representation
	char* ____attrValues1_marshaled = NULL;
	____attrValues1_marshaled = il2cpp_codegen_marshal_string(___attrValues1);

	// Marshaling of parameter '___attrTypes2' to native representation
	char* ____attrTypes2_marshaled = NULL;
	____attrTypes2_marshaled = il2cpp_codegen_marshal_string(___attrTypes2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosSetUserAttribute)(____attrKeys0_marshaled, ____attrValues1_marshaled, ____attrTypes2_marshaled, ___dicSize3);

	// Marshaling cleanup of parameter '___attrKeys0' native representation
	if (____attrKeys0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____attrKeys0_marshaled_CleanupLoopCount = (___attrKeys0 != NULL) ? (___attrKeys0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____attrKeys0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____attrKeys0_marshaled)[i]);
			(____attrKeys0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____attrKeys0_marshaled);
		____attrKeys0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___attrValues1' native representation
	il2cpp_codegen_marshal_free(____attrValues1_marshaled);
	____attrValues1_marshaled = NULL;

	// Marshaling cleanup of parameter '___attrTypes2' native representation
	il2cpp_codegen_marshal_free(____attrTypes2_marshaled);
	____attrTypes2_marshaled = NULL;

}
// System.Void ChabokPush::iosUnsetUserAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosUnsetUserAttribute_m0C162F2C92D5204FC20AF358E135E1F5FFCCD914 (String_t* ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosUnsetUserAttribute)(____key0_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

}
// System.Void ChabokPush::iosRemoveFromUserAttributeArray(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosRemoveFromUserAttributeArray_mA22635A70C07ECC2BEFA32EC70B3275218B77685 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Marshaling of parameter '___value1' to native representation
	char* ____value1_marshaled = NULL;
	____value1_marshaled = il2cpp_codegen_marshal_string(___value1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosRemoveFromUserAttributeArray)(____key0_marshaled, ____value1_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_marshal_free(____value1_marshaled);
	____value1_marshaled = NULL;

}
// System.Void ChabokPush::iosIncrementUserAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosIncrementUserAttribute_mED42377FB0FBD767CB21F930498091500F85DB54 (String_t* ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosIncrementUserAttribute)(____key0_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

}
// System.Void ChabokPush::iosIncrementUserAttributeValue(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosIncrementUserAttributeValue_m4C39D45B3759603E9E0BF50FFBB7D8C3A7226176 (String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, double);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosIncrementUserAttributeValue)(____key0_marshaled, ___value1);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

}
// System.Void ChabokPush::iosDecrementUserAttribute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosDecrementUserAttribute_mF565F42B9F7CC176466EDC8D8D0C5440206AA9F6 (String_t* ___key0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosDecrementUserAttribute)(____key0_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

}
// System.Void ChabokPush::iosDecrementUserAttributeValue(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosDecrementUserAttributeValue_mC15D940D98D42B3A4D4AB4C8D0DC11B91C57758B (String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, double);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosDecrementUserAttributeValue)(____key0_marshaled, ___value1);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

}
// System.Void ChabokPush::iosTrack(System.String,System.String[],System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosTrack_mB97B47D1969765E243EC1E85BA7BFF61079F49D8 (String_t* ___name0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___attrKeys1, String_t* ___attrValues2, String_t* ___attrTypes3, int32_t ___dicSize4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char**, char*, char*, int32_t);

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter '___attrKeys1' to native representation
	char** ____attrKeys1_marshaled = NULL;
	if (___attrKeys1 != NULL)
	{
		il2cpp_array_size_t ____attrKeys1_Length = (___attrKeys1)->max_length;
		____attrKeys1_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____attrKeys1_Length + 1);
		(____attrKeys1_marshaled)[____attrKeys1_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____attrKeys1_Length); i++)
		{
			(____attrKeys1_marshaled)[i] = il2cpp_codegen_marshal_string((___attrKeys1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____attrKeys1_marshaled = NULL;
	}

	// Marshaling of parameter '___attrValues2' to native representation
	char* ____attrValues2_marshaled = NULL;
	____attrValues2_marshaled = il2cpp_codegen_marshal_string(___attrValues2);

	// Marshaling of parameter '___attrTypes3' to native representation
	char* ____attrTypes3_marshaled = NULL;
	____attrTypes3_marshaled = il2cpp_codegen_marshal_string(___attrTypes3);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosTrack)(____name0_marshaled, ____attrKeys1_marshaled, ____attrValues2_marshaled, ____attrTypes3_marshaled, ___dicSize4);

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter '___attrKeys1' native representation
	if (____attrKeys1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____attrKeys1_marshaled_CleanupLoopCount = (___attrKeys1 != NULL) ? (___attrKeys1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____attrKeys1_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____attrKeys1_marshaled)[i]);
			(____attrKeys1_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____attrKeys1_marshaled);
		____attrKeys1_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___attrValues2' native representation
	il2cpp_codegen_marshal_free(____attrValues2_marshaled);
	____attrValues2_marshaled = NULL;

	// Marshaling cleanup of parameter '___attrTypes3' native representation
	il2cpp_codegen_marshal_free(____attrTypes3_marshaled);
	____attrTypes3_marshaled = NULL;

}
// System.Void ChabokPush::iosTrackRevenue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosTrackRevenue_m4C81A9F4369D83A0F650F6C7B65471E056941CF7 (double ___revenue0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosTrackRevenue)(___revenue0);

}
// System.Void ChabokPush::iosTrackPurchase(System.String,System.Double,System.String,System.String[],System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_iosTrackPurchase_m05753A76A6A65734B3F6772E1ECD9636058CECAC (String_t* ___eventName0, double ___revenue1, String_t* ___currency2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___attrKeys3, String_t* ___attrValues4, String_t* ___attrTypes5, int32_t ___dicSize6, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, double, char*, char**, char*, char*, int32_t);

	// Marshaling of parameter '___eventName0' to native representation
	char* ____eventName0_marshaled = NULL;
	____eventName0_marshaled = il2cpp_codegen_marshal_string(___eventName0);

	// Marshaling of parameter '___currency2' to native representation
	char* ____currency2_marshaled = NULL;
	____currency2_marshaled = il2cpp_codegen_marshal_string(___currency2);

	// Marshaling of parameter '___attrKeys3' to native representation
	char** ____attrKeys3_marshaled = NULL;
	if (___attrKeys3 != NULL)
	{
		il2cpp_array_size_t ____attrKeys3_Length = (___attrKeys3)->max_length;
		____attrKeys3_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____attrKeys3_Length + 1);
		(____attrKeys3_marshaled)[____attrKeys3_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____attrKeys3_Length); i++)
		{
			(____attrKeys3_marshaled)[i] = il2cpp_codegen_marshal_string((___attrKeys3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____attrKeys3_marshaled = NULL;
	}

	// Marshaling of parameter '___attrValues4' to native representation
	char* ____attrValues4_marshaled = NULL;
	____attrValues4_marshaled = il2cpp_codegen_marshal_string(___attrValues4);

	// Marshaling of parameter '___attrTypes5' to native representation
	char* ____attrTypes5_marshaled = NULL;
	____attrTypes5_marshaled = il2cpp_codegen_marshal_string(___attrTypes5);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(iosTrackPurchase)(____eventName0_marshaled, ___revenue1, ____currency2_marshaled, ____attrKeys3_marshaled, ____attrValues4_marshaled, ____attrTypes5_marshaled, ___dicSize6);

	// Marshaling cleanup of parameter '___eventName0' native representation
	il2cpp_codegen_marshal_free(____eventName0_marshaled);
	____eventName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___currency2' native representation
	il2cpp_codegen_marshal_free(____currency2_marshaled);
	____currency2_marshaled = NULL;

	// Marshaling cleanup of parameter '___attrKeys3' native representation
	if (____attrKeys3_marshaled != NULL)
	{
		const il2cpp_array_size_t ____attrKeys3_marshaled_CleanupLoopCount = (___attrKeys3 != NULL) ? (___attrKeys3)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____attrKeys3_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____attrKeys3_marshaled)[i]);
			(____attrKeys3_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____attrKeys3_marshaled);
		____attrKeys3_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___attrValues4' native representation
	il2cpp_codegen_marshal_free(____attrValues4_marshaled);
	____attrValues4_marshaled = NULL;

	// Marshaling cleanup of parameter '___attrTypes5' native representation
	il2cpp_codegen_marshal_free(____attrTypes5_marshaled);
	____attrTypes5_marshaled = NULL;

}
// System.Void ChabokPush::_setUserAttribute(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__setUserAttribute_m8366BE2C2F5F9C482447E9E2B6CD6261C30BE7D0 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___attributes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E86767550974737A0B2F15037D37C12BBE9B33);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	{
		// int dicSize = attributes.Count;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___attributes0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546(L_0, /*hidden argument*/Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		V_0 = L_1;
		// string[] keys = new string[dicSize];
		int32_t L_2 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// object[] values = new object[dicSize];
		int32_t L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		// string[] types = new string[dicSize];
		int32_t L_6 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_3 = L_7;
		// for (int i = 0; i < dicSize; i++)
		V_4 = 0;
		goto IL_00b0;
	}

IL_0024:
	{
		// keys[i] = attributes.ElementAt(i).Key;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_1;
		int32_t L_9 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = ___attributes0;
		int32_t L_11 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_12;
		L_12 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_10, L_11, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_12;
		String_t* L_13;
		L_13 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_13);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_13);
		// if (attributes.ElementAt(i).Value is Array)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = ___attributes0;
		int32_t L_15 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_16;
		L_16 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_14, L_15, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_16;
		RuntimeObject * L_17;
		L_17 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_17, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}
	{
		// string[] arr = (string[])attributes.ElementAt(i).Value;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_18 = ___attributes0;
		int32_t L_19 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_20;
		L_20 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_18, L_19, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_20;
		RuntimeObject * L_21;
		L_21 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		V_6 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_21, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// values[i] = string.Join("#%$", arr);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = V_2;
		int32_t L_23 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_6;
		String_t* L_25;
		L_25 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralD8E86767550974737A0B2F15037D37C12BBE9B33, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_25);
		// }
		goto IL_0090;
	}

IL_007b:
	{
		// values[i] = attributes.ElementAt(i).Value;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = V_2;
		int32_t L_27 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_28 = ___attributes0;
		int32_t L_29 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_30;
		L_30 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_28, L_29, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_30;
		RuntimeObject * L_31;
		L_31 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_31);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject *)L_31);
	}

IL_0090:
	{
		// types[i] = variableType(attributes.ElementAt(i).Value);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = V_3;
		int32_t L_33 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_34 = ___attributes0;
		int32_t L_35 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_36;
		L_36 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_34, L_35, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_36;
		RuntimeObject * L_37;
		L_37 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = ChabokPush_variableType_mC43CE69FF3092AA116AC2852E0C248B037865041(L_37, /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_38);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (String_t*)L_38);
		// for (int i = 0; i < dicSize; i++)
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b0:
	{
		// for (int i = 0; i < dicSize; i++)
		int32_t L_40 = V_4;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0024;
		}
	}
	{
		// iosSetUserAttribute(keys, string.Join(",", values), string.Join(",", types), dicSize);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = V_2;
		String_t* L_44;
		L_44 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_43, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = V_3;
		String_t* L_46;
		L_46 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_45, /*hidden argument*/NULL);
		int32_t L_47 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosSetUserAttribute_m2961F06FFB31C35E3D079982962AFA18F9E35934(L_42, L_44, L_46, L_47, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::_track(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__track_m2FC29C80BFE857193263533723992DCC3950C949 (String_t* ___name0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___attributes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E86767550974737A0B2F15037D37C12BBE9B33);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	{
		// int dicSize = attributes.Count;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___attributes1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546(L_0, /*hidden argument*/Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		V_0 = L_1;
		// string[] keys = new string[dicSize];
		int32_t L_2 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// object[] values = new object[dicSize];
		int32_t L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		// string[] types = new string[dicSize];
		int32_t L_6 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_3 = L_7;
		// for (int i = 0; i < dicSize; i++)
		V_4 = 0;
		goto IL_00b0;
	}

IL_0024:
	{
		// keys[i] = attributes.ElementAt(i).Key;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_1;
		int32_t L_9 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = ___attributes1;
		int32_t L_11 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_12;
		L_12 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_10, L_11, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_12;
		String_t* L_13;
		L_13 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_13);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_13);
		// if (attributes.ElementAt(i).Value is Array)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = ___attributes1;
		int32_t L_15 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_16;
		L_16 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_14, L_15, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_16;
		RuntimeObject * L_17;
		L_17 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_17, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}
	{
		// string[] arr = (string[])attributes.ElementAt(i).Value;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_18 = ___attributes1;
		int32_t L_19 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_20;
		L_20 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_18, L_19, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_20;
		RuntimeObject * L_21;
		L_21 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		V_6 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_21, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// values[i] = string.Join("#%$", arr);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = V_2;
		int32_t L_23 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_6;
		String_t* L_25;
		L_25 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralD8E86767550974737A0B2F15037D37C12BBE9B33, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_25);
		// }
		goto IL_0090;
	}

IL_007b:
	{
		// values[i] = attributes.ElementAt(i).Value;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = V_2;
		int32_t L_27 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_28 = ___attributes1;
		int32_t L_29 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_30;
		L_30 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_28, L_29, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_30;
		RuntimeObject * L_31;
		L_31 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_31);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject *)L_31);
	}

IL_0090:
	{
		// types[i] = variableType(attributes.ElementAt(i).Value);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = V_3;
		int32_t L_33 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_34 = ___attributes1;
		int32_t L_35 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_36;
		L_36 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_34, L_35, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_36;
		RuntimeObject * L_37;
		L_37 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = ChabokPush_variableType_mC43CE69FF3092AA116AC2852E0C248B037865041(L_37, /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_38);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (String_t*)L_38);
		// for (int i = 0; i < dicSize; i++)
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b0:
	{
		// for (int i = 0; i < dicSize; i++)
		int32_t L_40 = V_4;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0024;
		}
	}
	{
		// iosTrack(name, keys, string.Join(",", values), string.Join(",", types), dicSize);
		String_t* L_42 = ___name0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = V_2;
		String_t* L_45;
		L_45 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_44, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = V_3;
		String_t* L_47;
		L_47 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_46, /*hidden argument*/NULL);
		int32_t L_48 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosTrack_mB97B47D1969765E243EC1E85BA7BFF61079F49D8(L_42, L_43, L_45, L_47, L_48, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::_trackPurchase(System.String,System.Double,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__trackPurchase_mC1D50A81DF163A56B0884D6882169E33DDC6B25D (String_t* ___eventName0, double ___revenue1, String_t* ___currency2, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___attributes3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E86767550974737A0B2F15037D37C12BBE9B33);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_3 = NULL;
	int32_t V_4 = 0;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	{
		// int dicSize = attributes.Count;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___attributes3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546(L_0, /*hidden argument*/Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		V_0 = L_1;
		// string[] keys = new string[dicSize];
		int32_t L_2 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// object[] values = new object[dicSize];
		int32_t L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		// string[] types = new string[dicSize];
		int32_t L_6 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_3 = L_7;
		// for (int i = 0; i < dicSize; i++)
		V_4 = 0;
		goto IL_00b0;
	}

IL_0024:
	{
		// keys[i] = attributes.ElementAt(i).Key;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_1;
		int32_t L_9 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = ___attributes3;
		int32_t L_11 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_12;
		L_12 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_10, L_11, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_12;
		String_t* L_13;
		L_13 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_13);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_13);
		// if (attributes.ElementAt(i).Value is Array)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = ___attributes3;
		int32_t L_15 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_16;
		L_16 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_14, L_15, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_16;
		RuntimeObject * L_17;
		L_17 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_17, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}
	{
		// string[] arr = (string[])attributes.ElementAt(i).Value;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_18 = ___attributes3;
		int32_t L_19 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_20;
		L_20 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_18, L_19, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_20;
		RuntimeObject * L_21;
		L_21 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		V_6 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_21, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// values[i] = string.Join("#%$", arr);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = V_2;
		int32_t L_23 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_6;
		String_t* L_25;
		L_25 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralD8E86767550974737A0B2F15037D37C12BBE9B33, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject *)L_25);
		// }
		goto IL_0090;
	}

IL_007b:
	{
		// values[i] = attributes.ElementAt(i).Value;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = V_2;
		int32_t L_27 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_28 = ___attributes3;
		int32_t L_29 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_30;
		L_30 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_28, L_29, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_30;
		RuntimeObject * L_31;
		L_31 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_31);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject *)L_31);
	}

IL_0090:
	{
		// types[i] = variableType(attributes.ElementAt(i).Value);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = V_3;
		int32_t L_33 = V_4;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_34 = ___attributes3;
		int32_t L_35 = V_4;
		KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_36;
		L_36 = Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571(L_34, L_35, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_mBE06D6C860398B09BB6B3BC8C8F707519E6A8571_RuntimeMethod_var);
		V_5 = L_36;
		RuntimeObject * L_37;
		L_37 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = ChabokPush_variableType_mC43CE69FF3092AA116AC2852E0C248B037865041(L_37, /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_38);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (String_t*)L_38);
		// for (int i = 0; i < dicSize; i++)
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b0:
	{
		// for (int i = 0; i < dicSize; i++)
		int32_t L_40 = V_4;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0024;
		}
	}
	{
		// iosTrackPurchase(eventName, revenue, currency, keys, string.Join(",", values), string.Join(",", types), dicSize);
		String_t* L_42 = ___eventName0;
		double L_43 = ___revenue1;
		String_t* L_44 = ___currency2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = V_2;
		String_t* L_47;
		L_47 = String_Join_m7BEA4678919FD9393062F8E8B5328A4DBB1A95E5(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_46, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = V_3;
		String_t* L_49;
		L_49 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_48, /*hidden argument*/NULL);
		int32_t L_50 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosTrackPurchase_m05753A76A6A65734B3F6772E1ECD9636058CECAC(L_42, L_43, L_44, L_45, L_47, L_49, L_50, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String ChabokPush::variableType(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChabokPush_variableType_mC43CE69FF3092AA116AC2852E0C248B037865041 (RuntimeObject * ___variable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D7B559D2443B7B91D8C57B59220774176D04300);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (variable is null) return "";
		RuntimeObject * L_0 = ___variable0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (variable is null) return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0009:
	{
		// if (variable is string) return "string";
		RuntimeObject * L_1 = ___variable0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		// if (variable is string) return "string";
		return _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
	}

IL_0017:
	{
		// else if (variable is int) return "int";
		RuntimeObject * L_2 = ___variable0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		// else if (variable is int) return "int";
		return _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
	}

IL_0025:
	{
		// else if (variable is float) return "float";
		RuntimeObject * L_3 = ___variable0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		// else if (variable is float) return "float";
		return _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
	}

IL_0033:
	{
		// else if (variable is double) return "double";
		RuntimeObject * L_4 = ___variable0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		// else if (variable is double) return "double";
		return _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
	}

IL_0041:
	{
		// else if (variable is bool) return "boolean";
		RuntimeObject * L_5 = ___variable0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_004f;
		}
	}
	{
		// else if (variable is bool) return "boolean";
		return _stringLiteralEC8D2B1EC3E954083D64BF4DDCCC9E46BE24B490;
	}

IL_004f:
	{
		// else if (variable is DateTime) return "date";
		RuntimeObject * L_6 = ___variable0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))
		{
			goto IL_005d;
		}
	}
	{
		// else if (variable is DateTime) return "date";
		return _stringLiteral1D7B559D2443B7B91D8C57B59220774176D04300;
	}

IL_005d:
	{
		// else if (variable is Array) return "array";
		RuntimeObject * L_7 = ___variable0;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_7, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		// else if (variable is Array) return "array";
		return _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
	}

IL_006b:
	{
		// else return "string";
		return _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
	}
}
// System.Void ChabokPush::Login(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_Login_m74957D1F851F54EAF62236D5A081053FFE3A1CA4 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosLogin(userId);
		String_t* L_0 = ___userId0;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosLogin_mFA15AC45F7C288ED8816074360E89BCF3776ECF4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::Logout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_Logout_mCE629D3B2984F83B0E787FCD638F88067344C147 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosLogout();
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosLogout_mA8C17FCF87028E954169FC4DB22B9A3B3A8488CB(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::AddTag(System.String,AndroidPluginCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_AddTag_mA3C018FFC5CBBFBC066883E0738F1797F9C99E31 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___tagName0, AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosAddTag(tagName);
		String_t* L_0 = ___tagName0;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosAddTag_mFB5A168FCC9329FD0CB0685C86B65E12666CE35A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::RemoveTag(System.String,AndroidPluginCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_RemoveTag_mBA0660A6AECB4BACEDA7F8FDC4DD5C6A1A0EE54C (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___tagName0, AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosRemoveTag(tagName);
		String_t* L_0 = ___tagName0;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosRemoveTag_m03A0510C084071859645C44EDBA40119D5AC5332(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::SetUserAttributes(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_SetUserAttributes_m07C0D80DD48C56D469496E6393BC9AE9CDBA2834 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___attributes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _setUserAttribute(attributes);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___attributes0;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush__setUserAttribute_m8366BE2C2F5F9C482447E9E2B6CD6261C30BE7D0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::IncrementUserAttribute(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_IncrementUserAttribute_m1685634A22A0531928A2CEDD536F613BEF469274 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___attribute0, double ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosIncrementUserAttributeValue(attribute, value);
		String_t* L_0 = ___attribute0;
		double L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosIncrementUserAttributeValue_m4C39D45B3759603E9E0BF50FFBB7D8C3A7226176(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::DecrementUserAttribute(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_DecrementUserAttribute_m1C1315FE16AFB989D9D1303D7C3483ECB3BF94B8 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___attribute0, double ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosDecrementUserAttributeValue(attribute, value);
		String_t* L_0 = ___attribute0;
		double L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosDecrementUserAttributeValue_mC15D940D98D42B3A4D4AB4C8D0DC11B91C57758B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::AddToUserAttributeArray(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_AddToUserAttributeArray_mE9AECAE9B2762B69C35B1338753E474FE8B2F4BC (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosAddToUserAttributeArray(key, value);
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosAddToUserAttributeArray_mC430441D62942C8910BC8904ED143D365505E7DC(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::RemoveFromUserAttributeArray(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_RemoveFromUserAttributeArray_m2858929DD18FE9D45D6D9B0CE262EE8B273E6E3E (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosRemoveFromUserAttributeArray(key, value);
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosRemoveFromUserAttributeArray_mA22635A70C07ECC2BEFA32EC70B3275218B77685(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::Track(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_Track_mA98231BFF3F781875A29D1131646886930A57AFD (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___title0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _track(title, eventData);
		String_t* L_0 = ___title0;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush__track_m2FC29C80BFE857193263533723992DCC3950C949(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::TrackRevenue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_TrackRevenue_m6A4C7699099B3D13BAAA060E81345CAEDC1CA942 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iosTrackRevenue(value);
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_iosTrackRevenue_m4C81A9F4369D83A0F650F6C7B65471E056941CF7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::TrackPurchase(System.String,System.Double,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush_TrackPurchase_m6F2C40F93614899622B2248C9892C65617399418 (ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * __this, String_t* ___title0, double ___value1, String_t* ___currency2, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___purchaseData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m23CCEE945E50B56BDDD26F5985B089157DC687A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D7E10FB1136637DF3EEA7E332D50E75ECCFAE35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (purchaseData.ContainsKey("currency")) purchaseData.Remove("currency");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___purchaseData3;
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710(L_0, _stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6, /*hidden argument*/Dictionary_2_ContainsKey_m660B1C18318BE8EEC0B242140281274407F20710_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (purchaseData.ContainsKey("currency")) purchaseData.Remove("currency");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = ___purchaseData3;
		NullCheck(L_2);
		bool L_3;
		L_3 = Dictionary_2_Remove_m23CCEE945E50B56BDDD26F5985B089157DC687A5(L_2, _stringLiteralAB3E708924BFB9D6B641A4B9F82FE5FE57F307B6, /*hidden argument*/Dictionary_2_Remove_m23CCEE945E50B56BDDD26F5985B089157DC687A5_RuntimeMethod_var);
	}

IL_001b:
	{
		// _trackPurchase(title, value, "IRR", purchaseData);
		String_t* L_4 = ___title0;
		double L_5 = ___value1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = ___purchaseData3;
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush__trackPurchase_mC1D50A81DF163A56B0884D6882169E33DDC6B25D(L_4, L_5, _stringLiteral5D7E10FB1136637DF3EEA7E332D50E75ECCFAE35, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChabokPush::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChabokPush__cctor_mA564927A8D7574D441D0E83E8455F21C4894E5EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object podlock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields*)il2cpp_codegen_static_fields_for(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var))->set_podlock_0(L_0);
		// private static ChabokPush instance = null;
		((ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_StaticFields*)il2cpp_codegen_static_fields_for(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var))->set_instance_1((ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 *)NULL);
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
// System.Boolean JSONObject::get_isContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_isContainer_mE8E9995704509192E5B1958110C461BAC07B8C67 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool isContainer { get { return (type == Type.ARRAY || type == Type.OBJECT); } }
		int32_t L_0 = __this->get_type_6();
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_type_6();
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Int32 JSONObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (list == null)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000a:
	{
		// return list.Count;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = __this->get_list_7();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_1, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		return L_2;
	}
}
// System.Single JSONObject::get_f()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONObject_get_f_mFCC79E57FDD8A430708E5B39CB5E54EEE9F4992E (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// return n;
		float L_0 = __this->get_n_10();
		return L_0;
	}
}
// JSONObject JSONObject::get_nullJO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_nullJO_m0D646D2F8C911B89621E263C61A821DCCD792214 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JSONObject nullJO { get { return Create(Type.NULL); } }   
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D(0, /*hidden argument*/NULL);
		return L_0;
	}
}
// JSONObject JSONObject::get_obj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_obj_m3D2F576AAA7F2C22058E1D9B8D06514D1CE76DAD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JSONObject obj { get { return Create(Type.OBJECT); } }        
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D(3, /*hidden argument*/NULL);
		return L_0;
	}
}
// JSONObject JSONObject::get_arr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_arr_mF5F58F56AC6036E10D447CF19C8ED64EE1A049A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JSONObject arr { get { return Create(Type.ARRAY); } }     
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D(4, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void JSONObject::.ctor(JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m3F4051FBBEFCF51ECCCB431AF81C21A6D9603B37 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONObject(Type t)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = t;
		int32_t L_0 = ___t0;
		__this->set_type_6(L_0);
		int32_t L_1 = ___t0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___t0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0037;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_3, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_3);
		// break;
		return;
	}

IL_0021:
	{
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_4 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_4, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_4);
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_5, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_5);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mA8F45F91955DFCD22F3497C487E05FFB457DA1A5 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___b0, const RuntimeMethod* method)
{
	{
		// public JSONObject(bool b)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.BOOL;
		__this->set_type_6(5);
		// this.b = b;
		bool L_0 = ___b0;
		__this->set_b_13(L_0);
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mB76245AD61F313859EAB4BB02F6762E2478D7712 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		// public JSONObject(float f)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// n = f;
		float L_0 = ___f0;
		__this->set_n_10(L_0);
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mBE6DB3AE057F8ADB880F7B2E62FFDA98A39A77EE (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// public JSONObject(int i)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// this.i = i;
		int32_t L_0 = ___i0;
		__this->set_i_12(((int64_t)((int64_t)L_0)));
		// useInt = true;
		__this->set_useInt_11((bool)1);
		// n = i;
		int32_t L_1 = ___i0;
		__this->set_n_10(((float)((float)L_1)));
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m94F9DBC5031AE589A3532B23131341954C32ED8F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int64_t ___l0, const RuntimeMethod* method)
{
	{
		// public JSONObject(long l)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// i = l;
		int64_t L_0 = ___l0;
		__this->set_i_12(L_0);
		// useInt = true;
		__this->set_useInt_11((bool)1);
		// n = l;
		int64_t L_1 = ___l0;
		__this->set_n_10(((float)((float)L_1)));
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mA2BE23A318B156071B9EF78B86DD2FFAA8298D8C (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// public JSONObject(Dictionary<string, string> dic)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.OBJECT;
		__this->set_type_6(3);
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_0);
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_1, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_1);
		// foreach (KeyValuePair<string, string> kvp in dic)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_2 = ___dic0;
		NullCheck(L_2);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_3;
		L_3 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005d;
		}

IL_002c:
		{
			// foreach (KeyValuePair<string, string> kvp in dic)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_4;
			L_4 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_1 = L_4;
			// keys.Add(kvp.Key);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = __this->get_keys_8();
			String_t* L_6;
			L_6 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			NullCheck(L_5);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, L_6, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// list.Add(CreateStringObject(kvp.Value));
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_7 = __this->get_list_7();
			String_t* L_8;
			L_8 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9;
			L_9 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_7, L_9, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		}

IL_005d:
		{
			// foreach (KeyValuePair<string, string> kvp in dic)
			bool L_10;
			L_10 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_002c;
			}
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x76, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x76, IL_0076)
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m99526F073BE03527E424E3A3D44419524520A685 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * ___dic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// public JSONObject(Dictionary<string, JSONObject> dic)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.OBJECT;
		__this->set_type_6(3);
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_0);
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_1, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_1);
		// foreach (KeyValuePair<string, JSONObject> kvp in dic)
		Dictionary_2_t8D16B89417DBB065834E3D3A514493F231F5087F * L_2 = ___dic0;
		NullCheck(L_2);
		Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033  L_3;
		L_3 = Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m4EBF914F9BDA85AAF1017608946F83B5D0CB392E_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_002c:
		{
			// foreach (KeyValuePair<string, JSONObject> kvp in dic)
			KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464  L_4;
			L_4 = Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_inline((Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2CACA29BDF60CD27C12E402A5C91A0E2954550A0_RuntimeMethod_var);
			V_1 = L_4;
			// keys.Add(kvp.Key);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = __this->get_keys_8();
			String_t* L_6;
			L_6 = KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_inline((KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m4BF4E7D9E3BE57B982A403C1AA5144962A065A75_RuntimeMethod_var);
			NullCheck(L_5);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, L_6, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// list.Add(kvp.Value);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_7 = __this->get_list_7();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
			L_8 = KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_inline((KeyValuePair_2_t4140A3D2CCD94C85AD96660948A0C670123AE464 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m2642B52554EFD93A21D9591EC5FA523844453EB4_RuntimeMethod_var);
			NullCheck(L_7);
			List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_7, L_8, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		}

IL_0058:
		{
			// foreach (KeyValuePair<string, JSONObject> kvp in dic)
			bool L_9;
			L_9 = Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56((Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m217D5D7E8406422DB793EC2B6F914101D73A7A56_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_002c;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E((Enumerator_t75A837ECC6476E06EFA786B42C955D4D4F9E8033 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m99F282CCCADABD18013C7C39BEB31BD5E60D3F2E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x71, IL_0071)
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m75891E139819C16F694D11DEBFBF045165960AAE (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content0, const RuntimeMethod* method)
{
	{
		// public JSONObject(AddJSONContents content)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// content.Invoke(this);
		AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * L_0 = ___content0;
		NullCheck(L_0);
		AddJSONContents_Invoke_m5EB8C5BFCDB131C8317BE615AE64AB300FF77008(L_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::.ctor(JSONObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m3D456512E7A14D5A25FBBC6E2CCF4F3517C92331 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* ___objs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONObject(JSONObject[] objs)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// type = Type.ARRAY;
		__this->set_type_6(4);
		// list = new List<JSONObject>(objs);
		JSONObjectU5BU5D_tFB4FA33E0B9559355A1E9D5BFE4DBF2B68B7B96E* L_0 = ___objs0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3(L_1, (RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/List_1__ctor_m4853D5C6453425D8A779EC4A51C90D5BE068A8F3_RuntimeMethod_var);
		__this->set_list_7(L_1);
		// }
		return;
	}
}
// JSONObject JSONObject::StringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_StringObject_mB7B0A6791AE600E2D61D41D0C706BB7CF8C33D50 (String_t* ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JSONObject StringObject(string val) { return CreateStringObject(val); }
		String_t* L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void JSONObject::Absorb(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Absorb_mDBE9D614A08AACFFBAA3CBC8AEF44C34C9C0C208 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// list.AddRange(obj.list);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = ___obj0;
		NullCheck(L_1);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_2 = L_1->get_list_7();
		NullCheck(L_0);
		List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1(L_0, L_2, /*hidden argument*/List_1_AddRange_m8CAAD59303D53F10C2B7DDD2C88C2AF7D0F4ADC1_RuntimeMethod_var);
		// keys.AddRange(obj.keys);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = __this->get_keys_8();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = ___obj0;
		NullCheck(L_4);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = L_4->get_keys_8();
		NullCheck(L_3);
		List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C(L_3, L_5, /*hidden argument*/List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
		// str = obj.str;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_str_9();
		__this->set_str_9(L_7);
		// n = obj.n;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = ___obj0;
		NullCheck(L_8);
		float L_9 = L_8->get_n_10();
		__this->set_n_10(L_9);
		// useInt = obj.useInt;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10 = ___obj0;
		NullCheck(L_10);
		bool L_11 = L_10->get_useInt_11();
		__this->set_useInt_11(L_11);
		// i = obj.i;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = ___obj0;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_i_12();
		__this->set_i_12(L_13);
		// b = obj.b;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_14 = ___obj0;
		NullCheck(L_14);
		bool L_15 = L_14->get_b_13();
		__this->set_b_13(L_15);
		// type = obj.type;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16 = ___obj0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_type_6();
		__this->set_type_6(L_17);
		// }
		return;
	}
}
// JSONObject JSONObject::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONObject();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *)il2cpp_codegen_object_new(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAD15D168DB9973AE0F2B2954CE31C2CBC772D2C8(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// JSONObject JSONObject::Create(JSONObject/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m168E1FB446E57A739497DA9DE25269CF9C224B7D (int32_t ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		V_0 = L_0;
		// obj.type = t;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = V_0;
		int32_t L_2 = ___t0;
		NullCheck(L_1);
		L_1->set_type_6(L_2);
		int32_t L_3 = ___t0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___t0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0038;
		}
	}
	{
		// obj.list = new List<JSONObject>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = V_0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_6, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->set_list_7(L_6);
		// break;
		goto IL_0038;
	}

IL_0022:
	{
		// obj.list = new List<JSONObject>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_7 = V_0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_8 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_8, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_list_7(L_8);
		// obj.keys = new List<string>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_10, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_keys_8(L_10);
	}

IL_0038:
	{
		// return obj;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_11 = V_0;
		return L_11;
	}
}
// JSONObject JSONObject::Create(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108 (bool ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.BOOL;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(5);
		// obj.b = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		bool L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_b_13(L_3);
		// return obj;
		return L_2;
	}
}
// JSONObject JSONObject::Create(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4 (float ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.NUMBER;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(2);
		// obj.n = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		float L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_n_10(L_3);
		// return obj;
		return L_2;
	}
}
// JSONObject JSONObject::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2 (int32_t ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.NUMBER;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(2);
		// obj.n = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		int32_t L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_n_10(((float)((float)L_3)));
		// obj.useInt = true;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = L_2;
		NullCheck(L_4);
		L_4->set_useInt_11((bool)1);
		// obj.i = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = L_4;
		int32_t L_6 = ___val0;
		NullCheck(L_5);
		L_5->set_i_12(((int64_t)((int64_t)L_6)));
		// return obj;
		return L_5;
	}
}
// JSONObject JSONObject::Create(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m344E63B4E4A74F15284F157069013679E9F9BC0A (int64_t ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.NUMBER;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(2);
		// obj.n = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		int64_t L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_n_10(((float)((float)L_3)));
		// obj.useInt = true;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = L_2;
		NullCheck(L_4);
		L_4->set_useInt_11((bool)1);
		// obj.i = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = L_4;
		int64_t L_6 = ___val0;
		NullCheck(L_5);
		L_5->set_i_12(L_6);
		// return obj;
		return L_5;
	}
}
// JSONObject JSONObject::CreateStringObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02 (String_t* ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.type = Type.STRING;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(1);
		// obj.str = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		String_t* L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_str_9(L_3);
		// return obj;
		return L_2;
	}
}
// JSONObject JSONObject::CreateBakedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_CreateBakedObject_mD1360B3E5E493D5647B64617F0E894A42307FCDD (String_t* ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject bakedObject = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// bakedObject.type = Type.BAKED;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_type_6(6);
		// bakedObject.str = val;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = L_1;
		String_t* L_3 = ___val0;
		NullCheck(L_2);
		L_2->set_str_9(L_3);
		// return bakedObject;
		return L_2;
	}
}
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_m6869838BC7DFE7BA8C73FF0CDC7DAB93B25F3C73 (String_t* ___val0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		// obj.Parse(val, maxDepth, storeExcessLevels, strict);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = L_0;
		String_t* L_2 = ___val0;
		int32_t L_3 = ___maxDepth1;
		bool L_4 = ___storeExcessLevels2;
		bool L_5 = ___strict3;
		NullCheck(L_1);
		JSONObject_Parse_m37AF1F1D86E0D2CE4873C410679DD9F003AD793B(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// return obj;
		return L_1;
	}
}
// JSONObject JSONObject::Create(JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_mAB52FC035F2BB8998E2F36C840605B466157A88E (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		V_0 = L_0;
		// content.Invoke(obj);
		AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * L_1 = ___content0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = V_0;
		NullCheck(L_1);
		AddJSONContents_Invoke_m5EB8C5BFCDB131C8317BE615AE64AB300FF77008(L_1, L_2, /*hidden argument*/NULL);
		// return obj;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = V_0;
		return L_3;
	}
}
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Create_mF957FF6A085214A0CEFA80D3AAB55815586685C2 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_0 = NULL;
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// JSONObject obj = Create();
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObject_Create_m56FF68A8DD4EBDBB25F11DA3D69853FDF544EEDE(/*hidden argument*/NULL);
		V_0 = L_0;
		// obj.type = Type.OBJECT;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_type_6(3);
		// obj.keys = new List<string>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_3, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_keys_8(L_3);
		// obj.list = new List<JSONObject>();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = V_0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_5 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_5, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_list_7(L_5);
		// foreach (KeyValuePair<string, string> kvp in dic)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = ___dic0;
		NullCheck(L_6);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_7;
		L_7 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_1 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005d;
		}

IL_002c:
		{
			// foreach (KeyValuePair<string, string> kvp in dic)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_8;
			L_8 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_2 = L_8;
			// obj.keys.Add(kvp.Key);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = V_0;
			NullCheck(L_9);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = L_9->get_keys_8();
			String_t* L_11;
			L_11 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			NullCheck(L_10);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_10, L_11, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// obj.list.Add(CreateStringObject(kvp.Value));
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = V_0;
			NullCheck(L_12);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_13 = L_12->get_list_7();
			String_t* L_14;
			L_14 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15;
			L_15 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_13, L_15, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		}

IL_005d:
		{
			// foreach (KeyValuePair<string, string> kvp in dic)
			bool L_16;
			L_16 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_002c;
			}
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x76, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x76, IL_0076)
	}

IL_0076:
	{
		// return obj;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_17 = V_0;
		return L_17;
	}
}
// System.Void JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mAD15D168DB9973AE0F2B2954CE31C2CBC772D2C8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public JSONObject() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public JSONObject() { }
		return;
	}
}
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m2066661B920923AFFFC27D7682DBC76E6A13F9CB (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method)
{
	{
		// public JSONObject(string str, int maxDepth = -2, bool storeExcessLevels = false, bool strict = false)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Parse(str, maxDepth, storeExcessLevels, strict);
		String_t* L_0 = ___str0;
		int32_t L_1 = ___maxDepth1;
		bool L_2 = ___storeExcessLevels2;
		bool L_3 = ___strict3;
		JSONObject_Parse_m37AF1F1D86E0D2CE4873C410679DD9F003AD793B(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Parse_m37AF1F1D86E0D2CE4873C410679DD9F003AD793B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88FA4D914079998FE2AD6F824512882FA16FFAD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57F692809412BBB13F764D9044820BC70823E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	String_t* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B65_0 = NULL;
	List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * G_B65_1 = NULL;
	String_t* G_B64_0 = NULL;
	List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * G_B64_1 = NULL;
	int32_t G_B66_0 = 0;
	String_t* G_B66_1 = NULL;
	List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * G_B66_2 = NULL;
	{
		// if (!string.IsNullOrEmpty(str))
		String_t* L_0 = ___str0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0352;
		}
	}
	{
		// str = str.Trim(WHITESPACE);
		String_t* L_2 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_WHITESPACE_5();
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_2, L_3, /*hidden argument*/NULL);
		___str0 = L_4;
		// if (strict)
		bool L_5 = ___strict3;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// if (str[0] != '[' && str[0] != '{')
		String_t* L_6 = ___str0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)91))))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_8 = ___str0;
		NullCheck(L_8);
		Il2CppChar L_9;
		L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)123))))
		{
			goto IL_0044;
		}
	}
	{
		// type = Type.NULL;
		__this->set_type_6(0);
		//                     Debug.LogWarning
		// #else
		//                     Debug.WriteLine
		// #endif
		//                         ("Improper (strict) JSON formatting.  First character must be [ or {");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral88FA4D914079998FE2AD6F824512882FA16FFAD3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// if (str.Length > 0)
		String_t* L_10 = ___str0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_034a;
		}
	}
	{
		// if (string.Compare(str, "true", true) == 0)
		String_t* L_12 = ___str0;
		int32_t L_13;
		L_13 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62(L_12, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, (bool)1, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006d;
		}
	}
	{
		// type = Type.BOOL;
		__this->set_type_6(5);
		// b = true;
		__this->set_b_13((bool)1);
		// }
		return;
	}

IL_006d:
	{
		// else if (string.Compare(str, "false", true) == 0)
		String_t* L_14 = ___str0;
		int32_t L_15;
		L_15 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62(L_14, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, (bool)1, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_008a;
		}
	}
	{
		// type = Type.BOOL;
		__this->set_type_6(5);
		// b = false;
		__this->set_b_13((bool)0);
		// }
		return;
	}

IL_008a:
	{
		// else if (string.Compare(str, "null", true) == 0)
		String_t* L_16 = ___str0;
		int32_t L_17;
		L_17 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62(L_16, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, (bool)1, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00a0;
		}
	}
	{
		// type = Type.NULL;
		__this->set_type_6(0);
		// }
		return;
	}

IL_00a0:
	{
		// else if (str == INFINITY)
		String_t* L_18 = ___str0;
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralA57F692809412BBB13F764D9044820BC70823E64, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c0;
		}
	}
	{
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// n = float.PositiveInfinity;
		__this->set_n_10((std::numeric_limits<float>::infinity()));
		// }
		return;
	}

IL_00c0:
	{
		// else if (str == NEGINFINITY)
		String_t* L_20 = ___str0;
		bool L_21;
		L_21 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, _stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00e0;
		}
	}
	{
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// n = float.NegativeInfinity;
		__this->set_n_10((-std::numeric_limits<float>::infinity()));
		// }
		return;
	}

IL_00e0:
	{
		// else if (str == NaN)
		String_t* L_22 = ___str0;
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0100;
		}
	}
	{
		// type = Type.NUMBER;
		__this->set_type_6(2);
		// n = float.NaN;
		__this->set_n_10((std::numeric_limits<float>::quiet_NaN()));
		// }
		return;
	}

IL_0100:
	{
		// else if (str[0] == '"')
		String_t* L_24 = ___str0;
		NullCheck(L_24);
		Il2CppChar L_25;
		L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_24, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0128;
		}
	}
	{
		// type = Type.STRING;
		__this->set_type_6(1);
		// this.str = str.Substring(1, str.Length - 2);
		String_t* L_26 = ___str0;
		String_t* L_27 = ___str0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_29;
		L_29 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)2)), /*hidden argument*/NULL);
		__this->set_str_9(L_29);
		// }
		return;
	}

IL_0128:
	{
		// int tokenTmp = 1;
		V_0 = 1;
		// int offset = 0;
		V_1 = 0;
		// switch (str[offset])
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_30, L_31, /*hidden argument*/NULL);
		V_6 = L_32;
		Il2CppChar L_33 = V_6;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)91))))
		{
			goto IL_0160;
		}
	}
	{
		Il2CppChar L_34 = V_6;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0174;
		}
	}
	{
		// type = Type.OBJECT;
		__this->set_type_6(3);
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_35, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_35);
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_36 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_36, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_36);
		// break;
		goto IL_01cf;
	}

IL_0160:
	{
		// type = Type.ARRAY;
		__this->set_type_6(4);
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_37 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_37, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_37);
		// break;
		goto IL_01cf;
	}

IL_0174:
	{
	}

IL_0175:
	try
	{ // begin try (depth: 1)
		{
			// n = System.Convert.ToSingle(str, CultureInfo.InvariantCulture);
			String_t* L_38 = ___str0;
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_39;
			L_39 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
			float L_40;
			L_40 = Convert_ToSingle_mBC08244C02CF34E9B4D669CA6EF13DA5C92EA23B(L_38, L_39, /*hidden argument*/NULL);
			__this->set_n_10(L_40);
			// if (!str.Contains("."))
			String_t* L_41 = ___str0;
			NullCheck(L_41);
			bool L_42;
			L_42 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_41, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
			if (L_42)
			{
				goto IL_01ab;
			}
		}

IL_0193:
		{
			// i = System.Convert.ToInt64(str, CultureInfo.InvariantCulture);
			String_t* L_43 = ___str0;
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_44;
			L_44 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
			int64_t L_45;
			L_45 = Convert_ToInt64_mC7DA377611A8C1B83EE4D5284F8DC3E7C61A2194(L_43, L_44, /*hidden argument*/NULL);
			__this->set_i_12(L_45);
			// useInt = true;
			__this->set_useInt_11((bool)1);
		}

IL_01ab:
		{
			// type = Type.NUMBER;
			__this->set_type_6(2);
			// }
			goto IL_01ce;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01b4;
		throw e;
	}

CATCH_01b4:
	{ // begin catch(System.FormatException)
		// catch (System.FormatException)
		// type = Type.NULL;
		__this->set_type_6(0);
		//                                 Debug.LogWarning
		// #else
		//                                 Debug.WriteLine
		// #endif
		//                                 ("improper JSON formatting:" + str);
		String_t* L_46 = ___str0;
		String_t* L_47;
		L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F4EE77C4F7B247E4CF48B5F94768D41B8313B25)), L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_47, /*hidden argument*/NULL);
		// }
		goto IL_01ce;
	} // end catch (depth: 1)

IL_01ce:
	{
		// return;
		return;
	}

IL_01cf:
	{
		// string propName = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// bool openQuote = false;
		V_3 = (bool)0;
		// bool inProp = false;
		V_4 = (bool)0;
		// int depth = 0;
		V_5 = 0;
		goto IL_0339;
	}

IL_01e2:
	{
		// if (System.Array.IndexOf(WHITESPACE, str[offset]) > -1)
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_48 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_WHITESPACE_5();
		String_t* L_49 = ___str0;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		Il2CppChar L_51;
		L_51 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_49, L_50, /*hidden argument*/NULL);
		int32_t L_52;
		L_52 = Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4(L_48, L_51, /*hidden argument*/Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var);
		if ((((int32_t)L_52) > ((int32_t)(-1))))
		{
			goto IL_0339;
		}
	}
	{
		// if (str[offset] == '\\')
		String_t* L_53 = ___str0;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		Il2CppChar L_55;
		L_55 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_53, L_54, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_020d;
		}
	}
	{
		// offset += 1;
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		// continue;
		goto IL_0339;
	}

IL_020d:
	{
		// if (str[offset] == '"')
		String_t* L_57 = ___str0;
		int32_t L_58 = V_1;
		NullCheck(L_57);
		Il2CppChar L_59;
		L_59 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_57, L_58, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0250;
		}
	}
	{
		// if (openQuote)
		bool L_60 = V_3;
		if (!L_60)
		{
			goto IL_023f;
		}
	}
	{
		// if (!inProp && depth == 0 && type == Type.OBJECT)
		bool L_61 = V_4;
		if (L_61)
		{
			goto IL_023b;
		}
	}
	{
		int32_t L_62 = V_5;
		if (L_62)
		{
			goto IL_023b;
		}
	}
	{
		int32_t L_63 = __this->get_type_6();
		if ((!(((uint32_t)L_63) == ((uint32_t)3))))
		{
			goto IL_023b;
		}
	}
	{
		// propName = str.Substring(tokenTmp + 1, offset - tokenTmp - 1);
		String_t* L_64 = ___str0;
		int32_t L_65 = V_0;
		int32_t L_66 = V_1;
		int32_t L_67 = V_0;
		NullCheck(L_64);
		String_t* L_68;
		L_68 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_64, ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)L_67)), (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_68;
	}

IL_023b:
	{
		// openQuote = false;
		V_3 = (bool)0;
		// }
		goto IL_0250;
	}

IL_023f:
	{
		// if (depth == 0 && type == Type.OBJECT)
		int32_t L_69 = V_5;
		if (L_69)
		{
			goto IL_024e;
		}
	}
	{
		int32_t L_70 = __this->get_type_6();
		if ((!(((uint32_t)L_70) == ((uint32_t)3))))
		{
			goto IL_024e;
		}
	}
	{
		// tokenTmp = offset;
		int32_t L_71 = V_1;
		V_0 = L_71;
	}

IL_024e:
	{
		// openQuote = true;
		V_3 = (bool)1;
	}

IL_0250:
	{
		// if (openQuote)
		bool L_72 = V_3;
		if (L_72)
		{
			goto IL_0339;
		}
	}
	{
		// if (type == Type.OBJECT && depth == 0)
		int32_t L_73 = __this->get_type_6();
		if ((!(((uint32_t)L_73) == ((uint32_t)3))))
		{
			goto IL_0275;
		}
	}
	{
		int32_t L_74 = V_5;
		if (L_74)
		{
			goto IL_0275;
		}
	}
	{
		// if (str[offset] == ':')
		String_t* L_75 = ___str0;
		int32_t L_76 = V_1;
		NullCheck(L_75);
		Il2CppChar L_77;
		L_77 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_75, L_76, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0275;
		}
	}
	{
		// tokenTmp = offset + 1;
		int32_t L_78 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		// inProp = true;
		V_4 = (bool)1;
	}

IL_0275:
	{
		// if (str[offset] == '[' || str[offset] == '{')
		String_t* L_79 = ___str0;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		Il2CppChar L_81;
		L_81 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_79, L_80, /*hidden argument*/NULL);
		if ((((int32_t)L_81) == ((int32_t)((int32_t)91))))
		{
			goto IL_028b;
		}
	}
	{
		String_t* L_82 = ___str0;
		int32_t L_83 = V_1;
		NullCheck(L_82);
		Il2CppChar L_84;
		L_84 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_82, L_83, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0293;
		}
	}

IL_028b:
	{
		// depth++;
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		// }
		goto IL_02af;
	}

IL_0293:
	{
		// else if (str[offset] == ']' || str[offset] == '}')
		String_t* L_86 = ___str0;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		Il2CppChar L_88;
		L_88 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_86, L_87, /*hidden argument*/NULL);
		if ((((int32_t)L_88) == ((int32_t)((int32_t)93))))
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_89 = ___str0;
		int32_t L_90 = V_1;
		NullCheck(L_89);
		Il2CppChar L_91;
		L_91 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_89, L_90, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_02af;
		}
	}

IL_02a9:
	{
		// depth--;
		int32_t L_92 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)1));
	}

IL_02af:
	{
		// if ((str[offset] == ',' && depth == 0) || depth < 0)
		String_t* L_93 = ___str0;
		int32_t L_94 = V_1;
		NullCheck(L_93);
		Il2CppChar L_95;
		L_95 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_93, L_94, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_95) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_02be;
		}
	}
	{
		int32_t L_96 = V_5;
		if (!L_96)
		{
			goto IL_02c3;
		}
	}

IL_02be:
	{
		int32_t L_97 = V_5;
		if ((((int32_t)L_97) >= ((int32_t)0)))
		{
			goto IL_0339;
		}
	}

IL_02c3:
	{
		// inProp = false;
		V_4 = (bool)0;
		// string inner = str.Substring(tokenTmp, offset - tokenTmp).Trim(WHITESPACE);
		String_t* L_98 = ___str0;
		int32_t L_99 = V_0;
		int32_t L_100 = V_1;
		int32_t L_101 = V_0;
		NullCheck(L_98);
		String_t* L_102;
		L_102 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_98, L_99, ((int32_t)il2cpp_codegen_subtract((int32_t)L_100, (int32_t)L_101)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_103 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_WHITESPACE_5();
		NullCheck(L_102);
		String_t* L_104;
		L_104 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_102, L_103, /*hidden argument*/NULL);
		V_7 = L_104;
		// if (inner.Length > 0)
		String_t* L_105 = V_7;
		NullCheck(L_105);
		int32_t L_106;
		L_106 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_105, /*hidden argument*/NULL);
		if ((((int32_t)L_106) <= ((int32_t)0)))
		{
			goto IL_0335;
		}
	}
	{
		// if (type == Type.OBJECT)
		int32_t L_107 = __this->get_type_6();
		if ((!(((uint32_t)L_107) == ((uint32_t)3))))
		{
			goto IL_02fb;
		}
	}
	{
		// keys.Add(propName);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_108 = __this->get_keys_8();
		String_t* L_109 = V_2;
		NullCheck(L_108);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_108, L_109, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_02fb:
	{
		// if (maxDepth != -1)                                                          
		int32_t L_110 = ___maxDepth1;
		if ((((int32_t)L_110) == ((int32_t)(-1))))
		{
			goto IL_0320;
		}
	}
	{
		// list.Add(Create(inner, (maxDepth < -1) ? -2 : maxDepth - 1, storeExcessLevels));
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_111 = __this->get_list_7();
		String_t* L_112 = V_7;
		int32_t L_113 = ___maxDepth1;
		G_B64_0 = L_112;
		G_B64_1 = L_111;
		if ((((int32_t)L_113) < ((int32_t)(-1))))
		{
			G_B65_0 = L_112;
			G_B65_1 = L_111;
			goto IL_0310;
		}
	}
	{
		int32_t L_114 = ___maxDepth1;
		G_B66_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_114, (int32_t)1));
		G_B66_1 = G_B64_0;
		G_B66_2 = G_B64_1;
		goto IL_0312;
	}

IL_0310:
	{
		G_B66_0 = ((int32_t)-2);
		G_B66_1 = G_B65_0;
		G_B66_2 = G_B65_1;
	}

IL_0312:
	{
		bool L_115 = ___storeExcessLevels2;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_116;
		L_116 = JSONObject_Create_m6869838BC7DFE7BA8C73FF0CDC7DAB93B25F3C73(G_B66_1, G_B66_0, L_115, (bool)0, /*hidden argument*/NULL);
		NullCheck(G_B66_2);
		List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(G_B66_2, L_116, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		goto IL_0335;
	}

IL_0320:
	{
		// else if (storeExcessLevels)
		bool L_117 = ___storeExcessLevels2;
		if (!L_117)
		{
			goto IL_0335;
		}
	}
	{
		// list.Add(CreateBakedObject(inner));
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_118 = __this->get_list_7();
		String_t* L_119 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_120;
		L_120 = JSONObject_CreateBakedObject_mD1360B3E5E493D5647B64617F0E894A42307FCDD(L_119, /*hidden argument*/NULL);
		NullCheck(L_118);
		List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_118, L_120, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
	}

IL_0335:
	{
		// tokenTmp = offset + 1;
		int32_t L_121 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
	}

IL_0339:
	{
		// while (++offset < str.Length)
		int32_t L_122 = V_1;
		int32_t L_123 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
		V_1 = L_123;
		String_t* L_124 = ___str0;
		NullCheck(L_124);
		int32_t L_125;
		L_125 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_124, /*hidden argument*/NULL);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01e2;
		}
	}
	{
		// }
		return;
	}

IL_034a:
	{
		// else type = Type.NULL;
		__this->set_type_6(0);
		// }
		return;
	}

IL_0352:
	{
		// else type = Type.NULL;    
		__this->set_type_6(0);
		// }
		return;
	}
}
// System.Boolean JSONObject::get_IsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsNumber_m4E4594E71166114D029A040E3EB3DD6900A8860A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsNumber { get { return type == Type.NUMBER; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsNull_m0E158ED45DCA8AD40311E32DC9A709B3F7BBAF72 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsNull { get { return type == Type.NULL; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsString_mEEFCDDA3881856A47DC2A4A0A857EA703E7A4147 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsString { get { return type == Type.STRING; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsBool_m2165D4FD068B192D13EEE1A2BAB22295934D9A66 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBool { get { return type == Type.BOOL; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsArray_m192D16D4CC2C846BC1F6FA1A3CFE7A76369738C3 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsArray { get { return type == Type.ARRAY; } }
		int32_t L_0 = __this->get_type_6();
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Boolean JSONObject::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsObject { get { return type == Type.OBJECT || type == Type.BAKED; } }
		int32_t L_0 = __this->get_type_6();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_type_6();
		return (bool)((((int32_t)L_1) == ((int32_t)6))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Void JSONObject::Add(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m9E8891A06BB81D8DAF1B53014C0DAA52192ED050 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(val));
		bool L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mB7F8E61C3481B5CA83507A64FA21C0A7928B3D95 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(val));
		float L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m6032D06170CE9AED6FDD3197232AA527952E2DBC (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(val));
		int32_t L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mA5E8C6770E68239DC7CD1959EED03CDD78B381AF (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(CreateStringObject(str));
		String_t* L_0 = ___str0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m86C27DC89F36D514791A10B1FA218386E64825EA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add(Create(content));
		AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * L_0 = ___content0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_mAB52FC035F2BB8998E2F36C840605B466157A88E(L_0, /*hidden argument*/NULL);
		JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::Add(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_mFA608D8951A1CB1FE608B4E1B0E69D55CBCD21F8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (type != Type.ARRAY)
		int32_t L_2 = __this->get_type_6();
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_002b;
		}
	}
	{
		// type = Type.ARRAY;      
		__this->set_type_6(4);
		// if (list == null)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = __this->get_list_7();
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_4 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_4, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_4);
	}

IL_002b:
	{
		// list.Add(obj);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_5 = __this->get_list_7();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___obj0;
		NullCheck(L_5);
		List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_5, L_6, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m473954FA7B650FBD5C47FB79AC05759E0E82C2C9 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, bool ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(val));
		String_t* L_0 = ___name0;
		bool L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m7E3F26EEFD620FE3887D33AB741CDDEC19F48061 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, float ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(val));
		String_t* L_0 = ___name0;
		float L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m1B10F39E3871FB04D76FD982AF5BE52395D32079 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, int32_t ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(val));
		String_t* L_0 = ___name0;
		int32_t L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m3A9FD559E8B99D1A371178610DF29021060E078A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, int64_t ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(val));
		String_t* L_0 = ___name0;
		int64_t L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m344E63B4E4A74F15284F157069013679E9F9BC0A(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONContents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_mCD42D97A60905B34919D38C732B391BDE0071E4F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * ___content1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, Create(content));
		String_t* L_0 = ___name0;
		AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * L_1 = ___content1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_mAB52FC035F2BB8998E2F36C840605B466157A88E(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m6FDFFDC2CD1CDF0C0D83B776B6F56C04630337AD (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, String_t* ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddField(name, CreateStringObject(val));
		String_t* L_0 = ___name0;
		String_t* L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_1, /*hidden argument*/NULL);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::AddField(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (obj)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0091;
		}
	}
	{
		// if (type != Type.OBJECT)
		int32_t L_2 = __this->get_type_6();
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0079;
		}
	}
	{
		// if (keys == null)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = __this->get_keys_8();
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// keys = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_4, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_keys_8(L_4);
	}

IL_0027:
	{
		// if (type == Type.ARRAY)
		int32_t L_5 = __this->get_type_6();
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_005f;
		}
	}
	{
		// for (int i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_004f;
	}

IL_0034:
	{
		// keys.Add(i.ToString(CultureInfo.InvariantCulture));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = __this->get_keys_8();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_7;
		L_7 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_8;
		L_8 = Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471((int32_t*)(&V_0), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_8, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// for (int i = 0; i < list.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_004f:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_10 = V_0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_11 = __this->get_list_7();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_11, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0034;
		}
	}
	{
		// }
		goto IL_0072;
	}

IL_005f:
	{
		// if (list == null)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_13 = __this->get_list_7();
		if (L_13)
		{
			goto IL_0072;
		}
	}
	{
		// list = new List<JSONObject>();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_14 = (List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D *)il2cpp_codegen_object_new(List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D_il2cpp_TypeInfo_var);
		List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890(L_14, /*hidden argument*/List_1__ctor_mEFE76BB2DCA655593A029D0CDD98EF106115C890_RuntimeMethod_var);
		__this->set_list_7(L_14);
	}

IL_0072:
	{
		// type = Type.OBJECT;     
		__this->set_type_6(3);
	}

IL_0079:
	{
		// keys.Add(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = __this->get_keys_8();
		String_t* L_16 = ___name0;
		NullCheck(L_15);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_15, L_16, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// list.Add(obj);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_17 = __this->get_list_7();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = ___obj1;
		NullCheck(L_17);
		List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296(L_17, L_18, /*hidden argument*/List_1_Add_mC870F0235752C0A6B61D2F275B2E73CB4E9E9296_RuntimeMethod_var);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m0281566F0843A106A7EEB655F5A24027D455EA52 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, String_t* ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, string val) { SetField(name, CreateStringObject(val)); }
		String_t* L_0 = ___name0;
		String_t* L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_CreateStringObject_m4FE0CF34A1B7810B54654B6E66C5EBC579EE8E02(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, string val) { SetField(name, CreateStringObject(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m071329AF191E505434081C28E629236EDA1FF06F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, bool ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, bool val) { SetField(name, Create(val)); }
		String_t* L_0 = ___name0;
		bool L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m0C889649B7E0EC710E0CC1E8DB8A847CECBF0108(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, bool val) { SetField(name, Create(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_mE3391C9C14A060679EB6129FF9458AC36FB62584 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, float ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, float val) { SetField(name, Create(val)); }
		String_t* L_0 = ___name0;
		float L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m56DE67DE24BC7876C3524F1C9EB996DF73C4AAE4(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, float val) { SetField(name, Create(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_mA09BE9C6A1E0D6B734AD28215F27AAFE6E171249 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, int64_t ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, long val) { SetField(name, Create(val)); }
		String_t* L_0 = ___name0;
		int64_t L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m344E63B4E4A74F15284F157069013679E9F9BC0A(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, long val) { SetField(name, Create(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m9898DB789550E7EFCF1994D04261566AEAB93151 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, int32_t ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetField(string name, int val) { SetField(name, Create(val)); }
		String_t* L_0 = ___name0;
		int32_t L_1 = ___val1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2;
		L_2 = JSONObject_Create_m7607C428C178C76F59C1A431F810F601F90B78E2(L_1, /*hidden argument*/NULL);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_2, /*hidden argument*/NULL);
		// public void SetField(string name, int val) { SetField(name, Create(val)); }
		return;
	}
}
// System.Void JSONObject::SetField(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HasField(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// list.Remove(this[name]);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_2 = __this->get_list_7();
		String_t* L_3 = ___name0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380(L_2, L_4, /*hidden argument*/List_1_Remove_m0D6661E1ED36AA5F2B55676BBB46999DCE36E380_RuntimeMethod_var);
		// keys.Remove(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = __this->get_keys_8();
		String_t* L_7 = ___name0;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70(L_6, L_7, /*hidden argument*/List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
	}

IL_0029:
	{
		// AddField(name, obj);
		String_t* L_9 = ___name0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_10 = ___obj1;
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(__this, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::RemoveField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_RemoveField_m7B5CAC5F31249ECA5E3D2292DAD83C8511EAC692 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (keys.IndexOf(name) > -1)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_keys_8();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_0, L_1, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)(-1))))
		{
			goto IL_0033;
		}
	}
	{
		// list.RemoveAt(keys.IndexOf(name));
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = __this->get_list_7();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = __this->get_keys_8();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_4, L_5, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF(L_3, L_6, /*hidden argument*/List_1_RemoveAt_m5E4C1305E9BFAB895715B5636E5AA158528134EF_RuntimeMethod_var);
		// keys.Remove(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = __this->get_keys_8();
		String_t* L_8 = ___name0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70(L_7, L_8, /*hidden argument*/List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mCEED58296E9649B0394055298B9F0D96D60A45F8 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool* ___field0, String_t* ___name1, bool ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		bool* L_0 = ___field0;
		bool L_1 = ___fallback2;
		*((int8_t*)L_0) = (int8_t)L_1;
		// return GetField(ref field, name);
		bool* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_mB39F437E39BE18848FA47612216038F35970AD14(__this, (bool*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_mB39F437E39BE18848FA47612216038F35970AD14 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.OBJECT)
		int32_t L_0 = __this->get_type_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if (index >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = list[index].b;
		bool* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_9 = L_8->get_b_13();
		*((int8_t*)L_5) = (int8_t)L_9;
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.Single&,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m8099EA01695975436FA9EB5B0B02889979312399 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float* ___field0, String_t* ___name1, float ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		float* L_0 = ___field0;
		float L_1 = ___fallback2;
		*((float*)L_0) = (float)L_1;
		// return GetField(ref field, name);
		float* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m37FA2DD85D282EF09CD3790ECFAD348DACEF06B2(__this, (float*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m37FA2DD85D282EF09CD3790ECFAD348DACEF06B2 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, float* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (type == Type.OBJECT)
		int32_t L_0 = __this->get_type_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if (index >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = list[index].n;
		float* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->get_n_10();
		*((float*)L_5) = (float)L_9;
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.Int32&,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m18AE2E516E49DD3312C1E4F44F961BD2199B74DA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t* ___field0, String_t* ___name1, int32_t ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		int32_t* L_0 = ___field0;
		int32_t L_1 = ___fallback2;
		*((int32_t*)L_0) = (int32_t)L_1;
		// return GetField(ref field, name);
		int32_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m75931E7F217795B23CE49E908882C35D623DDBB6(__this, (int32_t*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m75931E7F217795B23CE49E908882C35D623DDBB6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if (index >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = (int)list[index].i;
		int32_t* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		int64_t L_9 = L_8->get_i_12();
		*((int32_t*)L_5) = (int32_t)((int32_t)((int32_t)L_9));
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.Int64&,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m332921E122984F9C95C3B11503CA9C5389C141E6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int64_t* ___field0, String_t* ___name1, int64_t ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		int64_t* L_0 = ___field0;
		int64_t L_1 = ___fallback2;
		*((int64_t*)L_0) = (int64_t)L_1;
		// return GetField(ref field, name);
		int64_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m43C478E125C950A25092B00522F4D8C06123CE25(__this, (int64_t*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.Int64&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m43C478E125C950A25092B00522F4D8C06123CE25 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int64_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if (index >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// field = (long)list[index].i;
		int64_t* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		int64_t L_9 = L_8->get_i_12();
		*((int64_t*)L_5) = (int64_t)L_9;
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m36CB490D4F51DD3CB76DE8075DE4B0B7B71E5680 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, uint32_t* ___field0, String_t* ___name1, uint32_t ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		uint32_t* L_0 = ___field0;
		uint32_t L_1 = ___fallback2;
		*((int32_t*)L_0) = (int32_t)L_1;
		// return GetField(ref field, name);
		uint32_t* L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m6A8761BFDC11E5DFBDF08B2120BA0D0395BE0A2F(__this, (uint32_t*)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m6A8761BFDC11E5DFBDF08B2120BA0D0395BE0A2F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, uint32_t* ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if (index >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// field = (uint)list[index].i;
		uint32_t* L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		int64_t L_9 = L_8->get_i_12();
		*((int32_t*)L_5) = (int32_t)((int32_t)((uint32_t)L_9));
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean JSONObject::GetField(System.String&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m2F8C472193223B08DA0282C1F5A1BD121032984F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t** ___field0, String_t* ___name1, String_t* ___fallback2, const RuntimeMethod* method)
{
	{
		// field = fallback;
		String_t** L_0 = ___field0;
		String_t* L_1 = ___fallback2;
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_1);
		// return GetField(ref field, name);
		String_t** L_2 = ___field0;
		String_t* L_3 = ___name1;
		bool L_4;
		L_4 = JSONObject_GetField_m34E78B3470121297625809968A259E7FD9BD0792(__this, (String_t**)L_2, L_3, (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 *)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_GetField_m34E78B3470121297625809968A259E7FD9BD0792 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t** ___field0, String_t* ___name1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		String_t* L_2 = ___name1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_1, L_2, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_3;
		// if (index >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// field = list[index].str;
		String_t** L_5 = ___field0;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = L_8->get_str_9();
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_9);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name1;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_GetField_m55157D70DF9CD7505A29E4B3961DE0354B665E52 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * ___response1, FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * ___fail2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (response != null && IsObject)
		GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * L_0 = ___response1;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1;
		L_1 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// int index = keys.IndexOf(name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_keys_8();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A(L_2, L_3, /*hidden argument*/List_1_IndexOf_mB7CC45FBB07B2C9FDB01A718610E9FF8DAA15F2A_RuntimeMethod_var);
		V_0 = L_4;
		// if (index >= 0)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// response.Invoke(list[index]);
		GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * L_6 = ___response1;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_7 = __this->get_list_7();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9;
		L_9 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_6);
		GetFieldResponse_Invoke_mF1BEAD17E9225211812605D01371DE9834947986(L_6, L_9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002f:
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_10 = ___fail2;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// if (fail != null) fail.Invoke(name);
		FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * L_11 = ___fail2;
		String_t* L_12 = ___name0;
		NullCheck(L_11);
		FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// JSONObject JSONObject::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_GetField_m3181F5223EF85F862D7C542FA18FD9AC1C626F2F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		// for (int i = 0; i < keys.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_000c:
	{
		// if (keys[i] == name)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// return list[i];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_6 = __this->get_list_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8;
		L_8 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		return L_8;
	}

IL_002d:
	{
		// for (int i = 0; i < keys.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		// for (int i = 0; i < keys.Count; i++)
		int32_t L_10 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = __this->get_keys_8();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_11, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000c;
		}
	}

IL_003f:
	{
		// return null;
		return (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *)NULL;
	}
}
// System.Boolean JSONObject::HasFields(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasFields_mCC80238F0239667B83D74505982D657DA8015B29 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___names0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// for (int i = 0; i < names.Length; i++)
		V_0 = 0;
		goto IL_0024;
	}

IL_000e:
	{
		// if (!keys.Contains(names[i]))
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___names0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		bool L_6;
		L_6 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_1, L_5, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// for (int i = 0; i < names.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < names.Length; i++)
		int32_t L_8 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = ___names0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean JSONObject::HasField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!IsObject)
		bool L_0;
		L_0 = JSONObject_get_IsObject_m8AEF0729E0189B47917B081AA25536A699D108FB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// for (int i = 0; i < keys.Count; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		// if (keys[i] == name)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = __this->get_keys_8();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_4 = ___name0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0024:
	{
		// for (int i = 0; i < keys.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0028:
	{
		// for (int i = 0; i < keys.Count; i++)
		int32_t L_7 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = __this->get_keys_8();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_8, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void JSONObject::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Clear_m488A29091C76A26DD7243E16B52B5869A0CC5D3E (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = Type.NULL;
		__this->set_type_6(0);
		// if (list != null)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// list.Clear();
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_1 = __this->get_list_7();
		NullCheck(L_1);
		List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D(L_1, /*hidden argument*/List_1_Clear_mDA321A60902EA5DFB3B4B97E348FA9464F2DC50D_RuntimeMethod_var);
	}

IL_001a:
	{
		// if (keys != null)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_keys_8();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// keys.Clear();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = __this->get_keys_8();
		NullCheck(L_3);
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_3, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
	}

IL_002d:
	{
		// str = "";
		__this->set_str_9(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// n = 0;
		__this->set_n_10((0.0f));
		// b = false;
		__this->set_b_13((bool)0);
		// }
		return;
	}
}
// JSONObject JSONObject::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_Copy_m386F06A2A5D438174A9ACE83BFB639437C5A04CC (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Create(Print());
		String_t* L_0;
		L_0 = JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_Create_m6869838BC7DFE7BA8C73FF0CDC7DAB93B25F3C73(L_0, ((int32_t)-2), (bool)0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void JSONObject::Merge(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Merge_m3B1ED6AA5ED31DA9A87D573707D6630653D823B1 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MergeRecur(this, obj);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___left0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral071C3BC0C76A7C3C0CABEF244EEE02A3AF7A1E5B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (left.type == Type.NULL)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___left0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_6();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// left.Absorb(right);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = ___left0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = ___right1;
		NullCheck(L_2);
		JSONObject_Absorb_mDBE9D614A08AACFFBAA3CBC8AEF44C34C9C0C208(L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		// else if (left.type == Type.OBJECT && right.type == Type.OBJECT)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = ___left0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_type_6();
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_00b2;
		}
	}
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = ___right1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_type_6();
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_00b2;
		}
	}
	{
		// for (int i = 0; i < right.list.Count; i++)
		V_0 = 0;
		goto IL_00a0;
	}

IL_002c:
	{
		// string key = right.keys[i];
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_8 = ___right1;
		NullCheck(L_8);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = L_8->get_keys_8();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_1 = L_11;
		// if (right[i].isContainer)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = ___right1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_14;
		L_14 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = JSONObject_get_isContainer_mE8E9995704509192E5B1958110C461BAC07B8C67(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		// if (left.HasField(key))
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_16 = ___left0;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1(L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0065;
		}
	}
	{
		// MergeRecur(left[key], right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19 = ___left0;
		String_t* L_20 = V_1;
		NullCheck(L_19);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_21;
		L_21 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_19, L_20, /*hidden argument*/NULL);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_22 = ___right1;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_24;
		L_24 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828(L_21, L_24, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0065:
	{
		// left.AddField(key, right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_25 = ___left0;
		String_t* L_26 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_27 = ___right1;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_29;
		L_29 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(L_25, L_26, L_29, /*hidden argument*/NULL);
		// }
		goto IL_009c;
	}

IL_0075:
	{
		// if (left.HasField(key))
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_30 = ___left0;
		String_t* L_31 = V_1;
		NullCheck(L_30);
		bool L_32;
		L_32 = JSONObject_HasField_m0716AE8AC84412AFADF939A64D923C6B9C91E6B1(L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_008e;
		}
	}
	{
		// left.SetField(key, right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_33 = ___left0;
		String_t* L_34 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_35 = ___right1;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_37;
		L_37 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(L_33, L_34, L_37, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_008e:
	{
		// left.AddField(key, right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_38 = ___left0;
		String_t* L_39 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_40 = ___right1;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_42;
		L_42 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		JSONObject_AddField_m040F25BA9B3A4BDEBAAE2332096F3DCC3FDA538A(L_38, L_39, L_42, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// for (int i = 0; i < right.list.Count; i++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00a0:
	{
		// for (int i = 0; i < right.list.Count; i++)
		int32_t L_44 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_45 = ___right1;
		NullCheck(L_45);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_46 = L_45->get_list_7();
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_46, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)L_47)))
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}

IL_00b2:
	{
		// else if (left.type == Type.ARRAY && right.type == Type.ARRAY)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_48 = ___left0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_type_6();
		if ((!(((uint32_t)L_49) == ((uint32_t)4))))
		{
			goto IL_0141;
		}
	}
	{
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_50 = ___right1;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_type_6();
		if ((!(((uint32_t)L_51) == ((uint32_t)4))))
		{
			goto IL_0141;
		}
	}
	{
		// if (right.Count > left.Count)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_52 = ___right1;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA(L_52, /*hidden argument*/NULL);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_54 = ___left0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA(L_54, /*hidden argument*/NULL);
		if ((((int32_t)L_53) <= ((int32_t)L_55)))
		{
			goto IL_00e0;
		}
	}
	{
		//                 Debug.LogError
		// #else
		//                 Debug.WriteLine
		// #endif
		//                 ("Cannot merge arrays when right object has more elements");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral071C3BC0C76A7C3C0CABEF244EEE02A3AF7A1E5B, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00e0:
	{
		// for (int i = 0; i < right.list.Count; i++)
		V_2 = 0;
		goto IL_0133;
	}

IL_00e4:
	{
		// if (left[i].type == right[i].type)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_56 = ___left0;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_58;
		L_58 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_56, L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		int32_t L_59 = L_58->get_type_6();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_60 = ___right1;
		int32_t L_61 = V_2;
		NullCheck(L_60);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_62;
		L_62 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_60, L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		int32_t L_63 = L_62->get_type_6();
		if ((!(((uint32_t)L_59) == ((uint32_t)L_63))))
		{
			goto IL_012f;
		}
	}
	{
		// if (left[i].isContainer)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_64 = ___left0;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_66;
		L_66 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		bool L_67;
		L_67 = JSONObject_get_isContainer_mE8E9995704509192E5B1958110C461BAC07B8C67(L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0121;
		}
	}
	{
		// MergeRecur(left[i], right[i]);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_68 = ___left0;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_70;
		L_70 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_68, L_69, /*hidden argument*/NULL);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_71 = ___right1;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_73;
		L_73 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_71, L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		JSONObject_MergeRecur_m9D1F0F685C959F0C564D775FF96EC620EA27E828(L_70, L_73, /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_0121:
	{
		// left[i] = right[i];
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_74 = ___left0;
		int32_t L_75 = V_2;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_76 = ___right1;
		int32_t L_77 = V_2;
		NullCheck(L_76);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_78;
		L_78 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_76, L_77, /*hidden argument*/NULL);
		NullCheck(L_74);
		JSONObject_set_Item_mA2253EB63C14426FD03F768405554601E47A56A0(L_74, L_75, L_78, /*hidden argument*/NULL);
	}

IL_012f:
	{
		// for (int i = 0; i < right.list.Count; i++)
		int32_t L_79 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_0133:
	{
		// for (int i = 0; i < right.list.Count; i++)
		int32_t L_80 = V_2;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_81 = ___right1;
		NullCheck(L_81);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_82 = L_81->get_list_7();
		NullCheck(L_82);
		int32_t L_83;
		L_83 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_82, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_80) < ((int32_t)L_83)))
		{
			goto IL_00e4;
		}
	}

IL_0141:
	{
		// }
		return;
	}
}
// System.Void JSONObject::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Bake_m2718B90679717E9954FBE62FA62E4DF4A053164B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// if (type != Type.BAKED)
		int32_t L_0 = __this->get_type_6();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_001d;
		}
	}
	{
		// str = Print();
		String_t* L_1;
		L_1 = JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_str_9(L_1);
		// type = Type.BAKED;
		__this->set_type_6(6);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerable JSONObject::BakeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_BakeAsync_mEE8F51D3F53E1472AA4C8A6033C17D2FDDC6669F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * L_0 = (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 *)il2cpp_codegen_object_new(U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3_il2cpp_TypeInfo_var);
		U3CBakeAsyncU3Ed__108__ctor_mA04798BFE61915852DEA53D616C68C5C5F749CCA(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return L_1;
	}
}
// System.String JSONObject::Print(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// Stringify(0, builder, pretty);
		StringBuilder_t * L_1 = V_0;
		bool L_2 = ___pretty0;
		JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2(__this, 0, L_1, L_2, /*hidden argument*/NULL);
		// return builder.ToString();
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_PrintAsync_m109E1BB961985C7BA46DBD74D2569BDB3DB0412A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * L_0 = (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A *)il2cpp_codegen_object_new(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A_il2cpp_TypeInfo_var);
		U3CPrintAsyncU3Ed__110__ctor_m5A43C6475E4A6D106611642768C9E5B5C513B8B7(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * L_2 = L_1;
		bool L_3 = ___pretty0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__pretty_5(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___depth0, StringBuilder_t * ___builder1, bool ___pretty2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_0 = (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 *)il2cpp_codegen_object_new(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61_il2cpp_TypeInfo_var);
		U3CStringifyAsyncU3Ed__113__ctor_m954F17288382055AD65E54E2B141D29870D81A03(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_2 = L_1;
		int32_t L_3 = ___depth0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__depth_4(L_3);
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_4 = L_2;
		StringBuilder_t * L_5 = ___builder1;
		NullCheck(L_4);
		L_4->set_U3CU3E3__builder_7(L_5);
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_6 = L_4;
		bool L_7 = ___pretty2;
		NullCheck(L_6);
		L_6->set_U3CU3E3__pretty_9(L_7);
		return L_6;
	}
}
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___depth0, StringBuilder_t * ___builder1, bool ___pretty2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A88DEF28104508D70E81DC82A27CDD95EDDA6DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57F692809412BBB13F764D9044820BC70823E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// if (depth++ > MAX_DEPTH)
		int32_t L_0 = ___depth0;
		int32_t L_1 = L_0;
		___depth0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0015;
		}
	}
	{
		//             Debug.Log
		// #else
		//             Debug.WriteLine
		// #endif
		//             ("reached max depth!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8A88DEF28104508D70E81DC82A27CDD95EDDA6DC, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0015:
	{
		// switch (type)
		int32_t L_2 = __this->get_type_6();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0342;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_0060;
			}
			case 3:
			{
				goto IL_00e6;
			}
			case 4:
			{
				goto IL_020a;
			}
			case 5:
			{
				goto IL_0320;
			}
			case 6:
			{
				goto IL_003f;
			}
		}
	}
	{
		return;
	}

IL_003f:
	{
		// builder.Append(str);
		StringBuilder_t * L_4 = ___builder1;
		String_t* L_5 = __this->get_str_9();
		NullCheck(L_4);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_4, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004d:
	{
		// builder.AppendFormat("\"{0}\"", str);
		StringBuilder_t * L_7 = ___builder1;
		String_t* L_8 = __this->get_str_9();
		NullCheck(L_7);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_7, _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0060:
	{
		// if (useInt)
		bool L_10 = __this->get_useInt_11();
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		// builder.Append(i.ToString(CultureInfo.InvariantCulture));
		StringBuilder_t * L_11 = ___builder1;
		int64_t* L_12 = __this->get_address_of_i_12();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_13;
		L_13 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_14;
		L_14 = Int64_ToString_m1D712B17D4BDBE43D1E12EA52885C5D345C1CFA2((int64_t*)L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0080:
	{
		// if (float.IsInfinity(n))
		float L_16 = __this->get_n_10();
		bool L_17;
		L_17 = Single_IsInfinity_m10D3B235800230231AFC34AFEC4D320D06F794C1(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		// builder.Append(INFINITY);
		StringBuilder_t * L_18 = ___builder1;
		NullCheck(L_18);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, _stringLiteralA57F692809412BBB13F764D9044820BC70823E64, /*hidden argument*/NULL);
		return;
	}

IL_009a:
	{
		// else if (float.IsNegativeInfinity(n))
		float L_20 = __this->get_n_10();
		bool L_21;
		L_21 = Single_IsNegativeInfinity_m08D484739F9E73C171CFC2819E30A983E87C68AB(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b4;
		}
	}
	{
		// builder.Append(NEGINFINITY);
		StringBuilder_t * L_22 = ___builder1;
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_22, _stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B, /*hidden argument*/NULL);
		return;
	}

IL_00b4:
	{
		// else if (float.IsNaN(n))
		float L_24 = __this->get_n_10();
		bool L_25;
		L_25 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		// builder.Append(NaN);
		StringBuilder_t * L_26 = ___builder1;
		NullCheck(L_26);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_26, _stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0, /*hidden argument*/NULL);
		return;
	}

IL_00ce:
	{
		// builder.Append(n.ToString(CultureInfo.InvariantCulture));
		StringBuilder_t * L_28 = ___builder1;
		float* L_29 = __this->get_address_of_n_10();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_30;
		L_30 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_31;
		L_31 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_28, L_31, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00e6:
	{
		// builder.Append("{");
		StringBuilder_t * L_33 = ___builder1;
		NullCheck(L_33);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_33, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		// if (list.Count > 0)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_35 = __this->get_list_7();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_35, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_01c2;
		}
	}
	{
		// if (pretty)
		bool L_37 = ___pretty2;
		if (!L_37)
		{
			goto IL_0112;
		}
	}
	{
		// builder.Append("\n");
		StringBuilder_t * L_38 = ___builder1;
		NullCheck(L_38);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_38, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
	}

IL_0112:
	{
		// for (int i = 0; i < list.Count; i++)
		V_1 = 0;
		goto IL_018c;
	}

IL_0116:
	{
		// string key = keys[i];
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_40 = __this->get_keys_8();
		int32_t L_41 = V_1;
		NullCheck(L_40);
		String_t* L_42;
		L_42 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_40, L_41, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_2 = L_42;
		// JSONObject obj = list[i];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_43 = __this->get_list_7();
		int32_t L_44 = V_1;
		NullCheck(L_43);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_45;
		L_45 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		V_3 = L_45;
		// if (obj)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0188;
		}
	}
	{
		// if (pretty)
		bool L_48 = ___pretty2;
		if (!L_48)
		{
			goto IL_0157;
		}
	}
	{
		// for (int j = 0; j < depth; j++)
		V_4 = 0;
		goto IL_0152;
	}

IL_0140:
	{
		// builder.Append("\t"); 
		StringBuilder_t * L_49 = ___builder1;
		NullCheck(L_49);
		StringBuilder_t * L_50;
		L_50 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_49, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		// for (int j = 0; j < depth; j++)
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_0152:
	{
		// for (int j = 0; j < depth; j++)
		int32_t L_52 = V_4;
		int32_t L_53 = ___depth0;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0140;
		}
	}

IL_0157:
	{
		// builder.AppendFormat("\"{0}\":", key);
		StringBuilder_t * L_54 = ___builder1;
		String_t* L_55 = V_2;
		NullCheck(L_54);
		StringBuilder_t * L_56;
		L_56 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_54, _stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D, L_55, /*hidden argument*/NULL);
		// obj.Stringify(depth, builder, pretty);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_57 = V_3;
		int32_t L_58 = ___depth0;
		StringBuilder_t * L_59 = ___builder1;
		bool L_60 = ___pretty2;
		NullCheck(L_57);
		JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2(L_57, L_58, L_59, L_60, /*hidden argument*/NULL);
		// builder.Append(",");
		StringBuilder_t * L_61 = ___builder1;
		NullCheck(L_61);
		StringBuilder_t * L_62;
		L_62 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_61, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		// if (pretty)
		bool L_63 = ___pretty2;
		if (!L_63)
		{
			goto IL_0188;
		}
	}
	{
		// builder.Append("\n");
		StringBuilder_t * L_64 = ___builder1;
		NullCheck(L_64);
		StringBuilder_t * L_65;
		L_65 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_64, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
	}

IL_0188:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_66 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_018c:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_67 = V_1;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_68 = __this->get_list_7();
		NullCheck(L_68);
		int32_t L_69;
		L_69 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_68, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_67) < ((int32_t)L_69)))
		{
			goto IL_0116;
		}
	}
	{
		// if (pretty)
		bool L_70 = ___pretty2;
		if (!L_70)
		{
			goto IL_01b0;
		}
	}
	{
		// builder.Length -= 2;
		StringBuilder_t * L_71 = ___builder1;
		StringBuilder_t * L_72 = L_71;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_72, /*hidden argument*/NULL);
		NullCheck(L_72);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_72, ((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)2)), /*hidden argument*/NULL);
		goto IL_01c2;
	}

IL_01b0:
	{
		// builder.Length--;
		StringBuilder_t * L_74 = ___builder1;
		StringBuilder_t * L_75 = L_74;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_75, /*hidden argument*/NULL);
		V_5 = L_76;
		int32_t L_77 = V_5;
		NullCheck(L_75);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_75, ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_01c2:
	{
		// if (pretty && list.Count > 0)
		bool L_78 = ___pretty2;
		if (!L_78)
		{
			goto IL_01fd;
		}
	}
	{
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_79 = __this->get_list_7();
		NullCheck(L_79);
		int32_t L_80;
		L_80 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_79, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_80) <= ((int32_t)0)))
		{
			goto IL_01fd;
		}
	}
	{
		// builder.Append("\n");
		StringBuilder_t * L_81 = ___builder1;
		NullCheck(L_81);
		StringBuilder_t * L_82;
		L_82 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_81, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		// for (int j = 0; j < depth - 1; j++)
		V_6 = 0;
		goto IL_01f6;
	}

IL_01e4:
	{
		// builder.Append("\t"); 
		StringBuilder_t * L_83 = ___builder1;
		NullCheck(L_83);
		StringBuilder_t * L_84;
		L_84 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_83, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		// for (int j = 0; j < depth - 1; j++)
		int32_t L_85 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_01f6:
	{
		// for (int j = 0; j < depth - 1; j++)
		int32_t L_86 = V_6;
		int32_t L_87 = ___depth0;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)1)))))
		{
			goto IL_01e4;
		}
	}

IL_01fd:
	{
		// builder.Append("}");
		StringBuilder_t * L_88 = ___builder1;
		NullCheck(L_88);
		StringBuilder_t * L_89;
		L_89 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_88, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_020a:
	{
		// builder.Append("[");
		StringBuilder_t * L_90 = ___builder1;
		NullCheck(L_90);
		StringBuilder_t * L_91;
		L_91 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_90, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		// if (list.Count > 0)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_92 = __this->get_list_7();
		NullCheck(L_92);
		int32_t L_93;
		L_93 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_92, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_93) <= ((int32_t)0)))
		{
			goto IL_02d8;
		}
	}
	{
		// if (pretty)
		bool L_94 = ___pretty2;
		if (!L_94)
		{
			goto IL_0236;
		}
	}
	{
		// builder.Append("\n"); 
		StringBuilder_t * L_95 = ___builder1;
		NullCheck(L_95);
		StringBuilder_t * L_96;
		L_96 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_95, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
	}

IL_0236:
	{
		// for (int i = 0; i < list.Count; i++)
		V_7 = 0;
		goto IL_02a4;
	}

IL_023b:
	{
		// if (list[i])
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_97 = __this->get_list_7();
		int32_t L_98 = V_7;
		NullCheck(L_97);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_99;
		L_99 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_97, L_98, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_99, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_029e;
		}
	}
	{
		// if (pretty)
		bool L_101 = ___pretty2;
		if (!L_101)
		{
			goto IL_026e;
		}
	}
	{
		// for (int j = 0; j < depth; j++)
		V_8 = 0;
		goto IL_0269;
	}

IL_0257:
	{
		// builder.Append("\t"); 
		StringBuilder_t * L_102 = ___builder1;
		NullCheck(L_102);
		StringBuilder_t * L_103;
		L_103 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_102, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		// for (int j = 0; j < depth; j++)
		int32_t L_104 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
	}

IL_0269:
	{
		// for (int j = 0; j < depth; j++)
		int32_t L_105 = V_8;
		int32_t L_106 = ___depth0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_0257;
		}
	}

IL_026e:
	{
		// list[i].Stringify(depth, builder, pretty);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_107 = __this->get_list_7();
		int32_t L_108 = V_7;
		NullCheck(L_107);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_109;
		L_109 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_107, L_108, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		int32_t L_110 = ___depth0;
		StringBuilder_t * L_111 = ___builder1;
		bool L_112 = ___pretty2;
		NullCheck(L_109);
		JSONObject_Stringify_m4F8AD45CB5A773F4867A19F25300BF2689574BB2(L_109, L_110, L_111, L_112, /*hidden argument*/NULL);
		// builder.Append(",");
		StringBuilder_t * L_113 = ___builder1;
		NullCheck(L_113);
		StringBuilder_t * L_114;
		L_114 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_113, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		// if (pretty)
		bool L_115 = ___pretty2;
		if (!L_115)
		{
			goto IL_029e;
		}
	}
	{
		// builder.Append("\n"); 
		StringBuilder_t * L_116 = ___builder1;
		NullCheck(L_116);
		StringBuilder_t * L_117;
		L_117 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_116, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
	}

IL_029e:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_118 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1));
	}

IL_02a4:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_119 = V_7;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_120 = __this->get_list_7();
		NullCheck(L_120);
		int32_t L_121;
		L_121 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_120, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_119) < ((int32_t)L_121)))
		{
			goto IL_023b;
		}
	}
	{
		// if (pretty)
		bool L_122 = ___pretty2;
		if (!L_122)
		{
			goto IL_02c6;
		}
	}
	{
		// builder.Length -= 2;
		StringBuilder_t * L_123 = ___builder1;
		StringBuilder_t * L_124 = L_123;
		NullCheck(L_124);
		int32_t L_125;
		L_125 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_124, /*hidden argument*/NULL);
		NullCheck(L_124);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_124, ((int32_t)il2cpp_codegen_subtract((int32_t)L_125, (int32_t)2)), /*hidden argument*/NULL);
		goto IL_02d8;
	}

IL_02c6:
	{
		// builder.Length--;
		StringBuilder_t * L_126 = ___builder1;
		StringBuilder_t * L_127 = L_126;
		NullCheck(L_127);
		int32_t L_128;
		L_128 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_127, /*hidden argument*/NULL);
		V_5 = L_128;
		int32_t L_129 = V_5;
		NullCheck(L_127);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_127, ((int32_t)il2cpp_codegen_subtract((int32_t)L_129, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_02d8:
	{
		// if (pretty && list.Count > 0)
		bool L_130 = ___pretty2;
		if (!L_130)
		{
			goto IL_0313;
		}
	}
	{
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_131 = __this->get_list_7();
		NullCheck(L_131);
		int32_t L_132;
		L_132 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_131, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_132) <= ((int32_t)0)))
		{
			goto IL_0313;
		}
	}
	{
		// builder.Append("\n");
		StringBuilder_t * L_133 = ___builder1;
		NullCheck(L_133);
		StringBuilder_t * L_134;
		L_134 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_133, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		// for (int j = 0; j < depth - 1; j++)
		V_9 = 0;
		goto IL_030c;
	}

IL_02fa:
	{
		// builder.Append("\t"); 
		StringBuilder_t * L_135 = ___builder1;
		NullCheck(L_135);
		StringBuilder_t * L_136;
		L_136 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_135, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
		// for (int j = 0; j < depth - 1; j++)
		int32_t L_137 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
	}

IL_030c:
	{
		// for (int j = 0; j < depth - 1; j++)
		int32_t L_138 = V_9;
		int32_t L_139 = ___depth0;
		if ((((int32_t)L_138) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)1)))))
		{
			goto IL_02fa;
		}
	}

IL_0313:
	{
		// builder.Append("]");
		StringBuilder_t * L_140 = ___builder1;
		NullCheck(L_140);
		StringBuilder_t * L_141;
		L_141 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_140, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0320:
	{
		// if (b)
		bool L_142 = __this->get_b_13();
		if (!L_142)
		{
			goto IL_0335;
		}
	}
	{
		// builder.Append("true");
		StringBuilder_t * L_143 = ___builder1;
		NullCheck(L_143);
		StringBuilder_t * L_144;
		L_144 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_143, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		return;
	}

IL_0335:
	{
		// builder.Append("false");
		StringBuilder_t * L_145 = ___builder1;
		NullCheck(L_145);
		StringBuilder_t * L_146;
		L_146 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_145, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0342:
	{
		// builder.Append("null");
		StringBuilder_t * L_147 = ___builder1;
		NullCheck(L_147);
		StringBuilder_t * L_148;
		L_148 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_147, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.WWWForm JSONObject::op_Implicit(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * JSONObject_op_Implicit_m899302861F64AD1D7652FE6B88BEFE14057DD625 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// WWWForm form = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_0 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < obj.list.Count; i++)
		V_1 = 0;
		goto IL_0070;
	}

IL_000a:
	{
		// string key = i.ToString(CultureInfo.InvariantCulture);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471((int32_t*)(&V_1), L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		// if (obj.type == Type.OBJECT)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_3 = ___obj0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_type_6();
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		// key = obj.keys[i];
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = ___obj0;
		NullCheck(L_5);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = L_5->get_keys_8();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_002d:
	{
		// string val = obj.list[i].ToString();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = ___obj0;
		NullCheck(L_9);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_10 = L_9->get_list_7();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12;
		L_12 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = L_13;
		// if (obj.list[i].type == Type.STRING)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_14 = ___obj0;
		NullCheck(L_14);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_15 = L_14->get_list_7();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_17;
		L_17 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = L_17->get_type_6();
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_0064;
		}
	}
	{
		// val = val.Replace("\"", "");
		String_t* L_19 = V_3;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_19, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_3 = L_20;
	}

IL_0064:
	{
		// form.AddField(key, val);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_21 = V_0;
		String_t* L_22 = V_2;
		String_t* L_23 = V_3;
		NullCheck(L_21);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_21, L_22, L_23, /*hidden argument*/NULL);
		// for (int i = 0; i < obj.list.Count; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0070:
	{
		// for (int i = 0; i < obj.list.Count; i++)
		int32_t L_25 = V_1;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_26 = ___obj0;
		NullCheck(L_26);
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_27 = L_26->get_list_7();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_27, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_000a;
		}
	}
	{
		// return form;
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_29 = V_0;
		return L_29;
	}
}
// JSONObject JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (list.Count > index) return list[index];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_0, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		int32_t L_2 = ___index0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		// if (list.Count > index) return list[index];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = __this->get_list_7();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5;
		L_5 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return null;
		return (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *)NULL;
	}
}
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mA2253EB63C14426FD03F768405554601E47A56A0 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, int32_t ___index0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (list.Count > index)
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_0 = __this->get_list_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_0, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		int32_t L_2 = ___index0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		// list[index] = value;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_3 = __this->get_list_7();
		int32_t L_4 = ___index0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = ___value1;
		NullCheck(L_3);
		List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7(L_3, L_4, L_5, /*hidden argument*/List_1_set_Item_m4FA2E1C601928A6BA4BBA78642C50486DBB164B7_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// JSONObject JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___index0, const RuntimeMethod* method)
{
	{
		// return GetField(index);
		String_t* L_0 = ___index0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1;
		L_1 = JSONObject_GetField_m3181F5223EF85F862D7C542FA18FD9AC1C626F2F(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void JSONObject::set_Item(System.String,JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_m25E4D8996F85E2EF36AE3FF5EE5FAA1E9D495D0E (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, String_t* ___index0, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___value1, const RuntimeMethod* method)
{
	{
		// SetField(index, value);
		String_t* L_0 = ___index0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = ___value1;
		JSONObject_SetField_m76DD197843038E35B835B8FE6585432219750040(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String JSONObject::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_ToString_mFB3BD00B7F09089A55DB7147281D3BBC1E98FF8A (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// return Print();
		String_t* L_0;
		L_0 = JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String JSONObject::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONObject_ToString_mA7A46B5ECAAC77D702D61EC8314EF75F6C7B9308 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, bool ___pretty0, const RuntimeMethod* method)
{
	{
		// return Print(pretty);
		bool L_0 = ___pretty0;
		String_t* L_1;
		L_1 = JSONObject_Print_mCDAA742C47882262F801B45D3004ED7CEFB6BEB6(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * JSONObject_ToDictionary_mDF496D107AD5ECF06B83E7213FD5483FC8EE95BC (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4311B78947B4BC248CEEE85AEF8C8CBDA5DB0616);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81FB3075BDD9E586E0CE75E4ABEE09AF789BD1EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F25E370C030BF023C4362D923097BB04A97318);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_0 = NULL;
	int32_t V_1 = 0;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (type == Type.OBJECT)
		int32_t L_0 = __this->get_type_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_00e4;
		}
	}
	{
		// Dictionary<string, string> result = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_1, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = 0; i < list.Count; i++)
		V_1 = 0;
		goto IL_00d1;
	}

IL_0019:
	{
		// JSONObject val = list[i];
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_2 = __this->get_list_7();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		V_2 = L_4;
		// switch (val.type)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_type_6();
		V_3 = L_6;
		int32_t L_7 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_00ad;
			}
			case 3:
			{
				goto IL_00ad;
			}
			case 4:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_00ad;
	}

IL_004b:
	{
		// case Type.STRING: result.Add(keys[i], val.str); break;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = __this->get_keys_8();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_str_9();
		NullCheck(L_8);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_8, L_11, L_13, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		// case Type.STRING: result.Add(keys[i], val.str); break;
		goto IL_00cd;
	}

IL_0065:
	{
		// case Type.NUMBER: result.Add(keys[i], val.n.ToString(CultureInfo.InvariantCulture)); break;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = __this->get_keys_8();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_18 = V_2;
		NullCheck(L_18);
		float* L_19 = L_18->get_address_of_n_10();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_20;
		L_20 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_21;
		L_21 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_14);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_14, L_17, L_21, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		// case Type.NUMBER: result.Add(keys[i], val.n.ToString(CultureInfo.InvariantCulture)); break;
		goto IL_00cd;
	}

IL_0089:
	{
		// case Type.BOOL: result.Add(keys[i], val.b.ToString(CultureInfo.InvariantCulture)); break;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_23 = __this->get_keys_8();
		int32_t L_24 = V_1;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_26 = V_2;
		NullCheck(L_26);
		bool* L_27 = L_26->get_address_of_b_13();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_28;
		L_28 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_29;
		L_29 = Boolean_ToString_m6AF340BBFF7B2ABB5987CE80AE6335EE96BC71E9((bool*)L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_22);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_22, L_25, L_29, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		// case Type.BOOL: result.Add(keys[i], val.b.ToString(CultureInfo.InvariantCulture)); break;
		goto IL_00cd;
	}

IL_00ad:
	{
		//                         Debug.LogWarning
		// #else
		//                         Debug.WriteLine
		// #endif
		//                         ("Omitting object: " + keys[i] + " in dictionary conversion");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_30 = __this->get_keys_8();
		int32_t L_31 = V_1;
		NullCheck(L_30);
		String_t* L_32;
		L_32 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_33;
		L_33 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral81FB3075BDD9E586E0CE75E4ABEE09AF789BD1EF, L_32, _stringLiteralD8F25E370C030BF023C4362D923097BB04A97318, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_33, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00d1:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_35 = V_1;
		List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_36 = __this->get_list_7();
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_36, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0019;
		}
	}
	{
		// return result;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_38 = V_0;
		return L_38;
	}

IL_00e4:
	{
		//         Debug.Log
		// #else
		//         Debug.WriteLine
		// #endif
		//         ("Tried to turn non-Object JSONObject into a dictionary");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral4311B78947B4BC248CEEE85AEF8C8CBDA5DB0616, /*hidden argument*/NULL);
		// return null;
		return (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)NULL;
	}
}
// System.Boolean JSONObject::op_Implicit(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___o0, const RuntimeMethod* method)
{
	{
		// return o != null;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___o0;
		return (bool)((!(((RuntimeObject*)(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Collections.IEnumerator JSONObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_System_Collections_IEnumerable_GetEnumerator_mCD16E736EB36B3EC63237CF7456D2ABAC3338865 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	{
		// return (IEnumerator)GetEnumerator();
		JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * L_0;
		L_0 = JSONObject_GetEnumerator_m7BF3CF650EB93A6EEABAE9D1E0A8E9B9448EC3E3(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// JSONObjectEnumer JSONObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * JSONObject_GetEnumerator_m7BF3CF650EB93A6EEABAE9D1E0A8E9B9448EC3E3 (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONObjectEnumer(this);
		JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * L_0 = (JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 *)il2cpp_codegen_object_new(JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9_il2cpp_TypeInfo_var);
		JSONObjectEnumer__ctor_mEF7DA5C1719EBC32DD882E9E24EFB915628C79ED(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void JSONObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__cctor_m81436211E2DF4F069A4ADBF9E24636EC678EB83D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly char[] WHITESPACE = { ' ', '\r', '\n', '\t', '\uFEFF', '\u0009' };
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)6);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->set_WHITESPACE_5(L_1);
		// static readonly Stopwatch printWatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_3, /*hidden argument*/NULL);
		((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->set_printWatch_15(L_3);
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
// System.Void JSONObjectEnumer::.ctor(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObjectEnumer__ctor_mEF7DA5C1719EBC32DD882E9E24EFB915628C79ED (JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___jsonObject0, const RuntimeMethod* method)
{
	{
		// int position = -1;
		__this->set_position_1((-1));
		// public JSONObjectEnumer(JSONObject jsonObject)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _jobj = jsonObject;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = ___jsonObject0;
		__this->set__jobj_0(L_0);
		// }
		return;
	}
}
// System.Boolean JSONObjectEnumer::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObjectEnumer_MoveNext_m60B886C87BC4F382179229CC3C7C9329B178BDDF (JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * __this, const RuntimeMethod* method)
{
	{
		// position++;
		int32_t L_0 = __this->get_position_1();
		__this->set_position_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// return (position < _jobj.Count);
		int32_t L_1 = __this->get_position_1();
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = __this->get__jobj_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JSONObject_get_Count_m04F6896A6527D124CB068FDD945872BD698AF9BA(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
// System.Void JSONObjectEnumer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObjectEnumer_Reset_mCBB30AC22F7AEA95116EC2A12B10F829B3DBC228 (JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * __this, const RuntimeMethod* method)
{
	{
		// position = -1;
		__this->set_position_1((-1));
		// }
		return;
	}
}
// System.Object JSONObjectEnumer::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JSONObjectEnumer_System_Collections_IEnumerator_get_Current_m214302E13D97745AA4D4B6467887500F29D1CEB6 (JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * __this, const RuntimeMethod* method)
{
	{
		// return Current;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0;
		L_0 = JSONObjectEnumer_get_Current_m1F61D887777122282FF5E9542F430327DBBAED56(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// JSONObject JSONObjectEnumer::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * JSONObjectEnumer_get_Current_m1F61D887777122282FF5E9542F430327DBBAED56 (JSONObjectEnumer_t86DDE5059B4DE4CE0F19CD95657262E921FA08A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (_jobj.IsArray)
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_0 = __this->get__jobj_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = JSONObject_get_IsArray_m192D16D4CC2C846BC1F6FA1A3CFE7A76369738C3(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// return _jobj[position];
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_2 = __this->get__jobj_0();
		int32_t L_3 = __this->get_position_1();
		NullCheck(L_2);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4;
		L_4 = JSONObject_get_Item_m369B37FACC58565D4AF8EA4E2729497D18407E0B(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001f:
	{
		// string key = _jobj.keys[position];
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = __this->get__jobj_0();
		NullCheck(L_5);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = L_5->get_keys_8();
		int32_t L_7 = __this->get_position_1();
		NullCheck(L_6);
		String_t* L_8;
		L_8 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		V_0 = L_8;
		// return _jobj[key];
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_9 = __this->get__jobj_0();
		String_t* L_10 = V_0;
		NullCheck(L_9);
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_11;
		L_11 = JSONObject_get_Item_mFBEB0B24274E97649AA4119D5AAEE68205B8CE03(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
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
// System.Void Main::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Start_m3F24386331750B440050C96242A7E4040149232D (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00170DE1B1F87AB5BC0E1ACB89EC1E8761028DDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052291F7DB4D20D4A05868B4E2B2FBA30E8C72BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA520A6918DA67342F6D3A11B7796701CDFC871);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD3A58A758D76D844ED9738C8E97E391BE3F2A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral319D1EB2B79ACDA1B65E4BA4BA666745E69FEECF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral387662C9A326D3E411B80614F2923E0A45213D3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E8CAAA11C75D11B813C686E18F3E02443B2A332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E910634FD1B4E69D8A04A4EC4B3A4E1D7C65C70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D7E10FB1136637DF3EEA7E332D50E75ECCFAE35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral609C21B8A252D459962504AA2276A0E24B2878EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62564D387B16A3803250F43550BB3601EFD53E90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral688DAF8365F2089E7ED7C16138972E5239A50B2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6996DC0CC92C7C284749109C7F02D201312B6A5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7036BA73163DAA855C27E7DC7A4EFABC45E304C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7744FB15E8739D759829A38383DDCF47358A2096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A767413CF3615981E3F378B2C401F9413BCD42C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FEA2EDB43B6373E211547DF5AB654D25934B827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90769F53329CDE4435A77180E60F42364B329519);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92005D7137C29BFA8D55427CB7512A49F739ECC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9216BDEF5172F1DBAACFFF605E8C99BD4A930973);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98A6C258598283701F58B97B11A6F4BE184680B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B616C76333DA9EEE6F490F452DA4E08A004E0F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DFDC5E5D14ABE1881B487BEE6650B1E5F9AEC01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F10603D7AF69CA2B90934A25E3CAEE4BB99FA70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF12339BAFE5071170B1E358779B8AE7C00A38AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15CD2F429F36DD25EB8839CCFD610CB005268F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD44D684FF80592612D10DBEA03749DC162B2814);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE95F14B294498A053E2A3388F29261A95F7E571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36907BC3283133F5640F6886CE37197C479727D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC384FC3C39C9AC30043193059DA0638FF8928E99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7436BD01144335ED4A469BD8EEEF3DE6244EF06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC793A84A0561BAC7662A5C2978058A0359D8C0A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCACBCAED8E6677B2E4D1925BBEE222A72F075836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF7BD9E95AB6A4FDFFEC5B20FF9595C7F1F28305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE383FC68E38A26C06F89B3817E7A6A8D9B42EC42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3F21DCF0EA9BEEE61C939C25E335B1DB4C9EF9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE49F526F33D8B64E5C93A5D5649D7D5F968A075C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4BD3ABD4F5DBC17E019A412606C5F7C99C9ABEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE60E55FFA39342CB1DB630CDA80C3E018BCD5145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC287F78D98F4A8B0C22265938D0C94FF90FC171);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED3C1912EC734623EB86701B6BCF6DCA79E51F7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5E5757FBD8F04A55780E7DDE89461E34334064A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6744B47CAA0FCF3A6888DE50A398A08B7CC6088);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEE9F4FA638B34BB8565B653C1739A2FE8284AC1);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_2 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_5 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_6;
	memset((&V_6), 0, sizeof(V_6));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_7 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_8 = NULL;
	{
		// chabokPush = ChabokPush.GetInstance();
		IL2CPP_RUNTIME_CLASS_INIT(ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236_il2cpp_TypeInfo_var);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_0;
		L_0 = ChabokPush_GetInstance_m26FEDFC5A1DCBD5428D99B3E28491AA201754A8E(/*hidden argument*/NULL);
		__this->set_chabokPush_7(L_0);
		// chabokPush.Login("SMOOKE");
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_1 = __this->get_chabokPush_7();
		NullCheck(L_1);
		ChabokPush_Login_m74957D1F851F54EAF62236D5A081053FFE3A1CA4(L_1, _stringLiteral1DA520A6918DA67342F6D3A11B7796701CDFC871, /*hidden argument*/NULL);
		// Log("   Chabok --> Login : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteral387662C9A326D3E411B80614F2923E0A45213D3E, /*hidden argument*/NULL);
		// chabokPush.AddTag("Hoss");
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_2 = __this->get_chabokPush_7();
		NullCheck(L_2);
		ChabokPush_AddTag_mA3C018FFC5CBBFBC066883E0738F1797F9C99E31(L_2, _stringLiteralBE95F14B294498A053E2A3388F29261A95F7E571, (AndroidPluginCallback_t68DBCC0DC81B27A51BE81DE1345D027D6C6AF0F7 *)NULL, /*hidden argument*/NULL);
		// Log("   Chabok --> AddTag : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteralEC287F78D98F4A8B0C22265938D0C94FF90FC171, /*hidden argument*/NULL);
		// var birthdayDate = new DateTime(1993,5,19, 20,10,33);
		DateTime__ctor_m4DA8AA49E6923EDCFB8927D588AE3D79B218545D((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), ((int32_t)1993), 5, ((int32_t)19), ((int32_t)20), ((int32_t)10), ((int32_t)33), /*hidden argument*/NULL);
		// string[] favorites = { "Sport","TV", "Book", "Coding" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral688DAF8365F2089E7ED7C16138972E5239A50B2A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral688DAF8365F2089E7ED7C16138972E5239A50B2A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral8FEA2EDB43B6373E211547DF5AB654D25934B827);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8FEA2EDB43B6373E211547DF5AB654D25934B827);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralAF12339BAFE5071170B1E358779B8AE7C00A38AC);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAF12339BAFE5071170B1E358779B8AE7C00A38AC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral7036BA73163DAA855C27E7DC7A4EFABC45E304C3);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral7036BA73163DAA855C27E7DC7A4EFABC45E304C3);
		V_1 = L_7;
		// Dictionary<string, object> attributes = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_8, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_2 = L_8;
		// attributes.Add("FirstName", "Hossein");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_2;
		NullCheck(L_9);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_9, _stringLiteral98A6C258598283701F58B97B11A6F4BE184680B5, _stringLiteral92005D7137C29BFA8D55427CB7512A49F739ECC4, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// attributes.Add("Age", 26);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = V_2;
		int32_t L_11 = ((int32_t)26);
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_10, _stringLiteral6996DC0CC92C7C284749109C7F02D201312B6A5C, L_12, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// attributes.Add("Rating", 20);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_13 = V_2;
		int32_t L_14 = ((int32_t)20);
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_13);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_13, _stringLiteralBD44D684FF80592612D10DBEA03749DC162B2814, L_15, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// attributes.Add("Ration", 3.85);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_16 = V_2;
		double L_17 = (3.8500000000000001);
		RuntimeObject * L_18 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_16);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_16, _stringLiteralC7436BD01144335ED4A469BD8EEEF3DE6244EF06, L_18, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// attributes.Add("Male", false);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_19 = V_2;
		bool L_20 = ((bool)0);
		RuntimeObject * L_21 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_19, _stringLiteral9216BDEF5172F1DBAACFFF605E8C99BD4A930973, L_21, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// attributes.Add("Birthday", birthdayDate);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_22 = V_2;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_23 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_24 = L_23;
		RuntimeObject * L_25 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_22, _stringLiteralF6744B47CAA0FCF3A6888DE50A398A08B7CC6088, L_25, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// attributes.Add("Favorites", favorites);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_26 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = V_1;
		NullCheck(L_26);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_26, _stringLiteral90769F53329CDE4435A77180E60F42364B329519, (RuntimeObject *)(RuntimeObject *)L_27, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// chabokPush.SetUserAttributes(attributes);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_28 = __this->get_chabokPush_7();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_29 = V_2;
		NullCheck(L_28);
		ChabokPush_SetUserAttributes_m07C0D80DD48C56D469496E6393BC9AE9CDBA2834(L_28, L_29, /*hidden argument*/NULL);
		// Log("   Chabok --> SetUserAttributes : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteralE49F526F33D8B64E5C93A5D5649D7D5F968A075C, /*hidden argument*/NULL);
		// chabokPush.IncrementUserAttribute("Age", 2.0);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_30 = __this->get_chabokPush_7();
		NullCheck(L_30);
		ChabokPush_IncrementUserAttribute_m1685634A22A0531928A2CEDD536F613BEF469274(L_30, _stringLiteral6996DC0CC92C7C284749109C7F02D201312B6A5C, (2.0), /*hidden argument*/NULL);
		// Log("   Chabok --> IncrementUserAttribute : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteral7A767413CF3615981E3F378B2C401F9413BCD42C, /*hidden argument*/NULL);
		// chabokPush.DecrementUserAttribute("Rating", 7.0);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_31 = __this->get_chabokPush_7();
		NullCheck(L_31);
		ChabokPush_DecrementUserAttribute_m1C1315FE16AFB989D9D1303D7C3483ECB3BF94B8(L_31, _stringLiteralBD44D684FF80592612D10DBEA03749DC162B2814, (7.0), /*hidden argument*/NULL);
		// Log("   Chabok --> DecrementUserAttribute : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteralF5E5757FBD8F04A55780E7DDE89461E34334064A, /*hidden argument*/NULL);
		// chabokPush.AddToUserAttributeArray("Favorites", "Sleeping");
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_32 = __this->get_chabokPush_7();
		NullCheck(L_32);
		ChabokPush_AddToUserAttributeArray_mE9AECAE9B2762B69C35B1338753E474FE8B2F4BC(L_32, _stringLiteral90769F53329CDE4435A77180E60F42364B329519, _stringLiteral052291F7DB4D20D4A05868B4E2B2FBA30E8C72BE, /*hidden argument*/NULL);
		// Log("   Chabok --> AddToUserAttributeArray : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteralE4BD3ABD4F5DBC17E019A412606C5F7C99C9ABEA, /*hidden argument*/NULL);
		// chabokPush.RemoveFromUserAttributeArray("Favorites", "Book");
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_33 = __this->get_chabokPush_7();
		NullCheck(L_33);
		ChabokPush_RemoveFromUserAttributeArray_m2858929DD18FE9D45D6D9B0CE262EE8B273E6E3E(L_33, _stringLiteral90769F53329CDE4435A77180E60F42364B329519, _stringLiteralAF12339BAFE5071170B1E358779B8AE7C00A38AC, /*hidden argument*/NULL);
		// Log("   Chabok --> RemoveFromUserAttributeArray : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteral609C21B8A252D459962504AA2276A0E24B2878EF, /*hidden argument*/NULL);
		// var expDate = new DateTime(2021, 10, 14, 11, 22, 33);
		DateTime__ctor_m4DA8AA49E6923EDCFB8927D588AE3D79B218545D((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_3), ((int32_t)2021), ((int32_t)10), ((int32_t)14), ((int32_t)11), ((int32_t)22), ((int32_t)33), /*hidden argument*/NULL);
		// string[] editedFields = { "name", "family", "phone"};
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral319D1EB2B79ACDA1B65E4BA4BA666745E69FEECF);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral319D1EB2B79ACDA1B65E4BA4BA666745E69FEECF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralE60E55FFA39342CB1DB630CDA80C3E018BCD5145);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE60E55FFA39342CB1DB630CDA80C3E018BCD5145);
		V_4 = L_37;
		// Dictionary<string, object> eventData = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_38 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_38, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_5 = L_38;
		// eventData.Add("Edited Profile Title2", "Smooke");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_39 = V_5;
		NullCheck(L_39);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_39, _stringLiteral62564D387B16A3803250F43550BB3601EFD53E90, _stringLiteral7744FB15E8739D759829A38383DDCF47358A2096, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// eventData.Add("Edited2", false);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_40 = V_5;
		bool L_41 = ((bool)0);
		RuntimeObject * L_42 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_40);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_40, _stringLiteral9B616C76333DA9EEE6F490F452DA4E08A004E0F2, L_42, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// eventData.Add("Edited items2", 12);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_43 = V_5;
		int32_t L_44 = ((int32_t)12);
		RuntimeObject * L_45 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_43);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_43, _stringLiteral9DFDC5E5D14ABE1881B487BEE6650B1E5F9AEC01, L_45, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// eventData.Add("ExpDate", expDate);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_46 = V_5;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_47 = V_3;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_48 = L_47;
		RuntimeObject * L_49 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_46, _stringLiteral9F10603D7AF69CA2B90934A25E3CAEE4BB99FA70, L_49, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// eventData.Add("EditedFields", editedFields);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_50 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = V_4;
		NullCheck(L_50);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_50, _stringLiteralCACBCAED8E6677B2E4D1925BBEE222A72F075836, (RuntimeObject *)(RuntimeObject *)L_51, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// chabokPush.Track("Profile Edits",eventData);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_52 = __this->get_chabokPush_7();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_53 = V_5;
		NullCheck(L_52);
		ChabokPush_Track_mA98231BFF3F781875A29D1131646886930A57AFD(L_52, _stringLiteralFEE9F4FA638B34BB8565B653C1739A2FE8284AC1, L_53, /*hidden argument*/NULL);
		// Log("   Chabok --> Track : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteralCF7BD9E95AB6A4FDFFEC5B20FF9595C7F1F28305, /*hidden argument*/NULL);
		// chabokPush.TrackRevenue(20000.0);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_54 = __this->get_chabokPush_7();
		NullCheck(L_54);
		ChabokPush_TrackRevenue_m6A4C7699099B3D13BAAA060E81345CAEDC1CA942(L_54, (20000.0), /*hidden argument*/NULL);
		// Log("   Chabok --> TrackRevenue : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteralC36907BC3283133F5640F6886CE37197C479727D, /*hidden argument*/NULL);
		// var purchaseDate = new DateTime(2021, 10, 14, 11, 22, 33);
		DateTime__ctor_m4DA8AA49E6923EDCFB8927D588AE3D79B218545D((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_6), ((int32_t)2021), ((int32_t)10), ((int32_t)14), ((int32_t)11), ((int32_t)22), ((int32_t)33), /*hidden argument*/NULL);
		// string[] card = { "rice", "tuna"};
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteral00170DE1B1F87AB5BC0E1ACB89EC1E8761028DDB);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral00170DE1B1F87AB5BC0E1ACB89EC1E8761028DDB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteralED3C1912EC734623EB86701B6BCF6DCA79E51F7F);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralED3C1912EC734623EB86701B6BCF6DCA79E51F7F);
		V_7 = L_57;
		// Dictionary<string, object> revenueDic = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_58 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_58, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_8 = L_58;
		// revenueDic.Add("Badge", "VIP");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_59 = V_8;
		NullCheck(L_59);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_59, _stringLiteralE383FC68E38A26C06F89B3817E7A6A8D9B42EC42, _stringLiteral4E910634FD1B4E69D8A04A4EC4B3A4E1D7C65C70, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// revenueDic.Add("Discount", "18%");
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_60 = V_8;
		NullCheck(L_60);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_60, _stringLiteral2CD3A58A758D76D844ED9738C8E97E391BE3F2A9, _stringLiteralB15CD2F429F36DD25EB8839CCFD610CB005268F4, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// revenueDic.Add("PurchaseDate", purchaseDate);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_61 = V_8;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_62 = V_6;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_63 = L_62;
		RuntimeObject * L_64 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_61, _stringLiteralC384FC3C39C9AC30043193059DA0638FF8928E99, L_64, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// revenueDic.Add("Card", card);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_65 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = V_7;
		NullCheck(L_65);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_65, _stringLiteralE3F21DCF0EA9BEEE61C939C25E335B1DB4C9EF9E, (RuntimeObject *)(RuntimeObject *)L_66, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		// chabokPush.TrackPurchase("VIP Purchase", 500000.0, "IRR", revenueDic);
		ChabokPush_tD8CD35A9D6867726265038A610222C5C06308236 * L_67 = __this->get_chabokPush_7();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_68 = V_8;
		NullCheck(L_67);
		ChabokPush_TrackPurchase_m6F2C40F93614899622B2248C9892C65617399418(L_67, _stringLiteralC793A84A0561BAC7662A5C2978058A0359D8C0A0, (500000.0), _stringLiteral5D7E10FB1136637DF3EEA7E332D50E75ECCFAE35, L_68, /*hidden argument*/NULL);
		// Log("   Chabok --> TrackPurchase : Succeeded");
		Main_Log_m426DA9189457956ADD558035C095906128B6AFCC(__this, _stringLiteral3E8CAAA11C75D11B813C686E18F3E02443B2A332, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Main::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Log_m426DA9189457956ADD558035C095906128B6AFCC (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, RuntimeObject * ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_2 = NULL;
	{
		// txt.text += "\n";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_txt_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// txt.text += text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_txt_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		RuntimeObject * L_7 = ___text0;
		G_B1_0 = L_6;
		G_B1_1 = L_5;
		if (L_7)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_5;
			goto IL_002d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0033;
	}

IL_002d:
	{
		RuntimeObject * L_8 = ___text0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0033:
	{
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_2, L_10);
		// }
		return;
	}
}
// System.Void Main::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Update_mEC0515850D95675261C9ACB5F339441BE5CE2211 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Main::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_OnEnable_m050265ADB3A8F3BA3EBB30E0DF79A83E94350AD5 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_HandleLog_m7436497A1357F3729CD182D55DF2592974503FF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived += HandleLog;
		LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * L_0 = (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD *)il2cpp_codegen_object_new(LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var);
		LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57(L_0, __this, (intptr_t)((intptr_t)Main_HandleLog_m7436497A1357F3729CD182D55DF2592974503FF6_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_logMessageReceived_mE48C0F4824539FB22E7326AC130DDDD31F1E73B7(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Main::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_OnDisable_m600850ED52A013A6C12A27233B413BFDA24A624D (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_HandleLog_m7436497A1357F3729CD182D55DF2592974503FF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived -= HandleLog;
		LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * L_0 = (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD *)il2cpp_codegen_object_new(LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD_il2cpp_TypeInfo_var);
		LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57(L_0, __this, (intptr_t)((intptr_t)Main_HandleLog_m7436497A1357F3729CD182D55DF2592974503FF6_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_remove_logMessageReceived_mE344A51214CF8CE1E24F1F8B7CD71DA099072943(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Main::HandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_HandleLog_m7436497A1357F3729CD182D55DF2592974503FF6 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == LogType.Error)
		int32_t L_0 = ___type2;
		if (L_0)
		{
			goto IL_006c;
		}
	}
	{
		// error = error + "\n" + logString;
		String_t* L_1 = __this->get_error_6();
		String_t* L_2 = ___logString0;
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_2, /*hidden argument*/NULL);
		__this->set_error_6(L_3);
		// PopUp.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_PopUp_5();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// PopUp.transform.GetChild(0).GetComponent<Text>().text = "Error";
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_PopUp_5();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_8, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		// PopUp.transform.GetChild(1).GetComponent<Text>().text = error;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get_PopUp_5();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_11, 1, /*hidden argument*/NULL);
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13;
		L_13 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_12, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		String_t* L_14 = __this->get_error_6();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Main::Dismiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Dismiss_m54CC0BD93F5277CC8C1C760A232FD42CB6E3D4AA (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	{
		// PopUp.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_PopUp_5();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main__ctor_m4FD44116A25A9FD4D598F84273F9E9E69B9B7302 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AndroidPluginCallback/OnSuccessEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccessEvent__ctor_mE027A19AA70C967719AB169906ABF97D412F04EF (OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AndroidPluginCallback/OnSuccessEvent::Invoke(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccessEvent_Invoke_mFF2312ED02279A920A4ABA8E720BF448BC6303C7 (OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___count0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___count0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___count0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___count0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___count0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___count0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___count0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___count0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * >::Invoke(targetMethod, targetThis, ___count0);
					else
						GenericVirtActionInvoker1< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * >::Invoke(targetMethod, targetThis, ___count0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___count0);
					else
						VirtActionInvoker1< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___count0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___count0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___count0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult AndroidPluginCallback/OnSuccessEvent::BeginInvoke(UnityEngine.AndroidJavaObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSuccessEvent_BeginInvoke_m009396D59DA18ADBE181BC523C510AE956C6C2F0 (OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___count0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___count0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void AndroidPluginCallback/OnSuccessEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSuccessEvent_EndInvoke_m648886D59A65FE186C7FD1C6CF52361A0E82889C (OnSuccessEvent_tEC8564F100C54A52BEEB6D7A5E3219072718AC04 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AndroidPluginCallback/onErrorEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onErrorEvent__ctor_mFF73114772B2B9D1EA9711A2A931BEA33AAA33CD (onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AndroidPluginCallback/onErrorEvent::Invoke(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onErrorEvent_Invoke_m5F128EA1D514950CB932F8FE617A6494224D9251 (onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___exception0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___exception0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___exception0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___exception0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___exception0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___exception0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___exception0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___exception0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * >::Invoke(targetMethod, targetThis, ___exception0);
					else
						GenericVirtActionInvoker1< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * >::Invoke(targetMethod, targetThis, ___exception0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___exception0);
					else
						VirtActionInvoker1< AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___exception0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___exception0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___exception0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult AndroidPluginCallback/onErrorEvent::BeginInvoke(UnityEngine.AndroidJavaObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onErrorEvent_BeginInvoke_mF5386517C42DAFB639EAAAA6FB2BEDF43873B067 (onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___exception0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___exception0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void AndroidPluginCallback/onErrorEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onErrorEvent_EndInvoke_m15051B4AA0F56A375DA9A115D2BC90ADE44BAD15 (onErrorEvent_t20F20CEED9B1A807BDA6C43DB3E264C283750BE8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSONObject/<BakeAsync>d__108::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__108__ctor_mA04798BFE61915852DEA53D616C68C5C5F749CCA (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void JSONObject/<BakeAsync>d__108::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__108_System_IDisposable_Dispose_m510970F2FA743A25DD797AAB2FAB0F3C4DB0C339 (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CBakeAsyncU3Ed__108_U3CU3Em__Finally1_m46BD16C617A81F5EA34A1ACCE396B0839D5724CB(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean JSONObject/<BakeAsync>d__108::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBakeAsyncU3Ed__108_MoveNext_m4E2DE68D8257C642BD0032E925D282A6F801B181 (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0069;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00a6;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (type != Type.BAKED)
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5 = L_4->get_type_6();
			if ((((int32_t)L_5) == ((int32_t)6)))
			{
				goto IL_009b;
			}
		}

IL_002c:
		{
			// foreach (string s in PrintAsync())
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = V_2;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = JSONObject_PrintAsync_m109E1BB961985C7BA46DBD74D2569BDB3DB0412A(L_6, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_7);
			__this->set_U3CU3E7__wrap1_4(L_8);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_007a;
		}

IL_0048:
		{
			// foreach (string s in PrintAsync())
			RuntimeObject* L_9 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_9);
			String_t* L_10;
			L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_9);
			V_3 = L_10;
			// if (s == null)
			String_t* L_11 = V_3;
			if (L_11)
			{
				goto IL_0073;
			}
		}

IL_0057:
		{
			// yield return s;
			String_t* L_12 = V_3;
			__this->set_U3CU3E2__current_1(L_12);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00a6;
		}

IL_0069:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_007a;
		}

IL_0073:
		{
			// str = s;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_13 = V_2;
			String_t* L_14 = V_3;
			NullCheck(L_13);
			L_13->set_str_9(L_14);
		}

IL_007a:
		{
			// foreach (string s in PrintAsync())
			RuntimeObject* L_15 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0048;
			}
		}

IL_0087:
		{
			U3CBakeAsyncU3Ed__108_U3CU3Em__Finally1_m46BD16C617A81F5EA34A1ACCE396B0839D5724CB(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			// type = Type.BAKED;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_17 = V_2;
			NullCheck(L_17);
			L_17->set_type_6(6);
		}

IL_009b:
		{
			// }
			V_0 = (bool)0;
			goto IL_00a6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_009f;
	}

FAULT_009f:
	{ // begin fault (depth: 1)
		U3CBakeAsyncU3Ed__108_System_IDisposable_Dispose_m510970F2FA743A25DD797AAB2FAB0F3C4DB0C339(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(159)
	} // end fault
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a6:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
// System.Void JSONObject/<BakeAsync>d__108::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__108_U3CU3Em__Finally1_m46BD16C617A81F5EA34A1ACCE396B0839D5724CB (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object JSONObject/<BakeAsync>d__108::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBakeAsyncU3Ed__108_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m10E1919EE9FB463EBAB69AF548609592B7590B71 (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JSONObject/<BakeAsync>d__108::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBakeAsyncU3Ed__108_System_Collections_IEnumerator_Reset_m4F60D38879DCF5320C154FC2A706F12A8E4C92FA (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBakeAsyncU3Ed__108_System_Collections_IEnumerator_Reset_m4F60D38879DCF5320C154FC2A706F12A8E4C92FA_RuntimeMethod_var)));
	}
}
// System.Object JSONObject/<BakeAsync>d__108::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBakeAsyncU3Ed__108_System_Collections_IEnumerator_get_Current_m696FAE53E9638F31466CCEEEF97E52353C3082E2 (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> JSONObject/<BakeAsync>d__108::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__108_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m4E596D386FBB84C92DA9FF995EF5FE7C235451D7 (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * L_3 = (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 *)il2cpp_codegen_object_new(U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3_il2cpp_TypeInfo_var);
		U3CBakeAsyncU3Ed__108__ctor_mA04798BFE61915852DEA53D616C68C5C5F749CCA(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * L_4 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator JSONObject/<BakeAsync>d__108::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBakeAsyncU3Ed__108_System_Collections_IEnumerable_GetEnumerator_mA61FA9F32E5211F8D73283C291C96CF306DF01A4 (U3CBakeAsyncU3Ed__108_t12FDA0DEF071F1DFE5EAD74E673EEA119DC715A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CBakeAsyncU3Ed__108_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m4E596D386FBB84C92DA9FF995EF5FE7C235451D7(__this, /*hidden argument*/NULL);
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
// System.Void JSONObject/<PrintAsync>d__110::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__110__ctor_m5A43C6475E4A6D106611642768C9E5B5C513B8B7 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void JSONObject/<PrintAsync>d__110::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__110_System_IDisposable_Dispose_mA90CC52D229E3C1E7A1753F20BF5094A518A4AB6 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CPrintAsyncU3Ed__110_U3CU3Em__Finally1_mDD6F4B458A0BBEE0E544F9F01792E0EDBDF42EB7(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean JSONObject/<PrintAsync>d__110::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPrintAsyncU3Ed__110_MoveNext_mC71589FA475F81E38934151C5C5E47A5193E7859 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_0098;
				}
				case 2:
				{
					goto IL_00d6;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_00e8;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			// StringBuilder builder = new StringBuilder();
			StringBuilder_t * L_3 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_3, /*hidden argument*/NULL);
			__this->set_U3CbuilderU3E5__2_6(L_3);
			// printWatch.Reset();
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_4 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_4);
			Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14(L_4, /*hidden argument*/NULL);
			// printWatch.Start();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_5 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_5);
			Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_5, /*hidden argument*/NULL);
			// foreach (IEnumerable e in StringifyAsync(0, builder, pretty))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_6 = V_2;
			StringBuilder_t * L_7 = __this->get_U3CbuilderU3E5__2_6();
			bool L_8 = __this->get_pretty_4();
			NullCheck(L_6);
			RuntimeObject* L_9;
			L_9 = JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA(L_6, 0, L_7, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_9);
			__this->set_U3CU3E7__wrap2_7(L_10);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a0;
		}

IL_0075:
		{
			// foreach (IEnumerable e in StringifyAsync(0, builder, pretty))
			RuntimeObject* L_11 = __this->get_U3CU3E7__wrap2_7();
			NullCheck(L_11);
			RuntimeObject * L_12;
			L_12 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			// yield return null;
			__this->set_U3CU3E2__current_1((String_t*)NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00e8;
		}

IL_0098:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_00a0:
		{
			// foreach (IEnumerable e in StringifyAsync(0, builder, pretty))
			RuntimeObject* L_13 = __this->get_U3CU3E7__wrap2_7();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0075;
			}
		}

IL_00ad:
		{
			U3CPrintAsyncU3Ed__110_U3CU3Em__Finally1_mDD6F4B458A0BBEE0E544F9F01792E0EDBDF42EB7(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_7((RuntimeObject*)NULL);
			// yield return builder.ToString();
			StringBuilder_t * L_15 = __this->get_U3CbuilderU3E5__2_6();
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
			__this->set_U3CU3E2__current_1(L_16);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_00e8;
		}

IL_00d6:
		{
			__this->set_U3CU3E1__state_0((-1));
			// }
			V_0 = (bool)0;
			goto IL_00e8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00e1;
	}

FAULT_00e1:
	{ // begin fault (depth: 1)
		U3CPrintAsyncU3Ed__110_System_IDisposable_Dispose_mA90CC52D229E3C1E7A1753F20BF5094A518A4AB6(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(225)
	} // end fault
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e8:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void JSONObject/<PrintAsync>d__110::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__110_U3CU3Em__Finally1_mDD6F4B458A0BBEE0E544F9F01792E0EDBDF42EB7 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_7();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.String JSONObject/<PrintAsync>d__110::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CPrintAsyncU3Ed__110_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_mED0B614E22555972F5C65C8B7B7FDD34F63ACBA5 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JSONObject/<PrintAsync>d__110::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrintAsyncU3Ed__110_System_Collections_IEnumerator_Reset_m9249FD1FDC646EA9AFAC3F3FD54BD5C5C6476EA6 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPrintAsyncU3Ed__110_System_Collections_IEnumerator_Reset_m9249FD1FDC646EA9AFAC3F3FD54BD5C5C6476EA6_RuntimeMethod_var)));
	}
}
// System.Object JSONObject/<PrintAsync>d__110::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPrintAsyncU3Ed__110_System_Collections_IEnumerator_get_Current_m08099FAFC7E7E672B0D7EC43910939F50CD78ECB (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> JSONObject/<PrintAsync>d__110::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__110_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m090A067E3FEFA2D75883ECF0BD733CFF47D80964 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * L_3 = (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A *)il2cpp_codegen_object_new(U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A_il2cpp_TypeInfo_var);
		U3CPrintAsyncU3Ed__110__ctor_m5A43C6475E4A6D106611642768C9E5B5C513B8B7(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * L_4 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__pretty_5();
		NullCheck(L_6);
		L_6->set_pretty_4(L_7);
		U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator JSONObject/<PrintAsync>d__110::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPrintAsyncU3Ed__110_System_Collections_IEnumerable_GetEnumerator_m30A63E0C5D5A6329031FE3AABDFEE52592C97F49 (U3CPrintAsyncU3Ed__110_tFBE96BE348FED5DB1562943DB7F78D8A9916B83A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CPrintAsyncU3Ed__110_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m090A067E3FEFA2D75883ECF0BD733CFF47D80964(__this, /*hidden argument*/NULL);
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
// System.Void JSONObject/<StringifyAsync>d__113::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113__ctor_m954F17288382055AD65E54E2B141D29870D81A03 (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void JSONObject/<StringifyAsync>d__113::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113_System_IDisposable_Dispose_mA1B228032B652F768CF1A9E978149F6532E33FEC (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)-3))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-4))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_0020:
	{
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x34, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		U3CStringifyAsyncU3Ed__113_U3CU3Em__Finally1_m663BEBB2B51194D6F6E6C14F30037AF4895A104E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_002a:
	{
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		U3CStringifyAsyncU3Ed__113_U3CU3Em__Finally2_m3253B19374AF257FC1D6926372946A63F9647504(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean JSONObject/<StringifyAsync>d__113::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStringifyAsyncU3Ed__113_MoveNext_m20DA79FA4AC8DACC13EB184B0E7FA89FA99586CB (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A88DEF28104508D70E81DC82A27CDD95EDDA6DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57F692809412BBB13F764D9044820BC70823E64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_2 = NULL;
	int32_t V_3 = 0;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * V_7 = NULL;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	RuntimeObject* V_12 = NULL;
	int32_t V_13 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_0095;
				}
				case 2:
				{
					goto IL_02cc;
				}
				case 3:
				{
					goto IL_04ca;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_061a;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (depth++ > MAX_DEPTH)
			int32_t L_3 = __this->get_depth_3();
			V_3 = L_3;
			int32_t L_4 = V_3;
			__this->set_depth_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
			int32_t L_5 = V_3;
			if ((((int32_t)L_5) <= ((int32_t)((int32_t)100))))
			{
				goto IL_0058;
			}
		}

IL_0047:
		{
			//             Debug.Log
			// #else
			//             Debug.WriteLine
			// #endif
			//             ("reached max depth!");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8A88DEF28104508D70E81DC82A27CDD95EDDA6DC, /*hidden argument*/NULL);
			// yield break;
			V_0 = (bool)0;
			goto IL_061a;
		}

IL_0058:
		{
			// if (printWatch.Elapsed.TotalSeconds > maxFrameTime)
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_6 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_6);
			TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7;
			L_7 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_6, /*hidden argument*/NULL);
			V_4 = L_7;
			double L_8;
			L_8 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_4), /*hidden argument*/NULL);
			if ((!(((double)L_8) > ((double)(0.0080000003799796104)))))
			{
				goto IL_00a6;
			}
		}

IL_0076:
		{
			// printWatch.Reset();
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_9 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_9);
			Stopwatch_Reset_m79B1D65568465AE5B1A68EF3A2A65218590ABD14(L_9, /*hidden argument*/NULL);
			// yield return null;
			__this->set_U3CU3E2__current_1(NULL);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_061a;
		}

IL_0095:
		{
			__this->set_U3CU3E1__state_0((-1));
			// printWatch.Start();
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_10 = ((JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_StaticFields*)il2cpp_codegen_static_fields_for(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var))->get_printWatch_15();
			NullCheck(L_10);
			Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_10, /*hidden argument*/NULL);
		}

IL_00a6:
		{
			// switch (type)
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_11 = V_2;
			NullCheck(L_11);
			int32_t L_12 = L_11->get_type_6();
			V_5 = L_12;
			int32_t L_13 = V_5;
			switch (L_13)
			{
				case 0:
				{
					goto IL_05fe;
				}
				case 1:
				{
					goto IL_00ed;
				}
				case 2:
				{
					goto IL_0109;
				}
				case 3:
				{
					goto IL_01bc;
				}
				case 4:
				{
					goto IL_03d5;
				}
				case 5:
				{
					goto IL_05d0;
				}
				case 6:
				{
					goto IL_00d6;
				}
			}
		}

IL_00d1:
		{
			goto IL_060f;
		}

IL_00d6:
		{
			// builder.Append(str);
			StringBuilder_t * L_14 = __this->get_builder_6();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_15 = V_2;
			NullCheck(L_15);
			String_t* L_16 = L_15->get_str_9();
			NullCheck(L_14);
			StringBuilder_t * L_17;
			L_17 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, L_16, /*hidden argument*/NULL);
			// break;
			goto IL_060f;
		}

IL_00ed:
		{
			// builder.AppendFormat("\"{0}\"", str);
			StringBuilder_t * L_18 = __this->get_builder_6();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_19 = V_2;
			NullCheck(L_19);
			String_t* L_20 = L_19->get_str_9();
			NullCheck(L_18);
			StringBuilder_t * L_21;
			L_21 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_18, _stringLiteral49A5AAB83859C60FC692064F7CA72853E8B6B189, L_20, /*hidden argument*/NULL);
			// break;
			goto IL_060f;
		}

IL_0109:
		{
			// if (useInt)
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_22 = V_2;
			NullCheck(L_22);
			bool L_23 = L_22->get_useInt_11();
			if (!L_23)
			{
				goto IL_0132;
			}
		}

IL_0111:
		{
			// builder.Append(i.ToString(CultureInfo.InvariantCulture));
			StringBuilder_t * L_24 = __this->get_builder_6();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_25 = V_2;
			NullCheck(L_25);
			int64_t* L_26 = L_25->get_address_of_i_12();
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_27;
			L_27 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			String_t* L_28;
			L_28 = Int64_ToString_m1D712B17D4BDBE43D1E12EA52885C5D345C1CFA2((int64_t*)L_26, L_27, /*hidden argument*/NULL);
			NullCheck(L_24);
			StringBuilder_t * L_29;
			L_29 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, L_28, /*hidden argument*/NULL);
			// }
			goto IL_060f;
		}

IL_0132:
		{
			// if (float.IsInfinity(n))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_30 = V_2;
			NullCheck(L_30);
			float L_31 = L_30->get_n_10();
			bool L_32;
			L_32 = Single_IsInfinity_m10D3B235800230231AFC34AFEC4D320D06F794C1(L_31, /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_0155;
			}
		}

IL_013f:
		{
			// builder.Append(INFINITY);
			StringBuilder_t * L_33 = __this->get_builder_6();
			NullCheck(L_33);
			StringBuilder_t * L_34;
			L_34 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_33, _stringLiteralA57F692809412BBB13F764D9044820BC70823E64, /*hidden argument*/NULL);
			goto IL_060f;
		}

IL_0155:
		{
			// else if (float.IsNegativeInfinity(n))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_35 = V_2;
			NullCheck(L_35);
			float L_36 = L_35->get_n_10();
			bool L_37;
			L_37 = Single_IsNegativeInfinity_m08D484739F9E73C171CFC2819E30A983E87C68AB(L_36, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_0178;
			}
		}

IL_0162:
		{
			// builder.Append(NEGINFINITY);
			StringBuilder_t * L_38 = __this->get_builder_6();
			NullCheck(L_38);
			StringBuilder_t * L_39;
			L_39 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_38, _stringLiteralC93B50DB5A16A30443D060A92DCF406D5233A92B, /*hidden argument*/NULL);
			goto IL_060f;
		}

IL_0178:
		{
			// else if (float.IsNaN(n))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_40 = V_2;
			NullCheck(L_40);
			float L_41 = L_40->get_n_10();
			bool L_42;
			L_42 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_41, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_019b;
			}
		}

IL_0185:
		{
			// builder.Append(NaN);
			StringBuilder_t * L_43 = __this->get_builder_6();
			NullCheck(L_43);
			StringBuilder_t * L_44;
			L_44 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_43, _stringLiteral59E22C292F27E6EDE5644C7B811538F78C4ACAB0, /*hidden argument*/NULL);
			goto IL_060f;
		}

IL_019b:
		{
			// builder.Append(n.ToString(CultureInfo.InvariantCulture));
			StringBuilder_t * L_45 = __this->get_builder_6();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_46 = V_2;
			NullCheck(L_46);
			float* L_47 = L_46->get_address_of_n_10();
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_48;
			L_48 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			String_t* L_49;
			L_49 = Single_ToString_mF554E46C641C609768519378FB0486DFD7F82985((float*)L_47, L_48, /*hidden argument*/NULL);
			NullCheck(L_45);
			StringBuilder_t * L_50;
			L_50 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_45, L_49, /*hidden argument*/NULL);
			// break;
			goto IL_060f;
		}

IL_01bc:
		{
			// builder.Append("{");
			StringBuilder_t * L_51 = __this->get_builder_6();
			NullCheck(L_51);
			StringBuilder_t * L_52;
			L_52 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_51, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
			// if (list.Count > 0)
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_53 = V_2;
			NullCheck(L_53);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_54 = L_53->get_list_7();
			NullCheck(L_54);
			int32_t L_55;
			L_55 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_54, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_55) <= ((int32_t)0)))
			{
				goto IL_0370;
			}
		}

IL_01de:
		{
			// if (pretty)
			bool L_56 = __this->get_pretty_8();
			if (!L_56)
			{
				goto IL_01f7;
			}
		}

IL_01e6:
		{
			// builder.Append(NEWLINE);
			StringBuilder_t * L_57 = __this->get_builder_6();
			NullCheck(L_57);
			StringBuilder_t * L_58;
			L_58 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_57, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		}

IL_01f7:
		{
			// for (int i = 0; i < list.Count; i++)
			__this->set_U3CiU3E5__2_10(0);
			goto IL_0328;
		}

IL_0203:
		{
			// string key = keys[i];
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_59 = V_2;
			NullCheck(L_59);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_60 = L_59->get_keys_8();
			int32_t L_61 = __this->get_U3CiU3E5__2_10();
			NullCheck(L_60);
			String_t* L_62;
			L_62 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_60, L_61, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			V_6 = L_62;
			// JSONObject obj = list[i];
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_63 = V_2;
			NullCheck(L_63);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_64 = L_63->get_list_7();
			int32_t L_65 = __this->get_U3CiU3E5__2_10();
			NullCheck(L_64);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_66;
			L_66 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
			V_7 = L_66;
			// if (obj)
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_67 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			bool L_68;
			L_68 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_67, /*hidden argument*/NULL);
			if (!L_68)
			{
				goto IL_0318;
			}
		}

IL_0235:
		{
			// if (pretty)
			bool L_69 = __this->get_pretty_8();
			if (!L_69)
			{
				goto IL_0263;
			}
		}

IL_023d:
		{
			// for (int j = 0; j < depth; j++)
			V_8 = 0;
			goto IL_0259;
		}

IL_0242:
		{
			// builder.Append("\t"); 
			StringBuilder_t * L_70 = __this->get_builder_6();
			NullCheck(L_70);
			StringBuilder_t * L_71;
			L_71 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_70, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
			// for (int j = 0; j < depth; j++)
			int32_t L_72 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		}

IL_0259:
		{
			// for (int j = 0; j < depth; j++)
			int32_t L_73 = V_8;
			int32_t L_74 = __this->get_depth_3();
			if ((((int32_t)L_73) < ((int32_t)L_74)))
			{
				goto IL_0242;
			}
		}

IL_0263:
		{
			// builder.AppendFormat("\"{0}\":", key);
			StringBuilder_t * L_75 = __this->get_builder_6();
			String_t* L_76 = V_6;
			NullCheck(L_75);
			StringBuilder_t * L_77;
			L_77 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_75, _stringLiteral763076C684EFEFA1B5A84D92C472EA6FF54AB95D, L_76, /*hidden argument*/NULL);
			// foreach (IEnumerable e in obj.StringifyAsync(depth, builder, pretty))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_78 = V_7;
			int32_t L_79 = __this->get_depth_3();
			StringBuilder_t * L_80 = __this->get_builder_6();
			bool L_81 = __this->get_pretty_8();
			NullCheck(L_78);
			RuntimeObject* L_82;
			L_82 = JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA(L_78, L_79, L_80, L_81, /*hidden argument*/NULL);
			NullCheck(L_82);
			RuntimeObject* L_83;
			L_83 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_82);
			__this->set_U3CU3E7__wrap2_11(L_83);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_02d4;
		}

IL_02a4:
		{
			// foreach (IEnumerable e in obj.StringifyAsync(depth, builder, pretty))
			RuntimeObject* L_84 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_84);
			RuntimeObject * L_85;
			L_85 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_84);
			V_9 = ((RuntimeObject*)Castclass((RuntimeObject*)L_85, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var));
			// yield return e;
			RuntimeObject* L_86 = V_9;
			__this->set_U3CU3E2__current_1(L_86);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_061a;
		}

IL_02cc:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_02d4:
		{
			// foreach (IEnumerable e in obj.StringifyAsync(depth, builder, pretty))
			RuntimeObject* L_87 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_87);
			bool L_88;
			L_88 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_87);
			if (L_88)
			{
				goto IL_02a4;
			}
		}

IL_02e1:
		{
			U3CStringifyAsyncU3Ed__113_U3CU3Em__Finally1_m663BEBB2B51194D6F6E6C14F30037AF4895A104E(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_11((RuntimeObject*)NULL);
			// builder.Append(",");
			StringBuilder_t * L_89 = __this->get_builder_6();
			NullCheck(L_89);
			StringBuilder_t * L_90;
			L_90 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_89, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
			// if (pretty)
			bool L_91 = __this->get_pretty_8();
			if (!L_91)
			{
				goto IL_0318;
			}
		}

IL_0307:
		{
			// builder.Append(NEWLINE);
			StringBuilder_t * L_92 = __this->get_builder_6();
			NullCheck(L_92);
			StringBuilder_t * L_93;
			L_93 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_92, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		}

IL_0318:
		{
			// for (int i = 0; i < list.Count; i++)
			int32_t L_94 = __this->get_U3CiU3E5__2_10();
			V_3 = L_94;
			int32_t L_95 = V_3;
			__this->set_U3CiU3E5__2_10(((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1)));
		}

IL_0328:
		{
			// for (int i = 0; i < list.Count; i++)
			int32_t L_96 = __this->get_U3CiU3E5__2_10();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_97 = V_2;
			NullCheck(L_97);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_98 = L_97->get_list_7();
			NullCheck(L_98);
			int32_t L_99;
			L_99 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_98, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_96) < ((int32_t)L_99)))
			{
				goto IL_0203;
			}
		}

IL_033e:
		{
			// if (pretty)
			bool L_100 = __this->get_pretty_8();
			if (!L_100)
			{
				goto IL_035b;
			}
		}

IL_0346:
		{
			// builder.Length -= 2;
			StringBuilder_t * L_101 = __this->get_builder_6();
			StringBuilder_t * L_102 = L_101;
			NullCheck(L_102);
			int32_t L_103;
			L_103 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_102, /*hidden argument*/NULL);
			NullCheck(L_102);
			StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_102, ((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)2)), /*hidden argument*/NULL);
			goto IL_0370;
		}

IL_035b:
		{
			// builder.Length--;
			StringBuilder_t * L_104 = __this->get_builder_6();
			StringBuilder_t * L_105 = L_104;
			NullCheck(L_105);
			int32_t L_106;
			L_106 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_105, /*hidden argument*/NULL);
			V_3 = L_106;
			int32_t L_107 = V_3;
			NullCheck(L_105);
			StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_105, ((int32_t)il2cpp_codegen_subtract((int32_t)L_107, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0370:
		{
			// if (pretty && list.Count > 0)
			bool L_108 = __this->get_pretty_8();
			if (!L_108)
			{
				goto IL_03bf;
			}
		}

IL_0378:
		{
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_109 = V_2;
			NullCheck(L_109);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_110 = L_109->get_list_7();
			NullCheck(L_110);
			int32_t L_111;
			L_111 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_110, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_111) <= ((int32_t)0)))
			{
				goto IL_03bf;
			}
		}

IL_0386:
		{
			// builder.Append(NEWLINE);
			StringBuilder_t * L_112 = __this->get_builder_6();
			NullCheck(L_112);
			StringBuilder_t * L_113;
			L_113 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_112, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
			// for (int j = 0; j < depth - 1; j++)
			V_10 = 0;
			goto IL_03b3;
		}

IL_039c:
		{
			// builder.Append("\t"); 
			StringBuilder_t * L_114 = __this->get_builder_6();
			NullCheck(L_114);
			StringBuilder_t * L_115;
			L_115 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_114, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
			// for (int j = 0; j < depth - 1; j++)
			int32_t L_116 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		}

IL_03b3:
		{
			// for (int j = 0; j < depth - 1; j++)
			int32_t L_117 = V_10;
			int32_t L_118 = __this->get_depth_3();
			if ((((int32_t)L_117) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)1)))))
			{
				goto IL_039c;
			}
		}

IL_03bf:
		{
			// builder.Append("}");
			StringBuilder_t * L_119 = __this->get_builder_6();
			NullCheck(L_119);
			StringBuilder_t * L_120;
			L_120 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_119, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
			// break;
			goto IL_060f;
		}

IL_03d5:
		{
			// builder.Append("[");
			StringBuilder_t * L_121 = __this->get_builder_6();
			NullCheck(L_121);
			StringBuilder_t * L_122;
			L_122 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_121, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
			// if (list.Count > 0)
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_123 = V_2;
			NullCheck(L_123);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_124 = L_123->get_list_7();
			NullCheck(L_124);
			int32_t L_125;
			L_125 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_124, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_125) <= ((int32_t)0)))
			{
				goto IL_056e;
			}
		}

IL_03f7:
		{
			// if (pretty)
			bool L_126 = __this->get_pretty_8();
			if (!L_126)
			{
				goto IL_0410;
			}
		}

IL_03ff:
		{
			// builder.Append(NEWLINE); 
			StringBuilder_t * L_127 = __this->get_builder_6();
			NullCheck(L_127);
			StringBuilder_t * L_128;
			L_128 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_127, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		}

IL_0410:
		{
			// for (int i = 0; i < list.Count; i++)
			__this->set_U3CiU3E5__2_10(0);
			goto IL_0526;
		}

IL_041c:
		{
			// if (list[i])
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_129 = V_2;
			NullCheck(L_129);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_130 = L_129->get_list_7();
			int32_t L_131 = __this->get_U3CiU3E5__2_10();
			NullCheck(L_130);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_132;
			L_132 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_130, L_131, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722_il2cpp_TypeInfo_var);
			bool L_133;
			L_133 = JSONObject_op_Implicit_m39B3DDFCCE550DB5B621175F55C3661547B73F5F(L_132, /*hidden argument*/NULL);
			if (!L_133)
			{
				goto IL_0516;
			}
		}

IL_0437:
		{
			// if (pretty)
			bool L_134 = __this->get_pretty_8();
			if (!L_134)
			{
				goto IL_0465;
			}
		}

IL_043f:
		{
			// for (int j = 0; j < depth; j++)
			V_11 = 0;
			goto IL_045b;
		}

IL_0444:
		{
			// builder.Append("\t"); 
			StringBuilder_t * L_135 = __this->get_builder_6();
			NullCheck(L_135);
			StringBuilder_t * L_136;
			L_136 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_135, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
			// for (int j = 0; j < depth; j++)
			int32_t L_137 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
		}

IL_045b:
		{
			// for (int j = 0; j < depth; j++)
			int32_t L_138 = V_11;
			int32_t L_139 = __this->get_depth_3();
			if ((((int32_t)L_138) < ((int32_t)L_139)))
			{
				goto IL_0444;
			}
		}

IL_0465:
		{
			// foreach (IEnumerable e in list[i].StringifyAsync(depth, builder, pretty))
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_140 = V_2;
			NullCheck(L_140);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_141 = L_140->get_list_7();
			int32_t L_142 = __this->get_U3CiU3E5__2_10();
			NullCheck(L_141);
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_143;
			L_143 = List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_inline(L_141, L_142, /*hidden argument*/List_1_get_Item_m8C10E976A92A99F9A68B84023293FBCCB26EDB4D_RuntimeMethod_var);
			int32_t L_144 = __this->get_depth_3();
			StringBuilder_t * L_145 = __this->get_builder_6();
			bool L_146 = __this->get_pretty_8();
			NullCheck(L_143);
			RuntimeObject* L_147;
			L_147 = JSONObject_StringifyAsync_m1FDB9203BA364F417A9DD46DA8D6739AA126EAEA(L_143, L_144, L_145, L_146, /*hidden argument*/NULL);
			NullCheck(L_147);
			RuntimeObject* L_148;
			L_148 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_147);
			__this->set_U3CU3E7__wrap2_11(L_148);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_04d2;
		}

IL_04a2:
		{
			// foreach (IEnumerable e in list[i].StringifyAsync(depth, builder, pretty))
			RuntimeObject* L_149 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_149);
			RuntimeObject * L_150;
			L_150 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_149);
			V_12 = ((RuntimeObject*)Castclass((RuntimeObject*)L_150, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var));
			// yield return e;
			RuntimeObject* L_151 = V_12;
			__this->set_U3CU3E2__current_1(L_151);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_061a;
		}

IL_04ca:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_04d2:
		{
			// foreach (IEnumerable e in list[i].StringifyAsync(depth, builder, pretty))
			RuntimeObject* L_152 = __this->get_U3CU3E7__wrap2_11();
			NullCheck(L_152);
			bool L_153;
			L_153 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_152);
			if (L_153)
			{
				goto IL_04a2;
			}
		}

IL_04df:
		{
			U3CStringifyAsyncU3Ed__113_U3CU3Em__Finally2_m3253B19374AF257FC1D6926372946A63F9647504(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_11((RuntimeObject*)NULL);
			// builder.Append(",");
			StringBuilder_t * L_154 = __this->get_builder_6();
			NullCheck(L_154);
			StringBuilder_t * L_155;
			L_155 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_154, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
			// if (pretty)
			bool L_156 = __this->get_pretty_8();
			if (!L_156)
			{
				goto IL_0516;
			}
		}

IL_0505:
		{
			// builder.Append(NEWLINE); 
			StringBuilder_t * L_157 = __this->get_builder_6();
			NullCheck(L_157);
			StringBuilder_t * L_158;
			L_158 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_157, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
		}

IL_0516:
		{
			// for (int i = 0; i < list.Count; i++)
			int32_t L_159 = __this->get_U3CiU3E5__2_10();
			V_3 = L_159;
			int32_t L_160 = V_3;
			__this->set_U3CiU3E5__2_10(((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)1)));
		}

IL_0526:
		{
			// for (int i = 0; i < list.Count; i++)
			int32_t L_161 = __this->get_U3CiU3E5__2_10();
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_162 = V_2;
			NullCheck(L_162);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_163 = L_162->get_list_7();
			NullCheck(L_163);
			int32_t L_164;
			L_164 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_163, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_161) < ((int32_t)L_164)))
			{
				goto IL_041c;
			}
		}

IL_053c:
		{
			// if (pretty)
			bool L_165 = __this->get_pretty_8();
			if (!L_165)
			{
				goto IL_0559;
			}
		}

IL_0544:
		{
			// builder.Length -= 2;
			StringBuilder_t * L_166 = __this->get_builder_6();
			StringBuilder_t * L_167 = L_166;
			NullCheck(L_167);
			int32_t L_168;
			L_168 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_167, /*hidden argument*/NULL);
			NullCheck(L_167);
			StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_167, ((int32_t)il2cpp_codegen_subtract((int32_t)L_168, (int32_t)2)), /*hidden argument*/NULL);
			goto IL_056e;
		}

IL_0559:
		{
			// builder.Length--;
			StringBuilder_t * L_169 = __this->get_builder_6();
			StringBuilder_t * L_170 = L_169;
			NullCheck(L_170);
			int32_t L_171;
			L_171 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_170, /*hidden argument*/NULL);
			V_3 = L_171;
			int32_t L_172 = V_3;
			NullCheck(L_170);
			StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_170, ((int32_t)il2cpp_codegen_subtract((int32_t)L_172, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_056e:
		{
			// if (pretty && list.Count > 0)
			bool L_173 = __this->get_pretty_8();
			if (!L_173)
			{
				goto IL_05bd;
			}
		}

IL_0576:
		{
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_174 = V_2;
			NullCheck(L_174);
			List_1_tC43597506C82EA19EB7F29C3DF07B1F187D9D90D * L_175 = L_174->get_list_7();
			NullCheck(L_175);
			int32_t L_176;
			L_176 = List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_inline(L_175, /*hidden argument*/List_1_get_Count_mBDB2F3823A581E287619155EB53824931B421E95_RuntimeMethod_var);
			if ((((int32_t)L_176) <= ((int32_t)0)))
			{
				goto IL_05bd;
			}
		}

IL_0584:
		{
			// builder.Append(NEWLINE);
			StringBuilder_t * L_177 = __this->get_builder_6();
			NullCheck(L_177);
			StringBuilder_t * L_178;
			L_178 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_177, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, /*hidden argument*/NULL);
			// for (int j = 0; j < depth - 1; j++)
			V_13 = 0;
			goto IL_05b1;
		}

IL_059a:
		{
			// builder.Append("\t"); 
			StringBuilder_t * L_179 = __this->get_builder_6();
			NullCheck(L_179);
			StringBuilder_t * L_180;
			L_180 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_179, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3, /*hidden argument*/NULL);
			// for (int j = 0; j < depth - 1; j++)
			int32_t L_181 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_181, (int32_t)1));
		}

IL_05b1:
		{
			// for (int j = 0; j < depth - 1; j++)
			int32_t L_182 = V_13;
			int32_t L_183 = __this->get_depth_3();
			if ((((int32_t)L_182) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_183, (int32_t)1)))))
			{
				goto IL_059a;
			}
		}

IL_05bd:
		{
			// builder.Append("]");
			StringBuilder_t * L_184 = __this->get_builder_6();
			NullCheck(L_184);
			StringBuilder_t * L_185;
			L_185 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_184, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
			// break;
			goto IL_060f;
		}

IL_05d0:
		{
			// if (b)
			JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_186 = V_2;
			NullCheck(L_186);
			bool L_187 = L_186->get_b_13();
			if (!L_187)
			{
				goto IL_05eb;
			}
		}

IL_05d8:
		{
			// builder.Append("true");
			StringBuilder_t * L_188 = __this->get_builder_6();
			NullCheck(L_188);
			StringBuilder_t * L_189;
			L_189 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_188, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
			goto IL_060f;
		}

IL_05eb:
		{
			// builder.Append("false");
			StringBuilder_t * L_190 = __this->get_builder_6();
			NullCheck(L_190);
			StringBuilder_t * L_191;
			L_191 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_190, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
			// break;
			goto IL_060f;
		}

IL_05fe:
		{
			// builder.Append("null");
			StringBuilder_t * L_192 = __this->get_builder_6();
			NullCheck(L_192);
			StringBuilder_t * L_193;
			L_193 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_192, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		}

IL_060f:
		{
			// }
			V_0 = (bool)0;
			goto IL_061a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0613;
	}

FAULT_0613:
	{ // begin fault (depth: 1)
		U3CStringifyAsyncU3Ed__113_System_IDisposable_Dispose_mA1B228032B652F768CF1A9E978149F6532E33FEC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1555)
	} // end fault
	IL2CPP_CLEANUP(1555)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_061a:
	{
		bool L_194 = V_0;
		return L_194;
	}
}
// System.Void JSONObject/<StringifyAsync>d__113::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113_U3CU3Em__Finally1_m663BEBB2B51194D6F6E6C14F30037AF4895A104E (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_11();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Void JSONObject/<StringifyAsync>d__113::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113_U3CU3Em__Finally2_m3253B19374AF257FC1D6926372946A63F9647504 (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_11();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object JSONObject/<StringifyAsync>d__113::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStringifyAsyncU3Ed__113_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m84017639587653973323DF963CE336F617C3FA5A (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void JSONObject/<StringifyAsync>d__113::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStringifyAsyncU3Ed__113_System_Collections_IEnumerator_Reset_m90144F5211628EF59F8AA7D02EB77085A619690F (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStringifyAsyncU3Ed__113_System_Collections_IEnumerator_Reset_m90144F5211628EF59F8AA7D02EB77085A619690F_RuntimeMethod_var)));
	}
}
// System.Object JSONObject/<StringifyAsync>d__113::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStringifyAsyncU3Ed__113_System_Collections_IEnumerator_get_Current_mF93D25E944B92EC865DACA8D0DC2DD52C6681357 (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> JSONObject/<StringifyAsync>d__113::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__113_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m6E2672DCB3CCE5B3A9606BCACC4C114E0F3BD34F (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_3 = (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 *)il2cpp_codegen_object_new(U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61_il2cpp_TypeInfo_var);
		U3CStringifyAsyncU3Ed__113__ctor_m954F17288382055AD65E54E2B141D29870D81A03(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_4 = V_0;
		JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_6 = V_0;
		int32_t L_7 = __this->get_U3CU3E3__depth_4();
		NullCheck(L_6);
		L_6->set_depth_3(L_7);
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_8 = V_0;
		StringBuilder_t * L_9 = __this->get_U3CU3E3__builder_7();
		NullCheck(L_8);
		L_8->set_builder_6(L_9);
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_10 = V_0;
		bool L_11 = __this->get_U3CU3E3__pretty_9();
		NullCheck(L_10);
		L_10->set_pretty_8(L_11);
		U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * L_12 = V_0;
		return L_12;
	}
}
// System.Collections.IEnumerator JSONObject/<StringifyAsync>d__113::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStringifyAsyncU3Ed__113_System_Collections_IEnumerable_GetEnumerator_m3C0BC719AF1638E8ACB67D1816B80B7A8972EE44 (U3CStringifyAsyncU3Ed__113_t70B481DC72587C3FBFA203ABA87094C88ED13F61 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CStringifyAsyncU3Ed__113_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m6E2672DCB3CCE5B3A9606BCACC4C114E0F3BD34F(__this, /*hidden argument*/NULL);
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
// System.Void JSONObject/AddJSONContents::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents__ctor_m3801B37D16BD141741DC59B0E4D28E76C1C8F9A6 (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void JSONObject/AddJSONContents::Invoke(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents_Invoke_m5EB8C5BFCDB131C8317BE615AE64AB300FF77008 (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___self0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___self0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___self0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___self0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___self0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___self0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___self0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___self0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(targetMethod, targetThis, ___self0);
					else
						GenericVirtActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(targetMethod, targetThis, ___self0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___self0);
					else
						VirtActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___self0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___self0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___self0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult JSONObject/AddJSONContents::BeginInvoke(JSONObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddJSONContents_BeginInvoke_mBCE82C571050260B1783F47BD7F8D46B7CD23A40 (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___self0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___self0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void JSONObject/AddJSONContents::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddJSONContents_EndInvoke_mA46FC0F113838FD67CB6ECCDB1E13818B32E7FBC (AddJSONContents_t30D87492AD29D0086FE679779BD8E02620377B16 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	il2cppPInvokeFunc(____name0_marshaled);

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void JSONObject/FieldNotFound::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound__ctor_mCFB4DEAAF2D417190F98569EBA765ACF98116DF1 (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void JSONObject/FieldNotFound::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound_Invoke_mF93C65AD79D8DEC6373E56CA7B9862F9E72EA18C (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___name0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___name0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___name0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___name0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___name0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___name0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___name0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___name0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___name0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___name0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___name0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___name0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___name0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult JSONObject/FieldNotFound::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldNotFound_BeginInvoke_m3951685348C652B0B4FDB3B02F3E72D7ACFCEA74 (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, String_t* ___name0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___name0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void JSONObject/FieldNotFound::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNotFound_EndInvoke_mAA32D67E1B11FFA096184B170FB2D17BB80743BA (FieldNotFound_t4CD76915F0C622F13440580A79DED634F3BADFE6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSONObject/GetFieldResponse::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse__ctor_m275436EE4E4888F0F10608380E57E45F150C436B (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void JSONObject/GetFieldResponse::Invoke(JSONObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse_Invoke_mF1BEAD17E9225211812605D01371DE9834947986 (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___obj0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(targetMethod, targetThis, ___obj0);
					else
						GenericVirtActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(targetMethod, targetThis, ___obj0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0);
					else
						VirtActionInvoker1< JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult JSONObject/GetFieldResponse::BeginInvoke(JSONObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetFieldResponse_BeginInvoke_m63A990050272CF5B41F19C3C9328933CDA5C30AE (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, JSONObject_t86C41C4AA0C3E8F0EA479E624EB4873BB6F58722 * ___obj0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void JSONObject/GetFieldResponse::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetFieldResponse_EndInvoke_m09C7B468D4E25709C135705737A93E2E49EED3C3 (GetFieldResponse_t43D0287B1D77E67E63ED111DCD7C7BE0EC183345 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}

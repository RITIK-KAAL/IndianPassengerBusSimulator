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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<pb_Object>
struct Action_1_t8761B29E3F6AC407DA24290C38293557EA1BCBD7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>
struct Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>
struct Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>
struct Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B;
// System.Func`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_Edge>
struct Func_2_tE9E45300311031CA7B1D881EC0EBEE755BD9C992;
// System.Func`2<ProBuilder2.Common.pb_Face,System.Boolean>
struct Func_2_tD925145F19508FB1725AE33EA6F4A948C752B07B;
// System.Func`2<ProBuilder2.Common.pb_Face,System.Int32>
struct Func_2_t36AAF8823C94800EDE359D09B6DAD7DA8737864B;
// System.Func`2<ProBuilder2.Common.pb_WingedEdge,System.Boolean>
struct Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88;
// System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>
struct Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color>
struct IEnumerable_1_t30FBA3F0775777FD15679FBAE44B692629C5E6BB;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t6C47A8FE62321E6AD75C312B8549AFD2B13F0591;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
// System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Edge>
struct IEnumerable_1_tD7D26C90456C8CA05B702C567FA2B333D729670B;
// System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Face>
struct IEnumerable_1_t6C1AC3CEF8F4E142837B28B52AA44694DCF873C1;
// System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_WingedEdge>
struct IEnumerable_1_tC2F0D6A3E5378A50DDA84F0DDE235824C856243C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<ProBuilder2.Common.pb_Edge>
struct IEqualityComparer_1_tF3FE64150354D4AFD7F504198C77BFE1ED9AFA49;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>
struct IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>
struct KeyCollection_t927BEEEDD5BEDBAE96308BA28372ED5470185C07;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.Dictionary`2/KeyCollection<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>
struct KeyCollection_t827EF21B05921FBD16C9DC5168BDF9802939B592;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>
struct List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>
struct List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>
struct ValueCollection_tCADC1D73C74BED40CD9686983A972E96047DC0E6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/ValueCollection<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>
struct ValueCollection_tB7FCA14C6F801D8111CA202930A96A84AC02066A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>[]
struct EntryU5BU5D_t1E8A80CE2E780E0878052E3EEA5B77ACBAD69647;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.Dictionary`2/Entry<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>[]
struct EntryU5BU5D_tDD5BAEBEB076C058FFCE130FE81E046F781ABCF8;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t3708095FA3690EEF274EE180BF64163F9875548F;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1;
// ProBuilder2.Common.pb_Vertex[]
struct pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8;
// ProBuilder2.Common.pb_VertexConnection[]
struct pb_VertexConnectionU5BU5D_tCD578966F88093C1C3D4D68FD3AB8E1774B60A4F;
// ProBuilder2.Common.pb_WingedEdge[]
struct pb_WingedEdgeU5BU5D_tA9793ACFFC4BB9AA96826BD584D1482CB07A48C0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ProBuilder2.Common.pb_Edge
struct pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498;
// ProBuilder2.Common.pb_EdgeLookup
struct pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0;
// ProBuilder2.Common.pb_Face
struct pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831;
// ProBuilder2.Common.pb_HandleConstraint2D
struct pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45;
// ProBuilder2.Common.pb_IntArray
struct pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065;
// pb_Object
struct pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66;
// ProBuilder2.Common.pb_RaycastHit
struct pb_RaycastHit_t23E416C4E189FC7E25FE0D2873EC2989296E5E41;
// ProBuilder2.Common.pb_Renderable
struct pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8;
// ProBuilder2.Common.pb_Transform2D
struct pb_Transform2D_t8EB3BDA8DE0C5D5204CD683D2761103D58949334;
// ProBuilder2.Common.pb_Type
struct pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B;
// pb_UV
struct pb_UV_tED8BF0F7C72B4A910BDD83810A787AEC8EB135DE;
// ProBuilder2.Common.pb_UnwrapParameters
struct pb_UnwrapParameters_t8D192535BC46F15AFF21703BB09ADB6B07C25369;
// ProBuilder2.Common.pb_Vertex
struct pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5;
// ProBuilder2.Common.pb_VertexConnection
struct pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14;
// ProBuilder2.Common.pb_WingedEdge
struct pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C;
// ProBuilder2.Common.pb_WingedEdgeEnumerator
struct pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C;
// ProBuilder2.Common.pb_WingedEdge/<>c__DisplayClass7
struct U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437;

IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tCEFFFBB21FEF128738683C9DFE814FA2786E6D8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6C1AC3CEF8F4E142837B28B52AA44694DCF873C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t607CB26A8F3B1B8A6AA68C4AFFF42FCD3CF031A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05BA3AD71D418783799FCAAD264C0E8F86479A11;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB0FA40BD1CAAB60C313C9D0B79FA7780E5C721;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C5E69977B050497BEA3BB23ECC788A3071F231D;
IL2CPP_EXTERN_C String_t* _stringLiteral702A2DE23AFD1AF1E5049938F1AF8C870B3007E1;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AD727815F6DCA695EC690423F87B06DC48B12E;
IL2CPP_EXTERN_C String_t* _stringLiteralF85B933D83D129A59915267020E5972907D543C8;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m04D14ED5B5BE48B136091E8381CB593F4FD89550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFC50FF7C0536EE329BD9845EFD1C149DECC2D87A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDA3B04FD4143FFB37903030436942A01FE04BABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDB8EC7A4A3EA4226045049FF8A1023A8C4FD90A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m450CB6B5F76EB149F7C832610CEEF680251916B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7DA38B783D3B7F8F0F65DC87DD3857D3C67A2D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_Tispb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831_m3D1E83BCF307210B904E434D2170E08AC0C9B815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5214805D5A7B3672DF3A4D74243B732F5C864014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mC3A11C6C8CBCF921148D84F6DA3ABB8672B50CC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mA5F6A19D8CD458D6272767341FD7867FFDE0B19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_mFC7271422D1880985FDF927704B6E5BE75027C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7A7AA16E291168B80106F244E17713F5E763E340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m26EB9BD64E1626EA59A1A6E5DF7BA77783EBD662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3E972B0AC3C9BA0901D924D7D24F6F3B8E8FBAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB61D401F63BB7D703ED530BC70487EB64A6A6166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m3E949B2CF5E30E734B2C40509004A24347497838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_Tispb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8_mD0616FB3E94DA705553CA36B40F90713E7F09D69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_U3CSortCommonIndicesByAdjacencyU3Eb__2_mF741D9DB1F8270D1067CE9ACBEB1CF3ECB0C565F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* pbUtil_ToString_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34052BD4B2DF823EAD0F625B2C950453E4FFD294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* pb_Type_OnAfterDeserialize_m1865F55210046F0E26A1DB95703A5B2ED2E5691D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* pb_WingedEdgeEnumerator_get_Current_mBE0CACB3689658A110411F35467F7C93140E16D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Eb__3_mA0568C41B6BDE1843B017BB92248901D4AF91FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Eb__4_mFED022FF907507C861DB338FB7EC20A3504E3723_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23;
struct pb_FaceU5BU5D_t3708095FA3690EEF274EE180BF64163F9875548F;
struct pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1;
struct pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>
struct Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E8A80CE2E780E0878052E3EEA5B77ACBAD69647* ____entries_1;
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
	KeyCollection_t927BEEEDD5BEDBAE96308BA28372ED5470185C07* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCADC1D73C74BED40CD9686983A972E96047DC0E6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
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
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>
struct Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDD5BAEBEB076C058FFCE130FE81E046F781ABCF8* ____entries_1;
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
	KeyCollection_t827EF21B05921FBD16C9DC5168BDF9802939B592* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB7FCA14C6F801D8111CA202930A96A84AC02066A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>
struct List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	pb_VertexConnectionU5BU5D_tCD578966F88093C1C3D4D68FD3AB8E1774B60A4F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>
struct List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	pb_WingedEdgeU5BU5D_tA9793ACFFC4BB9AA96826BD584D1482CB07A48C0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// ProBuilder2.Common.pb_Edge
struct pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498  : public RuntimeObject
{
	// System.Int32 ProBuilder2.Common.pb_Edge::x
	int32_t ___x_0;
	// System.Int32 ProBuilder2.Common.pb_Edge::y
	int32_t ___y_1;
};

// ProBuilder2.Common.pb_EdgeLookup
struct pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0  : public RuntimeObject
{
	// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_EdgeLookup::local
	pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* ___local_0;
	// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_EdgeLookup::common
	pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* ___common_1;
};

// ProBuilder2.Common.pb_Face
struct pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831  : public RuntimeObject
{
	// System.Int32[] ProBuilder2.Common.pb_Face::_indices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____indices_0;
	// System.Int32[] ProBuilder2.Common.pb_Face::_distinctIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____distinctIndices_1;
	// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::_edges
	pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23* ____edges_2;
	// System.Int32 ProBuilder2.Common.pb_Face::_smoothingGroup
	int32_t ____smoothingGroup_3;
	// pb_UV ProBuilder2.Common.pb_Face::_uv
	pb_UV_tED8BF0F7C72B4A910BDD83810A787AEC8EB135DE* ____uv_4;
	// UnityEngine.Material ProBuilder2.Common.pb_Face::_mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____mat_5;
	// System.Boolean ProBuilder2.Common.pb_Face::manualUV
	bool ___manualUV_6;
	// System.Int32 ProBuilder2.Common.pb_Face::elementGroup
	int32_t ___elementGroup_7;
	// System.Int32 ProBuilder2.Common.pb_Face::textureGroup
	int32_t ___textureGroup_8;
};

// ProBuilder2.Common.pb_HandleConstraint2D
struct pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45  : public RuntimeObject
{
	// System.Int32 ProBuilder2.Common.pb_HandleConstraint2D::x
	int32_t ___x_0;
	// System.Int32 ProBuilder2.Common.pb_HandleConstraint2D::y
	int32_t ___y_1;
};

// ProBuilder2.Common.pb_IntArray
struct pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065  : public RuntimeObject
{
	// System.Int32[] ProBuilder2.Common.pb_IntArray::array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array_0;
};

// ProBuilder2.Common.pb_Type
struct pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B  : public RuntimeObject
{
	// System.String ProBuilder2.Common.pb_Type::assemblyQualifiedName
	String_t* ___assemblyQualifiedName_0;
	// System.Type ProBuilder2.Common.pb_Type::type
	Type_t* ___type_1;
};

// ProBuilder2.Common.pb_UnwrapParameters
struct pb_UnwrapParameters_t8D192535BC46F15AFF21703BB09ADB6B07C25369  : public RuntimeObject
{
	// System.Single ProBuilder2.Common.pb_UnwrapParameters::hardAngle
	float ___hardAngle_0;
	// System.Single ProBuilder2.Common.pb_UnwrapParameters::packMargin
	float ___packMargin_1;
	// System.Single ProBuilder2.Common.pb_UnwrapParameters::angleError
	float ___angleError_2;
	// System.Single ProBuilder2.Common.pb_UnwrapParameters::areaError
	float ___areaError_3;
};

// ProBuilder2.Common.pb_Vector
struct pb_Vector_tDFDF42AB51D53846ACC88862B744E433EA30A980  : public RuntimeObject
{
};

// ProBuilder2.Common.pb_VertexConnection
struct pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14  : public RuntimeObject
{
	// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_VertexConnection::face
	pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* ___face_0;
	// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_VertexConnection::indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___indices_1;
};

// ProBuilder2.Common.pb_WingedEdge
struct pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C  : public RuntimeObject
{
	// ProBuilder2.Common.pb_EdgeLookup ProBuilder2.Common.pb_WingedEdge::edge
	pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* ___edge_0;
	// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_WingedEdge::face
	pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* ___face_1;
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdge::next
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___next_2;
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdge::previous
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___previous_3;
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdge::opposite
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___opposite_4;
};

// ProBuilder2.Common.pb_WingedEdgeEnumerator
struct pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C  : public RuntimeObject
{
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdgeEnumerator::_start
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ____start_0;
	// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdgeEnumerator::_current
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ____current_1;
};

// ProBuilder2.Common.pb_WingedEdge/<>c__DisplayClass7
struct U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.Int32> ProBuilder2.Common.pb_WingedEdge/<>c__DisplayClass7::common
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___common_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t13D2F6EA59ACEA43AEA154FDF447DF58DA5D0E2A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t13D2F6EA59ACEA43AEA154FDF447DF58DA5D0E2A__padding[12];
	};
};

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t7C1F0089D9EB8F073545D17A9037BD719EB50DBB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t7C1F0089D9EB8F073545D17A9037BD719EB50DBB__padding[24];
	};
};

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=240
struct __StaticArrayInitTypeSizeU3D240_tDDD3EF73FF29384E61E0DA8D064C17F9583E1E24 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_tDDD3EF73FF29384E61E0DA8D064C17F9583E1E24__padding[240];
	};
};

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t3684E464F822FF8F81E2E21BFF7BE3B981F163DC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t3684E464F822FF8F81E2E21BFF7BE3B981F163DC__padding[96];
	};
};

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}
struct U3CPrivateImplementationDetailsU3EU7BF5AF014CU2D5FAEU2D47EBU2DA5DBU2D13D5EA5560FDU7D_t807EC4F56DD46842E81975FCBB9FC4837DEFBF2D  : public RuntimeObject
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ProBuilder2.Common.pb_IntVec3
struct pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D 
{
	// UnityEngine.Vector3 ProBuilder2.Common.pb_IntVec3::vec
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec_1;
};

// ProBuilder2.Common.pb_RaycastHit
struct pb_RaycastHit_t23E416C4E189FC7E25FE0D2873EC2989296E5E41  : public RuntimeObject
{
	// System.Single ProBuilder2.Common.pb_RaycastHit::distance
	float ___distance_0;
	// UnityEngine.Vector3 ProBuilder2.Common.pb_RaycastHit::point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_1;
	// UnityEngine.Vector3 ProBuilder2.Common.pb_RaycastHit::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_2;
	// System.Int32 ProBuilder2.Common.pb_RaycastHit::face
	int32_t ___face_3;
};

// ProBuilder2.Common.pb_Transform2D
struct pb_Transform2D_t8EB3BDA8DE0C5D5204CD683D2761103D58949334  : public RuntimeObject
{
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Transform2D::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_0;
	// System.Single ProBuilder2.Common.pb_Transform2D::rotation
	float ___rotation_1;
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Transform2D::scale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale_2;
};

// ProBuilder2.Common.pb_Vertex
struct pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5  : public RuntimeObject
{
	// UnityEngine.Vector3 ProBuilder2.Common.pb_Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Color ProBuilder2.Common.pb_Vertex::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	// UnityEngine.Vector3 ProBuilder2.Common.pb_Vertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_2;
	// UnityEngine.Vector4 ProBuilder2.Common.pb_Vertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_3;
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Vertex::uv0
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0_4;
	// UnityEngine.Vector2 ProBuilder2.Common.pb_Vertex::uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_5;
	// UnityEngine.Vector4 ProBuilder2.Common.pb_Vertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_6;
	// UnityEngine.Vector4 ProBuilder2.Common.pb_Vertex::uv4
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv4_7;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasPosition
	bool ___hasPosition_8;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasColor
	bool ___hasColor_9;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasNormal
	bool ___hasNormal_10;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasTangent
	bool ___hasTangent_11;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasUv0
	bool ___hasUv0_12;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasUv2
	bool ___hasUv2_13;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasUv3
	bool ___hasUv3_14;
	// System.Boolean ProBuilder2.Common.pb_Vertex::hasUv4
	bool ___hasUv4_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>
struct Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B  : public MulticastDelegate_t
{
};

// System.Func`2<ProBuilder2.Common.pb_WingedEdge,System.Boolean>
struct Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88  : public MulticastDelegate_t
{
};

// System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>
struct Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ProBuilder2.Common.pb_Renderable
struct pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Mesh ProBuilder2.Common.pb_Renderable::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
	// UnityEngine.Material[] ProBuilder2.Common.pb_Renderable::materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___materials_5;
	// UnityEngine.Transform ProBuilder2.Common.pb_Renderable::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// pb_Object
struct pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ProBuilder2.Common.pb_Face[] pb_Object::_quads
	pb_FaceU5BU5D_t3708095FA3690EEF274EE180BF64163F9875548F* ____quads_5;
	// ProBuilder2.Common.pb_IntArray[] pb_Object::_sharedIndices
	pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* ____sharedIndices_6;
	// UnityEngine.Vector3[] pb_Object::_vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____vertices_7;
	// UnityEngine.Vector2[] pb_Object::_uv
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____uv_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> pb_Object::_uv3
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ____uv3_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> pb_Object::_uv4
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ____uv4_10;
	// UnityEngine.Vector4[] pb_Object::_tangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____tangents_11;
	// ProBuilder2.Common.pb_IntArray[] pb_Object::_sharedIndicesUV
	pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* ____sharedIndicesUV_12;
	// UnityEngine.Color[] pb_Object::_colors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____colors_13;
	// System.Boolean pb_Object::userCollisions
	bool ___userCollisions_14;
	// System.Boolean pb_Object::isSelectable
	bool ___isSelectable_15;
	// ProBuilder2.Common.pb_UnwrapParameters pb_Object::unwrapParameters
	pb_UnwrapParameters_t8D192535BC46F15AFF21703BB09ADB6B07C25369* ___unwrapParameters_16;
	// System.String pb_Object::asset_guid
	String_t* ___asset_guid_17;
	// System.Boolean pb_Object::dontDestroyMeshOnDelete
	bool ___dontDestroyMeshOnDelete_19;
	// System.Int32[] pb_Object::m_selectedFaces
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_selectedFaces_20;
	// ProBuilder2.Common.pb_Edge[] pb_Object::m_SelectedEdges
	pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23* ___m_SelectedEdges_21;
	// System.Int32[] pb_Object::m_selectedTriangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_selectedTriangles_22;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>

// System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>

// System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>

// System.Collections.Generic.HashSet`1<System.Int32>

// System.Collections.Generic.HashSet`1<System.Int32>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>
struct List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	pb_VertexConnectionU5BU5D_tCD578966F88093C1C3D4D68FD3AB8E1774B60A4F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>
struct List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	pb_WingedEdgeU5BU5D_tA9793ACFFC4BB9AA96826BD584D1482CB07A48C0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// ProBuilder2.Common.pb_Edge

// ProBuilder2.Common.pb_Edge

// ProBuilder2.Common.pb_EdgeLookup

// ProBuilder2.Common.pb_EdgeLookup

// ProBuilder2.Common.pb_Face

// ProBuilder2.Common.pb_Face

// ProBuilder2.Common.pb_HandleConstraint2D
struct pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_StaticFields
{
	// ProBuilder2.Common.pb_HandleConstraint2D ProBuilder2.Common.pb_HandleConstraint2D::None
	pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* ___None_2;
};

// ProBuilder2.Common.pb_HandleConstraint2D

// ProBuilder2.Common.pb_IntArray

// ProBuilder2.Common.pb_IntArray

// ProBuilder2.Common.pb_Type

// ProBuilder2.Common.pb_Type

// ProBuilder2.Common.pb_UnwrapParameters

// ProBuilder2.Common.pb_UnwrapParameters

// ProBuilder2.Common.pb_Vector

// ProBuilder2.Common.pb_Vector

// ProBuilder2.Common.pb_VertexConnection

// ProBuilder2.Common.pb_VertexConnection

// ProBuilder2.Common.pb_WingedEdge
struct pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields
{
	// System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::CS$<>9__CachedAnonymousMethodDelegate5
	Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5;
	// System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32> ProBuilder2.Common.pb_WingedEdge::CS$<>9__CachedAnonymousMethodDelegate6
	Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_6;
};

// ProBuilder2.Common.pb_WingedEdge

// ProBuilder2.Common.pb_WingedEdgeEnumerator

// ProBuilder2.Common.pb_WingedEdgeEnumerator

// ProBuilder2.Common.pb_WingedEdge/<>c__DisplayClass7

// ProBuilder2.Common.pb_WingedEdge/<>c__DisplayClass7

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

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

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=240

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=240

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=96

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=96

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}
struct U3CPrivateImplementationDetailsU3EU7BF5AF014CU2D5FAEU2D47EBU2DA5DBU2D13D5EA5560FDU7D_t807EC4F56DD46842E81975FCBB9FC4837DEFBF2D_StaticFields
{
	// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}::$$method0x6000255-1
	__StaticArrayInitTypeSizeU3D96_t3684E464F822FF8F81E2E21BFF7BE3B981F163DC ___U24U24method0x6000255U2D1_0;
	// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}::$$method0x6000198-1
	__StaticArrayInitTypeSizeU3D24_t7C1F0089D9EB8F073545D17A9037BD719EB50DBB ___U24U24method0x6000198U2D1_1;
	// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}::$$method0x6000198-2
	__StaticArrayInitTypeSizeU3D12_t13D2F6EA59ACEA43AEA154FDF447DF58DA5D0E2A ___U24U24method0x6000198U2D2_2;
	// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}::$$method0x6000198-3
	__StaticArrayInitTypeSizeU3D24_t7C1F0089D9EB8F073545D17A9037BD719EB50DBB ___U24U24method0x6000198U2D3_3;
	// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}::$$method0x6000198-4
	__StaticArrayInitTypeSizeU3D24_t7C1F0089D9EB8F073545D17A9037BD719EB50DBB ___U24U24method0x6000198U2D4_4;
	// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}::$$method0x600026d-1
	__StaticArrayInitTypeSizeU3D240_tDDD3EF73FF29384E61E0DA8D064C17F9583E1E24 ___U24U24method0x600026dU2D1_5;
};

// <PrivateImplementationDetails>{F5AF014C-5FAE-47EB-A5DB-13D5EA5560FD}

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

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// ProBuilder2.Common.pb_IntVec3

// ProBuilder2.Common.pb_IntVec3

// ProBuilder2.Common.pb_RaycastHit

// ProBuilder2.Common.pb_RaycastHit

// ProBuilder2.Common.pb_Transform2D

// ProBuilder2.Common.pb_Transform2D

// ProBuilder2.Common.pb_Vertex

// ProBuilder2.Common.pb_Vertex

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

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

// System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>

// System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>

// System.Func`2<ProBuilder2.Common.pb_WingedEdge,System.Boolean>

// System.Func`2<ProBuilder2.Common.pb_WingedEdge,System.Boolean>

// System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>

// System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidOperationException

// System.InvalidOperationException

// ProBuilder2.Common.pb_Renderable

// ProBuilder2.Common.pb_Renderable

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// pb_Object
struct pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66_StaticFields
{
	// System.Action`1<pb_Object> pb_Object::onDestroyObject
	Action_1_t8761B29E3F6AC407DA24290C38293557EA1BCBD7* ___onDestroyObject_18;
	// System.Func`2<ProBuilder2.Common.pb_Face,System.Int32> pb_Object::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t36AAF8823C94800EDE359D09B6DAD7DA8737864B* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_23;
	// System.Func`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_Edge> pb_Object::CS$<>9__CachedAnonymousMethodDelegate3
	Func_2_tE9E45300311031CA7B1D881EC0EBEE755BD9C992* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate3_24;
	// System.Func`2<ProBuilder2.Common.pb_Face,System.Boolean> pb_Object::CS$<>9__CachedAnonymousMethodDelegate5
	Func_2_tD925145F19508FB1725AE33EA6F4A948C752B07B* ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_25;
};

// pb_Object
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ProBuilder2.Common.pb_Vertex[]
struct pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8  : public RuntimeArray
{
	ALIGN_FIELD (8) pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* m_Items[1];

	inline pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* value)
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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
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
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1  : public RuntimeArray
{
	ALIGN_FIELD (8) pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065* m_Items[1];

	inline pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_IntArray_tA7C01970E46585FCC863D63B17F2D704EBE76065* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23  : public RuntimeArray
{
	ALIGN_FIELD (8) pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* m_Items[1];

	inline pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t3708095FA3690EEF274EE180BF64163F9875548F  : public RuntimeArray
{
	ALIGN_FIELD (8) pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* m_Items[1];

	inline pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Color>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector4>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector2>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.String ProBuilder2.Common.pbUtil::ToString<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pbUtil_ToString_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34052BD4B2DF823EAD0F625B2C950453E4FFD294_gshared (RuntimeObject* ___0_arr, String_t* ___1_separator, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_gshared_inline (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared (RuntimeObject* ___0_source, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___1_selector, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisRuntimeObject_mBCF33F5AD0A25B1E57B46FF34330DF74278ADB9E_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_HandleConstraint2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_HandleConstraint2D__ctor_m89FEA2B9AED3A881A2114B50FB8D2834EF36C51B (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Single ProBuilder2.Common.pb_IntVec3::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pb_IntVec3_get_x_mF50DE4A07F9EE87F41666EFC97ED74611FD986EC (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) ;
// System.Single ProBuilder2.Common.pb_IntVec3::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pb_IntVec3_get_y_m2B5931F134729151D3A08FAC6FF37B6F049F1817 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) ;
// System.Single ProBuilder2.Common.pb_IntVec3::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pb_IntVec3_get_z_mCA5CC2E7BF5E3F66CBD48291BBA5D5DB42CD3414 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_IntVec3::.ctor(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void pb_IntVec3__ctor_m4EB676D2051D7F8FAB01A7A8C1B21E21161D5E39_inline (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String ProBuilder2.Common.pb_IntVec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_IntVec3_ToString_mBDF27597325E7265315A331C00C17C8F9DDE4083 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_IntVec3::Equals(ProBuilder2.Common.pb_IntVec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_Equals_mBC2CE1041F0B0B3374C3165A88D12920CE97E8AD (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___0_p, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_IntVec3::op_Equality(ProBuilder2.Common.pb_IntVec3,ProBuilder2.Common.pb_IntVec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_op_Equality_mA6D5AF993A9ACBD5C288EE83CB83C074656A2FCB (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___0_a, pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___1_b, const RuntimeMethod* method) ;
// System.Int32 ProBuilder2.Common.pb_IntVec3::round(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D (float ___0_v, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_IntVec3::Equals(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_Equals_m7E7BE52560ED0FE3BA0B5ED4C3B83514719DCC72 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_IntVec3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_Equals_m1785EE9361DA3BB2B7ED514ADAE055AC4FFC9F31 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, RuntimeObject* ___0_b, const RuntimeMethod* method) ;
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_Vector_GetHashCode_m9C766C1C23578822FB6C2F07593B9E360345B3BE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Int32 ProBuilder2.Common.pb_IntVec3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_IntVec3_GetHashCode_m08C296BCC23E646EB68152493C868C14CCAEFA09 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<ProBuilder2.Common.pb_Renderable>()
inline pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* ScriptableObject_CreateInstance_Tispb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8_mD0616FB3E94DA705553CA36B40F90713E7F09D69 (const RuntimeMethod* method)
{
	return ((  pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// ProBuilder2.Common.pb_Renderable ProBuilder2.Common.pb_Renderable::CreateInstance(UnityEngine.Mesh,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* pb_Renderable_CreateInstance_mCAD2137BC6AE4056F44B507C8483CC0A4B2155B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_InMesh, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_InMaterial, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::MarkDynamic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ProBuilder2.Common.pb_Math::RotateAroundPoint(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 pb_Math_RotateAroundPoint_m3AE883B794802063DE77428DAB0085925D3386E8 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_origin, float ___2_theta, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ProBuilder2.Common.pb_Math::ScaleAroundPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 pb_Math_ScaleAroundPoint_m9B393156C6F8CDC4753C4339403C506F8712A340 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_origin, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_scale, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_Type::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Type__ctor_m2CB4AF515187483ADDE9E28087740FD97148A482 (pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B* __this, Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_Vertex::Equals(ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Vertex_Equals_mC2155000DCC8F981C8E22B509A5F1473AB1AB1D7 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_other, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_Math::Approx3(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Math_Approx3_mAB69DBA790A6479471327313A829240EB8382E13 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_delta, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_Math::ApproxC(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Math_ApproxC_mAD2B9C1ADE4183550214056AC25DCA7D2D941178 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_delta, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_Math::Approx4(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Math_Approx4_m51126DD53E42EA6DD6A1403FC6915BC064305173 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, float ___2_delta, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_Math::Approx2(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Math_Approx2_m0378CA8D4C7A84865BFE836075FE7FB599AAD2DF (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, float ___2_delta, const RuntimeMethod* method) ;
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_Vector_GetHashCode_m375FE6D3879644EFC2662D33973C904B6BC427EA (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_Vertex::.ctor(ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex__ctor_m3758264BEF01047E01F57849CEFB2C74A0211587 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_v, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_Vertex::Add(ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Add_mAD4186AFC2C964C33DD5CBBAC34DBE474CD62B77 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_Vertex::Subtract(ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Subtract_m12911E618CCE36C93CDBF9D236BAD32A13250258 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Subtraction_mD14864BB81AC08F643D2B82B41B3577012410ED9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_Vertex::Multiply(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Multiply_m7724B1F58A2A4E9F572491A2A97BC5A464B8A551 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_Vertex::Divide(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Divide_mD4D7A921F76150B765747B6CBDB1244908564303 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Division(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Division_m641F85C0191C56932E452CAAC8E4974C43675FEB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 pb_Object::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_Object_get_vertexCount_m7166CC84AFE72329239FDB5B06F1FE48163BA55E (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] pb_Object::get_vertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* pb_Object_get_vertices_m2D6504BF241FC52BB788AD71F98E6EB5E29A687B_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) ;
// UnityEngine.Color[] pb_Object::get_colors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* pb_Object_get_colors_mC6D853D06BB58331DA619CD4E6B19F8CFE02A194_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] pb_Object::get_uv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* pb_Object_get_uv_mA690500E527617F2679CA6674416E02079D8C430_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh pb_Object::get_msh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* pb_Object_get_msh_m7D97F56DAFD7BD3FF2033DB94F70B23CF91C3879 (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Mesh_get_tangents_mEA6C7BF6A2B9A8BD0E9A62963E048F973878299E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Mesh_get_uv2_mBD25DD8C860E10A1D109C9622622D52571F56B6F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
inline void List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_gshared)(__this, method);
}
// System.Void pb_Object::GetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Object_GetUVs_m54DD9507EECAB605B0D201E534E72C6CB4959FF5 (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, int32_t ___0_channel, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___1_uvs, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_gshared)(___0_source, method);
}
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Color>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608_gshared)(___0_source, method);
}
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector4>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_gshared)(___0_source, method);
}
// System.Int32 System.Linq.Enumerable::Count<UnityEngine.Vector2>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_gshared)(___0_source, method);
}
// System.Void ProBuilder2.Common.pb_Vertex::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex__ctor_m6366A41D74ECCEE4689D80AF85FBBD38FDA7171C (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, bool ___0_hasAllValues, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Mesh::get_colors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Mesh_get_colors_m3A38944EBA064B0E55A24C95C3706193F45B313D (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::GetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetUVs_m3FCD854132DA16719481B8D97DF335A0C7244344 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___1_uvs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
inline void List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, int32_t, const RuntimeMethod*))List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
inline void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline)(__this, ___0_item, method);
}
// System.Void ProBuilder2.Common.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_GetArrays_mC648270982AEE831CC3584DA1496DDBB82CB903E (RuntimeObject* ___0_vertices, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___1_position, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** ___2_color, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___3_uv0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___4_normal, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___5_tangent, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___6_uv2, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** ___7_uv3, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** ___8_uv4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors_m5558BAAA60676427B7954F1694A1765B000EB0FE (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mA0EA40129409D956FF22FCF7E01E27382879E255 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___1_uvs, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Collections.Generic.IList`1<System.Int32> ProBuilder2.Common.pb_IntArrayUtility::UniqueIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* pb_IntArrayUtility_UniqueIndicesWithValues_mBCE33EBCE0BFAF1097DA9FAC6ED3E7B9996C310A (pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* ___0_pbIntArr, RuntimeObject* ___1_indices, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_gshared)(___0_source, method);
}
// System.Void ProBuilder2.Common.pb_VertexConnection::.ctor(ProBuilder2.Common.pb_Face,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_VertexConnection__ctor_mA57535BEF007E14AA7981415C9958FA7BE4E6019 (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* __this, pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* ___0_face, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_indices, const RuntimeMethod* method) ;
// System.String ProBuilder2.Common.pbUtil::ToString<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,System.String)
inline String_t* pbUtil_ToString_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34052BD4B2DF823EAD0F625B2C950453E4FFD294 (RuntimeObject* ___0_arr, String_t* ___1_separator, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))pbUtil_ToString_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34052BD4B2DF823EAD0F625B2C950453E4FFD294_gshared)(___0_arr, ___1_separator, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>::get_Item(System.Int32)
inline pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* List_1_get_Item_mB61D401F63BB7D703ED530BC70487EB64A6A6166 (List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* (*) (List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared)(__this, ___0_collection, method);
}
// System.Int32 System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>::get_Count()
inline int32_t List_1_get_Count_m26EB9BD64E1626EA59A1A6E5DF7BA77783EBD662_inline (List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean ProBuilder2.Common.pb_Edge::Equals(ProBuilder2.Common.pb_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Edge_Equals_mE76397B23712BDBA9BAD292334BB8DAD3DFE0B56 (pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* __this, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* ___0_edge, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_WingedEdge::Equals(ProBuilder2.Common.pb_WingedEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_WingedEdge_Equals_m915A6314C2D7B3BDEDFED9D07DC7D29193AA2DDE (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___0_b, const RuntimeMethod* method) ;
// ProBuilder2.Common.pb_WingedEdgeEnumerator ProBuilder2.Common.pb_WingedEdge::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* pb_WingedEdge_GetEnumerator_m7B0FDE7BF44754734632ABE213BFDB0FC51F3505 (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_WingedEdgeEnumerator::.ctor(ProBuilder2.Common.pb_WingedEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_WingedEdgeEnumerator__ctor_m897EBB6FF9488F3A48A59B6FB24C1B9D909733B0 (pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* __this, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___0_start, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean ProBuilder2.Common.pb_Edge::Contains(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Edge_Contains_m118A418DA3C8F549AF9F4AFCB368CFC9FC30E84D (pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* __this, int32_t ___0_a, const RuntimeMethod* method) ;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::get_edges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23* pb_Face_get_edges_mEEA487BB0FA209E561CB10C62C51B945032C3C16 (pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m7A7AA16E291168B80106F244E17713F5E763E340 (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::SortEdgesByAdjacency(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* pb_WingedEdge_SortEdgesByAdjacency_m467DD99FBDD87140423C9342A78C3000664E4BEC (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* ___0_edges, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::get_Item(System.Int32)
inline pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* (*) (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::set_Item(System.Int32,T)
inline void List_1_set_Item_m3E949B2CF5E30E734B2C40509004A24347497838 (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* __this, int32_t ___0_index, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3*, int32_t, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Int32 System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>::get_Count()
inline int32_t List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_inline (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>::.ctor()
inline void Dictionary_2__ctor_m450CB6B5F76EB149F7C832610CEEF680251916B8 (Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>::get_Item(System.Int32)
inline pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* (*) (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDA3B04FD4143FFB37903030436942A01FE04BABE (Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* __this, int32_t ___0_key, List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3*, int32_t, List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>::Add(T)
inline void List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_inline (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* __this, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>::.ctor()
inline void List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6 (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m04D14ED5B5BE48B136091E8381CB593F4FD89550 (Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* __this, int32_t ___0_key, List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3*, int32_t, List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>::get_Count()
inline int32_t List_1_get_Count_m3E972B0AC3C9BA0901D924D7D24F6F3B8E8FBAA5_inline (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ProBuilder2.Common.pb_WingedEdge/<>c__DisplayClass7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7__ctor_m336D3FCDAAE8AE9134C25C87BCE49354D20151AE (U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<ProBuilder2.Common.pb_WingedEdge,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD7ACE77B2554363B2EA88A692252BFCE8E664EA4 (Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<ProBuilder2.Common.pb_WingedEdge>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_mFC7271422D1880985FDF927704B6E5BE75027C49 (RuntimeObject* ___0_source, Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Void System.Func`2<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEB1002C66FA4103256C98AACE0581EB35708CC1D (Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<ProBuilder2.Common.pb_WingedEdge,ProBuilder2.Common.pb_Edge>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mC3A11C6C8CBCF921148D84F6DA3ABB8672B50CC9 (RuntimeObject* ___0_source, Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<ProBuilder2.Common.pb_Edge>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* Enumerable_ToList_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mA5F6A19D8CD458D6272767341FD7867FFDE0B19D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
inline int32_t HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_inline (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_gshared_inline)(__this, method);
}
// System.Void System.Func`2<ProBuilder2.Common.pb_Edge,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m70AA914D279B5513EAD4C9150BC3C2E4C4F043DC (Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<ProBuilder2.Common.pb_Edge,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5214805D5A7B3672DF3A4D74243B732F5C864014 (RuntimeObject* ___0_source, Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAC2A5066E30AA4BA544C3F08603F64D4CFF982_gshared)(___0_source, ___1_selector, method);
}
// ProBuilder2.Common.pb_Face[] pb_Object::get_faces()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR pb_FaceU5BU5D_t3708095FA3690EEF274EE180BF64163F9875548F* pb_Object_get_faces_mDF8B7834F68C94AA8A9D7DA376B83213F584520E_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge> ProBuilder2.Common.pb_WingedEdge::GetWingedEdges(pb_Object,System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Face>,System.Boolean,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* pb_WingedEdge_GetWingedEdges_m4640F358F26FEB9CD66F50B29071BB26B619C87E (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* ___0_pb, RuntimeObject* ___1_faces, bool ___2_oneWingPerFace, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___3_sharedIndexLookup, const RuntimeMethod* method) ;
// ProBuilder2.Common.pb_IntArray[] pb_Object::get_sharedIndices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* pb_Object_get_sharedIndices_m4E9B919E7CD2F39E0FD521DFF58BA131003438BB_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ProBuilder2.Common.pb_IntArrayUtility::ToDictionary(ProBuilder2.Common.pb_IntArray[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* pb_IntArrayUtility_ToDictionary_mF4C62AE440E8D327D3C4EA524A8AB2F9246C593A (pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* ___0_array, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<ProBuilder2.Common.pb_Face>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Distinct_Tispb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831_m3D1E83BCF307210B904E434D2170E08AC0C9B815 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisRuntimeObject_mBCF33F5AD0A25B1E57B46FF34330DF74278ADB9E_gshared)(___0_source, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>::.ctor()
inline void Dictionary_2__ctor_m7DA38B783D3B7F8F0F65DC87DD3857D3C67A2D6C (Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::SortEdgesByAdjacency(ProBuilder2.Common.pb_Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* pb_WingedEdge_SortEdgesByAdjacency_m21945AFA6BC3A4E782EDBEC82F78754A8A6C9714 (pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* ___0_face, const RuntimeMethod* method) ;
// System.Void ProBuilder2.Common.pb_WingedEdge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_WingedEdge__ctor_m7F2A922188007C666FBE8699F389E25BD9A2F33A (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared)(__this, ___0_key, method);
}
// System.Void ProBuilder2.Common.pb_EdgeLookup::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_EdgeLookup__ctor_m316F2140769F23ECE4CB295AC5744596F106ACB4 (pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* __this, int32_t ___0_cx, int32_t ___1_cy, int32_t ___2_x, int32_t ___3_y, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDB8EC7A4A3EA4226045049FF8A1023A8C4FD90A1 (Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475* __this, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* ___0_key, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475*, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498*, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_WingedEdge>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFC50FF7C0536EE329BD9845EFD1C149DECC2D87A (Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475* __this, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* ___0_key, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475*, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498*, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
inline bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared)(__this, ___0_item, method);
}
// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdgeEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* pb_WingedEdgeEnumerator_get_Current_mBE0CACB3689658A110411F35467F7C93140E16D6 (pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProBuilder2.Common.pb_HandleConstraint2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_HandleConstraint2D__ctor_m89FEA2B9AED3A881A2114B50FB8D2834EF36C51B (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_x;
		__this->___x_0 = L_0;
		int32_t L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
// ProBuilder2.Common.pb_HandleConstraint2D ProBuilder2.Common.pb_HandleConstraint2D::Inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* pb_HandleConstraint2D_Inverse_m804E0B606AEB653BDDB4D36B178AF5ECC649A524 (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = __this->___x_0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
	}

IL_000d:
	{
		int32_t L_1 = __this->___y_1;
		G_B4_0 = G_B3_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0019;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_001a:
	{
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_2 = (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45*)il2cpp_codegen_object_new(pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		pb_HandleConstraint2D__ctor_m89FEA2B9AED3A881A2114B50FB8D2834EF36C51B(L_2, G_B6_1, G_B6_0, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 ProBuilder2.Common.pb_HandleConstraint2D::Mask(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 pb_HandleConstraint2D_Mask_m6C77A3051B26C92C5AEC97782D52B06A8D5C3790 (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&___0_v);
		float L_1 = L_0->___x_0;
		int32_t L_2 = __this->___x_0;
		L_0->___x_0 = ((float)il2cpp_codegen_multiply(L_1, ((float)L_2)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&___0_v);
		float L_4 = L_3->___y_1;
		int32_t L_5 = __this->___y_1;
		L_3->___y_1 = ((float)il2cpp_codegen_multiply(L_4, ((float)L_5)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_v;
		return L_6;
	}
}
// UnityEngine.Vector2 ProBuilder2.Common.pb_HandleConstraint2D::InverseMask(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 pb_HandleConstraint2D_InverseMask_m71A52E90C5B4D579E344AA281509B4A2BEF1E85D (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B3_2 = NULL;
	float G_B5_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B6_2 = NULL;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&___0_v);
		float L_1 = L_0->___x_0;
		int32_t L_2 = __this->___x_0;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001d:
	{
		G_B3_2->___x_0 = ((float)il2cpp_codegen_multiply(G_B3_1, G_B3_0));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&___0_v);
		float L_4 = L_3->___y_1;
		int32_t L_5 = __this->___y_1;
		G_B4_0 = L_4;
		G_B4_1 = L_3;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B5_0 = L_4;
			G_B5_1 = L_3;
			goto IL_003b;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0040;
	}

IL_003b:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0040:
	{
		G_B6_2->___y_1 = ((float)il2cpp_codegen_multiply(G_B6_1, G_B6_0));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_v;
		return L_6;
	}
}
// System.Boolean ProBuilder2.Common.pb_HandleConstraint2D::op_Equality(ProBuilder2.Common.pb_HandleConstraint2D,ProBuilder2.Common.pb_HandleConstraint2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_HandleConstraint2D_op_Equality_m6F6250706916E5A295D6FFF68F0062AC4E1D3758 (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* ___0_a, pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* ___1_b, const RuntimeMethod* method) 
{
	{
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___x_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_4 = ___0_a;
		NullCheck(L_4);
		int32_t L_5 = L_4->___y_1;
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_6 = ___1_b;
		NullCheck(L_6);
		int32_t L_7 = L_6->___y_1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean ProBuilder2.Common.pb_HandleConstraint2D::op_Inequality(ProBuilder2.Common.pb_HandleConstraint2D,ProBuilder2.Common.pb_HandleConstraint2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_HandleConstraint2D_op_Inequality_m4EB8FE8F2E0C36A78E1F287D70519713A267FA2F (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* ___0_a, pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* ___1_b, const RuntimeMethod* method) 
{
	{
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_0 = ___0_a;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_2 = ___1_b;
		NullCheck(L_2);
		int32_t L_3 = L_2->___x_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_4 = ___0_a;
		NullCheck(L_4);
		int32_t L_5 = L_4->___y_1;
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_6 = ___1_b;
		NullCheck(L_6);
		int32_t L_7 = L_6->___y_1;
		return (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Int32 ProBuilder2.Common.pb_HandleConstraint2D::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_HandleConstraint2D_GetHashCode_m076B747409776D948C949CC1F018D7478533B660 (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
	}
}
// System.Boolean ProBuilder2.Common.pb_HandleConstraint2D::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_HandleConstraint2D_Equals_m4C814A77C6178DE8D35FD6AB5D09F6719FFB52C9 (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45*)IsInstClass((RuntimeObject*)L_0, pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_o;
		NullCheck(((pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45*)CastclassClass((RuntimeObject*)L_1, pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var)));
		int32_t L_2 = ((pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45*)CastclassClass((RuntimeObject*)L_1, pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var))->___x_0;
		int32_t L_3 = __this->___x_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_4 = ___0_o;
		NullCheck(((pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45*)CastclassClass((RuntimeObject*)L_4, pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var)));
		int32_t L_5 = ((pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45*)CastclassClass((RuntimeObject*)L_4, pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var))->___y_1;
		int32_t L_6 = __this->___y_1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.String ProBuilder2.Common.pb_HandleConstraint2D::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_HandleConstraint2D_ToString_m70AC705206A62DE372B72FED949153A9455FE885 (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3 = __this->___x_0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->___y_1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_12, NULL);
		return L_13;
	}
}
// System.Void ProBuilder2.Common.pb_HandleConstraint2D::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_HandleConstraint2D__cctor_mF0A62B6F8A37F4DDF0BC42C14B1414C2FCD8AE11 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45* L_0 = (pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45*)il2cpp_codegen_object_new(pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		pb_HandleConstraint2D__ctor_m89FEA2B9AED3A881A2114B50FB8D2834EF36C51B(L_0, 1, 1, NULL);
		((pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_StaticFields*)il2cpp_codegen_static_fields_for(pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var))->___None_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_StaticFields*)il2cpp_codegen_static_fields_for(pb_HandleConstraint2D_t29E9796009A9CF9303B84F21F9811627EFC9AB45_il2cpp_TypeInfo_var))->___None_2), (void*)L_0);
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
// System.Single ProBuilder2.Common.pb_IntVec3::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pb_IntVec3_get_x_mF50DE4A07F9EE87F41666EFC97ED74611FD986EC (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___vec_1);
		float L_1 = L_0->___x_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float pb_IntVec3_get_x_mF50DE4A07F9EE87F41666EFC97ED74611FD986EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	float _returnValue;
	_returnValue = pb_IntVec3_get_x_mF50DE4A07F9EE87F41666EFC97ED74611FD986EC(_thisAdjusted, method);
	return _returnValue;
}
// System.Single ProBuilder2.Common.pb_IntVec3::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pb_IntVec3_get_y_m2B5931F134729151D3A08FAC6FF37B6F049F1817 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___vec_1);
		float L_1 = L_0->___y_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float pb_IntVec3_get_y_m2B5931F134729151D3A08FAC6FF37B6F049F1817_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	float _returnValue;
	_returnValue = pb_IntVec3_get_y_m2B5931F134729151D3A08FAC6FF37B6F049F1817(_thisAdjusted, method);
	return _returnValue;
}
// System.Single ProBuilder2.Common.pb_IntVec3::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float pb_IntVec3_get_z_mCA5CC2E7BF5E3F66CBD48291BBA5D5DB42CD3414 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___vec_1);
		float L_1 = L_0->___z_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float pb_IntVec3_get_z_mCA5CC2E7BF5E3F66CBD48291BBA5D5DB42CD3414_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	float _returnValue;
	_returnValue = pb_IntVec3_get_z_mCA5CC2E7BF5E3F66CBD48291BBA5D5DB42CD3414(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ProBuilder2.Common.pb_IntVec3::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_IntVec3__ctor_m4EB676D2051D7F8FAB01A7A8C1B21E21161D5E39 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		__this->___vec_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void pb_IntVec3__ctor_m4EB676D2051D7F8FAB01A7A8C1B21E21161D5E39_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	pb_IntVec3__ctor_m4EB676D2051D7F8FAB01A7A8C1B21E21161D5E39_inline(_thisAdjusted, ___0_vector, method);
}
// System.String ProBuilder2.Common.pb_IntVec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_IntVec3_ToString_mBDF27597325E7265315A331C00C17C8F9DDE4083 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral702A2DE23AFD1AF1E5049938F1AF8C870B3007E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0;
		L_0 = pb_IntVec3_get_x_mF50DE4A07F9EE87F41666EFC97ED74611FD986EC(__this, NULL);
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		float L_3;
		L_3 = pb_IntVec3_get_y_m2B5931F134729151D3A08FAC6FF37B6F049F1817(__this, NULL);
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		float L_6;
		L_6 = pb_IntVec3_get_z_mCA5CC2E7BF5E3F66CBD48291BBA5D5DB42CD3414(__this, NULL);
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral702A2DE23AFD1AF1E5049938F1AF8C870B3007E1, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* pb_IntVec3_ToString_mBDF27597325E7265315A331C00C17C8F9DDE4083_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = pb_IntVec3_ToString_mBDF27597325E7265315A331C00C17C8F9DDE4083(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean ProBuilder2.Common.pb_IntVec3::op_Equality(ProBuilder2.Common.pb_IntVec3,ProBuilder2.Common.pb_IntVec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_op_Equality_mA6D5AF993A9ACBD5C288EE83CB83C074656A2FCB (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___0_a, pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___1_b, const RuntimeMethod* method) 
{
	{
		pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D L_0 = ___1_b;
		bool L_1;
		L_1 = pb_IntVec3_Equals_mBC2CE1041F0B0B3374C3165A88D12920CE97E8AD((&___0_a), L_0, NULL);
		return L_1;
	}
}
// System.Boolean ProBuilder2.Common.pb_IntVec3::op_Inequality(ProBuilder2.Common.pb_IntVec3,ProBuilder2.Common.pb_IntVec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_op_Inequality_m621B7D75EB0AE4ECB30E8A29BD6B95105F7A682E (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___0_a, pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___1_b, const RuntimeMethod* method) 
{
	{
		pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D L_0 = ___0_a;
		pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D L_1 = ___1_b;
		bool L_2;
		L_2 = pb_IntVec3_op_Equality_mA6D5AF993A9ACBD5C288EE83CB83C074656A2FCB(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean ProBuilder2.Common.pb_IntVec3::Equals(ProBuilder2.Common.pb_IntVec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_Equals_mBC2CE1041F0B0B3374C3165A88D12920CE97E8AD (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___0_p, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = pb_IntVec3_get_x_mF50DE4A07F9EE87F41666EFC97ED74611FD986EC(__this, NULL);
		int32_t L_1;
		L_1 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_0, NULL);
		float L_2;
		L_2 = pb_IntVec3_get_x_mF50DE4A07F9EE87F41666EFC97ED74611FD986EC((&___0_p), NULL);
		int32_t L_3;
		L_3 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_004c;
		}
	}
	{
		float L_4;
		L_4 = pb_IntVec3_get_y_m2B5931F134729151D3A08FAC6FF37B6F049F1817(__this, NULL);
		int32_t L_5;
		L_5 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_4, NULL);
		float L_6;
		L_6 = pb_IntVec3_get_y_m2B5931F134729151D3A08FAC6FF37B6F049F1817((&___0_p), NULL);
		int32_t L_7;
		L_7 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		float L_8;
		L_8 = pb_IntVec3_get_z_mCA5CC2E7BF5E3F66CBD48291BBA5D5DB42CD3414(__this, NULL);
		int32_t L_9;
		L_9 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_8, NULL);
		float L_10;
		L_10 = pb_IntVec3_get_z_mCA5CC2E7BF5E3F66CBD48291BBA5D5DB42CD3414((&___0_p), NULL);
		int32_t L_11;
		L_11 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_10, NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
	}

IL_004c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool pb_IntVec3_Equals_mBC2CE1041F0B0B3374C3165A88D12920CE97E8AD_AdjustorThunk (RuntimeObject* __this, pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___0_p, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	bool _returnValue;
	_returnValue = pb_IntVec3_Equals_mBC2CE1041F0B0B3374C3165A88D12920CE97E8AD(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Boolean ProBuilder2.Common.pb_IntVec3::Equals(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_Equals_m7E7BE52560ED0FE3BA0B5ED4C3B83514719DCC72 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = pb_IntVec3_get_x_mF50DE4A07F9EE87F41666EFC97ED74611FD986EC(__this, NULL);
		int32_t L_1;
		L_1 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_0, NULL);
		float L_2 = (&___0_p)->___x_2;
		int32_t L_3;
		L_3 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_004c;
		}
	}
	{
		float L_4;
		L_4 = pb_IntVec3_get_y_m2B5931F134729151D3A08FAC6FF37B6F049F1817(__this, NULL);
		int32_t L_5;
		L_5 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_4, NULL);
		float L_6 = (&___0_p)->___y_3;
		int32_t L_7;
		L_7 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		float L_8;
		L_8 = pb_IntVec3_get_z_mCA5CC2E7BF5E3F66CBD48291BBA5D5DB42CD3414(__this, NULL);
		int32_t L_9;
		L_9 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_8, NULL);
		float L_10 = (&___0_p)->___z_4;
		int32_t L_11;
		L_11 = pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D(L_10, NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
	}

IL_004c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool pb_IntVec3_Equals_m7E7BE52560ED0FE3BA0B5ED4C3B83514719DCC72_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	bool _returnValue;
	_returnValue = pb_IntVec3_Equals_m7E7BE52560ED0FE3BA0B5ED4C3B83514719DCC72(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Boolean ProBuilder2.Common.pb_IntVec3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_IntVec3_Equals_m1785EE9361DA3BB2B7ED514ADAE055AC4FFC9F31 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, RuntimeObject* ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_b;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_b;
		bool L_2;
		L_2 = pb_IntVec3_Equals_mBC2CE1041F0B0B3374C3165A88D12920CE97E8AD(__this, ((*(pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*)((pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*)(pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*)UnBox(L_1, pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D_il2cpp_TypeInfo_var)))), NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}

IL_0016:
	{
		RuntimeObject* L_3 = ___0_b;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___0_b;
		bool L_5;
		L_5 = pb_IntVec3_Equals_m7E7BE52560ED0FE3BA0B5ED4C3B83514719DCC72(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))), NULL);
		return L_5;
	}

IL_002b:
	{
		return (bool)0;
	}

IL_002d:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool pb_IntVec3_Equals_m1785EE9361DA3BB2B7ED514ADAE055AC4FFC9F31_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_b, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	bool _returnValue;
	_returnValue = pb_IntVec3_Equals_m1785EE9361DA3BB2B7ED514ADAE055AC4FFC9F31(_thisAdjusted, ___0_b, method);
	return _returnValue;
}
// System.Int32 ProBuilder2.Common.pb_IntVec3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_IntVec3_GetHashCode_m08C296BCC23E646EB68152493C868C14CCAEFA09 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___vec_1;
		int32_t L_1;
		L_1 = pb_Vector_GetHashCode_m9C766C1C23578822FB6C2F07593B9E360345B3BE(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t pb_IntVec3_GetHashCode_m08C296BCC23E646EB68152493C868C14CCAEFA09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = pb_IntVec3_GetHashCode_m08C296BCC23E646EB68152493C868C14CCAEFA09(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 ProBuilder2.Common.pb_IntVec3::round(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_IntVec3_round_mD2641C8BE84526F375C063D38B49C5096B76778D (float ___0_v, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_v;
		return il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_0, (1000.0f))));
	}
}
// UnityEngine.Vector3 ProBuilder2.Common.pb_IntVec3::op_Implicit(ProBuilder2.Common.pb_IntVec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 pb_IntVec3_op_Implicit_mFE12E58ADF9C1D439CA19706D33D78EE13067A91 (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D ___0_p, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (&___0_p)->___vec_1;
		return L_0;
	}
}
// ProBuilder2.Common.pb_IntVec3 ProBuilder2.Common.pb_IntVec3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D pb_IntVec3_op_Implicit_m75E5AA539EFC65208E305F2D39CAA825103F5FB3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p;
		pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D L_1;
		memset((&L_1), 0, sizeof(L_1));
		pb_IntVec3__ctor_m4EB676D2051D7F8FAB01A7A8C1B21E21161D5E39_inline((&L_1), L_0, /*hidden argument*/NULL);
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
// System.Void ProBuilder2.Common.pb_RaycastHit::.ctor(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_RaycastHit__ctor_m91F51DA6340D49B2A7C93A8989FD9AD03AE1FDE9 (pb_RaycastHit_t23E416C4E189FC7E25FE0D2873EC2989296E5E41* __this, float ___0_InDistance, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_InPoint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_InNormal, int32_t ___3_InFaceIndex, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		float L_0 = ___0_InDistance;
		__this->___distance_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_InPoint;
		__this->___point_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_InNormal;
		__this->___normal_2 = L_2;
		int32_t L_3 = ___3_InFaceIndex;
		__this->___face_3 = L_3;
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
// ProBuilder2.Common.pb_Renderable ProBuilder2.Common.pb_Renderable::CreateInstance(UnityEngine.Mesh,UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* pb_Renderable_CreateInstance_mF865552BABC55339E2E131B4C8F883F7C087E5B6 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_InMesh, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___1_InMaterials, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_Tispb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8_mD0616FB3E94DA705553CA36B40F90713E7F09D69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* V_0 = NULL;
	{
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_0;
		L_0 = ScriptableObject_CreateInstance_Tispb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8_mD0616FB3E94DA705553CA36B40F90713E7F09D69(ScriptableObject_CreateInstance_Tispb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8_mD0616FB3E94DA705553CA36B40F90713E7F09D69_RuntimeMethod_var);
		V_0 = L_0;
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_1 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___0_InMesh;
		NullCheck(L_1);
		L_1->___mesh_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___mesh_4), (void*)L_2);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_3 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = ___1_InMaterials;
		NullCheck(L_3);
		L_3->___materials_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___materials_5), (void*)L_4);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_5 = V_0;
		return L_5;
	}
}
// ProBuilder2.Common.pb_Renderable ProBuilder2.Common.pb_Renderable::CreateInstance(UnityEngine.Mesh,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* pb_Renderable_CreateInstance_mCAD2137BC6AE4056F44B507C8483CC0A4B2155B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_InMesh, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_InMaterial, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_Tispb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8_mD0616FB3E94DA705553CA36B40F90713E7F09D69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* V_0 = NULL;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_1 = NULL;
	{
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_0;
		L_0 = ScriptableObject_CreateInstance_Tispb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8_mD0616FB3E94DA705553CA36B40F90713E7F09D69(ScriptableObject_CreateInstance_Tispb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8_mD0616FB3E94DA705553CA36B40F90713E7F09D69_RuntimeMethod_var);
		V_0 = L_0;
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_1 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___0_InMesh;
		NullCheck(L_1);
		L_1->___mesh_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___mesh_4), (void*)L_2);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_3 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_4;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_5 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___1_InMaterial;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_6);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7 = V_1;
		NullCheck(L_3);
		L_3->___materials_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___materials_5), (void*)L_7);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_8 = V_0;
		return L_8;
	}
}
// ProBuilder2.Common.pb_Renderable ProBuilder2.Common.pb_Renderable::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* pb_Renderable_CreateInstance_m0EE79D29FAB15F68955F54F9BFC414C7B715E30B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF85B933D83D129A59915267020E5972907D543C8);
		s_Il2CppMethodInitialized = true;
	}
	pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* V_0 = NULL;
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_1;
		L_1 = pb_Renderable_CreateInstance_mCAD2137BC6AE4056F44B507C8483CC0A4B2155B5(L_0, (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL, NULL);
		V_0 = L_1;
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_2 = V_0;
		NullCheck(L_2);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = L_2->___mesh_4;
		NullCheck(L_3);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_3, _stringLiteralF85B933D83D129A59915267020E5972907D543C8, NULL);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_4 = V_0;
		NullCheck(L_4);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = L_4->___mesh_4;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)52), NULL);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_6 = V_0;
		NullCheck(L_6);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = L_6->___mesh_4;
		NullCheck(L_7);
		Mesh_MarkDynamic_m718089940F240AFE625D6DC9DA4E6F20229CC322(L_7, NULL);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_8 = V_0;
		NullCheck(L_8);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_8, ((int32_t)52), NULL);
		pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* L_9 = V_0;
		return L_9;
	}
}
// System.Void ProBuilder2.Common.pb_Renderable::DestroyInstance(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Renderable_DestroyInstance_m0D0BF4FC0E9391B4769A55C1401FE9BBC1C2D891 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_ren, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_ren;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_0, NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Renderable::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Renderable_OnDestroy_m178430881C4D9962844B409B2E96349C213C46FD (pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___mesh_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Renderable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Renderable__ctor_mBCBC404CB3A98F89522EA1624C25D486D5AA3873 (pb_Renderable_t8A3EC2230C827A833DBBF4F9D648A15FAB38E2A8* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ProBuilder2.Common.pb_Transform2D::.ctor(UnityEngine.Vector2,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Transform2D__ctor_m4159D328D97DC74E4567516ABB7B3C82074F9E7C (pb_Transform2D_t8EB3BDA8DE0C5D5204CD683D2761103D58949334* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, float ___1_rotation, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_position;
		__this->___position_0 = L_0;
		float L_1 = ___1_rotation;
		__this->___rotation_1 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___2_scale;
		__this->___scale_2 = L_2;
		return;
	}
}
// UnityEngine.Vector2 ProBuilder2.Common.pb_Transform2D::TransformPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 pb_Transform2D_TransformPoint_m9324BB629B5119D8ABADE6952F6DAA820A71E5CE (pb_Transform2D_t8EB3BDA8DE0C5D5204CD683D2761103D58949334* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_p, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_p;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___position_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_1, NULL);
		___0_p = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_p;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_p;
		float L_5 = __this->___rotation_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = pb_Math_RotateAroundPoint_m3AE883B794802063DE77428DAB0085925D3386E8(L_3, L_4, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_p;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_p;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___scale_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = pb_Math_ScaleAroundPoint_m9B393156C6F8CDC4753C4339403C506F8712A340(L_7, L_8, L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___0_p;
		return L_11;
	}
}
// System.String ProBuilder2.Common.pb_Transform2D::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_Transform2D_ToString_mBE765FF9EB29BA874599196D7B28E3B9DE275BE3 (pb_Transform2D_t8EB3BDA8DE0C5D5204CD683D2761103D58949334* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BA3AD71D418783799FCAAD264C0E8F86479A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C5E69977B050497BEA3BB23ECC788A3071F231D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AD727815F6DCA695EC690423F87B06DC48B12E);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral05BA3AD71D418783799FCAAD264C0E8F86479A11);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral05BA3AD71D418783799FCAAD264C0E8F86479A11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___position_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = L_3;
		RuntimeObject* L_5 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral5C5E69977B050497BEA3BB23ECC788A3071F231D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral5C5E69977B050497BEA3BB23ECC788A3071F231D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		float L_8 = __this->___rotation_1;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		Il2CppChar L_12 = ((Il2CppChar)((int32_t)176));
		RuntimeObject* L_13 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralE3AD727815F6DCA695EC690423F87B06DC48B12E);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteralE3AD727815F6DCA695EC690423F87B06DC48B12E);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___scale_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = L_16;
		RuntimeObject* L_18 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		String_t* L_20;
		L_20 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_19, NULL);
		return L_20;
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
// System.Void ProBuilder2.Common.pb_Type::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Type__ctor_m2CB4AF515187483ADDE9E28087740FD97148A482 (pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Type_t* L_0 = ___0_t;
		__this->___type_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_1), (void*)L_0);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Type::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Type_OnBeforeSerialize_m182D137FA942716938C613ED9C11B95EF64B5E0A (pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___type_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___assemblyQualifiedName_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___assemblyQualifiedName_0), (void*)L_1);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Type::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Type_OnAfterDeserialize_m1865F55210046F0E26A1DB95703A5B2ED2E5691D (pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Type_OnAfterDeserialize_m1865F55210046F0E26A1DB95703A5B2ED2E5691D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___assemblyQualifiedName_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = il2cpp_codegen_get_type(L_0, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, pb_Type_OnAfterDeserialize_m1865F55210046F0E26A1DB95703A5B2ED2E5691D_RuntimeMethod_var);
		__this->___type_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_1), (void*)L_1);
		return;
	}
}
// System.Type ProBuilder2.Common.pb_Type::op_Implicit(ProBuilder2.Common.pb_Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* pb_Type_op_Implicit_m803DC9F3C4ED04CDD0A42F2CC8B367548AE70C79 (pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B* ___0_t, const RuntimeMethod* method) 
{
	{
		pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B* L_0 = ___0_t;
		NullCheck(L_0);
		Type_t* L_1 = L_0->___type_1;
		return L_1;
	}
}
// ProBuilder2.Common.pb_Type ProBuilder2.Common.pb_Type::op_Implicit(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B* pb_Type_op_Implicit_m51351304A3395E63719366EE6AC88365ECD3A3B4 (Type_t* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_t;
		pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B* L_1 = (pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B*)il2cpp_codegen_object_new(pb_Type_t23169FE189F7F9663A7DFE28AEF031B3444EA53B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		pb_Type__ctor_m2CB4AF515187483ADDE9E28087740FD97148A482(L_1, L_0, NULL);
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
// System.Void ProBuilder2.Common.pb_UnwrapParameters::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_UnwrapParameters_Reset_mE75D866F9AD18F8AE6FD43E3378F790AC00C87F0 (pb_UnwrapParameters_t8D192535BC46F15AFF21703BB09ADB6B07C25369* __this, const RuntimeMethod* method) 
{
	{
		__this->___hardAngle_0 = (88.0f);
		__this->___packMargin_1 = (4.0f);
		__this->___angleError_2 = (8.0f);
		__this->___areaError_3 = (15.0f);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_UnwrapParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_UnwrapParameters__ctor_m8616C82BD3F5DBB1BCB5EF4BEF52791791319E59 (pb_UnwrapParameters_t8D192535BC46F15AFF21703BB09ADB6B07C25369* __this, const RuntimeMethod* method) 
{
	{
		__this->___hardAngle_0 = (88.0f);
		__this->___packMargin_1 = (4.0f);
		__this->___angleError_2 = (8.0f);
		__this->___areaError_3 = (15.0f);
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
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_Vector_GetHashCode_m375FE6D3879644EFC2662D33973C904B6BC427EA (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)27);
		int32_t L_0 = V_0;
		float L_1 = (&___0_v)->___x_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, (1000.0f))))));
		int32_t L_2 = V_0;
		float L_3 = (&___0_v)->___y_1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_3, (1000.0f))))));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_Vector_GetHashCode_m9C766C1C23578822FB6C2F07593B9E360345B3BE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)27);
		int32_t L_0 = V_0;
		float L_1 = (&___0_v)->___x_2;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, (1000.0f))))));
		int32_t L_2 = V_0;
		float L_3 = (&___0_v)->___y_3;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_3, (1000.0f))))));
		int32_t L_4 = V_0;
		float L_5 = (&___0_v)->___z_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_5, (1000.0f))))));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 ProBuilder2.Common.pb_Vector::GetHashCode(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_Vector_GetHashCode_m09C21F7BF72419EAC4922A6CB721EA245B702345 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_v, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)27);
		int32_t L_0 = V_0;
		float L_1 = (&___0_v)->___x_1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_1, (1000.0f))))));
		int32_t L_2 = V_0;
		float L_3 = (&___0_v)->___y_2;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_3, (1000.0f))))));
		int32_t L_4 = V_0;
		float L_5 = (&___0_v)->___z_3;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_5, (1000.0f))))));
		int32_t L_6 = V_0;
		float L_7 = (&___0_v)->___w_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)29))), il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_7, (1000.0f))))));
		int32_t L_8 = V_0;
		return L_8;
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
// System.Void ProBuilder2.Common.pb_Vertex::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex__ctor_m6366A41D74ECCEE4689D80AF85FBBD38FDA7171C (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, bool ___0_hasAllValues, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___0_hasAllValues;
		__this->___hasPosition_8 = L_0;
		bool L_1 = ___0_hasAllValues;
		__this->___hasColor_9 = L_1;
		bool L_2 = ___0_hasAllValues;
		__this->___hasNormal_10 = L_2;
		bool L_3 = ___0_hasAllValues;
		__this->___hasTangent_11 = L_3;
		bool L_4 = ___0_hasAllValues;
		__this->___hasUv0_12 = L_4;
		bool L_5 = ___0_hasAllValues;
		__this->___hasUv2_13 = L_5;
		bool L_6 = ___0_hasAllValues;
		__this->___hasUv3_14 = L_6;
		bool L_7 = ___0_hasAllValues;
		__this->___hasUv4_15 = L_7;
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_Vertex::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Vertex_Equals_m2CA98ED75DE61ED21366B653CFCB1CAF8335BEA4 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)IsInstClass((RuntimeObject*)L_0, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		bool L_2;
		L_2 = pb_Vertex_Equals_mC2155000DCC8F981C8E22B509A5F1473AB1AB1D7(__this, ((pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)IsInstClass((RuntimeObject*)L_1, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean ProBuilder2.Common.pb_Vertex::Equals(ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_Vertex_Equals_mC2155000DCC8F981C8E22B509A5F1473AB1AB1D7 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_other, const RuntimeMethod* method) 
{
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___position_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_2 = ___0_other;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___position_0;
		bool L_4;
		L_4 = pb_Math_Approx3_mAB69DBA790A6479471327313A829240EB8382E13(L_1, L_3, (9.99999975E-05f), NULL);
		if (!L_4)
		{
			goto IL_00ca;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___color_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_6 = ___0_other;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___color_1;
		bool L_8;
		L_8 = pb_Math_ApproxC_mAD2B9C1ADE4183550214056AC25DCA7D2D941178(L_5, L_7, (9.99999975E-05f), NULL);
		if (!L_8)
		{
			goto IL_00ca;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___normal_2;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_10 = ___0_other;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___normal_2;
		bool L_12;
		L_12 = pb_Math_Approx3_mAB69DBA790A6479471327313A829240EB8382E13(L_9, L_11, (9.99999975E-05f), NULL);
		if (!L_12)
		{
			goto IL_00ca;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = __this->___tangent_3;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_14 = ___0_other;
		NullCheck(L_14);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = L_14->___tangent_3;
		bool L_16;
		L_16 = pb_Math_Approx4_m51126DD53E42EA6DD6A1403FC6915BC064305173(L_13, L_15, (9.99999975E-05f), NULL);
		if (!L_16)
		{
			goto IL_00ca;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___uv0_4;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_18 = ___0_other;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = L_18->___uv0_4;
		bool L_20;
		L_20 = pb_Math_Approx2_m0378CA8D4C7A84865BFE836075FE7FB599AAD2DF(L_17, L_19, (9.99999975E-05f), NULL);
		if (!L_20)
		{
			goto IL_00ca;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___uv2_5;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_22 = ___0_other;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = L_22->___uv2_5;
		bool L_24;
		L_24 = pb_Math_Approx2_m0378CA8D4C7A84865BFE836075FE7FB599AAD2DF(L_21, L_23, (9.99999975E-05f), NULL);
		if (!L_24)
		{
			goto IL_00ca;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = __this->___uv3_6;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_26 = ___0_other;
		NullCheck(L_26);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = L_26->___uv3_6;
		bool L_28;
		L_28 = pb_Math_Approx4_m51126DD53E42EA6DD6A1403FC6915BC064305173(L_25, L_27, (9.99999975E-05f), NULL);
		if (!L_28)
		{
			goto IL_00ca;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29 = __this->___uv4_7;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_30 = ___0_other;
		NullCheck(L_30);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31 = L_30->___uv4_7;
		bool L_32;
		L_32 = pb_Math_Approx4_m51126DD53E42EA6DD6A1403FC6915BC064305173(L_29, L_31, (9.99999975E-05f), NULL);
		return L_32;
	}

IL_00ca:
	{
		return (bool)0;
	}
}
// System.Int32 ProBuilder2.Common.pb_Vertex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_Vertex_GetHashCode_m1E9E497AA295415B6291574F9E53C09C227C6404 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_0;
		int32_t L_1;
		L_1 = pb_Vector_GetHashCode_m9C766C1C23578822FB6C2F07593B9E360345B3BE(L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)783), L_1));
		int32_t L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___uv0_4;
		int32_t L_4;
		L_4 = pb_Vector_GetHashCode_m375FE6D3879644EFC2662D33973C904B6BC427EA(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)29))), L_4));
		int32_t L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___normal_2;
		int32_t L_7;
		L_7 = pb_Vector_GetHashCode_m9C766C1C23578822FB6C2F07593B9E360345B3BE(L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)31))), L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::.ctor(ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex__ctor_m3758264BEF01047E01F57849CEFB2C74A0211587 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_v, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_0 = ___0_v;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		__this->___position_0 = L_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_2 = ___0_v;
		NullCheck(L_2);
		bool L_3 = L_2->___hasPosition_8;
		__this->___hasPosition_8 = L_3;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_4 = ___0_v;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = L_4->___color_1;
		__this->___color_1 = L_5;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_6 = ___0_v;
		NullCheck(L_6);
		bool L_7 = L_6->___hasColor_9;
		__this->___hasColor_9 = L_7;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_8 = ___0_v;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = L_8->___uv0_4;
		__this->___uv0_4 = L_9;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_10 = ___0_v;
		NullCheck(L_10);
		bool L_11 = L_10->___hasUv0_12;
		__this->___hasUv0_12 = L_11;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_12 = ___0_v;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___normal_2;
		__this->___normal_2 = L_13;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_14 = ___0_v;
		NullCheck(L_14);
		bool L_15 = L_14->___hasNormal_10;
		__this->___hasNormal_10 = L_15;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_16 = ___0_v;
		NullCheck(L_16);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = L_16->___tangent_3;
		__this->___tangent_3 = L_17;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_18 = ___0_v;
		NullCheck(L_18);
		bool L_19 = L_18->___hasTangent_11;
		__this->___hasTangent_11 = L_19;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_20 = ___0_v;
		NullCheck(L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = L_20->___uv2_5;
		__this->___uv2_5 = L_21;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_22 = ___0_v;
		NullCheck(L_22);
		bool L_23 = L_22->___hasUv2_13;
		__this->___hasUv2_13 = L_23;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_24 = ___0_v;
		NullCheck(L_24);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = L_24->___uv3_6;
		__this->___uv3_6 = L_25;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_26 = ___0_v;
		NullCheck(L_26);
		bool L_27 = L_26->___hasUv3_14;
		__this->___hasUv3_14 = L_27;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_28 = ___0_v;
		NullCheck(L_28);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29 = L_28->___uv4_7;
		__this->___uv4_7 = L_29;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_30 = ___0_v;
		NullCheck(L_30);
		bool L_31 = L_30->___hasUv4_15;
		__this->___hasUv4_15 = L_31;
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::op_Addition(ProBuilder2.Common.pb_Vertex,ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* pb_Vertex_op_Addition_m42158192296F09C8F75AC0F4AB3CFC3D52804BD5 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_a, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* V_0 = NULL;
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_0 = ___0_a;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_1 = (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)il2cpp_codegen_object_new(pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		pb_Vertex__ctor_m3758264BEF01047E01F57849CEFB2C74A0211587(L_1, L_0, NULL);
		V_0 = L_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_2 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_3 = ___1_b;
		NullCheck(L_2);
		pb_Vertex_Add_mAD4186AFC2C964C33DD5CBBAC34DBE474CD62B77(L_2, L_3, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_4 = V_0;
		return L_4;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Add(ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Add_mAD4186AFC2C964C33DD5CBBAC34DBE474CD62B77 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_b, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_1 = ___0_b;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_2, NULL);
		__this->___position_0 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___color_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_5 = ___0_b;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5->___color_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_4, L_6, NULL);
		__this->___color_1 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___normal_2;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_9 = ___0_b;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___normal_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_10, NULL);
		__this->___normal_2 = L_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = __this->___tangent_3;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_13 = ___0_b;
		NullCheck(L_13);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = L_13->___tangent_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_12, L_14, NULL);
		__this->___tangent_3 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___uv0_4;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_17 = ___0_b;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = L_17->___uv0_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_16, L_18, NULL);
		__this->___uv0_4 = L_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___uv2_5;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_21 = ___0_b;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = L_21->___uv2_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_20, L_22, NULL);
		__this->___uv2_5 = L_23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = __this->___uv3_6;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_25 = ___0_b;
		NullCheck(L_25);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = L_25->___uv3_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		L_27 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_24, L_26, NULL);
		__this->___uv3_6 = L_27;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28 = __this->___uv4_7;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_29 = ___0_b;
		NullCheck(L_29);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30 = L_29->___uv4_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31;
		L_31 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_28, L_30, NULL);
		__this->___uv4_7 = L_31;
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::op_Subtraction(ProBuilder2.Common.pb_Vertex,ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* pb_Vertex_op_Subtraction_mC7F2695A56FB246A96075A07460E36A8C60147DF (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_a, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* V_0 = NULL;
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_0 = ___0_a;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_1 = (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)il2cpp_codegen_object_new(pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		pb_Vertex__ctor_m3758264BEF01047E01F57849CEFB2C74A0211587(L_1, L_0, NULL);
		V_0 = L_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_2 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_3 = ___1_b;
		NullCheck(L_2);
		pb_Vertex_Subtract_m12911E618CCE36C93CDBF9D236BAD32A13250258(L_2, L_3, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_4 = V_0;
		return L_4;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Subtract(ProBuilder2.Common.pb_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Subtract_m12911E618CCE36C93CDBF9D236BAD32A13250258 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_b, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_1 = ___0_b;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_2, NULL);
		__this->___position_0 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___color_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_5 = ___0_b;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5->___color_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_4, L_6, NULL);
		__this->___color_1 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___normal_2;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_9 = ___0_b;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___normal_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_10, NULL);
		__this->___normal_2 = L_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = __this->___tangent_3;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_13 = ___0_b;
		NullCheck(L_13);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = L_13->___tangent_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		L_15 = Vector4_op_Subtraction_mD14864BB81AC08F643D2B82B41B3577012410ED9_inline(L_12, L_14, NULL);
		__this->___tangent_3 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___uv0_4;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_17 = ___0_b;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = L_17->___uv0_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_16, L_18, NULL);
		__this->___uv0_4 = L_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___uv2_5;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_21 = ___0_b;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = L_21->___uv2_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_20, L_22, NULL);
		__this->___uv2_5 = L_23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = __this->___uv3_6;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_25 = ___0_b;
		NullCheck(L_25);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = L_25->___uv3_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		L_27 = Vector4_op_Subtraction_mD14864BB81AC08F643D2B82B41B3577012410ED9_inline(L_24, L_26, NULL);
		__this->___uv3_6 = L_27;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28 = __this->___uv4_7;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_29 = ___0_b;
		NullCheck(L_29);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30 = L_29->___uv4_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31;
		L_31 = Vector4_op_Subtraction_mD14864BB81AC08F643D2B82B41B3577012410ED9_inline(L_28, L_30, NULL);
		__this->___uv4_7 = L_31;
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::op_Multiply(ProBuilder2.Common.pb_Vertex,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* pb_Vertex_op_Multiply_m4E7C993A150CD101CEE0CE9B96A147A5517C2851 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_a, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* V_0 = NULL;
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_0 = ___0_a;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_1 = (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)il2cpp_codegen_object_new(pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		pb_Vertex__ctor_m3758264BEF01047E01F57849CEFB2C74A0211587(L_1, L_0, NULL);
		V_0 = L_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_2 = V_0;
		float L_3 = ___1_value;
		NullCheck(L_2);
		pb_Vertex_Multiply_m7724B1F58A2A4E9F572491A2A97BC5A464B8A551(L_2, L_3, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_4 = V_0;
		return L_4;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Multiply(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Multiply_m7724B1F58A2A4E9F572491A2A97BC5A464B8A551 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_0;
		float L_1 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		__this->___position_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___color_1;
		float L_4 = ___0_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_3, L_4, NULL);
		__this->___color_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___normal_2;
		float L_7 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		__this->___normal_2 = L_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = __this->___tangent_3;
		float L_10 = ___0_value;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_9, L_10, NULL);
		__this->___tangent_3 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___uv0_4;
		float L_13 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, L_13, NULL);
		__this->___uv0_4 = L_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___uv2_5;
		float L_16 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_15, L_16, NULL);
		__this->___uv2_5 = L_17;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = __this->___uv3_6;
		float L_19 = ___0_value;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20;
		L_20 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_18, L_19, NULL);
		__this->___uv3_6 = L_20;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = __this->___uv4_7;
		float L_22 = ___0_value;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		L_23 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_21, L_22, NULL);
		__this->___uv4_7 = L_23;
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::op_Division(ProBuilder2.Common.pb_Vertex,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* pb_Vertex_op_Division_m0D3BADF36AB069D03A03D187C6C89882727263CD (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_a, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* V_0 = NULL;
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_0 = ___0_a;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_1 = (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)il2cpp_codegen_object_new(pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		pb_Vertex__ctor_m3758264BEF01047E01F57849CEFB2C74A0211587(L_1, L_0, NULL);
		V_0 = L_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_2 = V_0;
		float L_3 = ___1_value;
		NullCheck(L_2);
		pb_Vertex_Divide_mD4D7A921F76150B765747B6CBDB1244908564303(L_2, L_3, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_4 = V_0;
		return L_4;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Divide(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Divide_mD4D7A921F76150B765747B6CBDB1244908564303 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_0;
		float L_1 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_0, L_1, NULL);
		__this->___position_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___color_1;
		float L_4 = ___0_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_op_Division_m641F85C0191C56932E452CAAC8E4974C43675FEB_inline(L_3, L_4, NULL);
		__this->___color_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___normal_2;
		float L_7 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_6, L_7, NULL);
		__this->___normal_2 = L_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = __this->___tangent_3;
		float L_10 = ___0_value;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11;
		L_11 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_9, L_10, NULL);
		__this->___tangent_3 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___uv0_4;
		float L_13 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_12, L_13, NULL);
		__this->___uv0_4 = L_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___uv2_5;
		float L_16 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_15, L_16, NULL);
		__this->___uv2_5 = L_17;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = __this->___uv3_6;
		float L_19 = ___0_value;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20;
		L_20 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_18, L_19, NULL);
		__this->___uv3_6 = L_20;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = __this->___uv4_7;
		float L_22 = ___0_value;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		L_23 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_21, L_22, NULL);
		__this->___uv4_7 = L_23;
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_Normalize_mBABB0E42711F8BB8238947DF885B8F761AA344C2 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___position_0);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___color_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_1, NULL);
		V_0 = L_2;
		Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = (&__this->___color_1);
		float L_4 = (&V_0)->___x_1;
		L_3->___r_0 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = (&__this->___color_1);
		float L_6 = (&V_0)->___y_2;
		L_5->___g_1 = L_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___color_1);
		float L_8 = (&V_0)->___z_3;
		L_7->___b_2 = L_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = (&__this->___color_1);
		float L_10 = (&V_0)->___w_4;
		L_9->___a_3 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___normal_2);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_11, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_12 = (&__this->___tangent_3);
		Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___uv0_4);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___uv2_5);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline(L_14, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_15 = (&__this->___uv3_6);
		Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline(L_15, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_16 = (&__this->___uv4_7);
		Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline(L_16, NULL);
		return;
	}
}
// System.String ProBuilder2.Common.pb_Vertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_Vertex_ToString_m19CEC6BF6E09C1D052A312B79143BF6002491169 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___position_0);
		String_t* L_1;
		L_1 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE(L_0, NULL);
		return L_1;
	}
}
// ProBuilder2.Common.pb_Vertex[] ProBuilder2.Common.pb_Vertex::GetVertices(pb_Object,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* pb_Vertex_GetVertices_m81CE99087AC7EEB633ECF6EFE71681081BFA11A4 (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* ___0_pb, RuntimeObject* ___1_indices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* V_2 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_6 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_7 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_8 = NULL;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* V_9 = NULL;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B31_0 = 0;
	{
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_0 = ___0_pb;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = pb_Object_get_vertexCount_m7166CC84AFE72329239FDB5B06F1FE48163BA55E(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___1_indices;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_3 = ___0_pb;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = pb_Object_get_vertexCount_m7166CC84AFE72329239FDB5B06F1FE48163BA55E(L_3, NULL);
		G_B3_0 = L_4;
		goto IL_0018;
	}

IL_0012:
	{
		RuntimeObject* L_5 = ___1_indices;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_5);
		G_B3_0 = L_6;
	}

IL_0018:
	{
		V_1 = G_B3_0;
		int32_t L_7 = V_1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_8 = (pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8*)(pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8*)SZArrayNew(pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_2 = L_8;
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_9 = ___0_pb;
		NullCheck(L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10;
		L_10 = pb_Object_get_vertices_m2D6504BF241FC52BB788AD71F98E6EB5E29A687B_inline(L_9, NULL);
		V_3 = L_10;
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_11 = ___0_pb;
		NullCheck(L_11);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_12;
		L_12 = pb_Object_get_colors_mC6D853D06BB58331DA619CD4E6B19F8CFE02A194_inline(L_11, NULL);
		V_4 = L_12;
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_13 = ___0_pb;
		NullCheck(L_13);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14;
		L_14 = pb_Object_get_uv_mA690500E527617F2679CA6674416E02079D8C430_inline(L_13, NULL);
		V_5 = L_14;
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_15 = ___0_pb;
		NullCheck(L_15);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16;
		L_16 = pb_Object_get_msh_m7D97F56DAFD7BD3FF2033DB94F70B23CF91C3879(L_15, NULL);
		NullCheck(L_16);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17;
		L_17 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_16, NULL);
		V_6 = L_17;
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_18 = ___0_pb;
		NullCheck(L_18);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_19;
		L_19 = pb_Object_get_msh_m7D97F56DAFD7BD3FF2033DB94F70B23CF91C3879(L_18, NULL);
		NullCheck(L_19);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_20;
		L_20 = Mesh_get_tangents_mEA6C7BF6A2B9A8BD0E9A62963E048F973878299E(L_19, NULL);
		V_7 = L_20;
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_21 = ___0_pb;
		NullCheck(L_21);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22;
		L_22 = pb_Object_get_msh_m7D97F56DAFD7BD3FF2033DB94F70B23CF91C3879(L_21, NULL);
		NullCheck(L_22);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23;
		L_23 = Mesh_get_uv2_mBD25DD8C860E10A1D109C9622622D52571F56B6F(L_22, NULL);
		V_8 = L_23;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_24 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20(L_24, List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		V_9 = L_24;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_25 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20(L_25, List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		V_10 = L_25;
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_26 = ___0_pb;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_27 = V_9;
		NullCheck(L_26);
		pb_Object_GetUVs_m54DD9507EECAB605B0D201E534E72C6CB4959FF5(L_26, 2, L_27, NULL);
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_28 = ___0_pb;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_29 = V_10;
		NullCheck(L_28);
		pb_Object_GetUVs_m54DD9507EECAB605B0D201E534E72C6CB4959FF5(L_28, 3, L_29, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = V_3;
		if (!L_30)
		{
			goto IL_008c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = V_3;
		int32_t L_32;
		L_32 = Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE((RuntimeObject*)L_31, Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_RuntimeMethod_var);
		int32_t L_33 = V_0;
		G_B6_0 = ((((int32_t)L_32) == ((int32_t)L_33))? 1 : 0);
		goto IL_008d;
	}

IL_008c:
	{
		G_B6_0 = 0;
	}

IL_008d:
	{
		V_11 = (bool)G_B6_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_34 = V_4;
		if (!L_34)
		{
			goto IL_009f;
		}
	}
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_35 = V_4;
		int32_t L_36;
		L_36 = Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608((RuntimeObject*)L_35, Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608_RuntimeMethod_var);
		int32_t L_37 = V_0;
		G_B9_0 = ((((int32_t)L_36) == ((int32_t)L_37))? 1 : 0);
		goto IL_00a0;
	}

IL_009f:
	{
		G_B9_0 = 0;
	}

IL_00a0:
	{
		V_12 = (bool)G_B9_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = V_6;
		if (!L_38)
		{
			goto IL_00b2;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = V_6;
		int32_t L_40;
		L_40 = Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE((RuntimeObject*)L_39, Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_RuntimeMethod_var);
		int32_t L_41 = V_0;
		G_B12_0 = ((((int32_t)L_40) == ((int32_t)L_41))? 1 : 0);
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B12_0 = 0;
	}

IL_00b3:
	{
		V_13 = (bool)G_B12_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_42 = V_7;
		if (!L_42)
		{
			goto IL_00c5;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_43 = V_7;
		int32_t L_44;
		L_44 = Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9((RuntimeObject*)L_43, Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var);
		int32_t L_45 = V_0;
		G_B15_0 = ((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0);
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B15_0 = 0;
	}

IL_00c6:
	{
		V_14 = (bool)G_B15_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_46 = V_5;
		if (!L_46)
		{
			goto IL_00d8;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_47 = V_5;
		int32_t L_48;
		L_48 = Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332((RuntimeObject*)L_47, Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_RuntimeMethod_var);
		int32_t L_49 = V_0;
		G_B18_0 = ((((int32_t)L_48) == ((int32_t)L_49))? 1 : 0);
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B18_0 = 0;
	}

IL_00d9:
	{
		V_15 = (bool)G_B18_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_50 = V_8;
		if (!L_50)
		{
			goto IL_00eb;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_51 = V_8;
		int32_t L_52;
		L_52 = Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332((RuntimeObject*)L_51, Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_RuntimeMethod_var);
		int32_t L_53 = V_0;
		G_B21_0 = ((((int32_t)L_52) == ((int32_t)L_53))? 1 : 0);
		goto IL_00ec;
	}

IL_00eb:
	{
		G_B21_0 = 0;
	}

IL_00ec:
	{
		V_16 = (bool)G_B21_0;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_54 = V_9;
		if (!L_54)
		{
			goto IL_00fe;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_55 = V_9;
		int32_t L_56;
		L_56 = Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9(L_55, Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var);
		int32_t L_57 = V_0;
		G_B24_0 = ((((int32_t)L_56) == ((int32_t)L_57))? 1 : 0);
		goto IL_00ff;
	}

IL_00fe:
	{
		G_B24_0 = 0;
	}

IL_00ff:
	{
		V_17 = (bool)G_B24_0;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_58 = V_10;
		if (!L_58)
		{
			goto IL_0111;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_59 = V_10;
		int32_t L_60;
		L_60 = Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9(L_59, Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var);
		int32_t L_61 = V_0;
		G_B27_0 = ((((int32_t)L_60) == ((int32_t)L_61))? 1 : 0);
		goto IL_0112;
	}

IL_0111:
	{
		G_B27_0 = 0;
	}

IL_0112:
	{
		V_18 = (bool)G_B27_0;
		V_19 = 0;
		goto IL_025a;
	}

IL_011c:
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_62 = V_2;
		int32_t L_63 = V_19;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_64 = (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)il2cpp_codegen_object_new(pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		pb_Vertex__ctor_m6366A41D74ECCEE4689D80AF85FBBD38FDA7171C(L_64, (bool)0, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)L_64);
		RuntimeObject* L_65 = ___1_indices;
		if (!L_65)
		{
			goto IL_0133;
		}
	}
	{
		RuntimeObject* L_66 = ___1_indices;
		int32_t L_67 = V_19;
		NullCheck(L_66);
		int32_t L_68;
		L_68 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var, L_66, L_67);
		G_B31_0 = L_68;
		goto IL_0135;
	}

IL_0133:
	{
		int32_t L_69 = V_19;
		G_B31_0 = L_69;
	}

IL_0135:
	{
		V_20 = G_B31_0;
		bool L_70 = V_11;
		if (!L_70)
		{
			goto IL_015b;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_71 = V_2;
		int32_t L_72 = V_19;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		L_74->___hasPosition_8 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_75 = V_2;
		int32_t L_76 = V_19;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = V_3;
		int32_t L_80 = V_20;
		NullCheck(L_79);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80))));
		NullCheck(L_78);
		L_78->___position_0 = L_81;
	}

IL_015b:
	{
		bool L_82 = V_12;
		if (!L_82)
		{
			goto IL_0180;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_83 = V_2;
		int32_t L_84 = V_19;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		L_86->___hasColor_9 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_87 = V_2;
		int32_t L_88 = V_19;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_91 = V_4;
		int32_t L_92 = V_20;
		NullCheck(L_91);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_93 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92))));
		NullCheck(L_90);
		L_90->___color_1 = L_93;
	}

IL_0180:
	{
		bool L_94 = V_13;
		if (!L_94)
		{
			goto IL_01a5;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_95 = V_2;
		int32_t L_96 = V_19;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		L_98->___hasNormal_10 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_99 = V_2;
		int32_t L_100 = V_19;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = V_6;
		int32_t L_104 = V_20;
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104))));
		NullCheck(L_102);
		L_102->___normal_2 = L_105;
	}

IL_01a5:
	{
		bool L_106 = V_14;
		if (!L_106)
		{
			goto IL_01ca;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_107 = V_2;
		int32_t L_108 = V_19;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		L_110->___hasTangent_11 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_111 = V_2;
		int32_t L_112 = V_19;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_115 = V_7;
		int32_t L_116 = V_20;
		NullCheck(L_115);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_117 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((L_115)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_116))));
		NullCheck(L_114);
		L_114->___tangent_3 = L_117;
	}

IL_01ca:
	{
		bool L_118 = V_15;
		if (!L_118)
		{
			goto IL_01ef;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_119 = V_2;
		int32_t L_120 = V_19;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		L_122->___hasUv0_12 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_123 = V_2;
		int32_t L_124 = V_19;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_127 = V_5;
		int32_t L_128 = V_20;
		NullCheck(L_127);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_128))));
		NullCheck(L_126);
		L_126->___uv0_4 = L_129;
	}

IL_01ef:
	{
		bool L_130 = V_16;
		if (!L_130)
		{
			goto IL_0214;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_131 = V_2;
		int32_t L_132 = V_19;
		NullCheck(L_131);
		int32_t L_133 = L_132;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_134);
		L_134->___hasUv2_13 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_135 = V_2;
		int32_t L_136 = V_19;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_139 = V_8;
		int32_t L_140 = V_20;
		NullCheck(L_139);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((L_139)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_140))));
		NullCheck(L_138);
		L_138->___uv2_5 = L_141;
	}

IL_0214:
	{
		bool L_142 = V_17;
		if (!L_142)
		{
			goto IL_0234;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_143 = V_2;
		int32_t L_144 = V_19;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		NullCheck(L_146);
		L_146->___hasUv3_14 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_147 = V_2;
		int32_t L_148 = V_19;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_151 = V_9;
		int32_t L_152 = V_20;
		NullCheck(L_151);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_153;
		L_153 = List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4(L_151, L_152, List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var);
		NullCheck(L_150);
		L_150->___uv3_6 = L_153;
	}

IL_0234:
	{
		bool L_154 = V_18;
		if (!L_154)
		{
			goto IL_0254;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_155 = V_2;
		int32_t L_156 = V_19;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		NullCheck(L_158);
		L_158->___hasUv4_15 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_159 = V_2;
		int32_t L_160 = V_19;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_163 = V_10;
		int32_t L_164 = V_20;
		NullCheck(L_163);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_165;
		L_165 = List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4(L_163, L_164, List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var);
		NullCheck(L_162);
		L_162->___uv4_7 = L_165;
	}

IL_0254:
	{
		int32_t L_166 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_166, 1));
	}

IL_025a:
	{
		int32_t L_167 = V_19;
		int32_t L_168 = V_1;
		if ((((int32_t)L_167) < ((int32_t)L_168)))
		{
			goto IL_011c;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_169 = V_2;
		return L_169;
	}
}
// ProBuilder2.Common.pb_Vertex[] ProBuilder2.Common.pb_Vertex::GetVertices(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* pb_Vertex_GetVertices_m97E6AF4977E6F28B5D1B00A34D1C1AA0826EC9D1 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_m, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* V_1 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_3 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_5 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_6 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_7 = NULL;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* V_8 = NULL;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t V_18 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_m;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8*)NULL;
	}

IL_000b:
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___0_m;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_5 = (pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8*)(pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8*)SZArrayNew(pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___0_m;
		NullCheck(L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7;
		L_7 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_6, NULL);
		V_2 = L_7;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___0_m;
		NullCheck(L_8);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9;
		L_9 = Mesh_get_colors_m3A38944EBA064B0E55A24C95C3706193F45B313D(L_8, NULL);
		V_3 = L_9;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = ___0_m;
		NullCheck(L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11;
		L_11 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_10, NULL);
		V_4 = L_11;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = ___0_m;
		NullCheck(L_12);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13;
		L_13 = Mesh_get_tangents_mEA6C7BF6A2B9A8BD0E9A62963E048F973878299E(L_12, NULL);
		V_5 = L_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = ___0_m;
		NullCheck(L_14);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15;
		L_15 = Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F(L_14, NULL);
		V_6 = L_15;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = ___0_m;
		NullCheck(L_16);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_17;
		L_17 = Mesh_get_uv2_mBD25DD8C860E10A1D109C9622622D52571F56B6F(L_16, NULL);
		V_7 = L_17;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_18 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20(L_18, List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		V_8 = L_18;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_19 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20(L_19, List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		V_9 = L_19;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_20 = ___0_m;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_21 = V_8;
		NullCheck(L_20);
		Mesh_GetUVs_m3FCD854132DA16719481B8D97DF335A0C7244344(L_20, 2, L_21, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = ___0_m;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_23 = V_9;
		NullCheck(L_22);
		Mesh_GetUVs_m3FCD854132DA16719481B8D97DF335A0C7244344(L_22, 3, L_23, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_2;
		if (!L_24)
		{
			goto IL_0075;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_2;
		int32_t L_26;
		L_26 = Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE((RuntimeObject*)L_25, Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_RuntimeMethod_var);
		int32_t L_27 = V_0;
		G_B5_0 = ((((int32_t)L_26) == ((int32_t)L_27))? 1 : 0);
		goto IL_0076;
	}

IL_0075:
	{
		G_B5_0 = 0;
	}

IL_0076:
	{
		V_10 = (bool)G_B5_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_28 = V_3;
		if (!L_28)
		{
			goto IL_0086;
		}
	}
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_29 = V_3;
		int32_t L_30;
		L_30 = Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608((RuntimeObject*)L_29, Enumerable_Count_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB5128D1A5E39D5F7176A95E553F0999F52BEE608_RuntimeMethod_var);
		int32_t L_31 = V_0;
		G_B8_0 = ((((int32_t)L_30) == ((int32_t)L_31))? 1 : 0);
		goto IL_0087;
	}

IL_0086:
	{
		G_B8_0 = 0;
	}

IL_0087:
	{
		V_11 = (bool)G_B8_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_4;
		if (!L_32)
		{
			goto IL_0099;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = V_4;
		int32_t L_34;
		L_34 = Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE((RuntimeObject*)L_33, Enumerable_Count_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC44B7DB65ABE22FB6B31F20168591552226483FE_RuntimeMethod_var);
		int32_t L_35 = V_0;
		G_B11_0 = ((((int32_t)L_34) == ((int32_t)L_35))? 1 : 0);
		goto IL_009a;
	}

IL_0099:
	{
		G_B11_0 = 0;
	}

IL_009a:
	{
		V_12 = (bool)G_B11_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = V_5;
		if (!L_36)
		{
			goto IL_00ac;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_37 = V_5;
		int32_t L_38;
		L_38 = Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9((RuntimeObject*)L_37, Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var);
		int32_t L_39 = V_0;
		G_B14_0 = ((((int32_t)L_38) == ((int32_t)L_39))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B14_0 = 0;
	}

IL_00ad:
	{
		V_13 = (bool)G_B14_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_40 = V_6;
		if (!L_40)
		{
			goto IL_00bf;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = V_6;
		int32_t L_42;
		L_42 = Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332((RuntimeObject*)L_41, Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_RuntimeMethod_var);
		int32_t L_43 = V_0;
		G_B17_0 = ((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B17_0 = 0;
	}

IL_00c0:
	{
		V_14 = (bool)G_B17_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_44 = V_7;
		if (!L_44)
		{
			goto IL_00d2;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = V_7;
		int32_t L_46;
		L_46 = Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332((RuntimeObject*)L_45, Enumerable_Count_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB8767F34A2C62FFA39BBC226F52449A44B8F8332_RuntimeMethod_var);
		int32_t L_47 = V_0;
		G_B20_0 = ((((int32_t)L_46) == ((int32_t)L_47))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B20_0 = 0;
	}

IL_00d3:
	{
		V_15 = (bool)G_B20_0;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_48 = V_8;
		if (!L_48)
		{
			goto IL_00e5;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_49 = V_8;
		int32_t L_50;
		L_50 = Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9(L_49, Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var);
		int32_t L_51 = V_0;
		G_B23_0 = ((((int32_t)L_50) == ((int32_t)L_51))? 1 : 0);
		goto IL_00e6;
	}

IL_00e5:
	{
		G_B23_0 = 0;
	}

IL_00e6:
	{
		V_16 = (bool)G_B23_0;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_52 = V_9;
		if (!L_52)
		{
			goto IL_00f8;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_53 = V_9;
		int32_t L_54;
		L_54 = Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9(L_53, Enumerable_Count_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m17086190C4BB7B24E2FA9914FF784BE1815A4FF9_RuntimeMethod_var);
		int32_t L_55 = V_0;
		G_B26_0 = ((((int32_t)L_54) == ((int32_t)L_55))? 1 : 0);
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B26_0 = 0;
	}

IL_00f9:
	{
		V_17 = (bool)G_B26_0;
		V_18 = 0;
		goto IL_022f;
	}

IL_0103:
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_56 = V_1;
		int32_t L_57 = V_18;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_58 = (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)il2cpp_codegen_object_new(pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		pb_Vertex__ctor_m6366A41D74ECCEE4689D80AF85FBBD38FDA7171C(L_58, (bool)0, NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_58);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)L_58);
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_0131;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_60 = V_1;
		int32_t L_61 = V_18;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		L_63->___hasPosition_8 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_64 = V_1;
		int32_t L_65 = V_18;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_2;
		int32_t L_69 = V_18;
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))));
		NullCheck(L_67);
		L_67->___position_0 = L_70;
	}

IL_0131:
	{
		bool L_71 = V_11;
		if (!L_71)
		{
			goto IL_0155;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_72 = V_1;
		int32_t L_73 = V_18;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		L_75->___hasColor_9 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_76 = V_1;
		int32_t L_77 = V_18;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_80 = V_3;
		int32_t L_81 = V_18;
		NullCheck(L_80);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_82 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81))));
		NullCheck(L_79);
		L_79->___color_1 = L_82;
	}

IL_0155:
	{
		bool L_83 = V_12;
		if (!L_83)
		{
			goto IL_017a;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_84 = V_1;
		int32_t L_85 = V_18;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		L_87->___hasNormal_10 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_88 = V_1;
		int32_t L_89 = V_18;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_92 = V_4;
		int32_t L_93 = V_18;
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_93))));
		NullCheck(L_91);
		L_91->___normal_2 = L_94;
	}

IL_017a:
	{
		bool L_95 = V_13;
		if (!L_95)
		{
			goto IL_019f;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_96 = V_1;
		int32_t L_97 = V_18;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_99);
		L_99->___hasTangent_11 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_100 = V_1;
		int32_t L_101 = V_18;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_104 = V_5;
		int32_t L_105 = V_18;
		NullCheck(L_104);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_106 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105))));
		NullCheck(L_103);
		L_103->___tangent_3 = L_106;
	}

IL_019f:
	{
		bool L_107 = V_14;
		if (!L_107)
		{
			goto IL_01c4;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_108 = V_1;
		int32_t L_109 = V_18;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		L_111->___hasUv0_12 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_112 = V_1;
		int32_t L_113 = V_18;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_116 = V_6;
		int32_t L_117 = V_18;
		NullCheck(L_116);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((L_116)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_117))));
		NullCheck(L_115);
		L_115->___uv0_4 = L_118;
	}

IL_01c4:
	{
		bool L_119 = V_15;
		if (!L_119)
		{
			goto IL_01e9;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_120 = V_1;
		int32_t L_121 = V_18;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		L_123->___hasUv2_13 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_124 = V_1;
		int32_t L_125 = V_18;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_128 = V_7;
		int32_t L_129 = V_18;
		NullCheck(L_128);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((L_128)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_129))));
		NullCheck(L_127);
		L_127->___uv2_5 = L_130;
	}

IL_01e9:
	{
		bool L_131 = V_16;
		if (!L_131)
		{
			goto IL_0209;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_132 = V_1;
		int32_t L_133 = V_18;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		L_135->___hasUv3_14 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_136 = V_1;
		int32_t L_137 = V_18;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_140 = V_8;
		int32_t L_141 = V_18;
		NullCheck(L_140);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_142;
		L_142 = List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4(L_140, L_141, List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var);
		NullCheck(L_139);
		L_139->___uv3_6 = L_142;
	}

IL_0209:
	{
		bool L_143 = V_17;
		if (!L_143)
		{
			goto IL_0229;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_144 = V_1;
		int32_t L_145 = V_18;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		NullCheck(L_147);
		L_147->___hasUv4_15 = (bool)1;
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_148 = V_1;
		int32_t L_149 = V_18;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_152 = V_9;
		int32_t L_153 = V_18;
		NullCheck(L_152);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_154;
		L_154 = List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4(L_152, L_153, List_1_get_Item_mF5D504FB09F98DB07ABEF3D064237C0BCBD8EDC4_RuntimeMethod_var);
		NullCheck(L_151);
		L_151->___uv4_7 = L_154;
	}

IL_0229:
	{
		int32_t L_155 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_155, 1));
	}

IL_022f:
	{
		int32_t L_156 = V_18;
		int32_t L_157 = V_0;
		if ((((int32_t)L_156) < ((int32_t)L_157)))
		{
			goto IL_0103;
		}
	}
	{
		pb_VertexU5BU5D_tC3B17D2BBC9DECAE5F6AA615615B5280309998C8* L_158 = V_1;
		return L_158;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::GetArrays(System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>,UnityEngine.Vector3[]&,UnityEngine.Color[]&,UnityEngine.Vector2[]&,UnityEngine.Vector3[]&,UnityEngine.Vector4[]&,UnityEngine.Vector2[]&,System.Collections.Generic.List`1<UnityEngine.Vector4>&,System.Collections.Generic.List`1<UnityEngine.Vector4>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_GetArrays_mC648270982AEE831CC3584DA1496DDBB82CB903E (RuntimeObject* ___0_vertices, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___1_position, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** ___2_color, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___3_uv0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___4_normal, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___5_tangent, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** ___6_uv2, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** ___7_uv3, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** ___8_uv4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tCEFFFBB21FEF128738683C9DFE814FA2786E6D8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_vertices;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProBuilder2.Common.pb_Vertex>::get_Count() */, ICollection_1_tCEFFFBB21FEF128738683C9DFE814FA2786E6D8C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_2 = ___1_position;
		int32_t L_3 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** L_5 = ___2_color;
		int32_t L_6 = V_0;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)L_6);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_8 = ___3_uv0;
		int32_t L_9 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_9);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_10);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_11 = ___4_normal;
		int32_t L_12 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_12);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_13);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_14 = ___5_tangent;
		int32_t L_15 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)L_15);
		*((RuntimeObject**)L_14) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)L_16);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_17 = ___6_uv2;
		int32_t L_18 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_18);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** L_20 = ___7_uv3;
		int32_t L_21 = V_0;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_22 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543(L_22, L_21, List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var);
		*((RuntimeObject**)L_20) = (RuntimeObject*)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)L_22);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** L_23 = ___8_uv4;
		int32_t L_24 = V_0;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_25 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543(L_25, L_24, List_1__ctor_m6DE881973FEDB21534398B48EC603235384D7543_RuntimeMethod_var);
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_25);
		V_1 = 0;
		goto IL_0118;
	}

IL_0053:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_26 = ___1_position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_26);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		RuntimeObject* L_29 = ___0_vertices;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_31;
		L_31 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_29, L_30);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = L_31->___position_0;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))) = L_32;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389** L_33 = ___2_color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_34 = *((ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389**)L_33);
		int32_t L_35 = V_1;
		NullCheck(L_34);
		RuntimeObject* L_36 = ___0_vertices;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_38;
		L_38 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_36, L_37);
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = L_38->___color_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))) = L_39;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_40 = ___3_uv0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = *((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**)L_40);
		int32_t L_42 = V_1;
		NullCheck(L_41);
		RuntimeObject* L_43 = ___0_vertices;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_45;
		L_45 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_43, L_44);
		NullCheck(L_45);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = L_45->___uv0_4;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))) = L_46;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_47 = ___4_normal;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_47);
		int32_t L_49 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_50 = ___0_vertices;
		int32_t L_51 = V_1;
		NullCheck(L_50);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_52;
		L_52 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_50, L_51);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = L_52->___normal_2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))) = L_53;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_54 = ___5_tangent;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_55 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_54);
		int32_t L_56 = V_1;
		NullCheck(L_55);
		RuntimeObject* L_57 = ___0_vertices;
		int32_t L_58 = V_1;
		NullCheck(L_57);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_59;
		L_59 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_57, L_58);
		NullCheck(L_59);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60 = L_59->___tangent_3;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56))) = L_60;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA** L_61 = ___6_uv2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_62 = *((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA**)L_61);
		int32_t L_63 = V_1;
		NullCheck(L_62);
		RuntimeObject* L_64 = ___0_vertices;
		int32_t L_65 = V_1;
		NullCheck(L_64);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_66;
		L_66 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_64, L_65);
		NullCheck(L_66);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = L_66->___uv2_5;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63))) = L_67;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** L_68 = ___7_uv3;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_69 = *((List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317**)L_68);
		RuntimeObject* L_70 = ___0_vertices;
		int32_t L_71 = V_1;
		NullCheck(L_70);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_72;
		L_72 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_70, L_71);
		NullCheck(L_72);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_73 = L_72->___uv3_6;
		NullCheck(L_69);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_69, L_73, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317** L_74 = ___8_uv4;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_75 = *((List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317**)L_74);
		RuntimeObject* L_76 = ___0_vertices;
		int32_t L_77 = V_1;
		NullCheck(L_76);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_78;
		L_78 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_76, L_77);
		NullCheck(L_78);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79 = L_78->___uv4_7;
		NullCheck(L_75);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_75, L_79, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		int32_t L_80 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_0118:
	{
		int32_t L_81 = V_1;
		int32_t L_82 = V_0;
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Vertex::SetMesh(UnityEngine.Mesh,System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Vertex_SetMesh_mF2F9FD08675BA3DF53DB7CF94762548038E8C214 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_m, RuntimeObject* ___1_vertices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_3 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* V_6 = NULL;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* V_7 = NULL;
	pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* V_8 = NULL;
	{
		V_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		V_1 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)NULL;
		V_2 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL;
		V_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		V_4 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)NULL;
		V_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)NULL;
		V_6 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)NULL;
		V_7 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)NULL;
		RuntimeObject* L_0 = ___1_vertices;
		pb_Vertex_GetArrays_mC648270982AEE831CC3584DA1496DDBB82CB903E(L_0, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_7), NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = ___0_m;
		NullCheck(L_1);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_1, NULL);
		RuntimeObject* L_2 = ___1_vertices;
		NullCheck(L_2);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_3;
		L_3 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_2, 0);
		V_8 = L_3;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_4 = V_8;
		NullCheck(L_4);
		bool L_5 = L_4->___hasPosition_8;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___0_m;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_0;
		NullCheck(L_6);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_6, L_7, NULL);
	}

IL_0049:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_8 = V_8;
		NullCheck(L_8);
		bool L_9 = L_8->___hasColor_9;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = ___0_m;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = V_1;
		NullCheck(L_10);
		Mesh_set_colors_m5558BAAA60676427B7954F1694A1765B000EB0FE(L_10, L_11, NULL);
	}

IL_0059:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_12 = V_8;
		NullCheck(L_12);
		bool L_13 = L_12->___hasUv0_12;
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = ___0_m;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = V_2;
		NullCheck(L_14);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_14, L_15, NULL);
	}

IL_0069:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_16 = V_8;
		NullCheck(L_16);
		bool L_17 = L_16->___hasNormal_10;
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_18 = ___0_m;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = V_3;
		NullCheck(L_18);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_18, L_19, NULL);
	}

IL_0079:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_20 = V_8;
		NullCheck(L_20);
		bool L_21 = L_20->___hasTangent_11;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = ___0_m;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_23 = V_4;
		NullCheck(L_22);
		Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B(L_22, L_23, NULL);
	}

IL_008a:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_24 = V_8;
		NullCheck(L_24);
		bool L_25 = L_24->___hasUv2_13;
		if (!L_25)
		{
			goto IL_009b;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26 = ___0_m;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_27 = V_5;
		NullCheck(L_26);
		Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5(L_26, L_27, NULL);
	}

IL_009b:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_28 = V_8;
		NullCheck(L_28);
		bool L_29 = L_28->___hasUv3_14;
		if (!L_29)
		{
			goto IL_00b1;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_30 = V_6;
		if (!L_30)
		{
			goto IL_00b1;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = ___0_m;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_32 = V_6;
		NullCheck(L_31);
		Mesh_SetUVs_mA0EA40129409D956FF22FCF7E01E27382879E255(L_31, 2, L_32, NULL);
	}

IL_00b1:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_33 = V_8;
		NullCheck(L_33);
		bool L_34 = L_33->___hasUv4_15;
		if (!L_34)
		{
			goto IL_00c7;
		}
	}
	{
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_35 = V_7;
		if (!L_35)
		{
			goto IL_00c7;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_36 = ___0_m;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_37 = V_7;
		NullCheck(L_36);
		Mesh_SetUVs_mA0EA40129409D956FF22FCF7E01E27382879E255(L_36, 3, L_37, NULL);
	}

IL_00c7:
	{
		return;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::Average(System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>,System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* pb_Vertex_Average_mFECD9E43E30437019300EED60551D8535B85F2FA (RuntimeObject* ___0_vertices, RuntimeObject* ___1_indices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tCEFFFBB21FEF128738683C9DFE814FA2786E6D8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_0 = (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)il2cpp_codegen_object_new(pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		pb_Vertex__ctor_m6366A41D74ECCEE4689D80AF85FBBD38FDA7171C(L_0, (bool)0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_indices;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = ___0_vertices;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProBuilder2.Common.pb_Vertex>::get_Count() */, ICollection_1_tCEFFFBB21FEF128738683C9DFE814FA2786E6D8C_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		goto IL_0018;
	}

IL_0012:
	{
		RuntimeObject* L_4 = ___1_indices;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = L_5;
	}

IL_0018:
	{
		V_1 = G_B3_0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		goto IL_019a;
	}

IL_002e:
	{
		RuntimeObject* L_6 = ___1_indices;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_7 = ___1_indices;
		int32_t L_8 = V_7;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var, L_7, L_8);
		G_B7_0 = L_9;
		goto IL_003d;
	}

IL_003b:
	{
		int32_t L_10 = V_7;
		G_B7_0 = L_10;
	}

IL_003d:
	{
		V_8 = G_B7_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_11 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_12 = L_11;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_0;
		RuntimeObject* L_14 = ___0_vertices;
		int32_t L_15 = V_8;
		NullCheck(L_14);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_16;
		L_16 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_14, L_15);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_17, NULL);
		NullCheck(L_12);
		L_12->___position_0 = L_18;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_19 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_20 = L_19;
		NullCheck(L_20);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = L_20->___color_1;
		RuntimeObject* L_22 = ___0_vertices;
		int32_t L_23 = V_8;
		NullCheck(L_22);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_24;
		L_24 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_22, L_23);
		NullCheck(L_24);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = L_24->___color_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_21, L_25, NULL);
		NullCheck(L_20);
		L_20->___color_1 = L_26;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_27 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_28 = L_27;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = L_28->___uv0_4;
		RuntimeObject* L_30 = ___0_vertices;
		int32_t L_31 = V_8;
		NullCheck(L_30);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_32;
		L_32 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_30, L_31);
		NullCheck(L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = L_32->___uv0_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_29, L_33, NULL);
		NullCheck(L_28);
		L_28->___uv0_4 = L_34;
		RuntimeObject* L_35 = ___0_vertices;
		int32_t L_36 = V_8;
		NullCheck(L_35);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_37;
		L_37 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_35, L_36);
		NullCheck(L_37);
		bool L_38 = L_37->___hasNormal_10;
		if (!L_38)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_40 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_41 = L_40;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->___normal_2;
		RuntimeObject* L_43 = ___0_vertices;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_45;
		L_45 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_43, L_44);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = L_45->___normal_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_42, L_46, NULL);
		NullCheck(L_41);
		L_41->___normal_2 = L_47;
	}

IL_00ca:
	{
		RuntimeObject* L_48 = ___0_vertices;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_50;
		L_50 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_48, L_49);
		NullCheck(L_50);
		bool L_51 = L_50->___hasTangent_11;
		if (!L_51)
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_53 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_54 = L_53;
		NullCheck(L_54);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_55 = L_54->___tangent_3;
		RuntimeObject* L_56 = ___0_vertices;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_58;
		L_58 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_56, L_57);
		NullCheck(L_58);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_59 = L_58->___tangent_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60;
		L_60 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_55, L_59, NULL);
		NullCheck(L_54);
		L_54->___tangent_3 = L_60;
	}

IL_00fb:
	{
		RuntimeObject* L_61 = ___0_vertices;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_63;
		L_63 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_61, L_62);
		NullCheck(L_63);
		bool L_64 = L_63->___hasUv2_13;
		if (!L_64)
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_65 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_66 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_67 = L_66;
		NullCheck(L_67);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = L_67->___uv2_5;
		RuntimeObject* L_69 = ___0_vertices;
		int32_t L_70 = V_8;
		NullCheck(L_69);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_71;
		L_71 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_69, L_70);
		NullCheck(L_71);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = L_71->___uv2_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_68, L_72, NULL);
		NullCheck(L_67);
		L_67->___uv2_5 = L_73;
	}

IL_012e:
	{
		RuntimeObject* L_74 = ___0_vertices;
		int32_t L_75 = V_8;
		NullCheck(L_74);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_76;
		L_76 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_74, L_75);
		NullCheck(L_76);
		bool L_77 = L_76->___hasUv3_14;
		if (!L_77)
		{
			goto IL_0161;
		}
	}
	{
		int32_t L_78 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_79 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_80 = L_79;
		NullCheck(L_80);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81 = L_80->___uv3_6;
		RuntimeObject* L_82 = ___0_vertices;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_84;
		L_84 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_82, L_83);
		NullCheck(L_84);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_85 = L_84->___uv3_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_86;
		L_86 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_81, L_85, NULL);
		NullCheck(L_80);
		L_80->___uv3_6 = L_86;
	}

IL_0161:
	{
		RuntimeObject* L_87 = ___0_vertices;
		int32_t L_88 = V_8;
		NullCheck(L_87);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_89;
		L_89 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_87, L_88);
		NullCheck(L_89);
		bool L_90 = L_89->___hasUv4_15;
		if (!L_90)
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_91 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_92 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_93 = L_92;
		NullCheck(L_93);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_94 = L_93->___uv4_7;
		RuntimeObject* L_95 = ___0_vertices;
		int32_t L_96 = V_8;
		NullCheck(L_95);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_97;
		L_97 = InterfaceFuncInvoker1< pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProBuilder2.Common.pb_Vertex>::get_Item(System.Int32) */, IList_1_tA47B15393C87AAC56E3D22D3AE6D02EECEA9D8CB_il2cpp_TypeInfo_var, L_95, L_96);
		NullCheck(L_97);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_98 = L_97->___uv4_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_99;
		L_99 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_94, L_98, NULL);
		NullCheck(L_93);
		L_93->___uv4_7 = L_99;
	}

IL_0194:
	{
		int32_t L_100 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_019a:
	{
		int32_t L_101 = V_7;
		int32_t L_102 = V_1;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_002e;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_103 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_104 = L_103;
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = L_104->___position_0;
		int32_t L_106 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_105, ((float)((1.0f)/((float)L_106))), NULL);
		NullCheck(L_104);
		L_104->___position_0 = L_107;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_108 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_109 = L_108;
		NullCheck(L_109);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_110 = L_109->___color_1;
		int32_t L_111 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_112;
		L_112 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_110, ((float)((1.0f)/((float)L_111))), NULL);
		NullCheck(L_109);
		L_109->___color_1 = L_112;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_113 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_114 = L_113;
		NullCheck(L_114);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_115 = L_114->___uv0_4;
		int32_t L_116 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_117;
		L_117 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_115, ((float)((1.0f)/((float)L_116))), NULL);
		NullCheck(L_114);
		L_114->___uv0_4 = L_117;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_118 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_119 = L_118;
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = L_119->___normal_2;
		int32_t L_121 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_120, ((float)((1.0f)/((float)L_121))), NULL);
		NullCheck(L_119);
		L_119->___normal_2 = L_122;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_123 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_124 = L_123;
		NullCheck(L_124);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_125 = L_124->___tangent_3;
		int32_t L_126 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_127;
		L_127 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_125, ((float)((1.0f)/((float)L_126))), NULL);
		NullCheck(L_124);
		L_124->___tangent_3 = L_127;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_128 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_129 = L_128;
		NullCheck(L_129);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = L_129->___uv2_5;
		int32_t L_131 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_132;
		L_132 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_130, ((float)((1.0f)/((float)L_131))), NULL);
		NullCheck(L_129);
		L_129->___uv2_5 = L_132;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_133 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_134 = L_133;
		NullCheck(L_134);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_135 = L_134->___uv3_6;
		int32_t L_136 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_137;
		L_137 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_135, ((float)((1.0f)/((float)L_136))), NULL);
		NullCheck(L_134);
		L_134->___uv3_6 = L_137;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_138 = V_0;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_139 = L_138;
		NullCheck(L_139);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_140 = L_139->___uv4_7;
		int32_t L_141 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_142;
		L_142 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_140, ((float)((1.0f)/((float)L_141))), NULL);
		NullCheck(L_139);
		L_139->___uv4_7 = L_142;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_143 = V_0;
		return L_143;
	}
}
// ProBuilder2.Common.pb_Vertex ProBuilder2.Common.pb_Vertex::Mix(ProBuilder2.Common.pb_Vertex,ProBuilder2.Common.pb_Vertex,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* pb_Vertex_Mix_mD861F7634725285C57F61D68E54C399FC7F01A37 (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___0_x, pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* ___1_y, float ___2_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* V_1 = NULL;
	{
		float L_0 = ___2_a;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_0));
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_1 = (pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5*)il2cpp_codegen_object_new(pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		pb_Vertex__ctor_m6366A41D74ECCEE4689D80AF85FBBD38FDA7171C(L_1, (bool)0, NULL);
		V_1 = L_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_2 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_3 = ___0_x;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___position_0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_7 = ___1_y;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___position_0;
		float L_9 = ___2_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_10, NULL);
		NullCheck(L_2);
		L_2->___position_0 = L_11;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_12 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_13 = ___0_x;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = L_13->___color_1;
		float L_15 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_14, L_15, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_17 = ___1_y;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = L_17->___color_1;
		float L_19 = ___2_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_18, L_19, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_16, L_20, NULL);
		NullCheck(L_12);
		L_12->___color_1 = L_21;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_22 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_23 = ___0_x;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = L_23->___uv0_4;
		float L_25 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_24, L_25, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_27 = ___1_y;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = L_27->___uv0_4;
		float L_29 = ___2_a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_28, L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_26, L_30, NULL);
		NullCheck(L_22);
		L_22->___uv0_4 = L_31;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_32 = ___0_x;
		NullCheck(L_32);
		bool L_33 = L_32->___hasNormal_10;
		if (!L_33)
		{
			goto IL_00ad;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_34 = ___1_y;
		NullCheck(L_34);
		bool L_35 = L_34->___hasNormal_10;
		if (!L_35)
		{
			goto IL_00ad;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_36 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_37 = ___0_x;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = L_37->___normal_2;
		float L_39 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, L_39, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_41 = ___1_y;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->___normal_2;
		float L_43 = ___2_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_42, L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_44, NULL);
		NullCheck(L_36);
		L_36->___normal_2 = L_45;
		goto IL_00d7;
	}

IL_00ad:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_46 = ___0_x;
		NullCheck(L_46);
		bool L_47 = L_46->___hasNormal_10;
		if (!L_47)
		{
			goto IL_00c3;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_48 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_49 = ___0_x;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = L_49->___normal_2;
		NullCheck(L_48);
		L_48->___normal_2 = L_50;
		goto IL_00d7;
	}

IL_00c3:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_51 = ___1_y;
		NullCheck(L_51);
		bool L_52 = L_51->___hasNormal_10;
		if (!L_52)
		{
			goto IL_00d7;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_53 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_54 = ___1_y;
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = L_54->___normal_2;
		NullCheck(L_53);
		L_53->___normal_2 = L_55;
	}

IL_00d7:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_56 = ___0_x;
		NullCheck(L_56);
		bool L_57 = L_56->___hasTangent_11;
		if (!L_57)
		{
			goto IL_010c;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_58 = ___1_y;
		NullCheck(L_58);
		bool L_59 = L_58->___hasTangent_11;
		if (!L_59)
		{
			goto IL_010c;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_60 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_61 = ___0_x;
		NullCheck(L_61);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_62 = L_61->___tangent_3;
		float L_63 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_64;
		L_64 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_62, L_63, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_65 = ___1_y;
		NullCheck(L_65);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_66 = L_65->___tangent_3;
		float L_67 = ___2_a;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_68;
		L_68 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_66, L_67, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69;
		L_69 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_64, L_68, NULL);
		NullCheck(L_60);
		L_60->___tangent_3 = L_69;
		goto IL_0136;
	}

IL_010c:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_70 = ___0_x;
		NullCheck(L_70);
		bool L_71 = L_70->___hasTangent_11;
		if (!L_71)
		{
			goto IL_0122;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_72 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_73 = ___0_x;
		NullCheck(L_73);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74 = L_73->___tangent_3;
		NullCheck(L_72);
		L_72->___tangent_3 = L_74;
		goto IL_0136;
	}

IL_0122:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_75 = ___1_y;
		NullCheck(L_75);
		bool L_76 = L_75->___hasTangent_11;
		if (!L_76)
		{
			goto IL_0136;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_77 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_78 = ___1_y;
		NullCheck(L_78);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79 = L_78->___tangent_3;
		NullCheck(L_77);
		L_77->___tangent_3 = L_79;
	}

IL_0136:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_80 = ___0_x;
		NullCheck(L_80);
		bool L_81 = L_80->___hasUv2_13;
		if (!L_81)
		{
			goto IL_016b;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_82 = ___1_y;
		NullCheck(L_82);
		bool L_83 = L_82->___hasUv2_13;
		if (!L_83)
		{
			goto IL_016b;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_84 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_85 = ___0_x;
		NullCheck(L_85);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86 = L_85->___uv2_5;
		float L_87 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
		L_88 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_86, L_87, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_89 = ___1_y;
		NullCheck(L_89);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90 = L_89->___uv2_5;
		float L_91 = ___2_a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		L_92 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_90, L_91, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93;
		L_93 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_88, L_92, NULL);
		NullCheck(L_84);
		L_84->___uv2_5 = L_93;
		goto IL_0195;
	}

IL_016b:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_94 = ___0_x;
		NullCheck(L_94);
		bool L_95 = L_94->___hasUv2_13;
		if (!L_95)
		{
			goto IL_0181;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_96 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_97 = ___0_x;
		NullCheck(L_97);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = L_97->___uv2_5;
		NullCheck(L_96);
		L_96->___uv2_5 = L_98;
		goto IL_0195;
	}

IL_0181:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_99 = ___1_y;
		NullCheck(L_99);
		bool L_100 = L_99->___hasUv2_13;
		if (!L_100)
		{
			goto IL_0195;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_101 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_102 = ___1_y;
		NullCheck(L_102);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103 = L_102->___uv2_5;
		NullCheck(L_101);
		L_101->___uv2_5 = L_103;
	}

IL_0195:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_104 = ___0_x;
		NullCheck(L_104);
		bool L_105 = L_104->___hasUv3_14;
		if (!L_105)
		{
			goto IL_01ca;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_106 = ___1_y;
		NullCheck(L_106);
		bool L_107 = L_106->___hasUv3_14;
		if (!L_107)
		{
			goto IL_01ca;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_108 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_109 = ___0_x;
		NullCheck(L_109);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_110 = L_109->___uv3_6;
		float L_111 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_112;
		L_112 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_110, L_111, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_113 = ___1_y;
		NullCheck(L_113);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_114 = L_113->___uv3_6;
		float L_115 = ___2_a;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_116;
		L_116 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_114, L_115, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_117;
		L_117 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_112, L_116, NULL);
		NullCheck(L_108);
		L_108->___uv3_6 = L_117;
		goto IL_01f4;
	}

IL_01ca:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_118 = ___0_x;
		NullCheck(L_118);
		bool L_119 = L_118->___hasUv3_14;
		if (!L_119)
		{
			goto IL_01e0;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_120 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_121 = ___0_x;
		NullCheck(L_121);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_122 = L_121->___uv3_6;
		NullCheck(L_120);
		L_120->___uv3_6 = L_122;
		goto IL_01f4;
	}

IL_01e0:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_123 = ___1_y;
		NullCheck(L_123);
		bool L_124 = L_123->___hasUv3_14;
		if (!L_124)
		{
			goto IL_01f4;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_125 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_126 = ___1_y;
		NullCheck(L_126);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_127 = L_126->___uv3_6;
		NullCheck(L_125);
		L_125->___uv3_6 = L_127;
	}

IL_01f4:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_128 = ___0_x;
		NullCheck(L_128);
		bool L_129 = L_128->___hasUv4_15;
		if (!L_129)
		{
			goto IL_0229;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_130 = ___1_y;
		NullCheck(L_130);
		bool L_131 = L_130->___hasUv4_15;
		if (!L_131)
		{
			goto IL_0229;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_132 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_133 = ___0_x;
		NullCheck(L_133);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_134 = L_133->___uv4_7;
		float L_135 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_136;
		L_136 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_134, L_135, NULL);
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_137 = ___1_y;
		NullCheck(L_137);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_138 = L_137->___uv4_7;
		float L_139 = ___2_a;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_140;
		L_140 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_138, L_139, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_141;
		L_141 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_136, L_140, NULL);
		NullCheck(L_132);
		L_132->___uv4_7 = L_141;
		goto IL_0253;
	}

IL_0229:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_142 = ___0_x;
		NullCheck(L_142);
		bool L_143 = L_142->___hasUv4_15;
		if (!L_143)
		{
			goto IL_023f;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_144 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_145 = ___0_x;
		NullCheck(L_145);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_146 = L_145->___uv4_7;
		NullCheck(L_144);
		L_144->___uv4_7 = L_146;
		goto IL_0253;
	}

IL_023f:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_147 = ___1_y;
		NullCheck(L_147);
		bool L_148 = L_147->___hasUv4_15;
		if (!L_148)
		{
			goto IL_0253;
		}
	}
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_149 = V_1;
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_150 = ___1_y;
		NullCheck(L_150);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_151 = L_150->___uv4_7;
		NullCheck(L_149);
		L_149->___uv4_7 = L_151;
	}

IL_0253:
	{
		pb_Vertex_t2FD76CCA85F437D4CD4DA9E136EB7061A6BCFBF5* L_152 = V_1;
		return L_152;
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
// System.Void ProBuilder2.Common.pb_VertexConnection::.ctor(ProBuilder2.Common.pb_Face,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_VertexConnection__ctor_mA57535BEF007E14AA7981415C9958FA7BE4E6019 (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* __this, pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* ___0_face, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_indices, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_0 = ___0_face;
		__this->___face_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_0), (void*)L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___1_indices;
		__this->___indices_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indices_1), (void*)L_1);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_VertexConnection::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_VertexConnection_get_isValid_m700FD5861436656B8476820DA1B8BE5BDFA115E7 (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___indices_1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___indices_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) > ((int32_t)1))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// ProBuilder2.Common.pb_VertexConnection ProBuilder2.Common.pb_VertexConnection::Distinct(ProBuilder2.Common.pb_IntArray[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* pb_VertexConnection_Distinct_m6BAB78EEDB972B3B59EDB3A98F8343C804DB0B36 (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* __this, pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* ___0_sharedIndices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_0 = __this->___face_0;
		pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* L_1 = ___0_sharedIndices;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___indices_1;
		RuntimeObject* L_3;
		L_3 = pb_IntArrayUtility_UniqueIndicesWithValues_mBCE33EBCE0BFAF1097DA9FAC6ED3E7B9996C310A(L_1, L_2, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4;
		L_4 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC(L_3, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* L_5 = (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14*)il2cpp_codegen_object_new(pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		pb_VertexConnection__ctor_mA57535BEF007E14AA7981415C9958FA7BE4E6019(L_5, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean ProBuilder2.Common.pb_VertexConnection::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_VertexConnection_Equals_m33F7D09F6AA12DC35736E8FE24E0BE9ACB2478B3 (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* __this, RuntimeObject* ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_b;
		if (((pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14*)IsInstClass((RuntimeObject*)L_0, pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_1 = __this->___face_0;
		RuntimeObject* L_2 = ___0_b;
		NullCheck(((pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14*)CastclassClass((RuntimeObject*)L_2, pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14_il2cpp_TypeInfo_var)));
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_3 = ((pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14*)CastclassClass((RuntimeObject*)L_2, pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14_il2cpp_TypeInfo_var))->___face_0;
		return (bool)((((RuntimeObject*)(pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831*)L_1) == ((RuntimeObject*)(pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831*)L_3))? 1 : 0);
	}
}
// System.Boolean ProBuilder2.Common.pb_VertexConnection::Equals(ProBuilder2.Common.pb_VertexConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_VertexConnection_Equals_m57B912D124EA8671777BE2B5CD9F751D2157695E (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* __this, pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* ___0_vc, const RuntimeMethod* method) 
{
	{
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_0 = __this->___face_0;
		pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* L_1 = ___0_vc;
		NullCheck(L_1);
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_2 = L_1->___face_0;
		return (bool)((((RuntimeObject*)(pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831*)L_0) == ((RuntimeObject*)(pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831*)L_2))? 1 : 0);
	}
}
// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_VertexConnection::op_Implicit(ProBuilder2.Common.pb_VertexConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* pb_VertexConnection_op_Implicit_m49126407E726D4EB734148A08054AE8B22404351 (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* ___0_vc, const RuntimeMethod* method) 
{
	{
		pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* L_0 = ___0_vc;
		NullCheck(L_0);
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_1 = L_0->___face_0;
		return L_1;
	}
}
// System.Int32 ProBuilder2.Common.pb_VertexConnection::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_VertexConnection_GetHashCode_m97DA304C82A223139738BB84FDDEB51CC1E0DF36 (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		return L_0;
	}
}
// System.String ProBuilder2.Common.pb_VertexConnection::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_VertexConnection_ToString_m500DB8F3798132B584985AA3EFF2AC9753C657B8 (pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pbUtil_ToString_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34052BD4B2DF823EAD0F625B2C950453E4FFD294_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_0 = __this->___face_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___indices_1;
		String_t* L_3;
		L_3 = pbUtil_ToString_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34052BD4B2DF823EAD0F625B2C950453E4FFD294(L_2, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, pbUtil_ToString_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m34052BD4B2DF823EAD0F625B2C950453E4FFD294_RuntimeMethod_var);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, L_3, NULL);
		return L_4;
	}
}
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_VertexConnection::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* pb_VertexConnection_AllTriangles_m39B89DB37AFE163AC20C5C8E24F8650BAEC91CC2 (List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2* ___0_vcs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m26EB9BD64E1626EA59A1A6E5DF7BA77783EBD662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB61D401F63BB7D703ED530BC70487EB64A6A6166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000a:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = V_0;
		List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2* L_2 = ___0_vcs;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		pb_VertexConnection_t684E196404D792D4288870AB23D72A9843E04E14* L_4;
		L_4 = List_1_get_Item_mB61D401F63BB7D703ED530BC70487EB64A6A6166(L_2, L_3, List_1_get_Item_mB61D401F63BB7D703ED530BC70487EB64A6A6166_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = L_4->___indices_1;
		NullCheck(L_1);
		List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204(L_1, L_5, List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_RuntimeMethod_var);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		int32_t L_7 = V_1;
		List_1_t982D168188B9B2E36F45BC73372AE34C235C09B2* L_8 = ___0_vcs;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m26EB9BD64E1626EA59A1A6E5DF7BA77783EBD662_inline(L_8, List_1_get_Count_m26EB9BD64E1626EA59A1A6E5DF7BA77783EBD662_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000a;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = V_0;
		return L_10;
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
// System.Boolean ProBuilder2.Common.pb_WingedEdge::Equals(ProBuilder2.Common.pb_WingedEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_WingedEdge_Equals_m915A6314C2D7B3BDEDFED9D07DC7D29193AA2DDE (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___0_b, const RuntimeMethod* method) 
{
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_0 = ___0_b;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_1 = __this->___edge_0;
		NullCheck(L_1);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_2 = L_1->___local_0;
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_3 = ___0_b;
		NullCheck(L_3);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_4 = L_3->___edge_0;
		NullCheck(L_4);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_5 = L_4->___local_0;
		NullCheck(L_2);
		bool L_6;
		L_6 = pb_Edge_Equals_mE76397B23712BDBA9BAD292334BB8DAD3DFE0B56(L_2, L_5, NULL);
		return L_6;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean ProBuilder2.Common.pb_WingedEdge::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_WingedEdge_Equals_m213236E76A7264F4C9041601AEA0873C2A84561D (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, RuntimeObject* ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* V_0 = NULL;
	pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_b;
		V_0 = ((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)IsInstClass((RuntimeObject*)L_0, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var));
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_2 = V_0;
		bool L_3;
		L_3 = pb_WingedEdge_Equals_m915A6314C2D7B3BDEDFED9D07DC7D29193AA2DDE(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___0_b;
		V_1 = ((pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498*)IsInstClass((RuntimeObject*)L_4, pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_il2cpp_TypeInfo_var));
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_6 = V_1;
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, __this, L_6);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		return (bool)1;
	}

IL_002a:
	{
		return (bool)1;
	}
}
// System.Int32 ProBuilder2.Common.pb_WingedEdge::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_WingedEdge_GetHashCode_m71EB882873E218809F8D267F9F509DD35AEBF1F6 (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, const RuntimeMethod* method) 
{
	{
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_0 = __this->___edge_0;
		NullCheck(L_0);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_1 = L_0->___local_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator ProBuilder2.Common.pb_WingedEdge::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* pb_WingedEdge_System_Collections_IEnumerable_GetEnumerator_mF3190C6CDC768E1945C4C973023D1E9C9DBFC13D (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, const RuntimeMethod* method) 
{
	{
		pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* L_0;
		L_0 = pb_WingedEdge_GetEnumerator_m7B0FDE7BF44754734632ABE213BFDB0FC51F3505(__this, NULL);
		return L_0;
	}
}
// ProBuilder2.Common.pb_WingedEdgeEnumerator ProBuilder2.Common.pb_WingedEdge::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* pb_WingedEdge_GetEnumerator_m7B0FDE7BF44754734632ABE213BFDB0FC51F3505 (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* L_0 = (pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C*)il2cpp_codegen_object_new(pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		pb_WingedEdgeEnumerator__ctor_m897EBB6FF9488F3A48A59B6FB24C1B9D909733B0(L_0, __this, NULL);
		return L_0;
	}
}
// System.String ProBuilder2.Common.pb_WingedEdge::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_WingedEdge_ToString_m76143099642CD78E9A8B3930AB4084E556D27612 (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB0FA40BD1CAAB60C313C9D0B79FA7780E5C721);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_2 = __this->___edge_0;
		NullCheck(L_2);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_3 = L_2->___common_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_6 = __this->___edge_0;
		NullCheck(L_6);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_7 = L_6->___local_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_10 = __this->___opposite_4;
		G_B1_0 = 2;
		G_B1_1 = L_9;
		G_B1_2 = _stringLiteral3DB0FA40BD1CAAB60C313C9D0B79FA7780E5C721;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_9;
			G_B2_2 = _stringLiteral3DB0FA40BD1CAAB60C313C9D0B79FA7780E5C721;
			goto IL_004e;
		}
	}
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_11 = __this->___opposite_4;
		NullCheck(L_11);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_12 = L_11->___edge_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0053;
	}

IL_004e:
	{
		G_B3_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0053:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_15 = __this->___face_1;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = V_0;
		String_t* L_18;
		L_18 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B3_3, L_17, NULL);
		return L_18;
	}
}
// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdge::GetAdjacentEdgeWithCommonIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* pb_WingedEdge_GetAdjacentEdgeWithCommonIndex_mC58857D35DC8357257125F5E2F851EAD0C9D665E (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, int32_t ___0_common, const RuntimeMethod* method) 
{
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_0 = __this->___next_2;
		NullCheck(L_0);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_1 = L_0->___edge_0;
		NullCheck(L_1);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_2 = L_1->___common_1;
		int32_t L_3 = ___0_common;
		NullCheck(L_2);
		bool L_4;
		L_4 = pb_Edge_Contains_m118A418DA3C8F549AF9F4AFCB368CFC9FC30E84D(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_5 = __this->___next_2;
		return L_5;
	}

IL_001f:
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_6 = __this->___previous_3;
		NullCheck(L_6);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_7 = L_6->___edge_0;
		NullCheck(L_7);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_8 = L_7->___common_1;
		int32_t L_9 = ___0_common;
		NullCheck(L_8);
		bool L_10;
		L_10 = pb_Edge_Contains_m118A418DA3C8F549AF9F4AFCB368CFC9FC30E84D(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_11 = __this->___previous_3;
		return L_11;
	}

IL_003e:
	{
		return (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL;
	}
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::SortEdgesByAdjacency(ProBuilder2.Common.pb_Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* pb_WingedEdge_SortEdgesByAdjacency_m21945AFA6BC3A4E782EDBEC82F78754A8A6C9714 (pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* ___0_face, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7A7AA16E291168B80106F244E17713F5E763E340_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* V_0 = NULL;
	{
		pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_0 = ___0_face;
		NullCheck(L_0);
		pb_EdgeU5BU5D_t0D549197D05936A94E07CDF7B69A0314D2EAEB23* L_1;
		L_1 = pb_Face_get_edges_mEEA487BB0FA209E561CB10C62C51B945032C3C16(L_0, NULL);
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_2 = (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3*)il2cpp_codegen_object_new(List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m7A7AA16E291168B80106F244E17713F5E763E340(L_2, (RuntimeObject*)L_1, List_1__ctor_m7A7AA16E291168B80106F244E17713F5E763E340_RuntimeMethod_var);
		V_0 = L_2;
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_3 = V_0;
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_4;
		L_4 = pb_WingedEdge_SortEdgesByAdjacency_m467DD99FBDD87140423C9342A78C3000664E4BEC(L_3, NULL);
		return L_4;
	}
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_WingedEdge::SortEdgesByAdjacency(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* pb_WingedEdge_SortEdgesByAdjacency_m467DD99FBDD87140423C9342A78C3000664E4BEC (List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* ___0_edges, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m3E949B2CF5E30E734B2C40509004A24347497838_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* V_3 = NULL;
	{
		V_0 = 1;
		goto IL_0066;
	}

IL_0004:
	{
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_0 = ___0_edges;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_2;
		L_2 = List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->___y_1;
		V_1 = L_3;
		int32_t L_4 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0059;
	}

IL_0019:
	{
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_5 = ___0_edges;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_7;
		L_7 = List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE(L_5, L_6, List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = L_7->___x_0;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_10 = ___0_edges;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_12;
		L_12 = List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE(L_10, L_11, List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13 = L_12->___y_1;
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0055;
		}
	}

IL_0037:
	{
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_15 = ___0_edges;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_17;
		L_17 = List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE(L_15, L_16, List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var);
		V_3 = L_17;
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_18 = ___0_edges;
		int32_t L_19 = V_2;
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_20 = ___0_edges;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_22;
		L_22 = List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE(L_20, L_21, List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var);
		NullCheck(L_18);
		List_1_set_Item_m3E949B2CF5E30E734B2C40509004A24347497838(L_18, L_19, L_22, List_1_set_Item_m3E949B2CF5E30E734B2C40509004A24347497838_RuntimeMethod_var);
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_23 = ___0_edges;
		int32_t L_24 = V_0;
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_25 = V_3;
		NullCheck(L_23);
		List_1_set_Item_m3E949B2CF5E30E734B2C40509004A24347497838(L_23, L_24, L_25, List_1_set_Item_m3E949B2CF5E30E734B2C40509004A24347497838_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0059:
	{
		int32_t L_27 = V_2;
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_28 = ___0_edges;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_inline(L_28, List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_RuntimeMethod_var);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0066:
	{
		int32_t L_31 = V_0;
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_32 = ___0_edges;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_inline(L_32, List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0004;
		}
	}
	{
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_34 = ___0_edges;
		return L_34;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>> ProBuilder2.Common.pb_WingedEdge::GetSpokes(System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* pb_WingedEdge_GetSpokes_m02CE84F5DCF7DEB407E05E654218399436256ACB (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* ___0_wings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D14ED5B5BE48B136091E8381CB593F4FD89550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDA3B04FD4143FFB37903030436942A01FE04BABE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m450CB6B5F76EB149F7C832610CEEF680251916B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3E972B0AC3C9BA0901D924D7D24F6F3B8E8FBAA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* V_0 = NULL;
	List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* V_3 = NULL;
	List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* V_4 = NULL;
	{
		Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* L_0 = (Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3*)il2cpp_codegen_object_new(Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m450CB6B5F76EB149F7C832610CEEF680251916B8(L_0, Dictionary_2__ctor_m450CB6B5F76EB149F7C832610CEEF680251916B8_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*)NULL;
		V_2 = 0;
		goto IL_00d4;
	}

IL_000f:
	{
		Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* L_1 = V_0;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_2 = ___0_wings;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_4;
		L_4 = List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D(L_2, L_3, List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		NullCheck(L_4);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_5 = L_4->___edge_0;
		NullCheck(L_5);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_6 = L_5->___common_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___x_0;
		NullCheck(L_1);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_mDA3B04FD4143FFB37903030436942A01FE04BABE(L_1, L_7, (&V_1), Dictionary_2_TryGetValue_mDA3B04FD4143FFB37903030436942A01FE04BABE_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_9 = V_1;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_10 = ___0_wings;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_12;
		L_12 = List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D(L_10, L_11, List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_inline(L_9, L_12, List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_RuntimeMethod_var);
		goto IL_006e;
	}

IL_003e:
	{
		Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* L_13 = V_0;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_14 = ___0_wings;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_16;
		L_16 = List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D(L_14, L_15, List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		NullCheck(L_16);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_17 = L_16->___edge_0;
		NullCheck(L_17);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_18 = L_17->___common_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->___x_0;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_20 = (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*)il2cpp_codegen_object_new(List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6(L_20, List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6_RuntimeMethod_var);
		V_3 = L_20;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_21 = V_3;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_22 = ___0_wings;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_24;
		L_24 = List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D(L_22, L_23, List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		NullCheck(L_21);
		List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_inline(L_21, L_24, List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_RuntimeMethod_var);
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_25 = V_3;
		NullCheck(L_13);
		Dictionary_2_Add_m04D14ED5B5BE48B136091E8381CB593F4FD89550(L_13, L_19, L_25, Dictionary_2_Add_m04D14ED5B5BE48B136091E8381CB593F4FD89550_RuntimeMethod_var);
	}

IL_006e:
	{
		Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* L_26 = V_0;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_27 = ___0_wings;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_29;
		L_29 = List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D(L_27, L_28, List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		NullCheck(L_29);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_30 = L_29->___edge_0;
		NullCheck(L_30);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_31 = L_30->___common_1;
		NullCheck(L_31);
		int32_t L_32 = L_31->___y_1;
		NullCheck(L_26);
		bool L_33;
		L_33 = Dictionary_2_TryGetValue_mDA3B04FD4143FFB37903030436942A01FE04BABE(L_26, L_32, (&V_1), Dictionary_2_TryGetValue_mDA3B04FD4143FFB37903030436942A01FE04BABE_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_009d;
		}
	}
	{
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_34 = V_1;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_35 = ___0_wings;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_37;
		L_37 = List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D(L_35, L_36, List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		NullCheck(L_34);
		List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_inline(L_34, L_37, List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_RuntimeMethod_var);
		goto IL_00d0;
	}

IL_009d:
	{
		Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* L_38 = V_0;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_39 = ___0_wings;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_41;
		L_41 = List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D(L_39, L_40, List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		NullCheck(L_41);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_42 = L_41->___edge_0;
		NullCheck(L_42);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_43 = L_42->___common_1;
		NullCheck(L_43);
		int32_t L_44 = L_43->___y_1;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_45 = (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*)il2cpp_codegen_object_new(List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6(L_45, List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6_RuntimeMethod_var);
		V_4 = L_45;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_46 = V_4;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_47 = ___0_wings;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_49;
		L_49 = List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D(L_47, L_48, List_1_get_Item_mFB4185E25140E2E279B5962DAC5E55EF13D0436D_RuntimeMethod_var);
		NullCheck(L_46);
		List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_inline(L_46, L_49, List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_RuntimeMethod_var);
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_50 = V_4;
		NullCheck(L_38);
		Dictionary_2_Add_m04D14ED5B5BE48B136091E8381CB593F4FD89550(L_38, L_44, L_50, Dictionary_2_Add_m04D14ED5B5BE48B136091E8381CB593F4FD89550_RuntimeMethod_var);
	}

IL_00d0:
	{
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00d4:
	{
		int32_t L_52 = V_2;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_53 = ___0_wings;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m3E972B0AC3C9BA0901D924D7D24F6F3B8E8FBAA5_inline(L_53, List_1_get_Count_m3E972B0AC3C9BA0901D924D7D24F6F3B8E8FBAA5_RuntimeMethod_var);
		if ((((int32_t)L_52) < ((int32_t)L_54)))
		{
			goto IL_000f;
		}
	}
	{
		Dictionary_2_t6474CF86CD957A00084BA8E5A4564D7A2C5028D3* L_55 = V_0;
		return L_55;
	}
}
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_WingedEdge::SortCommonIndicesByAdjacency(System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge>,System.Collections.Generic.HashSet`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* pb_WingedEdge_SortCommonIndicesByAdjacency_m5BE10FC82E461C0DC56BD9EB8012E80F3CF7E097 (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* ___0_wings, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___1_common, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5214805D5A7B3672DF3A4D74243B732F5C864014_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mC3A11C6C8CBCF921148D84F6DA3ABB8672B50CC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mA5F6A19D8CD458D6272767341FD7867FFDE0B19D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_mFC7271422D1880985FDF927704B6E5BE75027C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_U3CSortCommonIndicesByAdjacencyU3Eb__2_mF741D9DB1F8270D1067CE9ACBEB1CF3ECB0C565F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Eb__3_mA0568C41B6BDE1843B017BB92248901D4AF91FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Eb__4_mFED022FF907507C861DB338FB7EC20A3504E3723_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* V_0 = NULL;
	U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437* V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* G_B6_0 = NULL;
	List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437* L_0 = (U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7__ctor_m336D3FCDAAE8AE9134C25C87BCE49354D20151AE(L_0, NULL);
		V_1 = L_0;
		U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437* L_1 = V_1;
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_2 = ___1_common;
		NullCheck(L_1);
		L_1->___common_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___common_0), (void*)L_2);
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_3 = ___0_wings;
		U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437* L_4 = V_1;
		Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88* L_5 = (Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88*)il2cpp_codegen_object_new(Func_2_t2E3EBD6BF5D9833A61E0F1DD05C7AC767C94FD88_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mD7ACE77B2554363B2EA88A692252BFCE8E664EA4(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass7_U3CSortCommonIndicesByAdjacencyU3Eb__2_mF741D9DB1F8270D1067CE9ACBEB1CF3ECB0C565F_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_mFC7271422D1880985FDF927704B6E5BE75027C49(L_3, L_5, Enumerable_Where_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_mFC7271422D1880985FDF927704B6E5BE75027C49_RuntimeMethod_var);
		Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511* L_7 = ((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5;
		G_B1_0 = L_6;
		if (L_7)
		{
			G_B2_0 = L_6;
			goto IL_0037;
		}
	}
	{
		Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511* L_8 = (Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511*)il2cpp_codegen_object_new(Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_mEB1002C66FA4103256C98AACE0581EB35708CC1D(L_8, NULL, (intptr_t)((void*)pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Eb__3_mA0568C41B6BDE1843B017BB92248901D4AF91FB3_RuntimeMethod_var), NULL);
		((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5), (void*)L_8);
		G_B2_0 = G_B1_0;
	}

IL_0037:
	{
		Func_2_t043A834B8ECFB9566994A5CAD251565C095BB511* L_9 = ((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5;
		RuntimeObject* L_10;
		L_10 = Enumerable_Select_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mC3A11C6C8CBCF921148D84F6DA3ABB8672B50CC9(G_B2_0, L_9, Enumerable_Select_Tispb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mC3A11C6C8CBCF921148D84F6DA3ABB8672B50CC9_RuntimeMethod_var);
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_11;
		L_11 = Enumerable_ToList_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mA5F6A19D8CD458D6272767341FD7867FFDE0B19D(L_10, Enumerable_ToList_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_mA5F6A19D8CD458D6272767341FD7867FFDE0B19D_RuntimeMethod_var);
		V_0 = L_11;
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_inline(L_12, List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_RuntimeMethod_var);
		U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437* L_14 = V_1;
		NullCheck(L_14);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_15 = L_14->___common_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_inline(L_15, HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_RuntimeMethod_var);
		if ((((int32_t)L_13) == ((int32_t)L_16)))
		{
			goto IL_005c;
		}
	}
	{
		return (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)NULL;
	}

IL_005c:
	{
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_17 = V_0;
		List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_18;
		L_18 = pb_WingedEdge_SortEdgesByAdjacency_m467DD99FBDD87140423C9342A78C3000664E4BEC(L_17, NULL);
		Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B* L_19 = ((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_6;
		G_B5_0 = L_18;
		if (L_19)
		{
			G_B6_0 = L_18;
			goto IL_007a;
		}
	}
	{
		Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B* L_20 = (Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B*)il2cpp_codegen_object_new(Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_2__ctor_m70AA914D279B5513EAD4C9150BC3C2E4C4F043DC(L_20, NULL, (intptr_t)((void*)pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Eb__4_mFED022FF907507C861DB338FB7EC20A3504E3723_RuntimeMethod_var), NULL);
		((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_6), (void*)L_20);
		G_B6_0 = G_B5_0;
	}

IL_007a:
	{
		Func_2_tA3E84E5C85FF8EC591D8B969C6CC8B5410BCF08B* L_21 = ((pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_StaticFields*)il2cpp_codegen_static_fields_for(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var))->___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_6;
		RuntimeObject* L_22;
		L_22 = Enumerable_Select_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5214805D5A7B3672DF3A4D74243B732F5C864014(G_B6_0, L_21, Enumerable_Select_Tispb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5214805D5A7B3672DF3A4D74243B732F5C864014_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_23;
		L_23 = Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC(L_22, Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC_RuntimeMethod_var);
		return L_23;
	}
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge> ProBuilder2.Common.pb_WingedEdge::GetWingedEdges(pb_Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* pb_WingedEdge_GetWingedEdges_mBE1FC57C9F3B1C283002C5EA1E2054B92770603C (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* ___0_pb, bool ___1_oneWingPerFace, const RuntimeMethod* method) 
{
	{
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_0 = ___0_pb;
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_1 = ___0_pb;
		NullCheck(L_1);
		pb_FaceU5BU5D_t3708095FA3690EEF274EE180BF64163F9875548F* L_2;
		L_2 = pb_Object_get_faces_mDF8B7834F68C94AA8A9D7DA376B83213F584520E_inline(L_1, NULL);
		bool L_3 = ___1_oneWingPerFace;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_4;
		L_4 = pb_WingedEdge_GetWingedEdges_m4640F358F26FEB9CD66F50B29071BB26B619C87E(L_0, (RuntimeObject*)L_2, L_3, (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)NULL, NULL);
		return L_4;
	}
}
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_WingedEdge> ProBuilder2.Common.pb_WingedEdge::GetWingedEdges(pb_Object,System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Face>,System.Boolean,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* pb_WingedEdge_GetWingedEdges_m4640F358F26FEB9CD66F50B29071BB26B619C87E (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* ___0_pb, RuntimeObject* ___1_faces, bool ___2_oneWingPerFace, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___3_sharedIndexLookup, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFC50FF7C0536EE329BD9845EFD1C149DECC2D87A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDB8EC7A4A3EA4226045049FF8A1023A8C4FD90A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7DA38B783D3B7F8F0F65DC87DD3857D3C67A2D6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_Tispb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831_m3D1E83BCF307210B904E434D2170E08AC0C9B815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6C1AC3CEF8F4E142837B28B52AA44694DCF873C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t607CB26A8F3B1B8A6AA68C4AFFF42FCD3CF031A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* V_2 = NULL;
	Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475* V_3 = NULL;
	int32_t V_4 = 0;
	pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* V_5 = NULL;
	List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* V_6 = NULL;
	int32_t V_7 = 0;
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* V_8 = NULL;
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* V_9 = NULL;
	int32_t V_10 = 0;
	pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* V_11 = NULL;
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* V_12 = NULL;
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* G_B3_0 = NULL;
	{
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_0 = ___3_sharedIndexLookup;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = ___3_sharedIndexLookup;
		G_B3_0 = L_1;
		goto IL_0011;
	}

IL_0006:
	{
		pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* L_2 = ___0_pb;
		NullCheck(L_2);
		pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* L_3;
		L_3 = pb_Object_get_sharedIndices_m4E9B919E7CD2F39E0FD521DFF58BA131003438BB_inline(L_2, NULL);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_4;
		L_4 = pb_IntArrayUtility_ToDictionary_mF4C62AE440E8D327D3C4EA524A8AB2F9246C593A(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_5 = ___1_faces;
		RuntimeObject* L_6;
		L_6 = Enumerable_Distinct_Tispb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831_m3D1E83BCF307210B904E434D2170E08AC0C9B815(L_5, Enumerable_Distinct_Tispb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831_m3D1E83BCF307210B904E434D2170E08AC0C9B815_RuntimeMethod_var);
		V_1 = L_6;
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_7 = (List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE*)il2cpp_codegen_object_new(List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6(L_7, List_1__ctor_mE4204AF0E67282A5C42D5666234B4252381916C6_RuntimeMethod_var);
		V_2 = L_7;
		Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475* L_8 = (Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475*)il2cpp_codegen_object_new(Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Dictionary_2__ctor_m7DA38B783D3B7F8F0F65DC87DD3857D3C67A2D6C(L_8, Dictionary_2__ctor_m7DA38B783D3B7F8F0F65DC87DD3857D3C67A2D6C_RuntimeMethod_var);
		V_3 = L_8;
		V_4 = 0;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ProBuilder2.Common.pb_Face>::GetEnumerator() */, IEnumerable_1_t6C1AC3CEF8F4E142837B28B52AA44694DCF873C1_il2cpp_TypeInfo_var, L_9);
		V_14 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0165:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_14;
					if (!L_11)
					{
						goto IL_0170;
					}
				}
				{
					RuntimeObject* L_12 = V_14;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0170:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0157_1;
			}

IL_0035_1:
			{
				RuntimeObject* L_13 = V_14;
				NullCheck(L_13);
				pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_14;
				L_14 = InterfaceFuncInvoker0< pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<ProBuilder2.Common.pb_Face>::get_Current() */, IEnumerator_1_t607CB26A8F3B1B8A6AA68C4AFFF42FCD3CF031A4_il2cpp_TypeInfo_var, L_13);
				V_5 = L_14;
				pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_15 = V_5;
				List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_16;
				L_16 = pb_WingedEdge_SortEdgesByAdjacency_m21945AFA6BC3A4E782EDBEC82F78754A8A6C9714(L_15, NULL);
				V_6 = L_16;
				List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_17 = V_6;
				NullCheck(L_17);
				int32_t L_18;
				L_18 = List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_inline(L_17, List_1_get_Count_mCFA36995FDBF9139C6AE16ECBFD890C5742DA5CC_RuntimeMethod_var);
				V_7 = L_18;
				V_8 = (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL;
				V_9 = (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL;
				V_10 = 0;
				goto IL_0147_1;
			}

IL_005e_1:
			{
				List_1_tC7CA64E4AA22FC4C536E56D6BA9817A55875FCF3* L_19 = V_6;
				int32_t L_20 = V_10;
				NullCheck(L_19);
				pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_21;
				L_21 = List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE(L_19, L_20, List_1_get_Item_m0714261ED48AE57FAF0CD55F1A3192A94E3E66CE_RuntimeMethod_var);
				V_11 = L_21;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_22 = (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)il2cpp_codegen_object_new(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C_il2cpp_TypeInfo_var);
				NullCheck(L_22);
				pb_WingedEdge__ctor_m7F2A922188007C666FBE8699F389E25BD9A2F33A(L_22, NULL);
				V_12 = L_22;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_23 = V_12;
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_24 = V_0;
				pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_25 = V_11;
				NullCheck(L_25);
				int32_t L_26 = L_25->___x_0;
				NullCheck(L_24);
				int32_t L_27;
				L_27 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_24, L_26, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
				Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_28 = V_0;
				pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_29 = V_11;
				NullCheck(L_29);
				int32_t L_30 = L_29->___y_1;
				NullCheck(L_28);
				int32_t L_31;
				L_31 = Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F(L_28, L_30, Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_RuntimeMethod_var);
				pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_32 = V_11;
				NullCheck(L_32);
				int32_t L_33 = L_32->___x_0;
				pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_34 = V_11;
				NullCheck(L_34);
				int32_t L_35 = L_34->___y_1;
				pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_36 = (pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0*)il2cpp_codegen_object_new(pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0_il2cpp_TypeInfo_var);
				NullCheck(L_36);
				pb_EdgeLookup__ctor_m316F2140769F23ECE4CB295AC5744596F106ACB4(L_36, L_27, L_31, L_33, L_35, NULL);
				NullCheck(L_23);
				L_23->___edge_0 = L_36;
				Il2CppCodeGenWriteBarrier((void**)(&L_23->___edge_0), (void*)L_36);
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_37 = V_12;
				pb_Face_tE0A7EC33B72BE156C8D5ED9A9F7517A9F2888831* L_38 = V_5;
				NullCheck(L_37);
				L_37->___face_1 = L_38;
				Il2CppCodeGenWriteBarrier((void**)(&L_37->___face_1), (void*)L_38);
				int32_t L_39 = V_10;
				if ((((int32_t)L_39) >= ((int32_t)1)))
				{
					goto IL_00b6_1;
				}
			}
			{
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_40 = V_12;
				V_8 = L_40;
			}

IL_00b6_1:
			{
				int32_t L_41 = V_10;
				if ((((int32_t)L_41) <= ((int32_t)0)))
				{
					goto IL_00cd_1;
				}
			}
			{
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_42 = V_12;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_43 = V_9;
				NullCheck(L_42);
				L_42->___previous_3 = L_43;
				Il2CppCodeGenWriteBarrier((void**)(&L_42->___previous_3), (void*)L_43);
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_44 = V_9;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_45 = V_12;
				NullCheck(L_44);
				L_44->___next_2 = L_45;
				Il2CppCodeGenWriteBarrier((void**)(&L_44->___next_2), (void*)L_45);
			}

IL_00cd_1:
			{
				int32_t L_46 = V_10;
				int32_t L_47 = V_7;
				if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_47, 1))))))
				{
					goto IL_00e7_1;
				}
			}
			{
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_48 = V_12;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_49 = V_8;
				NullCheck(L_48);
				L_48->___next_2 = L_49;
				Il2CppCodeGenWriteBarrier((void**)(&L_48->___next_2), (void*)L_49);
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_50 = V_8;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_51 = V_12;
				NullCheck(L_50);
				L_50->___previous_3 = L_51;
				Il2CppCodeGenWriteBarrier((void**)(&L_50->___previous_3), (void*)L_51);
			}

IL_00e7_1:
			{
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_52 = V_12;
				V_9 = L_52;
				Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475* L_53 = V_3;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_54 = V_12;
				NullCheck(L_54);
				pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_55 = L_54->___edge_0;
				NullCheck(L_55);
				pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_56 = L_55->___common_1;
				NullCheck(L_53);
				bool L_57;
				L_57 = Dictionary_2_TryGetValue_mDB8EC7A4A3EA4226045049FF8A1023A8C4FD90A1(L_53, L_56, (&V_13), Dictionary_2_TryGetValue_mDB8EC7A4A3EA4226045049FF8A1023A8C4FD90A1_RuntimeMethod_var);
				if (!L_57)
				{
					goto IL_0115_1;
				}
			}
			{
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_58 = V_13;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_59 = V_12;
				NullCheck(L_58);
				L_58->___opposite_4 = L_59;
				Il2CppCodeGenWriteBarrier((void**)(&L_58->___opposite_4), (void*)L_59);
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_60 = V_12;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_61 = V_13;
				NullCheck(L_60);
				L_60->___opposite_4 = L_61;
				Il2CppCodeGenWriteBarrier((void**)(&L_60->___opposite_4), (void*)L_61);
				goto IL_0131_1;
			}

IL_0115_1:
			{
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_62 = V_12;
				NullCheck(L_62);
				L_62->___opposite_4 = (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_62->___opposite_4), (void*)(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL);
				Dictionary_2_t3F1CAD951970CDEF2BB80E2BF2006E80A5FAE475* L_63 = V_3;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_64 = V_12;
				NullCheck(L_64);
				pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_65 = L_64->___edge_0;
				NullCheck(L_65);
				pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_66 = L_65->___common_1;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_67 = V_12;
				NullCheck(L_63);
				Dictionary_2_Add_mFC50FF7C0536EE329BD9845EFD1C149DECC2D87A(L_63, L_66, L_67, Dictionary_2_Add_mFC50FF7C0536EE329BD9845EFD1C149DECC2D87A_RuntimeMethod_var);
			}

IL_0131_1:
			{
				bool L_68 = ___2_oneWingPerFace;
				if (!L_68)
				{
					goto IL_0139_1;
				}
			}
			{
				int32_t L_69 = V_10;
				if ((((int32_t)L_69) >= ((int32_t)1)))
				{
					goto IL_0141_1;
				}
			}

IL_0139_1:
			{
				List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_70 = V_2;
				pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_71 = V_12;
				NullCheck(L_70);
				List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_inline(L_70, L_71, List_1_Add_m4A4B40EAC22E3136BEA09BC0894C322F7949B4EB_RuntimeMethod_var);
			}

IL_0141_1:
			{
				int32_t L_72 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_72, 1));
			}

IL_0147_1:
			{
				int32_t L_73 = V_10;
				int32_t L_74 = V_7;
				if ((((int32_t)L_73) < ((int32_t)L_74)))
				{
					goto IL_005e_1;
				}
			}
			{
				int32_t L_75 = V_4;
				int32_t L_76 = V_7;
				V_4 = ((int32_t)il2cpp_codegen_add(L_75, L_76));
			}

IL_0157_1:
			{
				RuntimeObject* L_77 = V_14;
				NullCheck(L_77);
				bool L_78;
				L_78 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_77);
				if (L_78)
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_0171;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0171:
	{
		List_1_t2286EF772FFEBE481DAEBCE5CC8C634D35E268DE* L_79 = V_2;
		return L_79;
	}
}
// System.Void ProBuilder2.Common.pb_WingedEdge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_WingedEdge__ctor_m7F2A922188007C666FBE8699F389E25BD9A2F33A (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_WingedEdge::<SortCommonIndicesByAdjacency>b__3(ProBuilder2.Common.pb_WingedEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Eb__3_mA0568C41B6BDE1843B017BB92248901D4AF91FB3 (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___0_y, const RuntimeMethod* method) 
{
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_0 = ___0_y;
		NullCheck(L_0);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_1 = L_0->___edge_0;
		NullCheck(L_1);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_2 = L_1->___common_1;
		return L_2;
	}
}
// System.Int32 ProBuilder2.Common.pb_WingedEdge::<SortCommonIndicesByAdjacency>b__4(ProBuilder2.Common.pb_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t pb_WingedEdge_U3CSortCommonIndicesByAdjacencyU3Eb__4_mFED022FF907507C861DB338FB7EC20A3504E3723 (pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* ___0_x, const RuntimeMethod* method) 
{
	{
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = L_0->___x_0;
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
// System.Void ProBuilder2.Common.pb_WingedEdge/<>c__DisplayClass7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7__ctor_m336D3FCDAAE8AE9134C25C87BCE49354D20151AE (U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_WingedEdge/<>c__DisplayClass7::<SortCommonIndicesByAdjacency>b__2(ProBuilder2.Common.pb_WingedEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_U3CSortCommonIndicesByAdjacencyU3Eb__2_mF741D9DB1F8270D1067CE9ACBEB1CF3ECB0C565F (U3CU3Ec__DisplayClass7_tC01A92A1F45AD2FFA0F5897F456A9FA9D9C3A437* __this, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_0 = __this->___common_0;
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_1 = ___0_x;
		NullCheck(L_1);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_2 = L_1->___edge_0;
		NullCheck(L_2);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_3 = L_2->___common_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___x_0;
		NullCheck(L_0);
		bool L_5;
		L_5 = HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1(L_0, L_4, HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_6 = __this->___common_0;
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_7 = ___0_x;
		NullCheck(L_7);
		pb_EdgeLookup_t3D9E3AD55AC35235287E64521F6EB43C28A69AC0* L_8 = L_7->___edge_0;
		NullCheck(L_8);
		pb_Edge_t9CB4909E66509793C678178459D3116C2AD8C498* L_9 = L_8->___common_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___y_1;
		NullCheck(L_6);
		bool L_11;
		L_11 = HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1(L_6, L_10, HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		return L_11;
	}

IL_0039:
	{
		return (bool)0;
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
// System.Void ProBuilder2.Common.pb_WingedEdgeEnumerator::.ctor(ProBuilder2.Common.pb_WingedEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_WingedEdgeEnumerator__ctor_m897EBB6FF9488F3A48A59B6FB24C1B9D909733B0 (pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* __this, pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* ___0_start, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_0 = ___0_start;
		__this->____start_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____start_0), (void*)L_0);
		__this->____current_1 = (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_WingedEdgeEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool pb_WingedEdgeEnumerator_MoveNext_mFDFD10E60E4391DED027EF4BFFB26DDC3657FFFF (pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* __this, const RuntimeMethod* method) 
{
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_0 = __this->____current_1;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_1 = __this->____start_0;
		__this->____current_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_1);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_2 = __this->____current_1;
		return (bool)((((int32_t)((((RuntimeObject*)(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_3 = __this->____current_1;
		NullCheck(L_3);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_4 = L_3->___next_2;
		__this->____current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_4);
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_5 = __this->____current_1;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_6 = __this->____current_1;
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_7 = __this->____start_0;
		return (bool)((((int32_t)((((RuntimeObject*)(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)L_6) == ((RuntimeObject*)(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004c:
	{
		return (bool)0;
	}
}
// System.Void ProBuilder2.Common.pb_WingedEdgeEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_WingedEdgeEnumerator_Reset_m7F5EB799CA469AEF0FEF3467DFE5C0CFA39421C5 (pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* __this, const RuntimeMethod* method) 
{
	{
		__this->____current_1 = (pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)(pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C*)NULL);
		return;
	}
}
// System.Object ProBuilder2.Common.pb_WingedEdgeEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* pb_WingedEdgeEnumerator_System_Collections_IEnumerator_get_Current_m3BD69B90AD449986F02D69B3E72D7C94D8889D6F (pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* __this, const RuntimeMethod* method) 
{
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_0;
		L_0 = pb_WingedEdgeEnumerator_get_Current_mBE0CACB3689658A110411F35467F7C93140E16D6(__this, NULL);
		return L_0;
	}
}
// ProBuilder2.Common.pb_WingedEdge ProBuilder2.Common.pb_WingedEdgeEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* pb_WingedEdgeEnumerator_get_Current_mBE0CACB3689658A110411F35467F7C93140E16D6 (pb_WingedEdgeEnumerator_t2DC0856BD59A2404D416E7BC0D2D9B8ED6335F8C* __this, const RuntimeMethod* method) 
{
	pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_0 = __this->____current_1;
		V_0 = L_0;
		goto IL_0010;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.IndexOutOfRangeException)
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&pb_WingedEdgeEnumerator_get_Current_mBE0CACB3689658A110411F35467F7C93140E16D6_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0010:
	{
		pb_WingedEdge_tA8A3338E0EE7BFB6C819EBF7EE444217C6D9898C* L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void pb_IntVec3__ctor_m4EB676D2051D7F8FAB01A7A8C1B21E21161D5E39_inline (pb_IntVec3_t370CFC43DC84F133453895923B4FC9C78DC7A93D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		__this->___vec_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_b;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_a;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_b;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_a;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_b;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Subtraction_mD14864BB81AC08F643D2B82B41B3577012410ED9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_b;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_a;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_b;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_a;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_b;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		float L_2 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_a;
		float L_4 = L_3.___g_1;
		float L_5 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___b_2;
		float L_8 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___a_3;
		float L_11 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		float L_2 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___0_a;
		float L_4 = L_3.___y_2;
		float L_5 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_a;
		float L_7 = L_6.___z_3;
		float L_8 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___0_a;
		float L_10 = L_9.___w_4;
		float L_11 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Division_m641F85C0191C56932E452CAAC8E4974C43675FEB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		float L_2 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_a;
		float L_4 = L_3.___g_1;
		float L_5 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___b_2;
		float L_8 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___a_3;
		float L_11 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		float L_2 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___0_a;
		float L_4 = L_3.___y_2;
		float L_5 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_a;
		float L_7 = L_6.___z_3;
		float L_8 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___0_a;
		float L_10 = L_9.___w_4;
		float L_11 = ___1_d;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_Normalize_mB865829EF7B3C472BE0DFB1DA3682F8002122617_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		float L_1;
		L_1 = Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline(L_0, NULL);
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
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		float L_5 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Vector4_op_Division_m9B1B8692D50C864CFA585BDF97FB6FBC18967D90_inline(L_4, L_5, NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* pb_Object_get_vertices_m2D6504BF241FC52BB788AD71F98E6EB5E29A687B_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->____vertices_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* pb_Object_get_colors_mC6D853D06BB58331DA619CD4E6B19F8CFE02A194_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) 
{
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = __this->____colors_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* pb_Object_get_uv_mA690500E527617F2679CA6674416E02079D8C430_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) 
{
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = __this->____uv_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR pb_FaceU5BU5D_t3708095FA3690EEF274EE180BF64163F9875548F* pb_Object_get_faces_mDF8B7834F68C94AA8A9D7DA376B83213F584520E_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) 
{
	{
		pb_FaceU5BU5D_t3708095FA3690EEF274EE180BF64163F9875548F* L_0 = __this->____quads_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* pb_Object_get_sharedIndices_m4E9B919E7CD2F39E0FD521DFF58BA131003438BB_inline (pb_Object_t3155843CE2B87A46F612F0C69058CCEFCA9E5F66* __this, const RuntimeMethod* method) 
{
	{
		pb_IntArrayU5BU5D_t369C4B2D06B7D03F9B830F3099FFADBF6DDC76B1* L_0 = __this->____sharedIndices_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_8);
		return;
	}

IL_0034:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___0_item;
		((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_gshared_inline (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mFBC659211CDF4EDB2B540C58315D1E260FB23B1F_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_a;
		float L_2;
		L_2 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_0012;
	}

IL_0012:
	{
		float L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_a;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_b;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_a;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_b;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_a;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_b;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_a;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_b;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}

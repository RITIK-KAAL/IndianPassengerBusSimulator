#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.IEnumerable`1<TSTrafficSpawner/PointsIndex>
struct IEnumerable_1_t351B09FB759CD6CA77A83725C240FCAE658F54B9;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<TSTrafficAI>
struct List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<TSMainManager/VehicleTypePresets>
struct List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B;
// System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>
struct List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705;
// System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>
struct List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0;
// System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>
struct List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<TSLaneConnector>
struct Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228;
// System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>
struct Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464;
// System.Threading.AutoResetEvent[]
struct AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Threading.ManualResetEvent[]
struct ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TSConnectorOtherPoints[]
struct TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB;
// TSLaneConnector[]
struct TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4;
// TSLaneInfo[]
struct TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9;
// TSPoints[]
struct TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD;
// TSTrafficAI[]
struct TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2;
// TSTrafficVolume[]
struct TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341;
// System.Threading.Thread[]
struct ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TSMainManager/VehicleTypePresets[]
struct VehicleTypePresetsU5BU5D_t71227DB126F2FE8F6807A2C24492D7386465BE81;
// TSNavigation/TSNextLaneSelection[]
struct TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0;
// TSNavigation/TSReservedPoints[]
struct TSReservedPointsU5BU5D_t3E2C709EF1824BF010E5F6521977DF5E7D457099;
// TSTrafficAI/TSBrakeSpeeds[]
struct TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83;
// TSTrafficSpawner/PointsIndex[]
struct PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B;
// TSTrafficSpawner/TSSpawnVehicles[]
struct TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.String
struct String_t;
// TSConnectorOtherPoints
struct TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63;
// TSLaneConnector
struct TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89;
// TSLaneInfo
struct TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9;
// TSMainManager
struct TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652;
// TSNavigation
struct TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94;
// TSPoints
struct TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5;
// TSTrafficAI
struct TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4;
// TSTrafficSpawner
struct TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B;
// TSTrafficVolume
struct TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TSMainManager/VehicleTypePresets
struct VehicleTypePresets_t89C028930203B124B2888B342045F23ECFD6959D;
// TSTrafficAI/GetCarSpeedDelegate
struct GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A;
// TSTrafficAI/OnCloserRangeDelegate
struct OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27;
// TSTrafficAI/OnFarRangeDelegate
struct OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1;
// TSTrafficAI/OnTurnLeftDelegate
struct OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF;
// TSTrafficAI/OnTurnRigthDelegate
struct OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E;
// TSTrafficAI/OnUpdateAIDelegate
struct OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3;
// TSTrafficSpawner/<CheckNearLanesSingleThread>d__0
struct U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F;
// TSTrafficSpawner/TSSpawnVehicles
struct TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E;

IL2CPP_EXTERN_C RuntimeClass* AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDBC084322E86579862A624BEC4DAD93CF4BD3C;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB1C6C6C6F7DB5317FDCFF08E3A6EB196BA84C00;
IL2CPP_EXTERN_C String_t* _stringLiteralE65881D7409CC3651D97F80F80E8761DEE911584;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_mD533EA80E0E1BDE9BC581D07358A97E62FCB6B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2AC426E5876BA9FB0CDF08E913789DFE179CFE16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m81B60AE3FDD66A39470F84A2F8AEAD4D23D1B77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA556F75A20687468CD8FEA3F762810A82A6ADEED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD7A8042FAE3DDE9CDFE37D223300DB82510BB092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD88BA689B4D0B4E1C4C18A68371F6D08F74FC4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFC838E21F17CB2236345D244772BA5CF01CAE315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m00EFCFE880E05B1E23360E029C358884DB7FDD61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m788BD8BF8215B29E16BB526E5F0D1E7421989886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9BD126543D3F935975EA8353D41524F9A112B047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94_m1FE1E6D3D2A7F04FD1F7B11F8D83D7175F0E0950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_m193B81C8C9A2EDA80AEADFADE88ADE95E8284534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m046358360F9D9E54FCB8A7403C3F6301C01B1597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m164D7C38E08F59315B6321B67EA46293B71A9F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE6C9F9D00999EADB14909F841A829FDF5AE03130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE4F8B2408B5D967FE6699EB7914B042426A2BDE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD221AD77B96092C1972D7A6D38A3EF5886737AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m609B32B573D542156D2BB51795569F077B07FFBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m8440492FE31E5CFBE805A1AE123DC06E64F0397C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mC38F277FE9B7DB280A4B4A025EAD1CB7FEFBBE59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m57F6B97C612ABAF9B71811F09358E42E2341B082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A89C9B9C319D0A1B44D075571519C6164BABE4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC7E0F812C485EEB901431FAEA3426E21C750F187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m841F3E16565B232B361AE966654F6DEDA951FD22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m4CDDF0876E4FD31EFC39AD9CB473983FE3412CC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Contains_m61336C1C735A98554B505FC8E0928EBD6E9306EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m816682D18E7BAEBEB2AA087935465238D1F35685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m6C66B383C4343C6208977D605550E611FFF0BF51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_m61C93F127D73336F32BA705ACA1B39F6222EEF76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_mD361596BB9F4EE633ED3EBB75B0045AB626C54E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m87CC96BD38A49880B0B2B39D18C142B12F46C016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m8641407D5754FA8404B73391E03923BDAED285C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m9CCE1D78791238782E224255879BCD5D44891E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TSTrafficSpawner_CheckNearLanesLoop_m59B5CB18861801CD21050B7CA35E48F8CC289691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckNearLanesSingleThreadU3Ed__0_System_Collections_IEnumerator_Reset_m044FC000EC52DB33CC3358CF8684F41DD002A7A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB;
struct TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4;
struct TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9;
struct TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD;
struct TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2;
struct TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341;
struct ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0;
struct TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83;
struct PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B;
struct TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9ECBE01696B40FE683CE04C120CF2B618CB113DF 
{
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

// System.Collections.Generic.List`1<TSTrafficAI>
struct List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TSMainManager/VehicleTypePresets>
struct List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VehicleTypePresetsU5BU5D_t71227DB126F2FE8F6807A2C24492D7386465BE81* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>
struct List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>
struct List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>
struct List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.Queue`1<TSLaneConnector>
struct Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* ____array_0;
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

// System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>
struct Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	TSReservedPointsU5BU5D_t3E2C709EF1824BF010E5F6521977DF5E7D457099* ____array_0;
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

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
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

// TSConnectorOtherPoints
struct TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63  : public RuntimeObject
{
	// System.Int32 TSConnectorOtherPoints::lane
	int32_t ___lane_0;
	// System.Int32 TSConnectorOtherPoints::connector
	int32_t ___connector_1;
	// System.Int32 TSConnectorOtherPoints::pointIndex
	int32_t ___pointIndex_2;
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

// TSMainManager/VehicleTypePresets
struct VehicleTypePresets_t89C028930203B124B2888B342045F23ECFD6959D  : public RuntimeObject
{
	// TSLaneInfo/VehicleType TSMainManager/VehicleTypePresets::vehicleType
	int32_t ___vehicleType_0;
	// System.String TSMainManager/VehicleTypePresets::name
	String_t* ___name_1;
};

// TSTrafficSpawner/<CheckNearLanesSingleThread>d__0
struct U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F  : public RuntimeObject
{
	// System.Object TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_0;
	// System.Int32 TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::<>1__state
	int32_t ___U3CU3E1__state_1;
	// TSTrafficSpawner TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::<>4__this
	TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* ___U3CU3E4__this_2;
	// System.Int32 TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::<time>5__1
	int32_t ___U3CtimeU3E5__1_3;
	// System.Int32 TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::<w>5__2
	int32_t ___U3CwU3E5__2_4;
	// System.Int32 TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::<i>5__3
	int32_t ___U3CiU3E5__3_5;
	// System.Single TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::<distance3>5__4
	float ___U3Cdistance3U3E5__4_6;
};

// TSTrafficSpawner/TSSpawnVehicles
struct TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E  : public RuntimeObject
{
	// UnityEngine.GameObject TSTrafficSpawner/TSSpawnVehicles::cars
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cars_0;
	// System.Int32 TSTrafficSpawner/TSSpawnVehicles::frequency
	int32_t ___frequency_1;
};

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// System.Collections.Generic.Queue`1/Enumerator<TSLaneConnector>
struct Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ____currentElement_3;
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

// TSNavigation/TSNextLaneSelection
struct TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B 
{
	// System.Int32 TSNavigation/TSNextLaneSelection::nextLane
	int32_t ___nextLane_0;
	// System.Int32 TSNavigation/TSNextLaneSelection::nextConnector
	int32_t ___nextConnector_1;
	// System.Boolean TSNavigation/TSNextLaneSelection::isConnector
	bool ___isConnector_2;
};
// Native definition for P/Invoke marshalling of TSNavigation/TSNextLaneSelection
struct TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshaled_pinvoke
{
	int32_t ___nextLane_0;
	int32_t ___nextConnector_1;
	int32_t ___isConnector_2;
};
// Native definition for COM marshalling of TSNavigation/TSNextLaneSelection
struct TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshaled_com
{
	int32_t ___nextLane_0;
	int32_t ___nextConnector_1;
	int32_t ___isConnector_2;
};

// TSNavigation/TSReservedPoints
struct TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD 
{
	// TSLaneConnector TSNavigation/TSReservedPoints::connector
	TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___connector_0;
	// TSPoints TSNavigation/TSReservedPoints::point
	TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___point_1;
};
// Native definition for P/Invoke marshalling of TSNavigation/TSReservedPoints
struct TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshaled_pinvoke
{
	TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___connector_0;
	TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___point_1;
};
// Native definition for COM marshalling of TSNavigation/TSReservedPoints
struct TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshaled_com
{
	TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___connector_0;
	TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___point_1;
};

// TSTrafficAI/TSBrakeSpeeds
struct TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 
{
	// System.Single TSTrafficAI/TSBrakeSpeeds::distance
	float ___distance_0;
	// TSPoints TSTrafficAI/TSBrakeSpeeds::point
	TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___point_1;
};
// Native definition for P/Invoke marshalling of TSTrafficAI/TSBrakeSpeeds
struct TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshaled_pinvoke
{
	float ___distance_0;
	TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___point_1;
};
// Native definition for COM marshalling of TSTrafficAI/TSBrakeSpeeds
struct TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshaled_com
{
	float ___distance_0;
	TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___point_1;
};

// TSTrafficSpawner/PointsIndex
struct PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 
{
	// System.Int32 TSTrafficSpawner/PointsIndex::lane
	int32_t ___lane_0;
	// System.Int32 TSTrafficSpawner/PointsIndex::point
	int32_t ___point_1;
};

// System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>
struct Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B ____current_3;
};

// System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>
struct Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85 
{
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD ____currentElement_3;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TSLaneConnector
struct TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89  : public RuntimeObject
{
	// UnityEngine.Vector3 TSLaneConnector::conectorA
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___conectorA_0;
	// UnityEngine.Vector3 TSLaneConnector::conectorB
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___conectorB_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> TSLaneConnector::middlePoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___middlePoints_2;
	// TSPoints[] TSLaneConnector::points
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* ___points_3;
	// System.Int32 TSLaneConnector::nextLane
	int32_t ___nextLane_4;
	// System.Int32 TSLaneConnector::previousLane
	int32_t ___previousLane_5;
	// System.Boolean TSLaneConnector::forcedStop
	bool ___forcedStop_6;
	// System.Boolean TSLaneConnector::isReserved
	bool ___isReserved_7;
	// System.Boolean TSLaneConnector::isRequested
	bool ___isRequested_8;
	// System.Collections.Generic.List`1<System.Int32> TSLaneConnector::reservedByID
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___reservedByID_9;
	// System.Int32 TSLaneConnector::priority
	int32_t ___priority_10;
	// TSLaneConnector/Direction TSLaneConnector::direction
	int32_t ___direction_11;
	// System.Single TSLaneConnector::totalDistance
	float ___totalDistance_12;
	// System.Single TSLaneConnector::randomWeight
	float ___randomWeight_13;
	// TSLaneInfo/VehicleType TSLaneConnector::vehicleType
	int32_t ___vehicleType_14;
	// System.Boolean TSLaneConnector::connectorReservedByTrafficLight
	bool ___connectorReservedByTrafficLight_15;
	// System.Single TSLaneConnector::remainingGreenLightTime
	float ___remainingGreenLightTime_16;
};

// TSLaneInfo
struct TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9  : public RuntimeObject
{
	// UnityEngine.Vector3 TSLaneInfo::conectorA
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___conectorA_0;
	// UnityEngine.Vector3 TSLaneInfo::conectorB
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___conectorB_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> TSLaneInfo::middlePoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___middlePoints_2;
	// System.Single TSLaneInfo::laneWidth
	float ___laneWidth_3;
	// TSLaneInfo/VehicleType TSLaneInfo::vehicleType
	int32_t ___vehicleType_4;
	// System.Single TSLaneInfo::maxSpeed
	float ___maxSpeed_5;
	// TSPoints[] TSLaneInfo::points
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* ___points_6;
	// TSLaneConnector[] TSLaneInfo::connectors
	TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* ___connectors_7;
	// System.Int32 TSLaneInfo::laneLinkRight
	int32_t ___laneLinkRight_8;
	// System.Int32 TSLaneInfo::laneLinkLeft
	int32_t ___laneLinkLeft_9;
	// System.Single TSLaneInfo::trafficDensity
	float ___trafficDensity_10;
	// System.Single TSLaneInfo::totalOcupation
	float ___totalOcupation_11;
	// System.Single TSLaneInfo::totalDistance
	float ___totalDistance_12;
};

// TSPoints
struct TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5  : public RuntimeObject
{
	// UnityEngine.Vector3 TSPoints::point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	// System.Int32 TSPoints::reservationID
	int32_t ___reservationID_1;
	// TSTrafficAI TSPoints::carwhoReserved
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* ___carwhoReserved_2;
	// System.Int32 TSPoints::laneReservationID
	int32_t ___laneReservationID_3;
	// System.Int32 TSPoints::connectorReservationCount
	int32_t ___connectorReservationCount_4;
	// System.Single TSPoints::distanceToNextPoint
	float ___distanceToNextPoint_5;
	// System.Int32 TSPoints::rightParalelLaneIndex
	int32_t ___rightParalelLaneIndex_6;
	// System.Int32 TSPoints::leftParalelLaneIndex
	int32_t ___leftParalelLaneIndex_7;
	// System.Single TSPoints::maxSpeedLimit
	float ___maxSpeedLimit_8;
	// TSConnectorOtherPoints[] TSPoints::otherConnectorsPoints
	TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* ___otherConnectorsPoints_9;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
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

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TSTrafficAI/GetCarSpeedDelegate
struct GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A  : public MulticastDelegate_t
{
};

// TSTrafficAI/OnCloserRangeDelegate
struct OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27  : public MulticastDelegate_t
{
};

// TSTrafficAI/OnFarRangeDelegate
struct OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1  : public MulticastDelegate_t
{
};

// TSTrafficAI/OnTurnLeftDelegate
struct OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF  : public MulticastDelegate_t
{
};

// TSTrafficAI/OnTurnRigthDelegate
struct OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E  : public MulticastDelegate_t
{
};

// TSTrafficAI/OnUpdateAIDelegate
struct OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3  : public MulticastDelegate_t
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TSMainManager
struct TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSLaneInfo[] TSMainManager::lanes
	TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* ___lanes_4;
	// System.Int32 TSMainManager::menuSelection
	int32_t ___menuSelection_5;
	// System.Int32 TSMainManager::laneMenuSelection
	int32_t ___laneMenuSelection_6;
	// System.Int32 TSMainManager::connectionsMenuSelection
	int32_t ___connectionsMenuSelection_7;
	// System.Int32 TSMainManager::settingsMenuSelection
	int32_t ___settingsMenuSelection_8;
	// System.Single TSMainManager::visualLinesWidth
	float ___visualLinesWidth_9;
	// System.Single TSMainManager::resolution
	float ___resolution_10;
	// System.Single TSMainManager::resolutionConnectors
	float ___resolutionConnectors_11;
	// System.Single TSMainManager::laneCurveSpeedMultiplier
	float ___laneCurveSpeedMultiplier_12;
	// System.Single TSMainManager::connectorsCurveSpeedMultiplier
	float ___connectorsCurveSpeedMultiplier_13;
	// TSLaneInfo/VehicleType TSMainManager::defaultVehicleType
	int32_t ___defaultVehicleType_14;
	// System.Collections.Generic.List`1<TSMainManager/VehicleTypePresets> TSMainManager::vehicleTypePresets
	List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B* ___vehicleTypePresets_15;
};

// TSNavigation
struct TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TSNavigation::currentWaypoint
	int32_t ___currentWaypoint_4;
	// System.Int32 TSNavigation::currentWaypointOnCar
	int32_t ___currentWaypointOnCar_5;
	// UnityEngine.Vector3 TSNavigation::RelativeWaypointPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RelativeWaypointPosition_6;
	// UnityEngine.Vector3 TSNavigation::RelativeWaypointPositionOnCar
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RelativeWaypointPositionOnCar_7;
	// System.Int32 TSNavigation::previousWaypointSteer
	int32_t ___previousWaypointSteer_8;
	// System.Int32 TSNavigation::currentLane
	int32_t ___currentLane_9;
	// TSNavigation/TSNextLaneSelection TSNavigation::nextTrack
	TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B ___nextTrack_10;
	// System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection> TSNavigation::nextTrackPath
	List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* ___nextTrackPath_11;
	// System.Single TSNavigation::currentMaxSpeed
	float ___currentMaxSpeed_12;
	// TSPoints[] TSNavigation::waypoints
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* ___waypoints_13;
	// TSPoints[] TSNavigation::lastWaypoints
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* ___lastWaypoints_14;
	// TSLaneInfo[] TSNavigation::lanes
	TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* ___lanes_15;
	// System.Boolean TSNavigation::travelingOnConector
	bool ___travelingOnConector_16;
	// System.Boolean TSNavigation::wasTravelingOnConnector
	bool ___wasTravelingOnConnector_17;
	// System.Int32 TSNavigation::selectedConnector
	int32_t ___selectedConnector_18;
	// TSLaneConnector TSNavigation::lastSelectedConnector
	TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___lastSelectedConnector_19;
	// System.Int32 TSNavigation::lastLane
	int32_t ___lastLane_20;
	// System.Int32 TSNavigation::myID
	int32_t ___myID_21;
	// System.Single TSNavigation::relativeWPosMagnitude
	float ___relativeWPosMagnitude_22;
	// System.Boolean TSNavigation::changingLane
	bool ___changingLane_23;
	// System.Boolean TSNavigation::overTaking
	bool ___overTaking_24;
	// System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints> TSNavigation::reservedPoints
	Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* ___reservedPoints_25;
	// System.Int32 TSNavigation::nextTrackIndex
	int32_t ___nextTrackIndex_26;
	// System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints> TSNavigation::reservedChangeLanePoints
	Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* ___reservedChangeLanePoints_27;
	// System.Collections.Generic.Queue`1<TSLaneConnector> TSNavigation::reservedConnectors
	Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* ___reservedConnectors_28;
	// System.Boolean TSNavigation::starting
	bool ___starting_29;
	// TSTrafficAI TSNavigation::carControllerAI
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* ___carControllerAI_30;
	// UnityEngine.Transform TSNavigation::myTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___myTransform_31;
	// System.Boolean TSNavigation::isTurning
	bool ___isTurning_32;
	// System.Single TSNavigation::halfDepth
	float ___halfDepth_33;
	// System.Boolean TSNavigation::overtakingFromLeft
	bool ___overtakingFromLeft_34;
	// System.Single TSNavigation::halfDepthSqr
	float ___halfDepthSqr_35;
	// System.Int32 TSNavigation::reservLane
	int32_t ___reservLane_36;
	// System.Int32 TSNavigation::reservPoint
	int32_t ___reservPoint_37;
	// System.Int32 TSNavigation::reservConnector
	int32_t ___reservConnector_38;
	// System.Boolean TSNavigation::roolback
	bool ___roolback_39;
	// System.Int32 TSNavigation::i
	int32_t ___i_40;
	// System.Int32 TSNavigation::pointIndex
	int32_t ___pointIndex_41;
	// System.Boolean TSNavigation::changed
	bool ___changed_42;
	// System.Boolean TSNavigation::isConnector
	bool ___isConnector_43;
	// System.Single TSNavigation::distanceForCheck
	float ___distanceForCheck_44;
	// System.Int32 TSNavigation::newCurrentWaypointOnCar
	int32_t ___newCurrentWaypointOnCar_45;
	// System.Int32 TSNavigation::newLane
	int32_t ___newLane_46;
	// System.Int32 TSNavigation::initialIndex
	int32_t ___initialIndex_47;
	// System.Int32 TSNavigation::point
	int32_t ___point_48;
	// System.Int32 TSNavigation::lane
	int32_t ___lane_49;
	// System.Boolean TSNavigation::found
	bool ___found_50;
	// System.Single TSNavigation::segDistance
	float ___segDistance_51;
	// System.Int32 TSNavigation::counter
	int32_t ___counter_52;
	// System.Int32 TSNavigation::reservedCLIndex
	int32_t ___reservedCLIndex_53;
	// TSNavigation/TSReservedPoints TSNavigation::newPoint1
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD ___newPoint1_54;
	// TSNavigation/TSReservedPoints TSNavigation::newPoint
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD ___newPoint_55;
	// System.Boolean TSNavigation::wasConnector
	bool ___wasConnector_56;
	// System.Single TSNavigation::totalDistance
	float ___totalDistance_57;
	// System.Single TSNavigation::dist
	float ___dist_58;
	// System.Int32 TSNavigation::totalConnectors
	int32_t ___totalConnectors_59;
	// System.Single TSNavigation::maxInt
	float ___maxInt_60;
	// System.Int32 TSNavigation::index
	int32_t ___index_61;
};

// TSTrafficAI
struct TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSNavigation TSTrafficAI::_navigateToWaypoints
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* ____navigateToWaypoints_4;
	// System.Single TSTrafficAI::maxLockaheadDistance
	float ___maxLockaheadDistance_5;
	// System.Single TSTrafficAI::maxLockaheadDistanceFullStop
	float ___maxLockaheadDistanceFullStop_6;
	// System.Single TSTrafficAI::LOOKAHEAD_FACTOR
	float ___LOOKAHEAD_FACTOR_7;
	// UnityEngine.Transform[] TSTrafficAI::frontWheels
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___frontWheels_8;
	// System.Single TSTrafficAI::LOOKAHEAD_CONST
	float ___LOOKAHEAD_CONST_9;
	// UnityEngine.Rigidbody[] TSTrafficAI::bodies
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* ___bodies_10;
	// System.Single TSTrafficAI::carDepth
	float ___carDepth_11;
	// System.Single TSTrafficAI::carWidth
	float ___carWidth_12;
	// System.Single TSTrafficAI::carHeight
	float ___carHeight_13;
	// TSLaneInfo/VehicleType TSTrafficAI::myVehicleType
	int32_t ___myVehicleType_14;
	// System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds> TSTrafficAI::brakeSpeeds
	List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* ___brakeSpeeds_15;
	// TSPoints TSTrafficAI::currenPoint
	TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___currenPoint_16;
	// TSLaneConnector TSTrafficAI::currentConnector
	TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___currentConnector_17;
	// TSLaneConnector TSTrafficAI::nextConnectorInstance
	TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___nextConnectorInstance_18;
	// System.Int32 TSTrafficAI::previousWaypointCurve
	int32_t ___previousWaypointCurve_19;
	// System.Single TSTrafficAI::segDistance
	float ___segDistance_20;
	// System.Int32 TSTrafficAI::nextPathIndex
	int32_t ___nextPathIndex_21;
	// System.Int32 TSTrafficAI::lane
	int32_t ___lane_22;
	// System.Single TSTrafficAI::changeLaneTime
	float ___changeLaneTime_23;
	// UnityEngine.BoxCollider TSTrafficAI::playerSensor
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___playerSensor_24;
	// System.Single TSTrafficAI::playerSensorWidthMultiplier
	float ___playerSensorWidthMultiplier_25;
	// System.Single TSTrafficAI::minPlayerSensorLenght
	float ___minPlayerSensorLenght_26;
	// System.Single TSTrafficAI::lengthMargin
	float ___lengthMargin_27;
	// System.Single TSTrafficAI::myLaneOffsetMin
	float ___myLaneOffsetMin_28;
	// System.Single TSTrafficAI::myLaneOffsetMax
	float ___myLaneOffsetMax_29;
	// System.Single TSTrafficAI::_lookAheadDistance
	float ____lookAheadDistance_30;
	// System.Collections.Generic.List`1<UnityEngine.Transform> TSTrafficAI::players
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___players_31;
	// System.Single TSTrafficAI::_carSpeed
	float ____carSpeed_32;
	// System.Single TSTrafficAI::MAXSPEED
	float ___MAXSPEED_33;
	// UnityEngine.Transform TSTrafficAI::_wheelsCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____wheelsCenter_34;
	// UnityEngine.Transform TSTrafficAI::myTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___myTransform_35;
	// System.Single[] TSTrafficAI::kFriction
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___kFriction_36;
	// System.Single TSTrafficAI::inputTorque
	float ___inputTorque_37;
	// System.Single TSTrafficAI::currentSpeedSqr
	float ___currentSpeedSqr_38;
	// System.Single TSTrafficAI::c
	float ___c_39;
	// System.Single TSTrafficAI::brake
	float ___brake_40;
	// System.Single TSTrafficAI::throttle
	float ___throttle_41;
	// System.Single TSTrafficAI::steering
	float ___steering_42;
	// System.String TSTrafficAI::playerTag
	String_t* ___playerTag_43;
	// System.Boolean TSTrafficAI::fullStop
	bool ___fullStop_44;
	// System.Single TSTrafficAI::timerForChangeLane
	float ___timerForChangeLane_45;
	// System.Boolean TSTrafficAI::isUpSideDown
	bool ___isUpSideDown_46;
	// System.Boolean TSTrafficAI::forcedRespawn
	bool ___forcedRespawn_47;
	// System.Single TSTrafficAI::upSideDownTimer
	float ___upSideDownTimer_48;
	// System.Single TSTrafficAI::halfCarWidth
	float ___halfCarWidth_49;
	// System.Single TSTrafficAI::halfCarDepth
	float ___halfCarDepth_50;
	// System.Single TSTrafficAI::myLaneOffset
	float ___myLaneOffset_51;
	// TSTrafficAI/OnFarRangeDelegate TSTrafficAI::OnFarRange
	OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* ___OnFarRange_52;
	// TSTrafficAI/OnCloserRangeDelegate TSTrafficAI::OnCloserRange
	OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* ___OnCloserRange_53;
	// TSTrafficAI/OnTurnRigthDelegate TSTrafficAI::OnTurnRight
	OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* ___OnTurnRight_54;
	// TSTrafficAI/OnTurnLeftDelegate TSTrafficAI::OnTurnLeft
	OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* ___OnTurnLeft_55;
	// TSTrafficAI/GetCarSpeedDelegate TSTrafficAI::UpdateCarSpeed
	GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* ___UpdateCarSpeed_56;
	// TSTrafficAI/OnUpdateAIDelegate TSTrafficAI::OnUpdateAI
	OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* ___OnUpdateAI_57;
	// System.Single TSTrafficAI::accelResult
	float ___accelResult_58;
	// System.Single TSTrafficAI::distanceToRun
	float ___distanceToRun_59;
	// System.Single TSTrafficAI::nextConnectorDistance
	float ___nextConnectorDistance_60;
	// System.Single TSTrafficAI::nextCarSpeedSqr
	float ___nextCarSpeedSqr_61;
	// System.Single TSTrafficAI::returningValue
	float ___returningValue_62;
	// System.Single TSTrafficAI::sqrMaxLockaheadDistance
	float ___sqrMaxLockaheadDistance_63;
	// System.Boolean TSTrafficAI::reservedConnector
	bool ___reservedConnector_64;
	// UnityEngine.Transform TSTrafficAI::shape
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shape_65;
};

// TSTrafficSpawner
struct TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSTrafficSpawner/TSSpawnVehicles[] TSTrafficSpawner::cars
	TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* ___cars_4;
	// System.Int32 TSTrafficSpawner::amount
	int32_t ___amount_5;
	// System.Single TSTrafficSpawner::maxDistance
	float ___maxDistance_6;
	// System.Single TSTrafficSpawner::offset
	float ___offset_7;
	// System.Single TSTrafficSpawner::closerRange
	float ___closerRange_8;
	// System.Single TSTrafficSpawner::refreshTime
	float ___refreshTime_9;
	// TSMainManager TSTrafficSpawner::manager
	TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* ___manager_10;
	// UnityEngine.Vector3 TSTrafficSpawner::unusedCarsPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___unusedCarsPosition_11;
	// System.Boolean TSTrafficSpawner::respawnIfUpSideDown
	bool ___respawnIfUpSideDown_12;
	// System.Single TSTrafficSpawner::respawnUpSideDownTime
	float ___respawnUpSideDownTime_13;
	// TSTrafficVolume[] TSTrafficSpawner::trafficVolumes
	TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341* ___trafficVolumes_14;
	// TSTrafficAI[] TSTrafficSpawner::trafficCars
	TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* ___trafficCars_15;
	// UnityEngine.Transform[] TSTrafficSpawner::trafficCarsTransform
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___trafficCarsTransform_16;
	// UnityEngine.Vector3[] TSTrafficSpawner::trafficCarsPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___trafficCarsPositions_17;
	// System.Boolean[] TSTrafficSpawner::trafficCarsFarIndexes
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___trafficCarsFarIndexes_18;
	// System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex> TSTrafficSpawner::pointsIndex
	List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* ___pointsIndex_19;
	// System.Single TSTrafficSpawner::nextActionTime
	float ___nextActionTime_20;
	// UnityEngine.Vector3 TSTrafficSpawner::myPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___myPosition_21;
	// System.Threading.Thread[] TSTrafficSpawner::threads
	ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2* ___threads_22;
	// System.Threading.AutoResetEvent[] TSTrafficSpawner::jobAvailable
	AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D* ___jobAvailable_23;
	// System.Threading.ManualResetEvent[] TSTrafficSpawner::threadIdle
	ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934* ___threadIdle_24;
	// System.Int32 TSTrafficSpawner::threadsCount
	int32_t ___threadsCount_25;
	// System.Boolean TSTrafficSpawner::close
	bool ___close_26;
	// UnityEngine.Object TSTrafficSpawner::lock2
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___lock2_27;
	// System.Int32 TSTrafficSpawner::currentVolume
	int32_t ___currentVolume_28;
	// System.Int32 TSTrafficSpawner::trafficarLastAdded
	int32_t ___trafficarLastAdded_29;
	// System.Int32 TSTrafficSpawner::_totalFarCars
	int32_t ____totalFarCars_30;
	// System.Single TSTrafficSpawner::maxDistanceSQRMax
	float ___maxDistanceSQRMax_31;
	// System.Single TSTrafficSpawner::maxDistanceSQRMin
	float ___maxDistanceSQRMin_32;
	// System.Int32 TSTrafficSpawner::currentAmountOfCar
	int32_t ___currentAmountOfCar_34;
	// System.Int32 TSTrafficSpawner::laneIndex1
	int32_t ___laneIndex1_35;
	// System.Int32 TSTrafficSpawner::pointIndex1
	int32_t ___pointIndex1_36;
	// System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex> TSTrafficSpawner::pointsIndex2
	List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* ___pointsIndex2_37;
	// System.Int32 TSTrafficSpawner::currentFarCar
	int32_t ___currentFarCar_38;
	// System.Int32 TSTrafficSpawner::time
	int32_t ___time_39;
	// TSTrafficAI TSTrafficSpawner::AI
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* ___AI_40;
	// TSNavigation TSTrafficSpawner::nav
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* ___nav_41;
	// System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex> TSTrafficSpawner::pointsIndex1
	List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* ___pointsIndex1_42;
};

// TSTrafficVolume
struct TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TSTrafficVolume::maxAllowedCars
	int32_t ___maxAllowedCars_4;
	// System.Collections.Generic.List`1<TSTrafficAI> TSTrafficVolume::carsOnThisSection
	List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* ___carsOnThisSection_5;
};

// <Module>

// <Module>

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

// System.Collections.Generic.List`1<TSTrafficAI>
struct List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TSTrafficAI>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.Collections.Generic.List`1<TSMainManager/VehicleTypePresets>
struct List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VehicleTypePresetsU5BU5D_t71227DB126F2FE8F6807A2C24492D7386465BE81* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TSMainManager/VehicleTypePresets>

// System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>
struct List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>

// System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>
struct List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>

// System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>
struct List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<TSLaneConnector>

// System.Collections.Generic.Queue`1<TSLaneConnector>

// System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>

// System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TSConnectorOtherPoints

// TSConnectorOtherPoints

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// TSMainManager/VehicleTypePresets

// TSMainManager/VehicleTypePresets

// TSTrafficSpawner/<CheckNearLanesSingleThread>d__0

// TSTrafficSpawner/<CheckNearLanesSingleThread>d__0

// TSTrafficSpawner/TSSpawnVehicles

// TSTrafficSpawner/TSSpawnVehicles

// System.Collections.Generic.Queue`1/Enumerator<System.Object>

// System.Collections.Generic.Queue`1/Enumerator<System.Object>

// System.Collections.Generic.Queue`1/Enumerator<TSLaneConnector>

// System.Collections.Generic.Queue`1/Enumerator<TSLaneConnector>

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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

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

// TSNavigation/TSNextLaneSelection

// TSNavigation/TSNextLaneSelection

// TSNavigation/TSReservedPoints

// TSNavigation/TSReservedPoints

// TSTrafficAI/TSBrakeSpeeds

// TSTrafficAI/TSBrakeSpeeds

// TSTrafficSpawner/PointsIndex

// TSTrafficSpawner/PointsIndex

// System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>

// System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>

// System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>

// System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>

// UnityEngine.Bounds

// UnityEngine.Bounds

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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// TSLaneConnector

// TSLaneConnector

// TSLaneInfo

// TSLaneInfo

// TSPoints

// TSPoints

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// UnityEngine.Component

// UnityEngine.Component

// System.Threading.EventWaitHandle

// System.Threading.EventWaitHandle

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

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

// System.AsyncCallback

// System.AsyncCallback

// System.Threading.AutoResetEvent

// System.Threading.AutoResetEvent

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.Threading.ManualResetEvent

// System.Threading.ManualResetEvent

// System.NotSupportedException

// System.NotSupportedException

// System.Threading.ParameterizedThreadStart

// System.Threading.ParameterizedThreadStart

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// TSTrafficAI/GetCarSpeedDelegate

// TSTrafficAI/GetCarSpeedDelegate

// TSTrafficAI/OnCloserRangeDelegate

// TSTrafficAI/OnCloserRangeDelegate

// TSTrafficAI/OnFarRangeDelegate

// TSTrafficAI/OnFarRangeDelegate

// TSTrafficAI/OnTurnLeftDelegate

// TSTrafficAI/OnTurnLeftDelegate

// TSTrafficAI/OnTurnRigthDelegate

// TSTrafficAI/OnTurnRigthDelegate

// TSTrafficAI/OnUpdateAIDelegate

// TSTrafficAI/OnUpdateAIDelegate

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// TSMainManager

// TSMainManager

// TSNavigation

// TSNavigation

// TSTrafficAI

// TSTrafficAI

// TSTrafficSpawner
struct TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_StaticFields
{
	// TSTrafficSpawner TSTrafficSpawner::mainInstance
	TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* ___mainInstance_33;
};

// TSTrafficSpawner

// TSTrafficVolume

// TSTrafficVolume
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TSLaneInfo[]
struct TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9  : public RuntimeArray
{
	ALIGN_FIELD (8) TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* m_Items[1];

	inline TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TSLaneConnector[]
struct TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4  : public RuntimeArray
{
	ALIGN_FIELD (8) TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* m_Items[1];

	inline TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TSPoints[]
struct TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD  : public RuntimeArray
{
	ALIGN_FIELD (8) TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* m_Items[1];

	inline TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TSConnectorOtherPoints[]
struct TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB  : public RuntimeArray
{
	ALIGN_FIELD (8) TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* m_Items[1];

	inline TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649  : public RuntimeArray
{
	ALIGN_FIELD (8) Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* m_Items[1];

	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// TSTrafficAI[]
struct TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2  : public RuntimeArray
{
	ALIGN_FIELD (8) TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* m_Items[1];

	inline TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* value)
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
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TSTrafficVolume[]
struct TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341  : public RuntimeArray
{
	ALIGN_FIELD (8) TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* m_Items[1];

	inline TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TSTrafficSpawner/TSSpawnVehicles[]
struct TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF  : public RuntimeArray
{
	ALIGN_FIELD (8) TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* m_Items[1];

	inline TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Threading.AutoResetEvent[]
struct AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D  : public RuntimeArray
{
	ALIGN_FIELD (8) AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* m_Items[1];

	inline AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Threading.ManualResetEvent[]
struct ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934  : public RuntimeArray
{
	ALIGN_FIELD (8) ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* m_Items[1];

	inline ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Threading.Thread[]
struct ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2  : public RuntimeArray
{
	ALIGN_FIELD (8) Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* m_Items[1];

	inline Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* value)
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
// TSNavigation/TSNextLaneSelection[]
struct TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0  : public RuntimeArray
{
	ALIGN_FIELD (8) TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B m_Items[1];

	inline TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B value)
	{
		m_Items[index] = value;
	}
};
// TSTrafficAI/TSBrakeSpeeds[]
struct TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83  : public RuntimeArray
{
	ALIGN_FIELD (8) TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 m_Items[1];

	inline TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___point_1), (void*)NULL);
	}
	inline TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___point_1), (void*)NULL);
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
// TSTrafficSpawner/PointsIndex[]
struct PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B  : public RuntimeArray
{
	ALIGN_FIELD (8) PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 m_Items[1];

	inline PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_gshared_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_gshared (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_gshared_inline (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_gshared (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_gshared (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m8440492FE31E5CFBE805A1AE123DC06E64F0397C_gshared (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_gshared (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56_gshared (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_gshared (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_gshared_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m164D7C38E08F59315B6321B67EA46293B71A9F8F_gshared_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85 Queue_1_GetEnumerator_mD361596BB9F4EE633ED3EBB75B0045AB626C54E1_gshared (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2AC426E5876BA9FB0CDF08E913789DFE179CFE16_gshared (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD Enumerator_get_Current_m788BD8BF8215B29E16BB526E5F0D1E7421989886_gshared (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD88BA689B4D0B4E1C4C18A68371F6D08F74FC4BB_gshared (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2 List_1_GetEnumerator_mD221AD77B96092C1972D7A6D38A3EF5886737AA3_gshared (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m81B60AE3FDD66A39470F84A2F8AEAD4D23D1B77C_gshared (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B Enumerator_get_Current_m00EFCFE880E05B1E23360E029C358884DB7FDD61_gshared_inline (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD7A8042FAE3DDE9CDFE37D223300DB82510BB092_gshared (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6A89C9B9C319D0A1B44D075571519C6164BABE4D_gshared (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF_gshared (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_gshared_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_gshared (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4CDDF0876E4FD31EFC39AD9CB473983FE3412CC2_gshared (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, int32_t ___0_index, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m609B32B573D542156D2BB51795569F077B07FFBB_gshared (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m2005E02D4DC2C3186E5BA0722C8435C966AB7B0E_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE6C9F9D00999EADB14909F841A829FDF5AE03130_gshared_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_gshared_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9_gshared (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_gshared_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_gshared_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4_gshared (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mE4F8B2408B5D967FE6699EB7914B042426A2BDE4_gshared_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA_gshared (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<TSMainManager/VehicleTypePresets>::.ctor()
inline void List_1__ctor_mC7E0F812C485EEB901431FAEA3426E21C750F187 (List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TSTrafficAI>()
inline TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* Component_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_mD533EA80E0E1BDE9BC581D07358A97E62FCB6B63 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void TSNavigation::NavigateToWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_NavigateToWaypoints_mDAA636A15EB778962534859B347F637FD9EA216B (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::get_Count()
inline int32_t List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*, const RuntimeMethod*))List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::get_Item(System.Int32)
inline TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B (*) (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*, int32_t, const RuntimeMethod*))List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_gshared)(__this, ___0_index, method);
}
// System.Single TSTrafficAI::get_carSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
inline bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared)(__this, ___0_item, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::get_Count()
inline int32_t Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*, const RuntimeMethod*))Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::Peek()
inline TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4 (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method)
{
	return ((  TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD (*) (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*, const RuntimeMethod*))Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void TSNavigation::AddNextTrackToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_AddNextTrackToPath_m824AAA81735165049B10BD2EB586A65D724D3436 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) ;
// System.Single TSTrafficAI::get_LookAheadDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TSTrafficAI_get_LookAheadDistance_m398FB1B39A0989E2A6681E8E415459AD171AE1C1_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI/OnTurnLeftDelegate::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_inline (OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method) ;
// System.Void TSTrafficAI/OnTurnRigthDelegate::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_inline (OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method) ;
// System.Boolean TSNavigation::SwitchTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSNavigation_SwitchTrack_mFE5F632501AF6B8A9D14E95A78523F28054D5C8E (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) ;
// System.Void TSNavigation::CheckLastPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_CheckLastPoints_m6CAC0C9AC0B7B08FCA4BFB71CD1506B5CE875484 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::Dequeue()
inline TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6 (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method)
{
	return ((  TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD (*) (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*, const RuntimeMethod*))Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_gshared)(__this, method);
}
// System.Void TSNavigation::UnReserveNearConnectorPoints(TSPoints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_UnReserveNearConnectorPoints_mE5C13140D55D034DF741618F8C223CADD091B69F (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___0_points, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::Remove(T)
inline bool List_1_Remove_m8440492FE31E5CFBE805A1AE123DC06E64F0397C (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B, const RuntimeMethod*))List_1_Remove_m8440492FE31E5CFBE805A1AE123DC06E64F0397C_gshared)(__this, ___0_item, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::Enqueue(T)
inline void Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3 (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*, TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD, const RuntimeMethod*))Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_gshared)(__this, ___0_item, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void TSNavigation::UnreserveAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_UnreserveAll_m311FEA8A59F1758DB8FBAC7621655906E5271749 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, bool ___0_all, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::Clear()
inline void Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56 (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*, const RuntimeMethod*))Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::.ctor()
inline void List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751 (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*, const RuntimeMethod*))List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::Clear()
inline void List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*, const RuntimeMethod*))List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<TSLaneConnector>::Peek()
inline TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* Queue_1_Peek_m87CC96BD38A49880B0B2B39D18C142B12F46C016 (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* __this, const RuntimeMethod* method)
{
	return ((  TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* (*) (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228*, const RuntimeMethod*))Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared)(__this, method);
}
// System.Void TSNavigation::UnReserveNearConnectorPoints(TSLaneConnector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_UnReserveNearConnectorPoints_mE6E3831EFE33640A927476588DE2919C6F128AC6 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___0_connector, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<TSLaneConnector>::Dequeue()
inline TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* Queue_1_Dequeue_m816682D18E7BAEBEB2AA087935465238D1F35685 (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* __this, const RuntimeMethod* method)
{
	return ((  TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* (*) (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<TSLaneConnector>::get_Count()
inline int32_t Queue_1_get_Count_m9CCE1D78791238782E224255879BCD5D44891E5F_inline (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Int32 TSNavigation::GetNextConnector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSNavigation_GetNextConnector_mBBFB7AB100D6EEBF9231896507C361498A8A4B1A (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, int32_t ___0_lane, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::Add(T)
inline void List_1_Add_m164D7C38E08F59315B6321B67EA46293B71A9F8F_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B, const RuntimeMethod*))List_1_Add_m164D7C38E08F59315B6321B67EA46293B71A9F8F_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::GetEnumerator()
inline Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85 Queue_1_GetEnumerator_mD361596BB9F4EE633ED3EBB75B0045AB626C54E1 (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85 (*) (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*, const RuntimeMethod*))Queue_1_GetEnumerator_mD361596BB9F4EE633ED3EBB75B0045AB626C54E1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>::Dispose()
inline void Enumerator_Dispose_m2AC426E5876BA9FB0CDF08E913789DFE179CFE16 (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85*, const RuntimeMethod*))Enumerator_Dispose_m2AC426E5876BA9FB0CDF08E913789DFE179CFE16_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>::get_Current()
inline TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD Enumerator_get_Current_m788BD8BF8215B29E16BB526E5F0D1E7421989886 (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85* __this, const RuntimeMethod* method)
{
	return ((  TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD (*) (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85*, const RuntimeMethod*))Enumerator_get_Current_m788BD8BF8215B29E16BB526E5F0D1E7421989886_gshared)(__this, method);
}
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<TSNavigation/TSReservedPoints>::MoveNext()
inline bool Enumerator_MoveNext_mD88BA689B4D0B4E1C4C18A68371F6D08F74FC4BB (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85*, const RuntimeMethod*))Enumerator_MoveNext_mD88BA689B4D0B4E1C4C18A68371F6D08F74FC4BB_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<TSLaneConnector>::GetEnumerator()
inline Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498 Queue_1_GetEnumerator_m61C93F127D73336F32BA705ACA1B39F6222EEF76 (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498 (*) (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228*, const RuntimeMethod*))Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<TSLaneConnector>::Dispose()
inline void Enumerator_Dispose_mA556F75A20687468CD8FEA3F762810A82A6ADEED (Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498*, const RuntimeMethod*))Enumerator_Dispose_m680926A5EFC7099ECBCE9DEF68F8DED03C103955_gshared)(__this, method);
}
// T System.Collections.Generic.Queue`1/Enumerator<TSLaneConnector>::get_Current()
inline TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* Enumerator_get_Current_m9BD126543D3F935975EA8353D41524F9A112B047 (Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498* __this, const RuntimeMethod* method)
{
	return ((  TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* (*) (Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498*, const RuntimeMethod*))Enumerator_get_Current_m5F2338F4C35E898DB7231D7E30F30155498FA9D7_gshared)(__this, method);
}
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<TSLaneConnector>::MoveNext()
inline bool Enumerator_MoveNext_mFC838E21F17CB2236345D244772BA5CF01CAE315 (Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498*, const RuntimeMethod*))Enumerator_MoveNext_mABD92CBE05B031E50E316375DDC8B2BDAD3F6F84_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::GetEnumerator()
inline Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2 List_1_GetEnumerator_mD221AD77B96092C1972D7A6D38A3EF5886737AA3 (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2 (*) (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*, const RuntimeMethod*))List_1_GetEnumerator_mD221AD77B96092C1972D7A6D38A3EF5886737AA3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>::Dispose()
inline void Enumerator_Dispose_m81B60AE3FDD66A39470F84A2F8AEAD4D23D1B77C (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2*, const RuntimeMethod*))Enumerator_Dispose_m81B60AE3FDD66A39470F84A2F8AEAD4D23D1B77C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>::get_Current()
inline TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B Enumerator_get_Current_m00EFCFE880E05B1E23360E029C358884DB7FDD61_inline (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2* __this, const RuntimeMethod* method)
{
	return ((  TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B (*) (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2*, const RuntimeMethod*))Enumerator_get_Current_m00EFCFE880E05B1E23360E029C358884DB7FDD61_gshared_inline)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<TSNavigation/TSNextLaneSelection>::MoveNext()
inline bool Enumerator_MoveNext_mD7A8042FAE3DDE9CDFE37D223300DB82510BB092 (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2*, const RuntimeMethod*))Enumerator_MoveNext_mD7A8042FAE3DDE9CDFE37D223300DB82510BB092_gshared)(__this, method);
}
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSNavigation/TSNextLaneSelection>::.ctor()
inline void List_1__ctor_m6A89C9B9C319D0A1B44D075571519C6164BABE4D (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*, const RuntimeMethod*))List_1__ctor_m6A89C9B9C319D0A1B44D075571519C6164BABE4D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<TSNavigation/TSReservedPoints>::.ctor()
inline void Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*, const RuntimeMethod*))Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<TSLaneConnector>::.ctor()
inline void Queue_1__ctor_m8641407D5754FA8404B73391E03923BDAED285C0 (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void TSNavigation/TSReservedPoints::.ctor(TSLaneConnector,TSPoints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSReservedPoints__ctor_m5CE5BDCEB99DF0A0A05E921D07FE0741A5227EB4 (TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___0__connector, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___1__point, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TSNavigation>()
inline TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* GameObject_GetComponent_TisTSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94_m1FE1E6D3D2A7F04FD1F7B11F8D83D7175F0E0950 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void TSTrafficAI::IRDSWheelsCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_IRDSWheelsCenter_m766FEE365530DE408E20DE51B2DD465FE048F32C (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Bounds TSTrafficAI::CarSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TSTrafficAI_CarSize_m5734003012D40DE4A62649E12B5AD9B06510CF39 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// System.Void TSTrafficAI/GetCarSpeedDelegate::Invoke(System.Single&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_inline (GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method) ;
// System.Void TSTrafficAI::GeneralCalculations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_GeneralCalculations_m6B2F7E394D992160A25A28A87FFBC39A2DBE10BF (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI::controllerAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_controllerAI_mEA93B00DBE91D1143044E1A1DC48C58E0334D0D8 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Single TSTrafficAI::GetSteer(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetSteer_m7C4D54565158990E218C9F432461E83C705C01C5 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPoint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_previousT, bool ___2_useOvertakes, const RuntimeMethod* method) ;
// System.Single TSTrafficAI::GetBrake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetBrake_m997911CD41A557AED801F632AA3AA4ECAC8FFCC7 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Single TSTrafficAI::GetAccel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetAccel_m0E5C14F783A7143EE832C0253106C9D12B6E6389 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void TSTrafficAI::CheckUpsideDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_CheckUpsideDown_mE3D22D9EDA98F39691CF9C5AD218D9846334DC69 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI/OnUpdateAIDelegate::Invoke(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_inline (OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::get_Count()
inline int32_t List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*, const RuntimeMethod*))List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::get_Item(System.Int32)
inline TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683 (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 (*) (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*, int32_t, const RuntimeMethod*))List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::set_Item(System.Int32,T)
inline void List_1_set_Item_m4CDDF0876E4FD31EFC39AD9CB473983FE3412CC2 (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, int32_t ___0_index, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*, int32_t, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2, const RuntimeMethod*))List_1_set_Item_m4CDDF0876E4FD31EFC39AD9CB473983FE3412CC2_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Boolean System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::Remove(T)
inline bool List_1_Remove_m609B32B573D542156D2BB51795569F077B07FFBB (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2, const RuntimeMethod*))List_1_Remove_m609B32B573D542156D2BB51795569F077B07FFBB_gshared)(__this, ___0_item, method);
}
// System.Void TSTrafficAI::GetMaxLockAheadDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_GetMaxLockAheadDistance_m5C794BCF69EBE78141168F8A1FEDEADB17BF68E4 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI::GetMaxSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_GetMaxSpeed_m1AA46C69E451CFA2AA817DCC3A28713C1B60EA8A (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI::GetBrakeForCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_GetBrakeForCorners_mCE868CACE6EA97A66629C0B6803254324548AAD3 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Single TSTrafficAI::GetNearestPlayerDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetNearestPlayerDistance_mBB1C0EDA755A0BEE5611F6C7DFAD89C8A54C89CC (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Void TSNavigation::LaneChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_LaneChange_m0BA2A7CA95DA85A8B2295FB958094D115A037D8C (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, bool ___0_left, const RuntimeMethod* method) ;
// System.Boolean TSTrafficAI::GetCurrentPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficAI_GetCurrentPoint_m7B18A2B3394205263F446DA878A04D69E54D096F (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI::CheckPointSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_CheckPointSpeed_m091BC656D475E349A4E5A9B3C5D7AE5CEC7A83E5 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Boolean TSTrafficAI::TryToReservePoint(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficAI_TryToReservePoint_m06D605550C67009B4000859DA3E89596F6BCD270 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, bool* ___0_stillMine, const RuntimeMethod* method) ;
// System.Void TSTrafficAI::CheckIfNeedsToBrake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_CheckIfNeedsToBrake_m567B1CBFABC149C67FC2DFEFD124F7CE28BEC89E (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void TSNavigation::OverTaking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_OverTaking_m82C3F3C33C165063DAF392C08D781B81CB6F5988 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, bool ___0_left, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CapsuleCast_m121518311930963660B3BFBF136931BCA2E3A986 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point2, float ___2_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___4_hitInfo, float ___5_maxDistance, int32_t ___6_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean TSNavigation::ReserveNearConnectorPoints(TSLaneConnector&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSNavigation_ReserveNearConnectorPoints_mBB213DFF72CF17986781F8604FF9651684375EDC (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** ___0_connector, int32_t ___1_lane, const RuntimeMethod* method) ;
// System.Boolean TSNavigation::ReserveNearConnectorPoints(TSPoints&,TSLaneConnector&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSNavigation_ReserveNearConnectorPoints_m7914F3DD2ABED273B54D72D8D12486F83BD3B19C (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** ___0_points, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** ___1_connector, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<TSLaneConnector>::Contains(T)
inline bool Queue_1_Contains_m61336C1C735A98554B505FC8E0928EBD6E9306EC (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228*, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*, const RuntimeMethod*))Queue_1_Contains_m2005E02D4DC2C3186E5BA0722C8435C966AB7B0E_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Queue`1<TSLaneConnector>::Enqueue(T)
inline void Queue_1_Enqueue_m6C66B383C4343C6208977D605550E611FFF0BF51 (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228*, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::Add(T)
inline void List_1_Add_mE6C9F9D00999EADB14909F841A829FDF5AE03130_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2, const RuntimeMethod*))List_1_Add_mE6C9F9D00999EADB14909F841A829FDF5AE03130_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single TSTrafficSpawner::get_RespawnUpSideDownTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficSpawner_get_RespawnUpSideDownTime_m783909AB8750F6819FCEEA376A0727E113628F2A (const RuntimeMethod* method) ;
// UnityEngine.Vector2 TSTrafficAI::GetTargetPoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TSTrafficAI_GetTargetPoint_m5F1FF2E035B451F1B1683F4EF2BF69BA68E9A874 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_Point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_prev, bool ___2_useOvertakes, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single TSTrafficAI::GetLookahead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetLookahead_m1539636FE1A5E917186A2AB5C1EC307E2CA8D929 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Transform>::Remove(T)
inline bool List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void TSTrafficAI::HideVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_HideVolume_mCCCD2DA937D8A7FCE30DB696A65B3E240004D9FF (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_bounds, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void TSNavigation::TurnOffTurningLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_TurnOffTurningLights_m3EED665483CBD42683DE47230DAD6E08D59DC06D (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) ;
// System.Void TSPoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSPoints__ctor_m1839959CD25FBEE87AEFEE5E5E4D0546CB3A5C70 (TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TSTrafficSpawner::AddCarsStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_AddCarsStart_m6658BC8D6820E39DC20A31C5468BBE5A8B969C2D (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean TSTrafficSpawner::GetCarByFrequency(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficSpawner_GetCarByFrequency_m837A809BB18755BE97440CF5967DD9B9830620B9 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, int32_t* ___0_currentIndex, int32_t* ___1_returnedIndex, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m8C504E8CCCA0816BEB5BB431A0BCECE17D217A0B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, const RuntimeMethod* method) ;
// UnityEngine.Bounds TSTrafficSpawner::CarSize(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TSTrafficSpawner_CarSize_m4AEE5173A3578834BBDB610D080FAAFDEE69C51F (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_car, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TSTrafficAI>()
inline TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* GameObject_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_m193B81C8C9A2EDA80AEADFADE88ADE95E8284534 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean TSTrafficSpawner::CheckTrafficVolume(System.Int32&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficSpawner_CheckTrafficVolume_m445F2341DD5159B78F5F24517BBFFED9BB98E5B2 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, int32_t* ___0_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficAI>::Add(T)
inline void List_1_Add_m046358360F9D9E54FCB8A7403C3F6301C01B1597_inline (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* __this, TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9*, TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void TSTrafficSpawner::AddTrafficCar(TSTrafficAI&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_AddTrafficCar_m9C0AABEE75195D032E1B998CA9432EA1C723A220 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4** ___0_AI, const RuntimeMethod* method) ;
// System.Void TSTrafficAI::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_Enable_m3C8DF47BF3287A0C8F268DB1633CE30BF76B0E5D (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, bool ___0_flag, const RuntimeMethod* method) ;
// System.Void TSTrafficSpawner::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_Initialize_m7BB23B08B413CF524D73F4D7FF9D71DA36C74704 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TSTrafficSpawner::CheckNearLanesSingleThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TSTrafficSpawner_CheckNearLanesSingleThread_m1DC2C2C8B1646E28C31B2DCD28270A9E12F4245C (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TSTrafficAI>::get_Count()
inline int32_t List_1_get_Count_m841F3E16565B232B361AE966654F6DEDA951FD22_inline (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void TSTrafficSpawner::UpdateCarPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_UpdateCarPositions_mC142FCFA53B4635452E68A1E4642651E79C95EC4 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficSpawner::CheckFarCarsSingleThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_CheckFarCarsSingleThread_mF237BC07549DE594EF85BD072BF9DDB99D2A9937 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficSpawner::AddCar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_AddCar_m877C9470FB96675059EB597131B6E263F6D92D7D (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::Add(T)
inline void List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*, PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2, const RuntimeMethod*))List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9 (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::Clear()
inline void List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*, const RuntimeMethod*))List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_gshared_inline)(__this, method);
}
// System.Boolean TSTrafficAI::get_ForcedRespawn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TSTrafficAI_get_ForcedRespawn_m47BD7FA67E038549401BFE695D0F46C3E86B4240_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI/OnFarRangeDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_inline (OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI/OnCloserRangeDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_inline (OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckNearLanesSingleThreadU3Ed__0__ctor_m5876FD7E9EB1A87CFC8AE44CAEADFF6F47BAA23E (U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// TSNavigation TSTrafficAI::get_NavigateToWaypoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* TSTrafficAI_get_NavigateToWaypoints_m0C0959569CFC61D0372DD339371CFCD7AB7108A1_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) ;
// System.Void TSTrafficAI::set_ForcedRespawn(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TSTrafficAI_set_ForcedRespawn_m615C1D2557556013D226208D4CA42D62982E14D1_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void TSTrafficSpawner::CheckNearLanes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_CheckNearLanes_mACE37C0E832E07620E908B9BDDBABCEB581B14DA (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Int32 TSTrafficSpawner::GetNextCarFarIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSTrafficSpawner_GetNextCarFarIndex_m032E9F848F7DA64E4FB0A2951320D9D6FCE0DD86 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::get_Count()
inline int32_t List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*, const RuntimeMethod*))List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::get_Item(System.Int32)
inline PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4 (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 (*) (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*, int32_t, const RuntimeMethod*))List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4_gshared)(__this, ___0_index, method);
}
// System.Int32 TSTrafficSpawner::GetNextCarFarIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSTrafficSpawner_GetNextCarFarIndex_m6A75ED0E9F09DEAA89ED659B31D577B205DC9C7B (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, int32_t ___0_currentIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficAI/TSBrakeSpeeds>::Clear()
inline void List_1_Clear_mE4F8B2408B5D967FE6699EB7914B042426A2BDE4_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*, const RuntimeMethod*))List_1_Clear_mE4F8B2408B5D967FE6699EB7914B042426A2BDE4_gshared_inline)(__this, method);
}
// System.Int32 System.Environment::get_ProcessorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_ProcessorCount_mDAC34132B9E3B90121F37673DF78F13FCB9497AC (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* __this, bool ___0_initialState, const RuntimeMethod* method) ;
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___0_initialState, const RuntimeMethod* method) ;
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718 (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, RuntimeObject* ___0_parameter, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TSTrafficSpawner/PointsIndex>::.ctor()
inline void List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*, const RuntimeMethod*))List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA_gshared)(__this, method);
}
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<TSTrafficAI>::Remove(T)
inline bool List_1_Remove_mC38F277FE9B7DB280A4B4A025EAD1CB7FEFBBE59 (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* __this, TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9*, TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<TSTrafficAI>::.ctor()
inline void List_1__ctor_m57F6B97C612ABAF9B71811F09358E42E2341B082 (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
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
// System.Void TSMainManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSMainManager__ctor_m55685C893309C9E529E273D0C97DFB46ABBD5FAA (TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC7E0F812C485EEB901431FAEA3426E21C750F187_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___visualLinesWidth_9 = (5.0f);
		__this->___resolution_10 = (4.0f);
		__this->___resolutionConnectors_11 = (4.0f);
		__this->___laneCurveSpeedMultiplier_12 = (1.0f);
		__this->___connectorsCurveSpeedMultiplier_13 = (1.0f);
		__this->___defaultVehicleType_14 = (-1);
		List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B* L_0 = (List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B*)il2cpp_codegen_object_new(List_1_t1345E0BCE3A18B8F720A7D7F4AA32038BE1BC44B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC7E0F812C485EEB901431FAEA3426E21C750F187(L_0, List_1__ctor_mC7E0F812C485EEB901431FAEA3426E21C750F187_RuntimeMethod_var);
		__this->___vehicleTypePresets_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vehicleTypePresets_15), (void*)L_0);
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
// System.Void TSMainManager/VehicleTypePresets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VehicleTypePresets__ctor_mFBD24DF21412EE7593537F5165A7FC8C7C9987D1 (VehicleTypePresets_t89C028930203B124B2888B342045F23ECFD6959D* __this, const RuntimeMethod* method) 
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
// System.Void TSConnectorOtherPoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSConnectorOtherPoints__ctor_mC5AB55AA6AAAC05C885F311EAFF023761E0F6FB1 (TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* __this, const RuntimeMethod* method) 
{
	{
		__this->___lane_0 = (-1);
		__this->___connector_1 = (-1);
		__this->___pointIndex_2 = (-1);
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
// System.Void TSPoints::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSPoints__ctor_m1839959CD25FBEE87AEFEE5E5E4D0546CB3A5C70 (TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* __this, const RuntimeMethod* method) 
{
	{
		__this->___laneReservationID_3 = (-1);
		__this->___rightParalelLaneIndex_6 = (-1);
		__this->___leftParalelLaneIndex_7 = (-1);
		__this->___maxSpeedLimit_8 = (1000.0f);
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
// System.Void TSLaneInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSLaneInfo__ctor_mB3AD9085B3D84DB12C7C823BDCA84AAEA4085611 (TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___middlePoints_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___middlePoints_2), (void*)L_0);
		__this->___laneWidth_3 = (2.5f);
		__this->___vehicleType_4 = (-1);
		__this->___maxSpeed_5 = (50.0f);
		__this->___laneLinkRight_8 = (-1);
		__this->___laneLinkLeft_9 = (-1);
		__this->___trafficDensity_10 = (1.0f);
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
// System.Void TSLaneConnector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSLaneConnector__ctor_m51A03CEAD61760FB13F217AE9783A047A4C45019 (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___conectorA_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___conectorB_1 = L_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___middlePoints_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___middlePoints_2), (void*)L_2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_3, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___reservedByID_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reservedByID_9), (void*)L_3);
		__this->___priority_10 = 1;
		__this->___direction_11 = 2;
		__this->___vehicleType_14 = (-1);
		__this->___remainingGreenLightTime_16 = (-1.0f);
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
// System.Void TSNavigation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_Awake_m775BC7636A7EE8BAE8E7D0C7BBE2FFD6A8218BE4 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_mD533EA80E0E1BDE9BC581D07358A97E62FCB6B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE65881D7409CC3651D97F80F80E8761DEE911584);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___myTransform_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myTransform_31), (void*)L_0);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_1;
		L_1 = Component_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_mD533EA80E0E1BDE9BC581D07358A97E62FCB6B63(__this, Component_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_mD533EA80E0E1BDE9BC581D07358A97E62FCB6B63_RuntimeMethod_var);
		__this->___carControllerAI_30 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___carControllerAI_30), (void*)L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		__this->___myID_21 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___myTransform_31;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		int32_t* L_6 = (&__this->___myID_21);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_5, _stringLiteralE65881D7409CC3651D97F80F80E8761DEE911584, L_7, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_4);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_4, L_8, NULL);
		return;
	}
}
// System.Void TSNavigation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_Start_mF6AB9D2E042E32B57A5FB3C592B92CEAF1F0ACD4 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E(L_1, NULL);
		NullCheck(((TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652*)IsInstClass((RuntimeObject*)L_2, TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_il2cpp_TypeInfo_var)));
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_3 = ((TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652*)IsInstClass((RuntimeObject*)L_2, TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_il2cpp_TypeInfo_var))->___lanes_4;
		__this->___lanes_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lanes_15), (void*)L_3);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_4 = __this->___carControllerAI_30;
		NullCheck(L_4);
		float L_5 = L_4->___carDepth_11;
		__this->___halfDepth_33 = ((float)(L_5/(2.0f)));
		float L_6 = __this->___halfDepth_33;
		float L_7 = __this->___halfDepth_33;
		__this->___halfDepthSqr_35 = ((float)il2cpp_codegen_multiply(((-L_6)), ((-L_7))));
		return;
	}
}
// System.Void TSNavigation::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_FixedUpdate_mA0DF03273D98FF5EDD15A8BE9040B395419484C0 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	{
		TSNavigation_NavigateToWaypoints_mDAA636A15EB778962534859B347F637FD9EA216B(__this, NULL);
		return;
	}
}
// System.Boolean TSNavigation::SwitchTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSNavigation_SwitchTrack_mFE5F632501AF6B8A9D14E95A78523F28054D5C8E (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___nextTrackIndex_26;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_1 = __this->___nextTrackPath_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_1, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_3 = __this->___lanes_15;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_4 = __this->___nextTrackPath_11;
		int32_t L_5 = __this->___nextTrackIndex_26;
		NullCheck(L_4);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_6;
		L_6 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_4, L_5, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_7 = L_6.___nextLane_0;
		NullCheck(L_3);
		int32_t L_8 = L_7;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_10 = L_9->___connectors_7;
		NullCheck(L_10);
		if (((int32_t)(((RuntimeArray*)L_10)->max_length)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		__this->___currentWaypoint_4 = 0;
		__this->___previousWaypointSteer_8 = 0;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_11 = __this->___nextTrackPath_11;
		int32_t L_12 = __this->___nextTrackIndex_26;
		NullCheck(L_11);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_13;
		L_13 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_11, L_12, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		bool L_14 = L_13.___isConnector_2;
		if (!L_14)
		{
			goto IL_00d6;
		}
	}
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_15 = __this->___nextTrackPath_11;
		int32_t L_16 = __this->___nextTrackIndex_26;
		NullCheck(L_15);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_17;
		L_17 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_15, L_16, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_18 = L_17.___nextLane_0;
		__this->___currentLane_9 = L_18;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_19 = __this->___nextTrackPath_11;
		int32_t L_20 = __this->___nextTrackIndex_26;
		NullCheck(L_19);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_21;
		L_21 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_19, L_20, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_22 = L_21.___nextConnector_1;
		__this->___selectedConnector_18 = L_22;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_23 = __this->___lanes_15;
		int32_t L_24 = __this->___currentLane_9;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_27 = L_26->___connectors_7;
		int32_t L_28 = __this->___selectedConnector_18;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_31 = L_30->___points_3;
		__this->___waypoints_13 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_13), (void*)L_31);
		__this->___travelingOnConector_16 = (bool)1;
		int32_t L_32 = __this->___nextTrackIndex_26;
		__this->___nextTrackIndex_26 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		return (bool)1;
	}

IL_00d6:
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_33 = __this->___nextTrackPath_11;
		int32_t L_34 = __this->___nextTrackIndex_26;
		NullCheck(L_33);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_35;
		L_35 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_33, L_34, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_36 = L_35.___nextLane_0;
		__this->___currentLane_9 = L_36;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_37 = __this->___lanes_15;
		int32_t L_38 = __this->___currentLane_9;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_41 = L_40->___points_6;
		__this->___waypoints_13 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_13), (void*)L_41);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_42 = __this->___lanes_15;
		int32_t L_43 = __this->___currentLane_9;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		float L_46 = L_45->___maxSpeed_5;
		__this->___currentMaxSpeed_12 = L_46;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_47 = __this->___lanes_15;
		int32_t L_48 = __this->___currentLane_9;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_51 = L_50;
		NullCheck(L_51);
		float L_52 = L_51->___totalOcupation_11;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_53 = __this->___carControllerAI_30;
		NullCheck(L_53);
		float L_54 = L_53->___carDepth_11;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_55 = __this->___lanes_15;
		int32_t L_56 = __this->___currentLane_9;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		float L_59 = L_58->___totalDistance_12;
		NullCheck(L_51);
		L_51->___totalOcupation_11 = ((float)il2cpp_codegen_add(L_52, ((float)(((float)il2cpp_codegen_add(L_54, (3.0f)))/L_59))));
		__this->___travelingOnConector_16 = (bool)0;
		int32_t L_60 = __this->___nextTrackIndex_26;
		__this->___nextTrackIndex_26 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		return (bool)1;
	}
}
// System.Boolean TSNavigation::ReserveNearConnectorPoints(TSLaneConnector&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSNavigation_ReserveNearConnectorPoints_mBB213DFF72CF17986781F8604FF9651684375EDC (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** ___0_connector, int32_t ___1_lane, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___roolback_39 = (bool)0;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_0 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_1 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_0);
		NullCheck(L_1);
		L_1->___isRequested_8 = (bool)1;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_2 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_3 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_2);
		NullCheck(L_3);
		bool L_4 = L_3->___isReserved_7;
		if (L_4)
		{
			goto IL_0415;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_5 = __this->___lanes_15;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_6 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_7 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_6);
		NullCheck(L_7);
		int32_t L_8 = L_7->___nextLane_4;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		float L_11 = L_10->___totalOcupation_11;
		if ((!(((float)L_11) > ((float)(0.75f)))))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_12 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_13 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_12);
		NullCheck(L_13);
		bool L_14 = L_13->___forcedStop_6;
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_15 = __this->___carControllerAI_30;
		NullCheck(L_15);
		float L_16;
		L_16 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(L_15, NULL);
		if ((!(((float)L_16) > ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0054:
	{
		__this->___i_40 = 0;
		goto IL_0263;
	}

IL_0060:
	{
		__this->___pointIndex_41 = 0;
		goto IL_01f8;
	}

IL_006c:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_17 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_18 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_17);
		NullCheck(L_18);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_19 = L_18->___points_3;
		int32_t L_20 = __this->___i_40;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_23 = L_22->___otherConnectorsPoints_9;
		int32_t L_24 = __this->___pointIndex_41;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		int32_t L_27 = L_26->___lane_0;
		__this->___reservLane_36 = L_27;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_28 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_29 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_28);
		NullCheck(L_29);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_30 = L_29->___points_3;
		int32_t L_31 = __this->___i_40;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_34 = L_33->___otherConnectorsPoints_9;
		int32_t L_35 = __this->___pointIndex_41;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		int32_t L_38 = L_37->___connector_1;
		__this->___reservConnector_38 = L_38;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_39 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_40 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_39);
		NullCheck(L_40);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_41 = L_40->___points_3;
		int32_t L_42 = __this->___i_40;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_45 = L_44->___otherConnectorsPoints_9;
		int32_t L_46 = __this->___pointIndex_41;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		int32_t L_49 = L_48->___pointIndex_2;
		__this->___reservPoint_37 = L_49;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_50 = __this->___lanes_15;
		int32_t L_51 = __this->___reservLane_36;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_54 = L_53->___connectors_7;
		int32_t L_55 = __this->___reservConnector_38;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		bool L_58 = L_57->___isRequested_8;
		if (!L_58)
		{
			goto IL_012e;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_59 = __this->___lanes_15;
		int32_t L_60 = __this->___reservLane_36;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_63 = L_62->___connectors_7;
		int32_t L_64 = __this->___reservConnector_38;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		int32_t L_67 = L_66->___priority_10;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_68 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_69 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_68);
		NullCheck(L_69);
		int32_t L_70 = L_69->___priority_10;
		if ((((int32_t)L_67) <= ((int32_t)L_70)))
		{
			goto IL_012e;
		}
	}
	{
		__this->___roolback_39 = (bool)1;
		goto IL_0218;
	}

IL_012e:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_71 = __this->___lanes_15;
		int32_t L_72 = __this->___reservLane_36;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_75 = L_74->___connectors_7;
		int32_t L_76 = __this->___reservConnector_38;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		bool L_79 = L_78->___isReserved_7;
		if (!L_79)
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_80 = ___1_lane;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_81 = __this->___lanes_15;
		int32_t L_82 = __this->___reservLane_36;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_85 = L_84->___connectors_7;
		int32_t L_86 = __this->___reservConnector_38;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_89 = L_88->___points_3;
		int32_t L_90 = __this->___reservPoint_37;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		int32_t L_93 = L_92->___laneReservationID_3;
		if ((((int32_t)L_80) == ((int32_t)L_93)))
		{
			goto IL_0187;
		}
	}
	{
		__this->___roolback_39 = (bool)1;
		goto IL_0218;
	}

IL_0187:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_94 = __this->___lanes_15;
		int32_t L_95 = __this->___reservLane_36;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_98 = L_97->___connectors_7;
		int32_t L_99 = __this->___reservConnector_38;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_102 = L_101->___points_3;
		int32_t L_103 = __this->___reservPoint_37;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		int32_t L_106 = L_105->___laneReservationID_3;
		if ((((int32_t)L_106) == ((int32_t)(-1))))
		{
			goto IL_01ea;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_107 = __this->___lanes_15;
		int32_t L_108 = __this->___reservLane_36;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_111 = L_110->___connectors_7;
		int32_t L_112 = __this->___reservConnector_38;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_114);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_115 = L_114->___points_3;
		int32_t L_116 = __this->___reservPoint_37;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		int32_t L_119 = L_118->___laneReservationID_3;
		int32_t L_120 = ___1_lane;
		if ((((int32_t)L_119) == ((int32_t)L_120)))
		{
			goto IL_01ea;
		}
	}
	{
		__this->___roolback_39 = (bool)1;
		goto IL_0218;
	}

IL_01ea:
	{
		int32_t L_121 = __this->___pointIndex_41;
		__this->___pointIndex_41 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_01f8:
	{
		int32_t L_122 = __this->___pointIndex_41;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_123 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_124 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_123);
		NullCheck(L_124);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_125 = L_124->___points_3;
		int32_t L_126 = __this->___i_40;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_129 = L_128->___otherConnectorsPoints_9;
		NullCheck(L_129);
		if ((((int32_t)L_122) < ((int32_t)((int32_t)(((RuntimeArray*)L_129)->max_length)))))
		{
			goto IL_006c;
		}
	}

IL_0218:
	{
		bool L_130 = __this->___roolback_39;
		if (L_130)
		{
			goto IL_0277;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_131 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_132 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_131);
		NullCheck(L_132);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_133 = L_132->___points_3;
		int32_t L_134 = __this->___i_40;
		NullCheck(L_133);
		int32_t L_135 = L_134;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		int32_t L_137 = L_136->___laneReservationID_3;
		if ((((int32_t)L_137) == ((int32_t)(-1))))
		{
			goto IL_0255;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_138 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_139 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_138);
		NullCheck(L_139);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_140 = L_139->___points_3;
		int32_t L_141 = __this->___i_40;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_143);
		int32_t L_144 = L_143->___laneReservationID_3;
		int32_t L_145 = ___1_lane;
		if ((((int32_t)L_144) == ((int32_t)L_145)))
		{
			goto IL_0255;
		}
	}
	{
		__this->___roolback_39 = (bool)1;
		goto IL_0277;
	}

IL_0255:
	{
		int32_t L_146 = __this->___i_40;
		__this->___i_40 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_0263:
	{
		int32_t L_147 = __this->___i_40;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_148 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_149 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_148);
		NullCheck(L_149);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_150 = L_149->___points_3;
		NullCheck(L_150);
		if ((((int32_t)L_147) < ((int32_t)((int32_t)(((RuntimeArray*)L_150)->max_length)))))
		{
			goto IL_0060;
		}
	}

IL_0277:
	{
		bool L_151 = __this->___roolback_39;
		if (L_151)
		{
			goto IL_0457;
		}
	}
	{
		__this->___i_40 = 0;
		goto IL_03d1;
	}

IL_028e:
	{
		__this->___pointIndex_41 = 0;
		goto IL_0374;
	}

IL_029a:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_152 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_153 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_152);
		NullCheck(L_153);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_154 = L_153->___points_3;
		int32_t L_155 = __this->___i_40;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_157);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_158 = L_157->___otherConnectorsPoints_9;
		int32_t L_159 = __this->___pointIndex_41;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_161);
		int32_t L_162 = L_161->___lane_0;
		__this->___reservLane_36 = L_162;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_163 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_164 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_163);
		NullCheck(L_164);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_165 = L_164->___points_3;
		int32_t L_166 = __this->___i_40;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_168);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_169 = L_168->___otherConnectorsPoints_9;
		int32_t L_170 = __this->___pointIndex_41;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		NullCheck(L_172);
		int32_t L_173 = L_172->___connector_1;
		__this->___reservConnector_38 = L_173;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_174 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_175 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_174);
		NullCheck(L_175);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_176 = L_175->___points_3;
		int32_t L_177 = __this->___i_40;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_179);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_180 = L_179->___otherConnectorsPoints_9;
		int32_t L_181 = __this->___pointIndex_41;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		NullCheck(L_183);
		int32_t L_184 = L_183->___pointIndex_2;
		__this->___reservPoint_37 = L_184;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_185 = __this->___lanes_15;
		int32_t L_186 = __this->___reservLane_36;
		NullCheck(L_185);
		int32_t L_187 = L_186;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_188 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		NullCheck(L_188);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_189 = L_188->___connectors_7;
		int32_t L_190 = __this->___reservConnector_38;
		NullCheck(L_189);
		int32_t L_191 = L_190;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_192 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		NullCheck(L_192);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_193 = L_192->___points_3;
		int32_t L_194 = __this->___reservPoint_37;
		NullCheck(L_193);
		int32_t L_195 = L_194;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		int32_t L_197 = ___1_lane;
		NullCheck(L_196);
		L_196->___laneReservationID_3 = L_197;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_198 = __this->___lanes_15;
		int32_t L_199 = __this->___reservLane_36;
		NullCheck(L_198);
		int32_t L_200 = L_199;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_201);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_202 = L_201->___connectors_7;
		int32_t L_203 = __this->___reservConnector_38;
		NullCheck(L_202);
		int32_t L_204 = L_203;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_205 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		NullCheck(L_205);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_206 = L_205->___points_3;
		int32_t L_207 = __this->___reservPoint_37;
		NullCheck(L_206);
		int32_t L_208 = L_207;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_210 = L_209;
		NullCheck(L_210);
		int32_t L_211 = L_210->___connectorReservationCount_4;
		NullCheck(L_210);
		L_210->___connectorReservationCount_4 = ((int32_t)il2cpp_codegen_add(L_211, 1));
		int32_t L_212 = __this->___pointIndex_41;
		__this->___pointIndex_41 = ((int32_t)il2cpp_codegen_add(L_212, 1));
	}

IL_0374:
	{
		int32_t L_213 = __this->___pointIndex_41;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_214 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_215 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_214);
		NullCheck(L_215);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_216 = L_215->___points_3;
		int32_t L_217 = __this->___i_40;
		NullCheck(L_216);
		int32_t L_218 = L_217;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_219);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_220 = L_219->___otherConnectorsPoints_9;
		NullCheck(L_220);
		if ((((int32_t)L_213) < ((int32_t)((int32_t)(((RuntimeArray*)L_220)->max_length)))))
		{
			goto IL_029a;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_221 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_222 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_221);
		NullCheck(L_222);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_223 = L_222->___points_3;
		int32_t L_224 = __this->___i_40;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ___1_lane;
		NullCheck(L_226);
		L_226->___laneReservationID_3 = L_227;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_228 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_229 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_228);
		NullCheck(L_229);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_230 = L_229->___points_3;
		int32_t L_231 = __this->___i_40;
		NullCheck(L_230);
		int32_t L_232 = L_231;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_234 = L_233;
		NullCheck(L_234);
		int32_t L_235 = L_234->___connectorReservationCount_4;
		NullCheck(L_234);
		L_234->___connectorReservationCount_4 = ((int32_t)il2cpp_codegen_add(L_235, 1));
		int32_t L_236 = __this->___i_40;
		__this->___i_40 = ((int32_t)il2cpp_codegen_add(L_236, 1));
	}

IL_03d1:
	{
		int32_t L_237 = __this->___i_40;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_238 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_239 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_238);
		NullCheck(L_239);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_240 = L_239->___points_3;
		NullCheck(L_240);
		if ((((int32_t)L_237) < ((int32_t)((int32_t)(((RuntimeArray*)L_240)->max_length)))))
		{
			goto IL_028e;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_241 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_242 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_241);
		NullCheck(L_242);
		L_242->___isReserved_7 = (bool)1;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_243 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_244 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_243);
		NullCheck(L_244);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_245 = L_244->___reservedByID_9;
		int32_t L_246 = __this->___myID_21;
		NullCheck(L_245);
		bool L_247;
		L_247 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(L_245, L_246, List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		if (L_247)
		{
			goto IL_0457;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_248 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_249 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_248);
		NullCheck(L_249);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_250 = L_249->___reservedByID_9;
		int32_t L_251 = __this->___myID_21;
		NullCheck(L_250);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_250, L_251, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_0457;
	}

IL_0415:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_252 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_253 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_252);
		NullCheck(L_253);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_254 = L_253->___reservedByID_9;
		int32_t L_255 = __this->___myID_21;
		NullCheck(L_254);
		bool L_256;
		L_256 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(L_254, L_255, List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		if (L_256)
		{
			goto IL_0457;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_257 = __this->___lanes_15;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_258 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_259 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_258);
		NullCheck(L_259);
		int32_t L_260 = L_259->___nextLane_4;
		NullCheck(L_257);
		int32_t L_261 = L_260;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_262 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		NullCheck(L_262);
		float L_263 = L_262->___totalOcupation_11;
		if ((!(((float)L_263) > ((float)(0.75f)))))
		{
			goto IL_0445;
		}
	}
	{
		return (bool)0;
	}

IL_0445:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_264 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_265 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_264);
		NullCheck(L_265);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_266 = L_265->___reservedByID_9;
		int32_t L_267 = __this->___myID_21;
		NullCheck(L_266);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_266, L_267, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_0457:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_268 = ___0_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_269 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_268);
		NullCheck(L_269);
		bool L_270 = L_269->___isReserved_7;
		return L_270;
	}
}
// System.Boolean TSNavigation::ReserveNearConnectorPoints(TSPoints&,TSLaneConnector&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSNavigation_ReserveNearConnectorPoints_m7914F3DD2ABED273B54D72D8D12486F83BD3B19C (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** ___0_points, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** ___1_connector, const RuntimeMethod* method) 
{
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_0 = ___1_connector;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_1 = *((TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89**)L_0);
		NullCheck(L_1);
		bool L_2 = L_1->___isReserved_7;
		if (!L_2)
		{
			goto IL_022e;
		}
	}
	{
		__this->___roolback_39 = (bool)0;
		__this->___pointIndex_41 = 0;
		goto IL_012f;
	}

IL_001f:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_3 = ___0_points;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_4 = *((TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5**)L_3);
		NullCheck(L_4);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_5 = L_4->___otherConnectorsPoints_9;
		int32_t L_6 = __this->___pointIndex_41;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = L_8->___lane_0;
		__this->___reservLane_36 = L_9;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_10 = ___0_points;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_11 = *((TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5**)L_10);
		NullCheck(L_11);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_12 = L_11->___otherConnectorsPoints_9;
		int32_t L_13 = __this->___pointIndex_41;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16 = L_15->___connector_1;
		__this->___reservConnector_38 = L_16;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_17 = ___0_points;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_18 = *((TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5**)L_17);
		NullCheck(L_18);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_19 = L_18->___otherConnectorsPoints_9;
		int32_t L_20 = __this->___pointIndex_41;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		int32_t L_23 = L_22->___pointIndex_2;
		__this->___reservPoint_37 = L_23;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_24 = __this->___lanes_15;
		int32_t L_25 = __this->___reservLane_36;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_28 = L_27->___connectors_7;
		int32_t L_29 = __this->___reservConnector_38;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_32 = L_31->___points_3;
		int32_t L_33 = __this->___reservPoint_37;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		int32_t L_36 = L_35->___reservationID_1;
		if (L_36)
		{
			goto IL_00c6;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_37 = __this->___lanes_15;
		int32_t L_38 = __this->___reservLane_36;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_41 = L_40->___connectors_7;
		int32_t L_42 = __this->___reservConnector_38;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_45 = L_44->___points_3;
		int32_t L_46 = __this->___reservPoint_37;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = __this->___myID_21;
		NullCheck(L_48);
		L_48->___reservationID_1 = L_49;
	}

IL_00c6:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_50 = __this->___lanes_15;
		int32_t L_51 = __this->___reservLane_36;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_54 = L_53->___connectors_7;
		int32_t L_55 = __this->___reservConnector_38;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_58 = L_57->___points_3;
		int32_t L_59 = __this->___reservPoint_37;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		int32_t L_62 = L_61->___reservationID_1;
		int32_t L_63 = __this->___myID_21;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0121;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_64 = __this->___lanes_15;
		int32_t L_65 = __this->___reservLane_36;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_68 = L_67->___connectors_7;
		int32_t L_69 = __this->___reservConnector_38;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		bool L_72 = L_71->___connectorReservedByTrafficLight_15;
		if (L_72)
		{
			goto IL_0121;
		}
	}
	{
		__this->___roolback_39 = (bool)1;
		goto IL_0143;
	}

IL_0121:
	{
		int32_t L_73 = __this->___pointIndex_41;
		__this->___pointIndex_41 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_012f:
	{
		int32_t L_74 = __this->___pointIndex_41;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_75 = ___0_points;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_76 = *((TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5**)L_75);
		NullCheck(L_76);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_77 = L_76->___otherConnectorsPoints_9;
		NullCheck(L_77);
		if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_001f;
		}
	}

IL_0143:
	{
		bool L_78 = __this->___roolback_39;
		if (!L_78)
		{
			goto IL_0224;
		}
	}
	{
		__this->___pointIndex_41 = 0;
		goto IL_0210;
	}

IL_015a:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_79 = ___0_points;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_80 = *((TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5**)L_79);
		NullCheck(L_80);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_81 = L_80->___otherConnectorsPoints_9;
		int32_t L_82 = __this->___pointIndex_41;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		int32_t L_85 = L_84->___lane_0;
		__this->___reservLane_36 = L_85;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_86 = ___0_points;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_87 = *((TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5**)L_86);
		NullCheck(L_87);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_88 = L_87->___otherConnectorsPoints_9;
		int32_t L_89 = __this->___pointIndex_41;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		int32_t L_92 = L_91->___connector_1;
		__this->___reservConnector_38 = L_92;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_93 = ___0_points;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_94 = *((TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5**)L_93);
		NullCheck(L_94);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_95 = L_94->___otherConnectorsPoints_9;
		int32_t L_96 = __this->___pointIndex_41;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		int32_t L_99 = L_98->___pointIndex_2;
		__this->___reservPoint_37 = L_99;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_100 = __this->___lanes_15;
		int32_t L_101 = __this->___reservLane_36;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_103);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_104 = L_103->___connectors_7;
		int32_t L_105 = __this->___reservConnector_38;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_108 = L_107->___points_3;
		int32_t L_109 = __this->___reservPoint_37;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		int32_t L_112 = L_111->___reservationID_1;
		int32_t L_113 = __this->___myID_21;
		if ((!(((uint32_t)L_112) == ((uint32_t)L_113))))
		{
			goto IL_0202;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_114 = __this->___lanes_15;
		int32_t L_115 = __this->___reservLane_36;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_118 = L_117->___connectors_7;
		int32_t L_119 = __this->___reservConnector_38;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_122 = L_121->___points_3;
		int32_t L_123 = __this->___reservPoint_37;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_125);
		L_125->___reservationID_1 = 0;
	}

IL_0202:
	{
		int32_t L_126 = __this->___pointIndex_41;
		__this->___pointIndex_41 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_0210:
	{
		int32_t L_127 = __this->___pointIndex_41;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_128 = ___0_points;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_129 = *((TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5**)L_128);
		NullCheck(L_129);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_130 = L_129->___otherConnectorsPoints_9;
		NullCheck(L_130);
		if ((((int32_t)L_127) < ((int32_t)((int32_t)(((RuntimeArray*)L_130)->max_length)))))
		{
			goto IL_015a;
		}
	}

IL_0224:
	{
		bool L_131 = __this->___roolback_39;
		return (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
	}

IL_022e:
	{
		return (bool)0;
	}
}
// System.Void TSNavigation::UnReserveNearConnectorPoints(TSLaneConnector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_UnReserveNearConnectorPoints_mE6E3831EFE33640A927476588DE2919C6F128AC6 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___0_connector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_0 = ___0_connector;
		NullCheck(L_0);
		bool L_1 = L_0->___isReserved_7;
		if (!L_1)
		{
			goto IL_021e;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_2 = ___0_connector;
		NullCheck(L_2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = L_2->___reservedByID_9;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_3, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_021e;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_5 = ___0_connector;
		NullCheck(L_5);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5->___reservedByID_9;
		int32_t L_7 = __this->___myID_21;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(L_6, L_7, List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_021e;
		}
	}
	{
		V_0 = 0;
		goto IL_01ef;
	}

IL_0039:
	{
		V_1 = 0;
		goto IL_017e;
	}

IL_0040:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_9 = ___0_connector;
		NullCheck(L_9);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_10 = L_9->___points_3;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_14 = L_13->___otherConnectorsPoints_9;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		int32_t L_18 = L_17->___lane_0;
		__this->___reservLane_36 = L_18;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_19 = ___0_connector;
		NullCheck(L_19);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_20 = L_19->___points_3;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_24 = L_23->___otherConnectorsPoints_9;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28 = L_27->___connector_1;
		__this->___reservConnector_38 = L_28;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_29 = ___0_connector;
		NullCheck(L_29);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_30 = L_29->___points_3;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_34 = L_33->___otherConnectorsPoints_9;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		int32_t L_38 = L_37->___pointIndex_2;
		__this->___reservPoint_37 = L_38;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_39 = __this->___lanes_15;
		int32_t L_40 = __this->___reservLane_36;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_43 = L_42->___connectors_7;
		int32_t L_44 = __this->___reservConnector_38;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_47 = L_46->___points_3;
		int32_t L_48 = __this->___reservPoint_37;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		int32_t L_51 = L_50->___laneReservationID_3;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_52 = ___0_connector;
		NullCheck(L_52);
		int32_t L_53 = L_52->___previousLane_5;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_53))))
		{
			goto IL_017a;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_54 = __this->___lanes_15;
		int32_t L_55 = __this->___reservLane_36;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_58 = L_57->___connectors_7;
		int32_t L_59 = __this->___reservConnector_38;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_62 = L_61->___points_3;
		int32_t L_63 = __this->___reservPoint_37;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		int32_t L_66 = L_65->___connectorReservationCount_4;
		if ((((int32_t)L_66) >= ((int32_t)2)))
		{
			goto IL_0148;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_67 = __this->___lanes_15;
		int32_t L_68 = __this->___reservLane_36;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_71 = L_70->___connectors_7;
		int32_t L_72 = __this->___reservConnector_38;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_75 = L_74->___points_3;
		int32_t L_76 = __this->___reservPoint_37;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		L_78->___laneReservationID_3 = (-1);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_79 = __this->___lanes_15;
		int32_t L_80 = __this->___reservLane_36;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_83 = L_82->___connectors_7;
		int32_t L_84 = __this->___reservConnector_38;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_87 = L_86->___points_3;
		int32_t L_88 = __this->___reservPoint_37;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		L_90->___connectorReservationCount_4 = 0;
		goto IL_017a;
	}

IL_0148:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_91 = __this->___lanes_15;
		int32_t L_92 = __this->___reservLane_36;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_95 = L_94->___connectors_7;
		int32_t L_96 = __this->___reservConnector_38;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_99 = L_98->___points_3;
		int32_t L_100 = __this->___reservPoint_37;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_103 = L_102;
		NullCheck(L_103);
		int32_t L_104 = L_103->___connectorReservationCount_4;
		NullCheck(L_103);
		L_103->___connectorReservationCount_4 = ((int32_t)il2cpp_codegen_subtract(L_104, 1));
	}

IL_017a:
	{
		int32_t L_105 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_017e:
	{
		int32_t L_106 = V_1;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_107 = ___0_connector;
		NullCheck(L_107);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_108 = L_107->___points_3;
		int32_t L_109 = V_0;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_112 = L_111->___otherConnectorsPoints_9;
		NullCheck(L_112);
		if ((((int32_t)L_106) < ((int32_t)((int32_t)(((RuntimeArray*)L_112)->max_length)))))
		{
			goto IL_0040;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_113 = ___0_connector;
		NullCheck(L_113);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_114 = L_113->___points_3;
		int32_t L_115 = V_0;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		int32_t L_118 = L_117->___laneReservationID_3;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_119 = ___0_connector;
		NullCheck(L_119);
		int32_t L_120 = L_119->___previousLane_5;
		if ((!(((uint32_t)L_118) == ((uint32_t)L_120))))
		{
			goto IL_01eb;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_121 = ___0_connector;
		NullCheck(L_121);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_122 = L_121->___points_3;
		int32_t L_123 = V_0;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_125);
		int32_t L_126 = L_125->___connectorReservationCount_4;
		if ((((int32_t)L_126) >= ((int32_t)2)))
		{
			goto IL_01d6;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_127 = ___0_connector;
		NullCheck(L_127);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_128 = L_127->___points_3;
		int32_t L_129 = V_0;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		NullCheck(L_131);
		L_131->___laneReservationID_3 = (-1);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_132 = ___0_connector;
		NullCheck(L_132);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_133 = L_132->___points_3;
		int32_t L_134 = V_0;
		NullCheck(L_133);
		int32_t L_135 = L_134;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		L_136->___connectorReservationCount_4 = 0;
		goto IL_01eb;
	}

IL_01d6:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_137 = ___0_connector;
		NullCheck(L_137);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_138 = L_137->___points_3;
		int32_t L_139 = V_0;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_142 = L_141;
		NullCheck(L_142);
		int32_t L_143 = L_142->___connectorReservationCount_4;
		NullCheck(L_142);
		L_142->___connectorReservationCount_4 = ((int32_t)il2cpp_codegen_subtract(L_143, 1));
	}

IL_01eb:
	{
		int32_t L_144 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_01ef:
	{
		int32_t L_145 = V_0;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_146 = ___0_connector;
		NullCheck(L_146);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_147 = L_146->___points_3;
		NullCheck(L_147);
		if ((((int32_t)L_145) < ((int32_t)((int32_t)(((RuntimeArray*)L_147)->max_length)))))
		{
			goto IL_0039;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_148 = ___0_connector;
		NullCheck(L_148);
		L_148->___isReserved_7 = (bool)0;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_149 = ___0_connector;
		NullCheck(L_149);
		L_149->___isRequested_8 = (bool)0;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_150 = ___0_connector;
		NullCheck(L_150);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_151 = L_150->___reservedByID_9;
		int32_t L_152 = __this->___myID_21;
		NullCheck(L_151);
		bool L_153;
		L_153 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_151, L_152, List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		return;
	}

IL_021e:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_154 = ___0_connector;
		NullCheck(L_154);
		bool L_155 = L_154->___isReserved_7;
		if (!L_155)
		{
			goto IL_0238;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_156 = ___0_connector;
		NullCheck(L_156);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_157 = L_156->___reservedByID_9;
		int32_t L_158 = __this->___myID_21;
		NullCheck(L_157);
		bool L_159;
		L_159 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_157, L_158, List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
	}

IL_0238:
	{
		return;
	}
}
// System.Void TSNavigation::UnReserveNearConnectorPoints(TSPoints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_UnReserveNearConnectorPoints_mE5C13140D55D034DF741618F8C223CADD091B69F (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___0_points, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_00a1;
	}

IL_0007:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_0 = ___0_points;
		NullCheck(L_0);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_1 = L_0->___otherConnectorsPoints_9;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		int32_t L_5 = L_4->___lane_0;
		__this->___reservLane_36 = L_5;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_6 = ___0_points;
		NullCheck(L_6);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_7 = L_6->___otherConnectorsPoints_9;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = L_10->___connector_1;
		__this->___reservConnector_38 = L_11;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_12 = ___0_points;
		NullCheck(L_12);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_13 = L_12->___otherConnectorsPoints_9;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		TSConnectorOtherPoints_tFA5C9505094CB51674833553626412F48DE14C63* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->___pointIndex_2;
		__this->___reservPoint_37 = L_17;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_18 = __this->___lanes_15;
		int32_t L_19 = __this->___reservLane_36;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_22 = L_21->___connectors_7;
		int32_t L_23 = __this->___reservConnector_38;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_26 = L_25->___points_3;
		int32_t L_27 = __this->___reservPoint_37;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		int32_t L_30 = L_29->___reservationID_1;
		int32_t L_31 = __this->___myID_21;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_009d;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_32 = __this->___lanes_15;
		int32_t L_33 = __this->___reservLane_36;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_36 = L_35->___connectors_7;
		int32_t L_37 = __this->___reservConnector_38;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_40 = L_39->___points_3;
		int32_t L_41 = __this->___reservPoint_37;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		L_43->___reservationID_1 = 0;
	}

IL_009d:
	{
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00a1:
	{
		int32_t L_45 = V_0;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_46 = ___0_points;
		NullCheck(L_46);
		TSConnectorOtherPointsU5BU5D_t5209C62380EC3EA202AA22525CC9551BF0D555EB* L_47 = L_46->___otherConnectorsPoints_9;
		NullCheck(L_47);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TSNavigation::NavigateToWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_NavigateToWaypoints_mDAA636A15EB778962534859B347F637FD9EA216B (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myTransform_31;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_1 = __this->___waypoints_13;
		int32_t L_2 = __this->___currentWaypoint_4;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___point_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_0, L_5, NULL);
		__this->___RelativeWaypointPosition_6 = L_6;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_7 = __this->___reservedPoints_25;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_7, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___myTransform_31;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_10 = __this->___reservedPoints_25;
		NullCheck(L_10);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_11;
		L_11 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_10, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_12 = L_11.___point_1;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___point_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_9, L_13, NULL);
		__this->___RelativeWaypointPositionOnCar_7 = L_14;
	}

IL_0057:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___RelativeWaypointPosition_6);
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_15, NULL);
		__this->___relativeWPosMagnitude_22 = L_16;
		bool L_17 = __this->___overTaking_24;
		if (L_17)
		{
			goto IL_026d;
		}
	}
	{
		TSNavigation_AddNextTrackToPath_m824AAA81735165049B10BD2EB586A65D724D3436(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___RelativeWaypointPosition_6);
		float L_19 = L_18->___z_4;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_20 = __this->___carControllerAI_30;
		NullCheck(L_20);
		float L_21;
		L_21 = TSTrafficAI_get_LookAheadDistance_m398FB1B39A0989E2A6681E8E415459AD171AE1C1_inline(L_20, NULL);
		if ((!(((float)L_19) < ((float)L_21))))
		{
			goto IL_030d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___RelativeWaypointPosition_6);
		float L_23 = L_22->___x_2;
		float L_24;
		L_24 = fabsf(L_23);
		if ((!(((float)L_24) < ((float)(10.0f)))))
		{
			goto IL_030d;
		}
	}
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_25 = __this->___nextTrackPath_11;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_25, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)L_26) <= ((int32_t)1)))
		{
			goto IL_01ad;
		}
	}
	{
		bool L_27 = __this->___isTurning_32;
		if (L_27)
		{
			goto IL_01ad;
		}
	}
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_28 = __this->___nextTrackPath_11;
		NullCheck(L_28);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_29;
		L_29 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_28, 1, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		bool L_30 = L_29.___isConnector_2;
		if (!L_30)
		{
			goto IL_01ad;
		}
	}
	{
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_31 = __this->___waypoints_13;
		NullCheck(L_31);
		int32_t L_32 = __this->___currentWaypoint_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), L_32))) >= ((int32_t)((int32_t)15))))
		{
			goto IL_01ad;
		}
	}
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_33 = __this->___carControllerAI_30;
		NullCheck(L_33);
		OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* L_34 = L_33->___OnTurnLeft_55;
		if (!L_34)
		{
			goto IL_0151;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_35 = __this->___lanes_15;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_36 = __this->___nextTrackPath_11;
		NullCheck(L_36);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_37;
		L_37 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_36, 1, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_38 = L_37.___nextLane_0;
		NullCheck(L_35);
		int32_t L_39 = L_38;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_40 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_41 = L_40->___connectors_7;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_42 = __this->___nextTrackPath_11;
		NullCheck(L_42);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_43;
		L_43 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_42, 1, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_44 = L_43.___nextConnector_1;
		NullCheck(L_41);
		int32_t L_45 = L_44;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_46 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		int32_t L_47 = L_46->___direction_11;
		if (L_47)
		{
			goto IL_0151;
		}
	}
	{
		__this->___isTurning_32 = (bool)1;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_48 = __this->___carControllerAI_30;
		NullCheck(L_48);
		OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* L_49 = L_48->___OnTurnLeft_55;
		NullCheck(L_49);
		OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_inline(L_49, (bool)1, NULL);
	}

IL_0151:
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_50 = __this->___carControllerAI_30;
		NullCheck(L_50);
		OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* L_51 = L_50->___OnTurnRight_54;
		if (!L_51)
		{
			goto IL_01ad;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_52 = __this->___lanes_15;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_53 = __this->___nextTrackPath_11;
		NullCheck(L_53);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_54;
		L_54 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_53, 1, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_55 = L_54.___nextLane_0;
		NullCheck(L_52);
		int32_t L_56 = L_55;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_57 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_58 = L_57->___connectors_7;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_59 = __this->___nextTrackPath_11;
		NullCheck(L_59);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_60;
		L_60 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_59, 1, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_61 = L_60.___nextConnector_1;
		NullCheck(L_58);
		int32_t L_62 = L_61;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		int32_t L_64 = L_63->___direction_11;
		if ((!(((uint32_t)L_64) == ((uint32_t)1))))
		{
			goto IL_01ad;
		}
	}
	{
		__this->___isTurning_32 = (bool)1;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_65 = __this->___carControllerAI_30;
		NullCheck(L_65);
		OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* L_66 = L_65->___OnTurnRight_54;
		NullCheck(L_66);
		OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_inline(L_66, (bool)1, NULL);
	}

IL_01ad:
	{
		int32_t L_67 = __this->___currentWaypoint_4;
		__this->___previousWaypointSteer_8 = L_67;
		int32_t L_68 = __this->___currentWaypoint_4;
		__this->___currentWaypoint_4 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		int32_t L_69 = __this->___currentWaypoint_4;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_70 = __this->___waypoints_13;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_021d;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_71 = __this->___lanes_15;
		int32_t L_72 = __this->___currentLane_9;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_75 = L_74->___connectors_7;
		NullCheck(L_75);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))) <= ((int32_t)0)))
		{
			goto IL_020f;
		}
	}
	{
		bool L_76;
		L_76 = TSNavigation_SwitchTrack_mFE5F632501AF6B8A9D14E95A78523F28054D5C8E(__this, NULL);
		if (!L_76)
		{
			goto IL_01ff;
		}
	}
	{
		__this->___currentWaypoint_4 = 0;
		goto IL_021d;
	}

IL_01ff:
	{
		int32_t L_77 = __this->___currentWaypoint_4;
		__this->___currentWaypoint_4 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		goto IL_021d;
	}

IL_020f:
	{
		int32_t L_78 = __this->___currentWaypoint_4;
		__this->___currentWaypoint_4 = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
	}

IL_021d:
	{
		int32_t L_79 = __this->___previousWaypointSteer_8;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_80 = __this->___waypoints_13;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_0234;
		}
	}
	{
		__this->___previousWaypointSteer_8 = 0;
	}

IL_0234:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = __this->___myTransform_31;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_82 = __this->___waypoints_13;
		int32_t L_83 = __this->___currentWaypoint_4;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85->___point_0;
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_81, L_86, NULL);
		__this->___RelativeWaypointPosition_6 = L_87;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_88 = (&__this->___RelativeWaypointPosition_6);
		float L_89;
		L_89 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_88, NULL);
		__this->___relativeWPosMagnitude_22 = L_89;
		goto IL_030d;
	}

IL_026d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_90 = (&__this->___RelativeWaypointPosition_6);
		float L_91 = L_90->___z_4;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_92 = __this->___carControllerAI_30;
		NullCheck(L_92);
		float L_93;
		L_93 = TSTrafficAI_get_LookAheadDistance_m398FB1B39A0989E2A6681E8E415459AD171AE1C1_inline(L_92, NULL);
		if ((!(((float)L_91) < ((float)L_93))))
		{
			goto IL_030d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_94 = (&__this->___RelativeWaypointPosition_6);
		float L_95 = L_94->___x_2;
		float L_96;
		L_96 = fabsf(L_95);
		if ((!(((float)L_96) < ((float)(10.0f)))))
		{
			goto IL_030d;
		}
	}
	{
		int32_t L_97 = __this->___currentWaypoint_4;
		__this->___previousWaypointSteer_8 = L_97;
		int32_t L_98 = __this->___currentWaypoint_4;
		__this->___currentWaypoint_4 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
		int32_t L_99 = __this->___currentWaypoint_4;
		if ((((int32_t)L_99) > ((int32_t)0)))
		{
			goto IL_02c9;
		}
	}
	{
		__this->___currentWaypoint_4 = 0;
	}

IL_02c9:
	{
		int32_t L_100 = __this->___previousWaypointSteer_8;
		if ((((int32_t)L_100) > ((int32_t)0)))
		{
			goto IL_02d9;
		}
	}
	{
		__this->___previousWaypointSteer_8 = 0;
	}

IL_02d9:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101 = __this->___myTransform_31;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_102 = __this->___waypoints_13;
		int32_t L_103 = __this->___currentWaypoint_4;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105->___point_0;
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_101, L_106, NULL);
		__this->___RelativeWaypointPosition_6 = L_107;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_108 = (&__this->___RelativeWaypointPosition_6);
		float L_109;
		L_109 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_108, NULL);
		__this->___relativeWPosMagnitude_22 = L_109;
	}

IL_030d:
	{
		TSNavigation_CheckLastPoints_m6CAC0C9AC0B7B08FCA4BFB71CD1506B5CE875484(__this, NULL);
		return;
	}
}
// System.Void TSNavigation::CheckLastPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_CheckLastPoints_m6CAC0C9AC0B7B08FCA4BFB71CD1506B5CE875484 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m8440492FE31E5CFBE805A1AE123DC06E64F0397C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___RelativeWaypointPositionOnCar_7);
		float L_1 = L_0->___z_4;
		float L_2;
		L_2 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___RelativeWaypointPositionOnCar_7);
		float L_4;
		L_4 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_3, NULL);
		__this->___distanceForCheck_44 = ((float)il2cpp_codegen_multiply(L_2, L_4));
		float L_5 = __this->___distanceForCheck_44;
		float L_6 = __this->___halfDepthSqr_35;
		if ((!(((float)L_5) < ((float)((-L_6))))))
		{
			goto IL_03a4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___RelativeWaypointPositionOnCar_7);
		float L_8 = L_7->___x_2;
		float L_9;
		L_9 = fabsf(L_8);
		if ((!(((float)L_9) < ((float)(10.0f)))))
		{
			goto IL_03a4;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_10 = __this->___reservedPoints_25;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_10, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			goto IL_03a4;
		}
	}
	{
		__this->___changed_42 = (bool)0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_12 = __this->___reservedPoints_25;
		NullCheck(L_12);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_13;
		L_13 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_12, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_14 = L_13.___connector_0;
		__this->___isConnector_43 = (bool)((((int32_t)((((RuntimeObject*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = __this->___wasTravelingOnConnector_17;
		if (L_15)
		{
			goto IL_00bd;
		}
	}
	{
		float L_16 = __this->___totalDistance_57;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_17 = __this->___reservedPoints_25;
		NullCheck(L_17);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_18;
		L_18 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_17, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_19 = L_18.___point_1;
		NullCheck(L_19);
		float L_20 = L_19->___distanceToNextPoint_5;
		__this->___totalDistance_57 = ((float)il2cpp_codegen_subtract(L_16, L_20));
		bool L_21 = __this->___isConnector_43;
		if (!L_21)
		{
			goto IL_00ee;
		}
	}
	{
		__this->___changed_42 = (bool)1;
		goto IL_00ee;
	}

IL_00bd:
	{
		float L_22 = __this->___totalDistance_57;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_23 = __this->___reservedPoints_25;
		NullCheck(L_23);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_24;
		L_24 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_23, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_25 = L_24.___point_1;
		NullCheck(L_25);
		float L_26 = L_25->___distanceToNextPoint_5;
		__this->___totalDistance_57 = ((float)il2cpp_codegen_subtract(L_22, L_26));
		bool L_27 = __this->___isConnector_43;
		if (L_27)
		{
			goto IL_00ee;
		}
	}
	{
		__this->___changed_42 = (bool)1;
	}

IL_00ee:
	{
		bool L_28 = __this->___changingLane_23;
		if (!L_28)
		{
			goto IL_00fe;
		}
	}
	{
		bool L_29 = __this->___overTaking_24;
		if (!L_29)
		{
			goto IL_010e;
		}
	}

IL_00fe:
	{
		bool L_30 = __this->___changingLane_23;
		if (L_30)
		{
			goto IL_0181;
		}
	}
	{
		bool L_31 = __this->___overTaking_24;
		if (!L_31)
		{
			goto IL_0181;
		}
	}

IL_010e:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_32 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_32, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_012c;
		}
	}
	{
		bool L_34 = __this->___changingLane_23;
		if (!L_34)
		{
			goto IL_0181;
		}
	}
	{
		__this->___changingLane_23 = (bool)0;
		goto IL_0181;
	}

IL_012c:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_35 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_35);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_36;
		L_36 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_35, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_37 = L_36.___point_1;
		NullCheck(L_37);
		int32_t L_38 = L_37->___reservationID_1;
		int32_t L_39 = __this->___myID_21;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_0181;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_40 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_40);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_41;
		L_41 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_40, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_42 = L_41.___point_1;
		NullCheck(L_42);
		L_42->___reservationID_1 = 0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_43 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_43);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_44;
		L_44 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_43, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_45 = L_44.___point_1;
		NullCheck(L_45);
		L_45->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_46 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_46);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_47;
		L_47 = Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6(L_46, Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
	}

IL_0181:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_48 = __this->___reservedPoints_25;
		NullCheck(L_48);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_49;
		L_49 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_48, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_50 = L_49.___point_1;
		NullCheck(L_50);
		int32_t L_51 = L_50->___reservationID_1;
		int32_t L_52 = __this->___myID_21;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_01ca;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_53 = __this->___reservedPoints_25;
		NullCheck(L_53);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_54;
		L_54 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_53, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_55 = L_54.___point_1;
		NullCheck(L_55);
		L_55->___reservationID_1 = 0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_56 = __this->___reservedPoints_25;
		NullCheck(L_56);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_57;
		L_57 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_56, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_58 = L_57.___point_1;
		NullCheck(L_58);
		L_58->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_58->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
	}

IL_01ca:
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_59 = __this->___carControllerAI_30;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_60 = L_59;
		NullCheck(L_60);
		float L_61 = L_60->___segDistance_20;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_62 = __this->___reservedPoints_25;
		NullCheck(L_62);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_63;
		L_63 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_62, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_64 = L_63.___point_1;
		NullCheck(L_64);
		float L_65 = L_64->___distanceToNextPoint_5;
		NullCheck(L_60);
		L_60->___segDistance_20 = ((float)il2cpp_codegen_subtract(L_61, L_65));
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_66 = __this->___reservedPoints_25;
		NullCheck(L_66);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_67;
		L_67 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_66, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_68 = L_67.___point_1;
		TSNavigation_UnReserveNearConnectorPoints_mE5C13140D55D034DF741618F8C223CADD091B69F(__this, L_68, NULL);
		bool L_69 = __this->___changed_42;
		if (!L_69)
		{
			goto IL_0398;
		}
	}
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_70 = __this->___nextTrackPath_11;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_70, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)L_71) >= ((int32_t)1)))
		{
			goto IL_022e;
		}
	}
	{
		bool L_72 = __this->___overTaking_24;
		if (L_72)
		{
			goto IL_022e;
		}
	}
	{
		TSNavigation_AddNextTrackToPath_m824AAA81735165049B10BD2EB586A65D724D3436(__this, NULL);
	}

IL_022e:
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_73 = __this->___nextTrackPath_11;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_73, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_0398;
		}
	}
	{
		bool L_75 = __this->___isConnector_43;
		if (!L_75)
		{
			goto IL_02ed;
		}
	}
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_76 = __this->___nextTrackPath_11;
		NullCheck(L_76);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_77;
		L_77 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_76, 0, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_78 = L_77.___nextLane_0;
		__this->___lastLane_20 = L_78;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_79 = __this->___reservedPoints_25;
		NullCheck(L_79);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_80;
		L_80 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_79, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_81 = L_80.___connector_0;
		__this->___lastSelectedConnector_19 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSelectedConnector_19), (void*)L_81);
		__this->___wasTravelingOnConnector_17 = (bool)1;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_82 = __this->___lanes_15;
		int32_t L_83 = __this->___lastLane_20;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_86 = L_85;
		NullCheck(L_86);
		float L_87 = L_86->___totalOcupation_11;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_88 = __this->___carControllerAI_30;
		NullCheck(L_88);
		float L_89 = L_88->___carDepth_11;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_90 = __this->___lanes_15;
		int32_t L_91 = __this->___lastLane_20;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		float L_94 = L_93->___totalDistance_12;
		NullCheck(L_86);
		L_86->___totalOcupation_11 = ((float)il2cpp_codegen_subtract(L_87, ((float)(((float)il2cpp_codegen_add(L_89, (3.0f)))/L_94))));
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_95 = __this->___lanes_15;
		int32_t L_96 = __this->___lastLane_20;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		float L_99 = L_98->___totalOcupation_11;
		if ((!(((float)L_99) < ((float)(0.0f)))))
		{
			goto IL_0345;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_100 = __this->___lanes_15;
		int32_t L_101 = __this->___lastLane_20;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_103);
		L_103->___totalOcupation_11 = (0.0f);
		goto IL_0345;
	}

IL_02ed:
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_104 = __this->___carControllerAI_30;
		NullCheck(L_104);
		OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* L_105 = L_104->___OnTurnLeft_55;
		if (!L_105)
		{
			goto IL_0312;
		}
	}
	{
		__this->___isTurning_32 = (bool)0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_106 = __this->___carControllerAI_30;
		NullCheck(L_106);
		OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* L_107 = L_106->___OnTurnLeft_55;
		NullCheck(L_107);
		OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_inline(L_107, (bool)0, NULL);
	}

IL_0312:
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_108 = __this->___carControllerAI_30;
		NullCheck(L_108);
		OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* L_109 = L_108->___OnTurnRight_54;
		if (!L_109)
		{
			goto IL_0337;
		}
	}
	{
		__this->___isTurning_32 = (bool)0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_110 = __this->___carControllerAI_30;
		NullCheck(L_110);
		OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* L_111 = L_110->___OnTurnRight_54;
		NullCheck(L_111);
		OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_inline(L_111, (bool)0, NULL);
	}

IL_0337:
	{
		__this->___wasTravelingOnConnector_17 = (bool)0;
		__this->___lastSelectedConnector_19 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSelectedConnector_19), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
	}

IL_0345:
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_112 = __this->___carControllerAI_30;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_113 = L_112;
		NullCheck(L_113);
		int32_t L_114 = L_113->___nextPathIndex_21;
		NullCheck(L_113);
		L_113->___nextPathIndex_21 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_115 = __this->___carControllerAI_30;
		NullCheck(L_115);
		int32_t L_116 = L_115->___nextPathIndex_21;
		if ((((int32_t)L_116) >= ((int32_t)0)))
		{
			goto IL_0372;
		}
	}
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_117 = __this->___carControllerAI_30;
		NullCheck(L_117);
		L_117->___nextPathIndex_21 = 0;
	}

IL_0372:
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_118 = __this->___nextTrackPath_11;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_119 = __this->___nextTrackPath_11;
		NullCheck(L_119);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_120;
		L_120 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_119, 0, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		NullCheck(L_118);
		bool L_121;
		L_121 = List_1_Remove_m8440492FE31E5CFBE805A1AE123DC06E64F0397C(L_118, L_120, List_1_Remove_m8440492FE31E5CFBE805A1AE123DC06E64F0397C_RuntimeMethod_var);
		int32_t L_122 = __this->___nextTrackIndex_26;
		__this->___nextTrackIndex_26 = ((int32_t)il2cpp_codegen_subtract(L_122, 1));
	}

IL_0398:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_123 = __this->___reservedPoints_25;
		NullCheck(L_123);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_124;
		L_124 = Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6(L_123, Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
	}

IL_03a4:
	{
		return;
	}
}
// System.Void TSNavigation::LaneChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_LaneChange_m0BA2A7CA95DA85A8B2295FB958094D115A037D8C (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, bool ___0_left, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B5_0 = NULL;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B6_1 = NULL;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B8_0 = NULL;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B9_1 = NULL;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B37_0 = NULL;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B36_0 = NULL;
	int32_t G_B38_0 = 0;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B38_1 = NULL;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B41_0 = NULL;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B40_0 = NULL;
	int32_t G_B42_0 = 0;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B42_1 = NULL;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B45_0 = NULL;
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* G_B45_1 = NULL;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B44_0 = NULL;
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* G_B44_1 = NULL;
	int32_t G_B46_0 = 0;
	TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* G_B46_1 = NULL;
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* G_B46_2 = NULL;
	{
		bool L_0 = __this->___changingLane_23;
		if (L_0)
		{
			goto IL_08a2;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_1 = __this->___reservedPoints_25;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_1, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_08a2;
		}
	}
	{
		__this->___newCurrentWaypointOnCar_45 = 0;
		__this->___newLane_46 = 0;
		int32_t L_3 = __this->___currentWaypointOnCar_5;
		__this->___initialIndex_47 = L_3;
		bool L_4 = __this->___overTaking_24;
		if (!L_4)
		{
			goto IL_00af;
		}
	}
	{
		bool L_5 = __this->___overtakingFromLeft_34;
		___0_left = L_5;
		bool L_6 = ___0_left;
		G_B4_0 = __this;
		if (L_6)
		{
			G_B5_0 = __this;
			goto IL_0061;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_7 = __this->___reservedPoints_25;
		NullCheck(L_7);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_8;
		L_8 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_7, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_9 = L_8.___point_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___leftParalelLaneIndex_7;
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		goto IL_0076;
	}

IL_0061:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_11 = __this->___reservedPoints_25;
		NullCheck(L_11);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_12;
		L_12 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_11, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_13 = L_12.___point_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___rightParalelLaneIndex_6;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_0076:
	{
		NullCheck(G_B6_1);
		G_B6_1->___newCurrentWaypointOnCar_45 = G_B6_0;
		bool L_15 = ___0_left;
		G_B7_0 = __this;
		if (L_15)
		{
			G_B8_0 = __this;
			goto IL_0093;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_16 = __this->___lanes_15;
		int32_t L_17 = __this->___currentLane_9;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		int32_t L_20 = L_19->___laneLinkLeft_9;
		G_B9_0 = L_20;
		G_B9_1 = G_B7_0;
		goto IL_00a5;
	}

IL_0093:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_21 = __this->___lanes_15;
		int32_t L_22 = __this->___currentLane_9;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		int32_t L_25 = L_24->___laneLinkRight_8;
		G_B9_0 = L_25;
		G_B9_1 = G_B8_0;
	}

IL_00a5:
	{
		NullCheck(G_B9_1);
		G_B9_1->___newLane_46 = G_B9_0;
		goto IL_0191;
	}

IL_00af:
	{
		__this->___point_48 = 0;
		__this->___lane_49 = 0;
		__this->___found_50 = (bool)0;
		bool L_26 = ___0_left;
		if (!L_26)
		{
			goto IL_011e;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_27 = __this->___reservedPoints_25;
		NullCheck(L_27);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_28;
		L_28 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_27, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_29 = L_28.___point_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->___leftParalelLaneIndex_7;
		if ((((int32_t)L_30) == ((int32_t)(-1))))
		{
			goto IL_0170;
		}
	}
	{
		__this->___found_50 = (bool)1;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_31 = __this->___reservedPoints_25;
		NullCheck(L_31);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_32;
		L_32 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_31, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_33 = L_32.___point_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->___leftParalelLaneIndex_7;
		__this->___point_48 = L_34;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_35 = __this->___lanes_15;
		int32_t L_36 = __this->___currentLane_9;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		int32_t L_39 = L_38->___laneLinkLeft_9;
		__this->___lane_49 = L_39;
		goto IL_0170;
	}

IL_011e:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_40 = __this->___reservedPoints_25;
		NullCheck(L_40);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_41;
		L_41 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_40, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_42 = L_41.___point_1;
		NullCheck(L_42);
		int32_t L_43 = L_42->___rightParalelLaneIndex_6;
		if ((((int32_t)L_43) == ((int32_t)(-1))))
		{
			goto IL_0170;
		}
	}
	{
		__this->___found_50 = (bool)1;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_44 = __this->___reservedPoints_25;
		NullCheck(L_44);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_45;
		L_45 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_44, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_46 = L_45.___point_1;
		NullCheck(L_46);
		int32_t L_47 = L_46->___rightParalelLaneIndex_6;
		__this->___point_48 = L_47;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_48 = __this->___lanes_15;
		int32_t L_49 = __this->___currentLane_9;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		int32_t L_52 = L_51->___laneLinkRight_8;
		__this->___lane_49 = L_52;
	}

IL_0170:
	{
		bool L_53 = __this->___found_50;
		if (L_53)
		{
			goto IL_0179;
		}
	}
	{
		return;
	}

IL_0179:
	{
		int32_t L_54 = __this->___point_48;
		__this->___newCurrentWaypointOnCar_45 = L_54;
		int32_t L_55 = __this->___lane_49;
		__this->___newLane_46 = L_55;
	}

IL_0191:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_56 = __this->___lanes_15;
		int32_t L_57 = __this->___newLane_46;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		int32_t L_60 = L_59->___vehicleType_4;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_61 = __this->___carControllerAI_30;
		NullCheck(L_61);
		int32_t L_62 = L_61->___myVehicleType_14;
		if ((((int32_t)((int32_t)((int32_t)L_60&((int32_t)(1<<((int32_t)((int32_t)L_62&((int32_t)31)))))))) > ((int32_t)0)))
		{
			goto IL_01b8;
		}
	}
	{
		return;
	}

IL_01b8:
	{
		__this->___totalDistance_57 = (0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = __this->___myTransform_31;
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_65 = __this->___reservedPoints_25;
		NullCheck(L_65);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_66;
		L_66 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_65, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_67 = L_66.___point_1;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = L_67->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_64, L_68, NULL);
		V_0 = L_69;
		float L_70;
		L_70 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		__this->___segDistance_51 = L_70;
		__this->___counter_52 = 0;
		__this->___reservedCLIndex_53 = 0;
		goto IL_04c7;
	}

IL_0209:
	{
		int32_t L_71 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_72 = __this->___counter_52;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_73 = __this->___lanes_15;
		int32_t L_74 = __this->___newLane_46;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_77 = L_76->___points_6;
		NullCheck(L_77);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_71, L_72))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_02dd;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_78 = __this->___lanes_15;
		int32_t L_79 = __this->___newLane_46;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_82 = L_81->___points_6;
		int32_t L_83 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_84 = __this->___counter_52;
		NullCheck(L_82);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_83, L_84));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_86 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		int32_t L_87 = L_86->___reservationID_1;
		if (!L_87)
		{
			goto IL_02ec;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_88 = __this->___lanes_15;
		int32_t L_89 = __this->___newLane_46;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_92 = L_91->___points_6;
		int32_t L_93 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_94 = __this->___counter_52;
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_93, L_94));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_96);
		int32_t L_97 = L_96->___reservationID_1;
		int32_t L_98 = __this->___myID_21;
		if ((((int32_t)L_97) == ((int32_t)L_98)))
		{
			goto IL_02ec;
		}
	}
	{
		goto IL_02dd;
	}

IL_0288:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_99 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_99);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_100;
		L_100 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_99, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_101 = L_100.___point_1;
		NullCheck(L_101);
		int32_t L_102 = L_101->___reservationID_1;
		int32_t L_103 = __this->___myID_21;
		if ((!(((uint32_t)L_102) == ((uint32_t)L_103))))
		{
			goto IL_02d1;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_104 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_104);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_105;
		L_105 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_104, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_106 = L_105.___point_1;
		NullCheck(L_106);
		L_106->___reservationID_1 = 0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_107 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_107);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_108;
		L_108 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_107, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_109 = L_108.___point_1;
		NullCheck(L_109);
		L_109->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_109->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
	}

IL_02d1:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_110 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_110);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_111;
		L_111 = Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6(L_110, Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
	}

IL_02dd:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_112 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_112);
		int32_t L_113;
		L_113 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_112, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_113) > ((int32_t)0)))
		{
			goto IL_0288;
		}
	}
	{
		return;
	}

IL_02ec:
	{
		float L_114 = __this->___segDistance_51;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_115 = __this->___carControllerAI_30;
		NullCheck(L_115);
		float L_116 = L_115->___carDepth_11;
		if ((!(((float)L_114) < ((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_116, (2.0f))), (3.0f)))))))
		{
			goto IL_0487;
		}
	}
	{
		bool L_117 = __this->___overTaking_24;
		if (!L_117)
		{
			goto IL_0326;
		}
	}
	{
		int32_t L_118 = __this->___initialIndex_47;
		int32_t L_119 = __this->___counter_52;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_118, L_119))) >= ((int32_t)0)))
		{
			goto IL_0357;
		}
	}

IL_0326:
	{
		bool L_120 = __this->___overTaking_24;
		if (L_120)
		{
			goto IL_0487;
		}
	}
	{
		int32_t L_121 = __this->___initialIndex_47;
		int32_t L_122 = __this->___counter_52;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_123 = __this->___lanes_15;
		int32_t L_124 = __this->___currentLane_9;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_126);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_127 = L_126->___points_6;
		NullCheck(L_127);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_121, L_122))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_127)->max_length)))))
		{
			goto IL_0487;
		}
	}

IL_0357:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_128 = __this->___lanes_15;
		int32_t L_129 = __this->___currentLane_9;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		NullCheck(L_131);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_132 = L_131->___points_6;
		bool L_133 = __this->___overTaking_24;
		G_B36_0 = L_132;
		if (L_133)
		{
			G_B37_0 = L_132;
			goto IL_0380;
		}
	}
	{
		int32_t L_134 = __this->___initialIndex_47;
		int32_t L_135 = __this->___counter_52;
		G_B38_0 = ((int32_t)il2cpp_codegen_add(L_134, L_135));
		G_B38_1 = G_B36_0;
		goto IL_038d;
	}

IL_0380:
	{
		int32_t L_136 = __this->___initialIndex_47;
		int32_t L_137 = __this->___counter_52;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract(L_136, L_137));
		G_B38_1 = G_B37_0;
	}

IL_038d:
	{
		NullCheck(G_B38_1);
		int32_t L_138 = G_B38_0;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_139 = (G_B38_1)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		int32_t L_140 = L_139->___reservationID_1;
		if (!L_140)
		{
			goto IL_03dc;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_141 = __this->___lanes_15;
		int32_t L_142 = __this->___currentLane_9;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_145 = L_144->___points_6;
		bool L_146 = __this->___overTaking_24;
		G_B40_0 = L_145;
		if (L_146)
		{
			G_B41_0 = L_145;
			goto IL_03be;
		}
	}
	{
		int32_t L_147 = __this->___initialIndex_47;
		int32_t L_148 = __this->___counter_52;
		G_B42_0 = ((int32_t)il2cpp_codegen_add(L_147, L_148));
		G_B42_1 = G_B40_0;
		goto IL_03cb;
	}

IL_03be:
	{
		int32_t L_149 = __this->___initialIndex_47;
		int32_t L_150 = __this->___counter_52;
		G_B42_0 = ((int32_t)il2cpp_codegen_subtract(L_149, L_150));
		G_B42_1 = G_B41_0;
	}

IL_03cb:
	{
		NullCheck(G_B42_1);
		int32_t L_151 = G_B42_0;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_152 = (G_B42_1)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_152);
		int32_t L_153 = L_152->___reservationID_1;
		int32_t L_154 = __this->___myID_21;
		if ((!(((uint32_t)L_153) == ((uint32_t)L_154))))
		{
			goto IL_0487;
		}
	}

IL_03dc:
	{
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_155 = (&__this->___newPoint1_54);
		L_155->___connector_0 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_155->___connector_0), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_156 = (&__this->___newPoint1_54);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_157 = __this->___lanes_15;
		int32_t L_158 = __this->___currentLane_9;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_160);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_161 = L_160->___points_6;
		bool L_162 = __this->___overTaking_24;
		G_B44_0 = L_161;
		G_B44_1 = L_156;
		if (L_162)
		{
			G_B45_0 = L_161;
			G_B45_1 = L_156;
			goto IL_0417;
		}
	}
	{
		int32_t L_163 = __this->___initialIndex_47;
		int32_t L_164 = __this->___counter_52;
		G_B46_0 = ((int32_t)il2cpp_codegen_add(L_163, L_164));
		G_B46_1 = G_B44_0;
		G_B46_2 = G_B44_1;
		goto IL_0424;
	}

IL_0417:
	{
		int32_t L_165 = __this->___initialIndex_47;
		int32_t L_166 = __this->___counter_52;
		G_B46_0 = ((int32_t)il2cpp_codegen_subtract(L_165, L_166));
		G_B46_1 = G_B45_0;
		G_B46_2 = G_B45_1;
	}

IL_0424:
	{
		NullCheck(G_B46_1);
		int32_t L_167 = G_B46_0;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_168 = (G_B46_1)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		G_B46_2->___point_1 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&G_B46_2->___point_1), (void*)L_168);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_169 = (&__this->___newPoint1_54);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_170 = L_169->___point_1;
		NullCheck(L_170);
		int32_t L_171 = L_170->___reservationID_1;
		if (L_171)
		{
			goto IL_0468;
		}
	}
	{
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_172 = (&__this->___newPoint1_54);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_173 = L_172->___point_1;
		int32_t L_174 = __this->___myID_21;
		NullCheck(L_173);
		L_173->___reservationID_1 = L_174;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_175 = (&__this->___newPoint1_54);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_176 = L_175->___point_1;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_177 = __this->___carControllerAI_30;
		NullCheck(L_176);
		L_176->___carwhoReserved_2 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(&L_176->___carwhoReserved_2), (void*)L_177);
	}

IL_0468:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_178 = __this->___reservedChangeLanePoints_27;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_179 = __this->___newPoint1_54;
		NullCheck(L_178);
		Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3(L_178, L_179, Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		int32_t L_180 = __this->___reservedCLIndex_53;
		__this->___reservedCLIndex_53 = ((int32_t)il2cpp_codegen_add(L_180, 1));
	}

IL_0487:
	{
		float L_181 = __this->___segDistance_51;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_182 = __this->___lanes_15;
		int32_t L_183 = __this->___newLane_46;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		NullCheck(L_185);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_186 = L_185->___points_6;
		int32_t L_187 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_188 = __this->___counter_52;
		NullCheck(L_186);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add(L_187, L_188));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_190 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		NullCheck(L_190);
		float L_191 = L_190->___distanceToNextPoint_5;
		__this->___segDistance_51 = ((float)il2cpp_codegen_add(L_181, L_191));
		int32_t L_192 = __this->___counter_52;
		__this->___counter_52 = ((int32_t)il2cpp_codegen_add(L_192, 1));
	}

IL_04c7:
	{
		float L_193 = __this->___segDistance_51;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_194 = __this->___carControllerAI_30;
		NullCheck(L_194);
		float L_195 = L_194->___maxLockaheadDistanceFullStop_6;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_196 = __this->___carControllerAI_30;
		NullCheck(L_196);
		float L_197 = L_196->___carDepth_11;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_198 = __this->___carControllerAI_30;
		NullCheck(L_198);
		float L_199;
		L_199 = TSTrafficAI_get_LookAheadDistance_m398FB1B39A0989E2A6681E8E415459AD171AE1C1_inline(L_198, NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_200 = __this->___carControllerAI_30;
		NullCheck(L_200);
		float L_201 = L_200->___carDepth_11;
		float L_202;
		L_202 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_195, ((float)il2cpp_codegen_multiply(L_197, (2.0f))))), (3.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_199, ((float)il2cpp_codegen_multiply(L_201, (2.0f))))), (3.0f))), ((std::numeric_limits<float>::max)()), NULL);
		if ((((float)L_193) < ((float)L_202)))
		{
			goto IL_0209;
		}
	}
	{
		goto IL_0579;
	}

IL_0524:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_203 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_203);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_204;
		L_204 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_203, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_205 = L_204.___point_1;
		NullCheck(L_205);
		int32_t L_206 = L_205->___reservationID_1;
		int32_t L_207 = __this->___myID_21;
		if ((!(((uint32_t)L_206) == ((uint32_t)L_207))))
		{
			goto IL_056d;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_208 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_208);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_209;
		L_209 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_208, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_210 = L_209.___point_1;
		NullCheck(L_210);
		L_210->___reservationID_1 = 0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_211 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_211);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_212;
		L_212 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_211, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_213 = L_212.___point_1;
		NullCheck(L_213);
		L_213->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_213->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
	}

IL_056d:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_214 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_214);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_215;
		L_215 = Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6(L_214, Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
	}

IL_0579:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_216 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_216);
		int32_t L_217;
		L_217 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_216, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		int32_t L_218 = __this->___reservedCLIndex_53;
		if ((((int32_t)L_217) > ((int32_t)L_218)))
		{
			goto IL_0524;
		}
	}
	{
		TSNavigation_UnreserveAll_m311FEA8A59F1758DB8FBAC7621655906E5271749(__this, (bool)0, NULL);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_219 = __this->___reservedPoints_25;
		NullCheck(L_219);
		Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56(L_219, Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56_RuntimeMethod_var);
		__this->___i_40 = 0;
		goto IL_0656;
	}

IL_05aa:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_220 = __this->___lanes_15;
		int32_t L_221 = __this->___newLane_46;
		NullCheck(L_220);
		int32_t L_222 = L_221;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		NullCheck(L_223);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_224 = L_223->___points_6;
		int32_t L_225 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_226 = __this->___i_40;
		NullCheck(L_224);
		int32_t L_227 = ((int32_t)il2cpp_codegen_add(L_225, L_226));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_228 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		int32_t L_229 = __this->___myID_21;
		NullCheck(L_228);
		L_228->___reservationID_1 = L_229;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_230 = __this->___lanes_15;
		int32_t L_231 = __this->___newLane_46;
		NullCheck(L_230);
		int32_t L_232 = L_231;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		NullCheck(L_233);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_234 = L_233->___points_6;
		int32_t L_235 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_236 = __this->___i_40;
		NullCheck(L_234);
		int32_t L_237 = ((int32_t)il2cpp_codegen_add(L_235, L_236));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_238 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_239 = __this->___carControllerAI_30;
		NullCheck(L_238);
		L_238->___carwhoReserved_2 = L_239;
		Il2CppCodeGenWriteBarrier((void**)(&L_238->___carwhoReserved_2), (void*)L_239);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_240 = (&__this->___newPoint_55);
		L_240->___connector_0 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_240->___connector_0), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_241 = (&__this->___newPoint_55);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_242 = __this->___lanes_15;
		int32_t L_243 = __this->___newLane_46;
		NullCheck(L_242);
		int32_t L_244 = L_243;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_245 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		NullCheck(L_245);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_246 = L_245->___points_6;
		int32_t L_247 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_248 = __this->___i_40;
		NullCheck(L_246);
		int32_t L_249 = ((int32_t)il2cpp_codegen_add(L_247, L_248));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_250 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		L_241->___point_1 = L_250;
		Il2CppCodeGenWriteBarrier((void**)(&L_241->___point_1), (void*)L_250);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_251 = __this->___reservedPoints_25;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_252 = __this->___newPoint_55;
		NullCheck(L_251);
		Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3(L_251, L_252, Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		int32_t L_253 = __this->___i_40;
		__this->___i_40 = ((int32_t)il2cpp_codegen_add(L_253, 1));
	}

IL_0656:
	{
		int32_t L_254 = __this->___i_40;
		int32_t L_255 = __this->___counter_52;
		if ((((int32_t)L_254) < ((int32_t)L_255)))
		{
			goto IL_05aa;
		}
	}
	{
		int32_t L_256 = __this->___counter_52;
		if (L_256)
		{
			goto IL_06fb;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_257 = __this->___lanes_15;
		int32_t L_258 = __this->___newLane_46;
		NullCheck(L_257);
		int32_t L_259 = L_258;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		NullCheck(L_260);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_261 = L_260->___points_6;
		int32_t L_262 = __this->___newCurrentWaypointOnCar_45;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_264 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		int32_t L_265 = __this->___myID_21;
		NullCheck(L_264);
		L_264->___reservationID_1 = L_265;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_266 = __this->___lanes_15;
		int32_t L_267 = __this->___newLane_46;
		NullCheck(L_266);
		int32_t L_268 = L_267;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_269 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		NullCheck(L_269);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_270 = L_269->___points_6;
		int32_t L_271 = __this->___newCurrentWaypointOnCar_45;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_274 = __this->___carControllerAI_30;
		NullCheck(L_273);
		L_273->___carwhoReserved_2 = L_274;
		Il2CppCodeGenWriteBarrier((void**)(&L_273->___carwhoReserved_2), (void*)L_274);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_275 = (&__this->___newPoint_55);
		L_275->___connector_0 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_275->___connector_0), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_276 = (&__this->___newPoint_55);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_277 = __this->___lanes_15;
		int32_t L_278 = __this->___newLane_46;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		NullCheck(L_280);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_281 = L_280->___points_6;
		int32_t L_282 = __this->___newCurrentWaypointOnCar_45;
		NullCheck(L_281);
		int32_t L_283 = L_282;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		L_276->___point_1 = L_284;
		Il2CppCodeGenWriteBarrier((void**)(&L_276->___point_1), (void*)L_284);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_285 = __this->___reservedPoints_25;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_286 = __this->___newPoint_55;
		NullCheck(L_285);
		Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3(L_285, L_286, Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
	}

IL_06fb:
	{
		__this->___changingLane_23 = (bool)1;
		int32_t L_287 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_288 = __this->___counter_52;
		__this->___currentWaypoint_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_287, L_288)), 1));
		int32_t L_289 = __this->___newLane_46;
		__this->___currentLane_9 = L_289;
		bool L_290 = __this->___overTaking_24;
		if (!L_290)
		{
			goto IL_0742;
		}
	}
	{
		__this->___overTaking_24 = (bool)0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_291 = __this->___carControllerAI_30;
		float L_292;
		L_292 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		NullCheck(L_291);
		L_291->___changeLaneTime_23 = L_292;
	}

IL_0742:
	{
		int32_t L_293 = __this->___newCurrentWaypointOnCar_45;
		__this->___currentWaypointOnCar_5 = L_293;
		int32_t L_294 = __this->___currentWaypoint_4;
		__this->___previousWaypointSteer_8 = L_294;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_295 = __this->___carControllerAI_30;
		int32_t L_296 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_297 = __this->___counter_52;
		NullCheck(L_295);
		L_295->___previousWaypointCurve_19 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_296, L_297)), 1));
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_298 = __this->___lanes_15;
		int32_t L_299 = __this->___newLane_46;
		NullCheck(L_298);
		int32_t L_300 = L_299;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_301 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		NullCheck(L_301);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_302 = L_301->___points_6;
		__this->___waypoints_13 = L_302;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_13), (void*)L_302);
		__this->___wasTravelingOnConnector_17 = (bool)0;
		__this->___travelingOnConector_16 = (bool)0;
		__this->___lastLane_20 = 0;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_303 = __this->___waypoints_13;
		__this->___lastWaypoints_14 = L_303;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastWaypoints_14), (void*)L_303);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_304 = __this->___myTransform_31;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_305 = __this->___reservedPoints_25;
		NullCheck(L_305);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_306;
		L_306 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_305, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_307 = L_306.___point_1;
		NullCheck(L_307);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_308 = L_307->___point_0;
		NullCheck(L_304);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_309;
		L_309 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_304, L_308, NULL);
		__this->___RelativeWaypointPositionOnCar_7 = L_309;
		__this->___relativeWPosMagnitude_22 = (0.0f);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_310 = __this->___carControllerAI_30;
		NullCheck(L_310);
		L_310->___nextPathIndex_21 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_311 = __this->___carControllerAI_30;
		float L_312 = __this->___segDistance_51;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_313 = __this->___carControllerAI_30;
		NullCheck(L_313);
		float L_314 = L_313->___carDepth_11;
		NullCheck(L_311);
		L_311->___segDistance_20 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_312, L_314)), (3.0f)));
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_315 = __this->___carControllerAI_30;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_316 = __this->___lastWaypoints_14;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_317 = __this->___carControllerAI_30;
		NullCheck(L_317);
		int32_t L_318 = L_317->___previousWaypointCurve_19;
		NullCheck(L_316);
		int32_t L_319 = L_318;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_320 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		NullCheck(L_315);
		L_315->___currenPoint_16 = L_320;
		Il2CppCodeGenWriteBarrier((void**)(&L_315->___currenPoint_16), (void*)L_320);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_321 = __this->___carControllerAI_30;
		NullCheck(L_321);
		L_321->___currentConnector_17 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_321->___currentConnector_17), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_322 = __this->___carControllerAI_30;
		NullCheck(L_322);
		L_322->___lane_22 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_323 = __this->___carControllerAI_30;
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_324 = (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*)il2cpp_codegen_object_new(List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var);
		NullCheck(L_324);
		List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751(L_324, List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var);
		NullCheck(L_323);
		L_323->___brakeSpeeds_15 = L_324;
		Il2CppCodeGenWriteBarrier((void**)(&L_323->___brakeSpeeds_15), (void*)L_324);
		__this->___selectedConnector_18 = 0;
		__this->___lastSelectedConnector_19 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSelectedConnector_19), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		__this->___starting_29 = (bool)1;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_325 = __this->___lanes_15;
		int32_t L_326 = __this->___newLane_46;
		NullCheck(L_325);
		int32_t L_327 = L_326;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_328 = (L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		NullCheck(L_328);
		float L_329 = L_328->___maxSpeed_5;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_330 = __this->___lanes_15;
		int32_t L_331 = __this->___newLane_46;
		NullCheck(L_330);
		int32_t L_332 = L_331;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		NullCheck(L_333);
		float L_334 = L_333->___maxSpeed_5;
		float L_335;
		L_335 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(L_329/(2.0f))), L_334, NULL);
		__this->___currentMaxSpeed_12 = L_335;
		TSNavigation_AddNextTrackToPath_m824AAA81735165049B10BD2EB586A65D724D3436(__this, NULL);
	}

IL_08a2:
	{
		return;
	}
}
// System.Void TSNavigation::OverTaking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_OverTaking_m82C3F3C33C165063DAF392C08D781B81CB6F5988 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, bool ___0_left, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B4_0 = NULL;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B5_1 = NULL;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B7_0 = NULL;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B8_1 = NULL;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B14_0 = NULL;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* G_B15_1 = NULL;
	{
		bool L_0 = __this->___overTaking_24;
		if (L_0)
		{
			goto IL_06fe;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_1 = __this->___reservedPoints_25;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_1, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_06fe;
		}
	}
	{
		bool L_3 = ___0_left;
		G_B3_0 = __this;
		if (L_3)
		{
			G_B4_0 = __this;
			goto IL_0037;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_4 = __this->___reservedPoints_25;
		NullCheck(L_4);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_5;
		L_5 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_4, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_6 = L_5.___point_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___rightParalelLaneIndex_6;
		G_B5_0 = L_7;
		G_B5_1 = G_B3_0;
		goto IL_004c;
	}

IL_0037:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_8 = __this->___reservedPoints_25;
		NullCheck(L_8);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_9;
		L_9 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_8, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_10 = L_9.___point_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___leftParalelLaneIndex_7;
		G_B5_0 = L_11;
		G_B5_1 = G_B4_0;
	}

IL_004c:
	{
		NullCheck(G_B5_1);
		G_B5_1->___newCurrentWaypointOnCar_45 = G_B5_0;
		bool L_12 = ___0_left;
		G_B6_0 = __this;
		if (L_12)
		{
			G_B7_0 = __this;
			goto IL_0069;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_13 = __this->___lanes_15;
		int32_t L_14 = __this->___currentLane_9;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->___laneLinkRight_8;
		G_B8_0 = L_17;
		G_B8_1 = G_B6_0;
		goto IL_007b;
	}

IL_0069:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_18 = __this->___lanes_15;
		int32_t L_19 = __this->___currentLane_9;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		int32_t L_22 = L_21->___laneLinkLeft_9;
		G_B8_0 = L_22;
		G_B8_1 = G_B7_0;
	}

IL_007b:
	{
		NullCheck(G_B8_1);
		G_B8_1->___newLane_46 = G_B8_0;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_23 = __this->___lanes_15;
		int32_t L_24 = __this->___newLane_46;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		int32_t L_27 = L_26->___vehicleType_4;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_28 = __this->___carControllerAI_30;
		NullCheck(L_28);
		int32_t L_29 = L_28->___myVehicleType_14;
		if ((((int32_t)((int32_t)((int32_t)L_27&((int32_t)(1<<((int32_t)((int32_t)L_29&((int32_t)31)))))))) > ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		return;
	}

IL_00a7:
	{
		int32_t L_30 = __this->___newCurrentWaypointOnCar_45;
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)25))))
		{
			goto IL_00b2;
		}
	}
	{
		return;
	}

IL_00b2:
	{
		__this->___totalDistance_57 = (0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___myTransform_31;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_33 = __this->___reservedPoints_25;
		NullCheck(L_33);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_34;
		L_34 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_33, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_35 = L_34.___point_1;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = L_35->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_32, L_36, NULL);
		V_0 = L_37;
		float L_38;
		L_38 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		__this->___segDistance_51 = L_38;
		__this->___counter_52 = 0;
		__this->___reservedCLIndex_53 = 0;
		bool L_39 = ___0_left;
		G_B13_0 = __this;
		if (L_39)
		{
			G_B14_0 = __this;
			goto IL_0122;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_40 = __this->___lanes_15;
		int32_t L_41 = __this->___newLane_46;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_44 = L_43->___points_6;
		int32_t L_45 = __this->___newCurrentWaypointOnCar_45;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		int32_t L_48 = L_47->___rightParalelLaneIndex_6;
		G_B15_0 = L_48;
		G_B15_1 = G_B13_0;
		goto IL_0140;
	}

IL_0122:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_49 = __this->___lanes_15;
		int32_t L_50 = __this->___newLane_46;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_53 = L_52->___points_6;
		int32_t L_54 = __this->___newCurrentWaypointOnCar_45;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		int32_t L_57 = L_56->___leftParalelLaneIndex_7;
		G_B15_0 = L_57;
		G_B15_1 = G_B14_0;
	}

IL_0140:
	{
		NullCheck(G_B15_1);
		G_B15_1->___initialIndex_47 = G_B15_0;
		goto IL_03a2;
	}

IL_014a:
	{
		int32_t L_58 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_59 = __this->___counter_52;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_58, L_59))) < ((int32_t)0)))
		{
			goto IL_0246;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_60 = __this->___lanes_15;
		int32_t L_61 = __this->___newLane_46;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_64 = L_63->___points_6;
		int32_t L_65 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_66 = __this->___counter_52;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_subtract(L_65, L_66));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		int32_t L_69 = L_68->___reservationID_1;
		if (!L_69)
		{
			goto IL_01b4;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_70 = __this->___lanes_15;
		int32_t L_71 = __this->___newLane_46;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_74 = L_73->___points_6;
		int32_t L_75 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_76 = __this->___counter_52;
		NullCheck(L_74);
		int32_t L_77 = ((int32_t)il2cpp_codegen_subtract(L_75, L_76));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		int32_t L_79 = L_78->___reservationID_1;
		int32_t L_80 = __this->___myID_21;
		if ((!(((uint32_t)L_79) == ((uint32_t)L_80))))
		{
			goto IL_0246;
		}
	}

IL_01b4:
	{
		int32_t L_81 = __this->___initialIndex_47;
		int32_t L_82 = __this->___counter_52;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_83 = __this->___lanes_15;
		int32_t L_84 = __this->___currentLane_9;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_87 = L_86->___points_6;
		NullCheck(L_87);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_81, L_82))) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_87)->max_length)), 1)))))
		{
			goto IL_0246;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_88 = __this->___lanes_15;
		int32_t L_89 = __this->___currentLane_9;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_92 = L_91->___points_6;
		NullCheck(L_92);
		if (((int32_t)(((RuntimeArray*)L_92)->max_length)))
		{
			goto IL_0255;
		}
	}
	{
		goto IL_0246;
	}

IL_01f1:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_93 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_93);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_94;
		L_94 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_93, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_95 = L_94.___point_1;
		NullCheck(L_95);
		int32_t L_96 = L_95->___reservationID_1;
		int32_t L_97 = __this->___myID_21;
		if ((!(((uint32_t)L_96) == ((uint32_t)L_97))))
		{
			goto IL_023a;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_98 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_98);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_99;
		L_99 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_98, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_100 = L_99.___point_1;
		NullCheck(L_100);
		L_100->___reservationID_1 = 0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_101 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_101);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_102;
		L_102 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_101, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_103 = L_102.___point_1;
		NullCheck(L_103);
		L_103->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_103->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
	}

IL_023a:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_104 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_104);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_105;
		L_105 = Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6(L_104, Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
	}

IL_0246:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_106 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_106);
		int32_t L_107;
		L_107 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_106, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_107) > ((int32_t)0)))
		{
			goto IL_01f1;
		}
	}
	{
		return;
	}

IL_0255:
	{
		float L_108 = __this->___segDistance_51;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_109 = __this->___carControllerAI_30;
		NullCheck(L_109);
		float L_110 = L_109->___carDepth_11;
		if ((!(((float)L_108) < ((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_110, (3.0f))), (3.0f)))))))
		{
			goto IL_0362;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_111 = __this->___lanes_15;
		int32_t L_112 = __this->___currentLane_9;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_114);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_115 = L_114->___points_6;
		int32_t L_116 = __this->___initialIndex_47;
		int32_t L_117 = __this->___counter_52;
		NullCheck(L_115);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_116, L_117));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_119 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_119);
		int32_t L_120 = L_119->___reservationID_1;
		if (!L_120)
		{
			goto IL_02ce;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_121 = __this->___lanes_15;
		int32_t L_122 = __this->___currentLane_9;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_125 = L_124->___points_6;
		int32_t L_126 = __this->___initialIndex_47;
		int32_t L_127 = __this->___counter_52;
		NullCheck(L_125);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_126, L_127));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_129 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		int32_t L_130 = L_129->___reservationID_1;
		int32_t L_131 = __this->___myID_21;
		if ((!(((uint32_t)L_130) == ((uint32_t)L_131))))
		{
			goto IL_0362;
		}
	}

IL_02ce:
	{
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_132 = (&__this->___newPoint1_54);
		L_132->___connector_0 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_132->___connector_0), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_133 = (&__this->___newPoint1_54);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_134 = __this->___lanes_15;
		int32_t L_135 = __this->___currentLane_9;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		NullCheck(L_137);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_138 = L_137->___points_6;
		int32_t L_139 = __this->___initialIndex_47;
		int32_t L_140 = __this->___counter_52;
		NullCheck(L_138);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_139, L_140));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_142 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		L_133->___point_1 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&L_133->___point_1), (void*)L_142);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_143 = (&__this->___newPoint1_54);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_144 = L_143->___point_1;
		NullCheck(L_144);
		int32_t L_145 = L_144->___reservationID_1;
		if (L_145)
		{
			goto IL_0343;
		}
	}
	{
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_146 = (&__this->___newPoint1_54);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_147 = L_146->___point_1;
		int32_t L_148 = __this->___myID_21;
		NullCheck(L_147);
		L_147->___reservationID_1 = L_148;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_149 = (&__this->___newPoint1_54);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_150 = L_149->___point_1;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_151 = __this->___carControllerAI_30;
		NullCheck(L_150);
		L_150->___carwhoReserved_2 = L_151;
		Il2CppCodeGenWriteBarrier((void**)(&L_150->___carwhoReserved_2), (void*)L_151);
	}

IL_0343:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_152 = __this->___reservedChangeLanePoints_27;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_153 = __this->___newPoint1_54;
		NullCheck(L_152);
		Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3(L_152, L_153, Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		int32_t L_154 = __this->___reservedCLIndex_53;
		__this->___reservedCLIndex_53 = ((int32_t)il2cpp_codegen_add(L_154, 1));
	}

IL_0362:
	{
		float L_155 = __this->___segDistance_51;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_156 = __this->___lanes_15;
		int32_t L_157 = __this->___newLane_46;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		NullCheck(L_159);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_160 = L_159->___points_6;
		int32_t L_161 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_162 = __this->___counter_52;
		NullCheck(L_160);
		int32_t L_163 = ((int32_t)il2cpp_codegen_subtract(L_161, L_162));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_164 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_164);
		float L_165 = L_164->___distanceToNextPoint_5;
		__this->___segDistance_51 = ((float)il2cpp_codegen_add(L_155, L_165));
		int32_t L_166 = __this->___counter_52;
		__this->___counter_52 = ((int32_t)il2cpp_codegen_add(L_166, 1));
	}

IL_03a2:
	{
		float L_167 = __this->___segDistance_51;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_168 = __this->___carControllerAI_30;
		NullCheck(L_168);
		float L_169 = L_168->___maxLockaheadDistanceFullStop_6;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_170 = __this->___carControllerAI_30;
		NullCheck(L_170);
		float L_171 = L_170->___carDepth_11;
		float L_172;
		L_172 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_169, (5.0f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_171, (10.0f))), (3.0f))), ((std::numeric_limits<float>::max)()), NULL);
		if ((((float)L_167) < ((float)L_172)))
		{
			goto IL_014a;
		}
	}
	{
		goto IL_0436;
	}

IL_03e1:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_173 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_173);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_174;
		L_174 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_173, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_175 = L_174.___point_1;
		NullCheck(L_175);
		int32_t L_176 = L_175->___reservationID_1;
		int32_t L_177 = __this->___myID_21;
		if ((!(((uint32_t)L_176) == ((uint32_t)L_177))))
		{
			goto IL_042a;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_178 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_178);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_179;
		L_179 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_178, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_180 = L_179.___point_1;
		NullCheck(L_180);
		L_180->___reservationID_1 = 0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_181 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_181);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_182;
		L_182 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_181, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_183 = L_182.___point_1;
		NullCheck(L_183);
		L_183->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_183->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
	}

IL_042a:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_184 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_184);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_185;
		L_185 = Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6(L_184, Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
	}

IL_0436:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_186 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_186);
		int32_t L_187;
		L_187 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_186, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		int32_t L_188 = __this->___reservedCLIndex_53;
		if ((((int32_t)L_187) > ((int32_t)L_188)))
		{
			goto IL_03e1;
		}
	}
	{
		TSNavigation_UnreserveAll_m311FEA8A59F1758DB8FBAC7621655906E5271749(__this, (bool)0, NULL);
		bool L_189 = __this->___wasTravelingOnConnector_17;
		if (L_189)
		{
			goto IL_0495;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_190 = __this->___lanes_15;
		int32_t L_191 = __this->___lastLane_20;
		NullCheck(L_190);
		int32_t L_192 = L_191;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_193 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_194 = L_193;
		NullCheck(L_194);
		float L_195 = L_194->___totalOcupation_11;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_196 = __this->___carControllerAI_30;
		NullCheck(L_196);
		float L_197 = L_196->___carDepth_11;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_198 = __this->___lanes_15;
		int32_t L_199 = __this->___lastLane_20;
		NullCheck(L_198);
		int32_t L_200 = L_199;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_201);
		float L_202 = L_201->___totalDistance_12;
		NullCheck(L_194);
		L_194->___totalOcupation_11 = ((float)il2cpp_codegen_subtract(L_195, ((float)(((float)il2cpp_codegen_add(L_197, (3.0f)))/L_202))));
	}

IL_0495:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_203 = __this->___reservedPoints_25;
		NullCheck(L_203);
		Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56(L_203, Queue_1_Clear_mBC4A9F21ED5658C9C8E77DC9222502B406F2DD56_RuntimeMethod_var);
		__this->___i_40 = 0;
		goto IL_0558;
	}

IL_04ac:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_204 = __this->___lanes_15;
		int32_t L_205 = __this->___newLane_46;
		NullCheck(L_204);
		int32_t L_206 = L_205;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_207 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		NullCheck(L_207);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_208 = L_207->___points_6;
		int32_t L_209 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_210 = __this->___i_40;
		NullCheck(L_208);
		int32_t L_211 = ((int32_t)il2cpp_codegen_subtract(L_209, L_210));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_212 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		int32_t L_213 = __this->___myID_21;
		NullCheck(L_212);
		L_212->___reservationID_1 = L_213;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_214 = __this->___lanes_15;
		int32_t L_215 = __this->___newLane_46;
		NullCheck(L_214);
		int32_t L_216 = L_215;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		NullCheck(L_217);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_218 = L_217->___points_6;
		int32_t L_219 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_220 = __this->___i_40;
		NullCheck(L_218);
		int32_t L_221 = ((int32_t)il2cpp_codegen_subtract(L_219, L_220));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_222 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_223 = __this->___carControllerAI_30;
		NullCheck(L_222);
		L_222->___carwhoReserved_2 = L_223;
		Il2CppCodeGenWriteBarrier((void**)(&L_222->___carwhoReserved_2), (void*)L_223);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_224 = (&__this->___newPoint_55);
		L_224->___connector_0 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_224->___connector_0), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_225 = (&__this->___newPoint_55);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_226 = __this->___lanes_15;
		int32_t L_227 = __this->___newLane_46;
		NullCheck(L_226);
		int32_t L_228 = L_227;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_229 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		NullCheck(L_229);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_230 = L_229->___points_6;
		int32_t L_231 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_232 = __this->___i_40;
		NullCheck(L_230);
		int32_t L_233 = ((int32_t)il2cpp_codegen_subtract(L_231, L_232));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_234 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		L_225->___point_1 = L_234;
		Il2CppCodeGenWriteBarrier((void**)(&L_225->___point_1), (void*)L_234);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_235 = __this->___reservedPoints_25;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_236 = __this->___newPoint_55;
		NullCheck(L_235);
		Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3(L_235, L_236, Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		int32_t L_237 = __this->___i_40;
		__this->___i_40 = ((int32_t)il2cpp_codegen_add(L_237, 1));
	}

IL_0558:
	{
		int32_t L_238 = __this->___i_40;
		int32_t L_239 = __this->___counter_52;
		if ((((int32_t)L_238) < ((int32_t)L_239)))
		{
			goto IL_04ac;
		}
	}
	{
		__this->___overTaking_24 = (bool)1;
		int32_t L_240 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_241 = __this->___counter_52;
		__this->___currentWaypoint_4 = ((int32_t)il2cpp_codegen_subtract(L_240, ((int32_t)(L_241/2))));
		bool L_242 = ___0_left;
		__this->___overtakingFromLeft_34 = (bool)((((int32_t)L_242) == ((int32_t)0))? 1 : 0);
		int32_t L_243 = __this->___newLane_46;
		__this->___currentLane_9 = L_243;
		int32_t L_244 = __this->___newCurrentWaypointOnCar_45;
		__this->___currentWaypointOnCar_5 = L_244;
		int32_t L_245 = __this->___currentWaypoint_4;
		__this->___previousWaypointSteer_8 = L_245;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_246 = __this->___carControllerAI_30;
		int32_t L_247 = __this->___newCurrentWaypointOnCar_45;
		int32_t L_248 = __this->___counter_52;
		NullCheck(L_246);
		L_246->___previousWaypointCurve_19 = ((int32_t)il2cpp_codegen_subtract(L_247, L_248));
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_249 = __this->___lanes_15;
		int32_t L_250 = __this->___newLane_46;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		NullCheck(L_252);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_253 = L_252->___points_6;
		__this->___waypoints_13 = L_253;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waypoints_13), (void*)L_253);
		__this->___wasTravelingOnConnector_17 = (bool)0;
		__this->___travelingOnConector_16 = (bool)0;
		__this->___lastLane_20 = 0;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_254 = __this->___waypoints_13;
		__this->___lastWaypoints_14 = L_254;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastWaypoints_14), (void*)L_254);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_255 = __this->___myTransform_31;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_256 = __this->___reservedPoints_25;
		NullCheck(L_256);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_257;
		L_257 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_256, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_258 = L_257.___point_1;
		NullCheck(L_258);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_259 = L_258->___point_0;
		NullCheck(L_255);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_260;
		L_260 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_255, L_259, NULL);
		__this->___RelativeWaypointPositionOnCar_7 = L_260;
		__this->___relativeWPosMagnitude_22 = (0.0f);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_261 = __this->___carControllerAI_30;
		NullCheck(L_261);
		L_261->___nextPathIndex_21 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_262 = __this->___carControllerAI_30;
		float L_263 = __this->___segDistance_51;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_264 = __this->___carControllerAI_30;
		NullCheck(L_264);
		float L_265 = L_264->___carDepth_11;
		NullCheck(L_262);
		L_262->___segDistance_20 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_263, L_265)), (3.0f)));
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_266 = __this->___carControllerAI_30;
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_267 = __this->___lastWaypoints_14;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_268 = __this->___carControllerAI_30;
		NullCheck(L_268);
		int32_t L_269 = L_268->___previousWaypointCurve_19;
		NullCheck(L_267);
		int32_t L_270 = L_269;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_271 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		NullCheck(L_266);
		L_266->___currenPoint_16 = L_271;
		Il2CppCodeGenWriteBarrier((void**)(&L_266->___currenPoint_16), (void*)L_271);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_272 = __this->___carControllerAI_30;
		NullCheck(L_272);
		L_272->___currentConnector_17 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_272->___currentConnector_17), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_273 = __this->___carControllerAI_30;
		NullCheck(L_273);
		L_273->___lane_22 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_274 = __this->___carControllerAI_30;
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_275 = (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*)il2cpp_codegen_object_new(List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var);
		NullCheck(L_275);
		List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751(L_275, List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var);
		NullCheck(L_274);
		L_274->___brakeSpeeds_15 = L_275;
		Il2CppCodeGenWriteBarrier((void**)(&L_274->___brakeSpeeds_15), (void*)L_275);
		__this->___selectedConnector_18 = 0;
		__this->___lastSelectedConnector_19 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSelectedConnector_19), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		__this->___starting_29 = (bool)1;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_276 = __this->___nextTrackPath_11;
		NullCheck(L_276);
		List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_inline(L_276, List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_RuntimeMethod_var);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_277 = __this->___lanes_15;
		int32_t L_278 = __this->___newLane_46;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		NullCheck(L_280);
		float L_281 = L_280->___maxSpeed_5;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_282 = __this->___lanes_15;
		int32_t L_283 = __this->___newLane_46;
		NullCheck(L_282);
		int32_t L_284 = L_283;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_285 = (L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		NullCheck(L_285);
		float L_286 = L_285->___maxSpeed_5;
		float L_287;
		L_287 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(L_281/(2.0f))), L_286, NULL);
		__this->___currentMaxSpeed_12 = L_287;
	}

IL_06fe:
	{
		return;
	}
}
// System.Void TSNavigation::TurnOffTurningLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_TurnOffTurningLights_m3EED665483CBD42683DE47230DAD6E08D59DC06D (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	{
		__this->___isTurning_32 = (bool)0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_0 = __this->___carControllerAI_30;
		NullCheck(L_0);
		OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* L_1 = L_0->___OnTurnLeft_55;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_2 = __this->___carControllerAI_30;
		NullCheck(L_2);
		OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* L_3 = L_2->___OnTurnLeft_55;
		NullCheck(L_3);
		OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_inline(L_3, (bool)0, NULL);
	}

IL_0025:
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_4 = __this->___carControllerAI_30;
		NullCheck(L_4);
		OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* L_5 = L_4->___OnTurnRight_54;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_6 = __this->___carControllerAI_30;
		NullCheck(L_6);
		OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* L_7 = L_6->___OnTurnRight_54;
		NullCheck(L_7);
		OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_inline(L_7, (bool)0, NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void TSNavigation::UnreserveAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_UnreserveAll_m311FEA8A59F1758DB8FBAC7621655906E5271749 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, bool ___0_all, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m816682D18E7BAEBEB2AA087935465238D1F35685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m87CC96BD38A49880B0B2B39D18C142B12F46C016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m9CCE1D78791238782E224255879BCD5D44891E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_0 = __this->___nextTrackPath_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_0, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_2 = __this->___nextTrackPath_11;
		NullCheck(L_2);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_3;
		L_3 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_2, 0, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		bool L_4 = L_3.___isConnector_2;
		if (L_4)
		{
			goto IL_00c5;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_5 = __this->___lanes_15;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_6 = __this->___nextTrackPath_11;
		NullCheck(L_6);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_7;
		L_7 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_6, 0, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_8 = L_7.___nextLane_0;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_11 = L_10;
		NullCheck(L_11);
		float L_12 = L_11->___totalOcupation_11;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_13 = __this->___carControllerAI_30;
		NullCheck(L_13);
		float L_14 = L_13->___carDepth_11;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_15 = __this->___lanes_15;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_16 = __this->___nextTrackPath_11;
		NullCheck(L_16);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_17;
		L_17 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_16, 0, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_18 = L_17.___nextLane_0;
		NullCheck(L_15);
		int32_t L_19 = L_18;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_20 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		float L_21 = L_20->___totalDistance_12;
		NullCheck(L_11);
		L_11->___totalOcupation_11 = ((float)il2cpp_codegen_subtract(L_12, ((float)(((float)il2cpp_codegen_add(L_14, (3.0f)))/L_21))));
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_22 = __this->___lanes_15;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_23 = __this->___nextTrackPath_11;
		NullCheck(L_23);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_24;
		L_24 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_23, 0, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_25 = L_24.___nextLane_0;
		NullCheck(L_22);
		int32_t L_26 = L_25;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		float L_28 = L_27->___totalOcupation_11;
		if ((!(((float)L_28) < ((float)(0.0f)))))
		{
			goto IL_013a;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_29 = __this->___lanes_15;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_30 = __this->___nextTrackPath_11;
		NullCheck(L_30);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_31;
		L_31 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_30, 0, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_32 = L_31.___nextLane_0;
		NullCheck(L_29);
		int32_t L_33 = L_32;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_34 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		L_34->___totalOcupation_11 = (0.0f);
		goto IL_013a;
	}

IL_00c5:
	{
		bool L_35 = __this->___travelingOnConector_16;
		if (L_35)
		{
			goto IL_013a;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_36 = __this->___lanes_15;
		int32_t L_37 = __this->___currentLane_9;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_40 = L_39;
		NullCheck(L_40);
		float L_41 = L_40->___totalOcupation_11;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_42 = __this->___carControllerAI_30;
		NullCheck(L_42);
		float L_43 = L_42->___carDepth_11;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_44 = __this->___lanes_15;
		int32_t L_45 = __this->___currentLane_9;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		float L_48 = L_47->___totalDistance_12;
		NullCheck(L_40);
		L_40->___totalOcupation_11 = ((float)il2cpp_codegen_subtract(L_41, ((float)(((float)il2cpp_codegen_add(L_43, (3.0f)))/L_48))));
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_49 = __this->___lanes_15;
		int32_t L_50 = __this->___currentLane_9;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		float L_53 = L_52->___totalOcupation_11;
		if ((!(((float)L_53) < ((float)(0.0f)))))
		{
			goto IL_013a;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_54 = __this->___lanes_15;
		int32_t L_55 = __this->___currentLane_9;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		L_57->___totalOcupation_11 = (0.0f);
	}

IL_013a:
	{
		bool L_58 = __this->___changingLane_23;
		if (!L_58)
		{
			goto IL_0149;
		}
	}
	{
		__this->___changingLane_23 = (bool)0;
	}

IL_0149:
	{
		bool L_59 = ___0_all;
		if (!L_59)
		{
			goto IL_01da;
		}
	}
	{
		goto IL_01a6;
	}

IL_0151:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_60 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_60);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_61;
		L_61 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_60, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_62 = L_61.___point_1;
		NullCheck(L_62);
		int32_t L_63 = L_62->___reservationID_1;
		int32_t L_64 = __this->___myID_21;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_019a;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_65 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_65);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_66;
		L_66 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_65, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_67 = L_66.___point_1;
		NullCheck(L_67);
		L_67->___reservationID_1 = 0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_68 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_68);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_69;
		L_69 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_68, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_70 = L_69.___point_1;
		NullCheck(L_70);
		L_70->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_70->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
	}

IL_019a:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_71 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_71);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_72;
		L_72 = Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6(L_71, Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
	}

IL_01a6:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_73 = __this->___reservedChangeLanePoints_27;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_73, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_74) > ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		__this->___overTaking_24 = (bool)0;
		goto IL_01da;
	}

IL_01bd:
	{
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_75 = __this->___reservedConnectors_28;
		NullCheck(L_75);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_76;
		L_76 = Queue_1_Peek_m87CC96BD38A49880B0B2B39D18C142B12F46C016(L_75, Queue_1_Peek_m87CC96BD38A49880B0B2B39D18C142B12F46C016_RuntimeMethod_var);
		TSNavigation_UnReserveNearConnectorPoints_mE6E3831EFE33640A927476588DE2919C6F128AC6(__this, L_76, NULL);
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_77 = __this->___reservedConnectors_28;
		NullCheck(L_77);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_78;
		L_78 = Queue_1_Dequeue_m816682D18E7BAEBEB2AA087935465238D1F35685(L_77, Queue_1_Dequeue_m816682D18E7BAEBEB2AA087935465238D1F35685_RuntimeMethod_var);
	}

IL_01da:
	{
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_79 = __this->___reservedConnectors_28;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = Queue_1_get_Count_m9CCE1D78791238782E224255879BCD5D44891E5F_inline(L_79, Queue_1_get_Count_m9CCE1D78791238782E224255879BCD5D44891E5F_RuntimeMethod_var);
		if ((((int32_t)L_80) > ((int32_t)0)))
		{
			goto IL_01bd;
		}
	}
	{
		goto IL_0255;
	}

IL_01ea:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_81 = __this->___reservedPoints_25;
		NullCheck(L_81);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_82;
		L_82 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_81, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_83 = L_82.___point_1;
		NullCheck(L_83);
		int32_t L_84 = L_83->___reservationID_1;
		int32_t L_85 = __this->___myID_21;
		if ((!(((uint32_t)L_84) == ((uint32_t)L_85))))
		{
			goto IL_0233;
		}
	}
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_86 = __this->___reservedPoints_25;
		NullCheck(L_86);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_87;
		L_87 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_86, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_88 = L_87.___point_1;
		NullCheck(L_88);
		L_88->___reservationID_1 = 0;
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_89 = __this->___reservedPoints_25;
		NullCheck(L_89);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_90;
		L_90 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_89, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_91 = L_90.___point_1;
		NullCheck(L_91);
		L_91->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_91->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
	}

IL_0233:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_92 = __this->___reservedPoints_25;
		NullCheck(L_92);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_93;
		L_93 = Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4(L_92, Queue_1_Peek_m47EAEB7D988DA2B67A0C1CDA97F4A28CAF3BA4A4_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_94 = L_93.___point_1;
		TSNavigation_UnReserveNearConnectorPoints_mE5C13140D55D034DF741618F8C223CADD091B69F(__this, L_94, NULL);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_95 = __this->___reservedPoints_25;
		NullCheck(L_95);
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_96;
		L_96 = Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6(L_95, Queue_1_Dequeue_m18539B6FD936AF0AAEC0E3C6DEC19655DC308AF6_RuntimeMethod_var);
	}

IL_0255:
	{
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_97 = __this->___reservedPoints_25;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_97, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_98) > ((int32_t)0)))
		{
			goto IL_01ea;
		}
	}
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_99 = __this->___carControllerAI_30;
		NullCheck(L_99);
		L_99->___nextPathIndex_21 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_100 = __this->___carControllerAI_30;
		NullCheck(L_100);
		L_100->___segDistance_20 = (0.0f);
		__this->___totalDistance_57 = (0.0f);
		__this->___nextTrackIndex_26 = 0;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_101 = __this->___nextTrackPath_11;
		NullCheck(L_101);
		List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_inline(L_101, List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_RuntimeMethod_var);
		return;
	}
}
// System.Void TSNavigation::AddNextTrackToPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_AddNextTrackToPath_m824AAA81735165049B10BD2EB586A65D724D3436 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m164D7C38E08F59315B6321B67EA46293B71A9F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_0 = __this->___carControllerAI_30;
		NullCheck(L_0);
		float L_1 = L_0->___maxLockaheadDistanceFullStop_6;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_2 = __this->___carControllerAI_30;
		NullCheck(L_2);
		float L_3;
		L_3 = TSTrafficAI_get_LookAheadDistance_m398FB1B39A0989E2A6681E8E415459AD171AE1C1_inline(L_2, NULL);
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_1, L_3, NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_5 = __this->___carControllerAI_30;
		NullCheck(L_5);
		float L_6 = L_5->___carDepth_11;
		__this->___dist_58 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_4, L_6)), (2.0f)));
		float L_7 = __this->___totalDistance_57;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_02ed;
		}
	}
	{
		__this->___totalDistance_57 = (0.0f);
		goto IL_02ed;
	}

IL_0053:
	{
		bool L_8 = __this->___starting_29;
		if (!L_8)
		{
			goto IL_011c;
		}
	}
	{
		__this->___wasConnector_56 = (bool)1;
		__this->___starting_29 = (bool)0;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_9 = (&__this->___nextTrack_10);
		L_9->___isConnector_2 = (bool)0;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_10 = (&__this->___nextTrack_10);
		int32_t L_11 = __this->___currentLane_9;
		L_10->___nextLane_0 = L_11;
		__this->___nextTrackIndex_26 = 1;
		int32_t L_12 = __this->___currentWaypointOnCar_5;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_13 = __this->___lanes_15;
		int32_t L_14 = __this->___currentLane_9;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_17 = L_16->___points_6;
		NullCheck(L_17);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_00c8;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_18 = __this->___lanes_15;
		int32_t L_19 = __this->___currentLane_9;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_22 = L_21->___points_6;
		NullCheck(L_22);
		__this->___currentWaypointOnCar_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), 1));
	}

IL_00c8:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_23 = __this->___lanes_15;
		int32_t L_24 = __this->___currentLane_9;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		float L_27 = L_26->___totalDistance_12;
		__this->___totalDistance_57 = L_27;
		V_0 = 0;
		goto IL_010e;
	}

IL_00e4:
	{
		float L_28 = __this->___totalDistance_57;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_29 = __this->___lanes_15;
		int32_t L_30 = __this->___currentLane_9;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_33 = L_32->___points_6;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		float L_37 = L_36->___distanceToNextPoint_5;
		__this->___totalDistance_57 = ((float)il2cpp_codegen_subtract(L_28, L_37));
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_010e:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = __this->___currentWaypointOnCar_5;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02dc;
	}

IL_011c:
	{
		bool L_41 = __this->___wasConnector_56;
		if (L_41)
		{
			goto IL_0206;
		}
	}
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_42 = __this->___nextTrackPath_11;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_42, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_01a1;
		}
	}
	{
		__this->___wasConnector_56 = (bool)1;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_44 = (&__this->___nextTrack_10);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_45 = __this->___lanes_15;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_46 = __this->___nextTrackPath_11;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_47 = __this->___nextTrackPath_11;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_47, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		NullCheck(L_46);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_49;
		L_49 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_46, ((int32_t)il2cpp_codegen_subtract(L_48, 1)), List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_50 = L_49.___nextLane_0;
		NullCheck(L_45);
		int32_t L_51 = L_50;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_52 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_53 = L_52->___connectors_7;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_54 = __this->___nextTrackPath_11;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_55 = __this->___nextTrackPath_11;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_55, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		NullCheck(L_54);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_57;
		L_57 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_54, ((int32_t)il2cpp_codegen_subtract(L_56, 1)), List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_58 = L_57.___nextConnector_1;
		NullCheck(L_53);
		int32_t L_59 = L_58;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_60 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		int32_t L_61 = L_60->___nextLane_4;
		L_44->___nextLane_0 = L_61;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_62 = (&__this->___nextTrack_10);
		L_62->___isConnector_2 = (bool)0;
		goto IL_01dd;
	}

IL_01a1:
	{
		__this->___wasConnector_56 = (bool)1;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_63 = (&__this->___nextTrack_10);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_64 = __this->___lanes_15;
		int32_t L_65 = __this->___currentLane_9;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_68 = L_67->___connectors_7;
		int32_t L_69 = __this->___selectedConnector_18;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		int32_t L_72 = L_71->___nextLane_4;
		L_63->___nextLane_0 = L_72;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_73 = (&__this->___nextTrack_10);
		L_73->___isConnector_2 = (bool)0;
	}

IL_01dd:
	{
		float L_74 = __this->___totalDistance_57;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_75 = __this->___lanes_15;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_76 = (&__this->___nextTrack_10);
		int32_t L_77 = L_76->___nextLane_0;
		NullCheck(L_75);
		int32_t L_78 = L_77;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_79 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		float L_80 = L_79->___totalDistance_12;
		__this->___totalDistance_57 = ((float)il2cpp_codegen_add(L_74, L_80));
		goto IL_02dc;
	}

IL_0206:
	{
		__this->___wasConnector_56 = (bool)0;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_81 = __this->___nextTrackPath_11;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_81, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)L_82) <= ((int32_t)0)))
		{
			goto IL_0273;
		}
	}
	{
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_83 = (&__this->___nextTrack_10);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_84 = __this->___nextTrackPath_11;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_85 = __this->___nextTrackPath_11;
		NullCheck(L_85);
		int32_t L_86;
		L_86 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_85, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		NullCheck(L_84);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_87;
		L_87 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_84, ((int32_t)il2cpp_codegen_subtract(L_86, 1)), List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_88 = L_87.___nextLane_0;
		L_83->___nextLane_0 = L_88;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_89 = (&__this->___nextTrack_10);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_90 = __this->___nextTrackPath_11;
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_91 = __this->___nextTrackPath_11;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_91, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		NullCheck(L_90);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_93;
		L_93 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_90, ((int32_t)il2cpp_codegen_subtract(L_92, 1)), List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_94 = L_93.___nextLane_0;
		int32_t L_95;
		L_95 = TSNavigation_GetNextConnector_mBBFB7AB100D6EEBF9231896507C361498A8A4B1A(__this, L_94, NULL);
		L_89->___nextConnector_1 = L_95;
		goto IL_029b;
	}

IL_0273:
	{
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_96 = (&__this->___nextTrack_10);
		int32_t L_97 = __this->___currentLane_9;
		L_96->___nextLane_0 = L_97;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_98 = (&__this->___nextTrack_10);
		int32_t L_99 = __this->___currentLane_9;
		int32_t L_100;
		L_100 = TSNavigation_GetNextConnector_mBBFB7AB100D6EEBF9231896507C361498A8A4B1A(__this, L_99, NULL);
		L_98->___nextConnector_1 = L_100;
	}

IL_029b:
	{
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_101 = (&__this->___nextTrack_10);
		L_101->___isConnector_2 = (bool)1;
		float L_102 = __this->___totalDistance_57;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_103 = __this->___lanes_15;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_104 = (&__this->___nextTrack_10);
		int32_t L_105 = L_104->___nextLane_0;
		NullCheck(L_103);
		int32_t L_106 = L_105;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_107 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_108 = L_107->___connectors_7;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_109 = (&__this->___nextTrack_10);
		int32_t L_110 = L_109->___nextConnector_1;
		NullCheck(L_108);
		int32_t L_111 = L_110;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_112 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_112);
		float L_113 = L_112->___totalDistance_12;
		__this->___totalDistance_57 = ((float)il2cpp_codegen_add(L_102, L_113));
	}

IL_02dc:
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_114 = __this->___nextTrackPath_11;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_115 = __this->___nextTrack_10;
		NullCheck(L_114);
		List_1_Add_m164D7C38E08F59315B6321B67EA46293B71A9F8F_inline(L_114, L_115, List_1_Add_m164D7C38E08F59315B6321B67EA46293B71A9F8F_RuntimeMethod_var);
	}

IL_02ed:
	{
		float L_116 = __this->___totalDistance_57;
		float L_117 = __this->___dist_58;
		if ((((float)L_116) < ((float)L_117)))
		{
			goto IL_0053;
		}
	}
	{
		return;
	}
}
// System.Int32 TSNavigation::GetNextConnector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSNavigation_GetNextConnector_mBBFB7AB100D6EEBF9231896507C361498A8A4B1A (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, int32_t ___0_lane, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_0 = __this->___lanes_15;
		int32_t L_1 = ___0_lane;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_4 = L_3->___connectors_7;
		NullCheck(L_4);
		__this->___totalConnectors_59 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		__this->___maxInt_60 = ((std::numeric_limits<float>::max)());
		__this->___index_61 = 0;
		V_0 = 0;
		goto IL_018b;
	}

IL_002e:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_5 = __this->___lanes_15;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_6 = __this->___lanes_15;
		int32_t L_7 = ___0_lane;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_10 = L_9->___connectors_7;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		int32_t L_14 = L_13->___nextLane_4;
		NullCheck(L_5);
		int32_t L_15 = L_14;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_16 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = L_16->___vehicleType_4;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_18 = __this->___carControllerAI_30;
		NullCheck(L_18);
		int32_t L_19 = L_18->___myVehicleType_14;
		if ((((int32_t)((int32_t)((int32_t)L_17&((int32_t)(1<<((int32_t)((int32_t)L_19&((int32_t)31)))))))) <= ((int32_t)0)))
		{
			goto IL_008a;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_20 = __this->___lanes_15;
		int32_t L_21 = ___0_lane;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_24 = L_23->___connectors_7;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28 = L_27->___vehicleType_14;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_29 = __this->___carControllerAI_30;
		NullCheck(L_29);
		int32_t L_30 = L_29->___myVehicleType_14;
		if ((((int32_t)((int32_t)((int32_t)L_28&((int32_t)(1<<((int32_t)((int32_t)L_30&((int32_t)31)))))))) > ((int32_t)0)))
		{
			goto IL_00be;
		}
	}

IL_008a:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_31 = __this->___lanes_15;
		int32_t L_32 = ___0_lane;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_35 = L_34->___connectors_7;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_39 = __this->___lanes_15;
		int32_t L_40 = ___0_lane;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_43 = L_42->___connectors_7;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_43)->max_length)), 1)), NULL);
		NullCheck(L_38);
		L_38->___randomWeight_13 = ((float)il2cpp_codegen_subtract(((std::numeric_limits<float>::max)()), ((float)L_44)));
		goto IL_0123;
	}

IL_00be:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_45 = __this->___lanes_15;
		int32_t L_46 = ___0_lane;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_49 = L_48->___connectors_7;
		int32_t L_50 = V_0;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_53 = __this->___lanes_15;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_54 = __this->___lanes_15;
		int32_t L_55 = ___0_lane;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_58 = L_57->___connectors_7;
		int32_t L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		int32_t L_62 = L_61->___nextLane_4;
		NullCheck(L_53);
		int32_t L_63 = L_62;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_64 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		float L_65 = L_64->___totalOcupation_11;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_66 = __this->___lanes_15;
		int32_t L_67 = ___0_lane;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_70 = L_69->___connectors_7;
		NullCheck(L_70);
		float L_71;
		L_71 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), (100.0f), NULL);
		float L_72;
		L_72 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((1.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)(((RuntimeArray*)L_70)->max_length))), L_71)), NULL);
		NullCheck(L_52);
		L_52->___randomWeight_13 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_65, (100.0f))), L_72));
	}

IL_0123:
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_73 = __this->___lanes_15;
		int32_t L_74 = ___0_lane;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_77 = L_76->___connectors_7;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		float L_81 = L_80->___randomWeight_13;
		float L_82 = __this->___maxInt_60;
		if ((!(((float)L_81) < ((float)L_82))))
		{
			goto IL_0187;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_83 = __this->___lanes_15;
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_84 = __this->___lanes_15;
		int32_t L_85 = ___0_lane;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_88 = L_87->___connectors_7;
		int32_t L_89 = V_0;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		int32_t L_92 = L_91->___nextLane_4;
		NullCheck(L_83);
		int32_t L_93 = L_92;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_94 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		float L_95 = L_94->___totalOcupation_11;
		if ((!(((float)L_95) < ((float)(0.699999988f)))))
		{
			goto IL_0187;
		}
	}
	{
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_96 = __this->___lanes_15;
		int32_t L_97 = ___0_lane;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_99);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_100 = L_99->___connectors_7;
		int32_t L_101 = V_0;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_103);
		float L_104 = L_103->___randomWeight_13;
		__this->___maxInt_60 = L_104;
		int32_t L_105 = V_0;
		__this->___index_61 = L_105;
	}

IL_0187:
	{
		int32_t L_106 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_018b:
	{
		int32_t L_107 = V_0;
		int32_t L_108 = __this->___totalConnectors_59;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_109 = __this->___index_61;
		return L_109;
	}
}
// System.Void TSNavigation::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation_OnDrawGizmosSelected_m04E3FDE471C7028890535072E7C1DECA4B2AB453 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2AC426E5876BA9FB0CDF08E913789DFE179CFE16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m81B60AE3FDD66A39470F84A2F8AEAD4D23D1B77C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA556F75A20687468CD8FEA3F762810A82A6ADEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD7A8042FAE3DDE9CDFE37D223300DB82510BB092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD88BA689B4D0B4E1C4C18A68371F6D08F74FC4BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC838E21F17CB2236345D244772BA5CF01CAE315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m00EFCFE880E05B1E23360E029C358884DB7FDD61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m788BD8BF8215B29E16BB526E5F0D1E7421989886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9BD126543D3F935975EA8353D41524F9A112B047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD221AD77B96092C1972D7A6D38A3EF5886737AA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_m61C93F127D73336F32BA705ACA1B39F6222EEF76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_GetEnumerator_mD361596BB9F4EE633ED3EBB75B0045AB626C54E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD V_0;
	memset((&V_0), 0, sizeof(V_0));
	TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* V_1 = NULL;
	TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_1, NULL);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_2 = __this->___reservedPoints_25;
		NullCheck(L_2);
		Enumerator_t680D20FFC82E7366E4E875C58DEB5E7F905AFA85 L_3;
		L_3 = Queue_1_GetEnumerator_mD361596BB9F4EE633ED3EBB75B0045AB626C54E1(L_2, Queue_1_GetEnumerator_mD361596BB9F4EE633ED3EBB75B0045AB626C54E1_RuntimeMethod_var);
		V_3 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2AC426E5876BA9FB0CDF08E913789DFE179CFE16((&V_3), Enumerator_Dispose_m2AC426E5876BA9FB0CDF08E913789DFE179CFE16_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0020_1:
			{
				TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_4;
				L_4 = Enumerator_get_Current_m788BD8BF8215B29E16BB526E5F0D1E7421989886((&V_3), Enumerator_get_Current_m788BD8BF8215B29E16BB526E5F0D1E7421989886_RuntimeMethod_var);
				V_0 = L_4;
				TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_5 = (&V_0)->___point_1;
				NullCheck(L_5);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___point_0;
				Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_6, (1.0f), NULL);
			}

IL_003e_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mD88BA689B4D0B4E1C4C18A68371F6D08F74FC4BB((&V_3), Enumerator_MoveNext_mD88BA689B4D0B4E1C4C18A68371F6D08F74FC4BB_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_8, NULL);
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_9 = __this->___reservedConnectors_28;
		NullCheck(L_9);
		Enumerator_t2343E75860784B76786D9F106D135B1E85DF1498 L_10;
		L_10 = Queue_1_GetEnumerator_m61C93F127D73336F32BA705ACA1B39F6222EEF76(L_9, Queue_1_GetEnumerator_m61C93F127D73336F32BA705ACA1B39F6222EEF76_RuntimeMethod_var);
		V_4 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0094:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA556F75A20687468CD8FEA3F762810A82A6ADEED((&V_4), Enumerator_Dispose_mA556F75A20687468CD8FEA3F762810A82A6ADEED_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0089_1;
			}

IL_0070_1:
			{
				TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_11;
				L_11 = Enumerator_get_Current_m9BD126543D3F935975EA8353D41524F9A112B047((&V_4), Enumerator_get_Current_m9BD126543D3F935975EA8353D41524F9A112B047_RuntimeMethod_var);
				V_1 = L_11;
				TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_12 = V_1;
				NullCheck(L_12);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___conectorA_0;
				TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_14 = V_1;
				NullCheck(L_14);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___conectorB_1;
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_13, L_15, NULL);
			}

IL_0089_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mFC838E21F17CB2236345D244772BA5CF01CAE315((&V_4), Enumerator_MoveNext_mFC838E21F17CB2236345D244772BA5CF01CAE315_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0070_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_17 = __this->___nextTrackPath_11;
		NullCheck(L_17);
		Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2 L_18;
		L_18 = List_1_GetEnumerator_mD221AD77B96092C1972D7A6D38A3EF5886737AA3(L_17, List_1_GetEnumerator_mD221AD77B96092C1972D7A6D38A3EF5886737AA3_RuntimeMethod_var);
		V_5 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0159:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m81B60AE3FDD66A39470F84A2F8AEAD4D23D1B77C((&V_5), Enumerator_Dispose_m81B60AE3FDD66A39470F84A2F8AEAD4D23D1B77C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014b_1;
			}

IL_00b4_1:
			{
				TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_19;
				L_19 = Enumerator_get_Current_m00EFCFE880E05B1E23360E029C358884DB7FDD61_inline((&V_5), Enumerator_get_Current_m00EFCFE880E05B1E23360E029C358884DB7FDD61_RuntimeMethod_var);
				V_2 = L_19;
				bool L_20 = (&V_2)->___isConnector_2;
				if (!L_20)
				{
					goto IL_0116_1;
				}
			}
			{
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
				L_21 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
				Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_21, NULL);
				TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_22 = __this->___lanes_15;
				int32_t L_23 = (&V_2)->___nextLane_0;
				NullCheck(L_22);
				int32_t L_24 = L_23;
				TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				NullCheck(L_25);
				TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_26 = L_25->___connectors_7;
				int32_t L_27 = (&V_2)->___nextConnector_1;
				NullCheck(L_26);
				int32_t L_28 = L_27;
				TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
				NullCheck(L_29);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29->___conectorA_0;
				TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_31 = __this->___lanes_15;
				int32_t L_32 = (&V_2)->___nextLane_0;
				NullCheck(L_31);
				int32_t L_33 = L_32;
				TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
				NullCheck(L_34);
				TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_35 = L_34->___connectors_7;
				int32_t L_36 = (&V_2)->___nextConnector_1;
				NullCheck(L_35);
				int32_t L_37 = L_36;
				TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
				NullCheck(L_38);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = L_38->___conectorB_1;
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_30, L_39, NULL);
				goto IL_014b_1;
			}

IL_0116_1:
			{
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
				L_40 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
				Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_40, NULL);
				TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_41 = __this->___lanes_15;
				int32_t L_42 = (&V_2)->___nextLane_0;
				NullCheck(L_41);
				int32_t L_43 = L_42;
				TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
				NullCheck(L_44);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = L_44->___conectorA_0;
				TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_46 = __this->___lanes_15;
				int32_t L_47 = (&V_2)->___nextLane_0;
				NullCheck(L_46);
				int32_t L_48 = L_47;
				TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
				NullCheck(L_49);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = L_49->___conectorB_1;
				Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_45, L_50, NULL);
			}

IL_014b_1:
			{
				bool L_51;
				L_51 = Enumerator_MoveNext_mD7A8042FAE3DDE9CDFE37D223300DB82510BB092((&V_5), Enumerator_MoveNext_mD7A8042FAE3DDE9CDFE37D223300DB82510BB092_RuntimeMethod_var);
				if (L_51)
				{
					goto IL_00b4_1;
				}
			}
			{
				goto IL_0167;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0167:
	{
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_52 = __this->___waypoints_13;
		int32_t L_53 = __this->___currentWaypoint_4;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55->___point_0;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_56, (1.0f), NULL);
		return;
	}
}
// System.Void TSNavigation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSNavigation__ctor_mA0EB12C59BDC49807793A4CBEB5E03C950AD9743 (TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A89C9B9C319D0A1B44D075571519C6164BABE4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m8641407D5754FA8404B73391E03923BDAED285C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___RelativeWaypointPosition_6 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___RelativeWaypointPositionOnCar_7 = L_1;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B* L_2 = (&__this->___nextTrack_10);
		il2cpp_codegen_initobj(L_2, sizeof(TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B));
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_3 = (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*)il2cpp_codegen_object_new(List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6A89C9B9C319D0A1B44D075571519C6164BABE4D(L_3, List_1__ctor_m6A89C9B9C319D0A1B44D075571519C6164BABE4D_RuntimeMethod_var);
		__this->___nextTrackPath_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextTrackPath_11), (void*)L_3);
		__this->___currentMaxSpeed_12 = (50.0f);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_4 = (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*)il2cpp_codegen_object_new(Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF(L_4, Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF_RuntimeMethod_var);
		__this->___reservedPoints_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reservedPoints_25), (void*)L_4);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_5 = (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464*)il2cpp_codegen_object_new(Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF(L_5, Queue_1__ctor_m8972987640B0B7A06465179BEBAAAC9382BB01BF_RuntimeMethod_var);
		__this->___reservedChangeLanePoints_27 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reservedChangeLanePoints_27), (void*)L_5);
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_6 = (Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228*)il2cpp_codegen_object_new(Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Queue_1__ctor_m8641407D5754FA8404B73391E03923BDAED285C0(L_6, Queue_1__ctor_m8641407D5754FA8404B73391E03923BDAED285C0_RuntimeMethod_var);
		__this->___reservedConnectors_28 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reservedConnectors_28), (void*)L_6);
		__this->___starting_29 = (bool)1;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_7 = (&__this->___newPoint1_54);
		il2cpp_codegen_initobj(L_7, sizeof(TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD));
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* L_8 = (&__this->___newPoint_55);
		il2cpp_codegen_initobj(L_8, sizeof(TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD));
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
// Conversion methods for marshalling of: TSNavigation/TSNextLaneSelection
IL2CPP_EXTERN_C void TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshal_pinvoke(const TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B& unmarshaled, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshaled_pinvoke& marshaled)
{
	marshaled.___nextLane_0 = unmarshaled.___nextLane_0;
	marshaled.___nextConnector_1 = unmarshaled.___nextConnector_1;
	marshaled.___isConnector_2 = static_cast<int32_t>(unmarshaled.___isConnector_2);
}
IL2CPP_EXTERN_C void TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshal_pinvoke_back(const TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshaled_pinvoke& marshaled, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B& unmarshaled)
{
	int32_t unmarshalednextLane_temp_0 = 0;
	unmarshalednextLane_temp_0 = marshaled.___nextLane_0;
	unmarshaled.___nextLane_0 = unmarshalednextLane_temp_0;
	int32_t unmarshalednextConnector_temp_1 = 0;
	unmarshalednextConnector_temp_1 = marshaled.___nextConnector_1;
	unmarshaled.___nextConnector_1 = unmarshalednextConnector_temp_1;
	bool unmarshaledisConnector_temp_2 = false;
	unmarshaledisConnector_temp_2 = static_cast<bool>(marshaled.___isConnector_2);
	unmarshaled.___isConnector_2 = unmarshaledisConnector_temp_2;
}
// Conversion method for clean up from marshalling of: TSNavigation/TSNextLaneSelection
IL2CPP_EXTERN_C void TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshal_pinvoke_cleanup(TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TSNavigation/TSNextLaneSelection
IL2CPP_EXTERN_C void TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshal_com(const TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B& unmarshaled, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshaled_com& marshaled)
{
	marshaled.___nextLane_0 = unmarshaled.___nextLane_0;
	marshaled.___nextConnector_1 = unmarshaled.___nextConnector_1;
	marshaled.___isConnector_2 = static_cast<int32_t>(unmarshaled.___isConnector_2);
}
IL2CPP_EXTERN_C void TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshal_com_back(const TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshaled_com& marshaled, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B& unmarshaled)
{
	int32_t unmarshalednextLane_temp_0 = 0;
	unmarshalednextLane_temp_0 = marshaled.___nextLane_0;
	unmarshaled.___nextLane_0 = unmarshalednextLane_temp_0;
	int32_t unmarshalednextConnector_temp_1 = 0;
	unmarshalednextConnector_temp_1 = marshaled.___nextConnector_1;
	unmarshaled.___nextConnector_1 = unmarshalednextConnector_temp_1;
	bool unmarshaledisConnector_temp_2 = false;
	unmarshaledisConnector_temp_2 = static_cast<bool>(marshaled.___isConnector_2);
	unmarshaled.___isConnector_2 = unmarshaledisConnector_temp_2;
}
// Conversion method for clean up from marshalling of: TSNavigation/TSNextLaneSelection
IL2CPP_EXTERN_C void TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshal_com_cleanup(TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TSNavigation/TSReservedPoints
IL2CPP_EXTERN_C void TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshal_pinvoke(const TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD& unmarshaled, TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___connector_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'connector' of type 'TSReservedPoints': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___connector_0Exception, NULL);
}
IL2CPP_EXTERN_C void TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshal_pinvoke_back(const TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshaled_pinvoke& marshaled, TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD& unmarshaled)
{
	Exception_t* ___connector_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'connector' of type 'TSReservedPoints': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___connector_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TSNavigation/TSReservedPoints
IL2CPP_EXTERN_C void TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshal_pinvoke_cleanup(TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TSNavigation/TSReservedPoints
IL2CPP_EXTERN_C void TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshal_com(const TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD& unmarshaled, TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshaled_com& marshaled)
{
	Exception_t* ___connector_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'connector' of type 'TSReservedPoints': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___connector_0Exception, NULL);
}
IL2CPP_EXTERN_C void TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshal_com_back(const TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshaled_com& marshaled, TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD& unmarshaled)
{
	Exception_t* ___connector_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'connector' of type 'TSReservedPoints': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___connector_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TSNavigation/TSReservedPoints
IL2CPP_EXTERN_C void TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshal_com_cleanup(TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD_marshaled_com& marshaled)
{
}
// System.Void TSNavigation/TSReservedPoints::.ctor(TSLaneConnector,TSPoints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSReservedPoints__ctor_m5CE5BDCEB99DF0A0A05E921D07FE0741A5227EB4 (TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___0__connector, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___1__point, const RuntimeMethod* method) 
{
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_0 = ___0__connector;
		__this->___connector_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connector_0), (void*)L_0);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_1 = ___1__point;
		__this->___point_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___point_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TSReservedPoints__ctor_m5CE5BDCEB99DF0A0A05E921D07FE0741A5227EB4_AdjustorThunk (RuntimeObject* __this, TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* ___0__connector, TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* ___1__point, const RuntimeMethod* method)
{
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD*>(__this + _offset);
	TSReservedPoints__ctor_m5CE5BDCEB99DF0A0A05E921D07FE0741A5227EB4(_thisAdjusted, ___0__connector, ___1__point, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TSNavigation TSTrafficAI::get_NavigateToWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* TSTrafficAI_get_NavigateToWaypoints_m0C0959569CFC61D0372DD339371CFCD7AB7108A1 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_0 = __this->____navigateToWaypoints_4;
		return L_0;
	}
}
// System.Single TSTrafficAI::get_LookAheadDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_get_LookAheadDistance_m398FB1B39A0989E2A6681E8E415459AD171AE1C1 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____lookAheadDistance_30;
		return L_0;
	}
}
// UnityEngine.Transform TSTrafficAI::get_WheelsCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TSTrafficAI_get_WheelsCenter_m11F74DB7CEAFEC094279CA291551CE1F66A9C384 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____wheelsCenter_34;
		return L_0;
	}
}
// System.Single TSTrafficAI::get_carSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____carSpeed_32;
		return L_0;
	}
}
// System.Int32 TSTrafficAI::GetCurrentWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSTrafficAI_GetCurrentWaypoint_mF567555545D595C8D4E705461ABBB595F4463D58 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_0 = __this->____navigateToWaypoints_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___currentWaypoint_4;
		return L_1;
	}
}
// System.String TSTrafficAI::GetCarName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TSTrafficAI_GetCarName_m8ED2062E1C27AA59B9F21A356FED96D30564577F (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myTransform_35;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteralD41D89DAD98E1F1783260FD0A5A774F557A05F0F, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_2;
	}
}
// System.Single TSTrafficAI::GetLookahead_factor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetLookahead_factor_m569EF5F0F51EB90B6A0302E3481BBAF3F8226E7F (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___LOOKAHEAD_FACTOR_7;
		return L_0;
	}
}
// System.Void TSTrafficAI::SetLookahead_factor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_SetLookahead_factor_mDB34CA56E2EC41CD892BA675B4717A7066CE1B16 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, float ___0_Lookahead_factor, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_Lookahead_factor;
		__this->___LOOKAHEAD_FACTOR_7 = L_0;
		return;
	}
}
// System.Void TSTrafficAI::set_IsUpSideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_set_IsUpSideDown_m00F80EB4A2D8582A7518F7010A3E9E55886A1E96 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___isUpSideDown_46 = L_0;
		return;
	}
}
// System.Boolean TSTrafficAI::get_IsUpSideDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficAI_get_IsUpSideDown_mEE3DC19FA985CBC19ECE90351D1FC2AFBAB356A2 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isUpSideDown_46;
		return L_0;
	}
}
// System.Void TSTrafficAI::set_ForcedRespawn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_set_ForcedRespawn_m615C1D2557556013D226208D4CA42D62982E14D1 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___forcedRespawn_47 = L_0;
		return;
	}
}
// System.Boolean TSTrafficAI::get_ForcedRespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficAI_get_ForcedRespawn_m47BD7FA67E038549401BFE695D0F46C3E86B4240 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forcedRespawn_47;
		return L_0;
	}
}
// System.Void TSTrafficAI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_Awake_m801E20639680BC93F23734888F5E28035ADB1DD8 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94_m1FE1E6D3D2A7F04FD1F7B11F8D83D7175F0E0950_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___myTransform_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myTransform_35), (void*)L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_2;
		L_2 = GameObject_GetComponent_TisTSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94_m1FE1E6D3D2A7F04FD1F7B11F8D83D7175F0E0950(L_1, GameObject_GetComponent_TisTSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94_m1FE1E6D3D2A7F04FD1F7B11F8D83D7175F0E0950_RuntimeMethod_var);
		__this->____navigateToWaypoints_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____navigateToWaypoints_4), (void*)L_2);
		TSTrafficAI_IRDSWheelsCenter_m766FEE365530DE408E20DE51B2DD465FE048F32C(__this, NULL);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_3;
		L_3 = Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391(__this, Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		__this->___bodies_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bodies_10), (void*)L_3);
		float L_4 = __this->___myLaneOffsetMin_28;
		float L_5 = __this->___myLaneOffsetMax_29;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_4, L_5, NULL);
		__this->___myLaneOffset_51 = L_6;
		return;
	}
}
// System.Void TSTrafficAI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_Start_mA815EC10BCA5073B1B2EE7CC050F989B1F6667FF (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___carWidth_12;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = TSTrafficAI_CarSize_m5734003012D40DE4A62649E12B5AD9B06510CF39(__this, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_3 = L_2.___x_2;
		__this->___carWidth_12 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_5 = L_4.___z_4;
		__this->___carDepth_11 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_7 = L_6.___y_3;
		__this->___carHeight_13 = L_7;
	}

IL_004a:
	{
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_8 = __this->___playerSensor_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_00b4;
		}
	}
	{
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10 = __this->___playerSensor_24;
		NullCheck(L_10);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_10, (bool)1, NULL);
		float L_11 = __this->___carWidth_12;
		float L_12 = __this->___playerSensorWidthMultiplier_25;
		float L_13 = __this->___carHeight_13;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)il2cpp_codegen_multiply(L_11, L_12)), L_13, (80.0f), NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_14 = __this->___playerSensor_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		NullCheck(L_14);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_14, L_15, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_16 = __this->___playerSensor_24;
		float L_17 = __this->___carHeight_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), ((float)(L_17/(2.0f))), (40.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_16, L_18, NULL);
	}

IL_00b4:
	{
		float L_19 = __this->___carWidth_12;
		__this->___halfCarWidth_49 = ((float)(L_19/(2.0f)));
		float L_20 = __this->___carDepth_11;
		__this->___halfCarDepth_50 = ((float)(L_20/(2.0f)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___kFriction_36 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kFriction_36), (void*)L_21);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___kFriction_36;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = __this->___kFriction_36;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.400000006f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___kFriction_36;
		NullCheck(L_24);
		int32_t L_25 = 1;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_28 = L_27.___y_3;
		__this->___c_39 = ((float)il2cpp_codegen_multiply(L_26, ((-L_28))));
		return;
	}
}
// System.Void TSTrafficAI::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_FixedUpdate_mF90D3688C9F7DDC1B62FB81C43CD99E20733E21F (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* L_0 = __this->___UpdateCarSpeed_56;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* L_1 = __this->___UpdateCarSpeed_56;
		float* L_2 = (&__this->____carSpeed_32);
		NullCheck(L_1);
		GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_inline(L_1, L_2, NULL);
	}

IL_0019:
	{
		TSTrafficAI_GeneralCalculations_m6B2F7E394D992160A25A28A87FFBC39A2DBE10BF(__this, NULL);
		TSTrafficAI_controllerAI_mEA93B00DBE91D1143044E1A1DC48C58E0334D0D8(__this, NULL);
		return;
	}
}
// System.Void TSTrafficAI::controllerAI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_controllerAI_mEA93B00DBE91D1143044E1A1DC48C58E0334D0D8 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_0 = __this->____navigateToWaypoints_4;
		NullCheck(L_0);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_1 = L_0->___waypoints_13;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_2 = __this->____navigateToWaypoints_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___currentWaypoint_4;
		NullCheck(L_1);
		int32_t L_4 = L_3;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___point_0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_7 = __this->____navigateToWaypoints_4;
		NullCheck(L_7);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_8 = L_7->___waypoints_13;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_9 = __this->____navigateToWaypoints_4;
		NullCheck(L_9);
		int32_t L_10 = L_9->___previousWaypointSteer_8;
		NullCheck(L_8);
		int32_t L_11 = L_10;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___point_0;
		float L_14;
		L_14 = TSTrafficAI_GetSteer_m7C4D54565158990E218C9F432461E83C705C01C5(__this, L_6, L_13, (bool)1, NULL);
		__this->___steering_42 = L_14;
		float L_15;
		L_15 = TSTrafficAI_GetBrake_m997911CD41A557AED801F632AA3AA4ECAC8FFCC7(__this, NULL);
		V_0 = L_15;
		float L_16;
		L_16 = TSTrafficAI_GetAccel_m0E5C14F783A7143EE832C0253106C9D12B6E6389(__this, NULL);
		float L_17;
		L_17 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_16, NULL);
		__this->___inputTorque_37 = L_17;
		float L_18 = __this->___inputTorque_37;
		if ((!(((float)L_18) == ((float)(1.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		float L_19 = __this->___inputTorque_37;
		__this->___inputTorque_37 = ((float)il2cpp_codegen_add(L_19, (1.0f)));
	}

IL_007c:
	{
		float L_20 = __this->___inputTorque_37;
		float L_21 = __this->___throttle_41;
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_22 = __this->___throttle_41;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___throttle_41 = ((float)il2cpp_codegen_add(L_22, ((float)(L_23/(1.60000002f)))));
		goto IL_00bc;
	}

IL_00a4:
	{
		float L_24 = __this->___throttle_41;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___throttle_41 = ((float)il2cpp_codegen_subtract(L_24, ((float)(L_25/(0.600000024f)))));
	}

IL_00bc:
	{
		float L_26 = V_0;
		if ((!(((float)L_26) == ((float)(1.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		float L_27 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_27, (1.0f)));
	}

IL_00cc:
	{
		float L_28 = V_0;
		float L_29 = __this->___brake_40;
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_00ef;
		}
	}
	{
		float L_30 = __this->___brake_40;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___brake_40 = ((float)il2cpp_codegen_add(L_30, ((float)(L_31/(1.20000005f)))));
		goto IL_0107;
	}

IL_00ef:
	{
		float L_32 = __this->___brake_40;
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___brake_40 = ((float)il2cpp_codegen_subtract(L_32, ((float)(L_33/(0.600000024f)))));
	}

IL_0107:
	{
		float L_34 = V_0;
		float L_35;
		L_35 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_34, NULL);
		__this->___brake_40 = L_35;
		float L_36 = __this->___throttle_41;
		float L_37;
		L_37 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_36, NULL);
		__this->___throttle_41 = L_37;
		TSTrafficAI_CheckUpsideDown_mE3D22D9EDA98F39691CF9C5AD218D9846334DC69(__this, NULL);
		OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* L_38 = __this->___OnUpdateAI_57;
		if (!L_38)
		{
			goto IL_0155;
		}
	}
	{
		OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* L_39 = __this->___OnUpdateAI_57;
		float L_40 = __this->___steering_42;
		float L_41 = __this->___brake_40;
		float L_42 = __this->___throttle_41;
		bool L_43 = __this->___isUpSideDown_46;
		NullCheck(L_39);
		OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_inline(L_39, L_40, L_41, L_42, L_43, NULL);
	}

IL_0155:
	{
		return;
	}
}
// System.Single TSTrafficAI::GetAccel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetAccel_m0E5C14F783A7143EE832C0253106C9D12B6E6389 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_1 = __this->___MAXSPEED_33;
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_subtract(L_1, (2.0f)))))))
		{
			goto IL_0021;
		}
	}
	{
		__this->___accelResult_58 = (1.0f);
		goto IL_003a;
	}

IL_0021:
	{
		float L_2;
		L_2 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_3 = __this->___MAXSPEED_33;
		__this->___accelResult_58 = ((float)il2cpp_codegen_subtract((2.0f), ((float)(L_2/L_3))));
	}

IL_003a:
	{
		float L_4 = __this->___brake_40;
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0052;
		}
	}
	{
		__this->___accelResult_58 = (0.0f);
	}

IL_0052:
	{
		float L_5 = __this->___accelResult_58;
		return L_5;
	}
}
// System.Void TSTrafficAI::GetMaxLockAheadDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_GetMaxLockAheadDistance_m5C794BCF69EBE78141168F8A1FEDEADB17BF68E4 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_0 = __this->___nextConnectorInstance_18;
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_1 = __this->___nextConnectorInstance_18;
		NullCheck(L_1);
		float L_2 = L_1->___remainingGreenLightTime_16;
		if ((((float)L_2) == ((float)(-1.0f))))
		{
			goto IL_007d;
		}
	}
	{
		float L_3;
		L_3 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_4 = __this->___nextConnectorInstance_18;
		NullCheck(L_4);
		float L_5 = L_4->___remainingGreenLightTime_16;
		__this->___distanceToRun_59 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_6 = __this->___nextConnectorInstance_18;
		NullCheck(L_6);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_7 = L_6->___points_3;
		NullCheck(L_7);
		int32_t L_8 = 0;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___point_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___myTransform_35;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_12, NULL);
		V_1 = L_13;
		float L_14;
		L_14 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_15 = __this->___nextConnectorInstance_18;
		NullCheck(L_15);
		float L_16 = L_15->___totalDistance_12;
		V_0 = ((float)il2cpp_codegen_add(L_14, L_16));
		float L_17 = __this->___distanceToRun_59;
		float L_18 = V_0;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_007d;
		}
	}
	{
		__this->___nextCarSpeedSqr_61 = (0.0f);
	}

IL_007d:
	{
		float L_19 = __this->___currentSpeedSqr_38;
		float L_20 = __this->___nextCarSpeedSqr_61;
		float L_21 = __this->___c_39;
		__this->___maxLockaheadDistance_5 = ((float)(((float)il2cpp_codegen_subtract(L_19, L_20))/((float)il2cpp_codegen_multiply((2.0f), L_21))));
		float L_22 = __this->___currentSpeedSqr_38;
		float L_23 = __this->___c_39;
		__this->___maxLockaheadDistanceFullStop_6 = ((float)(L_22/((float)il2cpp_codegen_multiply((2.0f), L_23))));
		float L_24 = __this->___maxLockaheadDistance_5;
		if ((!(((float)L_24) < ((float)(0.0f)))))
		{
			goto IL_00ce;
		}
	}
	{
		__this->___maxLockaheadDistance_5 = (0.0f);
	}

IL_00ce:
	{
		float L_25 = __this->___maxLockaheadDistanceFullStop_6;
		if ((!(((float)L_25) < ((float)(0.0f)))))
		{
			goto IL_00e6;
		}
	}
	{
		__this->___maxLockaheadDistanceFullStop_6 = (0.0f);
	}

IL_00e6:
	{
		float L_26 = __this->___maxLockaheadDistance_5;
		float L_27 = __this->___lengthMargin_27;
		__this->___maxLockaheadDistance_5 = ((float)il2cpp_codegen_add(L_26, L_27));
		float L_28 = __this->___maxLockaheadDistanceFullStop_6;
		float L_29 = __this->___halfCarDepth_50;
		float L_30 = __this->___lengthMargin_27;
		__this->___maxLockaheadDistanceFullStop_6 = ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_add(L_29, L_30))));
		return;
	}
}
// System.Void TSTrafficAI::GetMaxSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_GetMaxSpeed_m1AA46C69E451CFA2AA817DCC3A28713C1B60EA8A (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_0 = __this->____navigateToWaypoints_4;
		NullCheck(L_0);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_1 = L_0->___nextTrackPath_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_1, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_3 = __this->___nextPathIndex_21;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0055;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_4 = __this->____navigateToWaypoints_4;
		NullCheck(L_4);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_5 = L_4->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_6 = __this->____navigateToWaypoints_4;
		NullCheck(L_6);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_7 = L_6->___nextTrackPath_11;
		int32_t L_8 = __this->___nextPathIndex_21;
		NullCheck(L_7);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_9;
		L_9 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_7, L_8, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_10 = L_9.___nextLane_0;
		NullCheck(L_5);
		int32_t L_11 = L_10;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_12 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		float L_13 = L_12->___maxSpeed_5;
		__this->___MAXSPEED_33 = ((float)(L_13/(3.5999999f)));
		return;
	}

IL_0055:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_14 = __this->____navigateToWaypoints_4;
		NullCheck(L_14);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_15 = L_14->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_16 = __this->____navigateToWaypoints_4;
		NullCheck(L_16);
		int32_t L_17 = L_16->___currentLane_9;
		NullCheck(L_15);
		int32_t L_18 = L_17;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		float L_20 = L_19->___maxSpeed_5;
		__this->___MAXSPEED_33 = ((float)(L_20/(3.5999999f)));
		return;
	}
}
// System.Void TSTrafficAI::GetBrakeForCorners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_GetBrakeForCorners_mCE868CACE6EA97A66629C0B6803254324548AAD3 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m609B32B573D542156D2BB51795569F077B07FFBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4CDDF0876E4FD31EFC39AD9CB473983FE3412CC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_0 = __this->___brakeSpeeds_15;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_inline(L_0, List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0133;
		}
	}
	{
		V_0 = 0;
		goto IL_0122;
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2));
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_2 = __this->___brakeSpeeds_15;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_4;
		L_4 = List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683(L_2, L_3, List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_5 = L_4.___point_1;
		(&V_1)->___point_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___point_1), (void*)L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___myTransform_35;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_8 = (&V_1)->___point_1;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_9, NULL);
		V_2 = L_10;
		float L_11;
		L_11 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		(&V_1)->___distance_0 = L_11;
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_12 = __this->___brakeSpeeds_15;
		int32_t L_13 = V_0;
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_14 = V_1;
		NullCheck(L_12);
		List_1_set_Item_m4CDDF0876E4FD31EFC39AD9CB473983FE3412CC2(L_12, L_13, L_14, List_1_set_Item_m4CDDF0876E4FD31EFC39AD9CB473983FE3412CC2_RuntimeMethod_var);
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_15 = __this->___brakeSpeeds_15;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_17;
		L_17 = List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683(L_15, L_16, List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_RuntimeMethod_var);
		float L_18 = L_17.___distance_0;
		float L_19 = __this->___sqrMaxLockaheadDistance_63;
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20;
		L_20 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_21 = __this->___brakeSpeeds_15;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_23;
		L_23 = List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683(L_21, L_22, List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_24 = L_23.___point_1;
		NullCheck(L_24);
		float L_25 = L_24->___maxSpeedLimit_8;
		if ((!(((float)L_20) > ((float)((float)(L_25/(3.5999999f)))))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_26 = __this->___returningValue_62;
		float L_27;
		L_27 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_28 = __this->___brakeSpeeds_15;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_30;
		L_30 = List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683(L_28, L_29, List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_31 = L_30.___point_1;
		NullCheck(L_31);
		float L_32 = L_31->___maxSpeedLimit_8;
		__this->___returningValue_62 = ((float)il2cpp_codegen_add(L_26, ((float)(((float)il2cpp_codegen_subtract(L_27, ((float)(L_32/(3.5999999f)))))/(5.0f)))));
	}

IL_00e3:
	{
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_33 = __this->___brakeSpeeds_15;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_35;
		L_35 = List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683(L_33, L_34, List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_RuntimeMethod_var);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_36 = L_35.___point_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->___reservationID_1;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_38 = __this->____navigateToWaypoints_4;
		NullCheck(L_38);
		int32_t L_39 = L_38->___myID_21;
		if ((((int32_t)L_37) == ((int32_t)L_39)))
		{
			goto IL_011e;
		}
	}
	{
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_40 = __this->___brakeSpeeds_15;
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_41 = __this->___brakeSpeeds_15;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_43;
		L_43 = List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683(L_41, L_42, List_1_get_Item_m9699CE46D90DE8494F336C935ADAD79AF6E2A683_RuntimeMethod_var);
		NullCheck(L_40);
		bool L_44;
		L_44 = List_1_Remove_m609B32B573D542156D2BB51795569F077B07FFBB(L_40, L_43, List_1_Remove_m609B32B573D542156D2BB51795569F077B07FFBB_RuntimeMethod_var);
	}

IL_011e:
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0122:
	{
		int32_t L_46 = V_0;
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_47 = __this->___brakeSpeeds_15;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_inline(L_47, List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_RuntimeMethod_var);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_0018;
		}
	}

IL_0133:
	{
		return;
	}
}
// System.Single TSTrafficAI::GetBrake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetBrake_m997911CD41A557AED801F632AA3AA4ECAC8FFCC7 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* G_B2_0 = NULL;
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* G_B3_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B21_0 = 0.0f;
	float G_B20_0 = 0.0f;
	float G_B22_0 = 0.0f;
	float G_B22_1 = 0.0f;
	{
		__this->___returningValue_62 = (0.0f);
		TSTrafficAI_GetMaxLockAheadDistance_m5C794BCF69EBE78141168F8A1FEDEADB17BF68E4(__this, NULL);
		float L_0 = __this->___maxLockaheadDistanceFullStop_6;
		float L_1 = __this->___maxLockaheadDistanceFullStop_6;
		__this->___sqrMaxLockaheadDistance_63 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		TSTrafficAI_GetMaxSpeed_m1AA46C69E451CFA2AA817DCC3A28713C1B60EA8A(__this, NULL);
		float L_2 = __this->___minPlayerSensorLenght_26;
		float L_3 = __this->___maxLockaheadDistanceFullStop_6;
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_2, L_3, NULL);
		V_0 = L_4;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_5 = __this->___playerSensor_24;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = __this->___playerSensor_24;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_6, NULL);
		float L_8 = L_7.___x_2;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_9 = __this->___playerSensor_24;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_8, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_5, L_13, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_14 = __this->___playerSensor_24;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_15 = __this->___playerSensor_24;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = BoxCollider_get_center_mC370C79F9FC9398D0DD080500FA2EE14FC6E36C7(L_15, NULL);
		float L_17 = L_16.___y_3;
		float L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), L_17, ((float)(L_18/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_14);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_14, L_19, NULL);
		float L_20 = __this->___segDistance_20;
		G_B1_0 = __this;
		if ((((float)L_20) < ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_00af;
		}
	}
	{
		float L_21 = __this->___segDistance_20;
		G_B3_0 = L_21;
		G_B3_1 = G_B1_0;
		goto IL_00b4;
	}

IL_00af:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_00b4:
	{
		NullCheck(G_B3_1);
		G_B3_1->___segDistance_20 = G_B3_0;
		TSTrafficAI_GetBrakeForCorners_mCE868CACE6EA97A66629C0B6803254324548AAD3(__this, NULL);
		V_1 = (bool)1;
		V_2 = (bool)1;
		bool L_22 = __this->___fullStop_44;
		if (!L_22)
		{
			goto IL_0102;
		}
	}
	{
		float L_23;
		L_23 = TSTrafficAI_GetNearestPlayerDistance_mBB1C0EDA755A0BEE5611F6C7DFAD89C8A54C89CC(__this, NULL);
		V_3 = L_23;
		float L_24 = V_3;
		float L_25 = __this->___maxLockaheadDistanceFullStop_6;
		if ((!(((float)L_24) < ((float)((float)il2cpp_codegen_add(L_25, (2.0f)))))))
		{
			goto IL_0102;
		}
	}
	{
		float L_26 = __this->___returningValue_62;
		float L_27 = V_3;
		float L_28 = __this->___maxLockaheadDistanceFullStop_6;
		__this->___returningValue_62 = ((float)il2cpp_codegen_add(L_26, ((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_27, L_28))/(2.0f)))))));
	}

IL_0102:
	{
		float L_29 = __this->___maxLockaheadDistance_5;
		if ((((float)(5.0f)) > ((float)L_29)))
		{
			goto IL_0117;
		}
	}
	{
		float L_30 = __this->___maxLockaheadDistance_5;
		G_B9_0 = L_30;
		goto IL_011c;
	}

IL_0117:
	{
		G_B9_0 = (5.0f);
	}

IL_011c:
	{
		V_4 = G_B9_0;
		goto IL_020d;
	}

IL_0123:
	{
		V_2 = (bool)0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_31 = __this->____navigateToWaypoints_4;
		NullCheck(L_31);
		bool L_32 = L_31->___overTaking_24;
		if (!L_32)
		{
			goto IL_015c;
		}
	}
	{
		float L_33;
		L_33 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_34 = __this->___changeLaneTime_23;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_33, L_34))) > ((float)(1.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		float L_35;
		L_35 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___changeLaneTime_23 = L_35;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_36 = __this->____navigateToWaypoints_4;
		NullCheck(L_36);
		TSNavigation_LaneChange_m0BA2A7CA95DA85A8B2295FB958094D115A037D8C(L_36, (bool)0, NULL);
	}

IL_015c:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_37 = __this->____navigateToWaypoints_4;
		NullCheck(L_37);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_38 = L_37->___nextTrackPath_11;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_38, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if (!L_39)
		{
			goto IL_017d;
		}
	}
	{
		bool L_40;
		L_40 = TSTrafficAI_GetCurrentPoint_m7B18A2B3394205263F446DA878A04D69E54D096F(__this, NULL);
		if (L_40)
		{
			goto IL_0195;
		}
	}
	{
		float L_41 = __this->___returningValue_62;
		return L_41;
	}

IL_017d:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_42 = __this->____navigateToWaypoints_4;
		NullCheck(L_42);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_43 = L_42->___lastWaypoints_14;
		int32_t L_44 = __this->___previousWaypointCurve_19;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		__this->___currenPoint_16 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currenPoint_16), (void*)L_46);
	}

IL_0195:
	{
		TSTrafficAI_CheckPointSpeed_m091BC656D475E349A4E5A9B3C5D7AE5CEC7A83E5(__this, NULL);
		float L_47 = __this->___MAXSPEED_33;
		if ((!(((float)L_47) == ((float)(0.0f)))))
		{
			goto IL_01ba;
		}
	}
	{
		float L_48 = __this->___returningValue_62;
		__this->___returningValue_62 = ((float)il2cpp_codegen_add(L_48, (1.0f)));
	}

IL_01ba:
	{
		float L_49;
		L_49 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_50 = __this->____navigateToWaypoints_4;
		NullCheck(L_50);
		bool L_51 = L_50->___overTaking_24;
		G_B20_0 = L_49;
		if (L_51)
		{
			G_B21_0 = L_49;
			goto IL_01d5;
		}
	}
	{
		float L_52 = __this->___MAXSPEED_33;
		G_B22_0 = L_52;
		G_B22_1 = G_B20_0;
		goto IL_01e1;
	}

IL_01d5:
	{
		float L_53 = __this->___MAXSPEED_33;
		G_B22_0 = ((float)il2cpp_codegen_multiply(L_53, (1.20000005f)));
		G_B22_1 = G_B21_0;
	}

IL_01e1:
	{
		if ((!(((float)G_B22_1) >= ((float)G_B22_0))))
		{
			goto IL_0203;
		}
	}
	{
		float L_54 = __this->___returningValue_62;
		float L_55;
		L_55 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_56 = __this->___MAXSPEED_33;
		__this->___returningValue_62 = ((float)il2cpp_codegen_add(L_54, ((float)(((float)il2cpp_codegen_subtract(L_55, L_56))/(5.0f)))));
	}

IL_0203:
	{
		bool L_57;
		L_57 = TSTrafficAI_TryToReservePoint_m06D605550C67009B4000859DA3E89596F6BCD270(__this, (&V_1), NULL);
		if (!L_57)
		{
			goto IL_0243;
		}
	}

IL_020d:
	{
		float L_58 = __this->___segDistance_20;
		float L_59 = V_4;
		if ((((float)L_58) <= ((float)L_59)))
		{
			goto IL_022a;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_60 = __this->____navigateToWaypoints_4;
		NullCheck(L_60);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_61 = L_60->___reservedPoints_25;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_inline(L_61, Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_RuntimeMethod_var);
		if ((((int32_t)L_62) > ((int32_t)1)))
		{
			goto IL_0230;
		}
	}

IL_022a:
	{
		bool L_63 = V_1;
		if (L_63)
		{
			goto IL_0123;
		}
	}

IL_0230:
	{
		bool L_64 = V_2;
		if (!L_64)
		{
			goto IL_0243;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_65 = __this->___currenPoint_16;
		NullCheck(L_65);
		int32_t L_66 = L_65->___reservationID_1;
		if (!L_66)
		{
			goto IL_0123;
		}
	}

IL_0243:
	{
		TSTrafficAI_CheckIfNeedsToBrake_m567B1CBFABC149C67FC2DFEFD124F7CE28BEC89E(__this, NULL);
		float L_67 = __this->___returningValue_62;
		float L_68;
		L_68 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_67, NULL);
		return L_68;
	}
}
// System.Void TSTrafficAI::CheckIfNeedsToBrake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_CheckIfNeedsToBrake_m567B1CBFABC149C67FC2DFEFD124F7CE28BEC89E (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float G_B44_0 = 0.0f;
	float G_B44_1 = 0.0f;
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* G_B44_2 = NULL;
	float G_B43_0 = 0.0f;
	float G_B43_1 = 0.0f;
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* G_B43_2 = NULL;
	float G_B45_0 = 0.0f;
	float G_B45_1 = 0.0f;
	float G_B45_2 = 0.0f;
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* G_B45_3 = NULL;
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_0 = __this->___currenPoint_16;
		NullCheck(L_0);
		int32_t L_1 = L_0->___reservationID_1;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_2 = __this->____navigateToWaypoints_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___myID_21;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}
	{
		bool L_4 = __this->___fullStop_44;
		if (!L_4)
		{
			goto IL_0413;
		}
	}

IL_0023:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___myTransform_35;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_6 = __this->___currenPoint_16;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___point_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_5, L_7, NULL);
		float L_9 = L_8.___z_4;
		float L_10 = __this->___halfCarDepth_50;
		V_0 = ((float)il2cpp_codegen_subtract(L_9, ((float)il2cpp_codegen_subtract(L_10, (2.0f)))));
		bool L_11 = __this->___fullStop_44;
		if (L_11)
		{
			goto IL_0161;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_12 = __this->___currenPoint_16;
		NullCheck(L_12);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_13 = L_12->___carwhoReserved_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0161;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_15 = __this->___currentConnector_17;
		if (!L_15)
		{
			goto IL_0090;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_16 = __this->___currentConnector_17;
		if (!L_16)
		{
			goto IL_0161;
		}
	}
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_17 = __this->___currentConnector_17;
		NullCheck(L_17);
		bool L_18 = L_17->___connectorReservedByTrafficLight_15;
		if (L_18)
		{
			goto IL_0161;
		}
	}

IL_0090:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_19 = __this->___currenPoint_16;
		NullCheck(L_19);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_20 = L_19->___carwhoReserved_2;
		NullCheck(L_20);
		float L_21 = L_20->___currentSpeedSqr_38;
		__this->___nextCarSpeedSqr_61 = L_21;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_22 = __this->____navigateToWaypoints_4;
		NullCheck(L_22);
		bool L_23 = L_22->___overTaking_24;
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		float L_24;
		L_24 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_25 = __this->___changeLaneTime_23;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_24, L_25))) > ((float)(1.0f)))))
		{
			goto IL_00e9;
		}
	}
	{
		float L_26;
		L_26 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___changeLaneTime_23 = L_26;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_27 = __this->____navigateToWaypoints_4;
		NullCheck(L_27);
		TSNavigation_LaneChange_m0BA2A7CA95DA85A8B2295FB958094D115A037D8C(L_27, (bool)0, NULL);
		__this->___returningValue_62 = (1.0f);
		return;
	}

IL_00e9:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_28 = __this->___currenPoint_16;
		NullCheck(L_28);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_29 = L_28->___carwhoReserved_2;
		NullCheck(L_29);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_30 = L_29->____navigateToWaypoints_4;
		NullCheck(L_30);
		bool L_31 = L_30->___overTaking_24;
		if (!L_31)
		{
			goto IL_010c;
		}
	}
	{
		__this->___returningValue_62 = (1.0f);
		return;
	}

IL_010c:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_32 = __this->___currenPoint_16;
		NullCheck(L_32);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_33 = L_32->___carwhoReserved_2;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_33->___myTransform_35;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___myTransform_35;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_35, L_37, NULL);
		V_4 = L_38;
		float L_39;
		L_39 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		float L_40 = __this->___halfCarDepth_50;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_41 = __this->___currenPoint_16;
		NullCheck(L_41);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_42 = L_41->___carwhoReserved_2;
		NullCheck(L_42);
		float L_43 = L_42->___carDepth_11;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_39, L_40)), ((float)(L_43/(2.0f)))));
		float L_44 = V_1;
		float L_45 = V_0;
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_016c;
		}
	}
	{
		float L_46 = V_1;
		V_0 = L_46;
		goto IL_016c;
	}

IL_0161:
	{
		__this->___nextCarSpeedSqr_61 = (0.0f);
	}

IL_016c:
	{
		float L_47 = V_0;
		float L_48 = __this->___maxLockaheadDistance_5;
		float L_49 = __this->___lengthMargin_27;
		if ((((float)L_47) < ((float)((float)il2cpp_codegen_add(L_48, L_49)))))
		{
			goto IL_0187;
		}
	}
	{
		bool L_50 = __this->___fullStop_44;
		if (!L_50)
		{
			goto IL_0413;
		}
	}

IL_0187:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_51 = __this->___currenPoint_16;
		NullCheck(L_51);
		int32_t L_52 = L_51->___reservationID_1;
		if (L_52)
		{
			goto IL_019f;
		}
	}
	{
		bool L_53 = __this->___fullStop_44;
		if (!L_53)
		{
			goto IL_03bf;
		}
	}

IL_019f:
	{
		bool L_54 = __this->___fullStop_44;
		if (L_54)
		{
			goto IL_01da;
		}
	}
	{
		float L_55 = V_0;
		float L_56 = __this->___halfCarDepth_50;
		if ((!(((float)L_55) > ((float)L_56))))
		{
			goto IL_03bf;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_57 = __this->____navigateToWaypoints_4;
		NullCheck(L_57);
		bool L_58 = L_57->___travelingOnConector_16;
		if (L_58)
		{
			goto IL_03bf;
		}
	}
	{
		float L_59;
		L_59 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_60 = __this->___changeLaneTime_23;
		float L_61 = __this->___timerForChangeLane_45;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_59, L_60))) > ((float)L_61))))
		{
			goto IL_03bf;
		}
	}

IL_01da:
	{
		float L_62;
		L_62 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___changeLaneTime_23 = L_62;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_63 = __this->____navigateToWaypoints_4;
		NullCheck(L_63);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_64 = L_63->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_65 = __this->____navigateToWaypoints_4;
		NullCheck(L_65);
		int32_t L_66 = L_65->___currentLane_9;
		NullCheck(L_64);
		int32_t L_67 = L_66;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_69 = L_68->___points_6;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_70 = __this->____navigateToWaypoints_4;
		NullCheck(L_70);
		int32_t L_71 = L_70->___currentWaypoint_4;
		NullCheck(L_69);
		int32_t L_72 = L_71;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_73 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		int32_t L_74 = L_73->___leftParalelLaneIndex_7;
		if ((((int32_t)L_74) == ((int32_t)(-1))))
		{
			goto IL_02d2;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_75 = __this->____navigateToWaypoints_4;
		NullCheck(L_75);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_76 = L_75->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_77 = __this->____navigateToWaypoints_4;
		NullCheck(L_77);
		int32_t L_78 = L_77->___currentLane_9;
		NullCheck(L_76);
		int32_t L_79 = L_78;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_80 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		int32_t L_81 = L_80->___laneLinkLeft_9;
		V_2 = L_81;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_82 = __this->____navigateToWaypoints_4;
		NullCheck(L_82);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_83 = L_82->___lanes_15;
		int32_t L_84 = V_2;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		int32_t L_87 = L_86->___laneLinkRight_8;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_88 = __this->____navigateToWaypoints_4;
		NullCheck(L_88);
		int32_t L_89 = L_88->___currentLane_9;
		if ((!(((uint32_t)L_87) == ((uint32_t)L_89))))
		{
			goto IL_0262;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_90 = __this->____navigateToWaypoints_4;
		NullCheck(L_90);
		TSNavigation_LaneChange_m0BA2A7CA95DA85A8B2295FB958094D115A037D8C(L_90, (bool)1, NULL);
		goto IL_02d2;
	}

IL_0262:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_91 = __this->____navigateToWaypoints_4;
		NullCheck(L_91);
		bool L_92 = L_91->___overTaking_24;
		if (L_92)
		{
			goto IL_02d2;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_93 = __this->____navigateToWaypoints_4;
		NullCheck(L_93);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_94 = L_93->___lanes_15;
		int32_t L_95 = V_2;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		int32_t L_98 = L_97->___laneLinkLeft_9;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_99 = __this->____navigateToWaypoints_4;
		NullCheck(L_99);
		int32_t L_100 = L_99->___currentLane_9;
		if ((!(((uint32_t)L_98) == ((uint32_t)L_100))))
		{
			goto IL_02d2;
		}
	}
	{
		float L_101;
		L_101 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_102 = __this->___MAXSPEED_33;
		if ((!(((float)L_101) < ((float)L_102))))
		{
			goto IL_02d2;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_103 = __this->___currenPoint_16;
		NullCheck(L_103);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_104 = L_103->___carwhoReserved_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_105;
		L_105 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_104, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_105)
		{
			goto IL_02c6;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_106 = __this->___currenPoint_16;
		NullCheck(L_106);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_107 = L_106->___carwhoReserved_2;
		NullCheck(L_107);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_108 = L_107->____navigateToWaypoints_4;
		NullCheck(L_108);
		bool L_109 = L_108->___overTaking_24;
		if (L_109)
		{
			goto IL_02d2;
		}
	}

IL_02c6:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_110 = __this->____navigateToWaypoints_4;
		NullCheck(L_110);
		TSNavigation_OverTaking_m82C3F3C33C165063DAF392C08D781B81CB6F5988(L_110, (bool)1, NULL);
	}

IL_02d2:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_111 = __this->____navigateToWaypoints_4;
		NullCheck(L_111);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_112 = L_111->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_113 = __this->____navigateToWaypoints_4;
		NullCheck(L_113);
		int32_t L_114 = L_113->___currentLane_9;
		NullCheck(L_112);
		int32_t L_115 = L_114;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_116 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_117 = L_116->___points_6;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_118 = __this->____navigateToWaypoints_4;
		NullCheck(L_118);
		int32_t L_119 = L_118->___currentWaypoint_4;
		NullCheck(L_117);
		int32_t L_120 = L_119;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_121 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		int32_t L_122 = L_121->___rightParalelLaneIndex_6;
		if ((((int32_t)L_122) == ((int32_t)(-1))))
		{
			goto IL_03bf;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_123 = __this->____navigateToWaypoints_4;
		NullCheck(L_123);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_124 = L_123->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_125 = __this->____navigateToWaypoints_4;
		NullCheck(L_125);
		int32_t L_126 = L_125->___currentLane_9;
		NullCheck(L_124);
		int32_t L_127 = L_126;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_128 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		int32_t L_129 = L_128->___laneLinkRight_8;
		V_3 = L_129;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_130 = __this->____navigateToWaypoints_4;
		NullCheck(L_130);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_131 = L_130->___lanes_15;
		int32_t L_132 = V_3;
		NullCheck(L_131);
		int32_t L_133 = L_132;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_134);
		int32_t L_135 = L_134->___laneLinkLeft_9;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_136 = __this->____navigateToWaypoints_4;
		NullCheck(L_136);
		int32_t L_137 = L_136->___currentLane_9;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_137))))
		{
			goto IL_034f;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_138 = __this->____navigateToWaypoints_4;
		NullCheck(L_138);
		TSNavigation_LaneChange_m0BA2A7CA95DA85A8B2295FB958094D115A037D8C(L_138, (bool)0, NULL);
		goto IL_03bf;
	}

IL_034f:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_139 = __this->____navigateToWaypoints_4;
		NullCheck(L_139);
		bool L_140 = L_139->___overTaking_24;
		if (L_140)
		{
			goto IL_03bf;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_141 = __this->____navigateToWaypoints_4;
		NullCheck(L_141);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_142 = L_141->___lanes_15;
		int32_t L_143 = V_3;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_145);
		int32_t L_146 = L_145->___laneLinkRight_8;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_147 = __this->____navigateToWaypoints_4;
		NullCheck(L_147);
		int32_t L_148 = L_147->___currentLane_9;
		if ((!(((uint32_t)L_146) == ((uint32_t)L_148))))
		{
			goto IL_03bf;
		}
	}
	{
		float L_149;
		L_149 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_150 = __this->___MAXSPEED_33;
		if ((!(((float)L_149) < ((float)L_150))))
		{
			goto IL_03bf;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_151 = __this->___currenPoint_16;
		NullCheck(L_151);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_152 = L_151->___carwhoReserved_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_153;
		L_153 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_152, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_153)
		{
			goto IL_03b3;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_154 = __this->___currenPoint_16;
		NullCheck(L_154);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_155 = L_154->___carwhoReserved_2;
		NullCheck(L_155);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_156 = L_155->____navigateToWaypoints_4;
		NullCheck(L_156);
		bool L_157 = L_156->___overTaking_24;
		if (L_157)
		{
			goto IL_03bf;
		}
	}

IL_03b3:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_158 = __this->____navigateToWaypoints_4;
		NullCheck(L_158);
		TSNavigation_OverTaking_m82C3F3C33C165063DAF392C08D781B81CB6F5988(L_158, (bool)0, NULL);
	}

IL_03bf:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_159 = __this->___currenPoint_16;
		NullCheck(L_159);
		int32_t L_160 = L_159->___reservationID_1;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_161 = __this->____navigateToWaypoints_4;
		NullCheck(L_161);
		int32_t L_162 = L_161->___myID_21;
		if ((((int32_t)L_160) == ((int32_t)L_162)))
		{
			goto IL_0413;
		}
	}
	{
		float L_163 = __this->___returningValue_62;
		float L_164 = V_0;
		G_B43_0 = (1.0f);
		G_B43_1 = L_163;
		G_B43_2 = __this;
		if ((((float)L_164) < ((float)(0.0f))))
		{
			G_B44_0 = (1.0f);
			G_B44_1 = L_163;
			G_B44_2 = __this;
			goto IL_03ee;
		}
	}
	{
		float L_165 = V_0;
		G_B45_0 = L_165;
		G_B45_1 = G_B43_0;
		G_B45_2 = G_B43_1;
		G_B45_3 = G_B43_2;
		goto IL_03f3;
	}

IL_03ee:
	{
		G_B45_0 = (0.0f);
		G_B45_1 = G_B44_0;
		G_B45_2 = G_B44_1;
		G_B45_3 = G_B44_2;
	}

IL_03f3:
	{
		float L_166 = __this->___maxLockaheadDistance_5;
		float L_167 = __this->___lengthMargin_27;
		float L_168 = __this->___returningValue_62;
		float L_169;
		L_169 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(G_B45_1, ((float)(((float)il2cpp_codegen_subtract(G_B45_0, L_166))/L_167)))), L_168, NULL);
		NullCheck(G_B45_3);
		G_B45_3->___returningValue_62 = ((float)il2cpp_codegen_add(G_B45_2, L_169));
	}

IL_0413:
	{
		return;
	}
}
// System.Single TSTrafficAI::GetNearestPlayerDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetNearestPlayerDistance_mBB1C0EDA755A0BEE5611F6C7DFAD89C8A54C89CC (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	float G_B9_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_1;
	memset((&G_B9_1), 0, sizeof(G_B9_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	{
		V_0 = ((std::numeric_limits<float>::max)());
		V_1 = (-1);
		V_2 = 0;
		goto IL_0043;
	}

IL_000c:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____wheelsCenter_34;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = __this->___players_31;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_2, L_3, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_5, NULL);
		V_5 = L_6;
		float L_7;
		L_7 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_5), NULL);
		V_3 = L_7;
		float L_8 = V_3;
		float L_9 = V_0;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_003f;
		}
	}
	{
		float L_10 = V_3;
		V_0 = L_10;
		int32_t L_11 = V_2;
		V_1 = L_11;
	}

IL_003f:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0043:
	{
		int32_t L_13 = V_2;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_14 = __this->___players_31;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_14, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_016c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->____wheelsCenter_34;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->____wheelsCenter_34;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->____wheelsCenter_34;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_22, NULL);
		float L_24 = __this->___halfCarWidth_49;
		G_B7_0 = L_23;
		G_B7_1 = L_18;
		if ((((float)L_24) > ((float)(0.699999988f))))
		{
			G_B8_0 = L_23;
			G_B8_1 = L_18;
			goto IL_0092;
		}
	}
	{
		G_B9_0 = (0.699999988f);
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0098;
	}

IL_0092:
	{
		float L_25 = __this->___halfCarWidth_49;
		G_B9_0 = L_25;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0098:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_26 = __this->___currenPoint_16;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26->___point_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->____wheelsCenter_34;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___x_2;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_31 = __this->___currenPoint_16;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&L_31->___point_0);
		float L_33 = L_32->___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->____wheelsCenter_34;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), L_30, L_33, L_36, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_37, NULL);
		V_6 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_40 = __this->___currenPoint_16;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = L_40->___point_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->____wheelsCenter_34;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_41, L_43, NULL);
		V_7 = L_44;
		float L_45;
		L_45 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_7), NULL);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_46 = __this->___players_31;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_46, L_47, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_48, NULL);
		NullCheck(L_49);
		int32_t L_50;
		L_50 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_49, NULL);
		bool L_51;
		L_51 = Physics_CapsuleCast_m121518311930963660B3BFBF136931BCA2E3A986(G_B9_2, G_B9_1, G_B9_0, L_39, (&V_4), L_45, ((int32_t)(1<<((int32_t)(L_50&((int32_t)31))))), NULL);
		if (!L_51)
		{
			goto IL_0164;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_4), NULL);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_52, NULL);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_54 = __this->___players_31;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_54, L_55, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_56, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_53, L_57, NULL);
		if (!L_58)
		{
			goto IL_015c;
		}
	}
	{
		float L_59;
		L_59 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_4), NULL);
		V_0 = L_59;
		goto IL_0172;
	}

IL_015c:
	{
		V_0 = ((std::numeric_limits<float>::max)());
		goto IL_0172;
	}

IL_0164:
	{
		V_0 = ((std::numeric_limits<float>::max)());
		goto IL_0172;
	}

IL_016c:
	{
		V_0 = ((std::numeric_limits<float>::max)());
	}

IL_0172:
	{
		float L_60 = V_0;
		return L_60;
	}
}
// System.Void TSTrafficAI::RenderVolume(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_RenderVolume_m0FBFAE10BD674233D7921D7262FAEBEBE48BF737 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p2, float ___2_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_dir, float ___4_distance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___shape_65;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_003f;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(3, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->___shape_65 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shape_65), (void*)L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___shape_65;
		NullCheck(L_4);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_5;
		L_5 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(L_4, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		NullCheck(L_5);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_5, (bool)1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___shape_65;
		NullCheck(L_6);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_7;
		L_7 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(L_6, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_003f:
	{
		float L_8 = ___2_radius;
		V_1 = ((float)il2cpp_codegen_multiply((2.0f), L_8));
		float L_9 = V_1;
		(&V_0)->___x_2 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_p2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_p1;
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_10, L_11, NULL);
		float L_13 = V_1;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_add(L_12, L_13));
		float L_14 = ___4_distance;
		float L_15 = V_1;
		(&V_0)->___z_4 = ((float)il2cpp_codegen_add(L_14, L_15));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___shape_65;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___shape_65;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___1_p2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___3_dir), NULL);
		float L_23 = ___4_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_25, (2.0f), NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___shape_65;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___3_dir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___1_p2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___0_p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_28, L_31, NULL);
		NullCheck(L_27);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_27, L_32, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___shape_65;
		NullCheck(L_33);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_34;
		L_34 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_33, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_34);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_34, (bool)1, NULL);
		return;
	}
}
// System.Void TSTrafficAI::HideVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_HideVolume_mCCCD2DA937D8A7FCE30DB696A65B3E240004D9FF (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___shape_65;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___shape_65;
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_2, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean TSTrafficAI::TryToReservePoint(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficAI_TryToReservePoint_m06D605550C67009B4000859DA3E89596F6BCD270 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, bool* ___0_stillMine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Contains_m61336C1C735A98554B505FC8E0928EBD6E9306EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m6C66B383C4343C6208977D605550E611FFF0BF51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD));
		(&V_0)->___connector_0 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___connector_0), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_0 = __this->___currenPoint_16;
		(&V_0)->___point_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___point_1), (void*)L_0);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_1 = __this->___currenPoint_16;
		NullCheck(L_1);
		int32_t L_2 = L_1->___reservationID_1;
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_3 = __this->___currenPoint_16;
		NullCheck(L_3);
		int32_t L_4 = L_3->___reservationID_1;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_5 = __this->____navigateToWaypoints_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->___myID_21;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_01a7;
		}
	}

IL_0045:
	{
		bool* L_7 = ___0_stillMine;
		int32_t L_8 = *((int8_t*)L_7);
		if (!L_8)
		{
			goto IL_01a7;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_9 = __this->___currenPoint_16;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_10 = __this->____navigateToWaypoints_4;
		NullCheck(L_10);
		int32_t L_11 = L_10->___myID_21;
		NullCheck(L_9);
		L_9->___reservationID_1 = L_11;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_12 = __this->___currenPoint_16;
		NullCheck(L_12);
		L_12->___carwhoReserved_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___carwhoReserved_2), (void*)__this);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_13 = __this->___currentConnector_17;
		if (!L_13)
		{
			goto IL_01b0;
		}
	}
	{
		V_1 = (bool)1;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_14 = __this->___currentConnector_17;
		NullCheck(L_14);
		float L_15 = L_14->___remainingGreenLightTime_16;
		if ((((float)L_15) == ((float)(-1.0f))))
		{
			goto IL_00e7;
		}
	}
	{
		float L_16;
		L_16 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_17;
		L_17 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((10.0f), L_16, NULL);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_18 = __this->___currentConnector_17;
		NullCheck(L_18);
		float L_19 = L_18->___remainingGreenLightTime_16;
		V_2 = ((float)il2cpp_codegen_multiply(L_17, L_19));
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_20 = __this->___currentConnector_17;
		NullCheck(L_20);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_21 = L_20->___points_3;
		NullCheck(L_21);
		int32_t L_22 = 0;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___point_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___myTransform_35;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_26, NULL);
		V_4 = L_27;
		float L_28;
		L_28 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_29 = __this->___currentConnector_17;
		NullCheck(L_29);
		float L_30 = L_29->___totalDistance_12;
		V_3 = ((float)il2cpp_codegen_add(L_28, L_30));
		float L_31 = V_2;
		float L_32 = V_3;
		V_1 = (bool)((((float)L_31) > ((float)L_32))? 1 : 0);
	}

IL_00e7:
	{
		bool L_33 = __this->___reservedConnector_64;
		if (L_33)
		{
			goto IL_010f;
		}
	}
	{
		bool L_34 = V_1;
		if (!L_34)
		{
			goto IL_010f;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_35 = __this->____navigateToWaypoints_4;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_36 = (&__this->___currentConnector_17);
		int32_t L_37 = __this->___lane_22;
		NullCheck(L_35);
		bool L_38;
		L_38 = TSNavigation_ReserveNearConnectorPoints_mBB213DFF72CF17986781F8604FF9651684375EDC(L_35, L_36, L_37, NULL);
		__this->___reservedConnector_64 = L_38;
	}

IL_010f:
	{
		bool L_39 = __this->___reservedConnector_64;
		if (!L_39)
		{
			goto IL_018a;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_40 = __this->____navigateToWaypoints_4;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5** L_41 = (&__this->___currenPoint_16);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89** L_42 = (&__this->___currentConnector_17);
		NullCheck(L_40);
		bool L_43;
		L_43 = TSNavigation_ReserveNearConnectorPoints_m7914F3DD2ABED273B54D72D8D12486F83BD3B19C(L_40, L_41, L_42, NULL);
		if (L_43)
		{
			goto IL_014d;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_44 = __this->___currenPoint_16;
		NullCheck(L_44);
		L_44->___reservationID_1 = 0;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_45 = __this->___currenPoint_16;
		NullCheck(L_45);
		L_45->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
		bool* L_46 = ___0_stillMine;
		*((int8_t*)L_46) = (int8_t)0;
		goto IL_01b0;
	}

IL_014d:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_47 = __this->____navigateToWaypoints_4;
		NullCheck(L_47);
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_48 = L_47->___reservedConnectors_28;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_49 = __this->___currentConnector_17;
		NullCheck(L_48);
		bool L_50;
		L_50 = Queue_1_Contains_m61336C1C735A98554B505FC8E0928EBD6E9306EC(L_48, L_49, Queue_1_Contains_m61336C1C735A98554B505FC8E0928EBD6E9306EC_RuntimeMethod_var);
		if (L_50)
		{
			goto IL_017b;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_51 = __this->____navigateToWaypoints_4;
		NullCheck(L_51);
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_52 = L_51->___reservedConnectors_28;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_53 = __this->___currentConnector_17;
		NullCheck(L_52);
		Queue_1_Enqueue_m6C66B383C4343C6208977D605550E611FFF0BF51(L_52, L_53, Queue_1_Enqueue_m6C66B383C4343C6208977D605550E611FFF0BF51_RuntimeMethod_var);
	}

IL_017b:
	{
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_54 = __this->___currentConnector_17;
		(&V_0)->___connector_0 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___connector_0), (void*)L_54);
		goto IL_01b0;
	}

IL_018a:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_55 = __this->___currenPoint_16;
		NullCheck(L_55);
		L_55->___reservationID_1 = 0;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_56 = __this->___currenPoint_16;
		NullCheck(L_56);
		L_56->___carwhoReserved_2 = (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_56->___carwhoReserved_2), (void*)(TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)NULL);
		bool* L_57 = ___0_stillMine;
		*((int8_t*)L_57) = (int8_t)0;
		goto IL_01b0;
	}

IL_01a7:
	{
		bool* L_58 = ___0_stillMine;
		int32_t L_59 = 0;
		V_5 = (bool)L_59;
		*((int8_t*)L_58) = (int8_t)L_59;
		bool L_60 = V_5;
		return L_60;
	}

IL_01b0:
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_61 = __this->___currenPoint_16;
		NullCheck(L_61);
		int32_t L_62 = L_61->___reservationID_1;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_63 = __this->____navigateToWaypoints_4;
		NullCheck(L_63);
		int32_t L_64 = L_63->___myID_21;
		if ((((int32_t)L_62) == ((int32_t)L_64)))
		{
			goto IL_01cd;
		}
	}
	{
		bool* L_65 = ___0_stillMine;
		*((int8_t*)L_65) = (int8_t)0;
		return (bool)0;
	}

IL_01cd:
	{
		__this->___nextCarSpeedSqr_61 = (0.0f);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_66 = __this->____navigateToWaypoints_4;
		NullCheck(L_66);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_67 = L_66->___reservedPoints_25;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_68 = V_0;
		NullCheck(L_67);
		Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3(L_67, L_68, Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		float L_69 = __this->___segDistance_20;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_70 = __this->___currenPoint_16;
		NullCheck(L_70);
		float L_71 = L_70->___distanceToNextPoint_5;
		__this->___segDistance_20 = ((float)il2cpp_codegen_add(L_69, L_71));
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_72 = __this->____navigateToWaypoints_4;
		NullCheck(L_72);
		bool L_73 = L_72->___overTaking_24;
		if (!L_73)
		{
			goto IL_021e;
		}
	}
	{
		int32_t L_74 = __this->___previousWaypointCurve_19;
		__this->___previousWaypointCurve_19 = ((int32_t)il2cpp_codegen_subtract(L_74, 1));
		goto IL_022c;
	}

IL_021e:
	{
		int32_t L_75 = __this->___previousWaypointCurve_19;
		__this->___previousWaypointCurve_19 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_022c:
	{
		return (bool)1;
	}
}
// System.Void TSTrafficAI::CheckPointSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_CheckPointSpeed_m091BC656D475E349A4E5A9B3C5D7AE5CEC7A83E5 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE6C9F9D00999EADB14909F841A829FDF5AE03130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_0 = __this->___currenPoint_16;
		NullCheck(L_0);
		float L_1 = L_0->___maxSpeedLimit_8;
		V_0 = ((float)(L_1/(3.5999999f)));
		float L_2 = V_0;
		float L_3 = __this->___MAXSPEED_33;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_00a5;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_4 = __this->___currenPoint_16;
		(&V_1)->___point_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___point_1), (void*)L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___myTransform_35;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_7 = (&V_1)->___point_1;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_2 = L_9;
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		(&V_1)->___distance_0 = L_10;
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_11 = __this->___brakeSpeeds_15;
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_mE6C9F9D00999EADB14909F841A829FDF5AE03130_inline(L_11, L_12, List_1_Add_mE6C9F9D00999EADB14909F841A829FDF5AE03130_RuntimeMethod_var);
		float L_13 = (&V_1)->___distance_0;
		float L_14 = __this->___sqrMaxLockaheadDistance_63;
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_00a5;
		}
	}
	{
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_15 = (&V_1)->___point_1;
		NullCheck(L_15);
		float L_16 = L_15->___maxSpeedLimit_8;
		float L_17;
		L_17 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		if ((!(((float)((float)(L_16/(3.5999999f)))) > ((float)L_17))))
		{
			goto IL_00a5;
		}
	}
	{
		float L_18 = __this->___returningValue_62;
		__this->___returningValue_62 = ((float)il2cpp_codegen_add(L_18, (1.0f)));
	}

IL_00a5:
	{
		return;
	}
}
// System.Void TSTrafficAI::CheckUpsideDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_CheckUpsideDown_mE3D22D9EDA98F39691CF9C5AD218D9846334DC69 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myTransform_35;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_0, NULL);
		float L_2 = L_1.___z_4;
		if ((!(((float)L_2) > ((float)(60.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___myTransform_35;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_3, NULL);
		float L_5 = L_4.___z_4;
		if ((!(((float)L_5) < ((float)(310.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		float L_6 = __this->___upSideDownTimer_48;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___upSideDownTimer_48 = ((float)il2cpp_codegen_add(L_6, L_7));
		__this->___isUpSideDown_46 = (bool)1;
		float L_8 = __this->___upSideDownTimer_48;
		float L_9;
		L_9 = TSTrafficSpawner_get_RespawnUpSideDownTime_m783909AB8750F6819FCEEA376A0727E113628F2A(NULL);
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_006c;
		}
	}
	{
		__this->___forcedRespawn_47 = (bool)1;
		return;
	}

IL_005c:
	{
		int32_t L_10 = 0;
		V_0 = (bool)L_10;
		__this->___isUpSideDown_46 = (bool)L_10;
		bool L_11 = V_0;
		__this->___forcedRespawn_47 = L_11;
	}

IL_006c:
	{
		return;
	}
}
// System.Boolean TSTrafficAI::GetCurrentPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficAI_GetCurrentPoint_m7B18A2B3394205263F446DA878A04D69E54D096F (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m816682D18E7BAEBEB2AA087935465238D1F35685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m87CC96BD38A49880B0B2B39D18C142B12F46C016_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_0 = __this->____navigateToWaypoints_4;
		NullCheck(L_0);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_1 = L_0->___nextTrackPath_11;
		int32_t L_2 = __this->___nextPathIndex_21;
		NullCheck(L_1);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_3;
		L_3 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_1, L_2, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		bool L_4 = L_3.___isConnector_2;
		if (!L_4)
		{
			goto IL_0249;
		}
	}
	{
		V_0 = (bool)0;
		int32_t L_5 = __this->___previousWaypointCurve_19;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_6 = __this->____navigateToWaypoints_4;
		NullCheck(L_6);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_7 = L_6->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_8 = __this->____navigateToWaypoints_4;
		NullCheck(L_8);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_9 = L_8->___nextTrackPath_11;
		int32_t L_10 = __this->___nextPathIndex_21;
		NullCheck(L_9);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_11;
		L_11 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_9, L_10, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_12 = L_11.___nextLane_0;
		NullCheck(L_7);
		int32_t L_13 = L_12;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_14 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_15 = L_14->___connectors_7;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_16 = __this->____navigateToWaypoints_4;
		NullCheck(L_16);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_17 = L_16->___nextTrackPath_11;
		int32_t L_18 = __this->___nextPathIndex_21;
		NullCheck(L_17);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_19;
		L_19 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_17, L_18, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_20 = L_19.___nextConnector_1;
		NullCheck(L_15);
		int32_t L_21 = L_20;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_22 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_23 = L_22->___points_3;
		NullCheck(L_23);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_24 = __this->___nextPathIndex_21;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_25 = __this->____navigateToWaypoints_4;
		NullCheck(L_25);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_26 = L_25->___nextTrackPath_11;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_26, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_24, 1))) < ((int32_t)L_27)))
		{
			goto IL_0095;
		}
	}
	{
		return (bool)0;
	}

IL_0095:
	{
		V_0 = (bool)1;
		__this->___previousWaypointCurve_19 = 0;
		int32_t L_28 = __this->___nextPathIndex_21;
		__this->___nextPathIndex_21 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00ac:
	{
		bool L_29 = V_0;
		if (L_29)
		{
			goto IL_015d;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_30 = __this->____navigateToWaypoints_4;
		NullCheck(L_30);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_31 = L_30->___nextTrackPath_11;
		int32_t L_32 = __this->___nextPathIndex_21;
		NullCheck(L_31);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_33;
		L_33 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_31, L_32, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_34 = L_33.___nextLane_0;
		__this->___lane_22 = L_34;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_35 = __this->____navigateToWaypoints_4;
		NullCheck(L_35);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_36 = L_35->___lanes_15;
		int32_t L_37 = __this->___lane_22;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_40 = L_39->___connectors_7;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_41 = __this->____navigateToWaypoints_4;
		NullCheck(L_41);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_42 = L_41->___nextTrackPath_11;
		int32_t L_43 = __this->___nextPathIndex_21;
		NullCheck(L_42);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_44;
		L_44 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_42, L_43, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_45 = L_44.___nextConnector_1;
		NullCheck(L_40);
		int32_t L_46 = L_45;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_47 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_48 = L_47->___points_3;
		int32_t L_49 = __this->___previousWaypointCurve_19;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		__this->___currenPoint_16 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currenPoint_16), (void*)L_51);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_52 = __this->____navigateToWaypoints_4;
		NullCheck(L_52);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_53 = L_52->___lanes_15;
		int32_t L_54 = __this->___lane_22;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_57 = L_56->___connectors_7;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_58 = __this->____navigateToWaypoints_4;
		NullCheck(L_58);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_59 = L_58->___nextTrackPath_11;
		int32_t L_60 = __this->___nextPathIndex_21;
		NullCheck(L_59);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_61;
		L_61 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_59, L_60, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_62 = L_61.___nextConnector_1;
		NullCheck(L_57);
		int32_t L_63 = L_62;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_64 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		__this->___currentConnector_17 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentConnector_17), (void*)L_64);
		__this->___nextConnectorInstance_18 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextConnectorInstance_18), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		goto IL_0427;
	}

IL_015d:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_65 = __this->____navigateToWaypoints_4;
		NullCheck(L_65);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_66 = L_65->___nextTrackPath_11;
		int32_t L_67 = __this->___nextPathIndex_21;
		NullCheck(L_66);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_68;
		L_68 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_66, L_67, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_69 = L_68.___nextLane_0;
		__this->___lane_22 = L_69;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_70 = __this->____navigateToWaypoints_4;
		NullCheck(L_70);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_71 = L_70->___lanes_15;
		int32_t L_72 = __this->___lane_22;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_75 = L_74->___points_6;
		int32_t L_76 = __this->___previousWaypointCurve_19;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		__this->___currenPoint_16 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currenPoint_16), (void*)L_78);
		__this->___currentConnector_17 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentConnector_17), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_79 = __this->____navigateToWaypoints_4;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_80 = __this->____navigateToWaypoints_4;
		NullCheck(L_80);
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_81 = L_80->___reservedConnectors_28;
		NullCheck(L_81);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_82;
		L_82 = Queue_1_Peek_m87CC96BD38A49880B0B2B39D18C142B12F46C016(L_81, Queue_1_Peek_m87CC96BD38A49880B0B2B39D18C142B12F46C016_RuntimeMethod_var);
		NullCheck(L_79);
		TSNavigation_UnReserveNearConnectorPoints_mE6E3831EFE33640A927476588DE2919C6F128AC6(L_79, L_82, NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_83 = __this->____navigateToWaypoints_4;
		NullCheck(L_83);
		Queue_1_tA54596035B8359B3090A8F5A361E296D0F1CE228* L_84 = L_83->___reservedConnectors_28;
		NullCheck(L_84);
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_85;
		L_85 = Queue_1_Dequeue_m816682D18E7BAEBEB2AA087935465238D1F35685(L_84, Queue_1_Dequeue_m816682D18E7BAEBEB2AA087935465238D1F35685_RuntimeMethod_var);
		int32_t L_86 = __this->___nextPathIndex_21;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_87 = __this->____navigateToWaypoints_4;
		NullCheck(L_87);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_88 = L_87->___nextTrackPath_11;
		NullCheck(L_88);
		int32_t L_89;
		L_89 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_88, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_86, 1))) >= ((int32_t)L_89)))
		{
			goto IL_0427;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_90 = __this->____navigateToWaypoints_4;
		NullCheck(L_90);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_91 = L_90->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_92 = __this->____navigateToWaypoints_4;
		NullCheck(L_92);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_93 = L_92->___nextTrackPath_11;
		int32_t L_94 = __this->___nextPathIndex_21;
		NullCheck(L_93);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_95;
		L_95 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_93, ((int32_t)il2cpp_codegen_add(L_94, 1)), List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_96 = L_95.___nextLane_0;
		NullCheck(L_91);
		int32_t L_97 = L_96;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_98 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_99 = L_98->___connectors_7;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_100 = __this->____navigateToWaypoints_4;
		NullCheck(L_100);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_101 = L_100->___nextTrackPath_11;
		int32_t L_102 = __this->___nextPathIndex_21;
		NullCheck(L_101);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_103;
		L_103 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_101, ((int32_t)il2cpp_codegen_add(L_102, 1)), List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_104 = L_103.___nextConnector_1;
		NullCheck(L_99);
		int32_t L_105 = L_104;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_106 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		__this->___nextConnectorInstance_18 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextConnectorInstance_18), (void*)L_106);
		goto IL_0427;
	}

IL_0249:
	{
		V_1 = (bool)0;
		int32_t L_107 = __this->___previousWaypointCurve_19;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_108 = __this->____navigateToWaypoints_4;
		NullCheck(L_108);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_109 = L_108->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_110 = __this->____navigateToWaypoints_4;
		NullCheck(L_110);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_111 = L_110->___nextTrackPath_11;
		int32_t L_112 = __this->___nextPathIndex_21;
		NullCheck(L_111);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_113;
		L_113 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_111, L_112, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_114 = L_113.___nextLane_0;
		NullCheck(L_109);
		int32_t L_115 = L_114;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_116 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_117 = L_116->___points_6;
		NullCheck(L_117);
		if ((((int32_t)L_107) < ((int32_t)((int32_t)(((RuntimeArray*)L_117)->max_length)))))
		{
			goto IL_02b4;
		}
	}
	{
		int32_t L_118 = __this->___nextPathIndex_21;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_119 = __this->____navigateToWaypoints_4;
		NullCheck(L_119);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_120 = L_119->___nextTrackPath_11;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_120, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_118, 1))) < ((int32_t)L_121)))
		{
			goto IL_029d;
		}
	}
	{
		return (bool)0;
	}

IL_029d:
	{
		V_1 = (bool)1;
		__this->___previousWaypointCurve_19 = 0;
		int32_t L_122 = __this->___nextPathIndex_21;
		__this->___nextPathIndex_21 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02b4:
	{
		bool L_123 = V_1;
		if (L_123)
		{
			goto IL_037a;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_124 = __this->____navigateToWaypoints_4;
		NullCheck(L_124);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_125 = L_124->___nextTrackPath_11;
		int32_t L_126 = __this->___nextPathIndex_21;
		NullCheck(L_125);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_127;
		L_127 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_125, L_126, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_128 = L_127.___nextLane_0;
		__this->___lane_22 = L_128;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_129 = __this->____navigateToWaypoints_4;
		NullCheck(L_129);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_130 = L_129->___lanes_15;
		int32_t L_131 = __this->___lane_22;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_133);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_134 = L_133->___points_6;
		int32_t L_135 = __this->___previousWaypointCurve_19;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		__this->___currenPoint_16 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currenPoint_16), (void*)L_137);
		__this->___currentConnector_17 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentConnector_17), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		int32_t L_138 = __this->___nextPathIndex_21;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_139 = __this->____navigateToWaypoints_4;
		NullCheck(L_139);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_140 = L_139->___nextTrackPath_11;
		NullCheck(L_140);
		int32_t L_141;
		L_141 = List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_inline(L_140, List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_138, 1))) >= ((int32_t)L_141)))
		{
			goto IL_0427;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_142 = __this->____navigateToWaypoints_4;
		NullCheck(L_142);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_143 = L_142->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_144 = __this->____navigateToWaypoints_4;
		NullCheck(L_144);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_145 = L_144->___nextTrackPath_11;
		int32_t L_146 = __this->___nextPathIndex_21;
		NullCheck(L_145);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_147;
		L_147 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_145, ((int32_t)il2cpp_codegen_add(L_146, 1)), List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_148 = L_147.___nextLane_0;
		NullCheck(L_143);
		int32_t L_149 = L_148;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_150 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_150);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_151 = L_150->___connectors_7;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_152 = __this->____navigateToWaypoints_4;
		NullCheck(L_152);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_153 = L_152->___nextTrackPath_11;
		int32_t L_154 = __this->___nextPathIndex_21;
		NullCheck(L_153);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_155;
		L_155 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_153, ((int32_t)il2cpp_codegen_add(L_154, 1)), List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_156 = L_155.___nextConnector_1;
		NullCheck(L_151);
		int32_t L_157 = L_156;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_158 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		__this->___nextConnectorInstance_18 = L_158;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextConnectorInstance_18), (void*)L_158);
		goto IL_0427;
	}

IL_037a:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_159 = __this->____navigateToWaypoints_4;
		NullCheck(L_159);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_160 = L_159->___nextTrackPath_11;
		int32_t L_161 = __this->___nextPathIndex_21;
		NullCheck(L_160);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_162;
		L_162 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_160, L_161, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_163 = L_162.___nextLane_0;
		__this->___lane_22 = L_163;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_164 = __this->____navigateToWaypoints_4;
		NullCheck(L_164);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_165 = L_164->___lanes_15;
		int32_t L_166 = __this->___lane_22;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_168);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_169 = L_168->___connectors_7;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_170 = __this->____navigateToWaypoints_4;
		NullCheck(L_170);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_171 = L_170->___nextTrackPath_11;
		int32_t L_172 = __this->___nextPathIndex_21;
		NullCheck(L_171);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_173;
		L_173 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_171, L_172, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_174 = L_173.___nextConnector_1;
		NullCheck(L_169);
		int32_t L_175 = L_174;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_176 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_177 = L_176->___points_3;
		int32_t L_178 = __this->___previousWaypointCurve_19;
		NullCheck(L_177);
		int32_t L_179 = L_178;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		__this->___currenPoint_16 = L_180;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currenPoint_16), (void*)L_180);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_181 = __this->____navigateToWaypoints_4;
		NullCheck(L_181);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_182 = L_181->___lanes_15;
		int32_t L_183 = __this->___lane_22;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		NullCheck(L_185);
		TSLaneConnectorU5BU5D_t64DADDCC519E864AB749217760D5805468E6D5D4* L_186 = L_185->___connectors_7;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_187 = __this->____navigateToWaypoints_4;
		NullCheck(L_187);
		List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* L_188 = L_187->___nextTrackPath_11;
		int32_t L_189 = __this->___nextPathIndex_21;
		NullCheck(L_188);
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_190;
		L_190 = List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF(L_188, L_189, List_1_get_Item_m3882CFB8A55E7EB9CA1795BA982C3EAEE95E48DF_RuntimeMethod_var);
		int32_t L_191 = L_190.___nextConnector_1;
		NullCheck(L_186);
		int32_t L_192 = L_191;
		TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89* L_193 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		__this->___currentConnector_17 = L_193;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentConnector_17), (void*)L_193);
		__this->___reservedConnector_64 = (bool)0;
		__this->___nextConnectorInstance_18 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextConnectorInstance_18), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
	}

IL_0427:
	{
		return (bool)1;
	}
}
// System.Single TSTrafficAI::GetSteer(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetSteer_m7C4D54565158990E218C9F432461E83C705C01C5 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPoint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_previousT, bool ___2_useOvertakes, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_previousT;
		bool L_2 = ___2_useOvertakes;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = TSTrafficAI_GetTargetPoint_m5F1FF2E035B451F1B1683F4EF2BF69BA68E9A874(__this, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->___x_0;
		V_1 = L_4;
		float L_5 = V_1;
		float L_6;
		L_6 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		V_2 = ((float)(L_5/L_6));
		float L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Vector2 TSTrafficAI::GetTargetPoint(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TSTrafficAI_GetTargetPoint_m5F1FF2E035B451F1B1683F4EF2BF69BA68E9A874 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_Point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_prev, bool ___2_useOvertakes, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_prev;
		float L_1;
		L_1 = Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline(L_0, NULL);
		bool L_2;
		L_2 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_006f;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_3 = __this->____navigateToWaypoints_4;
		NullCheck(L_3);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_4 = L_3->___waypoints_13;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_5 = __this->____navigateToWaypoints_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->___currentWaypoint_4;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___point_0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_10 = __this->____navigateToWaypoints_4;
		NullCheck(L_10);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_11 = L_10->___waypoints_13;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_12 = __this->____navigateToWaypoints_4;
		NullCheck(L_12);
		int32_t L_13 = L_12->___previousWaypointSteer_8;
		NullCheck(L_11);
		int32_t L_14 = L_13;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___point_0;
		float L_17;
		L_17 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_16, NULL);
		V_0 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_prev;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_Point;
		float L_20;
		L_20 = TSTrafficAI_GetLookahead_m1539636FE1A5E917186A2AB5C1EC307E2CA8D929(__this, NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_21 = __this->____navigateToWaypoints_4;
		NullCheck(L_21);
		float L_22 = L_21->___relativeWPosMagnitude_22;
		float L_23 = V_0;
		float L_24 = V_0;
		float L_25;
		L_25 = fabsf(((float)(((float)il2cpp_codegen_subtract(L_20, ((float)il2cpp_codegen_subtract(L_22, L_23))))/L_24)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_18, L_19, L_25, NULL);
		___0_Point = L_26;
	}

IL_006f:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->____wheelsCenter_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___0_Point;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_27, L_28, NULL);
		V_1 = L_29;
		float L_30 = (&V_1)->___x_2;
		float L_31 = __this->___myLaneOffset_51;
		V_2 = ((float)il2cpp_codegen_add(L_30, L_31));
		float L_32 = (&V_1)->___z_4;
		float L_33;
		L_33 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_32, (2.0f), NULL);
		V_3 = L_33;
		float L_34 = V_2;
		float L_35 = V_3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), L_34, L_35, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_4;
		return L_36;
	}
}
// System.Single TSTrafficAI::GetLookahead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficAI_GetLookahead_m1539636FE1A5E917186A2AB5C1EC307E2CA8D929 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___LOOKAHEAD_CONST_9;
		float L_1;
		L_1 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_2 = __this->___LOOKAHEAD_FACTOR_7;
		float L_3;
		L_3 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_3/(150.0f))), (0.100000001f), (1.0f), NULL);
		__this->____lookAheadDistance_30 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), L_4))));
		float L_5 = __this->____lookAheadDistance_30;
		return L_5;
	}
}
// System.Void TSTrafficAI::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_OnTriggerEnter_mE28053CF6A981B7D1C30B028B83A344A9FB7CB20 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_colInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_colInfo;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		String_t* L_2 = __this->___playerTag_43;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___players_31;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_colInfo;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_4);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_4, L_6, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		__this->___fullStop_44 = (bool)1;
	}

IL_002b:
	{
		return;
	}
}
// System.Void TSTrafficAI::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_OnTriggerExit_mA7125FA86EE54E15EA890580A06B602FE26E402A (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_colInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_colInfo;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		String_t* L_2 = __this->___playerTag_43;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___players_31;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_colInfo;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995(L_4, L_6, List_1_Remove_mECB7FF3D5F371E6281E23CE94667A539695B1995_RuntimeMethod_var);
		__this->___fullStop_44 = (bool)0;
		TSTrafficAI_HideVolume_mCCCD2DA937D8A7FCE30DB696A65B3E240004D9FF(__this, NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void TSTrafficAI::GeneralCalculations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_GeneralCalculations_m6B2F7E394D992160A25A28A87FFBC39A2DBE10BF (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		float L_1;
		L_1 = TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline(__this, NULL);
		__this->___currentSpeedSqr_38 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		return;
	}
}
// System.Void TSTrafficAI::IRDSWheelsCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_IRDSWheelsCenter_m766FEE365530DE408E20DE51B2DD465FE048F32C (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDBC084322E86579862A624BEC4DAD93CF4BD3C);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_5 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_6 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_7 = NULL;
	int32_t V_8 = 0;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_9 = NULL;
	int32_t V_10 = 0;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myTransform_35;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_1 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___myTransform_35;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_2 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___myTransform_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_5, NULL);
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___myTransform_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_9;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___frontWheels_8;
		NullCheck(L_10);
		int32_t L_11 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_3 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_0), L_14, L_15, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_16, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		__this->____wheelsCenter_34 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____wheelsCenter_34), (void*)L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->____wheelsCenter_34;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->____wheelsCenter_34;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_22);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_22, L_23, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = __this->___frontWheels_8;
		V_7 = L_24;
		V_8 = 0;
		goto IL_00e7;
	}

IL_00a5:
	{
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = V_7;
		int32_t L_26 = V_8;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_4 = L_28;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_4;
		NullCheck(L_29);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_30;
		L_30 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(L_29, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_5 = L_30;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_31 = V_5;
		V_9 = L_31;
		V_10 = 0;
		goto IL_00d9;
	}

IL_00be:
	{
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_32 = V_9;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_6 = L_35;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_36 = V_6;
		NullCheck(L_36);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_37;
		L_37 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_36, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_0), L_37, NULL);
		int32_t L_38 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d9:
	{
		int32_t L_39 = V_10;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_40 = V_9;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00e7:
	{
		int32_t L_42 = V_8;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_43 = V_7;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_00a5;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->____wheelsCenter_34;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_0), NULL);
		float L_47 = L_46.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_0), NULL);
		float L_49 = L_48.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), L_47, (0.0f), L_49, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_45, L_50, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->____wheelsCenter_34;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = __this->___myTransform_35;
		NullCheck(L_52);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_52, L_53, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = __this->____wheelsCenter_34;
		NullCheck(L_54);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_54, _stringLiteral2FDBC084322E86579862A624BEC4DAD93CF4BD3C, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = __this->___myTransform_35;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = V_1;
		NullCheck(L_55);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_55, L_56, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___myTransform_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_2;
		NullCheck(L_57);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_57, L_58, NULL);
		return;
	}
}
// UnityEngine.Bounds TSTrafficAI::CarSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TSTrafficAI_CarSize_m5734003012D40DE4A62649E12B5AD9B06510CF39 (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_3 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_4 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_5 = NULL;
	int32_t V_6 = 0;
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myTransform_35;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_1 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___myTransform_35;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_2 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___myTransform_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_5, NULL);
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___myTransform_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___myTransform_35;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_0), L_10, L_11, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_12;
		L_12 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		V_3 = L_12;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_13 = V_3;
		V_5 = L_13;
		V_6 = 0;
		goto IL_007e;
	}

IL_0063:
	{
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_14 = V_5;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18 = V_4;
		NullCheck(L_18);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_19;
		L_19 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_18, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_0), L_19, NULL);
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007e:
	{
		int32_t L_21 = V_6;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_22 = V_5;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___myTransform_35;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_1;
		NullCheck(L_23);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___myTransform_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_26, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_27 = V_0;
		return L_27;
	}
}
// System.Void TSTrafficAI::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI_Enable_m3C8DF47BF3287A0C8F268DB1633CE30BF76B0E5D (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = ___0_flag;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		V_0 = 0;
		goto IL_0037;
	}

IL_0013:
	{
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_2 = __this->___bodies_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_5, 0, NULL);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_6 = __this->___bodies_10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_9);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_9, L_10, NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0037:
	{
		int32_t L_12 = V_0;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_13 = __this->___bodies_10;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0043:
	{
		__this->___throttle_41 = (0.0f);
		__this->___steering_42 = (0.0f);
		__this->___brake_40 = (0.0f);
		OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* L_14 = __this->___OnUpdateAI_57;
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* L_15 = __this->___OnUpdateAI_57;
		bool L_16 = __this->___isUpSideDown_46;
		NullCheck(L_15);
		OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_inline(L_15, (0.0f), (0.0f), (0.0f), L_16, NULL);
	}

IL_008c:
	{
		V_1 = 0;
		goto IL_00a3;
	}

IL_0090:
	{
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_17 = __this->___bodies_10;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_20, ((int32_t)126), NULL);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00a3:
	{
		int32_t L_22 = V_1;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_23 = __this->___bodies_10;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0090;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_24 = __this->____navigateToWaypoints_4;
		NullCheck(L_24);
		TSNavigation_TurnOffTurningLights_m3EED665483CBD42683DE47230DAD6E08D59DC06D(L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		return;
	}
}
// System.Void TSTrafficAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficAI__ctor_m7F91709DDB2373528A43E9D300BADD3EF9F7E06E (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___LOOKAHEAD_FACTOR_7 = (0.330000013f);
		__this->___LOOKAHEAD_CONST_9 = (2.0f);
		__this->___myVehicleType_14 = 2;
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_0 = (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*)il2cpp_codegen_object_new(List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751(L_0, List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var);
		__this->___brakeSpeeds_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___brakeSpeeds_15), (void*)L_0);
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_1 = (TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5*)il2cpp_codegen_object_new(TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TSPoints__ctor_m1839959CD25FBEE87AEFEE5E5E4D0546CB3A5C70(L_1, NULL);
		__this->___currenPoint_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currenPoint_16), (void*)L_1);
		__this->___playerSensorWidthMultiplier_25 = (1.04999995f);
		__this->___minPlayerSensorLenght_26 = (5.0f);
		__this->___lengthMargin_27 = (5.0f);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_2 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_2, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___players_31 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___players_31), (void*)L_2);
		__this->___MAXSPEED_33 = ((std::numeric_limits<float>::max)());
		__this->___playerTag_43 = _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerTag_43), (void*)_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		__this->___timerForChangeLane_45 = (5.0f);
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
// Conversion methods for marshalling of: TSTrafficAI/TSBrakeSpeeds
IL2CPP_EXTERN_C void TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshal_pinvoke(const TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2& unmarshaled, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___point_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'point' of type 'TSBrakeSpeeds': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___point_1Exception, NULL);
}
IL2CPP_EXTERN_C void TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshal_pinvoke_back(const TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshaled_pinvoke& marshaled, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2& unmarshaled)
{
	Exception_t* ___point_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'point' of type 'TSBrakeSpeeds': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___point_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: TSTrafficAI/TSBrakeSpeeds
IL2CPP_EXTERN_C void TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshal_pinvoke_cleanup(TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TSTrafficAI/TSBrakeSpeeds
IL2CPP_EXTERN_C void TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshal_com(const TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2& unmarshaled, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshaled_com& marshaled)
{
	Exception_t* ___point_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'point' of type 'TSBrakeSpeeds': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___point_1Exception, NULL);
}
IL2CPP_EXTERN_C void TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshal_com_back(const TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshaled_com& marshaled, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2& unmarshaled)
{
	Exception_t* ___point_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'point' of type 'TSBrakeSpeeds': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___point_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: TSTrafficAI/TSBrakeSpeeds
IL2CPP_EXTERN_C void TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshal_com_cleanup(TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_Multicast(OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* currentDelegate = reinterpret_cast<OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, float, float, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_steering, ___1_brake, ___2_throttle, ___3_isUpSideDown, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_OpenInst(OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, float, float, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_steering, ___1_brake, ___2_throttle, ___3_isUpSideDown, method);
}
void OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_OpenStatic(OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, float, float, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_steering, ___1_brake, ___2_throttle, ___3_isUpSideDown, method);
}
void OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_OpenStaticInvoker(OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method)
{
	InvokerActionInvoker4< float, float, float, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_steering, ___1_brake, ___2_throttle, ___3_isUpSideDown);
}
void OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_ClosedStaticInvoker(OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, float, float, float, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_steering, ___1_brake, ___2_throttle, ___3_isUpSideDown);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3 (OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float, float, float, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_steering, ___1_brake, ___2_throttle, static_cast<int32_t>(___3_isUpSideDown));

}
// System.Void TSTrafficAI/OnUpdateAIDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateAIDelegate__ctor_m45594503CDB072C545B2C2A73744E154E08E2A34 (OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_Multicast;
}
// System.Void TSTrafficAI/OnUpdateAIDelegate::Invoke(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D (OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, float, float, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_steering, ___1_brake, ___2_throttle, ___3_isUpSideDown, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TSTrafficAI/OnUpdateAIDelegate::BeginInvoke(System.Single,System.Single,System.Single,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnUpdateAIDelegate_BeginInvoke_m47717B38FAE7C57BE9D94F24715B1E43CB1A4B02 (OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___0_steering);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_brake);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___2_throttle);
	__d_args[3] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___3_isUpSideDown);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void TSTrafficAI/OnUpdateAIDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateAIDelegate_EndInvoke_m9E510731616672390B061544050FD5C698440CF9 (OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_Multicast(GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* currentDelegate = reinterpret_cast<GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_carSpeed, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_OpenInst(GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_carSpeed, method);
}
void GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_OpenStatic(GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_carSpeed, method);
}
void GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_OpenStaticInvoker(GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method)
{
	InvokerActionInvoker1< float* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_carSpeed);
}
void GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_ClosedStaticInvoker(GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, float* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_carSpeed);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A (GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_carSpeed);

}
// System.Void TSTrafficAI/GetCarSpeedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCarSpeedDelegate__ctor_m40231B7127C0B00A10E8984154637549348F85D3 (GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_Multicast;
}
// System.Void TSTrafficAI/GetCarSpeedDelegate::Invoke(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F (GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_carSpeed, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TSTrafficAI/GetCarSpeedDelegate::BeginInvoke(System.Single&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetCarSpeedDelegate_BeginInvoke_m866FDC89D40EFA412628B88E627D24A9915BF0B9 (GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &*___0_carSpeed);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void TSTrafficAI/GetCarSpeedDelegate::EndInvoke(System.Single&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetCarSpeedDelegate_EndInvoke_m9D6860CE9819E61D0313F00D07EF46CF80F5670C (GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___0_carSpeed,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_Multicast(OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* currentDelegate = reinterpret_cast<OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_isTurning, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_OpenInst(OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_isTurning, method);
}
void OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_OpenStatic(OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_isTurning, method);
}
void OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_OpenStaticInvoker(OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_isTurning);
}
void OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_ClosedStaticInvoker(OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_isTurning);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E (OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_isTurning));

}
// System.Void TSTrafficAI/OnTurnRigthDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTurnRigthDelegate__ctor_mA33E0FFD07AEF040822FAEFA17086BAA82531807 (OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_Multicast;
}
// System.Void TSTrafficAI/OnTurnRigthDelegate::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1 (OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_isTurning, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TSTrafficAI/OnTurnRigthDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTurnRigthDelegate_BeginInvoke_m5F429F885EA8897F82D863F3E16148E104D87D2F (OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_isTurning);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void TSTrafficAI/OnTurnRigthDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTurnRigthDelegate_EndInvoke_m602C83DD71BD39D7FD4B805832848FF2A27B43C3 (OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_Multicast(OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* currentDelegate = reinterpret_cast<OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_isTurning, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_OpenInst(OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_isTurning, method);
}
void OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_OpenStatic(OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_isTurning, method);
}
void OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_OpenStaticInvoker(OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_isTurning);
}
void OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_ClosedStaticInvoker(OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_isTurning);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF (OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_isTurning));

}
// System.Void TSTrafficAI/OnTurnLeftDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTurnLeftDelegate__ctor_m6AB9C554B1F6153275C30BD31E21489E9C1C2053 (OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_Multicast;
}
// System.Void TSTrafficAI/OnTurnLeftDelegate::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF (OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_isTurning, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TSTrafficAI/OnTurnLeftDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTurnLeftDelegate_BeginInvoke_m8F2543CFC56E5A4292CA674C34CFF292D8C008AF (OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_isTurning);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void TSTrafficAI/OnTurnLeftDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTurnLeftDelegate_EndInvoke_mBC4F418EE6DD51F6867E9CE47A2767A9F2AD621A (OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_Multicast(OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* currentDelegate = reinterpret_cast<OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_OpenInst(OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_OpenStatic(OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_OpenStaticInvoker(OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_ClosedStaticInvoker(OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27 (OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TSTrafficAI/OnCloserRangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloserRangeDelegate__ctor_mEE18524C0EB82B7EF87C705339D42C56334D98F2 (OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_Multicast;
}
// System.Void TSTrafficAI/OnCloserRangeDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D (OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TSTrafficAI/OnCloserRangeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCloserRangeDelegate_BeginInvoke_mDAB2B226F601EE65C9A9623AD974F6DBB3F8D36D (OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void TSTrafficAI/OnCloserRangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloserRangeDelegate_EndInvoke_mFF81DC04EBBA81A42CF24FCC8EA430C63A90B40B (OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_Multicast(OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* currentDelegate = reinterpret_cast<OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_OpenInst(OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_OpenStatic(OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_OpenStaticInvoker(OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_ClosedStaticInvoker(OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1 (OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TSTrafficAI/OnFarRangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFarRangeDelegate__ctor_m364E28C36AED79C997445E49210A4E95CA830DBD (OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_Multicast;
}
// System.Void TSTrafficAI/OnFarRangeDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6 (OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TSTrafficAI/OnFarRangeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnFarRangeDelegate_BeginInvoke_m568284BFB89B7C12D9651E203F19E218CAA12095 (OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void TSTrafficAI/OnFarRangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFarRangeDelegate_EndInvoke_m8DA96513C51CF922266E47E0C0812A0AF09EE2CC (OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TSTrafficAI[] TSTrafficSpawner::get_TrafficCars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* TSTrafficSpawner_get_TrafficCars_m6694DBDC6EB04A0F41AC66750163F5D5E3B4F11C (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_0 = __this->___trafficCars_15;
		return L_0;
	}
}
// System.Int32 TSTrafficSpawner::get_totalFarCars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSTrafficSpawner_get_totalFarCars_m38899CA839002702BAE348211CDE53F16C470625 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____totalFarCars_30;
		return L_0;
	}
}
// UnityEngine.Transform[] TSTrafficSpawner::get_TrafficCarsTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* TSTrafficSpawner_get_TrafficCarsTransform_m65FCED26ED45AD758A384656BACC616C145DE3B5 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___trafficCarsTransform_16;
		return L_0;
	}
}
// UnityEngine.Vector3[] TSTrafficSpawner::get_TrafficCarsPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* TSTrafficSpawner_get_TrafficCarsPositions_m120DABC633470421DFCAC9AB0E03CA85C79C98BD (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___trafficCarsPositions_17;
		return L_0;
	}
}
// System.Single TSTrafficSpawner::get_RespawnUpSideDownTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TSTrafficSpawner_get_RespawnUpSideDownTime_m783909AB8750F6819FCEEA376A0727E113628F2A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_0 = ((TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_StaticFields*)il2cpp_codegen_static_fields_for(TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_il2cpp_TypeInfo_var))->___mainInstance_33;
		NullCheck(L_0);
		float L_1 = L_0->___respawnUpSideDownTime_13;
		return L_1;
	}
}
// System.Int32 TSTrafficSpawner::get_Amount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSTrafficSpawner_get_Amount_mE6A60A7804BE45F62D8DC413448D070BBF0E3DFB (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___amount_5;
		return L_0;
	}
}
// System.Void TSTrafficSpawner::set_Amount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_set_Amount_m0E9281E7FDAEB6C74F750AFCE149C6BC4F42FE59 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___amount_5 = L_0;
		return;
	}
}
// System.Void TSTrafficSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_Start_m74A0DE8167016B3737371B68468E2D42108A9FDA (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_StaticFields*)il2cpp_codegen_static_fields_for(TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_il2cpp_TypeInfo_var))->___mainInstance_33 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_StaticFields*)il2cpp_codegen_static_fields_for(TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B_il2cpp_TypeInfo_var))->___mainInstance_33), (void*)__this);
		TSTrafficSpawner_AddCarsStart_m6658BC8D6820E39DC20A31C5468BBE5A8B969C2D(__this, NULL);
		return;
	}
}
// System.Void TSTrafficSpawner::AddCarsStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_AddCarsStart_m6658BC8D6820E39DC20A31C5468BBE5A8B969C2D (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94_m1FE1E6D3D2A7F04FD1F7B11F8D83D7175F0E0950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_m193B81C8C9A2EDA80AEADFADE88ADE95E8284534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m046358360F9D9E54FCB8A7403C3F6301C01B1597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* V_14 = NULL;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	bool V_17 = false;
	TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD V_21;
	memset((&V_21), 0, sizeof(V_21));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_22;
	memset((&V_22), 0, sizeof(V_22));
	int32_t G_B12_0 = 0;
	float G_B29_0 = 0.0f;
	{
		float L_0 = __this->___maxDistance_6;
		float L_1 = __this->___offset_7;
		float L_2 = __this->___maxDistance_6;
		float L_3 = __this->___offset_7;
		__this->___maxDistanceSQRMax_31 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_0, L_1)), ((float)il2cpp_codegen_add(L_2, L_3))));
		float L_4 = __this->___maxDistance_6;
		float L_5 = __this->___offset_7;
		float L_6 = __this->___maxDistance_6;
		float L_7 = __this->___offset_7;
		__this->___maxDistanceSQRMin_32 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_4, L_5)), ((float)il2cpp_codegen_subtract(L_6, L_7))));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_10;
		L_10 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_9, NULL);
		__this->___trafficVolumes_14 = ((TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341*)IsInst((RuntimeObject*)L_10, TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trafficVolumes_14), (void*)((TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341*)IsInst((RuntimeObject*)L_10, TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341_il2cpp_TypeInfo_var)));
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_11 = __this->___manager_10;
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15;
		L_15 = Object_FindObjectOfType_mECCF3627FE53B9B53B5D92BFB9FA88490B0ACD5E(L_14, NULL);
		__this->___manager_10 = ((TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652*)IsInstClass((RuntimeObject*)L_15, TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_10), (void*)((TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652*)IsInstClass((RuntimeObject*)L_15, TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652_il2cpp_TypeInfo_var)));
	}

IL_0084:
	{
		V_0 = (bool)0;
		V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		il2cpp_codegen_initobj((&V_5), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		V_6 = (0.0f);
		V_7 = 0;
		V_8 = 0;
		goto IL_00bf;
	}

IL_00a6:
	{
		int32_t L_16 = V_7;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_17 = __this->___cars_4;
		int32_t L_18 = V_8;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		int32_t L_21 = L_20->___frequency_1;
		V_7 = ((int32_t)il2cpp_codegen_add(L_16, L_21));
		int32_t L_22 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00bf:
	{
		int32_t L_23 = V_8;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_24 = __this->___cars_4;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_25 = __this->___amount_5;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_26 = __this->___cars_4;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_27 = __this->___amount_5;
		int32_t L_28 = V_7;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_29 = __this->___cars_4;
		NullCheck(L_29);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)il2cpp_codegen_add(L_28, ((int32_t)(((RuntimeArray*)L_29)->max_length)))))))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_30 = __this->___amount_5;
		G_B12_0 = L_30;
		goto IL_012d;
	}

IL_00f6:
	{
		int32_t L_31 = V_7;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_32 = __this->___cars_4;
		NullCheck(L_32);
		G_B12_0 = ((int32_t)il2cpp_codegen_add(L_31, ((int32_t)(((RuntimeArray*)L_32)->max_length))));
		goto IL_012d;
	}

IL_0103:
	{
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_33 = __this->___cars_4;
		NullCheck(L_33);
		int32_t L_34 = V_7;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_35 = __this->___cars_4;
		NullCheck(L_35);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_34, ((int32_t)(((RuntimeArray*)L_35)->max_length)))))))
		{
			goto IL_0122;
		}
	}
	{
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_36 = __this->___cars_4;
		NullCheck(L_36);
		G_B12_0 = ((int32_t)(((RuntimeArray*)L_36)->max_length));
		goto IL_012d;
	}

IL_0122:
	{
		int32_t L_37 = V_7;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_38 = __this->___cars_4;
		NullCheck(L_38);
		G_B12_0 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_012d:
	{
		V_9 = G_B12_0;
		int32_t L_39 = V_9;
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_40 = (TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2*)(TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2*)SZArrayNew(TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2_il2cpp_TypeInfo_var, (uint32_t)L_39);
		__this->___trafficCars_15 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trafficCars_15), (void*)L_40);
		int32_t L_41 = V_9;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_42 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->___trafficCarsTransform_16 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trafficCarsTransform_16), (void*)L_42);
		int32_t L_43 = V_9;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_44 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_43);
		__this->___trafficCarsFarIndexes_18 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trafficCarsFarIndexes_18), (void*)L_44);
		int32_t L_45 = V_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_45);
		__this->___trafficCarsPositions_17 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trafficCarsPositions_17), (void*)L_46);
		V_10 = (bool)0;
		V_11 = 0;
		V_12 = 0;
		goto IL_079b;
	}

IL_0171:
	{
		bool L_47 = V_0;
		if (L_47)
		{
			goto IL_022f;
		}
	}
	{
		int32_t L_48 = __this->___amount_5;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_49 = __this->___cars_4;
		NullCheck(L_49);
		if ((((int32_t)L_48) >= ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_018c;
		}
	}
	{
		int32_t L_50 = V_12;
		V_2 = L_50;
		goto IL_01c5;
	}

IL_018c:
	{
		bool L_51 = V_10;
		if (L_51)
		{
			goto IL_01b6;
		}
	}
	{
		V_13 = (bool)0;
		goto IL_01a1;
	}

IL_0195:
	{
		bool L_52;
		L_52 = TSTrafficSpawner_GetCarByFrequency_m837A809BB18755BE97440CF5967DD9B9830620B9(__this, (&V_11), (&V_2), NULL);
		V_13 = L_52;
	}

IL_01a1:
	{
		bool L_53 = V_13;
		if (!L_53)
		{
			goto IL_0195;
		}
	}
	{
		int32_t L_54 = V_11;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_55 = __this->___cars_4;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_01c5;
		}
	}
	{
		V_10 = (bool)1;
		goto IL_01c5;
	}

IL_01b6:
	{
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_56 = __this->___cars_4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_56)->max_length)), NULL);
		V_2 = L_57;
	}

IL_01c5:
	{
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_58 = __this->___cars_4;
		int32_t L_59 = V_2;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___cars_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_63;
		L_63 = Object_Instantiate_m8C504E8CCCA0816BEB5BB431A0BCECE17D217A0B(L_62, NULL);
		V_1 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_63, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_65;
		L_65 = TSTrafficSpawner_CarSize_m4AEE5173A3578834BBDB610D080FAAFDEE69C51F(__this, L_64, NULL);
		V_5 = L_65;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_66 = __this->___manager_10;
		NullCheck(L_66);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_67 = L_66->___lanes_4;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_67)->max_length)), 1)), NULL);
		V_4 = L_68;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_70 = L_69.___z_4;
		V_6 = ((float)il2cpp_codegen_add(L_70, (3.0f)));
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_71 = __this->___manager_10;
		NullCheck(L_71);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_72 = L_71->___lanes_4;
		int32_t L_73 = V_4;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_76 = L_75->___points_6;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_76)->max_length)), 1)), NULL);
		V_3 = L_77;
	}

IL_022f:
	{
		int32_t L_78 = V_3;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_79 = __this->___manager_10;
		NullCheck(L_79);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_80 = L_79->___lanes_4;
		int32_t L_81 = V_4;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_84 = L_83->___points_6;
		NullCheck(L_84);
		float L_85 = V_6;
		if ((!(((float)((float)L_78)) >= ((float)((float)il2cpp_codegen_subtract(((float)((int32_t)(((RuntimeArray*)L_84)->max_length))), L_85))))))
		{
			goto IL_0281;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_86 = __this->___manager_10;
		NullCheck(L_86);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_87 = L_86->___lanes_4;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_87)->max_length)), 1)), NULL);
		V_4 = L_88;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_89 = __this->___manager_10;
		NullCheck(L_89);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_90 = L_89->___lanes_4;
		int32_t L_91 = V_4;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_94 = L_93->___points_6;
		NullCheck(L_94);
		int32_t L_95;
		L_95 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_94)->max_length)), 1)), NULL);
		V_3 = L_95;
	}

IL_0281:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = V_1;
		NullCheck(L_96);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_97;
		L_97 = GameObject_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_m193B81C8C9A2EDA80AEADFADE88ADE95E8284534(L_96, GameObject_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_m193B81C8C9A2EDA80AEADFADE88ADE95E8284534_RuntimeMethod_var);
		V_14 = L_97;
		int32_t L_98 = V_3;
		if ((((int32_t)L_98) > ((int32_t)0)))
		{
			goto IL_0294;
		}
	}
	{
		G_B29_0 = (0.0f);
		goto IL_02cb;
	}

IL_0294:
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_99 = __this->___manager_10;
		NullCheck(L_99);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_100 = L_99->___lanes_4;
		int32_t L_101 = V_4;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_103);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_104 = L_103->___points_6;
		int32_t L_105 = V_3;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_subtract(L_105, 1));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		float L_108 = L_107->___distanceToNextPoint_5;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_109 = __this->___manager_10;
		NullCheck(L_109);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_110 = L_109->___lanes_4;
		int32_t L_111 = V_4;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_113);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_114 = L_113->___points_6;
		int32_t L_115 = V_3;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		float L_118 = L_117->___distanceToNextPoint_5;
		G_B29_0 = ((float)il2cpp_codegen_subtract(L_108, L_118));
	}

IL_02cb:
	{
		V_15 = G_B29_0;
		V_16 = 0;
		V_17 = (bool)1;
		int32_t* L_119 = (&__this->___currentVolume_28);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_120 = __this->___manager_10;
		NullCheck(L_120);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_121 = L_120->___lanes_4;
		int32_t L_122 = V_4;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_125 = L_124->___points_6;
		int32_t L_126 = V_3;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129 = L_128->___point_0;
		bool L_130;
		L_130 = TSTrafficSpawner_CheckTrafficVolume_m445F2341DD5159B78F5F24517BBFFED9BB98E5B2(__this, L_119, L_129, NULL);
		if (L_130)
		{
			goto IL_02fe;
		}
	}
	{
		V_17 = (bool)0;
	}

IL_02fe:
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_131 = __this->___manager_10;
		NullCheck(L_131);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_132 = L_131->___lanes_4;
		int32_t L_133 = V_4;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		int32_t L_136 = L_135->___vehicleType_4;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_137 = V_14;
		NullCheck(L_137);
		int32_t L_138 = L_137->___myVehicleType_14;
		if ((((int32_t)((int32_t)((int32_t)L_136&((int32_t)(1<<((int32_t)((int32_t)L_138&((int32_t)31)))))))) > ((int32_t)0)))
		{
			goto IL_0398;
		}
	}
	{
		V_17 = (bool)0;
		goto IL_0398;
	}

IL_0326:
	{
		float L_139 = V_15;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_140 = __this->___manager_10;
		NullCheck(L_140);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_141 = L_140->___lanes_4;
		int32_t L_142 = V_4;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_145 = L_144->___points_6;
		int32_t L_146 = V_3;
		int32_t L_147 = V_16;
		NullCheck(L_145);
		int32_t L_148 = ((int32_t)il2cpp_codegen_add(L_146, L_147));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_149 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_149);
		float L_150 = L_149->___distanceToNextPoint_5;
		V_15 = ((float)il2cpp_codegen_add(L_139, L_150));
		int32_t L_151 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_151, 1));
		int32_t L_152 = V_3;
		int32_t L_153 = V_16;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_154 = __this->___manager_10;
		NullCheck(L_154);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_155 = L_154->___lanes_4;
		int32_t L_156 = V_4;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		NullCheck(L_158);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_159 = L_158->___points_6;
		NullCheck(L_159);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_152, L_153))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_159)->max_length)), 1)))))
		{
			goto IL_0393;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_160 = __this->___manager_10;
		NullCheck(L_160);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_161 = L_160->___lanes_4;
		int32_t L_162 = V_4;
		NullCheck(L_161);
		int32_t L_163 = L_162;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_164);
		float L_165 = L_164->___totalOcupation_11;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_166 = __this->___manager_10;
		NullCheck(L_166);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_167 = L_166->___lanes_4;
		int32_t L_168 = V_4;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_170);
		float L_171 = L_170->___trafficDensity_10;
		if ((!(((float)L_165) > ((float)L_171))))
		{
			goto IL_0398;
		}
	}

IL_0393:
	{
		V_17 = (bool)0;
		goto IL_039e;
	}

IL_0398:
	{
		float L_172 = V_15;
		float L_173 = V_6;
		if ((((float)L_172) < ((float)L_173)))
		{
			goto IL_0326;
		}
	}

IL_039e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_174 = V_1;
		NullCheck(L_174);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_175;
		L_175 = GameObject_GetComponent_TisTSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94_m1FE1E6D3D2A7F04FD1F7B11F8D83D7175F0E0950(L_174, GameObject_GetComponent_TisTSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94_m1FE1E6D3D2A7F04FD1F7B11F8D83D7175F0E0950_RuntimeMethod_var);
		V_18 = L_175;
		V_19 = 0;
		goto IL_03d7;
	}

IL_03ab:
	{
		bool L_176 = V_17;
		if (!L_176)
		{
			goto IL_03d1;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_177 = __this->___manager_10;
		NullCheck(L_177);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_178 = L_177->___lanes_4;
		int32_t L_179 = V_4;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		NullCheck(L_181);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_182 = L_181->___points_6;
		int32_t L_183 = V_3;
		int32_t L_184 = V_19;
		NullCheck(L_182);
		int32_t L_185 = ((int32_t)il2cpp_codegen_add(L_183, L_184));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_186 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		NullCheck(L_186);
		int32_t L_187 = L_186->___reservationID_1;
		if (!L_187)
		{
			goto IL_03d1;
		}
	}
	{
		V_17 = (bool)0;
	}

IL_03d1:
	{
		int32_t L_188 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_188, 1));
	}

IL_03d7:
	{
		int32_t L_189 = V_19;
		int32_t L_190 = V_16;
		if ((((int32_t)L_189) < ((int32_t)L_190)))
		{
			goto IL_03ab;
		}
	}
	{
		bool L_191 = V_17;
		if (!L_191)
		{
			goto IL_06f0;
		}
	}
	{
		int32_t L_192 = __this->___currentVolume_28;
		if ((((int32_t)L_192) == ((int32_t)(-1))))
		{
			goto IL_0406;
		}
	}
	{
		TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341* L_193 = __this->___trafficVolumes_14;
		int32_t L_194 = __this->___currentVolume_28;
		NullCheck(L_193);
		int32_t L_195 = L_194;
		TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_196);
		List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* L_197 = L_196->___carsOnThisSection_5;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_198 = V_14;
		NullCheck(L_197);
		List_1_Add_m046358360F9D9E54FCB8A7403C3F6301C01B1597_inline(L_197, L_198, List_1_Add_m046358360F9D9E54FCB8A7403C3F6301C01B1597_RuntimeMethod_var);
	}

IL_0406:
	{
		V_20 = 0;
		goto IL_0472;
	}

IL_040b:
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_199 = __this->___manager_10;
		NullCheck(L_199);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_200 = L_199->___lanes_4;
		int32_t L_201 = V_4;
		NullCheck(L_200);
		int32_t L_202 = L_201;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_203 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		NullCheck(L_203);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_204 = L_203->___points_6;
		int32_t L_205 = V_3;
		int32_t L_206 = V_20;
		NullCheck(L_204);
		int32_t L_207 = ((int32_t)il2cpp_codegen_add(L_205, L_206));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_208 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_209 = V_18;
		NullCheck(L_209);
		int32_t L_210;
		L_210 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_209, NULL);
		NullCheck(L_208);
		L_208->___reservationID_1 = L_210;
		il2cpp_codegen_initobj((&V_21), sizeof(TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD));
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_211 = __this->___manager_10;
		NullCheck(L_211);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_212 = L_211->___lanes_4;
		int32_t L_213 = V_4;
		NullCheck(L_212);
		int32_t L_214 = L_213;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		NullCheck(L_215);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_216 = L_215->___points_6;
		int32_t L_217 = V_3;
		int32_t L_218 = V_20;
		NullCheck(L_216);
		int32_t L_219 = ((int32_t)il2cpp_codegen_add(L_217, L_218));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_220 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		(&V_21)->___point_1 = L_220;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_21)->___point_1), (void*)L_220);
		(&V_21)->___connector_0 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_21)->___connector_0), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_221 = V_18;
		NullCheck(L_221);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_222 = L_221->___reservedPoints_25;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_223 = V_21;
		NullCheck(L_222);
		Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3(L_222, L_223, Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		int32_t L_224 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_224, 1));
	}

IL_0472:
	{
		int32_t L_225 = V_20;
		int32_t L_226 = V_16;
		if ((((int32_t)L_225) < ((int32_t)L_226)))
		{
			goto IL_040b;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_227 = __this->___manager_10;
		NullCheck(L_227);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_228 = L_227->___lanes_4;
		int32_t L_229 = V_4;
		NullCheck(L_228);
		int32_t L_230 = L_229;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_231 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		NullCheck(L_231);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_232 = L_231->___points_6;
		int32_t L_233 = V_3;
		int32_t L_234 = V_16;
		NullCheck(L_232);
		int32_t L_235 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_233, ((int32_t)(L_234/2)))), 1));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_236 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_236);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_237 = L_236->___point_0;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_238 = __this->___manager_10;
		NullCheck(L_238);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_239 = L_238->___lanes_4;
		int32_t L_240 = V_4;
		NullCheck(L_239);
		int32_t L_241 = L_240;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		NullCheck(L_242);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_243 = L_242->___points_6;
		int32_t L_244 = V_3;
		int32_t L_245 = V_16;
		NullCheck(L_243);
		int32_t L_246 = ((int32_t)il2cpp_codegen_add(L_244, ((int32_t)(L_245/2))));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_247 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		NullCheck(L_247);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248 = L_247->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_249;
		L_249 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_237, L_248, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_250;
		L_250 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_249, NULL);
		V_22 = L_250;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_251 = V_1;
		NullCheck(L_251);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_252;
		L_252 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_251, NULL);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_253 = __this->___manager_10;
		NullCheck(L_253);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_254 = L_253->___lanes_4;
		int32_t L_255 = V_4;
		NullCheck(L_254);
		int32_t L_256 = L_255;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		NullCheck(L_257);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_258 = L_257->___points_6;
		int32_t L_259 = V_3;
		int32_t L_260 = V_16;
		NullCheck(L_258);
		int32_t L_261 = ((int32_t)il2cpp_codegen_add(L_259, ((int32_t)(L_260/2))));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_262 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		NullCheck(L_262);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_263 = L_262->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_264;
		L_264 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_265;
		L_265 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_264, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_266;
		L_266 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_263, L_265, NULL);
		NullCheck(L_252);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_252, L_266, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_267 = V_1;
		NullCheck(L_267);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_268;
		L_268 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_267, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_269 = V_22;
		NullCheck(L_268);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_268, L_269, NULL);
		TSTrafficSpawner_AddTrafficCar_m9C0AABEE75195D032E1B998CA9432EA1C723A220(__this, (&V_14), NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_270 = __this->___trafficCarsPositions_17;
		int32_t L_271 = V_12;
		NullCheck(L_270);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_272 = V_14;
		NullCheck(L_272);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_273;
		L_273 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_272, NULL);
		NullCheck(L_273);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_274;
		L_274 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_273, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_270)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_271))) = L_274;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_275 = V_18;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_276 = __this->___manager_10;
		NullCheck(L_276);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_277 = L_276->___lanes_4;
		NullCheck(L_275);
		L_275->___lanes_15 = L_277;
		Il2CppCodeGenWriteBarrier((void**)(&L_275->___lanes_15), (void*)L_277);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_278 = V_18;
		NullCheck(L_278);
		L_278->___wasTravelingOnConnector_17 = (bool)0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_279 = V_18;
		NullCheck(L_279);
		L_279->___travelingOnConector_16 = (bool)0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_280 = V_18;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_281 = V_18;
		NullCheck(L_281);
		int32_t L_282 = L_281->___currentLane_9;
		NullCheck(L_280);
		L_280->___lastLane_20 = L_282;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_283 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_284;
		L_284 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_283);
		L_283->___RelativeWaypointPosition_6 = L_284;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_285 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_286;
		L_286 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_285);
		L_285->___RelativeWaypointPositionOnCar_7 = L_286;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_287 = V_18;
		NullCheck(L_287);
		L_287->___relativeWPosMagnitude_22 = (0.0f);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_288 = V_14;
		NullCheck(L_288);
		L_288->___nextPathIndex_21 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_289 = V_14;
		NullCheck(L_289);
		L_289->___segDistance_20 = (0.0f);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_290 = V_14;
		NullCheck(L_290);
		L_290->___currentConnector_17 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_290->___currentConnector_17), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_291 = V_14;
		NullCheck(L_291);
		L_291->___lane_22 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_292 = V_14;
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_293 = (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*)il2cpp_codegen_object_new(List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0_il2cpp_TypeInfo_var);
		NullCheck(L_293);
		List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751(L_293, List_1__ctor_m4D37CF11495A17A6B330854FA1467054D0295751_RuntimeMethod_var);
		NullCheck(L_292);
		L_292->___brakeSpeeds_15 = L_293;
		Il2CppCodeGenWriteBarrier((void**)(&L_292->___brakeSpeeds_15), (void*)L_293);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_294 = V_18;
		NullCheck(L_294);
		L_294->___selectedConnector_18 = 0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_295 = V_18;
		NullCheck(L_295);
		L_295->___lastSelectedConnector_19 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_295->___lastSelectedConnector_19), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_296 = V_18;
		NullCheck(L_296);
		L_296->___starting_29 = (bool)1;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_297 = V_18;
		int32_t L_298 = V_3;
		int32_t L_299 = V_16;
		NullCheck(L_297);
		L_297->___currentWaypoint_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_298, L_299)), 1));
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_300 = V_18;
		int32_t L_301 = V_4;
		NullCheck(L_300);
		L_300->___currentLane_9 = L_301;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_302 = V_18;
		int32_t L_303 = V_3;
		NullCheck(L_302);
		L_302->___currentWaypointOnCar_5 = L_303;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_304 = V_18;
		int32_t L_305 = V_3;
		NullCheck(L_304);
		L_304->___previousWaypointSteer_8 = L_305;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_306 = V_18;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_307 = __this->___manager_10;
		NullCheck(L_307);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_308 = L_307->___lanes_4;
		int32_t L_309 = V_4;
		NullCheck(L_308);
		int32_t L_310 = L_309;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_311 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		NullCheck(L_311);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_312 = L_311->___points_6;
		NullCheck(L_306);
		L_306->___waypoints_13 = L_312;
		Il2CppCodeGenWriteBarrier((void**)(&L_306->___waypoints_13), (void*)L_312);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_313 = V_18;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_314 = V_18;
		NullCheck(L_314);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_315 = L_314->___waypoints_13;
		NullCheck(L_313);
		L_313->___lastWaypoints_14 = L_315;
		Il2CppCodeGenWriteBarrier((void**)(&L_313->___lastWaypoints_14), (void*)L_315);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_316 = V_18;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_317 = __this->___manager_10;
		NullCheck(L_317);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_318 = L_317->___lanes_4;
		int32_t L_319 = V_4;
		NullCheck(L_318);
		int32_t L_320 = L_319;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_321 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		NullCheck(L_321);
		float L_322 = L_321->___maxSpeed_5;
		NullCheck(L_316);
		L_316->___currentMaxSpeed_12 = L_322;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_323 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_324;
		L_324 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_325 = L_324.___z_4;
		NullCheck(L_323);
		L_323->___carDepth_11 = L_325;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_326 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_327;
		L_327 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_328 = L_327.___x_2;
		NullCheck(L_326);
		L_326->___carWidth_12 = L_328;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_329 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_330;
		L_330 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_331 = L_330.___y_3;
		NullCheck(L_329);
		L_329->___carHeight_13 = L_331;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_332 = V_14;
		int32_t L_333 = V_3;
		int32_t L_334 = V_16;
		NullCheck(L_332);
		L_332->___previousWaypointCurve_19 = ((int32_t)il2cpp_codegen_add(L_333, L_334));
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_335 = V_14;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_336 = V_18;
		NullCheck(L_336);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_337 = L_336->___lastWaypoints_14;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_338 = V_14;
		NullCheck(L_338);
		int32_t L_339 = L_338->___previousWaypointCurve_19;
		NullCheck(L_337);
		int32_t L_340 = L_339;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_341 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		NullCheck(L_335);
		L_335->___currenPoint_16 = L_341;
		Il2CppCodeGenWriteBarrier((void**)(&L_335->___currenPoint_16), (void*)L_341);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_342 = V_18;
		NullCheck(L_342);
		TSNavigation_AddNextTrackToPath_m824AAA81735165049B10BD2EB586A65D724D3436(L_342, NULL);
		V_0 = (bool)0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_343 = V_14;
		NullCheck(L_343);
		TSTrafficAI_Enable_m3C8DF47BF3287A0C8F268DB1633CE30BF76B0E5D(L_343, (bool)1, NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_344 = V_18;
		NullCheck(L_344);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_345 = L_344->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_346 = V_18;
		NullCheck(L_346);
		int32_t L_347 = L_346->___currentLane_9;
		NullCheck(L_345);
		int32_t L_348 = L_347;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_349 = (L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_350 = L_349;
		NullCheck(L_350);
		float L_351 = L_350->___totalOcupation_11;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_352 = V_14;
		NullCheck(L_352);
		float L_353 = L_352->___carDepth_11;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_354 = V_18;
		NullCheck(L_354);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_355 = L_354->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_356 = V_18;
		NullCheck(L_356);
		int32_t L_357 = L_356->___currentLane_9;
		NullCheck(L_355);
		int32_t L_358 = L_357;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_359 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		NullCheck(L_359);
		float L_360 = L_359->___totalDistance_12;
		NullCheck(L_350);
		L_350->___totalOcupation_11 = ((float)il2cpp_codegen_add(L_351, ((float)(((float)il2cpp_codegen_add(L_353, (3.0f)))/L_360))));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_361 = __this->___trafficCarsFarIndexes_18;
		int32_t L_362 = V_12;
		NullCheck(L_361);
		(L_361)->SetAt(static_cast<il2cpp_array_size_t>(L_362), (bool)0);
		goto IL_0795;
	}

IL_06f0:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_363 = V_18;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_364 = __this->___manager_10;
		NullCheck(L_364);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_365 = L_364->___lanes_4;
		NullCheck(L_363);
		L_363->___lanes_15 = L_365;
		Il2CppCodeGenWriteBarrier((void**)(&L_363->___lanes_15), (void*)L_365);
		TSTrafficSpawner_AddTrafficCar_m9C0AABEE75195D032E1B998CA9432EA1C723A220(__this, (&V_14), NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_366 = __this->___trafficCarsPositions_17;
		int32_t L_367 = V_12;
		NullCheck(L_366);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_368 = V_14;
		NullCheck(L_368);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_369;
		L_369 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_368, NULL);
		NullCheck(L_369);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_370;
		L_370 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_369, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_366)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_367))) = L_370;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_371 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_372;
		L_372 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_373 = L_372.___z_4;
		NullCheck(L_371);
		L_371->___carDepth_11 = L_373;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_374 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_375;
		L_375 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_376 = L_375.___x_2;
		NullCheck(L_374);
		L_374->___carWidth_12 = L_376;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_377 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_378;
		L_378 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_5), NULL);
		float L_379 = L_378.___y_3;
		NullCheck(L_377);
		L_377->___carHeight_13 = L_379;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_380 = V_14;
		NullCheck(L_380);
		TSTrafficAI_Enable_m3C8DF47BF3287A0C8F268DB1633CE30BF76B0E5D(L_380, (bool)0, NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_381 = V_14;
		NullCheck(L_381);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_382;
		L_382 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_381, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_383 = __this->___unusedCarsPosition_11;
		NullCheck(L_382);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_382, L_383, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_384 = __this->___trafficCarsFarIndexes_18;
		int32_t L_385 = V_12;
		NullCheck(L_384);
		(L_384)->SetAt(static_cast<il2cpp_array_size_t>(L_385), (bool)1);
		int32_t L_386 = __this->____totalFarCars_30;
		__this->____totalFarCars_30 = ((int32_t)il2cpp_codegen_add(L_386, 1));
		V_0 = (bool)0;
	}

IL_0795:
	{
		int32_t L_387 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_387, 1));
	}

IL_079b:
	{
		int32_t L_388 = V_12;
		int32_t L_389 = V_9;
		if ((((int32_t)L_388) < ((int32_t)L_389)))
		{
			goto IL_0171;
		}
	}
	{
		TSTrafficSpawner_Initialize_m7BB23B08B413CF524D73F4D7FF9D71DA36C74704(__this, NULL);
		int32_t L_390 = __this->___threadsCount_25;
		if (L_390)
		{
			goto IL_07bf;
		}
	}
	{
		RuntimeObject* L_391;
		L_391 = TSTrafficSpawner_CheckNearLanesSingleThread_m1DC2C2C8B1646E28C31B2DCD28270A9E12F4245C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_392;
		L_392 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_391, NULL);
	}

IL_07bf:
	{
		return;
	}
}
// System.Boolean TSTrafficSpawner::GetCarByFrequency(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficSpawner_GetCarByFrequency_m837A809BB18755BE97440CF5967DD9B9830620B9 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, int32_t* ___0_currentIndex, int32_t* ___1_returnedIndex, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_returnedIndex;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___0_currentIndex;
		int32_t L_2 = *((int32_t*)L_1);
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_3 = __this->___cars_4;
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_4 = __this->___cars_4;
		int32_t* L_5 = ___0_currentIndex;
		int32_t L_6 = *((int32_t*)L_5);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = L_8->___frequency_1;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = __this->___currentAmountOfCar_34;
		TSSpawnVehiclesU5BU5D_t387A8576975DB8416831275914F2B4B4577482DF* L_11 = __this->___cars_4;
		int32_t* L_12 = ___0_currentIndex;
		int32_t L_13 = *((int32_t*)L_12);
		NullCheck(L_11);
		int32_t L_14 = L_13;
		TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16 = L_15->___frequency_1;
		if ((((int32_t)L_10) >= ((int32_t)L_16)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t* L_17 = ___1_returnedIndex;
		int32_t* L_18 = ___0_currentIndex;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)L_19;
		int32_t L_20 = __this->___currentAmountOfCar_34;
		__this->___currentAmountOfCar_34 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return (bool)1;
	}

IL_0049:
	{
		int32_t* L_21 = ___0_currentIndex;
		int32_t* L_22 = L_21;
		int32_t L_23 = *((int32_t*)L_22);
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add(L_23, 1));
		__this->___currentAmountOfCar_34 = 0;
		return (bool)0;
	}

IL_0058:
	{
		return (bool)1;
	}
}
// System.Void TSTrafficSpawner::AddTrafficCar(TSTrafficAI&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_AddTrafficCar_m9C0AABEE75195D032E1B998CA9432EA1C723A220 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4** ___0_AI, const RuntimeMethod* method) 
{
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_0 = __this->___trafficCars_15;
		int32_t L_1 = __this->___trafficarLastAdded_29;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4** L_2 = ___0_AI;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_3 = *((TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4**)L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4*)L_3);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = __this->___trafficCarsTransform_16;
		int32_t L_5 = __this->___trafficarLastAdded_29;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4** L_6 = ___0_AI;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_7 = *((TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4**)L_6);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_8);
		int32_t L_9 = __this->___trafficarLastAdded_29;
		__this->___trafficarLastAdded_29 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
// System.Boolean TSTrafficSpawner::CheckTrafficVolume(System.Int32&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TSTrafficSpawner_CheckTrafficVolume_m445F2341DD5159B78F5F24517BBFFED9BB98E5B2 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, int32_t* ___0_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m841F3E16565B232B361AE966654F6DEDA951FD22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t* L_0 = ___0_volume;
		*((int32_t*)L_0) = (int32_t)(-1);
		V_0 = 0;
		goto IL_0050;
	}

IL_0007:
	{
		TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341* L_1 = __this->___trafficVolumes_14;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(L_4, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_5);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6;
		L_6 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_5, NULL);
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_point;
		bool L_8;
		L_8 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555((&V_1), L_7, NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341* L_9 = __this->___trafficVolumes_14;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* L_13 = L_12->___carsOnThisSection_5;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m841F3E16565B232B361AE966654F6DEDA951FD22_inline(L_13, List_1_get_Count_m841F3E16565B232B361AE966654F6DEDA951FD22_RuntimeMethod_var);
		TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341* L_15 = __this->___trafficVolumes_14;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		int32_t L_19 = L_18->___maxAllowedCars_4;
		if ((((int32_t)L_14) >= ((int32_t)L_19)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t* L_20 = ___0_volume;
		int32_t L_21 = V_0;
		*((int32_t*)L_20) = (int32_t)L_21;
		return (bool)1;
	}

IL_004a:
	{
		return (bool)0;
	}

IL_004c:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0050:
	{
		int32_t L_23 = V_0;
		TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341* L_24 = __this->___trafficVolumes_14;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// UnityEngine.Bounds TSTrafficSpawner::CarSize(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TSTrafficSpawner_CarSize_m4AEE5173A3578834BBDB610D080FAAFDEE69C51F (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_car, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_3 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_4 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_5 = NULL;
	int32_t V_6 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_car;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		V_1 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_car;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_2 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___0_car;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___0_car;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___0_car;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_0), L_15, L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___0_car;
		NullCheck(L_17);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_18;
		L_18 = GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D(L_17, GameObject_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mEB861FF41A6625D346B9D34D7A5A1E761E27963D_RuntimeMethod_var);
		V_3 = L_18;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_19 = V_3;
		V_5 = L_19;
		V_6 = 0;
		goto IL_007e;
	}

IL_0063:
	{
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_20 = V_5;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = L_23;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24 = V_4;
		NullCheck(L_24);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_25;
		L_25 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_24, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_0), L_25, NULL);
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_007e:
	{
		int32_t L_27 = V_6;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_28 = V_5;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = ___0_car;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_1;
		NullCheck(L_30);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_30, L_31, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = ___0_car;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_34, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_35 = V_0;
		return L_35;
	}
}
// System.Void TSTrafficSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_Update_m046D7899804B3556CD44706CFA8AB7CDF41AE7CC (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		TSTrafficSpawner_UpdateCarPositions_mC142FCFA53B4635452E68A1E4642651E79C95EC4(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___myPosition_21 = L_1;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___nextActionTime_20;
		float L_4 = __this->___refreshTime_9;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_2, L_3))) > ((float)L_4))))
		{
			goto IL_0042;
		}
	}
	{
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___nextActionTime_20 = L_5;
		TSTrafficSpawner_CheckFarCarsSingleThread_mF237BC07549DE594EF85BD072BF9DDB99D2A9937(__this, NULL);
		TSTrafficSpawner_AddCar_m877C9470FB96675059EB597131B6E263F6D92D7D(__this, NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void TSTrafficSpawner::UpdateCarPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_UpdateCarPositions_mC142FCFA53B4635452E68A1E4642651E79C95EC4 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___trafficCarsPositions_17;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___trafficCarsTransform_16;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))) = L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_9 = __this->___trafficCars_15;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void TSTrafficSpawner::CheckNearLanes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_CheckNearLanes_mACE37C0E832E07620E908B9BDDBABCEB581B14DA (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = 0;
		goto IL_01dc;
	}

IL_0007:
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_0 = __this->___manager_10;
		NullCheck(L_0);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_1 = L_0->___lanes_4;
		int32_t L_2 = __this->___laneIndex1_35;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_5 = L_4->___points_6;
		int32_t L_6 = __this->___pointIndex1_36;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___myPosition_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
		V_3 = L_11;
		float L_12;
		L_12 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_3), NULL);
		V_1 = L_12;
		float L_13 = V_1;
		float L_14 = __this->___maxDistanceSQRMin_32;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0147;
		}
	}
	{
		float L_15 = V_1;
		float L_16 = __this->___maxDistanceSQRMax_31;
		if ((!(((float)L_15) < ((float)L_16))))
		{
			goto IL_0147;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_17 = __this->___manager_10;
		NullCheck(L_17);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_18 = L_17->___lanes_4;
		int32_t L_19 = __this->___laneIndex1_35;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_22 = L_21->___points_6;
		int32_t L_23 = __this->___pointIndex1_36;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		int32_t L_26 = L_25->___reservationID_1;
		if (L_26)
		{
			goto IL_0147;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2));
		int32_t L_27 = __this->___laneIndex1_35;
		(&V_2)->___lane_0 = L_27;
		int32_t L_28 = __this->___pointIndex1_36;
		(&V_2)->___point_1 = L_28;
		int32_t L_29 = __this->___pointIndex1_36;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_30 = __this->___manager_10;
		NullCheck(L_30);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_31 = L_30->___lanes_4;
		int32_t L_32 = __this->___laneIndex1_35;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_35 = L_34->___points_6;
		NullCheck(L_35);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_29, 3))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0147;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_36 = __this->___manager_10;
		NullCheck(L_36);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_37 = L_36->___lanes_4;
		int32_t L_38 = __this->___laneIndex1_35;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_41 = L_40->___points_6;
		int32_t L_42 = __this->___pointIndex1_36;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		int32_t L_45 = L_44->___reservationID_1;
		if (L_45)
		{
			goto IL_0147;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_46 = __this->___manager_10;
		NullCheck(L_46);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_47 = L_46->___lanes_4;
		int32_t L_48 = __this->___laneIndex1_35;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_51 = L_50->___points_6;
		int32_t L_52 = __this->___pointIndex1_36;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 2));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		int32_t L_55 = L_54->___reservationID_1;
		if (L_55)
		{
			goto IL_0147;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_56 = __this->___manager_10;
		NullCheck(L_56);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_57 = L_56->___lanes_4;
		int32_t L_58 = __this->___laneIndex1_35;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_61 = L_60->___points_6;
		int32_t L_62 = __this->___pointIndex1_36;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 3));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		int32_t L_65 = L_64->___reservationID_1;
		if (L_65)
		{
			goto IL_0147;
		}
	}
	{
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_66 = __this->___pointsIndex2_37;
		PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 L_67 = V_2;
		NullCheck(L_66);
		List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_inline(L_66, L_67, List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_RuntimeMethod_var);
	}

IL_0147:
	{
		int32_t L_68 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		int32_t L_69 = V_0;
		if ((((int32_t)L_69) <= ((int32_t)((int32_t)250))))
		{
			goto IL_0195;
		}
	}
	{
		int32_t L_70 = __this->___laneIndex1_35;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_71 = __this->___manager_10;
		NullCheck(L_71);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_72 = L_71->___lanes_4;
		NullCheck(L_72);
		if ((((int32_t)L_70) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_72)->max_length)), 1)))))
		{
			goto IL_0194;
		}
	}
	{
		__this->___laneIndex1_35 = 0;
		__this->___pointIndex1_36 = 0;
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_73 = __this->___pointsIndex2_37;
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_74 = (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*)il2cpp_codegen_object_new(List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9(L_74, L_73, List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9_RuntimeMethod_var);
		__this->___pointsIndex_19 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointsIndex_19), (void*)L_74);
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_75 = __this->___pointsIndex2_37;
		NullCheck(L_75);
		List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_inline(L_75, List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_RuntimeMethod_var);
	}

IL_0194:
	{
		return;
	}

IL_0195:
	{
		int32_t L_76 = __this->___pointIndex1_36;
		__this->___pointIndex1_36 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01a3:
	{
		int32_t L_77 = __this->___pointIndex1_36;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_78 = __this->___manager_10;
		NullCheck(L_78);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_79 = L_78->___lanes_4;
		int32_t L_80 = __this->___laneIndex1_35;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_83 = L_82->___points_6;
		NullCheck(L_83);
		if ((((int32_t)L_77) < ((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		__this->___pointIndex1_36 = 0;
		int32_t L_84 = __this->___laneIndex1_35;
		__this->___laneIndex1_35 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_01dc:
	{
		int32_t L_85 = __this->___laneIndex1_35;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_86 = __this->___manager_10;
		NullCheck(L_86);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_87 = L_86->___lanes_4;
		NullCheck(L_87);
		if ((((int32_t)L_85) < ((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length)))))
		{
			goto IL_01a3;
		}
	}
	{
		int32_t L_88 = __this->___laneIndex1_35;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_89 = __this->___manager_10;
		NullCheck(L_89);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_90 = L_89->___lanes_4;
		NullCheck(L_90);
		if ((((int32_t)L_88) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_90)->max_length)), 1)))))
		{
			goto IL_0232;
		}
	}
	{
		__this->___laneIndex1_35 = 0;
		__this->___pointIndex1_36 = 0;
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_91 = __this->___pointsIndex2_37;
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_92 = (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*)il2cpp_codegen_object_new(List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
		NullCheck(L_92);
		List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9(L_92, L_91, List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9_RuntimeMethod_var);
		__this->___pointsIndex_19 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointsIndex_19), (void*)L_92);
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_93 = __this->___pointsIndex2_37;
		NullCheck(L_93);
		List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_inline(L_93, List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_RuntimeMethod_var);
	}

IL_0232:
	{
		return;
	}
}
// System.Void TSTrafficSpawner::CheckFarCars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_CheckFarCars_m63E60B0B21933639521EBBE10CDB81A042F391B6 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0102;
	}

IL_0007:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___trafficCarsPositions_17;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___myPosition_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		V_2 = L_4;
		float L_5;
		L_5 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		V_1 = L_5;
		float L_6 = V_1;
		float L_7 = __this->___maxDistanceSQRMax_31;
		if ((((float)L_6) > ((float)((float)il2cpp_codegen_multiply(L_7, (1.20000005f))))))
		{
			goto IL_0052;
		}
	}
	{
		bool L_8 = __this->___respawnIfUpSideDown_12;
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_9 = __this->___trafficCars_15;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		bool L_13;
		L_13 = TSTrafficAI_get_ForcedRespawn_m47BD7FA67E038549401BFE695D0F46C3E86B4240_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_0075;
		}
	}

IL_0052:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->___trafficCarsFarIndexes_18;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int8_t L_17 = (int8_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (L_17)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_18 = __this->____totalFarCars_30;
		__this->____totalFarCars_30 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = __this->___trafficCarsFarIndexes_18;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (bool)1);
		goto IL_0096;
	}

IL_0075:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_21 = __this->___trafficCarsFarIndexes_18;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int8_t L_24 = (int8_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_25 = __this->____totalFarCars_30;
		__this->____totalFarCars_30 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_26 = __this->___trafficCarsFarIndexes_18;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (bool)0);
	}

IL_0096:
	{
		float L_28 = V_1;
		float L_29 = __this->___closerRange_8;
		float L_30 = __this->___closerRange_8;
		if ((!(((float)L_28) > ((float)((float)il2cpp_codegen_multiply(L_29, L_30))))))
		{
			goto IL_00d3;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_31 = __this->___trafficCars_15;
		int32_t L_32 = __this->___currentFarCar_38;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* L_35 = L_34->___OnFarRange_52;
		if (!L_35)
		{
			goto IL_00fe;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_36 = __this->___trafficCars_15;
		int32_t L_37 = __this->___currentFarCar_38;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* L_40 = L_39->___OnFarRange_52;
		NullCheck(L_40);
		OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_inline(L_40, NULL);
		goto IL_00fe;
	}

IL_00d3:
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_41 = __this->___trafficCars_15;
		int32_t L_42 = __this->___currentFarCar_38;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* L_45 = L_44->___OnCloserRange_53;
		if (!L_45)
		{
			goto IL_00fe;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_46 = __this->___trafficCars_15;
		int32_t L_47 = __this->___currentFarCar_38;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* L_50 = L_49->___OnCloserRange_53;
		NullCheck(L_50);
		OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_inline(L_50, NULL);
	}

IL_00fe:
	{
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0102:
	{
		int32_t L_52 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = __this->___trafficCarsPositions_17;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator TSTrafficSpawner::CheckNearLanesSingleThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TSTrafficSpawner_CheckNearLanesSingleThread_m1DC2C2C8B1646E28C31B2DCD28270A9E12F4245C (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* V_0 = NULL;
	{
		U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* L_0 = (U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F*)il2cpp_codegen_object_new(U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckNearLanesSingleThreadU3Ed__0__ctor_m5876FD7E9EB1A87CFC8AE44CAEADFF6F47BAA23E(L_0, 0, NULL);
		V_0 = L_0;
		U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* L_2 = V_0;
		return L_2;
	}
}
// System.Void TSTrafficSpawner::CheckFarCarsSingleThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_CheckFarCarsSingleThread_mF237BC07549DE594EF85BD072BF9DDB99D2A9937 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_01a3;
	}

IL_0005:
	{
		int32_t L_0 = __this->___time_39;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0017;
		}
	}
	{
		__this->___time_39 = 0;
		return;
	}

IL_0017:
	{
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___trafficCarsTransform_16;
		int32_t L_2 = __this->___currentFarCar_38;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___myPosition_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		V_1 = L_7;
		float L_8;
		L_8 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_1), NULL);
		V_0 = L_8;
		float L_9 = V_0;
		float L_10 = __this->___maxDistanceSQRMax_31;
		if ((((float)L_9) > ((float)((float)il2cpp_codegen_multiply(L_10, (1.20000005f))))))
		{
			goto IL_006e;
		}
	}
	{
		bool L_11 = __this->___respawnIfUpSideDown_12;
		if (!L_11)
		{
			goto IL_00f4;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_12 = __this->___trafficCars_15;
		int32_t L_13 = __this->___currentFarCar_38;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		bool L_16;
		L_16 = TSTrafficAI_get_ForcedRespawn_m47BD7FA67E038549401BFE695D0F46C3E86B4240_inline(L_15, NULL);
		if (!L_16)
		{
			goto IL_00f4;
		}
	}

IL_006e:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17 = __this->___trafficCarsFarIndexes_18;
		int32_t L_18 = __this->___currentFarCar_38;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int8_t L_20 = (int8_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if (L_20)
		{
			goto IL_011f;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_21 = __this->___trafficCarsFarIndexes_18;
		int32_t L_22 = __this->___currentFarCar_38;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (bool)1);
		int32_t L_23 = __this->____totalFarCars_30;
		__this->____totalFarCars_30 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_24 = __this->___trafficCars_15;
		int32_t L_25 = __this->___currentFarCar_38;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_28;
		L_28 = TSTrafficAI_get_NavigateToWaypoints_m0C0959569CFC61D0372DD339371CFCD7AB7108A1_inline(L_27, NULL);
		NullCheck(L_28);
		TSNavigation_UnreserveAll_m311FEA8A59F1758DB8FBAC7621655906E5271749(L_28, (bool)1, NULL);
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_29 = __this->___trafficCars_15;
		int32_t L_30 = __this->___currentFarCar_38;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		TSTrafficAI_Enable_m3C8DF47BF3287A0C8F268DB1633CE30BF76B0E5D(L_32, (bool)0, NULL);
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_33 = __this->___trafficCars_15;
		int32_t L_34 = __this->___currentFarCar_38;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		TSTrafficAI_set_ForcedRespawn_m615C1D2557556013D226208D4CA42D62982E14D1_inline(L_36, (bool)0, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_37 = __this->___trafficCarsTransform_16;
		int32_t L_38 = __this->___currentFarCar_38;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___unusedCarsPosition_11;
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_41, NULL);
		goto IL_011f;
	}

IL_00f4:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_42 = __this->___trafficCarsFarIndexes_18;
		int32_t L_43 = __this->___currentFarCar_38;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int8_t L_45 = (int8_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if (!L_45)
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_46 = __this->____totalFarCars_30;
		__this->____totalFarCars_30 = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_47 = __this->___trafficCarsFarIndexes_18;
		int32_t L_48 = __this->___currentFarCar_38;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (bool)0);
	}

IL_011f:
	{
		float L_49 = V_0;
		float L_50 = __this->___closerRange_8;
		float L_51 = __this->___closerRange_8;
		if ((!(((float)L_49) > ((float)((float)il2cpp_codegen_multiply(L_50, L_51))))))
		{
			goto IL_015c;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_52 = __this->___trafficCars_15;
		int32_t L_53 = __this->___currentFarCar_38;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* L_56 = L_55->___OnFarRange_52;
		if (!L_56)
		{
			goto IL_0187;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_57 = __this->___trafficCars_15;
		int32_t L_58 = __this->___currentFarCar_38;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_60);
		OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* L_61 = L_60->___OnFarRange_52;
		NullCheck(L_61);
		OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_inline(L_61, NULL);
		goto IL_0187;
	}

IL_015c:
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_62 = __this->___trafficCars_15;
		int32_t L_63 = __this->___currentFarCar_38;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* L_66 = L_65->___OnCloserRange_53;
		if (!L_66)
		{
			goto IL_0187;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_67 = __this->___trafficCars_15;
		int32_t L_68 = __this->___currentFarCar_38;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* L_71 = L_70->___OnCloserRange_53;
		NullCheck(L_71);
		OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_inline(L_71, NULL);
	}

IL_0187:
	{
		int32_t L_72 = __this->___time_39;
		__this->___time_39 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = __this->___currentFarCar_38;
		__this->___currentFarCar_38 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_01a3:
	{
		int32_t L_74 = __this->___currentFarCar_38;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_75 = __this->___trafficCarsPositions_17;
		NullCheck(L_75);
		if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))))
		{
			goto IL_0005;
		}
	}
	{
		__this->___currentFarCar_38 = 0;
		__this->___time_39 = 0;
		return;
	}
}
// System.Void TSTrafficSpawner::CheckNearLanesLoop(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_CheckNearLanesLoop_m59B5CB18861801CD21050B7CA35E48F8CC289691 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{

IL_0000:
	{
		TSTrafficSpawner_CheckNearLanes_mACE37C0E832E07620E908B9BDDBABCEB581B14DA(__this, NULL);
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(0, NULL);
		bool L_0 = __this->___close_26;
		if (!L_0)
		{
			goto IL_0000;
		}
	}
	{
		return;
	}
}
// System.Void TSTrafficSpawner::RemoveCar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_RemoveCar_m3D670F1D72A2DA9036B067AE5EE4A5E5F297E5A1 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, int32_t ___0_carIndex, const RuntimeMethod* method) 
{
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_0 = __this->___trafficCars_15;
		int32_t L_1 = ___0_carIndex;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_4;
		L_4 = TSTrafficAI_get_NavigateToWaypoints_m0C0959569CFC61D0372DD339371CFCD7AB7108A1_inline(L_3, NULL);
		NullCheck(L_4);
		TSNavigation_UnreserveAll_m311FEA8A59F1758DB8FBAC7621655906E5271749(L_4, (bool)1, NULL);
		return;
	}
}
// System.Int32 TSTrafficSpawner::GetNextCarFarIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSTrafficSpawner_GetNextCarFarIndex_m032E9F848F7DA64E4FB0A2951320D9D6FCE0DD86 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___trafficCarsFarIndexes_18;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0013:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->___trafficCarsFarIndexes_18;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int8_t L_5 = (int8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001f:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = __this->___trafficCarsFarIndexes_18;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = __this->___trafficCarsFarIndexes_18;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 TSTrafficSpawner::GetNextCarFarIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TSTrafficSpawner_GetNextCarFarIndex_m6A75ED0E9F09DEAA89ED659B31D577B205DC9C7B (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, int32_t ___0_currentIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_currentIndex;
		V_0 = L_0;
		goto IL_0014;
	}

IL_0004:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->___trafficCarsFarIndexes_18;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int8_t L_4 = (int8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!L_4)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0010:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = __this->___trafficCarsFarIndexes_18;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
// System.Void TSTrafficSpawner::AddCar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_AddCar_m877C9470FB96675059EB597131B6E263F6D92D7D (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m046358360F9D9E54FCB8A7403C3F6301C01B1597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE4F8B2408B5D967FE6699EB7914B042426A2BDE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD V_16;
	memset((&V_16), 0, sizeof(V_16));
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_17 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	float G_B16_0 = 0.0f;
	{
		int32_t L_0;
		L_0 = TSTrafficSpawner_GetNextCarFarIndex_m032E9F848F7DA64E4FB0A2951320D9D6FCE0DD86(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_2 = __this->___trafficCars_15;
		NullCheck(L_2);
		int32_t L_3 = __this->____totalFarCars_30;
		int32_t L_4 = __this->___amount_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), L_3))) > ((int32_t)L_4)))
		{
			goto IL_06f9;
		}
	}
	{
		int32_t L_5 = __this->____totalFarCars_30;
		if ((((int32_t)L_5) >= ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = __this->___lock2_27;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_7 = L_6;
		V_17 = L_7;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_7, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_8 = V_17;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_8, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_9 = __this->___pointsIndex_19;
			List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_10 = (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*)il2cpp_codegen_object_new(List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9(L_10, L_9, List_1__ctor_mDB3A542AD92F1EB457E1405168B288297F6E55E9_RuntimeMethod_var);
			__this->___pointsIndex1_42 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___pointsIndex1_42), (void*)L_10);
			goto IL_0059;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_11 = __this->___pointsIndex1_42;
		if (!L_11)
		{
			goto IL_06f9;
		}
	}
	{
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_12 = __this->___pointsIndex1_42;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_inline(L_12, List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_RuntimeMethod_var);
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0073:
	{
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_14 = __this->___pointsIndex1_42;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_inline(L_14, List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_RuntimeMethod_var);
		int32_t L_16;
		L_16 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		V_1 = L_16;
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_17 = __this->___pointsIndex1_42;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 L_19;
		L_19 = List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4(L_17, L_18, List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4_RuntimeMethod_var);
		int32_t L_20 = L_19.___point_1;
		V_2 = L_20;
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_21 = __this->___pointsIndex1_42;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 L_23;
		L_23 = List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4(L_21, L_22, List_1_get_Item_m84089199990DA5F6EE6BE025400159B16B3933D4_RuntimeMethod_var);
		int32_t L_24 = L_23.___lane_0;
		V_3 = L_24;
		V_4 = (bool)1;
		int32_t* L_25 = (&__this->___currentVolume_28);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_26 = __this->___manager_10;
		NullCheck(L_26);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_27 = L_26->___lanes_4;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_31 = L_30->___points_6;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34->___point_0;
		bool L_36;
		L_36 = TSTrafficSpawner_CheckTrafficVolume_m445F2341DD5159B78F5F24517BBFFED9BB98E5B2(__this, L_25, L_35, NULL);
		if (L_36)
		{
			goto IL_00d8;
		}
	}
	{
		V_4 = (bool)0;
	}

IL_00d8:
	{
		int32_t L_37 = V_0;
		V_5 = L_37;
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) > ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		G_B16_0 = (0.0f);
		goto IL_011b;
	}

IL_00e6:
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_39 = __this->___manager_10;
		NullCheck(L_39);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_40 = L_39->___lanes_4;
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_44 = L_43->___points_6;
		int32_t L_45 = V_2;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		float L_48 = L_47->___distanceToNextPoint_5;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_49 = __this->___manager_10;
		NullCheck(L_49);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_50 = L_49->___lanes_4;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_54 = L_53->___points_6;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		float L_58 = L_57->___distanceToNextPoint_5;
		G_B16_0 = ((float)il2cpp_codegen_subtract(L_48, L_58));
	}

IL_011b:
	{
		V_6 = G_B16_0;
		V_7 = 0;
		int32_t L_59 = V_0;
		V_8 = L_59;
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_60 = __this->___trafficCars_15;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		__this->___AI_40 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AI_40), (void*)L_63);
		float L_64 = __this->___maxDistanceSQRMin_32;
		V_9 = L_64;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_65, NULL);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_67 = __this->___manager_10;
		NullCheck(L_67);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_68 = L_67->___lanes_4;
		int32_t L_69 = V_3;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_72 = L_71->___points_6;
		int32_t L_73 = V_2;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_66, L_76, NULL);
		V_18 = L_77;
		float L_78;
		L_78 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_18), NULL);
		V_10 = L_78;
		float L_79 = V_10;
		float L_80 = V_9;
		if ((!(((float)L_79) < ((float)L_80))))
		{
			goto IL_0175;
		}
	}
	{
		return;
	}

IL_0175:
	{
		V_11 = 0;
		goto IL_01d5;
	}

IL_017a:
	{
		int32_t L_81 = V_8;
		V_5 = L_81;
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_82 = __this->___trafficCars_15;
		int32_t L_83 = V_5;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		__this->___AI_40 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AI_40), (void*)L_85);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_86 = __this->___manager_10;
		NullCheck(L_86);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_87 = L_86->___lanes_4;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		int32_t L_91 = L_90->___vehicleType_4;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_92 = __this->___AI_40;
		NullCheck(L_92);
		int32_t L_93 = L_92->___myVehicleType_14;
		if ((((int32_t)((int32_t)((int32_t)L_91&((int32_t)(1<<((int32_t)((int32_t)L_93&((int32_t)31)))))))) > ((int32_t)0)))
		{
			goto IL_01e3;
		}
	}
	{
		int32_t L_94 = V_8;
		int32_t L_95;
		L_95 = TSTrafficSpawner_GetNextCarFarIndex_m6A75ED0E9F09DEAA89ED659B31D577B205DC9C7B(__this, L_94, NULL);
		V_8 = L_95;
		int32_t L_96 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		int32_t L_97 = V_8;
		if ((((int32_t)L_97) == ((int32_t)(-1))))
		{
			goto IL_01d2;
		}
	}
	{
		int32_t L_98 = V_11;
		int32_t L_99 = __this->____totalFarCars_30;
		if ((((int32_t)L_98) < ((int32_t)L_99)))
		{
			goto IL_01d5;
		}
	}

IL_01d2:
	{
		V_4 = (bool)0;
	}

IL_01d5:
	{
		int32_t L_100 = V_11;
		int32_t L_101 = __this->____totalFarCars_30;
		if ((((int32_t)L_100) >= ((int32_t)L_101)))
		{
			goto IL_01e3;
		}
	}
	{
		bool L_102 = V_4;
		if (L_102)
		{
			goto IL_017a;
		}
	}

IL_01e3:
	{
		bool L_103 = V_4;
		if (L_103)
		{
			goto IL_01e8;
		}
	}
	{
		return;
	}

IL_01e8:
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_104 = __this->___trafficCars_15;
		int32_t L_105 = V_5;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_108;
		L_108 = TSTrafficAI_get_NavigateToWaypoints_m0C0959569CFC61D0372DD339371CFCD7AB7108A1_inline(L_107, NULL);
		__this->___nav_41 = L_108;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nav_41), (void*)L_108);
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_109 = __this->___trafficCars_15;
		int32_t L_110 = V_5;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_112);
		float L_113 = L_112->___carDepth_11;
		V_12 = L_113;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_114 = __this->___manager_10;
		NullCheck(L_114);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_115 = L_114->___lanes_4;
		int32_t L_116 = V_3;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_119 = L_118->___points_6;
		int32_t L_120 = V_2;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		int32_t L_123 = L_122->___reservationID_1;
		if (!L_123)
		{
			goto IL_02b7;
		}
	}
	{
		return;
	}

IL_022b:
	{
		int32_t L_124 = V_2;
		int32_t L_125 = V_7;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_126 = __this->___manager_10;
		NullCheck(L_126);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_127 = L_126->___lanes_4;
		int32_t L_128 = V_3;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_130);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_131 = L_130->___points_6;
		NullCheck(L_131);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_124, L_125))) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_131)->max_length)), 1)))))
		{
			goto IL_026d;
		}
	}
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_132 = __this->___manager_10;
		NullCheck(L_132);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_133 = L_132->___lanes_4;
		int32_t L_134 = V_3;
		NullCheck(L_133);
		int32_t L_135 = L_134;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		float L_137 = L_136->___totalOcupation_11;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_138 = __this->___manager_10;
		NullCheck(L_138);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_139 = L_138->___lanes_4;
		int32_t L_140 = V_3;
		NullCheck(L_139);
		int32_t L_141 = L_140;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_142);
		float L_143 = L_142->___trafficDensity_10;
		if ((!(((float)L_137) > ((float)L_143))))
		{
			goto IL_0271;
		}
	}

IL_026d:
	{
		V_4 = (bool)0;
		return;
	}

IL_0271:
	{
		float L_144 = V_6;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_145 = __this->___manager_10;
		NullCheck(L_145);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_146 = L_145->___lanes_4;
		int32_t L_147 = V_3;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_149);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_150 = L_149->___points_6;
		int32_t L_151 = V_2;
		int32_t L_152 = V_7;
		NullCheck(L_150);
		int32_t L_153 = ((int32_t)il2cpp_codegen_add(L_151, L_152));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_154 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_154);
		float L_155 = L_154->___distanceToNextPoint_5;
		V_6 = ((float)il2cpp_codegen_add(L_144, L_155));
		int32_t L_156 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_156, 1));
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_157 = __this->___manager_10;
		NullCheck(L_157);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_158 = L_157->___lanes_4;
		int32_t L_159 = V_3;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_161);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_162 = L_161->___points_6;
		int32_t L_163 = V_2;
		int32_t L_164 = V_7;
		NullCheck(L_162);
		int32_t L_165 = ((int32_t)il2cpp_codegen_add(L_163, L_164));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_166 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_166);
		int32_t L_167 = L_166->___reservationID_1;
		if (!L_167)
		{
			goto IL_02b7;
		}
	}
	{
		return;
	}

IL_02b7:
	{
		float L_168 = V_6;
		float L_169 = V_12;
		if ((((float)L_168) < ((float)L_169)))
		{
			goto IL_022b;
		}
	}
	{
		bool L_170 = V_4;
		if (!L_170)
		{
			goto IL_06f9;
		}
	}
	{
		int32_t L_171 = V_2;
		int32_t L_172 = V_7;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_173 = __this->___manager_10;
		NullCheck(L_173);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_174 = L_173->___lanes_4;
		int32_t L_175 = V_3;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		NullCheck(L_177);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_178 = L_177->___points_6;
		NullCheck(L_178);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_171, L_172))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_178)->max_length)))))
		{
			goto IL_06f9;
		}
	}
	{
		V_4 = (bool)0;
		int32_t L_179 = __this->___currentVolume_28;
		if ((((int32_t)L_179) == ((int32_t)(-1))))
		{
			goto IL_030d;
		}
	}
	{
		TSTrafficVolumeU5BU5D_tDCF55E38710FFD46E2229031B6FF9AE20E089341* L_180 = __this->___trafficVolumes_14;
		int32_t L_181 = __this->___currentVolume_28;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		NullCheck(L_183);
		List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* L_184 = L_183->___carsOnThisSection_5;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_185 = __this->___AI_40;
		NullCheck(L_184);
		List_1_Add_m046358360F9D9E54FCB8A7403C3F6301C01B1597_inline(L_184, L_185, List_1_Add_m046358360F9D9E54FCB8A7403C3F6301C01B1597_RuntimeMethod_var);
	}

IL_030d:
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_186 = __this->___nav_41;
		NullCheck(L_186);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_187 = L_186->___lanes_15;
		NullCheck(L_187);
		if (((int32_t)(((RuntimeArray*)L_187)->max_length)))
		{
			goto IL_0332;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_188 = __this->___nav_41;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_189 = __this->___manager_10;
		NullCheck(L_189);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_190 = L_189->___lanes_4;
		NullCheck(L_188);
		L_188->___lanes_15 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&L_188->___lanes_15), (void*)L_190);
	}

IL_0332:
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_191 = __this->___manager_10;
		NullCheck(L_191);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_192 = L_191->___lanes_4;
		int32_t L_193 = V_3;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		NullCheck(L_195);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_196 = L_195->___points_6;
		int32_t L_197 = V_2;
		int32_t L_198 = V_7;
		NullCheck(L_196);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_197, ((int32_t)(L_198/2)))), 1));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_200 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_200);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201 = L_200->___point_0;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_202 = __this->___manager_10;
		NullCheck(L_202);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_203 = L_202->___lanes_4;
		int32_t L_204 = V_3;
		NullCheck(L_203);
		int32_t L_205 = L_204;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		NullCheck(L_206);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_207 = L_206->___points_6;
		int32_t L_208 = V_2;
		int32_t L_209 = V_7;
		NullCheck(L_207);
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(L_208, ((int32_t)(L_209/2))));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_211 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		NullCheck(L_211);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212 = L_211->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213;
		L_213 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_201, L_212, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_214;
		L_214 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_213, NULL);
		V_13 = L_214;
		V_14 = 0;
		goto IL_03f1;
	}

IL_0381:
	{
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_215 = __this->___AI_40;
		NullCheck(L_215);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_216 = L_215->___bodies_10;
		int32_t L_217 = V_14;
		NullCheck(L_216);
		int32_t L_218 = L_217;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220;
		L_220 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_219);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_219, L_220, NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_221 = __this->___AI_40;
		NullCheck(L_221);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_222 = L_221->___bodies_10;
		int32_t L_223 = V_14;
		NullCheck(L_222);
		int32_t L_224 = L_223;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_225 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_226;
		L_226 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_225);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_225, L_226, NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_227 = __this->___AI_40;
		NullCheck(L_227);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_228 = L_227->___bodies_10;
		int32_t L_229 = V_14;
		NullCheck(L_228);
		int32_t L_230 = L_229;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_231 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		NullCheck(L_231);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_232;
		L_232 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_231, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_233;
		L_233 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_232);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_232, L_233, NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_234 = __this->___AI_40;
		NullCheck(L_234);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_235 = L_234->___bodies_10;
		int32_t L_236 = V_14;
		NullCheck(L_235);
		int32_t L_237 = L_236;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		NullCheck(L_238);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_239;
		L_239 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_238, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_240;
		L_240 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_239);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_239, L_240, NULL);
		int32_t L_241 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_241, 1));
	}

IL_03f1:
	{
		int32_t L_242 = V_14;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_243 = __this->___AI_40;
		NullCheck(L_243);
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_244 = L_243->___bodies_10;
		NullCheck(L_244);
		if ((((int32_t)L_242) < ((int32_t)((int32_t)(((RuntimeArray*)L_244)->max_length)))))
		{
			goto IL_0381;
		}
	}
	{
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_245 = __this->___trafficCars_15;
		int32_t L_246 = V_5;
		NullCheck(L_245);
		int32_t L_247 = L_246;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_248 = (L_245)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		NullCheck(L_248);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_249;
		L_249 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_248, NULL);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_250 = __this->___manager_10;
		NullCheck(L_250);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_251 = L_250->___lanes_4;
		int32_t L_252 = V_3;
		NullCheck(L_251);
		int32_t L_253 = L_252;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_254 = (L_251)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		NullCheck(L_254);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_255 = L_254->___points_6;
		int32_t L_256 = V_2;
		int32_t L_257 = V_7;
		NullCheck(L_255);
		int32_t L_258 = ((int32_t)il2cpp_codegen_add(L_256, ((int32_t)(L_257/2))));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_259 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		NullCheck(L_259);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_260 = L_259->___point_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_261;
		L_261 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_262;
		L_262 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_261, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_263;
		L_263 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_260, L_262, NULL);
		NullCheck(L_249);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_249, L_263, NULL);
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_264 = __this->___trafficCars_15;
		int32_t L_265 = V_5;
		NullCheck(L_264);
		int32_t L_266 = L_265;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_267 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		NullCheck(L_267);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_268;
		L_268 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_267, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_269 = V_13;
		NullCheck(L_268);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_268, L_269, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_270 = __this->___trafficCarsFarIndexes_18;
		int32_t L_271 = V_5;
		NullCheck(L_270);
		(L_270)->SetAt(static_cast<il2cpp_array_size_t>(L_271), (bool)0);
		int32_t L_272 = __this->____totalFarCars_30;
		__this->____totalFarCars_30 = ((int32_t)il2cpp_codegen_subtract(L_272, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_273 = __this->___trafficCarsPositions_17;
		int32_t L_274 = V_5;
		NullCheck(L_273);
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_275 = __this->___trafficCars_15;
		int32_t L_276 = V_5;
		NullCheck(L_275);
		int32_t L_277 = L_276;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_278 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		NullCheck(L_278);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_279;
		L_279 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_278, NULL);
		NullCheck(L_279);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_280;
		L_280 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_279, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((L_273)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_274))) = L_280;
		V_15 = 0;
		goto IL_050e;
	}

IL_04a1:
	{
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_281 = __this->___manager_10;
		NullCheck(L_281);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_282 = L_281->___lanes_4;
		int32_t L_283 = V_3;
		NullCheck(L_282);
		int32_t L_284 = L_283;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_285 = (L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		NullCheck(L_285);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_286 = L_285->___points_6;
		int32_t L_287 = V_2;
		int32_t L_288 = V_15;
		NullCheck(L_286);
		int32_t L_289 = ((int32_t)il2cpp_codegen_add(L_287, L_288));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_290 = (L_286)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_291 = __this->___nav_41;
		NullCheck(L_291);
		int32_t L_292 = L_291->___myID_21;
		NullCheck(L_290);
		L_290->___reservationID_1 = L_292;
		il2cpp_codegen_initobj((&V_16), sizeof(TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD));
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_293 = __this->___manager_10;
		NullCheck(L_293);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_294 = L_293->___lanes_4;
		int32_t L_295 = V_3;
		NullCheck(L_294);
		int32_t L_296 = L_295;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_297 = (L_294)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		NullCheck(L_297);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_298 = L_297->___points_6;
		int32_t L_299 = V_2;
		int32_t L_300 = V_15;
		NullCheck(L_298);
		int32_t L_301 = ((int32_t)il2cpp_codegen_add(L_299, L_300));
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_302 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		(&V_16)->___point_1 = L_302;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_16)->___point_1), (void*)L_302);
		(&V_16)->___connector_0 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_16)->___connector_0), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_303 = __this->___nav_41;
		NullCheck(L_303);
		Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* L_304 = L_303->___reservedPoints_25;
		TSReservedPoints_tCBEF72EEEC5B087D07C3C916333E4B5E8EF54CBD L_305 = V_16;
		NullCheck(L_304);
		Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3(L_304, L_305, Queue_1_Enqueue_m1A17E61DBEDF79946EB550F02A322F6509159ED3_RuntimeMethod_var);
		int32_t L_306 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_306, 1));
	}

IL_050e:
	{
		int32_t L_307 = V_15;
		int32_t L_308 = V_7;
		if ((((int32_t)L_307) <= ((int32_t)L_308)))
		{
			goto IL_04a1;
		}
	}
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_309 = __this->___nav_41;
		int32_t L_310 = V_2;
		int32_t L_311 = V_7;
		NullCheck(L_309);
		L_309->___currentWaypoint_4 = ((int32_t)il2cpp_codegen_add(L_310, L_311));
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_312 = __this->___nav_41;
		int32_t L_313 = V_3;
		NullCheck(L_312);
		L_312->___currentLane_9 = L_313;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_314 = __this->___nav_41;
		int32_t L_315 = V_2;
		NullCheck(L_314);
		L_314->___currentWaypointOnCar_5 = L_315;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_316 = __this->___nav_41;
		int32_t L_317 = V_2;
		NullCheck(L_316);
		L_316->___previousWaypointSteer_8 = L_317;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_318 = __this->___AI_40;
		int32_t L_319 = V_2;
		int32_t L_320 = V_7;
		NullCheck(L_318);
		L_318->___previousWaypointCurve_19 = ((int32_t)il2cpp_codegen_add(L_319, L_320));
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_321 = __this->___nav_41;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_322 = __this->___manager_10;
		NullCheck(L_322);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_323 = L_322->___lanes_4;
		int32_t L_324 = V_3;
		NullCheck(L_323);
		int32_t L_325 = L_324;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		NullCheck(L_326);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_327 = L_326->___points_6;
		NullCheck(L_321);
		L_321->___waypoints_13 = L_327;
		Il2CppCodeGenWriteBarrier((void**)(&L_321->___waypoints_13), (void*)L_327);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_328 = __this->___nav_41;
		NullCheck(L_328);
		L_328->___wasTravelingOnConnector_17 = (bool)0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_329 = __this->___nav_41;
		NullCheck(L_329);
		L_329->___travelingOnConector_16 = (bool)0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_330 = __this->___nav_41;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_331 = __this->___nav_41;
		NullCheck(L_331);
		int32_t L_332 = L_331->___currentLane_9;
		NullCheck(L_330);
		L_330->___lastLane_20 = L_332;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_333 = __this->___nav_41;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_334 = __this->___nav_41;
		NullCheck(L_334);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_335 = L_334->___waypoints_13;
		NullCheck(L_333);
		L_333->___lastWaypoints_14 = L_335;
		Il2CppCodeGenWriteBarrier((void**)(&L_333->___lastWaypoints_14), (void*)L_335);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_336 = __this->___nav_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_337;
		L_337 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_336);
		L_336->___RelativeWaypointPosition_6 = L_337;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_338 = __this->___nav_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_339;
		L_339 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_338);
		L_338->___RelativeWaypointPositionOnCar_7 = L_339;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_340 = __this->___nav_41;
		NullCheck(L_340);
		L_340->___relativeWPosMagnitude_22 = (0.0f);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_341 = __this->___AI_40;
		NullCheck(L_341);
		L_341->___nextPathIndex_21 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_342 = __this->___AI_40;
		NullCheck(L_342);
		L_342->___segDistance_20 = (0.0f);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_343 = __this->___AI_40;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_344 = __this->___nav_41;
		NullCheck(L_344);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_345 = L_344->___lastWaypoints_14;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_346 = __this->___AI_40;
		NullCheck(L_346);
		int32_t L_347 = L_346->___previousWaypointCurve_19;
		NullCheck(L_345);
		int32_t L_348 = L_347;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_349 = (L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		NullCheck(L_343);
		L_343->___currenPoint_16 = L_349;
		Il2CppCodeGenWriteBarrier((void**)(&L_343->___currenPoint_16), (void*)L_349);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_350 = __this->___AI_40;
		NullCheck(L_350);
		L_350->___currentConnector_17 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_350->___currentConnector_17), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_351 = __this->___AI_40;
		NullCheck(L_351);
		L_351->___lane_22 = 0;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_352 = __this->___AI_40;
		NullCheck(L_352);
		List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* L_353 = L_352->___brakeSpeeds_15;
		NullCheck(L_353);
		List_1_Clear_mE4F8B2408B5D967FE6699EB7914B042426A2BDE4_inline(L_353, List_1_Clear_mE4F8B2408B5D967FE6699EB7914B042426A2BDE4_RuntimeMethod_var);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_354 = __this->___nav_41;
		NullCheck(L_354);
		L_354->___selectedConnector_18 = 0;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_355 = __this->___nav_41;
		NullCheck(L_355);
		L_355->___lastSelectedConnector_19 = (TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_355->___lastSelectedConnector_19), (void*)(TSLaneConnector_t927E26C4DAAF6711D0654A49701DE667F1593D89*)NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_356 = __this->___nav_41;
		NullCheck(L_356);
		L_356->___starting_29 = (bool)1;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_357 = __this->___nav_41;
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_358 = __this->___manager_10;
		NullCheck(L_358);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_359 = L_358->___lanes_4;
		int32_t L_360 = V_3;
		NullCheck(L_359);
		int32_t L_361 = L_360;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_362 = (L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		NullCheck(L_362);
		float L_363 = L_362->___maxSpeed_5;
		NullCheck(L_357);
		L_357->___currentMaxSpeed_12 = L_363;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_364 = __this->___nav_41;
		NullCheck(L_364);
		TSNavigation_AddNextTrackToPath_m824AAA81735165049B10BD2EB586A65D724D3436(L_364, NULL);
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_365 = __this->___nav_41;
		NullCheck(L_365);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_366 = L_365->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_367 = __this->___nav_41;
		NullCheck(L_367);
		int32_t L_368 = L_367->___currentLane_9;
		NullCheck(L_366);
		int32_t L_369 = L_368;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_370 = (L_366)->GetAt(static_cast<il2cpp_array_size_t>(L_369));
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_371 = L_370;
		NullCheck(L_371);
		float L_372 = L_371->___totalOcupation_11;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_373 = __this->___AI_40;
		NullCheck(L_373);
		float L_374 = L_373->___carDepth_11;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_375 = __this->___nav_41;
		NullCheck(L_375);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_376 = L_375->___lanes_15;
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_377 = __this->___nav_41;
		NullCheck(L_377);
		int32_t L_378 = L_377->___currentLane_9;
		NullCheck(L_376);
		int32_t L_379 = L_378;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_380 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_379));
		NullCheck(L_380);
		float L_381 = L_380->___totalDistance_12;
		NullCheck(L_371);
		L_371->___totalOcupation_11 = ((float)il2cpp_codegen_add(L_372, ((float)(((float)il2cpp_codegen_add(L_374, (3.0f)))/L_381))));
		TSTrafficAIU5BU5D_t6F2C8EB9A2820CA2CE7FEFBA11D99CF88E91AAF2* L_382 = __this->___trafficCars_15;
		int32_t L_383 = V_5;
		NullCheck(L_382);
		int32_t L_384 = L_383;
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_385 = (L_382)->GetAt(static_cast<il2cpp_array_size_t>(L_384));
		NullCheck(L_385);
		TSTrafficAI_Enable_m3C8DF47BF3287A0C8F268DB1633CE30BF76B0E5D(L_385, (bool)1, NULL);
	}

IL_06f9:
	{
		return;
	}
}
// System.Void TSTrafficSpawner::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_Initialize_m7BB23B08B413CF524D73F4D7FF9D71DA36C74704 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TSTrafficSpawner_CheckNearLanesLoop_m59B5CB18861801CD21050B7CA35E48F8CC289691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Environment_get_ProcessorCount_mDAC34132B9E3B90121F37673DF78F13FCB9497AC(NULL);
		__this->___threadsCount_25 = L_0;
		int32_t L_1 = __this->___threadsCount_25;
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		__this->___threadsCount_25 = 0;
		return;
	}

IL_001c:
	{
		int32_t L_2 = __this->___threadsCount_25;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_2, 0, 1, NULL);
		__this->___threadsCount_25 = L_3;
		AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D* L_4 = (AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D*)(AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D*)SZArrayNew(AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___jobAvailable_23 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jobAvailable_23), (void*)L_4);
		ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934* L_5 = (ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934*)(ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934*)SZArrayNew(ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___threadIdle_24 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threadIdle_24), (void*)L_5);
		ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2* L_6 = (ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2*)(ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2*)SZArrayNew(ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___threads_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threads_22), (void*)L_6);
		AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D* L_7 = __this->___jobAvailable_23;
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_8 = (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0*)il2cpp_codegen_object_new(AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE(L_8, (bool)0, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0*)L_8);
		ManualResetEventU5BU5D_t3CD77B64FB69A3146CB1E90C7398741DDF1A3934* L_9 = __this->___threadIdle_24;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_10 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_10, (bool)1, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)L_10);
		ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2* L_11 = __this->___threads_22;
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_12 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_12, __this, (intptr_t)((void*)TSTrafficSpawner_CheckNearLanesLoop_m59B5CB18861801CD21050B7CA35E48F8CC289691_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_13 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_13, L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)L_13);
		ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2* L_14 = __this->___threads_22;
		NullCheck(L_14);
		int32_t L_15 = 0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30(L_16, (bool)0, NULL);
		ThreadU5BU5D_t9D34A6A5BE8998FAD6B8556B1E16BF0C836572B2* L_17 = __this->___threads_22;
		NullCheck(L_17);
		int32_t L_18 = 0;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = 0;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_19, L_21, NULL);
		return;
	}
}
// System.Void TSTrafficSpawner::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_Close_m3D6F5E7DE451D7F3E15BA95D75D0F559E3AF99B7 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		AutoResetEventU5BU5D_tC00472FCB767D50DF20EAF3C51C6D23BAE4A479D* L_0 = __this->___jobAvailable_23;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_3, NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0016:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___threadsCount_25;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void TSTrafficSpawner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_OnDisable_m8961971D7987B763AE8D9761985660E9B9D84C42 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		__this->___close_26 = (bool)1;
		return;
	}
}
// System.Void TSTrafficSpawner::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_OnDestroy_mF5D8ADCDC31E64BF821A7BC9DA8EB9A66F136C19 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		__this->___close_26 = (bool)1;
		return;
	}
}
// System.Void TSTrafficSpawner::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner_OnDrawGizmos_mB844D002C339F9EDAC74B2AC6F9FB6AA5759E32D (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___maxDistance_6;
		float L_4 = __this->___offset_7;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, ((float)il2cpp_codegen_add(L_3, L_4)), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = __this->___maxDistance_6;
		float L_8 = __this->___offset_7;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_6, ((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		return;
	}
}
// System.Void TSTrafficSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficSpawner__ctor_mE0E74D8F7594BF579813ED0F557A37190BC29693 (TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___amount_5 = ((int32_t)50);
		__this->___maxDistance_6 = (150.0f);
		__this->___offset_7 = (140.0f);
		__this->___closerRange_8 = (25.0f);
		__this->___refreshTime_9 = (0.0199999996f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (50000.0f), (50000.0f), (50000.0f), /*hidden argument*/NULL);
		__this->___unusedCarsPosition_11 = L_0;
		__this->___respawnUpSideDownTime_13 = (2.0f);
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_1 = (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*)il2cpp_codegen_object_new(List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA(L_1, List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA_RuntimeMethod_var);
		__this->___pointsIndex_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointsIndex_19), (void*)L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___myPosition_21 = L_2;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)il2cpp_codegen_object_new(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(L_3, NULL);
		__this->___lock2_27 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lock2_27), (void*)L_3);
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_4 = (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*)il2cpp_codegen_object_new(List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA(L_4, List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA_RuntimeMethod_var);
		__this->___pointsIndex2_37 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointsIndex2_37), (void*)L_4);
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_5 = (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*)il2cpp_codegen_object_new(List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA(L_5, List_1__ctor_m988FE21F44235F217F49F2A2CDB215845665EBBA_RuntimeMethod_var);
		__this->___pointsIndex1_42 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointsIndex1_42), (void*)L_5);
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
// System.Void TSTrafficSpawner/TSSpawnVehicles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSSpawnVehicles__ctor_m5021EA1D88E9AC22A298ED94D8B02555021B65C6 (TSSpawnVehicles_t9A526F41C635B20578677E7F7C28930CC0FC2A2E* __this, const RuntimeMethod* method) 
{
	{
		__this->___frequency_1 = 1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckNearLanesSingleThreadU3Ed__0_MoveNext_m99A8ACC62ADC976CFD39658C96706D19996D62A0 (U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001a;
			}
			case 1:
			{
				goto IL_0150;
			}
		}
	}
	{
		goto IL_01be;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_1 = (-1);
		__this->___U3CtimeU3E5__1_3 = 0;
	}

IL_0028:
	{
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_3 = L_2->___pointsIndex_19;
		NullCheck(L_3);
		List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_inline(L_3, List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_RuntimeMethod_var);
		__this->___U3CwU3E5__2_4 = 0;
		goto IL_019c;
	}

IL_0044:
	{
		__this->___U3CiU3E5__3_5 = 0;
		goto IL_0165;
	}

IL_0050:
	{
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_5 = L_4->___manager_10;
		NullCheck(L_5);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_6 = L_5->___lanes_4;
		int32_t L_7 = __this->___U3CwU3E5__2_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_10 = L_9->___points_6;
		int32_t L_11 = __this->___U3CiU3E5__3_5;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___point_0;
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___myPosition_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_14, L_16, NULL);
		V_2 = L_17;
		float L_18;
		L_18 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		__this->___U3Cdistance3U3E5__4_6 = L_18;
		float L_19 = __this->___U3Cdistance3U3E5__4_6;
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		float L_21 = L_20->___maxDistanceSQRMin_32;
		if ((!(((float)L_19) > ((float)L_21))))
		{
			goto IL_011e;
		}
	}
	{
		float L_22 = __this->___U3Cdistance3U3E5__4_6;
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		float L_24 = L_23->___maxDistanceSQRMax_31;
		if ((!(((float)L_22) < ((float)L_24))))
		{
			goto IL_011e;
		}
	}
	{
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_25 = __this->___U3CU3E4__this_2;
		NullCheck(L_25);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_26 = L_25->___manager_10;
		NullCheck(L_26);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_27 = L_26->___lanes_4;
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_28 = __this->___U3CU3E4__this_2;
		NullCheck(L_28);
		int32_t L_29 = L_28->___laneIndex1_35;
		NullCheck(L_27);
		int32_t L_30 = L_29;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_32 = L_31->___points_6;
		int32_t L_33 = __this->___U3CiU3E5__3_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		TSPoints_t4EFE264DD41C0B191DA1ADD5557D15A2656B35B5* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		int32_t L_36 = L_35->___reservationID_1;
		if (L_36)
		{
			goto IL_011e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2));
		int32_t L_37 = __this->___U3CwU3E5__2_4;
		(&V_0)->___lane_0 = L_37;
		int32_t L_38 = __this->___U3CiU3E5__3_5;
		(&V_0)->___point_1 = L_38;
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_39 = __this->___U3CU3E4__this_2;
		NullCheck(L_39);
		List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* L_40 = L_39->___pointsIndex_19;
		PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 L_41 = V_0;
		NullCheck(L_40);
		List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_inline(L_40, L_41, List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_RuntimeMethod_var);
	}

IL_011e:
	{
		int32_t L_42 = __this->___U3CtimeU3E5__1_3;
		__this->___U3CtimeU3E5__1_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->___U3CtimeU3E5__1_3;
		if ((((int32_t)L_43) <= ((int32_t)((int32_t)250))))
		{
			goto IL_0157;
		}
	}
	{
		__this->___U3CtimeU3E5__1_3 = 0;
		__this->___U3CU3E2__current_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_0), (void*)NULL);
		__this->___U3CU3E1__state_1 = 1;
		return (bool)1;
	}

IL_0150:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_0157:
	{
		int32_t L_44 = __this->___U3CiU3E5__3_5;
		__this->___U3CiU3E5__3_5 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0165:
	{
		int32_t L_45 = __this->___U3CiU3E5__3_5;
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_46 = __this->___U3CU3E4__this_2;
		NullCheck(L_46);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_47 = L_46->___manager_10;
		NullCheck(L_47);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_48 = L_47->___lanes_4;
		int32_t L_49 = __this->___U3CwU3E5__2_4;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		TSLaneInfo_t11B509FB59262F8EC3DACF74B99A27837E265FA9* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		TSPointsU5BU5D_t1772FE772C914D8B3CC2336BDD57410BB66343CD* L_52 = L_51->___points_6;
		NullCheck(L_52);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_53 = __this->___U3CwU3E5__2_4;
		__this->___U3CwU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_019c:
	{
		int32_t L_54 = __this->___U3CwU3E5__2_4;
		TSTrafficSpawner_tEDCD58274C3C33CE1A37C1B0F16E90B3B2FA8A5B* L_55 = __this->___U3CU3E4__this_2;
		NullCheck(L_55);
		TSMainManager_t602DD780D1E1A2E2481FB804F339D92C3C159652* L_56 = L_55->___manager_10;
		NullCheck(L_56);
		TSLaneInfoU5BU5D_tAB5A1900FC76D7916A44E5D0D95C8D0155F6F7C9* L_57 = L_56->___lanes_4;
		NullCheck(L_57);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0028;
	}

IL_01be:
	{
		return (bool)0;
	}
}
// System.Object TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckNearLanesSingleThreadU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC533CCC75A34A5812F18FCBFB7B6EF51133BFCBF (U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_0;
		return L_0;
	}
}
// System.Void TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckNearLanesSingleThreadU3Ed__0_System_Collections_IEnumerator_Reset_m044FC000EC52DB33CC3358CF8684F41DD002A7A3 (U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckNearLanesSingleThreadU3Ed__0_System_Collections_IEnumerator_Reset_m044FC000EC52DB33CC3358CF8684F41DD002A7A3_RuntimeMethod_var)));
	}
}
// System.Void TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckNearLanesSingleThreadU3Ed__0_System_IDisposable_Dispose_m5A824479A617C6CEAD980D64A62FD77A0157A2FD (U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* __this, const RuntimeMethod* method) 
{
	PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		return;
	}
}
// System.Object TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckNearLanesSingleThreadU3Ed__0_System_Collections_IEnumerator_get_Current_mF57869146F55501E0775265F3D497E14CAF099B9 (U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_0;
		return L_0;
	}
}
// System.Void TSTrafficSpawner/<CheckNearLanesSingleThread>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckNearLanesSingleThreadU3Ed__0__ctor_m5876FD7E9EB1A87CFC8AE44CAEADFF6F47BAA23E (U3CCheckNearLanesSingleThreadU3Ed__0_tB3B6337D851B098440585049C774008F7FC87C7F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
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
// System.Void TSTrafficVolume::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficVolume_OnTriggerExit_m9DC8C20CA8429F60292E0F9DFDC150CAE42BE988 (TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_car, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_mD533EA80E0E1BDE9BC581D07358A97E62FCB6B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mC38F277FE9B7DB280A4B4A025EAD1CB7FEFBBE59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB1C6C6C6F7DB5317FDCFF08E3A6EB196BA84C00);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_car;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralDB1C6C6C6F7DB5317FDCFF08E3A6EB196BA84C00, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0029;
		}
	}
	{
		List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* L_4 = __this->___carsOnThisSection_5;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___0_car;
		NullCheck(L_5);
		TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* L_6;
		L_6 = Component_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_mD533EA80E0E1BDE9BC581D07358A97E62FCB6B63(L_5, Component_GetComponent_TisTSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4_mD533EA80E0E1BDE9BC581D07358A97E62FCB6B63_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = List_1_Remove_mC38F277FE9B7DB280A4B4A025EAD1CB7FEFBBE59(L_4, L_6, List_1_Remove_mC38F277FE9B7DB280A4B4A025EAD1CB7FEFBBE59_RuntimeMethod_var);
	}

IL_0029:
	{
		return;
	}
}
// System.Void TSTrafficVolume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TSTrafficVolume__ctor_m257A8066A0C0A9C5FC8E17C352D3BB94746620DD (TSTrafficVolume_tF971B8E88FEA7354BC757F44D064B774786FE414* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m57F6B97C612ABAF9B71811F09358E42E2341B082_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___maxAllowedCars_4 = ((int32_t)10);
		List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9* L_0 = (List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9*)il2cpp_codegen_object_new(List_1_tA2EBBBEDE2A1A20495EBDCBAEF13E7AA8395C0A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m57F6B97C612ABAF9B71811F09358E42E2341B082(L_0, List_1__ctor_m57F6B97C612ABAF9B71811F09358E42E2341B082_RuntimeMethod_var);
		__this->___carsOnThisSection_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___carsOnThisSection_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TSTrafficAI_get_carSpeed_mB8ED63C895518DDF8AC5131CA1B377194ABF7A3E_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____carSpeed_32;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TSTrafficAI_get_LookAheadDistance_m398FB1B39A0989E2A6681E8E415459AD171AE1C1_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____lookAheadDistance_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTurnLeftDelegate_Invoke_m7E2BCF057F51DE121D095CAF78BCFED7BFD3D6FF_inline (OnTurnLeftDelegate_t0186D05FC567A686F9EE9E52323A78FA565DDDBF* __this, bool ___0_isTurning, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_isTurning, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTurnRigthDelegate_Invoke_m78ADD3D99DB919DDD2592D93AE00DF33667287C1_inline (OnTurnRigthDelegate_t8D64FD9AC60352173F9E9447AFEBEE0989442B1E* __this, bool ___0_isTurning, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_isTurning, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GetCarSpeedDelegate_Invoke_m1E17F70D6371FFD58AC4CEC588B755643A4A229F_inline (GetCarSpeedDelegate_t8635244666E04AE973ABE4D948E53AEF716ABD4A* __this, float* ___0_carSpeed, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_carSpeed, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnUpdateAIDelegate_Invoke_m6C87FAB3A2369EFE32C165726DBBC195A9E18F6D_inline (OnUpdateAIDelegate_tF37E725CA0A160208FF118C21B748DA851D985B3* __this, float ___0_steering, float ___1_brake, float ___2_throttle, bool ___3_isUpSideDown, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, float, float, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_steering, ___1_brake, ___2_throttle, ___3_isUpSideDown, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m5ED73273031577902F1BED4CA9C5A0E786A680D1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
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
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TSTrafficAI_get_ForcedRespawn_m47BD7FA67E038549401BFE695D0F46C3E86B4240_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forcedRespawn_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFarRangeDelegate_Invoke_m87F85F99CCE40587C07434DC8A16DD69B74589A6_inline (OnFarRangeDelegate_tA56AB2A06F11E776D93115181F355AA3403071F1* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCloserRangeDelegate_Invoke_m0943821825F606BBB575B6112106B069795FE65D_inline (OnCloserRangeDelegate_t6E964E2F33900692DA6E3973F11233DB88641A27* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* TSTrafficAI_get_NavigateToWaypoints_m0C0959569CFC61D0372DD339371CFCD7AB7108A1_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, const RuntimeMethod* method) 
{
	{
		TSNavigation_t8DD20ADF520C42512A5B08FE0F248DA2E64AEE94* L_0 = __this->____navigateToWaypoints_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TSTrafficAI_set_ForcedRespawn_m615C1D2557556013D226208D4CA42D62982E14D1_inline (TSTrafficAI_tCD7FC85A598F3BE71100D53B1604840EAE82DFC4* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___forcedRespawn_47 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1B2493F7A3308F3FFAF90E8C2811490739C2C2D3_gshared_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD4D6D94B35DD9F461523FFE98A17827A398D1FBE_gshared_inline (Queue_1_t0C25C6F110E6359572AB8E38C35D2299CED03464* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m5C2DE64E7A2996A3CC5631166ACB23FABB6D929A_gshared_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0* L_3 = (TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m164D7C38E08F59315B6321B67EA46293B71A9F8F_gshared_inline (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705* __this, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B ___0_item, const RuntimeMethod* method) 
{
	TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0* L_1 = (TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		TSNextLaneSelectionU5BU5D_tBFB2BD2D74C27BEEF71112ED9918CE82161D0CD0* L_6 = V_0;
		int32_t L_7 = V_1;
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B)L_8);
		return;
	}

IL_0034:
	{
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_9 = ___0_item;
		((  void (*) (List_1_tF797F9021A01C1F0BA87A3130500D0B99BBE5705*, TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B Enumerator_get_Current_m00EFCFE880E05B1E23360E029C358884DB7FDD61_gshared_inline (Enumerator_t2FA966AE7EAD97649E640C40FFCCE93E5192F5E2* __this, const RuntimeMethod* method) 
{
	{
		TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B L_0 = (TSNextLaneSelection_t0AA5D1DFD10C7712E8987DE2D573CEBFEF56866B)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m404330841507581BCCA8E532A732AEC027DE1468_gshared_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mE6C9F9D00999EADB14909F841A829FDF5AE03130_gshared_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 ___0_item, const RuntimeMethod* method) 
{
	TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83* L_1 = (TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83* L_6 = V_0;
		int32_t L_7 = V_1;
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2)L_8);
		return;
	}

IL_0034:
	{
		TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2 L_9 = ___0_item;
		((  void (*) (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0*, TSBrakeSpeeds_t6BB5481F573E7ADC51ED2B9B5EF76B31FD4CD5A2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mDA7A9754F1628585B38A142BC5C4B301AC96A7F2_gshared_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 ___0_item, const RuntimeMethod* method) 
{
	PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B* L_1 = (PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B* L_6 = V_0;
		int32_t L_7 = V_1;
		PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2)L_8);
		return;
	}

IL_0034:
	{
		PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2 L_9 = ___0_item;
		((  void (*) (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477*, PointsIndex_t313F0ED9FA716B76A7E5DCF7A5684060FE5A45F2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4154A1D34351D47E69DB6BD6CC7D7B292382ABC2_gshared_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B* L_3 = (PointsIndexU5BU5D_t081170028E25B8C33F686FA4A3ABD4A0D824904B*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4B95BE08C2AF6E4EFB5FF5C3D15E386F346146A7_gshared_inline (List_1_t0BF80A39DC76E788EABCA40A1C9F533194085477* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mE4F8B2408B5D967FE6699EB7914B042426A2BDE4_gshared_inline (List_1_t2BB3D121D287CEB3EE54A174C8D004B951F367F0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83* L_3 = (TSBrakeSpeedsU5BU5D_t921FA4A2FCA9B61D0147CED3FFB0AEE0593E7C83*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
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

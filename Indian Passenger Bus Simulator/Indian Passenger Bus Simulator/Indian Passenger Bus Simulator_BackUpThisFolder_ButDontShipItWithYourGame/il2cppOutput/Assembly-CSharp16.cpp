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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityStandardAssets.ImageEffects.SepiaTone
struct SepiaTone_t04D8F40AC913F9D3487E484CDF763B30758A257B;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// UnityStandardAssets.ImageEffects.SunShafts
struct SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityStandardAssets.ImageEffects.TiltShift
struct TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49;
// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124;
// UnityStandardAssets.ImageEffects.Twirl
struct Twirl_t228182A019AEF2D3B321EABCE3D3DD8F83E702A7;
// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityStandardAssets.ImageEffects.Vortex
struct Vortex_tB86B71C706F31FD5987C6B125411B29A1674ED54;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// AmplitudeNS.MiniJSON.Json/Parser
struct Parser_t5CE444F52863545C1D883D8E083F9F5C67124951;
// AmplitudeNS.MiniJSON.Json/Serializer
struct Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t5CE444F52863545C1D883D8E083F9F5C67124951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A45D17F0539963CCC2A73C7852303E4420C5D9;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E;
IL2CPP_EXTERN_C String_t* _stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F;
IL2CPP_EXTERN_C String_t* _stringLiteral322836504097FF5183FA9B195361CABCA3C9F347;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF9E690E5CE0ADC3936AAB09EF983C321F1052F;
IL2CPP_EXTERN_C String_t* _stringLiteral3D45EDE1CD4AD589B6CD45E1ED026A9C161DE69B;
IL2CPP_EXTERN_C String_t* _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F;
IL2CPP_EXTERN_C String_t* _stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA;
IL2CPP_EXTERN_C String_t* _stringLiteralA621DB6632C8DC8F2861D67FDB77D1DB44D2C0B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04;
IL2CPP_EXTERN_C String_t* _stringLiteralC17A0B7C5A6724EB8EBCAE232CF6B2E0974F0F64;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B21A27E1B513F7FA308B3AA95B27A5A9064A78;
IL2CPP_EXTERN_C String_t* _stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7;
IL2CPP_EXTERN_C String_t* _stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB;
IL2CPP_EXTERN_C String_t* _stringLiteralD1EC77B5584E15E3EF84D1B53BDA4765F04D8B0C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC595EDFCB3DB85E564F4079769C6E189C1810A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// AmplitudeNS.MiniJSON.Json
struct Json_t15B09338DFB7186D78759C787C6522BADA46CCF7  : public RuntimeObject
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

// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124  : public RuntimeObject
{
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

// AmplitudeNS.MiniJSON.Json/Parser
struct Parser_t5CE444F52863545C1D883D8E083F9F5C67124951  : public RuntimeObject
{
	// System.IO.StringReader AmplitudeNS.MiniJSON.Json/Parser::json
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* ___json_2;
};

// AmplitudeNS.MiniJSON.Json/Serializer
struct Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328  : public RuntimeObject
{
	// System.Text.StringBuilder AmplitudeNS.MiniJSON.Json/Serializer::builder
	StringBuilder_t* ___builder_0;
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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
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

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader_4;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_5;
};

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;
};

// UnityStandardAssets.ImageEffects.SepiaTone
struct SepiaTone_t04D8F40AC913F9D3487E484CDF763B30758A257B  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
};

// UnityStandardAssets.ImageEffects.SunShafts
struct SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution UnityStandardAssets.ImageEffects.SunShafts::resolution
	int32_t ___resolution_7;
	// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode UnityStandardAssets.ImageEffects.SunShafts::screenBlendMode
	int32_t ___screenBlendMode_8;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.SunShafts::sunTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___sunTransform_9;
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_10;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sunColor_11;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.SunShafts::sunThreshold
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sunThreshold_12;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_13;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_14;
	// System.Single UnityStandardAssets.ImageEffects.SunShafts::maxRadius
	float ___maxRadius_15;
	// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::useDepthTexture
	bool ___useDepthTexture_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::sunShaftsShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___sunShaftsShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::sunShaftsMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___sunShaftsMaterial_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.SunShafts::simpleClearShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___simpleClearShader_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.SunShafts::simpleClearMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___simpleClearMaterial_20;
};

// UnityStandardAssets.ImageEffects.TiltShift
struct TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode UnityStandardAssets.ImageEffects.TiltShift::mode
	int32_t ___mode_7;
	// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality UnityStandardAssets.ImageEffects.TiltShift::quality
	int32_t ___quality_8;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::blurArea
	float ___blurArea_9;
	// System.Single UnityStandardAssets.ImageEffects.TiltShift::maxBlurSize
	float ___maxBlurSize_10;
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift::downsample
	int32_t ___downsample_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.TiltShift::tiltShiftShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___tiltShiftShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.TiltShift::tiltShiftMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tiltShiftMaterial_13;
};

// UnityStandardAssets.ImageEffects.Tonemapping
struct Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_7;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_8;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___remapCurve_9;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___curveTex_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_12;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_13;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___tonemapper_15;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___tonemapMaterial_17;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt_18;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_19;
};

// UnityStandardAssets.ImageEffects.Twirl
struct Twirl_t228182A019AEF2D3B321EABCE3D3DD8F83E702A7  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::radius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Twirl::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Twirl::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_8;
};

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77  : public PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76
{
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_7;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_12;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_13;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___vignetteShader_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___separableBlurShader_16;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___chromAberrationShader_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_VignetteMaterial_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_SeparableBlurMaterial_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_ChromAberrationMaterial_20;
};

// UnityStandardAssets.ImageEffects.Vortex
struct Vortex_tB86B71C706F31FD5987C6B125411B29A1674ED54  : public ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF
{
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_6;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_7;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_8;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

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

// AmplitudeNS.MiniJSON.Json

// AmplitudeNS.MiniJSON.Json

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityStandardAssets.ImageEffects.Triangles
struct Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields
{
	// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::meshes
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___meshes_0;
	// System.Int32 UnityStandardAssets.ImageEffects.Triangles::currentTris
	int32_t ___currentTris_1;
};

// UnityStandardAssets.ImageEffects.Triangles

// System.ValueType

// System.ValueType

// AmplitudeNS.MiniJSON.Json/Parser

// AmplitudeNS.MiniJSON.Json/Parser

// AmplitudeNS.MiniJSON.Json/Serializer

// AmplitudeNS.MiniJSON.Json/Serializer

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

// UnityEngine.Color

// UnityEngine.Color

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

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

// UnityEngine.Keyframe

// UnityEngine.Keyframe

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::09D4968E827C4D6ACD339D6DE6BF541A430B92326D6CFA33E2E722BBC50B8C6E
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___09D4968E827C4D6ACD339D6DE6BF541A430B92326D6CFA33E2E722BBC50B8C6E_0;
};

// <PrivateImplementationDetails>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.IO.StringReader

// System.IO.StringReader

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

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

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityStandardAssets.ImageEffects.ImageEffectBase

// UnityStandardAssets.ImageEffects.ImageEffectBase

// UnityStandardAssets.ImageEffects.PostEffectsBase

// UnityStandardAssets.ImageEffects.PostEffectsBase

// UnityStandardAssets.ImageEffects.SepiaTone

// UnityStandardAssets.ImageEffects.SepiaTone

// UnityStandardAssets.ImageEffects.SunShafts

// UnityStandardAssets.ImageEffects.SunShafts

// UnityStandardAssets.ImageEffects.TiltShift

// UnityStandardAssets.ImageEffects.TiltShift

// UnityStandardAssets.ImageEffects.Tonemapping

// UnityStandardAssets.ImageEffects.Tonemapping

// UnityStandardAssets.ImageEffects.Twirl

// UnityStandardAssets.ImageEffects.Twirl

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration

// UnityStandardAssets.ImageEffects.Vortex

// UnityStandardAssets.ImageEffects.Vortex
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* m_Items[1];

	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Mesh[]
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689  : public RuntimeArray
{
	ALIGN_FIELD (8) Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* m_Items[1];

	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024 (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_mat, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ImageEffectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B (ImageEffectBase_tFB8DA27E040F9E42F9A6060C80BF146D08A20FAF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___0_needDepth, const RuntimeMethod* method) ;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_s, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_m2Create, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3 (int32_t ___0_width, int32_t ___1_height, int32_t ___2_depthBuffer, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_allowHDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11 (int32_t ___0_width, int32_t ___1_height, int32_t ___2_depthBuffer, int32_t ___3_format, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_ClearWithSkybox_mA5C6A1899483E0EF88601E543CF0EDB84F186731 (bool ___0_clearDepth, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_mat, int32_t ___3_pass, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_temp, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_m501B2ABEF35941F9B67F4DE18B28051D2CEBBA53 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_dest, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664 (PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76* __this, bool ___0_needDepth, bool ___1_needHdr, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, bool ___4_linear, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_time, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_keys, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201 (int32_t ___0_format, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_depth, int32_t ___3_format, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___0_f, float ___1_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangles_HasMeshes_m06D1A010EFB4AFD22701D79DEA321C5BDCE8C0EE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Triangles_GetMesh_m2794A44B43D1572051664372102732E88DF16B05 (int32_t ___0_triCount, int32_t ___1_triOffset, int32_t ___2_totalWidth, int32_t ___3_totalHeight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_RenderDistortion_mB9B8E1ABEC327C7EE2387A51108C4F6B972561BC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_material, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___2_destination, float ___3_angle, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___5_radius, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Object AmplitudeNS.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m0897F575290D51F285E80A70DDB71A6A8347632E (String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.String AmplitudeNS.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mF754FA742B06F31D9855F2522EE45FEE35BBDAD8 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void AmplitudeNS.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mE517FCCE14F0F261A604154855B2E685AEC990D6 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.Object AmplitudeNS.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m69ADFF7A3F90A560C3BBF3D17B196216BBE01611 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// AmplitudeNS.MiniJSON.Json/Parser/TOKEN AmplitudeNS.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mADD25509957CAF9025E0928F68E86271637203A3 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.String AmplitudeNS.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m8C19E88DDBEB2385C2E6C77D195657DA8ACA348A (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Object AmplitudeNS.MiniJSON.Json/Parser::ParseByToken(AmplitudeNS.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m38CF2D3879151135AD1363B696D69F6BAE349AD9 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Object AmplitudeNS.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mBF13A88AE39CA73AF9D56CAE6E4D32830D6F3236 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AmplitudeNS.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mE2CDC67778FC5E8204F784BA9BD08A53A80B2574 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> AmplitudeNS.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m8D44F3FD8873E3B704594AB7D3A60BB44C7BBA23 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char AmplitudeNS.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mAADE98129462252CD3EE9FD09976F3CCA541E004 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4 (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
// System.String AmplitudeNS.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_mFBD96068AF0333AD478C0F61F66EFFE77286E6A6 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Char AmplitudeNS.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mCB4B296524971AEAAE42C8F25B008196E5F41E8E (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void AmplitudeNS.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mE52A290A5EC4A836EBE0401812A550BED86EA908 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m40CBCABFB74A8C1E82DF0F678EDC65806A765A63 (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, const RuntimeMethod* method) ;
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m4FBEC42A2539CE9F469367033AAFEFEAB2FA7551 (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m90926F2D28A47048AFE41C71647E1B38CB24864A (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m9743D1022222CEBEDAEBEAF42AFDCF3619E63991 (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) ;
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mF46ED6A4B7CF7BDBC5971C2E5302C77B37EE024D (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m512C9EBB20ED31EBC8692C238E9292C2FE996BFF (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052 (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35 (int32_t ___0_value, int32_t ___1_toBase, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___0_totalWidth, Il2CppChar ___1_paddingChar, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054 (double ___0_a, double ___1_newBase, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.ImageEffects.SepiaTone::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SepiaTone_OnRenderImage_m31BF87C02794E9A05C1677F4F520E535761EB5C1 (SepiaTone_t04D8F40AC913F9D3487E484CDF763B30758A257B* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit (source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SepiaTone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SepiaTone__ctor_m34F40550EC1F27CA8A3DB7DC35AFAF4813EBB157 (SepiaTone_t04D8F40AC913F9D3487E484CDF763B30758A257B* __this, const RuntimeMethod* method) 
{
	{
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.SunShafts::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SunShafts_CheckResources_m9C75528877A6260288B58129276616124B900555 (SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (useDepthTexture);
		bool L_0 = __this->___useDepthTexture_16;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, L_0, NULL);
		// sunShaftsMaterial = CheckShaderAndCreateMaterial (sunShaftsShader, sunShaftsMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___sunShaftsShader_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___sunShaftsMaterial_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_2, L_3, NULL);
		__this->___sunShaftsMaterial_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sunShaftsMaterial_18), (void*)L_4);
		// simpleClearMaterial = CheckShaderAndCreateMaterial (simpleClearShader, simpleClearMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5 = __this->___simpleClearShader_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___simpleClearMaterial_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_5, L_6, NULL);
		__this->___simpleClearMaterial_20 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___simpleClearMaterial_20), (void*)L_7);
		// if (!isSupported)
		bool L_8 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_004b:
	{
		// return isSupported;
		bool L_9 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_9;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SunShafts::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShafts_OnRenderImage_m09CB5311D8F7CC6064215683AFA18D8E2DA94BF3 (SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t G_B15_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B25_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B25_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B25_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B24_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B24_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B24_2 = NULL;
	int32_t G_B26_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B26_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B26_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B26_3 = NULL;
	{
		// if (CheckResources()==false) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (useDepthTexture)
		bool L_3 = __this->___useDepthTexture_16;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_5, NULL);
		NullCheck(L_5);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_5, ((int32_t)((int32_t)L_6|1)), NULL);
	}

IL_002b:
	{
		// int divider = 4;
		V_0 = 4;
		// if (resolution == SunShaftsResolution.Normal)
		int32_t L_7 = __this->___resolution_7;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		// divider = 2;
		V_0 = 2;
		goto IL_0045;
	}

IL_003a:
	{
		// else if (resolution == SunShaftsResolution.High)
		int32_t L_8 = __this->___resolution_7;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0045;
		}
	}
	{
		// divider = 1;
		V_0 = 1;
	}

IL_0045:
	{
		// Vector3 v = Vector3.one * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (0.5f), NULL);
		V_1 = L_10;
		// if (sunTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___sunTransform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// v = GetComponent<Camera>().WorldToViewportPoint (sunTransform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___sunTransform_9;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_13, L_15, NULL);
		V_1 = L_16;
		goto IL_0091;
	}

IL_007b:
	{
		// v = new Vector3(0.5f, 0.5f, 0.0f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), (0.5f), (0.5f), (0.0f), NULL);
	}

IL_0091:
	{
		// int rtW = source.width / divider;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		int32_t L_19 = V_0;
		V_2 = ((int32_t)(L_18/L_19));
		// int rtH = source.height / divider;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___0_source;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		int32_t L_22 = V_0;
		V_3 = ((int32_t)(L_21/L_22));
		// RenderTexture lrDepthBuffer = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25;
		L_25 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_23, L_24, 0, NULL);
		V_5 = L_25;
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (1.0f, 1.0f, 0.0f, 0.0f) * sunShaftBlurRadius );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___sunShaftsMaterial_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_27), (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_28 = __this->___sunShaftBlurRadius_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29;
		L_29 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_27, L_28, NULL);
		NullCheck(L_26);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_26, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_29, NULL);
		// sunShaftsMaterial.SetVector ("_SunPosition", new Vector4 (v.x, v.y, v.z, maxRadius));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___sunShaftsMaterial_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		float L_32 = L_31.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
		float L_34 = L_33.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = L_35.___z_4;
		float L_37 = __this->___maxRadius_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_38), L_32, L_34, L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_30, _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04, L_38, NULL);
		// sunShaftsMaterial.SetVector ("_SunThreshold", sunThreshold);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___sunShaftsMaterial_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = __this->___sunThreshold_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41;
		L_41 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_40, NULL);
		NullCheck(L_39);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_39, _stringLiteralA467D3C6168371D0FACC829AA2255312BFD50ABA, L_41, NULL);
		// if (!useDepthTexture) {
		bool L_42 = __this->___useDepthTexture_16;
		if (L_42)
		{
			goto IL_0198;
		}
	}
	{
		// var format= GetComponent<Camera>().allowHDR ? RenderTextureFormat.DefaultHDR: RenderTextureFormat.Default;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43;
		L_43 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_43);
		bool L_44;
		L_44 = Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67(L_43, NULL);
		if (L_44)
		{
			goto IL_0141;
		}
	}
	{
		G_B15_0 = 7;
		goto IL_0143;
	}

IL_0141:
	{
		G_B15_0 = ((int32_t)9);
	}

IL_0143:
	{
		V_7 = G_B15_0;
		// RenderTexture tmpBuffer = RenderTexture.GetTemporary (source.width, source.height, 0, format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = ___0_source;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___0_source;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_47);
		int32_t L_49 = V_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50;
		L_50 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_46, L_48, 0, L_49, NULL);
		V_8 = L_50;
		// RenderTexture.active = tmpBuffer;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_8;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_51, NULL);
		// GL.ClearWithSkybox (false, GetComponent<Camera>());
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_52;
		L_52 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		GL_ClearWithSkybox_mA5C6A1899483E0EF88601E543CF0EDB84F186731((bool)0, L_52, NULL);
		// sunShaftsMaterial.SetTexture ("_Skybox", tmpBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = __this->___sunShaftsMaterial_18;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_54 = V_8;
		NullCheck(L_53);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_53, _stringLiteral0CC36A0ACE18A1CFE0ECAF14C22D5B28FAF563BE, L_54, NULL);
		// Graphics.Blit (source, lrDepthBuffer, sunShaftsMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_56 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = __this->___sunShaftsMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_55, L_56, L_57, 3, NULL);
		// RenderTexture.ReleaseTemporary (tmpBuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_58 = V_8;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_58, NULL);
		goto IL_01a7;
	}

IL_0198:
	{
		// Graphics.Blit (source, lrDepthBuffer, sunShaftsMaterial, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = __this->___sunShaftsMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_59, L_60, L_61, 2, NULL);
	}

IL_01a7:
	{
		// DrawBorder (lrDepthBuffer, simpleClearMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_63 = __this->___simpleClearMaterial_20;
		PostEffectsBase_DrawBorder_m501B2ABEF35941F9B67F4DE18B28051D2CEBBA53(__this, L_62, L_63, NULL);
		// radialBlurIterations = Mathf.Clamp (radialBlurIterations, 1, 4);
		int32_t L_64 = __this->___radialBlurIterations_10;
		int32_t L_65;
		L_65 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_64, 1, 4, NULL);
		__this->___radialBlurIterations_10 = L_65;
		// float ofs = sunShaftBlurRadius * (1.0f / 768.0f);
		float L_66 = __this->___sunShaftBlurRadius_13;
		V_6 = ((float)il2cpp_codegen_multiply(L_66, (0.00130208337f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = __this->___sunShaftsMaterial_18;
		float L_68 = V_6;
		float L_69 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_70), L_68, L_69, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_67, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_70, NULL);
		// sunShaftsMaterial.SetVector ("_SunPosition", new Vector4 (v.x, v.y, v.z, maxRadius));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71 = __this->___sunShaftsMaterial_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_1;
		float L_73 = L_72.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_1;
		float L_75 = L_74.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_1;
		float L_77 = L_76.___z_4;
		float L_78 = __this->___maxRadius_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_79), L_73, L_75, L_77, L_78, /*hidden argument*/NULL);
		NullCheck(L_71);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_71, _stringLiteralB9695E91A6E8DF407F4DDDDAD91C688E54E31D04, L_79, NULL);
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		V_9 = 0;
		goto IL_0304;
	}

IL_022e:
	{
		// lrColorB = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_80 = V_2;
		int32_t L_81 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82;
		L_82 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_80, L_81, 0, NULL);
		V_4 = L_82;
		// Graphics.Blit (lrDepthBuffer, lrColorB, sunShaftsMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___sunShaftsMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_83, L_84, L_85, 1, NULL);
		// RenderTexture.ReleaseTemporary (lrDepthBuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_86, NULL);
		// ofs = sunShaftBlurRadius * (((it2 * 2.0f + 1.0f) * 6.0f)) / 768.0f;
		float L_87 = __this->___sunShaftBlurRadius_13;
		int32_t L_88 = V_9;
		V_6 = ((float)(((float)il2cpp_codegen_multiply(L_87, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_88), (2.0f))), (1.0f))), (6.0f)))))/(768.0f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f) );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89 = __this->___sunShaftsMaterial_18;
		float L_90 = V_6;
		float L_91 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_92), L_90, L_91, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_89);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_89, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_92, NULL);
		// lrDepthBuffer = RenderTexture.GetTemporary (rtW, rtH, 0);
		int32_t L_93 = V_2;
		int32_t L_94 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_95;
		L_95 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_93, L_94, 0, NULL);
		V_5 = L_95;
		// Graphics.Blit (lrColorB, lrDepthBuffer, sunShaftsMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_96 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_98 = __this->___sunShaftsMaterial_18;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_96, L_97, L_98, 1, NULL);
		// RenderTexture.ReleaseTemporary (lrColorB);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_99, NULL);
		// ofs = sunShaftBlurRadius * (((it2 * 2.0f + 2.0f) * 6.0f)) / 768.0f;
		float L_100 = __this->___sunShaftBlurRadius_13;
		int32_t L_101 = V_9;
		V_6 = ((float)(((float)il2cpp_codegen_multiply(L_100, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_101), (2.0f))), (2.0f))), (6.0f)))))/(768.0f)));
		// sunShaftsMaterial.SetVector ("_BlurRadius4", new Vector4 (ofs, ofs, 0.0f, 0.0f) );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_102 = __this->___sunShaftsMaterial_18;
		float L_103 = V_6;
		float L_104 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_105), L_103, L_104, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_102);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_102, _stringLiteralCC6DC72C8AD9ACA85E92D38AA3DC649C6AC591BB, L_105, NULL);
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		int32_t L_106 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_0304:
	{
		// for (int it2 = 0; it2 < radialBlurIterations; it2++ ) {
		int32_t L_107 = V_9;
		int32_t L_108 = __this->___radialBlurIterations_10;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_022e;
		}
	}
	{
		// if (v.z >= 0.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_1;
		float L_110 = L_109.___z_4;
		if ((!(((float)L_110) >= ((float)(0.0f)))))
		{
			goto IL_036c;
		}
	}
	{
		// sunShaftsMaterial.SetVector ("_SunColor", new Vector4 (sunColor.r, sunColor.g, sunColor.b, sunColor.a) * sunShaftIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_111 = __this->___sunShaftsMaterial_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_112 = (&__this->___sunColor_11);
		float L_113 = L_112->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_114 = (&__this->___sunColor_11);
		float L_115 = L_114->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_116 = (&__this->___sunColor_11);
		float L_117 = L_116->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_118 = (&__this->___sunColor_11);
		float L_119 = L_118->___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_120;
		memset((&L_120), 0, sizeof(L_120));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_120), L_113, L_115, L_117, L_119, /*hidden argument*/NULL);
		float L_121 = __this->___sunShaftIntensity_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_122;
		L_122 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_120, L_121, NULL);
		NullCheck(L_111);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_111, _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312, L_122, NULL);
		goto IL_0381;
	}

IL_036c:
	{
		// sunShaftsMaterial.SetVector ("_SunColor", Vector4.zero); // no backprojection !
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_123 = __this->___sunShaftsMaterial_18;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_124;
		L_124 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		NullCheck(L_123);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_123, _stringLiteral59E9A90ACEB12BE1578CBAE545691B1979987312, L_124, NULL);
	}

IL_0381:
	{
		// sunShaftsMaterial.SetTexture ("_ColorBuffer", lrDepthBuffer);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_125 = __this->___sunShaftsMaterial_18;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_126 = V_5;
		NullCheck(L_125);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_125, _stringLiteral3F42ED00D84DBC7A3B4658065DEA62873778201F, L_126, NULL);
		// Graphics.Blit (source, destination, sunShaftsMaterial, (screenBlendMode == ShaftsScreenBlendMode.Screen) ? 0 : 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_127 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_128 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = __this->___sunShaftsMaterial_18;
		int32_t L_130 = __this->___screenBlendMode_8;
		G_B24_0 = L_129;
		G_B24_1 = L_128;
		G_B24_2 = L_127;
		if (!L_130)
		{
			G_B25_0 = L_129;
			G_B25_1 = L_128;
			G_B25_2 = L_127;
			goto IL_03a6;
		}
	}
	{
		G_B26_0 = 4;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		goto IL_03a7;
	}

IL_03a6:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
	}

IL_03a7:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B26_3, G_B26_2, G_B26_1, G_B26_0, NULL);
		// RenderTexture.ReleaseTemporary (lrDepthBuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_131, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.SunShafts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SunShafts__ctor_m17D8FCF6A1EEDA1A07F46BA3FD3D2579203C1C67 (SunShafts_t4337176135BFF0DA68E3BA760EA505E76CA73F2D* __this, const RuntimeMethod* method) 
{
	{
		// public SunShaftsResolution resolution = SunShaftsResolution.Normal;
		__this->___resolution_7 = 1;
		// public int radialBlurIterations = 2;
		__this->___radialBlurIterations_10 = 2;
		// public Color sunColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___sunColor_11 = L_0;
		// public Color sunThreshold = new Color(0.87f,0.74f,0.65f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.870000005f), (0.74000001f), (0.649999976f), /*hidden argument*/NULL);
		__this->___sunThreshold_12 = L_1;
		// public float sunShaftBlurRadius = 2.5f;
		__this->___sunShaftBlurRadius_13 = (2.5f);
		// public float sunShaftIntensity = 1.15f;
		__this->___sunShaftIntensity_14 = (1.14999998f);
		// public float maxRadius = 0.75f;
		__this->___maxRadius_15 = (0.75f);
		// public bool  useDepthTexture = true;
		__this->___useDepthTexture_16 = (bool)1;
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.TiltShift::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TiltShift_CheckResources_mFF9ED6FAA29732CD2F698BCF10C44D6454024026 (TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)1, NULL);
		// tiltShiftMaterial = CheckShaderAndCreateMaterial (tiltShiftShader, tiltShiftMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___tiltShiftShader_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tiltShiftMaterial_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___tiltShiftMaterial_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tiltShiftMaterial_13), (void*)L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.TiltShift::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltShift_OnRenderImage_m23A47A2B2AF059156929865A0FE5FA39EC7D8BD5 (TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A45D17F0539963CCC2A73C7852303E4420C5D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF9E690E5CE0ADC3936AAB09EF983C321F1052F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B21A27E1B513F7FA308B3AA95B27A5A9064A78);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	String_t* G_B5_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B9_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B9_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B8_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B8_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B10_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B10_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B10_3 = NULL;
	{
		// if (CheckResources() == false) {
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// tiltShiftMaterial.SetFloat("_BlurSize", maxBlurSize < 0.0f ? 0.0f : maxBlurSize);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___tiltShiftMaterial_13;
		float L_4 = __this->___maxBlurSize_10;
		G_B3_0 = _stringLiteral3BF9E690E5CE0ADC3936AAB09EF983C321F1052F;
		G_B3_1 = L_3;
		if ((((float)L_4) < ((float)(0.0f))))
		{
			G_B4_0 = _stringLiteral3BF9E690E5CE0ADC3936AAB09EF983C321F1052F;
			G_B4_1 = L_3;
			goto IL_0030;
		}
	}
	{
		float L_5 = __this->___maxBlurSize_10;
		G_B5_0 = L_5;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0035;
	}

IL_0030:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0035:
	{
		NullCheck(G_B5_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B5_2, G_B5_1, G_B5_0, NULL);
		// tiltShiftMaterial.SetFloat("_BlurArea", blurArea);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___tiltShiftMaterial_13;
		float L_7 = __this->___blurArea_9;
		NullCheck(L_6);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_6, _stringLiteralC2B21A27E1B513F7FA308B3AA95B27A5A9064A78, L_7, NULL);
		// source.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___0_source;
		NullCheck(L_8);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_8, 1, NULL);
		// RenderTexture rt = destination;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = ___1_destination;
		V_0 = L_9;
		// if (downsample > 0f) {
		int32_t L_10 = __this->___downsample_11;
		if ((!(((float)((float)L_10)) > ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// rt = RenderTexture.GetTemporary (source.width>>downsample, source.height>>downsample, 0, source.format);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___0_source;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		int32_t L_13 = __this->___downsample_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = ___0_source;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		int32_t L_16 = __this->___downsample_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_17, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19;
		L_19 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_12>>((int32_t)(L_13&((int32_t)31))))), ((int32_t)(L_15>>((int32_t)(L_16&((int32_t)31))))), 0, L_18, NULL);
		V_0 = L_19;
		// rt.filterMode = FilterMode.Bilinear;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = V_0;
		NullCheck(L_20);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_20, 1, NULL);
	}

IL_009b:
	{
		// int basePassNr = (int) quality; basePassNr *= 2;
		int32_t L_21 = __this->___quality_8;
		V_1 = L_21;
		// int basePassNr = (int) quality; basePassNr *= 2;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_22, 2));
		// Graphics.Blit (source, rt, tiltShiftMaterial, mode == TiltShiftMode.TiltShiftMode ? basePassNr : basePassNr + 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___tiltShiftMaterial_13;
		int32_t L_26 = __this->___mode_7;
		G_B8_0 = L_25;
		G_B8_1 = L_24;
		G_B8_2 = L_23;
		if (!L_26)
		{
			G_B9_0 = L_25;
			G_B9_1 = L_24;
			G_B9_2 = L_23;
			goto IL_00bb;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B10_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_00bc;
	}

IL_00bb:
	{
		int32_t L_28 = V_1;
		G_B10_0 = L_28;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_00bc:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B10_3, G_B10_2, G_B10_1, G_B10_0, NULL);
		// if (downsample > 0) {
		int32_t L_29 = __this->___downsample_11;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00e9;
		}
	}
	{
		// tiltShiftMaterial.SetTexture ("_Blurred", rt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->___tiltShiftMaterial_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = V_0;
		NullCheck(L_30);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_30, _stringLiteral02A45D17F0539963CCC2A73C7852303E4420C5D9, L_31, NULL);
		// Graphics.Blit (source, destination, tiltShiftMaterial, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___tiltShiftMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_32, L_33, L_34, 6, NULL);
	}

IL_00e9:
	{
		// if (rt != destination)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, L_36, NULL);
		if (!L_37)
		{
			goto IL_00f8;
		}
	}
	{
		// RenderTexture.ReleaseTemporary (rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_38, NULL);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.TiltShift::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltShift__ctor_m309B85AE3B13B1CE309EE2E6D36571E4CD2EBB0B (TiltShift_tDAA175B084787CACC6DC496C581EAD8ECEBD6B49* __this, const RuntimeMethod* method) 
{
	{
		// public TiltShiftQuality quality = TiltShiftQuality.Normal;
		__this->___quality_8 = 1;
		// public float blurArea = 1.0f;
		__this->___blurArea_9 = (1.0f);
		// public float maxBlurSize = 5.0f;
		__this->___maxBlurSize_10 = (5.0f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CheckResources_mC1C0CAB02BD19684E08232CD57248E018FD07C8E (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckSupport(false, true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_mA7398DAA19FD5AC947119F26E3509974EAFC1664(__this, (bool)0, (bool)1, NULL);
		// tonemapMaterial = CheckShaderAndCreateMaterial(tonemapper, tonemapMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___tonemapper_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___tonemapMaterial_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___tonemapMaterial_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tonemapMaterial_17), (void*)L_3);
		// if (!curveTex && type == TonemapperType.UserCurve)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_6 = __this->___type_7;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		// curveTex = new Texture2D(256, 1, TextureFormat.ARGB32, false, true);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_7, ((int32_t)256), 1, 5, (bool)0, (bool)1, NULL);
		__this->___curveTex_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveTex_10), (void*)L_7);
		// curveTex.filterMode = FilterMode.Bilinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___curveTex_10;
		NullCheck(L_8);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_8, 1, NULL);
		// curveTex.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = __this->___curveTex_10;
		NullCheck(L_9);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_9, 1, NULL);
		// curveTex.hideFlags = HideFlags.DontSave;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___curveTex_10;
		NullCheck(L_10);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_10, ((int32_t)52), NULL);
	}

IL_0070:
	{
		// if (!isSupported)
		bool L_11 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_11)
		{
			goto IL_007e;
		}
	}
	{
		// ReportAutoDisable();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_007e:
	{
		// return isSupported;
		bool L_12 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_12;
	}
}
// System.Single UnityStandardAssets.ImageEffects.Tonemapping::UpdateCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float range = 1.0f;
		V_0 = (1.0f);
		// if (remapCurve.keys.Length < 1)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___remapCurve_9;
		NullCheck(L_0);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1;
		L_1 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_0, NULL);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) >= ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		// remapCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(2, 1));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_6), (2.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___remapCurve_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remapCurve_9), (void*)L_7);
	}

IL_0053:
	{
		// if (remapCurve != null)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___remapCurve_9;
		if (!L_8)
		{
			goto IL_00e6;
		}
	}
	{
		// if (remapCurve.length > 0)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_9 = __this->___remapCurve_9;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		// range = remapCurve[remapCurve.length - 1].time;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_11 = __this->___remapCurve_9;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_12 = __this->___remapCurve_9;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_12, NULL);
		NullCheck(L_11);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_14;
		L_14 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_11, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		V_1 = L_14;
		float L_15;
		L_15 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661((&V_1), NULL);
		V_0 = L_15;
	}

IL_008d:
	{
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		V_2 = (0.0f);
		goto IL_00d3;
	}

IL_0095:
	{
		// float c = remapCurve.Evaluate(i*1.0f*range);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = __this->___remapCurve_9;
		float L_17 = V_2;
		float L_18 = V_0;
		NullCheck(L_16);
		float L_19;
		L_19 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_16, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, (1.0f))), L_18)), NULL);
		V_3 = L_19;
		// curveTex.SetPixel((int) Mathf.Floor(i*255.0f), 0, new Color(c, c, c));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = __this->___curveTex_10;
		float L_21 = V_2;
		float L_22;
		L_22 = floorf(((float)il2cpp_codegen_multiply(L_21, (255.0f))));
		float L_23 = V_3;
		float L_24 = V_3;
		float L_25 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_20, il2cpp_codegen_cast_double_to_int<int32_t>(L_22), 0, L_26, NULL);
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		float L_27 = V_2;
		V_2 = ((float)il2cpp_codegen_add(L_27, (0.00392156886f)));
	}

IL_00d3:
	{
		// for (float i = 0.0f; i <= 1.0f; i += 1.0f/255.0f)
		float L_28 = V_2;
		if ((((float)L_28) <= ((float)(1.0f))))
		{
			goto IL_0095;
		}
	}
	{
		// curveTex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = __this->___curveTex_10;
		NullCheck(L_29);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_29, NULL);
	}

IL_00e6:
	{
		// return 1.0f/range;
		float L_30 = V_0;
		return ((float)((1.0f)/L_30));
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping_OnDisable_m4E9ADFC3365B18E2A3ACF5F5B87BBE50FF08DF14 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rt)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// DestroyImmediate(rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// rt = null;
		__this->___rt_18 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rt_18), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_001f:
	{
		// if (tonemapMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// DestroyImmediate(tonemapMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
		// tonemapMaterial = null;
		__this->___tonemapMaterial_17 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tonemapMaterial_17), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
	}

IL_003e:
	{
		// if (curveTex)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// DestroyImmediate(curveTex);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___curveTex_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
		// curveTex = null;
		__this->___curveTex_10 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curveTex_10), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::CreateInternalRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B4_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B5_1 = NULL;
	{
		// if (rt)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___rt_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// rtFormat = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.RGHalf) ? RenderTextureFormat.RGHalf : RenderTextureFormat.ARGBHalf;
		bool L_2;
		L_2 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(((int32_t)13), NULL);
		G_B3_0 = __this;
		if (L_2)
		{
			G_B4_0 = __this;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		goto IL_001e;
	}

IL_001c:
	{
		G_B5_0 = ((int32_t)13);
		G_B5_1 = G_B4_0;
	}

IL_001e:
	{
		NullCheck(G_B5_1);
		G_B5_1->___rtFormat_19 = G_B5_0;
		// rt = new RenderTexture(1, 1, 0, rtFormat);
		int32_t L_3 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_4, 1, 1, 0, L_3, NULL);
		__this->___rt_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rt_18), (void*)L_4);
		// rt.hideFlags = HideFlags.DontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___rt_18;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)52), NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping_OnRenderImage_m3DDE8CADC9E8BEB73403CF71C46CC83F1E32C960 (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B4_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B5_1 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B29_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B28_0 = NULL;
	float G_B30_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B30_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B32_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B32_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B32_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B31_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B31_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B31_2 = NULL;
	int32_t G_B33_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B33_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B33_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B33_3 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B35_0 = NULL;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B34_0 = NULL;
	float G_B36_0 = 0.0f;
	Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* G_B36_1 = NULL;
	{
		// if (CheckResources() == false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit(source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// exposureAdjustment = exposureAdjustment < 0.001f ? 0.001f : exposureAdjustment;
		float L_3 = __this->___exposureAdjustment_11;
		G_B3_0 = __this;
		if ((((float)L_3) < ((float)(0.00100000005f))))
		{
			G_B4_0 = __this;
			goto IL_0026;
		}
	}
	{
		float L_4 = __this->___exposureAdjustment_11;
		G_B5_0 = L_4;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B5_0 = (0.00100000005f);
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		NullCheck(G_B5_1);
		G_B5_1->___exposureAdjustment_11 = G_B5_0;
		// if (type == TonemapperType.UserCurve)
		int32_t L_5 = __this->___type_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// float rangeScale = UpdateCurve();
		float L_6;
		L_6 = Tonemapping_UpdateCurve_mADC42B4344BD7C6BF315CA7419DCE55A51B13156(__this, NULL);
		V_6 = L_6;
		// tonemapMaterial.SetFloat("_RangeScale", rangeScale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___tonemapMaterial_17;
		float L_8 = V_6;
		NullCheck(L_7);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_7, _stringLiteralEE666F21E0039F2BF222FB2B168055BD20FD930D, L_8, NULL);
		// tonemapMaterial.SetTexture("_Curve", curveTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = __this->___tonemapMaterial_17;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___curveTex_10;
		NullCheck(L_9);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_9, _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F, L_10, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_11, L_12, L_13, 4, NULL);
		// return;
		return;
	}

IL_0078:
	{
		// if (type == TonemapperType.SimpleReinhard)
		int32_t L_14 = __this->___type_7;
		if (L_14)
		{
			goto IL_00a5;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___tonemapMaterial_17;
		float L_16 = __this->___exposureAdjustment_11;
		NullCheck(L_15);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_16, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_17, L_18, L_19, 6, NULL);
		// return;
		return;
	}

IL_00a5:
	{
		// if (type == TonemapperType.Hable)
		int32_t L_20 = __this->___type_7;
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00d3;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___tonemapMaterial_17;
		float L_22 = __this->___exposureAdjustment_11;
		NullCheck(L_21);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_21, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_22, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_23, L_24, L_25, 5, NULL);
		// return;
		return;
	}

IL_00d3:
	{
		// if (type == TonemapperType.Photographic)
		int32_t L_26 = __this->___type_7;
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_0101;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___tonemapMaterial_17;
		float L_28 = __this->___exposureAdjustment_11;
		NullCheck(L_27);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_27, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, L_28, NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 8);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_29, L_30, L_31, 8, NULL);
		// return;
		return;
	}

IL_0101:
	{
		// if (type == TonemapperType.OptimizedHejiDawson)
		int32_t L_32 = __this->___type_7;
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_0135;
		}
	}
	{
		// tonemapMaterial.SetFloat("_ExposureAdjustment", 0.5f*exposureAdjustment);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___tonemapMaterial_17;
		float L_34 = __this->___exposureAdjustment_11;
		NullCheck(L_33);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_33, _stringLiteral6138D7298AF1D6DEEA54D5934095E08EEEBB8CE7, ((float)il2cpp_codegen_multiply((0.5f), L_34)), NULL);
		// Graphics.Blit(source, destination, tonemapMaterial, 7);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_35, L_36, L_37, 7, NULL);
		// return;
		return;
	}

IL_0135:
	{
		// bool freshlyBrewedInternalRt = CreateInternalRenderTexture(); // this retrieves rtFormat, so should happen before rt allocations
		bool L_38;
		L_38 = Tonemapping_CreateInternalRenderTexture_mEA7D2798E23F5144C84D708B3CD71A3093B36E34(__this, NULL);
		V_0 = L_38;
		// RenderTexture rtSquared = RenderTexture.GetTemporary((int) adaptiveTextureSize, (int) adaptiveTextureSize, 0, rtFormat);
		int32_t L_39 = __this->___adaptiveTextureSize_8;
		int32_t L_40 = __this->___adaptiveTextureSize_8;
		int32_t L_41 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42;
		L_42 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_39, L_40, 0, L_41, NULL);
		V_1 = L_42;
		// Graphics.Blit(source, rtSquared);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_43, L_44, NULL);
		// int downsample = (int) Mathf.Log(rtSquared.width*1.0f, 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_45);
		float L_47;
		L_47 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)il2cpp_codegen_multiply(((float)L_46), (1.0f))), (2.0f), NULL);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_47);
		// int div = 2;
		V_3 = 2;
		// var rts = new RenderTexture[downsample];
		int32_t L_48 = V_2;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_49 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)L_48);
		V_4 = L_49;
		// for (int i = 0; i < downsample; i++)
		V_7 = 0;
		goto IL_01af;
	}

IL_0184:
	{
		// rts[i] = RenderTexture.GetTemporary(rtSquared.width/div, rtSquared.width/div, 0, rtFormat);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_50 = V_4;
		int32_t L_51 = V_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_52);
		int32_t L_54 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		int32_t L_57 = V_3;
		int32_t L_58 = __this->___rtFormat_19;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59;
		L_59 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_53/L_54)), ((int32_t)(L_56/L_57)), 0, L_58, NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_59);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_59);
		// div *= 2;
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_60, 2));
		// for (int i = 0; i < downsample; i++)
		int32_t L_61 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_01af:
	{
		// for (int i = 0; i < downsample; i++)
		int32_t L_62 = V_7;
		int32_t L_63 = V_2;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_0184;
		}
	}
	{
		// var lumRt = rts[downsample - 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_64 = V_4;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_5 = L_67;
		// Graphics.Blit(rtSquared, rts[0], tonemapMaterial, 1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68 = V_1;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_69 = V_4;
		NullCheck(L_69);
		int32_t L_70 = 0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_68, L_71, L_72, 1, NULL);
		// if (type == TonemapperType.AdaptiveReinhardAutoWhite)
		int32_t L_73 = __this->___type_7;
		if ((!(((uint32_t)L_73) == ((uint32_t)6))))
		{
			goto IL_020c;
		}
	}
	{
		// for (int i = 0; i < downsample - 1; i++)
		V_8 = 0;
		goto IL_0203;
	}

IL_01db:
	{
		// Graphics.Blit(rts[i], rts[i + 1], tonemapMaterial, 9);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_74 = V_4;
		int32_t L_75 = V_8;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_78 = V_4;
		int32_t L_79 = V_8;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_77, L_81, L_82, ((int32_t)9), NULL);
		// lumRt = rts[i + 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_83 = V_4;
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_5 = L_86;
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_87 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0203:
	{
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_88 = V_8;
		int32_t L_89 = V_2;
		if ((((int32_t)L_88) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_89, 1)))))
		{
			goto IL_01db;
		}
	}
	{
		goto IL_0241;
	}

IL_020c:
	{
		// else if (type == TonemapperType.AdaptiveReinhard)
		int32_t L_90 = __this->___type_7;
		if ((!(((uint32_t)L_90) == ((uint32_t)5))))
		{
			goto IL_0241;
		}
	}
	{
		// for (int i = 0; i < downsample - 1; i++)
		V_9 = 0;
		goto IL_023a;
	}

IL_021a:
	{
		// Graphics.Blit(rts[i], rts[i + 1]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_91 = V_4;
		int32_t L_92 = V_9;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_95 = V_4;
		int32_t L_96 = V_9;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_94, L_98, NULL);
		// lumRt = rts[i + 1];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_99 = V_4;
		int32_t L_100 = V_9;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_5 = L_102;
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_103 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_023a:
	{
		// for (int i = 0; i < downsample - 1; i++)
		int32_t L_104 = V_9;
		int32_t L_105 = V_2;
		if ((((int32_t)L_104) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_105, 1)))))
		{
			goto IL_021a;
		}
	}

IL_0241:
	{
		// adaptionSpeed = adaptionSpeed < 0.001f ? 0.001f : adaptionSpeed;
		float L_106 = __this->___adaptionSpeed_14;
		G_B28_0 = __this;
		if ((((float)L_106) < ((float)(0.00100000005f))))
		{
			G_B29_0 = __this;
			goto IL_0257;
		}
	}
	{
		float L_107 = __this->___adaptionSpeed_14;
		G_B30_0 = L_107;
		G_B30_1 = G_B28_0;
		goto IL_025c;
	}

IL_0257:
	{
		G_B30_0 = (0.00100000005f);
		G_B30_1 = G_B29_0;
	}

IL_025c:
	{
		NullCheck(G_B30_1);
		G_B30_1->___adaptionSpeed_14 = G_B30_0;
		// tonemapMaterial.SetFloat("_AdaptionSpeed", adaptionSpeed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108 = __this->___tonemapMaterial_17;
		float L_109 = __this->___adaptionSpeed_14;
		NullCheck(L_108);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_108, _stringLiteralC85CED4FA3BF4FAFA2854F821A7498848B323CD4, L_109, NULL);
		// rt.MarkRestoreExpected(); // keeping luminance values between frames, RT restore expected
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_110 = __this->___rt_18;
		NullCheck(L_110);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_110, NULL);
		// Graphics.Blit (lumRt, rt, tonemapMaterial, freshlyBrewedInternalRt ? 3 : 2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_111 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_112 = __this->___rt_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113 = __this->___tonemapMaterial_17;
		bool L_114 = V_0;
		G_B31_0 = L_113;
		G_B31_1 = L_112;
		G_B31_2 = L_111;
		if (L_114)
		{
			G_B32_0 = L_113;
			G_B32_1 = L_112;
			G_B32_2 = L_111;
			goto IL_0296;
		}
	}
	{
		G_B33_0 = 2;
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		G_B33_3 = G_B31_2;
		goto IL_0297;
	}

IL_0296:
	{
		G_B33_0 = 3;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
		G_B33_3 = G_B32_2;
	}

IL_0297:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B33_3, G_B33_2, G_B33_1, G_B33_0, NULL);
		// middleGrey = middleGrey < 0.001f ? 0.001f : middleGrey;
		float L_115 = __this->___middleGrey_12;
		G_B34_0 = __this;
		if ((((float)L_115) < ((float)(0.00100000005f))))
		{
			G_B35_0 = __this;
			goto IL_02b2;
		}
	}
	{
		float L_116 = __this->___middleGrey_12;
		G_B36_0 = L_116;
		G_B36_1 = G_B34_0;
		goto IL_02b7;
	}

IL_02b2:
	{
		G_B36_0 = (0.00100000005f);
		G_B36_1 = G_B35_0;
	}

IL_02b7:
	{
		NullCheck(G_B36_1);
		G_B36_1->___middleGrey_12 = G_B36_0;
		// tonemapMaterial.SetVector("_HdrParams", new Vector4(middleGrey, middleGrey, middleGrey, white*white));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_117 = __this->___tonemapMaterial_17;
		float L_118 = __this->___middleGrey_12;
		float L_119 = __this->___middleGrey_12;
		float L_120 = __this->___middleGrey_12;
		float L_121 = __this->___white_13;
		float L_122 = __this->___white_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_123), L_118, L_119, L_120, ((float)il2cpp_codegen_multiply(L_121, L_122)), /*hidden argument*/NULL);
		NullCheck(L_117);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_117, _stringLiteral0CB3105D1705C78EBC02C2DA0C3FD28BC6CD048E, L_123, NULL);
		// tonemapMaterial.SetTexture("_SmallTex", rt);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_124 = __this->___tonemapMaterial_17;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_125 = __this->___rt_18;
		NullCheck(L_124);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_124, _stringLiteralC73E37BE554293C44E2A4E367137D91FC016C4D7, L_125, NULL);
		// if (type == TonemapperType.AdaptiveReinhard)
		int32_t L_126 = __this->___type_7;
		if ((!(((uint32_t)L_126) == ((uint32_t)5))))
		{
			goto IL_031f;
		}
	}
	{
		// Graphics.Blit(source, destination, tonemapMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_127 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_128 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_127, L_128, L_129, 0, NULL);
		goto IL_034a;
	}

IL_031f:
	{
		// else if (type == TonemapperType.AdaptiveReinhardAutoWhite)
		int32_t L_130 = __this->___type_7;
		if ((!(((uint32_t)L_130) == ((uint32_t)6))))
		{
			goto IL_0339;
		}
	}
	{
		// Graphics.Blit(source, destination, tonemapMaterial, 10);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_131 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_132 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_133 = __this->___tonemapMaterial_17;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_131, L_132, L_133, ((int32_t)10), NULL);
		goto IL_034a;
	}

IL_0339:
	{
		// Debug.LogError("No valid adaptive tonemapper type found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2C3276B6EABA4BB4E3366F0EB502A5F578BE657F, NULL);
		// Graphics.Blit(source, destination); // at least we get the TransformToLDR effect
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_134 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_135 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_134, L_135, NULL);
	}

IL_034a:
	{
		// for (int i = 0; i < downsample; i++)
		V_10 = 0;
		goto IL_035f;
	}

IL_034f:
	{
		// RenderTexture.ReleaseTemporary(rts[i]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_136 = V_4;
		int32_t L_137 = V_10;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_139, NULL);
		// for (int i = 0; i < downsample; i++)
		int32_t L_140 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_035f:
	{
		// for (int i = 0; i < downsample; i++)
		int32_t L_141 = V_10;
		int32_t L_142 = V_2;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_034f;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(rtSquared);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_143 = V_1;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_143, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Tonemapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tonemapping__ctor_mEF2579982D0293C0899810E4BCB8FF6B8862E84F (Tonemapping_tA7E39E315156C86E30A3C93EB83DB9EAF00AA818* __this, const RuntimeMethod* method) 
{
	{
		// public TonemapperType type = TonemapperType.Photographic;
		__this->___type_7 = 3;
		// public AdaptiveTexSize adaptiveTextureSize = AdaptiveTexSize.Square256;
		__this->___adaptiveTextureSize_8 = ((int32_t)256);
		// public float exposureAdjustment = 1.5f;
		__this->___exposureAdjustment_11 = (1.5f);
		// public float middleGrey = 0.4f;
		__this->___middleGrey_12 = (0.400000006f);
		// public float white = 2.0f;
		__this->___white_13 = (2.0f);
		// public float adaptionSpeed = 1.5f;
		__this->___adaptionSpeed_14 = (1.5f);
		// public bool validRenderTextureFormat = true;
		__this->___validRenderTextureFormat_16 = (bool)1;
		// private RenderTextureFormat rtFormat = RenderTextureFormat.ARGBHalf;
		__this->___rtFormat_19 = 2;
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.Triangles::HasMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangles_HasMeshes_m06D1A010EFB4AFD22701D79DEA321C5BDCE8C0EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_0 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_000d:
	{
		// if (null == meshes[i])
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_1 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_7 = V_0;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_8 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangles_Cleanup_m51E44CD73E253FDFBB58CC18030D0D03676B2194 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (meshes == null)
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_0 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// for (int i = 0; i < meshes.Length; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_000c:
	{
		// if (null != meshes[i])
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_1 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// Object.DestroyImmediate(meshes[i]);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_6 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_9, NULL);
		// meshes[i] = null;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_10 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, NULL);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
	}

IL_002f:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < meshes.Length; i++)
		int32_t L_13 = V_0;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_14 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// meshes = null;
		((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0 = (MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0), (void*)(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)NULL);
		// }
		return;
	}
}
// UnityEngine.Mesh[] UnityStandardAssets.ImageEffects.Triangles::GetMeshes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* Triangles_GetMeshes_m3DCF64012831DC4D525D97E07F13846F119F00F8 (int32_t ___0_totalWidth, int32_t ___1_totalHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (HasMeshes() && (currentTris == (totalWidth * totalHeight)))
		bool L_0;
		L_0 = Triangles_HasMeshes_m06D1A010EFB4AFD22701D79DEA321C5BDCE8C0EE(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___currentTris_1;
		int32_t L_2 = ___0_totalWidth;
		int32_t L_3 = ___1_totalHeight;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3))))))
		{
			goto IL_0017;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_4 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		return L_4;
	}

IL_0017:
	{
		// int maxTris = 65000 / 3;
		V_0 = ((int32_t)21666);
		// int totalTris = totalWidth * totalHeight;
		int32_t L_5 = ___0_totalWidth;
		int32_t L_6 = ___1_totalHeight;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// currentTris = totalTris;
		int32_t L_7 = V_1;
		((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___currentTris_1 = L_7;
		// int meshCount = Mathf.CeilToInt((1.0f * totalTris) / (1.0f * maxTris));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_8)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_9))))), NULL);
		// meshes = new Mesh[meshCount];
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_11 = (MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689*)SZArrayNew(MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689_il2cpp_TypeInfo_var, (uint32_t)L_10);
		((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0), (void*)L_11);
		// int i = 0;
		V_2 = 0;
		// int index = 0;
		V_3 = 0;
		// for (i = 0; i < totalTris; i += maxTris)
		V_2 = 0;
		goto IL_007a;
	}

IL_004f:
	{
		// int tris = Mathf.FloorToInt(Mathf.Clamp((totalTris - i), 0, maxTris));
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), 0, L_14, NULL);
		int32_t L_16;
		L_16 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)L_15), NULL);
		V_4 = L_16;
		// meshes[index] = GetMesh(tris, i, totalWidth, totalHeight);
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_17 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		int32_t L_21 = ___0_totalWidth;
		int32_t L_22 = ___1_totalHeight;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23;
		L_23 = Triangles_GetMesh_m2794A44B43D1572051664372102732E88DF16B05(L_19, L_20, L_21, L_22, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)L_23);
		// index++;
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		// for (i = 0; i < totalTris; i += maxTris)
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
	}

IL_007a:
	{
		// for (i = 0; i < totalTris; i += maxTris)
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		// return meshes;
		MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* L_29 = ((Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_StaticFields*)il2cpp_codegen_static_fields_for(Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124_il2cpp_TypeInfo_var))->___meshes_0;
		return L_29;
	}
}
// UnityEngine.Mesh UnityStandardAssets.ImageEffects.Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Triangles_GetMesh_m2794A44B43D1572051664372102732E88DF16B05 (int32_t ___0_triCount, int32_t ___1_triOffset, int32_t ___2_totalWidth, int32_t ___3_totalHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_2 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// mesh.hideFlags = HideFlags.DontSave;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		NullCheck(L_1);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_1, ((int32_t)52), NULL);
		// var verts = new Vector3[triCount * 3];
		int32_t L_2 = ___0_triCount;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, 3)));
		V_1 = L_3;
		// var uvs = new Vector2[triCount * 3];
		int32_t L_4 = ___0_triCount;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, 3)));
		V_2 = L_5;
		// var uvs2 = new Vector2[triCount * 3];
		int32_t L_6 = ___0_triCount;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 3)));
		V_3 = L_7;
		// var tris = new int[triCount * 3];
		int32_t L_8 = ___0_triCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_8, 3)));
		V_4 = L_9;
		// for (int i = 0; i < triCount; i++)
		V_5 = 0;
		goto IL_014d;
	}

IL_003b:
	{
		// int i3 = i * 3;
		int32_t L_10 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_10, 3));
		// int vertexWithOffset = triOffset + i;
		int32_t L_11 = ___1_triOffset;
		int32_t L_12 = V_5;
		// float x = Mathf.Floor(vertexWithOffset % totalWidth) / totalWidth;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_14 = ___2_totalWidth;
		float L_15;
		L_15 = floorf(((float)((int32_t)(L_13%L_14))));
		int32_t L_16 = ___2_totalWidth;
		V_7 = ((float)(L_15/((float)L_16)));
		// float y = Mathf.Floor(vertexWithOffset / totalWidth) / totalHeight;
		int32_t L_17 = ___2_totalWidth;
		float L_18;
		L_18 = floorf(((float)((int32_t)(L_13/L_17))));
		int32_t L_19 = ___3_totalHeight;
		V_8 = ((float)(L_18/((float)L_19)));
		// Vector3 position = new Vector3(x * 2 - 1, y * 2 - 1, 1.0f);
		float L_20 = V_7;
		float L_21 = V_8;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, (2.0f))), (1.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, (2.0f))), (1.0f))), (1.0f), NULL);
		// verts[i3 + 0] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = V_1;
		int32_t L_23 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_9;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_24);
		// verts[i3 + 1] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_1;
		int32_t L_26 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_9;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_27);
		// verts[i3 + 2] = position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = V_1;
		int32_t L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_9;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 2))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
		// uvs[i3 + 0] = new Vector2(0.0f, 0.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_31 = V_2;
		int32_t L_32 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_33);
		// uvs[i3 + 1] = new Vector2(1.0f, 0.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_34 = V_2;
		int32_t L_35 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_35, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_36);
		// uvs[i3 + 2] = new Vector2(0.0f, 1.0f);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_37 = V_2;
		int32_t L_38 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_38, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_39);
		// uvs2[i3 + 0] = new Vector2(x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_40 = V_3;
		int32_t L_41 = V_6;
		float L_42 = V_7;
		float L_43 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_44);
		// uvs2[i3 + 1] = new Vector2(x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = V_3;
		int32_t L_46 = V_6;
		float L_47 = V_7;
		float L_48 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, 1))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_49);
		// uvs2[i3 + 2] = new Vector2(x, y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_50 = V_3;
		int32_t L_51 = V_6;
		float L_52 = V_7;
		float L_53 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_54), L_52, L_53, /*hidden argument*/NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_51, 2))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_54);
		// tris[i3 + 0] = i3 + 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_4;
		int32_t L_56 = V_6;
		int32_t L_57 = V_6;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (int32_t)L_57);
		// tris[i3 + 1] = i3 + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_4;
		int32_t L_59 = V_6;
		int32_t L_60 = V_6;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_59, 1))), (int32_t)((int32_t)il2cpp_codegen_add(L_60, 1)));
		// tris[i3 + 2] = i3 + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_4;
		int32_t L_62 = V_6;
		int32_t L_63 = V_6;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 2))), (int32_t)((int32_t)il2cpp_codegen_add(L_63, 2)));
		// for (int i = 0; i < triCount; i++)
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_014d:
	{
		// for (int i = 0; i < triCount; i++)
		int32_t L_65 = V_5;
		int32_t L_66 = ___0_triCount;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_003b;
		}
	}
	{
		// mesh.vertices = verts;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_67 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_1;
		NullCheck(L_67);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_67, L_68, NULL);
		// mesh.triangles = tris;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_69 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_4;
		NullCheck(L_69);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_69, L_70, NULL);
		// mesh.uv = uvs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_71 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_72 = V_2;
		NullCheck(L_71);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_71, L_72, NULL);
		// mesh.uv2 = uvs2;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_73 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_74 = V_3;
		NullCheck(L_73);
		Mesh_set_uv2_m37B442C04EBB029C0AD9545C54F95D9BDAD8E9B5(L_73, L_74, NULL);
		// return mesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_75 = V_0;
		return L_75;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Triangles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangles__ctor_mB64F02B9481FC7C583FF49508F4AF36506137851 (Triangles_t4EAA82DD9ABF753F36FC9B720E86C79CD6CC6124* __this, const RuntimeMethod* method) 
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
// System.Void UnityStandardAssets.ImageEffects.Twirl::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Twirl_OnRenderImage_m29976F163DF515C836C6925BD2770B8B6AE9C925 (Twirl_t228182A019AEF2D3B321EABCE3D3DD8F83E702A7* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_destination, const RuntimeMethod* method) 
{
	{
		// ImageEffects.RenderDistortion (material, source, destination, angle, center, radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___1_destination;
		float L_3 = __this->___angle_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___center_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___radius_6;
		ImageEffects_RenderDistortion_mB9B8E1ABEC327C7EE2387A51108C4F6B972561BC(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Twirl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Twirl__ctor_m77736ED53F9B5740B06DA39C508641158E6D4B03 (Twirl_t228182A019AEF2D3B321EABCE3D3DD8F83E702A7* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 radius = new Vector2(0.3F,0.3F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.300000012f), (0.300000012f), /*hidden argument*/NULL);
		__this->___radius_6 = L_0;
		// public float angle = 50;
		__this->___angle_7 = (50.0f);
		// public Vector2 center = new Vector2 (0.5F, 0.5F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___center_8 = L_1;
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Boolean UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VignetteAndChromaticAberration_CheckResources_m6F1DD9FE91586FC0B7C56E490DAC8E68E82AE9EC (VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77* __this, const RuntimeMethod* method) 
{
	{
		// CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m97A1AE9C8FAFEA8D8FF7FA69916F388ACCA9FB34(__this, (bool)0, NULL);
		// m_VignetteMaterial = CheckShaderAndCreateMaterial (vignetteShader, m_VignetteMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___vignetteShader_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_VignetteMaterial_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_1, L_2, NULL);
		__this->___m_VignetteMaterial_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VignetteMaterial_18), (void*)L_3);
		// m_SeparableBlurMaterial = CheckShaderAndCreateMaterial (separableBlurShader, m_SeparableBlurMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___separableBlurShader_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_SeparableBlurMaterial_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_4, L_5, NULL);
		__this->___m_SeparableBlurMaterial_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SeparableBlurMaterial_19), (void*)L_6);
		// m_ChromAberrationMaterial = CheckShaderAndCreateMaterial (chromAberrationShader, m_ChromAberrationMaterial);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___chromAberrationShader_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___m_ChromAberrationMaterial_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = PostEffectsBase_CheckShaderAndCreateMaterial_m05677F5055873EAB286B69870015998FBB9D6927(__this, L_7, L_8, NULL);
		__this->___m_ChromAberrationMaterial_20 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ChromAberrationMaterial_20), (void*)L_9);
		// if (!isSupported)
		bool L_10 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		if (L_10)
		{
			goto IL_005e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m4A617083CFD2A09EEECF6329CD2C9AD101095E34(__this, NULL);
	}

IL_005e:
	{
		// return isSupported;
		bool L_11 = ((PostEffectsBase_t8D48A678F79C0F5AB1080A5FBF939D05CEEBEB76*)__this)->___isSupported_6;
		return L_11;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VignetteAndChromaticAberration_OnRenderImage_m5C3262455A520C611E1C5818DA3AEBF7C5611DC6 (VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral322836504097FF5183FA9B195361CABCA3C9F347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D45EDE1CD4AD589B6CD45E1ED026A9C161DE69B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA621DB6632C8DC8F2861D67FDB77D1DB44D2C0B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC17A0B7C5A6724EB8EBCAE232CF6B2E0974F0F64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1EC77B5584E15E3EF84D1B53BDA4765F04D8B0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC595EDFCB3DB85E564F4079769C6E189C1810A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	int32_t V_6 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	int32_t G_B5_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B17_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B19_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B19_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B19_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B18_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B18_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B18_2 = NULL;
	int32_t G_B20_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B20_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B20_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B20_3 = NULL;
	{
		// if ( CheckResources () == false)
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Graphics.Blit (source, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_1, L_2, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// int rtW = source.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___0_source;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		V_0 = L_4;
		// int rtH = source.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___0_source;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_1 = L_6;
		// bool  doPrepass = (Mathf.Abs(blur)>0.0f || Mathf.Abs(intensity)>0.0f);
		float L_7 = __this->___blur_11;
		float L_8;
		L_8 = fabsf(L_7);
		if ((((float)L_8) > ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		float L_9 = __this->___intensity_8;
		float L_10;
		L_10 = fabsf(L_9);
		G_B5_0 = ((((float)L_10) > ((float)(0.0f)))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B5_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		// float widthOverHeight = (1.0f * rtW) / (1.0f * rtH);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_3 = ((float)(((float)il2cpp_codegen_multiply((1.0f), ((float)L_11)))/((float)il2cpp_codegen_multiply((1.0f), ((float)L_12)))));
		// RenderTexture color = null;
		V_4 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// RenderTexture color2A = null;
		V_5 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// if (doPrepass)
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_01c5;
		}
	}
	{
		// color = RenderTexture.GetTemporary (rtW, rtH, 0, source.format);
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = ___0_source;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_16, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18;
		L_18 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(L_14, L_15, 0, L_17, NULL);
		V_4 = L_18;
		// if (Mathf.Abs (blur)>0.0f)
		float L_19 = __this->___blur_11;
		float L_20;
		L_20 = fabsf(L_19);
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_0178;
		}
	}
	{
		// color2A = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = ___0_source;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_23, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25;
		L_25 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_21/2)), ((int32_t)(L_22/2)), 0, L_24, NULL);
		V_5 = L_25;
		// Graphics.Blit (source, color2A, m_ChromAberrationMaterial, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___m_ChromAberrationMaterial_20;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_26, L_27, L_28, 0, NULL);
		// for(int i = 0; i < 2; i++)
		V_6 = 0;
		goto IL_0170;
	}

IL_00b4:
	{
		// m_SeparableBlurMaterial.SetVector ("offsets",new Vector4 (0.0f, blurSpread * oneOverBaseSize, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___m_SeparableBlurMaterial_19;
		float L_30 = __this->___blurSpread_12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_31), (0.0f), ((float)il2cpp_codegen_multiply(L_30, (0.001953125f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_29, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_31, NULL);
		// RenderTexture color2B = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = ___0_source;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_34, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_36;
		L_36 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_32/2)), ((int32_t)(L_33/2)), 0, L_35, NULL);
		V_7 = L_36;
		// Graphics.Blit (color2A, color2B, m_SeparableBlurMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___m_SeparableBlurMaterial_19;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_37, L_38, L_39, NULL);
		// RenderTexture.ReleaseTemporary (color2A);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_40, NULL);
		// m_SeparableBlurMaterial.SetVector ("offsets",new Vector4 (blurSpread * oneOverBaseSize / widthOverHeight, 0.0f, 0.0f, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___m_SeparableBlurMaterial_19;
		float L_42 = __this->___blurSpread_12;
		float L_43 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_44), ((float)(((float)il2cpp_codegen_multiply(L_42, (0.001953125f)))/L_43)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_41, _stringLiteralEF8206FEC2F38BBF1FE70987DEC5173251678277, L_44, NULL);
		// color2A = RenderTexture.GetTemporary (rtW / 2, rtH / 2, 0, source.format);
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___0_source;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_47, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49;
		L_49 = RenderTexture_GetTemporary_mDAD0D2A673F07BEC3B1A9555863E24A479E9BB11(((int32_t)(L_45/2)), ((int32_t)(L_46/2)), 0, L_48, NULL);
		V_5 = L_49;
		// Graphics.Blit (color2B, color2A, m_SeparableBlurMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_51 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___m_SeparableBlurMaterial_19;
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_50, L_51, L_52, NULL);
		// RenderTexture.ReleaseTemporary (color2B);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_53 = V_7;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_53, NULL);
		// for(int i = 0; i < 2; i++)
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0170:
	{
		// for(int i = 0; i < 2; i++)
		int32_t L_55 = V_6;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_00b4;
		}
	}

IL_0178:
	{
		// m_VignetteMaterial.SetFloat ("_Intensity", intensity);        // intensity for vignette
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = __this->___m_VignetteMaterial_18;
		float L_57 = __this->___intensity_8;
		NullCheck(L_56);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_56, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_57, NULL);
		// m_VignetteMaterial.SetFloat ("_Blur", blur);                    // blur intensity
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58 = __this->___m_VignetteMaterial_18;
		float L_59 = __this->___blur_11;
		NullCheck(L_58);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_58, _stringLiteralA621DB6632C8DC8F2861D67FDB77D1DB44D2C0B5, L_59, NULL);
		// m_VignetteMaterial.SetTexture ("_VignetteTex", color2A);    // blurred texture
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->___m_VignetteMaterial_18;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61 = V_5;
		NullCheck(L_60);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_60, _stringLiteral322836504097FF5183FA9B195361CABCA3C9F347, L_61, NULL);
		// Graphics.Blit (source, color, m_VignetteMaterial, 0);            // prepass blit: darken & blur corners
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_63 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64 = __this->___m_VignetteMaterial_18;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_62, L_63, L_64, 0, NULL);
	}

IL_01c5:
	{
		// m_ChromAberrationMaterial.SetFloat ("_ChromaticAberration", chromaticAberration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65 = __this->___m_ChromAberrationMaterial_20;
		float L_66 = __this->___chromaticAberration_9;
		NullCheck(L_65);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_65, _stringLiteralD1EC77B5584E15E3EF84D1B53BDA4765F04D8B0C, L_66, NULL);
		// m_ChromAberrationMaterial.SetFloat ("_AxialAberration", axialAberration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = __this->___m_ChromAberrationMaterial_20;
		float L_68 = __this->___axialAberration_10;
		NullCheck(L_67);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_67, _stringLiteralEEC595EDFCB3DB85E564F4079769C6E189C1810A, L_68, NULL);
		// m_ChromAberrationMaterial.SetVector ("_BlurDistance", new Vector2 (-blurDistance, blurDistance));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69 = __this->___m_ChromAberrationMaterial_20;
		float L_70 = __this->___blurDistance_14;
		float L_71 = __this->___blurDistance_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_72), ((-L_70)), L_71, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_73;
		L_73 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_72, NULL);
		NullCheck(L_69);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_69, _stringLiteralC17A0B7C5A6724EB8EBCAE232CF6B2E0974F0F64, L_73, NULL);
		// m_ChromAberrationMaterial.SetFloat ("_Luminance", 1.0f/Mathf.Max(Mathf.Epsilon, luminanceDependency));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___m_ChromAberrationMaterial_20;
		float L_75 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_76 = __this->___luminanceDependency_13;
		float L_77;
		L_77 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_75, L_76, NULL);
		NullCheck(L_74);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_74, _stringLiteral3D45EDE1CD4AD589B6CD45E1ED026A9C161DE69B, ((float)((1.0f)/L_77)), NULL);
		// if (doPrepass) color.wrapMode = TextureWrapMode.Clamp;
		bool L_78 = V_2;
		if (!L_78)
		{
			goto IL_024b;
		}
	}
	{
		// if (doPrepass) color.wrapMode = TextureWrapMode.Clamp;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_79 = V_4;
		NullCheck(L_79);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_79, 1, NULL);
		goto IL_0252;
	}

IL_024b:
	{
		// else source.wrapMode = TextureWrapMode.Clamp;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = ___0_source;
		NullCheck(L_80);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_80, 1, NULL);
	}

IL_0252:
	{
		// Graphics.Blit (doPrepass ? color : source, destination, m_ChromAberrationMaterial, mode == AberrationMode.Advanced ? 2 : 1);
		bool L_81 = V_2;
		if (L_81)
		{
			goto IL_0258;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = ___0_source;
		G_B17_0 = L_82;
		goto IL_025a;
	}

IL_0258:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83 = V_4;
		G_B17_0 = L_83;
	}

IL_025a:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = ___1_destination;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = __this->___m_ChromAberrationMaterial_20;
		int32_t L_86 = __this->___mode_7;
		G_B18_0 = L_85;
		G_B18_1 = L_84;
		G_B18_2 = G_B17_0;
		if ((((int32_t)L_86) == ((int32_t)1)))
		{
			G_B19_0 = L_85;
			G_B19_1 = L_84;
			G_B19_2 = G_B17_0;
			goto IL_026d;
		}
	}
	{
		G_B20_0 = 1;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_026e;
	}

IL_026d:
	{
		G_B20_0 = 2;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_026e:
	{
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
		// RenderTexture.ReleaseTemporary (color);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_87 = V_4;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_87, NULL);
		// RenderTexture.ReleaseTemporary (color2A);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_88 = V_5;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_88, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VignetteAndChromaticAberration__ctor_m3DA6B990E322E0336C4040A1F6A40016E930A20A (VignetteAndChromaticAberration_t034D3E1387038A4CDADE76550E9BD186A7FC1C77* __this, const RuntimeMethod* method) 
{
	{
		// public float intensity = 0.375f;                    // intensity == 0 disables pre pass (optimization)
		__this->___intensity_8 = (0.375f);
		// public float chromaticAberration = 0.2f;
		__this->___chromaticAberration_9 = (0.200000003f);
		// public float axialAberration = 0.5f;
		__this->___axialAberration_10 = (0.5f);
		// public float blurSpread = 0.75f;
		__this->___blurSpread_12 = (0.75f);
		// public float luminanceDependency = 0.25f;
		__this->___luminanceDependency_13 = (0.25f);
		// public float blurDistance = 2.5f;
		__this->___blurDistance_14 = (2.5f);
		PostEffectsBase__ctor_mA6375ECEEA9338D745C8ADDDF2CE2CFE19AD3919(__this, NULL);
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
// System.Void UnityStandardAssets.ImageEffects.Vortex::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vortex_OnRenderImage_m9E5533007C6B15733582D6DBE20CE932EE9C2CFD (Vortex_tB86B71C706F31FD5987C6B125411B29A1674ED54* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_destination, const RuntimeMethod* method) 
{
	{
		// ImageEffects.RenderDistortion (material, source, destination, angle, center, radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mB006F34B91F5520C2F543594586F8456AB2CB024(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___0_source;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___1_destination;
		float L_3 = __this->___angle_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___center_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___radius_6;
		ImageEffects_RenderDistortion_mB9B8E1ABEC327C7EE2387A51108C4F6B972561BC(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.Vortex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vortex__ctor_m1E336A10B273F31D568CC82C1C5CEBB927402DD6 (Vortex_tB86B71C706F31FD5987C6B125411B29A1674ED54* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 radius = new Vector2(0.4F,0.4F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.400000006f), (0.400000006f), /*hidden argument*/NULL);
		__this->___radius_6 = L_0;
		// public float angle = 50;
		__this->___angle_7 = (50.0f);
		// public Vector2 center = new Vector2(0.5F, 0.5F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___center_8 = L_1;
		ImageEffectBase__ctor_mD934C852B973B7EB2FA5CD62E6D0BD7135D0A42B(__this, NULL);
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
// System.Object AmplitudeNS.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m5E420F2F3E6C9B75A8B1A4E4BA47D33CCC332235 (String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		// if (json == null) {
		String_t* L_0 = ___0_json;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_0005:
	{
		// return Parser.Parse(json);
		String_t* L_1 = ___0_json;
		RuntimeObject* L_2;
		L_2 = Parser_Parse_m0897F575290D51F285E80A70DDB71A6A8347632E(L_1, NULL);
		return L_2;
	}
}
// System.String AmplitudeNS.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m2A6E4B262C12F39C5A1A1DF83D4F5BB89C62A45D (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return Serializer.Serialize(obj);
		RuntimeObject* L_0 = ___0_obj;
		String_t* L_1;
		L_1 = Serializer_Serialize_mF754FA742B06F31D9855F2522EE45FEE35BBDAD8(L_0, NULL);
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
// System.Void AmplitudeNS.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mE517FCCE14F0F261A604154855B2E685AEC990D6 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___0_jsonString;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		__this->___json_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_2), (void*)L_1);
		// }
		return;
	}
}
// System.Object AmplitudeNS.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_m0897F575290D51F285E80A70DDB71A6A8347632E (String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t5CE444F52863545C1D883D8E083F9F5C67124951_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// using (var instance = new Parser(jsonString)) {
		String_t* L_0 = ___0_jsonString;
		Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* L_1 = (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951*)il2cpp_codegen_object_new(Parser_t5CE444F52863545C1D883D8E083F9F5C67124951_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Parser__ctor_mE517FCCE14F0F261A604154855B2E685AEC990D6(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				{
					Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0019;
					}
				}
				{
					Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0019:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return instance.ParseValue();
			Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Parser_ParseValue_m69ADFF7A3F90A560C3BBF3D17B196216BBE01611(L_4, NULL);
			V_1 = L_5;
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		// }
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Void AmplitudeNS.MiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m113E3EB58DAF2D367D33F0D201D16465A1B98323 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	{
		// json.Dispose();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_0, NULL);
		// json = null;
		__this->___json_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_2), (void*)(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> AmplitudeNS.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_mE2CDC67778FC5E8204F784BA9BD08A53A80B2574 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken) {
		int32_t L_3;
		L_3 = Parser_get_NextToken_mADD25509957CAF9025E0928F68E86271637203A3(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = V_0;
		return L_7;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_8;
		L_8 = Parser_ParseString_m8C19E88DDBEB2385C2E6C77D195657DA8ACA348A(__this, NULL);
		V_1 = L_8;
		// if (name == null) {
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON) {
		int32_t L_10;
		L_10 = Parser_get_NextToken_mADD25509957CAF9025E0928F68E86271637203A3(__this, NULL);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// table[name] = ParseValue();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = V_0;
		String_t* L_14 = V_1;
		RuntimeObject* L_15;
		L_15 = Parser_ParseValue_m69ADFF7A3F90A560C3BBF3D17B196216BBE01611(__this, NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_13, L_14, L_15, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> AmplitudeNS.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m8D44F3FD8873E3B704594AB7D3A60BB44C7BBA23 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_3;
		L_3 = Parser_get_NextToken_mADD25509957CAF9025E0928F68E86271637203A3(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_7 = V_2;
		RuntimeObject* L_8;
		L_8 = Parser_ParseByToken_m38CF2D3879151135AD1363B696D69F6BAE349AD9(__this, L_7, NULL);
		V_3 = L_8;
		// array.Add(value);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		RuntimeObject* L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_9, L_10, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing) {
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		return L_12;
	}
}
// System.Object AmplitudeNS.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m69ADFF7A3F90A560C3BBF3D17B196216BBE01611 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0;
		L_0 = Parser_get_NextToken_mADD25509957CAF9025E0928F68E86271637203A3(__this, NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = Parser_ParseByToken_m38CF2D3879151135AD1363B696D69F6BAE349AD9(__this, L_1, NULL);
		return L_2;
	}
}
// System.Object AmplitudeNS.MiniJSON.Json/Parser::ParseByToken(AmplitudeNS.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m38CF2D3879151135AD1363B696D69F6BAE349AD9 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_token;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1;
		L_1 = Parser_ParseString_m8C19E88DDBEB2385C2E6C77D195657DA8ACA348A(__this, NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject* L_2;
		L_2 = Parser_ParseNumber_mBF13A88AE39CA73AF9D56CAE6E4D32830D6F3236(__this, NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3;
		L_3 = Parser_ParseObject_mE2CDC67778FC5E8204F784BA9BD08A53A80B2574(__this, NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = Parser_ParseArray_m8D44F3FD8873E3B704594AB7D3A60BB44C7BBA23(__this, NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String AmplitudeNS.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m8C19E88DDBEB2385C2E6C77D195657DA8ACA348A (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0139;
	}

IL_0019:
	{
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_3 = __this->___json_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013f;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_5;
		L_5 = Parser_get_NextChar_mAADE98129462252CD3EE9FD09976F3CCA541E004(__this, NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0131;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0139;
	}

IL_004b:
	{
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_8 = __this->___json_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0139;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_10;
		L_10 = Parser_get_NextChar_mAADE98129462252CD3EE9FD09976F3CCA541E004(__this, NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0139;
	}

IL_0080:
	{
		Il2CppChar L_15 = V_1;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0139;
	}

IL_0094:
	{
		Il2CppChar L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0139;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t* L_20 = V_0;
		Il2CppChar L_21 = V_1;
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_21, NULL);
		// break;
		goto IL_0139;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, 8, NULL);
		// break;
		goto IL_0139;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, ((int32_t)12), NULL);
		// break;
		goto IL_0139;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)10), NULL);
		// break;
		goto IL_0139;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)13), NULL);
		// break;
		goto IL_0139;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)9), NULL);
		// break;
		goto IL_0139;
	}

IL_00f7:
	{
		// var hex = new StringBuilder();
		StringBuilder_t* L_33 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_33, NULL);
		V_3 = L_33;
		// for (int i=0; i< 4; i++) {
		V_4 = 0;
		goto IL_0115;
	}

IL_0102:
	{
		// hex.Append(NextChar);
		StringBuilder_t* L_34 = V_3;
		Il2CppChar L_35;
		L_35 = Parser_get_NextChar_mAADE98129462252CD3EE9FD09976F3CCA541E004(__this, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, L_35, NULL);
		// for (int i=0; i< 4; i++) {
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0115:
	{
		// for (int i=0; i< 4; i++) {
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) < ((int32_t)4)))
		{
			goto IL_0102;
		}
	}
	{
		// s.Append((char) Convert.ToInt32(hex.ToString(), 16));
		StringBuilder_t* L_39 = V_0;
		StringBuilder_t* L_40 = V_3;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4(L_41, ((int32_t)16), NULL);
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		// break;
		goto IL_0139;
	}

IL_0131:
	{
		// s.Append(c);
		StringBuilder_t* L_44 = V_0;
		Il2CppChar L_45 = V_1;
		NullCheck(L_44);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, L_45, NULL);
	}

IL_0139:
	{
		// while (parsing) {
		bool L_47 = V_2;
		if (L_47)
		{
			goto IL_0019;
		}
	}

IL_013f:
	{
		// return s.ToString();
		StringBuilder_t* L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		return L_49;
	}
}
// System.Object AmplitudeNS.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mBF13A88AE39CA73AF9D56CAE6E4D32830D6F3236 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string number = NextWord;
		String_t* L_0;
		L_0 = Parser_get_NextWord_mFBD96068AF0333AD478C0F61F66EFFE77286E6A6(__this, NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1) {
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_1, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		// return int.Parse(number);
		String_t* L_3 = V_0;
		int32_t L_4;
		L_4 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_3, NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_001e:
	{
		// return float.Parse(number);
		String_t* L_7 = V_0;
		float L_8;
		L_8 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_7, NULL);
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Void AmplitudeNS.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mE52A290A5EC4A836EBE0401812A550BED86EA908 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = __this->___json_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_002f;
		}
	}

IL_001c:
	{
		// while (WHITE_SPACE.IndexOf(PeekChar) != -1) {
		Il2CppChar L_4;
		L_4 = Parser_get_PeekChar_mCB4B296524971AEAAE42C8F25B008196E5F41E8E(__this, NULL);
		NullCheck(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0002;
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Char AmplitudeNS.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_mCB4B296524971AEAAE42C8F25B008196E5F41E8E (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		return L_2;
	}
}
// System.Char AmplitudeNS.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_mAADE98129462252CD3EE9FD09976F3CCA541E004 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		return L_2;
	}
}
// System.String AmplitudeNS.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_mFBD96068AF0333AD478C0F61F66EFFE77286E6A6 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t* L_1 = V_0;
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_mAADE98129462252CD3EE9FD09976F3CCA541E004(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, L_2, NULL);
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_4 = __this->___json_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}

IL_0023:
	{
		// while (WORD_BREAK.IndexOf(PeekChar) == -1) {
		Il2CppChar L_6;
		L_6 = Parser_get_PeekChar_mCB4B296524971AEAAE42C8F25B008196E5F41E8E(__this, NULL);
		NullCheck(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralF468E0BCDE9855E7830073A32AF7323CC7E46952, L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0008;
		}
	}

IL_0036:
	{
		// return word.ToString();
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// AmplitudeNS.MiniJSON.Json/Parser/TOKEN AmplitudeNS.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mADD25509957CAF9025E0928F68E86271637203A3 (Parser_t5CE444F52863545C1D883D8E083F9F5C67124951* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_mE52A290A5EC4A836EBE0401812A550BED86EA908(__this, NULL);
		// if (json.Peek() == -1) {
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// char c = PeekChar;
		Il2CppChar L_2;
		L_2 = Parser_get_PeekChar_mCB4B296524971AEAAE42C8F25B008196E5F41E8E(__this, NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_9 = __this->___json_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = __this->___json_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// string word = NextWord;
		String_t* L_15;
		L_15 = Parser_get_NextWord_mFBD96068AF0333AD478C0F61F66EFFE77286E6A6(__this, NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_17)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_19)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		if (L_21)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
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
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m40CBCABFB74A8C1E82DF0F678EDC65806A765A63 (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// builder = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder_0), (void*)L_0);
		// }
		return;
	}
}
// System.String AmplitudeNS.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mF754FA742B06F31D9855F2522EE45FEE35BBDAD8 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* L_0 = (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328*)il2cpp_codegen_object_new(Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Serializer__ctor_m40CBCABFB74A8C1E82DF0F678EDC65806A765A63(L_0, NULL);
		// instance.SerializeValue(obj);
		Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* L_1 = L_0;
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_1);
		Serializer_SerializeValue_m4FBEC42A2539CE9F469367033AAFEFEAB2FA7551(L_1, L_2, NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t* L_3 = L_1->___builder_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m4FBEC42A2539CE9F469367033AAFEFEAB2FA7551 (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if (value == null) {
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t* L_1 = __this->___builder_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		return;
	}

IL_0015:
	{
		// else if ((asStr = value as string) != null) {
		RuntimeObject* L_3 = ___0_value;
		String_t* L_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_5 = V_2;
		Serializer_SerializeString_m90926F2D28A47048AFE41C71647E1B38CB24864A(__this, L_5, NULL);
		return;
	}

IL_0027:
	{
		// else if (value is bool) {
		RuntimeObject* L_6 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0047;
		}
	}
	{
		// builder.Append(value.ToString().ToLower());
		StringBuilder_t* L_7 = __this->___builder_0;
		RuntimeObject* L_8 = ___0_value;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_9, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_10, NULL);
		return;
	}

IL_0047:
	{
		// else if ((asList = value as IList) != null) {
		RuntimeObject* L_12 = ___0_value;
		RuntimeObject* L_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		V_0 = L_13;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_14 = V_0;
		Serializer_SerializeArray_m9743D1022222CEBEDAEBEAF42AFDCF3619E63991(__this, L_14, NULL);
		return;
	}

IL_0059:
	{
		// else if ((asDict = value as IDictionary) != null) {
		RuntimeObject* L_15 = ___0_value;
		RuntimeObject* L_16 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		V_1 = L_16;
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_17 = V_1;
		Serializer_SerializeObject_mF46ED6A4B7CF7BDBC5971C2E5302C77B37EE024D(__this, L_17, NULL);
		return;
	}

IL_006b:
	{
		// else if (value is char) {
		RuntimeObject* L_18 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		// SerializeString(value.ToString());
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		Serializer_SerializeString_m90926F2D28A47048AFE41C71647E1B38CB24864A(__this, L_20, NULL);
		return;
	}

IL_0080:
	{
		// SerializeOther(value);
		RuntimeObject* L_21 = ___0_value;
		Serializer_SerializeOther_m512C9EBB20ED31EBC8692C238E9292C2FE996BFF(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_mF46ED6A4B7CF7BDBC5971C2E5302C77B37EE024D (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// foreach (object e in obj.Keys) {
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f_1;
			}

IL_001e_1:
			{
				// foreach (object e in obj.Keys) {
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				// if (!first) {
				bool L_10 = V_0;
				if (L_10)
				{
					goto IL_0036_1;
				}
			}
			{
				// builder.Append(',');
				StringBuilder_t* L_11 = __this->___builder_0;
				NullCheck(L_11);
				StringBuilder_t* L_12;
				L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)44), NULL);
			}

IL_0036_1:
			{
				// SerializeString(e.ToString());
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
				Serializer_SerializeString_m90926F2D28A47048AFE41C71647E1B38CB24864A(__this, L_14, NULL);
				// builder.Append(':');
				StringBuilder_t* L_15 = __this->___builder_0;
				NullCheck(L_15);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)58), NULL);
				// SerializeValue(obj[e]);
				RuntimeObject* L_17 = ___0_obj;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_17, L_18);
				Serializer_SerializeValue_m4FBEC42A2539CE9F469367033AAFEFEAB2FA7551(__this, L_19, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_005f_1:
			{
				// foreach (object e in obj.Keys) {
				RuntimeObject* L_20 = V_1;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t* L_22 = __this->___builder_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m9743D1022222CEBEDAEBEAF42AFDCF3619E63991 (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// builder.Append('[');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray) {
		RuntimeObject* L_2 = ___0_anArray;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_0019_1:
			{
				// foreach (object obj in anArray) {
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (!first) {
				bool L_9 = V_0;
				if (L_9)
				{
					goto IL_0031_1;
				}
			}
			{
				// builder.Append(',');
				StringBuilder_t* L_10 = __this->___builder_0;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)44), NULL);
			}

IL_0031_1:
			{
				// SerializeValue(obj);
				RuntimeObject* L_12 = V_2;
				Serializer_SerializeValue_m4FBEC42A2539CE9F469367033AAFEFEAB2FA7551(__this, L_12, NULL);
				// first = false;
				V_0 = (bool)0;
			}

IL_003a_1:
			{
				// foreach (object obj in anArray) {
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m90926F2D28A47048AFE41C71647E1B38CB24864A (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t* L_0 = __this->___builder_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_2 = ___0_str;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		// foreach (var c in charArray) {
		V_0 = L_3;
		V_1 = 0;
		goto IL_0127;
	}

IL_001c:
	{
		// foreach (var c in charArray) {
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00ca;
			}
			case 2:
			{
				goto IL_00a4;
			}
			case 3:
			{
				goto IL_00dd;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00b7;
			}
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00dd;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t* L_11 = __this->___builder_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		// break;
		goto IL_0123;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t* L_13 = __this->___builder_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		// break;
		goto IL_0123;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t* L_15 = __this->___builder_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		// break;
		goto IL_0123;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t* L_17 = __this->___builder_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		// break;
		goto IL_0123;
	}

IL_00a4:
	{
		// builder.Append("\\n");
		StringBuilder_t* L_19 = __this->___builder_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		// break;
		goto IL_0123;
	}

IL_00b7:
	{
		// builder.Append("\\r");
		StringBuilder_t* L_21 = __this->___builder_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		// break;
		goto IL_0123;
	}

IL_00ca:
	{
		// builder.Append("\\t");
		StringBuilder_t* L_23 = __this->___builder_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		// break;
		goto IL_0123;
	}

IL_00dd:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052(L_25, NULL);
		V_3 = L_26;
		// if ((codepoint >= 32) && (codepoint <= 126)) {
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)32))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)126))))
		{
			goto IL_00fd;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t* L_29 = __this->___builder_0;
		Il2CppChar L_30 = V_2;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, L_30, NULL);
		goto IL_0123;
	}

IL_00fd:
	{
		// builder.Append("\\u" + Convert.ToString(codepoint, 16).PadLeft(4, '0'));
		StringBuilder_t* L_32 = __this->___builder_0;
		int32_t L_33 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(L_33, ((int32_t)16), NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_34, 4, ((int32_t)48), NULL);
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_35, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_36, NULL);
	}

IL_0123:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0127:
	{
		// foreach (var c in charArray) {
		int32_t L_39 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t* L_41 = __this->___builder_0;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_41, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Void AmplitudeNS.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m512C9EBB20ED31EBC8692C238E9292C2FE996BFF (Serializer_tF120AF52036BF13BF24F652B8CE55B8FE2868328* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float) {
		RuntimeObject* L_0 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// builder.Append(((float) value).ToString(CultureInfo.InvariantCulture));
		StringBuilder_t* L_1 = __this->___builder_0;
		RuntimeObject* L_2 = ___0_value;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_4;
		L_4 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_0), L_3, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_4, NULL);
		return;
	}

IL_0028:
	{
		// } else if (value is int
		//     || value is uint
		//     || value is long
		//     || value is sbyte
		//     || value is byte
		//     || value is short
		//     || value is ushort
		//     || value is ulong) {
		RuntimeObject* L_6 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_7 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_8 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_9 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_10 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_11 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_12 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_007b;
		}
	}

IL_0068:
	{
		// builder.Append(value.ToString());
		StringBuilder_t* L_14 = __this->___builder_0;
		RuntimeObject* L_15 = ___0_value;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		return;
	}

IL_007b:
	{
		// } else if (value is double
		//     || value is decimal) {
		RuntimeObject* L_18 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_18, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_19 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_19, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_00ab;
		}
	}

IL_008b:
	{
		// builder.Append(Convert.ToDouble(value).ToString(CultureInfo.InvariantCulture));
		StringBuilder_t* L_20 = __this->___builder_0;
		RuntimeObject* L_21 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_21, NULL);
		V_1 = L_22;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_23;
		L_23 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_24;
		L_24 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357((&V_1), L_23, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, L_24, NULL);
		return;
	}

IL_00ab:
	{
		// SerializeString(value.ToString());
		RuntimeObject* L_26 = ___0_value;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		Serializer_SerializeString_m90926F2D28A47048AFE41C71647E1B38CB24864A(__this, L_27, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___0_f, float ___1_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___0_f;
		float L_1 = ___1_p;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054(((double)L_0), ((double)L_1), NULL);
		V_0 = ((float)L_2);
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
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

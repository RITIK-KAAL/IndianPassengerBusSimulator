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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// ProBuilder2.Common.pb_ObjectPool`1<System.Object>
struct pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F;
// ProBuilder2.Common.pb_Tuple`2<System.Object,System.Int32>
struct pb_Tuple_2_tA15605C3489D5EF8363E61744E70B732383817D1;
// ProBuilder2.Common.pb_Tuple`2<System.Object,System.Object>
struct pb_Tuple_2_t23866E438B76222D7D7A1F01529011CF59726DD8;
// ProBuilder2.Common.pb_Tuple`2<System.Single,UnityEngine.Vector2>
struct pb_Tuple_2_tD393BD4AAA8BDCC50F2B5E8BA1D5604957B671A4;
// ProBuilder2.Common.pb_Tuple`3<System.Object,System.Object,System.Object>
struct pb_Tuple_3_tE310BA3B3FCAEE2143CEE65826E1EF891C7C0957;
// ProBuilder2.Common.pb_Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct pb_Tuple_4_tD13B42C2F5DD33CDABDD268773BDF7AEA59E2801;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Collections.Queue
struct Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7E2946B0195FA422A460E9E13AF65BC7E50C33BE;
IL2CPP_EXTERN_C String_t* _stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder2.Common.pb_ObjectPool`1<System.Object>
struct pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F  : public RuntimeObject
{
	// System.Int32 ProBuilder2.Common.pb_ObjectPool`1::desiredSize
	int32_t ___desiredSize_0;
	// System.Func`1<T> ProBuilder2.Common.pb_ObjectPool`1::constructor
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___constructor_1;
	// System.Action`1<T> ProBuilder2.Common.pb_ObjectPool`1::destructor
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___destructor_2;
	// System.Collections.Queue ProBuilder2.Common.pb_ObjectPool`1::pool
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* ___pool_3;
};

// ProBuilder2.Common.pb_Tuple`2<System.Object,System.Int32>
struct pb_Tuple_2_tA15605C3489D5EF8363E61744E70B732383817D1  : public RuntimeObject
{
	// T1 ProBuilder2.Common.pb_Tuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 ProBuilder2.Common.pb_Tuple`2::Item2
	int32_t ___Item2_1;
};

// ProBuilder2.Common.pb_Tuple`2<System.Object,System.Object>
struct pb_Tuple_2_t23866E438B76222D7D7A1F01529011CF59726DD8  : public RuntimeObject
{
	// T1 ProBuilder2.Common.pb_Tuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 ProBuilder2.Common.pb_Tuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// ProBuilder2.Common.pb_Tuple`3<System.Object,System.Object,System.Object>
struct pb_Tuple_3_tE310BA3B3FCAEE2143CEE65826E1EF891C7C0957  : public RuntimeObject
{
	// T1 ProBuilder2.Common.pb_Tuple`3::Item1
	RuntimeObject* ___Item1_0;
	// T2 ProBuilder2.Common.pb_Tuple`3::Item2
	RuntimeObject* ___Item2_1;
	// T3 ProBuilder2.Common.pb_Tuple`3::Item3
	RuntimeObject* ___Item3_2;
};

// ProBuilder2.Common.pb_Tuple`4<System.Object,System.Object,System.Object,System.Object>
struct pb_Tuple_4_tD13B42C2F5DD33CDABDD268773BDF7AEA59E2801  : public RuntimeObject
{
	// T1 ProBuilder2.Common.pb_Tuple`4::Item1
	RuntimeObject* ___Item1_0;
	// T2 ProBuilder2.Common.pb_Tuple`4::Item2
	RuntimeObject* ___Item2_1;
	// T3 ProBuilder2.Common.pb_Tuple`4::Item3
	RuntimeObject* ___Item3_2;
	// T4 ProBuilder2.Common.pb_Tuple`4::Item4
	RuntimeObject* ___Item4_3;
};

// System.Collections.Queue
struct Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC  : public RuntimeObject
{
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject* ____syncRoot_6;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// ProBuilder2.Common.pb_Tuple`2<System.Single,UnityEngine.Vector2>
struct pb_Tuple_2_tD393BD4AAA8BDCC50F2B5E8BA1D5604957B671A4  : public RuntimeObject
{
	// T1 ProBuilder2.Common.pb_Tuple`2::Item1
	float ___Item1_0;
	// T2 ProBuilder2.Common.pb_Tuple`2::Item2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Item2_1;
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// ProBuilder2.Common.pb_ObjectPool`1<System.Object>

// ProBuilder2.Common.pb_ObjectPool`1<System.Object>

// ProBuilder2.Common.pb_Tuple`2<System.Object,System.Int32>

// ProBuilder2.Common.pb_Tuple`2<System.Object,System.Int32>

// ProBuilder2.Common.pb_Tuple`2<System.Object,System.Object>

// ProBuilder2.Common.pb_Tuple`2<System.Object,System.Object>

// ProBuilder2.Common.pb_Tuple`3<System.Object,System.Object,System.Object>

// ProBuilder2.Common.pb_Tuple`3<System.Object,System.Object,System.Object>

// ProBuilder2.Common.pb_Tuple`4<System.Object,System.Object,System.Object,System.Object>

// ProBuilder2.Common.pb_Tuple`4<System.Object,System.Object,System.Object,System.Object>

// System.Collections.Queue

// System.Collections.Queue

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// System.Void

// System.Void

// ProBuilder2.Common.pb_Tuple`2<System.Single,UnityEngine.Vector2>

// ProBuilder2.Common.pb_Tuple`2<System.Single,UnityEngine.Vector2>

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.MulticastDelegate

// System.MulticastDelegate

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`1<System.Object>

// System.Func`1<System.Object>
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



// System.Void System.Collections.Queue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_mFCCBE2B4FFBD3F33D6FBE2D010C9A0CA976784CB (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProBuilder2.Common.pb_ObjectPool`1<System.Object>::.ctor(System.Int32,System.Int32,System.Func`1<T>,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_ObjectPool_1__ctor_m11E21D887754219811CE34FA955C8E71EFBEB7D2_gshared (pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F* __this, int32_t ___0_initialSize, int32_t ___1_desiredSize, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___2_constructor, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_destructor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F* G_B2_0 = NULL;
	pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F* G_B1_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F* G_B3_1 = NULL;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B6_0 = NULL;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B5_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* G_B7_1 = NULL;
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_0 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)il2cpp_codegen_object_new(Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue__ctor_mFCCBE2B4FFBD3F33D6FBE2D010C9A0CA976784CB(L_0, NULL);
		__this->___pool_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pool_3), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = ___2_constructor;
		__this->___constructor_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constructor_1), (void*)L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___3_destructor;
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0021;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___3_destructor;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_0021:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_4);
		((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_4, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		NullCheck(G_B3_1);
		G_B3_1->___destructor_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___destructor_2), (void*)G_B3_0);
		int32_t L_5 = ___1_desiredSize;
		__this->___desiredSize_0 = L_5;
		V_0 = 0;
		goto IL_0061;
	}

IL_003d:
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_6 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)__this->___pool_3;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_7 = ___2_constructor;
		G_B5_0 = L_6;
		if (L_7)
		{
			G_B6_0 = L_6;
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B7_0 = L_8;
		G_B7_1 = G_B5_0;
		goto IL_0053;
	}

IL_004d:
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_9 = ___2_constructor;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = L_10;
		G_B7_1 = G_B6_0;
	}

IL_0053:
	{
		NullCheck(G_B7_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(15 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, G_B7_1, G_B7_0);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0061:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___0_initialSize;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___1_desiredSize;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_003d;
		}
	}

IL_0069:
	{
		return;
	}
}
// T ProBuilder2.Common.pb_ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* pb_ObjectPool_1_Get_m945F198B8076DB18046C55CDB2EADB08A9F4C231_gshared (pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_0 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)__this->___pool_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_0);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_1;
		G_B3_0 = L_2;
		goto IL_0029;
	}

IL_0019:
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_3 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)__this->___pool_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object System.Collections.Queue::Dequeue() */, L_3);
		G_B3_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
	}

IL_0029:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_7 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)__this->___constructor_1;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_8 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)__this->___constructor_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		G_B7_0 = L_9;
		goto IL_0052;
	}

IL_004d:
	{
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B7_0 = L_10;
	}

IL_0052:
	{
		V_0 = G_B7_0;
	}

IL_0053:
	{
		RuntimeObject* L_11 = V_0;
		return L_11;
	}
}
// System.Void ProBuilder2.Common.pb_ObjectPool`1<System.Object>::Put(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_ObjectPool_1_Put_m42F2C0FE5083C3146E43AFFB60F5A53C31AF00FA_gshared (pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_0 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)__this->___pool_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_0);
		int32_t L_2 = (int32_t)__this->___desiredSize_0;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_3 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)__this->___pool_3;
		RuntimeObject* L_4 = ___0_obj;
		NullCheck(L_3);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(15 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_3, L_4);
		return;
	}

IL_0025:
	{
		RuntimeObject* L_5 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_5, NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_ObjectPool`1<System.Object>::Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_ObjectPool_1_Empty_m6CE986BF2066DF437B74CD4CDFA552798071BD17_gshared (pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_0 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)__this->___pool_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_004e;
	}

IL_0010:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___destructor_2;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)__this->___destructor_2;
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_4 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)__this->___pool_3;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object System.Collections.Queue::Dequeue() */, L_4);
		NullCheck(L_3);
		((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 6))), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		goto IL_004a;
	}

IL_0035:
	{
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_6 = (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC*)__this->___pool_3;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object System.Collections.Queue::Dequeue() */, L_6);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 6))), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_004a:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_004e:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void ProBuilder2.Common.pb_ObjectPool`1<System.Object>::DestroyObject(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_ObjectPool_1_DestroyObject_m2933479EADC9ED34717DBC5C30DBF466E433D8B3_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_ObjectPool`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_ObjectPool_1_OnDestroy_m97F75861F2710B1D60C48839A3503738F26F2E78_gshared (pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (pb_ObjectPool_1_tF39174856DB1120F307612C7ADF958C4611BE08F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
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
// System.Void ProBuilder2.Common.pb_Tuple`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_2__ctor_m76BD1947BBA0172CA0DEE134D3325DA22604D2FD_gshared (pb_Tuple_2_tA15605C3489D5EF8363E61744E70B732383817D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Tuple`2<System.Object,System.Int32>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_2__ctor_mF203E486CB4C97F6BAB65A94501E03AC6BE86C78_gshared (pb_Tuple_2_tA15605C3489D5EF8363E61744E70B732383817D1* __this, RuntimeObject* ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_item1;
		__this->___Item1_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1_0), (void*)L_0);
		int32_t L_1 = ___1_item2;
		__this->___Item2_1 = L_1;
		return;
	}
}
// System.String ProBuilder2.Common.pb_Tuple`2<System.Object,System.Int32>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_Tuple_2_ToString_mBB04AE0E5B8116B707B9BA9E4B3D1174C9B6CD4F_gshared (pb_Tuple_2_tA15605C3489D5EF8363E61744E70B732383817D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject** L_0 = (RuntimeObject**)(&__this->___Item1_0);
		NullCheck((*L_0));
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_0));
		int32_t* L_2 = (int32_t*)(&__this->___Item2_1);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, (RuntimeObject*)L_1, (RuntimeObject*)L_3, NULL);
		return L_4;
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
// System.Void ProBuilder2.Common.pb_Tuple`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_2__ctor_mAB7293B81F32DB8F4C23911156C6D2966BD227D3_gshared (pb_Tuple_2_t23866E438B76222D7D7A1F01529011CF59726DD8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_2__ctor_m96ECC762086EEF3A9CA88D9D28E177058107E20D_gshared (pb_Tuple_2_t23866E438B76222D7D7A1F01529011CF59726DD8* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_item1;
		__this->___Item1_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_item2;
		__this->___Item2_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item2_1), (void*)L_1);
		return;
	}
}
// System.String ProBuilder2.Common.pb_Tuple`2<System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_Tuple_2_ToString_m6CB49F950A7384084F30140387D8E44DE7FF393A_gshared (pb_Tuple_2_t23866E438B76222D7D7A1F01529011CF59726DD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject** L_0 = (RuntimeObject**)(&__this->___Item1_0);
		NullCheck((*L_0));
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_0));
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___Item2_1);
		NullCheck((*L_2));
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_2));
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, (RuntimeObject*)L_1, (RuntimeObject*)L_3, NULL);
		return L_4;
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
// System.Void ProBuilder2.Common.pb_Tuple`2<System.Single,UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_2__ctor_mF582979816580C9A49690DA715229D85B9D245F3_gshared (pb_Tuple_2_tD393BD4AAA8BDCC50F2B5E8BA1D5604957B671A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Tuple`2<System.Single,UnityEngine.Vector2>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_2__ctor_m30ED45489A4C772008FE929FA3A912F63CB915CE_gshared (pb_Tuple_2_tD393BD4AAA8BDCC50F2B5E8BA1D5604957B671A4* __this, float ___0_item1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_item2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		float L_0 = ___0_item1;
		__this->___Item1_0 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_item2;
		__this->___Item2_1 = L_1;
		return;
	}
}
// System.String ProBuilder2.Common.pb_Tuple`2<System.Single,UnityEngine.Vector2>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_Tuple_2_ToString_mCDF174C4951EAFBB63CF690A0F64FEE0B28C351E_gshared (pb_Tuple_2_tD393BD4AAA8BDCC50F2B5E8BA1D5604957B671A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		float* L_0 = (float*)(&__this->___Item1_0);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___Item2_1);
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, (RuntimeObject*)L_1, (RuntimeObject*)L_3, NULL);
		return L_4;
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
// System.Void ProBuilder2.Common.pb_Tuple`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_3__ctor_m84D188084271337C81FAB0DCF356691D0783FBC1_gshared (pb_Tuple_3_tE310BA3B3FCAEE2143CEE65826E1EF891C7C0957* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Tuple`3<System.Object,System.Object,System.Object>::.ctor(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_3__ctor_m67F98E4DBF02BB1CE9FE048A3C55AEBB7EA41FA0_gshared (pb_Tuple_3_tE310BA3B3FCAEE2143CEE65826E1EF891C7C0957* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_item1;
		__this->___Item1_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_item2;
		__this->___Item2_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item2_1), (void*)L_1);
		RuntimeObject* L_2 = ___2_item3;
		__this->___Item3_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item3_2), (void*)L_2);
		return;
	}
}
// System.String ProBuilder2.Common.pb_Tuple`3<System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_Tuple_3_ToString_m5A16C57303F53767575AE1A2881E4C7ACDE04E8C_gshared (pb_Tuple_3_tE310BA3B3FCAEE2143CEE65826E1EF891C7C0957* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject** L_0 = (RuntimeObject**)(&__this->___Item1_0);
		NullCheck((*L_0));
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_0));
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___Item2_1);
		NullCheck((*L_2));
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_2));
		RuntimeObject** L_4 = (RuntimeObject**)(&__this->___Item3_2);
		NullCheck((*L_4));
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_4));
		String_t* L_6;
		L_6 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8, (RuntimeObject*)L_1, (RuntimeObject*)L_3, (RuntimeObject*)L_5, NULL);
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
// System.Void ProBuilder2.Common.pb_Tuple`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_4__ctor_m64C76624416EE6688F867603B3E7E78802AFD8C2_gshared (pb_Tuple_4_tD13B42C2F5DD33CDABDD268773BDF7AEA59E2801* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// System.Void ProBuilder2.Common.pb_Tuple`4<System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pb_Tuple_4__ctor_m13A1CA9F1275D9D2128DAECB2DAEAF81509F1282_gshared (pb_Tuple_4_tD13B42C2F5DD33CDABDD268773BDF7AEA59E2801* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, RuntimeObject* ___2_item3, RuntimeObject* ___3_item4, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_item1;
		__this->___Item1_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item1_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_item2;
		__this->___Item2_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item2_1), (void*)L_1);
		RuntimeObject* L_2 = ___2_item3;
		__this->___Item3_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item3_2), (void*)L_2);
		RuntimeObject* L_3 = ___3_item4;
		__this->___Item4_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Item4_3), (void*)L_3);
		return;
	}
}
// System.String ProBuilder2.Common.pb_Tuple`4<System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* pb_Tuple_4_ToString_m810251FA24DDD6597A5995CD52ED3F4A817CE555_gshared (pb_Tuple_4_tD13B42C2F5DD33CDABDD268773BDF7AEA59E2801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E2946B0195FA422A460E9E13AF65BC7E50C33BE);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___Item1_0);
		NullCheck((*L_2));
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_2));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->___Item2_1);
		NullCheck((*L_5));
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_5));
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		RuntimeObject** L_8 = (RuntimeObject**)(&__this->___Item3_2);
		NullCheck((*L_8));
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_8));
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		RuntimeObject** L_11 = (RuntimeObject**)(&__this->___Item4_3);
		NullCheck((*L_11));
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*L_11));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral7E2946B0195FA422A460E9E13AF65BC7E50C33BE, L_13, NULL);
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

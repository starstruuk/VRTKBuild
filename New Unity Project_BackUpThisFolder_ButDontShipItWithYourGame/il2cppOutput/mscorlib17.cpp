﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "icalls/mscorlib/System/TypedReference.h"
#include "icalls/mscorlib/System/ValueType.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_tC3A1720B7D3D850D5C23BE8E366D821EBA923D89;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.ArraySpec
struct ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator>
struct Dictionary_2_t61B96E9258C1E296057BCD8C4D2015846D2BB8F3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.ModifierSpec>
struct List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.TypeIdentifier>
struct List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166;
// System.Collections.Generic.List`1<System.TypeSpec>
struct List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>
struct Func_2_t13827C9725E0D12567E029E178981FB7D0E13430;
// System.Func`4<System.Object,System.Object,System.Boolean,System.Object>
struct Func_4_tBDBA893DF2D6BD3ADD95FBC243F607CECF2077B0;
// System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>
struct Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.SortVersion
struct SortVersion_tE7080CE09A0B8CE226F8046C0D1374DD0A0CAE71;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IConvertible
struct IConvertible_tB52671A602A64FCCFD27EA5817E2A6C2B693D380;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.FileNotFoundException
struct FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.InputRecord
struct InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MissingMemberException
struct MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD;
// System.ModifierSpec
struct ModifierSpec_t0A5286DDFBD682F1E1D8AEBE5FD9D34EAB4CF1E5;
// System.ModifierSpec[]
struct ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7;
// System.MonoTypeInfo
struct MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5;
// System.PointerSpec
struct PointerSpec_tBCE1666DC24EC6E4E5376FEC214499984EC26892;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
// System.Reflection.InvalidFilterCriteriaException
struct InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Missing
struct Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7;
// System.Reflection.Module
struct Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_tF21A59967629968D0BE5D0DAF677662824E9629D;
// System.Reflection.RuntimeFieldInfo
struct RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD;
// System.Reflection.TypeFilter
struct TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_tC3280D64D358F47EA4DAF1A65609BA0FC081888A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationException
struct SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.RuntimeType
struct RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Type
struct Type_t;
// System.TypeIdentifier
struct TypeIdentifier_tEF8C0B5CA8B33CD2A732C822D0B9BD62B8DA2F12;
// System.TypeIdentifier[]
struct TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766;
// System.TypeIdentifiers/Display
struct Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5;
// System.TypeInitializationException
struct TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE;
// System.TypeLoadException
struct TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1;
// System.TypeName
struct TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513;
// System.TypeNames/ATypeName
struct ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421;
// System.TypeSpec
struct TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F;
// System.TypeSpec[]
struct TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE;
// System.UnitySerializationHolder
struct UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC;
// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;
// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t953AB92956013BD3ED7E260FEC4944E603008B42;
// System.__ComObject
struct __ComObject_t7C4C78B18A827C344A9826ECC7FCC40B7F6FD77C;
// System.__Filters
struct __Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34;
// System.__Il2CppComDelegate
struct __Il2CppComDelegate_t0A30496F74225C39A0CF7FADB94934C0536120FD;
// System.__Il2CppComObject
struct Il2CppComObject;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeParse_t657E38D9FF27E5FD6A33E23887031A86248D97D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodBase_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModifierSpec_t0A5286DDFBD682F1E1D8AEBE5FD9D34EAB4CF1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerSpec_tBCE1666DC24EC6E4E5376FEC214499984EC26892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04C3F2AE89DF36B5CF6D0051651235DA171DFEE7;
IL2CPP_EXTERN_C String_t* _stringLiteral089B0BA8B1E0758ECEBCD291E88238CE548D665D;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8A3AD980EC179856012B7EECF4327E99CD44CD;
IL2CPP_EXTERN_C String_t* _stringLiteral10A53546C08F0C2B88527F528FDD3D15B5959B33;
IL2CPP_EXTERN_C String_t* _stringLiteral140F86AAE51AB9E1CDA9B4254FE98A74EB54C1A1;
IL2CPP_EXTERN_C String_t* _stringLiteral163313709722AD7AEFE1D71EECEA06F9FCDFEC2D;
IL2CPP_EXTERN_C String_t* _stringLiteral1653AF59DA2921FD4F1494A7DAD6B7D7FC320C47;
IL2CPP_EXTERN_C String_t* _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8;
IL2CPP_EXTERN_C String_t* _stringLiteral1B6453892473A467D07372D45EB05ABC2031647A;
IL2CPP_EXTERN_C String_t* _stringLiteral1CBD801F805A5FBD3AD0F5E193C36FE40C2BB005;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5FC82CCB72553A236B455041C2CC6D97965017;
IL2CPP_EXTERN_C String_t* _stringLiteral1EBF18F72F75A7724D91ED7167E98A93A6497F6E;
IL2CPP_EXTERN_C String_t* _stringLiteral20FED387605751EEA20B8EDAA265186F0E25C9DD;
IL2CPP_EXTERN_C String_t* _stringLiteral24EC69BAF51BF30190B6C95CBC8DA59798F5F532;
IL2CPP_EXTERN_C String_t* _stringLiteral27BED7455215AA8A8EA1D7944A4975BAA72AA6B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2CF6DC09435066749111F8BD9F5270166FE06F3F;
IL2CPP_EXTERN_C String_t* _stringLiteral2DBCA2328A7A87F4A438EE5BD7F4CE528F0DCD14;
IL2CPP_EXTERN_C String_t* _stringLiteral33370356128AA3B1263898B5524D4D405A01CA5E;
IL2CPP_EXTERN_C String_t* _stringLiteral3886FAAB186277EC9F7FEBBB72CE301AC5E2773C;
IL2CPP_EXTERN_C String_t* _stringLiteral39633794BA5C406D0D71A70F2C47493DB1E986D2;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4D966BBA6CE40E91BAFB95088822186ECB287B;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC14F805C52F5EF488C806DE2DB5C83C5496346;
IL2CPP_EXTERN_C String_t* _stringLiteral3D708CB7F76AF5A68201B998794CB435ACA1B0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral3F90E4D12E77695269D01EC8AAEF48EEF6C79412;
IL2CPP_EXTERN_C String_t* _stringLiteral40CC7C91CEDB85B93D4EACD5B58CD3EED8F78995;
IL2CPP_EXTERN_C String_t* _stringLiteral48E3C7922E67FC100CF2B7A133A26ADCFB2044FE;
IL2CPP_EXTERN_C String_t* _stringLiteral4BECD3F9C90F8D7A184FB632D4DEDA9B5481791D;
IL2CPP_EXTERN_C String_t* _stringLiteral4D7F7C774CADD02AE1032A3CB224E5F17003B701;
IL2CPP_EXTERN_C String_t* _stringLiteral571BFF034952AEEE7E64D932D2A2A51072118F24;
IL2CPP_EXTERN_C String_t* _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889;
IL2CPP_EXTERN_C String_t* _stringLiteral5A6DF720540C20D95D530D3FD6885511223D5D20;
IL2CPP_EXTERN_C String_t* _stringLiteral61E4C2772989AB31A7C2799E5C64D7030B05229C;
IL2CPP_EXTERN_C String_t* _stringLiteral673CD30ADECC250EA8B762ED51852F93E288BB89;
IL2CPP_EXTERN_C String_t* _stringLiteral6769C7D05AE4784134EB90FB28856F9D7D5D581A;
IL2CPP_EXTERN_C String_t* _stringLiteral68EB0192F01DDAA7B81A607B464BC951839404CE;
IL2CPP_EXTERN_C String_t* _stringLiteral6972AB6A4112783DFDFEE444146EB3CF741CCD13;
IL2CPP_EXTERN_C String_t* _stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C;
IL2CPP_EXTERN_C String_t* _stringLiteral69A99906F5A06EA1BDBFC02E6132D35DE781D3F1;
IL2CPP_EXTERN_C String_t* _stringLiteral6BF0FD54E37B109D934887898BCA5680FCDF70C5;
IL2CPP_EXTERN_C String_t* _stringLiteral70B4BB2684C3F8969E2FE9E14B470906FD4CF3C6;
IL2CPP_EXTERN_C String_t* _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1F754EE65E8FC64F63B1262838D9592369E1F7;
IL2CPP_EXTERN_C String_t* _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276;
IL2CPP_EXTERN_C String_t* _stringLiteral80754AF91BFB6D1073585B046FE0A474CE868509;
IL2CPP_EXTERN_C String_t* _stringLiteral8110CD10A3C3177EDC45160F406A8FFD951DFD52;
IL2CPP_EXTERN_C String_t* _stringLiteral853ABCEF8465C8AE084B7B61A1A26F39EDB717B5;
IL2CPP_EXTERN_C String_t* _stringLiteral868E70DE0948AAB2E5C3FEF19E1D3C1808994229;
IL2CPP_EXTERN_C String_t* _stringLiteral8B1AF543422B5976D44B9C740EF3CA472E5EF490;
IL2CPP_EXTERN_C String_t* _stringLiteral9037B62BA73A6A3E99186380F4A8BEDFA5D40E1C;
IL2CPP_EXTERN_C String_t* _stringLiteral9B7256A537E36FBE0EFCE164ED58060E7D8F006C;
IL2CPP_EXTERN_C String_t* _stringLiteral9E430F17EB96D796BF49C46584B98C497F8AE559;
IL2CPP_EXTERN_C String_t* _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06;
IL2CPP_EXTERN_C String_t* _stringLiteralA466EFF47B9A04F03416534E8768A5ED5BC7AFBC;
IL2CPP_EXTERN_C String_t* _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67;
IL2CPP_EXTERN_C String_t* _stringLiteralA9C97EF8AFEE4B1DBDBC6ACD84D8BB932359DE53;
IL2CPP_EXTERN_C String_t* _stringLiteralAB431AD8173852C4469962DCA9E7535486570D54;
IL2CPP_EXTERN_C String_t* _stringLiteralAC223DCCCDBCF3FC5FA4ADAE3AB814451427CD3F;
IL2CPP_EXTERN_C String_t* _stringLiteralAD69AC24021D712B02ED72DF3DD0A70E1B01A01B;
IL2CPP_EXTERN_C String_t* _stringLiteralB35BB38DF9605E4C5858316B7853A16E42EA6997;
IL2CPP_EXTERN_C String_t* _stringLiteralB3A8637874FFB852B3B8942459614113859FEE0F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4E34B56A9437FD11B5764C22789947A48B35EA5;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8;
IL2CPP_EXTERN_C String_t* _stringLiteralC10B7D725CE2223CDFE7B945291104E7C0ACE1D9;
IL2CPP_EXTERN_C String_t* _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97;
IL2CPP_EXTERN_C String_t* _stringLiteralC85C60695430CEA397A21E8BE862BFEA63409E51;
IL2CPP_EXTERN_C String_t* _stringLiteralCAADDB127D0DC4313E5704D5F010772D3AD766ED;
IL2CPP_EXTERN_C String_t* _stringLiteralD2F0257C42607F2773F4B8AAB0C017A3B8949322;
IL2CPP_EXTERN_C String_t* _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD41884932BDB9E7E6E2E6DB3F0FFD3968A302E6B;
IL2CPP_EXTERN_C String_t* _stringLiteralD98E4C3E01D3ED0C6FD51F3FF6F8A3C9CA9223C3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0;
IL2CPP_EXTERN_C String_t* _stringLiteralDF7A2F270E0369172CE2F27B621403FE9FEBEF74;
IL2CPP_EXTERN_C String_t* _stringLiteralE31F38791120074366DE542990E5E66B4AEB3A22;
IL2CPP_EXTERN_C String_t* _stringLiteralE364CE10A99220B5DFCBF4821A817898A97E5BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralE52C610014830CF451FCD5BFE6176FFC7E9E5500;
IL2CPP_EXTERN_C String_t* _stringLiteralE5559C91F3F57F398B8B547CA356C67FFA1F6497;
IL2CPP_EXTERN_C String_t* _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11;
IL2CPP_EXTERN_C String_t* _stringLiteralE71E7BC3FE9E9F3C39E46B53FFFF0C83D9CC9A36;
IL2CPP_EXTERN_C String_t* _stringLiteralE8C2E73741ABBBE9D320E65848D6DB0BCF7D63A5;
IL2CPP_EXTERN_C String_t* _stringLiteralEAE79D6E0CFF76FC7A3BB78723690B0B2367F849;
IL2CPP_EXTERN_C String_t* _stringLiteralEF78999D7670EEBB7B9C4D640E261383DD2C6094;
IL2CPP_EXTERN_C String_t* _stringLiteralEFCF610D1253173FB3E0DF195C1F8D2667415453;
IL2CPP_EXTERN_C String_t* _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5;
IL2CPP_EXTERN_C String_t* _stringLiteralF1C632B1F91BC26A3DBD8A50A7FCDF474F316978;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E5BAF5ECC3589631088C40CBDD43061976ED8F;
IL2CPP_EXTERN_C String_t* _stringLiteralF221811315A6A4EB975642C56E41ECFB1B78BF7A;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8B27A553F27F158C5E4C81F3AA90D26451F922;
IL2CPP_EXTERN_C String_t* _stringLiteralFAA5E8C43BB2D5850732EFD9442E467318BFD9C8;
IL2CPP_EXTERN_C String_t* _stringLiteralFE66537A952957258311139D35B0945C0FC518DC;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B5D4976D2C83F3DB387137CD7DE096E0C28370B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9FE451117A551A3AD97A0FC27C1C159B551B25F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5FA83E49042D278C984097B83622E3165E4564AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD91BF5A0EE3F48F18729E9A081A22223CBA9134E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1FE262A1143A9C0B744CAE59FDF00A529A47DA7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mABF1CE6A366A00FB242CDDC13D80881F14052780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m18E0D4D4C27DA4526F57145018F8C5B7D4555786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_4_Invoke_m95D3A234FD84599FDA35F785ACE24B58A5103D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m12E0FC5DF0E1CB81E7DEADBBDD311E3E1AFC2DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m191DF682AFC83E635052DB3C303E514D6D7233A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEA738D5941352BC4540C28F701A4BF01E2DF7914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2E4A41A21C3DEA2E56F3BAAC22CAC54ADDAAE89A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7F1A981C4F56927EB6D80776859EFEB2A949645F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m21E88645DC77FDCB68ED0EA3602951A2609C963C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA97DC4CD260A1FD5F8FD67E06EE8F27E5C03CF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAF11022CD0FF8181D72047FFC57B48590F17FFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m516B184735436F6F6363D5BDBC6469AAA19A10A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_mA248D7D785682F31CDF02FDC1FAB3173EE1B1E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeLoadException_GetObjectData_m5198722D9966C5F04FD07467B5EE5AB84D86E499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeLoadException__ctor_m7D81F0BF798D436FF6ECF3F4B48F206DB8AB1293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSpec_BoundCheck_m5CF5E6F2632D8D4D205DC26F6666BE9EA7D874FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSpec_Parse_m7DDF2C8D81E80856BA9EEFDB84421AE2F81B58C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedReference_Equals_m167F7EDD4393DE114882916B753AC2D23A3840EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedReference_SetTypedReference_mCA19C65317890F40F1D808976B785A5368DFE411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt16_CompareTo_m91AEACDAA81D12A2A8D868938F797B112330EC44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt16_System_IConvertible_ToDateTime_m7AD170006FECE0BAC29179FFE72D7AC1B0D0C735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt32_CompareTo_mA6BFE8D9033149D2FEF46526E251A3CDEB1889EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt32_System_IConvertible_ToDateTime_m450F7E1864FB6A396E9009116F8301B972DAE724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt64_CompareTo_mB5A28DD05266BC32BD6FD24A6659B0464FFA8950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt64_System_IConvertible_ToDateTime_m1DE2B7B00676B061B66F18FCCC7CBC5D848B0EBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_mB6B1C508A6E9BFD526F23A38634C1E703595B733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnSafeCharBuffer_AppendString_m1E2967E285FC06FDE141B90EF186745D5D2814FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySerializationHolder_GetObjectData_m7562EAA093BA2732DED6A3D94E676EEAAC1D8310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySerializationHolder_GetRealObject_mB8BD0D19FE747C6B7F739F9686AA52CBA9E6FA9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySerializationHolder__ctor_m2DBB21E6B4107323DB20C23AD6D9290F50BF2B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version_CompareTo_m604CF8F6AFAB12D2F64E223B72F518528A3F85A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version_Parse_mAF74E042711BB851C4659BF71E09B9E79A9AC848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version__ctor_mC2880C190E158700B0C114D4CC921C0D240DAA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version_op_LessThanOrEqual_m6D2834974A9C75C04A7B303A9F1E57296E91A6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version_op_LessThan_mEE4DE91646EDC7245FD486D1D3E2322B651E7028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_GetObjectData_m1DBED399F8C4A13F8C764A2AADFC5B6EBA5643D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference__ctor_m9740BD0F2AEC959BF2210503D085723C6C1E09DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsConsoleDriver_ReadKey_mDE4EDC7320EFF2B8D0B888A203D0C96531855568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* __ComObject__ctor_m2A98911F497D95AC1C931674CC745F002A36C878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* __Filters_FilterAttribute_mBF9879ECFB908212C56CAE0B42C9E29BFCB347C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* __Filters_FilterIgnoreCase_m883976C13C53B21BE3430DE51D4317CBCF89F53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* __Filters_FilterName_m768C2766720890EE1D07554E3433C0F828D427DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MethodBase_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ATypeName_Equals_m7D88938E443BA9FAEA8615EEFBAE8E23B1BE6BD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ATypeName_Equals_mCADC0D866B2E78D4BA563475D528D45DA5AA92FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowStub_ThrowNotSupportedException_mA248D7D785682F31CDF02FDC1FAB3173EE1B1E19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeIdentifiers_FromDisplay_m08FB8BE03D80603F9A030774E218310DC96693CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeInitializationException_GetObjectData_m61A4C223CD68BB6170CD4E5593358B6A2CD0D1AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeInitializationException__ctor_m392481761B076335738D194514B219AC5A6D8A7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeInitializationException__ctor_mAF515ADEF54825D8F19E8773B04D49CA1EEAA4A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeInitializationException__ctor_mECB421CF0582FE4EADA4DD7B5687CA64635D71B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeInitializationException_get_TypeName_mB1D7D9D4E2400579F85B80BA0B012504AB15A5A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeLoadException_GetObjectData_m5198722D9966C5F04FD07467B5EE5AB84D86E499_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeLoadException_SetMessageField_m23CD2003031C6BF6A4AD01D4FFF2DC786DA580E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeLoadException__ctor_m7D81F0BF798D436FF6ECF3F4B48F206DB8AB1293_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeLoadException__ctor_mEF05D23A192E0B9BFAAA97A77A0FC1BCBE7B4355_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_AddModifier_m082500BAE4A512BA0E84CC85A71F4A67DA885909_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_BoundCheck_m5CF5E6F2632D8D4D205DC26F6666BE9EA7D874FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_GetDisplayFullName_m4D6D7AED6CBFC324310480BA07461682A09822B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_GetModifierString_m879659900335844914FDD6BEB1B373531DC990FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_Parse_m7DDF2C8D81E80856BA9EEFDB84421AE2F81B58C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_SkipSpace_mF388B6F9C82F795BA722B706A5435B0E799A531C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeSpec_UnescapeInternalName_m7B3F1C73984FAF9159F89F62C97AF144EDC4347E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedReference_Equals_m167F7EDD4393DE114882916B753AC2D23A3840EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedReference_GetHashCode_m6A586AC495B0AB6D55E7EAE301C82BB2752A4289_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedReference_SetTypedReference_mCA19C65317890F40F1D808976B785A5368DFE411_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_CompareTo_m91AEACDAA81D12A2A8D868938F797B112330EC44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_Equals_mBCD7FC4A11D0CEEFF4BC6559137A9E397D7017B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToBoolean_mC81E40A61B311E3D9E69439B629E90816966F72A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToByte_mA95B992F24924E773C5602A6FEE29BDE5EE2072F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToChar_m6CD04280CB5C9546579E13211911F5B42B498F0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToDateTime_m7AD170006FECE0BAC29179FFE72D7AC1B0D0C735_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToDecimal_m74D92DB8814035966C6CFF447753338B03287E43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToDouble_m62236A4E72E544543EA440ED142B8BA093ADCB40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToInt16_m0818293E3F1271A2AD126AE950B71DBDDD3286D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToInt32_mA3C6E3F7DE9C6C893CAA5301EEDA26036554F34C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToInt64_mC204E05417B4F982A189912080F57F20E24275CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToSByte_mA4AD532B0AF50FD2F6AEBCDB581EA1EE43FCA3CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToSingle_m6B087CB34DBF0B394642977BB68F8B503DED3C7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToType_m2FD8E8941C266AE4254B1C4C068F4C5238C08695_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToUInt32_m6DA7A076663655EB849211FF9BD16582F863C5F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt16_System_IConvertible_ToUInt64_m510EF773A50C42F0B60B2C8AE753FC7873B3A97B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_CompareTo_mA6BFE8D9033149D2FEF46526E251A3CDEB1889EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToBoolean_mFC8A4EC8666918A944AED690BAA21AD7B6132A7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToByte_m9386861ED644D7B5E76BD0D7FB86DEEB0173A0A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToChar_mC0A386C36A0EBC656E6F887A1CCD5DBBFF078030_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToDateTime_m450F7E1864FB6A396E9009116F8301B972DAE724_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToDecimal_m1C78EB4A4D9A092C050487129E0AE477ADBBE5A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToDouble_m4A3EDEA2044FAA202D4ED3C81672CF0308FAE7E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToInt16_mC8FA3B04E544531449665298BE73AB2F486AE393_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToInt32_mB0FCB9A9ACF700AAD49333618A4B819E24F0F0B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToInt64_m6E1441BF4C3D5FDFCAEEED65CFE96E6D9F08007B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToSByte_mD7E08EC2B52A7612582C3E8C26878BAC0AB80984_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToSingle_m2B438F2707D2FB9C8FDC6D79B263677FA3C37096_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToType_mEFD4D7AB69CB399E6603ADA3EDDF10FC622E4A3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToUInt16_mBEE9936EF6F5D9D150E507F28CDA17A8C1C92E1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt32_System_IConvertible_ToUInt64_m659A2E594AAC8E26152B3EAAF1D80CECD2F43120_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_CompareTo_mB5A28DD05266BC32BD6FD24A6659B0464FFA8950_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_Equals_mE61D24B984F0B91A2FC1094402F1532A0F82C232_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToBoolean_mCDB7FA8F90588F8FDDF7F0CB26AF43651F9B3884_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToByte_m4F0E7D7E850AA40CE8FEE68B44B5FF29409CCB27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToChar_mBB0EEBDF5CB12C5CE93ECD9C39124D33F221A523_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToDateTime_m1DE2B7B00676B061B66F18FCCC7CBC5D848B0EBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToDecimal_mFE274863205856F4B130AD096D6BC7E40AA65FC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToDouble_mE29DD1148D7D94855DCB7CE8B4FC4B9424A00A82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToInt16_m6D785A19C7E04176E1B60131C70A965ABB427E20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToInt32_mBF342D7305B0F4643B8B2FB2EAC54F6B5C943746_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToInt64_mFA654AF22149F693965B34C380C2FF61764D7BD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToSByte_m6309BC2235A2F03BAE4107E9CCDF53604B9E7BB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToSingle_m04A4372F398081E930044EEECC7B73B4686EE8F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToType_m176FFA8FD3BDEAB82C5BD41CF3CF81C83AC21803_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToUInt16_m6B443639CDAEEDBE636A47EF6D07B045B51C2A51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UInt64_System_IConvertible_ToUInt32_mFF9B4ABD152C30CB4A9F09BAED4D197245141AF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIntPtr_Equals_m8C135DEDA578597066AB67C1DD5A5A34E4F860EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_mB6B1C508A6E9BFD526F23A38634C1E703595B733_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIntPtr_ToString_m1512332A1A79F9DA551731E9CA7F071A3C88043D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIntPtr__cctor_m4D964FAB1256A389E1DA1838C169AB4B559D28B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnSafeCharBuffer_AppendString_m1E2967E285FC06FDE141B90EF186745D5D2814FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnauthorizedAccessException__ctor_mE67AE27F79595BF7594E2D76D24336E64293693E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnhandledExceptionEventArgs__ctor_m126C64897FC12C485717061C6903DBC02E10A9A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySerializationHolder_AddElementTypes_m0C8810EE3D2A09BD766FC74C37086846A0268D45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySerializationHolder_GetObjectData_m7562EAA093BA2732DED6A3D94E676EEAAC1D8310_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySerializationHolder_GetRealObject_mB8BD0D19FE747C6B7F739F9686AA52CBA9E6FA9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m45D2EDC32022880C84BBE25124F5EDCA12B57ED2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m73DC8BA292A8CD7C89FC189779D656E0A07D4D3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySerializationHolder_GetUnitySerializationInfo_m86F654140996546DB4D6D8228BF9FE45E9BAEC3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnitySerializationHolder__ctor_m2DBB21E6B4107323DB20C23AD6D9290F50BF2B1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueType_DefaultEquals_m139582CD1BAD7472B45D806F76E4E14E82E629DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Variant_Clear_m7622B0C52C7794CC4C33434D2ED8170ECDDE5DAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionResult_GetVersionParseException_mD2123ABBACA1B3D82FC144785AF9FD7F0231BEF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionResult_SetFailure_m77BF5012543025E534D65353AD44AD5620782338_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_Clone_mC9305AB873E1FF41BA1B81C2988F0C113CC11035_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_CompareTo_m604CF8F6AFAB12D2F64E223B72F518528A3F85A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_CompareTo_mB6A6C226C3401C8903DD32602F72FA644631C33C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_Equals_m7C93B95F0594CB28E1B1C96936B03069BF8968D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_Equals_mD76B915CF93D19541FFE323B20D0B7992B62927B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_Parse_mAF74E042711BB851C4659BF71E09B9E79A9AC848_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_TryParseComponent_m6BDC16037C969220C596E5F64906896291598FA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_TryParseVersion_m35BE4BD62EC50169F9BC8711A6D88CD9374FD031_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version__cctor_m255F2F683982C0B54105CCDAFF40FF467B19B8D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version__ctor_mC1DA3D718E1D0AC5D640C5F78AB693CA40FF2889_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version__ctor_mC2880C190E158700B0C114D4CC921C0D240DAA9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_op_GreaterThanOrEqual_m1F4E6E2B52256D92AE8B2A07DBCFF1F325634612_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_op_GreaterThan_m83C1D7D83DB72C83B859E64AFC8C607019F028B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_op_Inequality_mBF83F266057D2C028BA2F423372DA7E738B25CD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_op_LessThanOrEqual_m6D2834974A9C75C04A7B303A9F1E57296E91A6B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Version_op_LessThan_mEE4DE91646EDC7245FD486D1D3E2322B651E7028_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeakReference_GetObjectData_m1DBED399F8C4A13F8C764A2AADFC5B6EBA5643D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeakReference__ctor_m9740BD0F2AEC959BF2210503D085723C6C1E09DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsConsoleDriver_ReadKey_mDE4EDC7320EFF2B8D0B888A203D0C96531855568_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __ComObject__ctor_m2A98911F497D95AC1C931674CC745F002A36C878_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __DTString_GetNextDigit_mE662D3828A0E0648E24F62FC5D750DA554364EFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __DTString_GetRegularToken_mD79E9337E33F2F9535DD89437EEDC2AF3F5A0B39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __DTString_GetSeparatorToken_m2F4CE10AC9C39A5380D3DD5344B81F79C7006EF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __DTString_MatchSpecifiedWords_mAD172D28B54FDBB34D5E8C8F92CB6C8B0EECDBA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __DTString_SkipWhiteSpaceCurrent_m85EF1DCFFB216A209FEB3CC53CB8E977C51D71DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __DTString_SkipWhiteSpaces_mB4AA5270916EF04CD52A4F3C16B1FB08D0B0CF4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __DTString__cctor_mC97C8C04AED3132252833D2119019C73BF6EFA80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __Filters_FilterAttribute_mBF9879ECFB908212C56CAE0B42C9E29BFCB347C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __Filters_FilterIgnoreCase_m883976C13C53B21BE3430DE51D4317CBCF89F53A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __Filters_FilterName_m768C2766720890EE1D07554E3433C0F828D427DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __Filters__cctor_mAC913CDF08E7AB6541101C4B96483BF49C6E2F14_MetadataUsageId;
struct Assembly_t_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78;;
struct InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke;
struct InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke;;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ArraySpec
struct  ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970  : public RuntimeObject
{
public:
	// System.Int32 System.ArraySpec::dimensions
	int32_t ___dimensions_0;
	// System.Boolean System.ArraySpec::bound
	bool ___bound_1;

public:
	inline static int32_t get_offset_of_dimensions_0() { return static_cast<int32_t>(offsetof(ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970, ___dimensions_0)); }
	inline int32_t get_dimensions_0() const { return ___dimensions_0; }
	inline int32_t* get_address_of_dimensions_0() { return &___dimensions_0; }
	inline void set_dimensions_0(int32_t value)
	{
		___dimensions_0 = value;
	}

	inline static int32_t get_offset_of_bound_1() { return static_cast<int32_t>(offsetof(ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970, ___bound_1)); }
	inline bool get_bound_1() const { return ___bound_1; }
	inline bool* get_address_of_bound_1() { return &___bound_1; }
	inline void set_bound_1(bool value)
	{
		___bound_1 = value;
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ModifierSpec>
struct  List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2, ____items_1)); }
	inline ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7* get__items_1() const { return ____items_1; }
	inline ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2_StaticFields, ____emptyArray_5)); }
	inline ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ModifierSpecU5BU5D_tAEF81765D168567C7F55496AB5F6C43084E398C7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.TypeIdentifier>
struct  List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166, ____items_1)); }
	inline TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766* get__items_1() const { return ____items_1; }
	inline TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166_StaticFields, ____emptyArray_5)); }
	inline TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeIdentifierU5BU5D_t95E17776299DF69C41AE3200141420FF69ADB766* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.TypeSpec>
struct  List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA, ____items_1)); }
	inline TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF* get__items_1() const { return ____items_1; }
	inline TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA_StaticFields, ____emptyArray_5)); }
	inline TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeSpecU5BU5D_t9767F25128C75FBAC1A17F15DFC9ACA4105B37DF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.DBNull
struct  DBNull_t7400E04939C2C29699B389B106997892BF53A8E5  : public RuntimeObject
{
public:

public:
};

struct DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields, ___Value_0)); }
	inline DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Empty
struct  Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2  : public RuntimeObject
{
public:

public:
};

struct Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2_StaticFields
{
public:
	// System.Empty System.Empty::Value
	Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2_StaticFields, ___Value_0)); }
	inline Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2 * get_Value_0() const { return ___Value_0; }
	inline Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
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
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
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
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.PointerSpec
struct  PointerSpec_tBCE1666DC24EC6E4E5376FEC214499984EC26892  : public RuntimeObject
{
public:
	// System.Int32 System.PointerSpec::pointer_level
	int32_t ___pointer_level_0;

public:
	inline static int32_t get_offset_of_pointer_level_0() { return static_cast<int32_t>(offsetof(PointerSpec_tBCE1666DC24EC6E4E5376FEC214499984EC26892, ___pointer_level_0)); }
	inline int32_t get_pointer_level_0() const { return ___pointer_level_0; }
	inline int32_t* get_address_of_pointer_level_0() { return &___pointer_level_0; }
	inline void set_pointer_level_0(int32_t value)
	{
		___pointer_level_0 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Reflection.Missing
struct  Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7  : public RuntimeObject
{
public:

public:
};

struct Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7_StaticFields, ___Value_0)); }
	inline Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7 * get_Value_0() const { return ___Value_0; }
	inline Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_members_3)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_data_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_types_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_nameToIndex_6)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
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
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
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
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
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


// System.TypeIdentifiers
struct  TypeIdentifiers_tBC5BC4024D376DCB779D877A1616CF4D7DB809E6  : public RuntimeObject
{
public:

public:
};


// System.TypeNameParser
struct  TypeNameParser_tBEF78C9D6AEC3DE5E2993F6EDC24C06F7B713741  : public RuntimeObject
{
public:

public:
};


// System.TypeNames
struct  TypeNames_t59FBD5EB0A62A2B3A8178016670631D61DEE00F9  : public RuntimeObject
{
public:

public:
};


// System.TypeNames_ATypeName
struct  ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421  : public RuntimeObject
{
public:

public:
};


// System.TypeSpec
struct  TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F  : public RuntimeObject
{
public:
	// System.TypeIdentifier System.TypeSpec::name
	RuntimeObject* ___name_0;
	// System.String System.TypeSpec::assembly_name
	String_t* ___assembly_name_1;
	// System.Collections.Generic.List`1<System.TypeIdentifier> System.TypeSpec::nested
	List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * ___nested_2;
	// System.Collections.Generic.List`1<System.TypeSpec> System.TypeSpec::generic_params
	List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * ___generic_params_3;
	// System.Collections.Generic.List`1<System.ModifierSpec> System.TypeSpec::modifier_spec
	List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * ___modifier_spec_4;
	// System.Boolean System.TypeSpec::is_byref
	bool ___is_byref_5;
	// System.String System.TypeSpec::display_fullname
	String_t* ___display_fullname_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F, ___name_0)); }
	inline RuntimeObject* get_name_0() const { return ___name_0; }
	inline RuntimeObject** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(RuntimeObject* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_name_1() { return static_cast<int32_t>(offsetof(TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F, ___assembly_name_1)); }
	inline String_t* get_assembly_name_1() const { return ___assembly_name_1; }
	inline String_t** get_address_of_assembly_name_1() { return &___assembly_name_1; }
	inline void set_assembly_name_1(String_t* value)
	{
		___assembly_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_nested_2() { return static_cast<int32_t>(offsetof(TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F, ___nested_2)); }
	inline List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * get_nested_2() const { return ___nested_2; }
	inline List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 ** get_address_of_nested_2() { return &___nested_2; }
	inline void set_nested_2(List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * value)
	{
		___nested_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nested_2), (void*)value);
	}

	inline static int32_t get_offset_of_generic_params_3() { return static_cast<int32_t>(offsetof(TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F, ___generic_params_3)); }
	inline List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * get_generic_params_3() const { return ___generic_params_3; }
	inline List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA ** get_address_of_generic_params_3() { return &___generic_params_3; }
	inline void set_generic_params_3(List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * value)
	{
		___generic_params_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generic_params_3), (void*)value);
	}

	inline static int32_t get_offset_of_modifier_spec_4() { return static_cast<int32_t>(offsetof(TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F, ___modifier_spec_4)); }
	inline List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * get_modifier_spec_4() const { return ___modifier_spec_4; }
	inline List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 ** get_address_of_modifier_spec_4() { return &___modifier_spec_4; }
	inline void set_modifier_spec_4(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * value)
	{
		___modifier_spec_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modifier_spec_4), (void*)value);
	}

	inline static int32_t get_offset_of_is_byref_5() { return static_cast<int32_t>(offsetof(TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F, ___is_byref_5)); }
	inline bool get_is_byref_5() const { return ___is_byref_5; }
	inline bool* get_address_of_is_byref_5() { return &___is_byref_5; }
	inline void set_is_byref_5(bool value)
	{
		___is_byref_5 = value;
	}

	inline static int32_t get_offset_of_display_fullname_6() { return static_cast<int32_t>(offsetof(TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F, ___display_fullname_6)); }
	inline String_t* get_display_fullname_6() const { return ___display_fullname_6; }
	inline String_t** get_address_of_display_fullname_6() { return &___display_fullname_6; }
	inline void set_display_fullname_6(String_t* value)
	{
		___display_fullname_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___display_fullname_6), (void*)value);
	}
};


// System.UnitySerializationHolder
struct  UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC  : public RuntimeObject
{
public:
	// System.Type[] System.UnitySerializationHolder::m_instantiation
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___m_instantiation_0;
	// System.Int32[] System.UnitySerializationHolder::m_elementTypes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_elementTypes_1;
	// System.Int32 System.UnitySerializationHolder::m_genericParameterPosition
	int32_t ___m_genericParameterPosition_2;
	// System.Type System.UnitySerializationHolder::m_declaringType
	Type_t * ___m_declaringType_3;
	// System.Reflection.MethodBase System.UnitySerializationHolder::m_declaringMethod
	MethodBase_t * ___m_declaringMethod_4;
	// System.String System.UnitySerializationHolder::m_data
	String_t* ___m_data_5;
	// System.String System.UnitySerializationHolder::m_assemblyName
	String_t* ___m_assemblyName_6;
	// System.Int32 System.UnitySerializationHolder::m_unityType
	int32_t ___m_unityType_7;

public:
	inline static int32_t get_offset_of_m_instantiation_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC, ___m_instantiation_0)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_m_instantiation_0() const { return ___m_instantiation_0; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_m_instantiation_0() { return &___m_instantiation_0; }
	inline void set_m_instantiation_0(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___m_instantiation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_instantiation_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_elementTypes_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC, ___m_elementTypes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_elementTypes_1() const { return ___m_elementTypes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_elementTypes_1() { return &___m_elementTypes_1; }
	inline void set_m_elementTypes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_elementTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_elementTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_genericParameterPosition_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC, ___m_genericParameterPosition_2)); }
	inline int32_t get_m_genericParameterPosition_2() const { return ___m_genericParameterPosition_2; }
	inline int32_t* get_address_of_m_genericParameterPosition_2() { return &___m_genericParameterPosition_2; }
	inline void set_m_genericParameterPosition_2(int32_t value)
	{
		___m_genericParameterPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_declaringType_3() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC, ___m_declaringType_3)); }
	inline Type_t * get_m_declaringType_3() const { return ___m_declaringType_3; }
	inline Type_t ** get_address_of_m_declaringType_3() { return &___m_declaringType_3; }
	inline void set_m_declaringType_3(Type_t * value)
	{
		___m_declaringType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_declaringType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_declaringMethod_4() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC, ___m_declaringMethod_4)); }
	inline MethodBase_t * get_m_declaringMethod_4() const { return ___m_declaringMethod_4; }
	inline MethodBase_t ** get_address_of_m_declaringMethod_4() { return &___m_declaringMethod_4; }
	inline void set_m_declaringMethod_4(MethodBase_t * value)
	{
		___m_declaringMethod_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_declaringMethod_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_5() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC, ___m_data_5)); }
	inline String_t* get_m_data_5() const { return ___m_data_5; }
	inline String_t** get_address_of_m_data_5() { return &___m_data_5; }
	inline void set_m_data_5(String_t* value)
	{
		___m_data_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemblyName_6() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC, ___m_assemblyName_6)); }
	inline String_t* get_m_assemblyName_6() const { return ___m_assemblyName_6; }
	inline String_t** get_address_of_m_assemblyName_6() { return &___m_assemblyName_6; }
	inline void set_m_assemblyName_6(String_t* value)
	{
		___m_assemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemblyName_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_unityType_7() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC, ___m_unityType_7)); }
	inline int32_t get_m_unityType_7() const { return ___m_unityType_7; }
	inline int32_t* get_address_of_m_unityType_7() { return &___m_unityType_7; }
	inline void set_m_unityType_7(int32_t value)
	{
		___m_unityType_7 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Version
struct  Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// System.__ComObject
struct  __ComObject_t7C4C78B18A827C344A9826ECC7FCC40B7F6FD77C  : public RuntimeObject
{
public:

public:
};


// System.__Filters
struct  __Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34  : public RuntimeObject
{
public:

public:
};

struct __Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34_StaticFields
{
public:
	// System.__Filters System.__Filters::Instance
	__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34_StaticFields, ___Instance_0)); }
	inline __Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * get_Instance_0() const { return ___Instance_0; }
	inline __Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// System.__Il2CppComObject


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.ModifierSpec>
struct  Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D, ___list_0)); }
	inline List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * get_list_0() const { return ___list_0; }
	inline List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.TypeIdentifier>
struct  Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628, ___list_0)); }
	inline List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * get_list_0() const { return ___list_0; }
	inline List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Coord
struct  Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A 
{
public:
	// System.Int16 System.Coord::X
	int16_t ___X_0;
	// System.Int16 System.Coord::Y
	int16_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A, ___X_0)); }
	inline int16_t get_X_0() const { return ___X_0; }
	inline int16_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int16_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A, ___Y_1)); }
	inline int16_t get_Y_1() const { return ___Y_1; }
	inline int16_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int16_t value)
	{
		___Y_1 = value;
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.InputRecord
struct  InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78 
{
public:
	// System.Int16 System.InputRecord::EventType
	int16_t ___EventType_0;
	// System.Boolean System.InputRecord::KeyDown
	bool ___KeyDown_1;
	// System.Int16 System.InputRecord::RepeatCount
	int16_t ___RepeatCount_2;
	// System.Int16 System.InputRecord::VirtualKeyCode
	int16_t ___VirtualKeyCode_3;
	// System.Int16 System.InputRecord::VirtualScanCode
	int16_t ___VirtualScanCode_4;
	// System.Char System.InputRecord::Character
	Il2CppChar ___Character_5;
	// System.Int32 System.InputRecord::ControlKeyState
	int32_t ___ControlKeyState_6;
	// System.Int32 System.InputRecord::pad1
	int32_t ___pad1_7;
	// System.Boolean System.InputRecord::pad2
	bool ___pad2_8;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___EventType_0)); }
	inline int16_t get_EventType_0() const { return ___EventType_0; }
	inline int16_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int16_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_KeyDown_1() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___KeyDown_1)); }
	inline bool get_KeyDown_1() const { return ___KeyDown_1; }
	inline bool* get_address_of_KeyDown_1() { return &___KeyDown_1; }
	inline void set_KeyDown_1(bool value)
	{
		___KeyDown_1 = value;
	}

	inline static int32_t get_offset_of_RepeatCount_2() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___RepeatCount_2)); }
	inline int16_t get_RepeatCount_2() const { return ___RepeatCount_2; }
	inline int16_t* get_address_of_RepeatCount_2() { return &___RepeatCount_2; }
	inline void set_RepeatCount_2(int16_t value)
	{
		___RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_VirtualKeyCode_3() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___VirtualKeyCode_3)); }
	inline int16_t get_VirtualKeyCode_3() const { return ___VirtualKeyCode_3; }
	inline int16_t* get_address_of_VirtualKeyCode_3() { return &___VirtualKeyCode_3; }
	inline void set_VirtualKeyCode_3(int16_t value)
	{
		___VirtualKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_VirtualScanCode_4() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___VirtualScanCode_4)); }
	inline int16_t get_VirtualScanCode_4() const { return ___VirtualScanCode_4; }
	inline int16_t* get_address_of_VirtualScanCode_4() { return &___VirtualScanCode_4; }
	inline void set_VirtualScanCode_4(int16_t value)
	{
		___VirtualScanCode_4 = value;
	}

	inline static int32_t get_offset_of_Character_5() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___Character_5)); }
	inline Il2CppChar get_Character_5() const { return ___Character_5; }
	inline Il2CppChar* get_address_of_Character_5() { return &___Character_5; }
	inline void set_Character_5(Il2CppChar value)
	{
		___Character_5 = value;
	}

	inline static int32_t get_offset_of_ControlKeyState_6() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___ControlKeyState_6)); }
	inline int32_t get_ControlKeyState_6() const { return ___ControlKeyState_6; }
	inline int32_t* get_address_of_ControlKeyState_6() { return &___ControlKeyState_6; }
	inline void set_ControlKeyState_6(int32_t value)
	{
		___ControlKeyState_6 = value;
	}

	inline static int32_t get_offset_of_pad1_7() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___pad1_7)); }
	inline int32_t get_pad1_7() const { return ___pad1_7; }
	inline int32_t* get_address_of_pad1_7() { return &___pad1_7; }
	inline void set_pad1_7(int32_t value)
	{
		___pad1_7 = value;
	}

	inline static int32_t get_offset_of_pad2_8() { return static_cast<int32_t>(offsetof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78, ___pad2_8)); }
	inline bool get_pad2_8() const { return ___pad2_8; }
	inline bool* get_address_of_pad2_8() { return &___pad2_8; }
	inline void set_pad2_8(bool value)
	{
		___pad2_8 = value;
	}
};

// Native definition for P/Invoke marshalling of System.InputRecord
struct InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
// Native definition for COM marshalling of System.InputRecord
struct InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_com
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SmallRect
struct  SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532 
{
public:
	// System.Int16 System.SmallRect::Left
	int16_t ___Left_0;
	// System.Int16 System.SmallRect::Top
	int16_t ___Top_1;
	// System.Int16 System.SmallRect::Right
	int16_t ___Right_2;
	// System.Int16 System.SmallRect::Bottom
	int16_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532, ___Left_0)); }
	inline int16_t get_Left_0() const { return ___Left_0; }
	inline int16_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int16_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532, ___Top_1)); }
	inline int16_t get_Top_1() const { return ___Top_1; }
	inline int16_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int16_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532, ___Right_2)); }
	inline int16_t get_Right_2() const { return ___Right_2; }
	inline int16_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int16_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532, ___Bottom_3)); }
	inline int16_t get_Bottom_3() const { return ___Bottom_3; }
	inline int16_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int16_t value)
	{
		___Bottom_3 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.TypeIdentifiers_Display
struct  Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5  : public ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421
{
public:
	// System.String System.TypeIdentifiers_Display::displayName
	String_t* ___displayName_0;
	// System.String System.TypeIdentifiers_Display::internal_name
	String_t* ___internal_name_1;

public:
	inline static int32_t get_offset_of_displayName_0() { return static_cast<int32_t>(offsetof(Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5, ___displayName_0)); }
	inline String_t* get_displayName_0() const { return ___displayName_0; }
	inline String_t** get_address_of_displayName_0() { return &___displayName_0; }
	inline void set_displayName_0(String_t* value)
	{
		___displayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_internal_name_1() { return static_cast<int32_t>(offsetof(Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5, ___internal_name_1)); }
	inline String_t* get_internal_name_1() const { return ___internal_name_1; }
	inline String_t** get_address_of_internal_name_1() { return &___internal_name_1; }
	inline void set_internal_name_1(String_t* value)
	{
		___internal_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_name_1), (void*)value);
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// System.UnSafeCharBuffer
struct  UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C 
{
public:
	// System.Char* System.UnSafeCharBuffer::m_buffer
	Il2CppChar* ___m_buffer_0;
	// System.Int32 System.UnSafeCharBuffer::m_totalSize
	int32_t ___m_totalSize_1;
	// System.Int32 System.UnSafeCharBuffer::m_length
	int32_t ___m_length_2;

public:
	inline static int32_t get_offset_of_m_buffer_0() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C, ___m_buffer_0)); }
	inline Il2CppChar* get_m_buffer_0() const { return ___m_buffer_0; }
	inline Il2CppChar** get_address_of_m_buffer_0() { return &___m_buffer_0; }
	inline void set_m_buffer_0(Il2CppChar* value)
	{
		___m_buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_totalSize_1() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C, ___m_totalSize_1)); }
	inline int32_t get_m_totalSize_1() const { return ___m_totalSize_1; }
	inline int32_t* get_address_of_m_totalSize_1() { return &___m_totalSize_1; }
	inline void set_m_totalSize_1(int32_t value)
	{
		___m_totalSize_1 = value;
	}

	inline static int32_t get_offset_of_m_length_2() { return static_cast<int32_t>(offsetof(UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C, ___m_length_2)); }
	inline int32_t get_m_length_2() const { return ___m_length_2; }
	inline int32_t* get_address_of_m_length_2() { return &___m_length_2; }
	inline void set_m_length_2(int32_t value)
	{
		___m_length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshaled_pinvoke
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};
// Native definition for COM marshalling of System.UnSafeCharBuffer
struct UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshaled_com
{
	Il2CppChar* ___m_buffer_0;
	int32_t ___m_totalSize_1;
	int32_t ___m_length_2;
};

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1, ____IsTerminating_2)); }
	inline bool get__IsTerminating_2() const { return ____IsTerminating_2; }
	inline bool* get_address_of__IsTerminating_2() { return &____IsTerminating_2; }
	inline void set__IsTerminating_2(bool value)
	{
		____IsTerminating_2 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.__DTString
struct  __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 
{
public:
	// System.String System.__DTString::Value
	String_t* ___Value_0;
	// System.Int32 System.__DTString::Index
	int32_t ___Index_1;
	// System.Int32 System.__DTString::len
	int32_t ___len_2;
	// System.Char System.__DTString::m_current
	Il2CppChar ___m_current_3;
	// System.Globalization.CompareInfo System.__DTString::m_info
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_info_4;
	// System.Boolean System.__DTString::m_checkDigitToken
	bool ___m_checkDigitToken_5;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_m_current_3() { return static_cast<int32_t>(offsetof(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9, ___m_current_3)); }
	inline Il2CppChar get_m_current_3() const { return ___m_current_3; }
	inline Il2CppChar* get_address_of_m_current_3() { return &___m_current_3; }
	inline void set_m_current_3(Il2CppChar value)
	{
		___m_current_3 = value;
	}

	inline static int32_t get_offset_of_m_info_4() { return static_cast<int32_t>(offsetof(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9, ___m_info_4)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_m_info_4() const { return ___m_info_4; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_m_info_4() { return &___m_info_4; }
	inline void set_m_info_4(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___m_info_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_info_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_checkDigitToken_5() { return static_cast<int32_t>(offsetof(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9, ___m_checkDigitToken_5)); }
	inline bool get_m_checkDigitToken_5() const { return ___m_checkDigitToken_5; }
	inline bool* get_address_of_m_checkDigitToken_5() { return &___m_checkDigitToken_5; }
	inline void set_m_checkDigitToken_5(bool value)
	{
		___m_checkDigitToken_5 = value;
	}
};

struct __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_StaticFields
{
public:
	// System.Char[] System.__DTString::WhiteSpaceChecks
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___WhiteSpaceChecks_6;

public:
	inline static int32_t get_offset_of_WhiteSpaceChecks_6() { return static_cast<int32_t>(offsetof(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_StaticFields, ___WhiteSpaceChecks_6)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_WhiteSpaceChecks_6() const { return ___WhiteSpaceChecks_6; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_WhiteSpaceChecks_6() { return &___WhiteSpaceChecks_6; }
	inline void set_WhiteSpaceChecks_6(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___WhiteSpaceChecks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhiteSpaceChecks_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.__DTString
struct __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshaled_pinvoke
{
	char* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
// Native definition for COM marshalling of System.__DTString
struct __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshaled_com
{
	Il2CppChar* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t0A30496F74225C39A0CF7FADB94934C0536120FD  : public Il2CppComObject
{
public:

public:
};


// System.BRECORD
struct  BRECORD_tDDC5F1A5DC569C234C6141FCBA5F8DE8293BC601 
{
public:
	// System.IntPtr System.BRECORD::pvRecord
	intptr_t ___pvRecord_0;
	// System.IntPtr System.BRECORD::pRecInfo
	intptr_t ___pRecInfo_1;

public:
	inline static int32_t get_offset_of_pvRecord_0() { return static_cast<int32_t>(offsetof(BRECORD_tDDC5F1A5DC569C234C6141FCBA5F8DE8293BC601, ___pvRecord_0)); }
	inline intptr_t get_pvRecord_0() const { return ___pvRecord_0; }
	inline intptr_t* get_address_of_pvRecord_0() { return &___pvRecord_0; }
	inline void set_pvRecord_0(intptr_t value)
	{
		___pvRecord_0 = value;
	}

	inline static int32_t get_offset_of_pRecInfo_1() { return static_cast<int32_t>(offsetof(BRECORD_tDDC5F1A5DC569C234C6141FCBA5F8DE8293BC601, ___pRecInfo_1)); }
	inline intptr_t get_pRecInfo_1() const { return ___pRecInfo_1; }
	inline intptr_t* get_address_of_pRecInfo_1() { return &___pRecInfo_1; }
	inline void set_pRecInfo_1(intptr_t value)
	{
		___pRecInfo_1 = value;
	}
};


// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_tEA062AB37A9A750B33F6CA2898EEF03A4EEA496C 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_tEA062AB37A9A750B33F6CA2898EEF03A4EEA496C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ConsoleKey
struct  ConsoleKey_t0196714F06D59B40580F7B85EA2663D81394682C 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleKey_t0196714F06D59B40580F7B85EA2663D81394682C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ConsoleModifiers
struct  ConsoleModifiers_tCB55098B71E4DCCEE972B1056E64D1B8AB9EAB34 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleModifiers_tCB55098B71E4DCCEE972B1056E64D1B8AB9EAB34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F, ___Size_0)); }
	inline Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  get_Size_0() const { return ___Size_0; }
	inline Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F, ___CursorPosition_1)); }
	inline Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F, ___Window_3)); }
	inline SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t18C271B0FF660F6ED4EC6D99B26C4D35F51CA532  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F, ___MaxWindowSize_4)); }
	inline Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t6CEFF682745DD47B1B4DA3ED268C0933021AC34A  value)
	{
		___MaxWindowSize_4 = value;
	}
};


// System.DTSubStringType
struct  DTSubStringType_tA15E6919CA4FEC2739587ADF93B5F8D550A9BC4E 
{
public:
	// System.Int32 System.DTSubStringType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTSubStringType_tA15E6919CA4FEC2739587ADF93B5F8D550A9BC4E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.CompareOptions
struct  CompareOptions_t163DCEA9A0972750294CC1A8348E5CA69E943939 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t163DCEA9A0972750294CC1A8348E5CA69E943939, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_tA363B5524F41DE008B4AB8304F1E995E2C8CF675 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tA363B5524F41DE008B4AB8304F1E995E2C8CF675, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeStyles
struct  DateTimeStyles_tD09B34DB3747CD91D8AAA1238C7595845715301E 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_tD09B34DB3747CD91D8AAA1238C7595845715301E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Handles
struct  Handles_tC13FB0F0810977450CE811097C1B15BCF5E4CAD7 
{
public:
	// System.Int32 System.Handles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handles_tC13FB0F0810977450CE811097C1B15BCF5E4CAD7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t9869DE40B7B1976B389F3B6A5A5D18B09E623401 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t9869DE40B7B1976B389F3B6A5A5D18B09E623401, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t7834EDF078E7ECA985AA434A1EA0D95C2A44F256 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t7834EDF078E7ECA985AA434A1EA0D95C2A44F256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.Reflection.FieldAttributes
struct  FieldAttributes_t53FAFABBE4087C280EE0ED26F8F0EF29D24CC0B1 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FieldAttributes_t53FAFABBE4087C280EE0ED26F8F0EF29D24CC0B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MemberTypes
struct  MemberTypes_t3FEDC67D8B994D09AF155FFB2CFD26023F245041 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_t3FEDC67D8B994D09AF155FFB2CFD26023F245041, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodAttributes
struct  MethodAttributes_tBEF3274421B682BFF8D0FF0BEA84C8FD9D63F202 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodAttributes_tBEF3274421B682BFF8D0FF0BEA84C8FD9D63F202, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t0CFB73A83469D6AC222B9FE46E81EAC73C2627C7 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t0CFB73A83469D6AC222B9FE46E81EAC73C2627C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.RuntimeFieldInfo
struct  RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7  : public FieldInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.StackCrawlMark
struct  StackCrawlMark_t857D8DE506F124E737FD26BB7ADAAAAD13E4F943 
{
public:
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackCrawlMark_t857D8DE506F124E737FD26BB7ADAAAAD13E4F943, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TokenType
struct  TokenType_t192580F19CFCC8A71F0BD44B8BE1056BA64D869A 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t192580F19CFCC8A71F0BD44B8BE1056BA64D869A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct  TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeNameFormatFlags
struct  TypeNameFormatFlags_tDAD267AC4A655D16C608DD230B5C97F8226E94C8 
{
public:
	// System.Int32 System.TypeNameFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameFormatFlags_tDAD267AC4A655D16C608DD230B5C97F8226E94C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeNameKind
struct  TypeNameKind_t200043F25E9EACB6294E8B825E5FED441F04C2BF 
{
public:
	// System.Int32 System.TypeNameKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameKind_t200043F25E9EACB6294E8B825E5FED441F04C2BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeSpec_DisplayNameFormat
struct  DisplayNameFormat_tFEA54E2FCA44D62D61CCCE98E4F02DE2D186DF47 
{
public:
	// System.Int32 System.TypeSpec_DisplayNameFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayNameFormat_tFEA54E2FCA44D62D61CCCE98E4F02DE2D186DF47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UInt16Enum
struct  UInt16Enum_tB3380938EFBC6B524E2C8143A7982637F0EA4456 
{
public:
	// System.UInt16 System.UInt16Enum::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UInt16Enum_tB3380938EFBC6B524E2C8143A7982637F0EA4456, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.UInt32Enum
struct  UInt32Enum_tE44175EB3151A633676D60A642EDA3BD5C6760DA 
{
public:
	// System.UInt32 System.UInt32Enum::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UInt32Enum_tE44175EB3151A633676D60A642EDA3BD5C6760DA, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.UInt64Enum
struct  UInt64Enum_tEAD217F175F60689A664303784384DEF759D24C8 
{
public:
	// System.UInt64 System.UInt64Enum::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UInt64Enum_tEAD217F175F60689A664303784384DEF759D24C8, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Version_ParseFailureKind
struct  ParseFailureKind_t0E37E87ACF3E01D5D2846A114AE9247C2C7DC3E8 
{
public:
	// System.Int32 System.Version_ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t0E37E87ACF3E01D5D2846A114AE9247C2C7DC3E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct  WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D, ___gcHandle_1)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___gcHandle_1 = value;
	}
};


// System.WindowsConsoleDriver
struct  WindowsConsoleDriver_t953AB92956013BD3ED7E260FEC4944E603008B42  : public RuntimeObject
{
public:
	// System.IntPtr System.WindowsConsoleDriver::inputHandle
	intptr_t ___inputHandle_0;
	// System.IntPtr System.WindowsConsoleDriver::outputHandle
	intptr_t ___outputHandle_1;
	// System.Int16 System.WindowsConsoleDriver::defaultAttribute
	int16_t ___defaultAttribute_2;

public:
	inline static int32_t get_offset_of_inputHandle_0() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t953AB92956013BD3ED7E260FEC4944E603008B42, ___inputHandle_0)); }
	inline intptr_t get_inputHandle_0() const { return ___inputHandle_0; }
	inline intptr_t* get_address_of_inputHandle_0() { return &___inputHandle_0; }
	inline void set_inputHandle_0(intptr_t value)
	{
		___inputHandle_0 = value;
	}

	inline static int32_t get_offset_of_outputHandle_1() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t953AB92956013BD3ED7E260FEC4944E603008B42, ___outputHandle_1)); }
	inline intptr_t get_outputHandle_1() const { return ___outputHandle_1; }
	inline intptr_t* get_address_of_outputHandle_1() { return &___outputHandle_1; }
	inline void set_outputHandle_1(intptr_t value)
	{
		___outputHandle_1 = value;
	}

	inline static int32_t get_offset_of_defaultAttribute_2() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t953AB92956013BD3ED7E260FEC4944E603008B42, ___defaultAttribute_2)); }
	inline int16_t get_defaultAttribute_2() const { return ___defaultAttribute_2; }
	inline int16_t* get_address_of_defaultAttribute_2() { return &___defaultAttribute_2; }
	inline void set_defaultAttribute_2(int16_t value)
	{
		___defaultAttribute_2 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768 
{
public:
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;

public:
	inline static int32_t get_offset_of__keyChar_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768, ____keyChar_0)); }
	inline Il2CppChar get__keyChar_0() const { return ____keyChar_0; }
	inline Il2CppChar* get_address_of__keyChar_0() { return &____keyChar_0; }
	inline void set__keyChar_0(Il2CppChar value)
	{
		____keyChar_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768, ____key_1)); }
	inline int32_t get__key_1() const { return ____key_1; }
	inline int32_t* get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(int32_t value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__mods_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768, ____mods_2)); }
	inline int32_t get__mods_2() const { return ____mods_2; }
	inline int32_t* get_address_of__mods_2() { return &____mods_2; }
	inline void set__mods_2(int32_t value)
	{
		____mods_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};

// System.DTSubString
struct  DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D 
{
public:
	// System.String System.DTSubString::s
	String_t* ___s_0;
	// System.Int32 System.DTSubString::index
	int32_t ___index_1;
	// System.Int32 System.DTSubString::length
	int32_t ___length_2;
	// System.DTSubStringType System.DTSubString::type
	int32_t ___type_3;
	// System.Int32 System.DTSubString::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_s_0() { return static_cast<int32_t>(offsetof(DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D, ___s_0)); }
	inline String_t* get_s_0() const { return ___s_0; }
	inline String_t** get_address_of_s_0() { return &___s_0; }
	inline void set_s_0(String_t* value)
	{
		___s_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

// Native definition for P/Invoke marshalling of System.DTSubString
struct DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshaled_pinvoke
{
	char* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
// Native definition for COM marshalling of System.DTSubString
struct DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshaled_com
{
	Il2CppChar* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};

// System.Globalization.CompareInfo
struct  CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1  : public RuntimeObject
{
public:
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_3;
	// System.String System.Globalization.CompareInfo::m_sortName
	String_t* ___m_sortName_4;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_5;
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_6;
	// System.Globalization.SortVersion System.Globalization.CompareInfo::m_SortVersion
	SortVersion_tE7080CE09A0B8CE226F8046C0D1374DD0A0CAE71 * ___m_SortVersion_20;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_tC3A1720B7D3D850D5C23BE8E366D821EBA923D89 * ___collator_21;

public:
	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_sortName_4() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1, ___m_sortName_4)); }
	inline String_t* get_m_sortName_4() const { return ___m_sortName_4; }
	inline String_t** get_address_of_m_sortName_4() { return &___m_sortName_4; }
	inline void set_m_sortName_4(String_t* value)
	{
		___m_sortName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sortName_4), (void*)value);
	}

	inline static int32_t get_offset_of_win32LCID_5() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1, ___win32LCID_5)); }
	inline int32_t get_win32LCID_5() const { return ___win32LCID_5; }
	inline int32_t* get_address_of_win32LCID_5() { return &___win32LCID_5; }
	inline void set_win32LCID_5(int32_t value)
	{
		___win32LCID_5 = value;
	}

	inline static int32_t get_offset_of_culture_6() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1, ___culture_6)); }
	inline int32_t get_culture_6() const { return ___culture_6; }
	inline int32_t* get_address_of_culture_6() { return &___culture_6; }
	inline void set_culture_6(int32_t value)
	{
		___culture_6 = value;
	}

	inline static int32_t get_offset_of_m_SortVersion_20() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1, ___m_SortVersion_20)); }
	inline SortVersion_tE7080CE09A0B8CE226F8046C0D1374DD0A0CAE71 * get_m_SortVersion_20() const { return ___m_SortVersion_20; }
	inline SortVersion_tE7080CE09A0B8CE226F8046C0D1374DD0A0CAE71 ** get_address_of_m_SortVersion_20() { return &___m_SortVersion_20; }
	inline void set_m_SortVersion_20(SortVersion_tE7080CE09A0B8CE226F8046C0D1374DD0A0CAE71 * value)
	{
		___m_SortVersion_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortVersion_20), (void*)value);
	}

	inline static int32_t get_offset_of_collator_21() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1, ___collator_21)); }
	inline SimpleCollator_tC3A1720B7D3D850D5C23BE8E366D821EBA923D89 * get_collator_21() const { return ___collator_21; }
	inline SimpleCollator_tC3A1720B7D3D850D5C23BE8E366D821EBA923D89 ** get_address_of_collator_21() { return &___collator_21; }
	inline void set_collator_21(SimpleCollator_tC3A1720B7D3D850D5C23BE8E366D821EBA923D89 * value)
	{
		___collator_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collator_21), (void*)value);
	}
};

struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> System.Globalization.CompareInfo::collators
	Dictionary_2_t61B96E9258C1E296057BCD8C4D2015846D2BB8F3 * ___collators_22;
	// System.Boolean System.Globalization.CompareInfo::managedCollation
	bool ___managedCollation_23;
	// System.Boolean System.Globalization.CompareInfo::managedCollationChecked
	bool ___managedCollationChecked_24;

public:
	inline static int32_t get_offset_of_collators_22() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1_StaticFields, ___collators_22)); }
	inline Dictionary_2_t61B96E9258C1E296057BCD8C4D2015846D2BB8F3 * get_collators_22() const { return ___collators_22; }
	inline Dictionary_2_t61B96E9258C1E296057BCD8C4D2015846D2BB8F3 ** get_address_of_collators_22() { return &___collators_22; }
	inline void set_collators_22(Dictionary_2_t61B96E9258C1E296057BCD8C4D2015846D2BB8F3 * value)
	{
		___collators_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collators_22), (void*)value);
	}

	inline static int32_t get_offset_of_managedCollation_23() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1_StaticFields, ___managedCollation_23)); }
	inline bool get_managedCollation_23() const { return ___managedCollation_23; }
	inline bool* get_address_of_managedCollation_23() { return &___managedCollation_23; }
	inline void set_managedCollation_23(bool value)
	{
		___managedCollation_23 = value;
	}

	inline static int32_t get_offset_of_managedCollationChecked_24() { return static_cast<int32_t>(offsetof(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1_StaticFields, ___managedCollationChecked_24)); }
	inline bool get_managedCollationChecked_24() const { return ___managedCollationChecked_24; }
	inline bool* get_address_of_managedCollationChecked_24() { return &___managedCollationChecked_24; }
	inline void set_managedCollationChecked_24(bool value)
	{
		___managedCollationChecked_24 = value;
	}
};


// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_cultureData_1)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_langName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_compareInfo_4)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compareInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_cultureInfo_5)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amDesignator_6), (void*)value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pmDesignator_7), (void*)value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalShortTimePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalLongTimePattern_10), (void*)value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeSeparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthDayPattern_12), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeOffsetPattern_13), (void*)value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___calendar_17)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_17), (void*)value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDateTimePattern_20), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedDayNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_superShortDayNames_22), (void*)value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dayNames_23)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedMonthNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___monthNames_25)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genitiveMonthNames_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_genitiveAbbreviatedMonthNames_27), (void*)value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leapYearMonthNames_28), (void*)value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longDatePattern_29), (void*)value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortDatePattern_30), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthPattern_31), (void*)value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longTimePattern_32), (void*)value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortTimePattern_33), (void*)value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allYearMonthPatterns_34), (void*)value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortDatePatterns_35), (void*)value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongDatePatterns_36), (void*)value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortTimePatterns_37), (void*)value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongTimePatterns_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_eraNames_39)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eraNames_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEraNames_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEnglishEraNames_41), (void*)value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalCalendars_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_dateWords_53)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dateWords_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanPositivePattern_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanNegativePattern_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dtfiTokenHash_57), (void*)value);
	}
};

struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_calendarNativeNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_jajpDTFI_82), (void*)value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_zhtwDTFI_83), (void*)value);
	}
};


// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nativeDigits_19)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Reflection.AssemblyName
struct  AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codebase_1), (void*)value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___cultureinfo_6)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cultureinfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keypair_9)); }
	inline StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keypair_9), (void*)value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___publicKey_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicKey_10), (void*)value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keyToken_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyToken_11), (void*)value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___version_13)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_13() const { return ___version_13; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_13), (void*)value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Reflection.Module
struct  Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;

public:
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7, ___assembly_3)); }
	inline Assembly_t * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_3), (void*)value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fqname_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scopename_6), (void*)value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeName_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t30BB04A68BC9FB949345457F71A9648BDB67FF18 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeNameIgnoreCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};

// System.Reflection.RuntimeAssembly
struct  RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1  : public Assembly_t
{
public:

public:
};


// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.TypedReference
struct  TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___type_0;
	// System.IntPtr System.TypedReference::Value
	intptr_t ___Value_1;
	// System.IntPtr System.TypedReference::Type
	intptr_t ___Type_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8, ___type_0)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8, ___Value_1)); }
	inline intptr_t get_Value_1() const { return ___Value_1; }
	inline intptr_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(intptr_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8, ___Type_2)); }
	inline intptr_t get_Type_2() const { return ___Type_2; }
	inline intptr_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(intptr_t value)
	{
		___Type_2 = value;
	}
};


// System.Variant
struct  Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Variant::vt
			int16_t ___vt_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___vt_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved1_1_OffsetPadding[2];
			// System.UInt16 System.Variant::wReserved1
			uint16_t ___wReserved1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved1_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___wReserved1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved2_2_OffsetPadding[4];
			// System.UInt16 System.Variant::wReserved2
			uint16_t ___wReserved2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved2_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___wReserved2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___wReserved3_3_OffsetPadding[6];
			// System.UInt16 System.Variant::wReserved3
			uint16_t ___wReserved3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___wReserved3_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___wReserved3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___llVal_4_OffsetPadding[8];
			// System.Int64 System.Variant::llVal
			int64_t ___llVal_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___llVal_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ___llVal_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lVal_5_OffsetPadding[8];
			// System.Int32 System.Variant::lVal
			int32_t ___lVal_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lVal_5_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lVal_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bVal_6_OffsetPadding[8];
			// System.Byte System.Variant::bVal
			uint8_t ___bVal_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bVal_6_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___bVal_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___iVal_7_OffsetPadding[8];
			// System.Int16 System.Variant::iVal
			int16_t ___iVal_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___iVal_7_OffsetPadding_forAlignmentOnly[8];
			int16_t ___iVal_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___fltVal_8_OffsetPadding[8];
			// System.Single System.Variant::fltVal
			float ___fltVal_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___fltVal_8_OffsetPadding_forAlignmentOnly[8];
			float ___fltVal_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___dblVal_9_OffsetPadding[8];
			// System.Double System.Variant::dblVal
			double ___dblVal_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___dblVal_9_OffsetPadding_forAlignmentOnly[8];
			double ___dblVal_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolVal_10_OffsetPadding[8];
			// System.Int16 System.Variant::boolVal
			int16_t ___boolVal_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___boolVal_10_OffsetPadding_forAlignmentOnly[8];
			int16_t ___boolVal_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bstrVal_11_OffsetPadding[8];
			// System.IntPtr System.Variant::bstrVal
			intptr_t ___bstrVal_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bstrVal_11_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___bstrVal_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___cVal_12_OffsetPadding[8];
			// System.SByte System.Variant::cVal
			int8_t ___cVal_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___cVal_12_OffsetPadding_forAlignmentOnly[8];
			int8_t ___cVal_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uiVal_13_OffsetPadding[8];
			// System.UInt16 System.Variant::uiVal
			uint16_t ___uiVal_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uiVal_13_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uiVal_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulVal_14_OffsetPadding[8];
			// System.UInt32 System.Variant::ulVal
			uint32_t ___ulVal_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulVal_14_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulVal_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ullVal_15_OffsetPadding[8];
			// System.UInt64 System.Variant::ullVal
			uint64_t ___ullVal_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ullVal_15_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ullVal_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intVal_16_OffsetPadding[8];
			// System.Int32 System.Variant::intVal
			int32_t ___intVal_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___intVal_16_OffsetPadding_forAlignmentOnly[8];
			int32_t ___intVal_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uintVal_17_OffsetPadding[8];
			// System.UInt32 System.Variant::uintVal
			uint32_t ___uintVal_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uintVal_17_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uintVal_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___pdispVal_18_OffsetPadding[8];
			// System.IntPtr System.Variant::pdispVal
			intptr_t ___pdispVal_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___pdispVal_18_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___pdispVal_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bRecord_19_OffsetPadding[8];
			// System.BRECORD System.Variant::bRecord
			BRECORD_tDDC5F1A5DC569C234C6141FCBA5F8DE8293BC601  ___bRecord_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bRecord_19_OffsetPadding_forAlignmentOnly[8];
			BRECORD_tDDC5F1A5DC569C234C6141FCBA5F8DE8293BC601  ___bRecord_19_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_vt_0() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___vt_0)); }
	inline int16_t get_vt_0() const { return ___vt_0; }
	inline int16_t* get_address_of_vt_0() { return &___vt_0; }
	inline void set_vt_0(int16_t value)
	{
		___vt_0 = value;
	}

	inline static int32_t get_offset_of_wReserved1_1() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___wReserved1_1)); }
	inline uint16_t get_wReserved1_1() const { return ___wReserved1_1; }
	inline uint16_t* get_address_of_wReserved1_1() { return &___wReserved1_1; }
	inline void set_wReserved1_1(uint16_t value)
	{
		___wReserved1_1 = value;
	}

	inline static int32_t get_offset_of_wReserved2_2() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___wReserved2_2)); }
	inline uint16_t get_wReserved2_2() const { return ___wReserved2_2; }
	inline uint16_t* get_address_of_wReserved2_2() { return &___wReserved2_2; }
	inline void set_wReserved2_2(uint16_t value)
	{
		___wReserved2_2 = value;
	}

	inline static int32_t get_offset_of_wReserved3_3() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___wReserved3_3)); }
	inline uint16_t get_wReserved3_3() const { return ___wReserved3_3; }
	inline uint16_t* get_address_of_wReserved3_3() { return &___wReserved3_3; }
	inline void set_wReserved3_3(uint16_t value)
	{
		___wReserved3_3 = value;
	}

	inline static int32_t get_offset_of_llVal_4() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___llVal_4)); }
	inline int64_t get_llVal_4() const { return ___llVal_4; }
	inline int64_t* get_address_of_llVal_4() { return &___llVal_4; }
	inline void set_llVal_4(int64_t value)
	{
		___llVal_4 = value;
	}

	inline static int32_t get_offset_of_lVal_5() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___lVal_5)); }
	inline int32_t get_lVal_5() const { return ___lVal_5; }
	inline int32_t* get_address_of_lVal_5() { return &___lVal_5; }
	inline void set_lVal_5(int32_t value)
	{
		___lVal_5 = value;
	}

	inline static int32_t get_offset_of_bVal_6() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___bVal_6)); }
	inline uint8_t get_bVal_6() const { return ___bVal_6; }
	inline uint8_t* get_address_of_bVal_6() { return &___bVal_6; }
	inline void set_bVal_6(uint8_t value)
	{
		___bVal_6 = value;
	}

	inline static int32_t get_offset_of_iVal_7() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___iVal_7)); }
	inline int16_t get_iVal_7() const { return ___iVal_7; }
	inline int16_t* get_address_of_iVal_7() { return &___iVal_7; }
	inline void set_iVal_7(int16_t value)
	{
		___iVal_7 = value;
	}

	inline static int32_t get_offset_of_fltVal_8() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___fltVal_8)); }
	inline float get_fltVal_8() const { return ___fltVal_8; }
	inline float* get_address_of_fltVal_8() { return &___fltVal_8; }
	inline void set_fltVal_8(float value)
	{
		___fltVal_8 = value;
	}

	inline static int32_t get_offset_of_dblVal_9() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___dblVal_9)); }
	inline double get_dblVal_9() const { return ___dblVal_9; }
	inline double* get_address_of_dblVal_9() { return &___dblVal_9; }
	inline void set_dblVal_9(double value)
	{
		___dblVal_9 = value;
	}

	inline static int32_t get_offset_of_boolVal_10() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___boolVal_10)); }
	inline int16_t get_boolVal_10() const { return ___boolVal_10; }
	inline int16_t* get_address_of_boolVal_10() { return &___boolVal_10; }
	inline void set_boolVal_10(int16_t value)
	{
		___boolVal_10 = value;
	}

	inline static int32_t get_offset_of_bstrVal_11() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___bstrVal_11)); }
	inline intptr_t get_bstrVal_11() const { return ___bstrVal_11; }
	inline intptr_t* get_address_of_bstrVal_11() { return &___bstrVal_11; }
	inline void set_bstrVal_11(intptr_t value)
	{
		___bstrVal_11 = value;
	}

	inline static int32_t get_offset_of_cVal_12() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___cVal_12)); }
	inline int8_t get_cVal_12() const { return ___cVal_12; }
	inline int8_t* get_address_of_cVal_12() { return &___cVal_12; }
	inline void set_cVal_12(int8_t value)
	{
		___cVal_12 = value;
	}

	inline static int32_t get_offset_of_uiVal_13() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___uiVal_13)); }
	inline uint16_t get_uiVal_13() const { return ___uiVal_13; }
	inline uint16_t* get_address_of_uiVal_13() { return &___uiVal_13; }
	inline void set_uiVal_13(uint16_t value)
	{
		___uiVal_13 = value;
	}

	inline static int32_t get_offset_of_ulVal_14() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___ulVal_14)); }
	inline uint32_t get_ulVal_14() const { return ___ulVal_14; }
	inline uint32_t* get_address_of_ulVal_14() { return &___ulVal_14; }
	inline void set_ulVal_14(uint32_t value)
	{
		___ulVal_14 = value;
	}

	inline static int32_t get_offset_of_ullVal_15() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___ullVal_15)); }
	inline uint64_t get_ullVal_15() const { return ___ullVal_15; }
	inline uint64_t* get_address_of_ullVal_15() { return &___ullVal_15; }
	inline void set_ullVal_15(uint64_t value)
	{
		___ullVal_15 = value;
	}

	inline static int32_t get_offset_of_intVal_16() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___intVal_16)); }
	inline int32_t get_intVal_16() const { return ___intVal_16; }
	inline int32_t* get_address_of_intVal_16() { return &___intVal_16; }
	inline void set_intVal_16(int32_t value)
	{
		___intVal_16 = value;
	}

	inline static int32_t get_offset_of_uintVal_17() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___uintVal_17)); }
	inline uint32_t get_uintVal_17() const { return ___uintVal_17; }
	inline uint32_t* get_address_of_uintVal_17() { return &___uintVal_17; }
	inline void set_uintVal_17(uint32_t value)
	{
		___uintVal_17 = value;
	}

	inline static int32_t get_offset_of_pdispVal_18() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___pdispVal_18)); }
	inline intptr_t get_pdispVal_18() const { return ___pdispVal_18; }
	inline intptr_t* get_address_of_pdispVal_18() { return &___pdispVal_18; }
	inline void set_pdispVal_18(intptr_t value)
	{
		___pdispVal_18 = value;
	}

	inline static int32_t get_offset_of_bRecord_19() { return static_cast<int32_t>(offsetof(Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18, ___bRecord_19)); }
	inline BRECORD_tDDC5F1A5DC569C234C6141FCBA5F8DE8293BC601  get_bRecord_19() const { return ___bRecord_19; }
	inline BRECORD_tDDC5F1A5DC569C234C6141FCBA5F8DE8293BC601 * get_address_of_bRecord_19() { return &___bRecord_19; }
	inline void set_bRecord_19(BRECORD_tDDC5F1A5DC569C234C6141FCBA5F8DE8293BC601  value)
	{
		___bRecord_19 = value;
	}
};


// System.Version_VersionResult
struct  VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE 
{
public:
	// System.Version System.Version_VersionResult::m_parsedVersion
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___m_parsedVersion_0;
	// System.Version_ParseFailureKind System.Version_VersionResult::m_failure
	int32_t ___m_failure_1;
	// System.String System.Version_VersionResult::m_exceptionArgument
	String_t* ___m_exceptionArgument_2;
	// System.String System.Version_VersionResult::m_argumentName
	String_t* ___m_argumentName_3;
	// System.Boolean System.Version_VersionResult::m_canThrow
	bool ___m_canThrow_4;

public:
	inline static int32_t get_offset_of_m_parsedVersion_0() { return static_cast<int32_t>(offsetof(VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE, ___m_parsedVersion_0)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_m_parsedVersion_0() const { return ___m_parsedVersion_0; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_m_parsedVersion_0() { return &___m_parsedVersion_0; }
	inline void set_m_parsedVersion_0(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___m_parsedVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parsedVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_failure_1() { return static_cast<int32_t>(offsetof(VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE, ___m_failure_1)); }
	inline int32_t get_m_failure_1() const { return ___m_failure_1; }
	inline int32_t* get_address_of_m_failure_1() { return &___m_failure_1; }
	inline void set_m_failure_1(int32_t value)
	{
		___m_failure_1 = value;
	}

	inline static int32_t get_offset_of_m_exceptionArgument_2() { return static_cast<int32_t>(offsetof(VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE, ___m_exceptionArgument_2)); }
	inline String_t* get_m_exceptionArgument_2() const { return ___m_exceptionArgument_2; }
	inline String_t** get_address_of_m_exceptionArgument_2() { return &___m_exceptionArgument_2; }
	inline void set_m_exceptionArgument_2(String_t* value)
	{
		___m_exceptionArgument_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exceptionArgument_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_argumentName_3() { return static_cast<int32_t>(offsetof(VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE, ___m_argumentName_3)); }
	inline String_t* get_m_argumentName_3() const { return ___m_argumentName_3; }
	inline String_t** get_address_of_m_argumentName_3() { return &___m_argumentName_3; }
	inline void set_m_argumentName_3(String_t* value)
	{
		___m_argumentName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_argumentName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_canThrow_4() { return static_cast<int32_t>(offsetof(VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE, ___m_canThrow_4)); }
	inline bool get_m_canThrow_4() const { return ___m_canThrow_4; }
	inline bool* get_address_of_m_canThrow_4() { return &___m_canThrow_4; }
	inline void set_m_canThrow_4(bool value)
	{
		___m_canThrow_4 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Version/VersionResult
struct VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshaled_pinvoke
{
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	char* ___m_exceptionArgument_2;
	char* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};
// Native definition for COM marshalling of System.Version/VersionResult
struct VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshaled_com
{
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___m_parsedVersion_0;
	int32_t ___m_failure_1;
	Il2CppChar* ___m_exceptionArgument_2;
	Il2CppChar* ___m_argumentName_3;
	int32_t ___m_canThrow_4;
};

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct  ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.FormatException
struct  FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>
struct  Func_2_t13827C9725E0D12567E029E178981FB7D0E13430  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>
struct  Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.MemberAccessException
struct  MemberAccessException_tDA869AFFB4FC1EA0EEF3143D85999710AC4774F0  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Reflection.InvalidFilterCriteriaException
struct  InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA  : public ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74
{
public:

public:
};


// System.Reflection.TypeInfo
struct  TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC  : public Type_t
{
public:

public:
};


// System.Runtime.Serialization.SerializationException
struct  SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

struct SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_17;

public:
	inline static int32_t get_offset_of__nullMessage_17() { return static_cast<int32_t>(offsetof(SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_StaticFields, ____nullMessage_17)); }
	inline String_t* get__nullMessage_17() const { return ____nullMessage_17; }
	inline String_t** get_address_of__nullMessage_17() { return &____nullMessage_17; }
	inline void set__nullMessage_17(String_t* value)
	{
		____nullMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullMessage_17), (void*)value);
	}
};


// System.TypeInitializationException
struct  TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.TypeInitializationException::_typeName
	String_t* ____typeName_17;

public:
	inline static int32_t get_offset_of__typeName_17() { return static_cast<int32_t>(offsetof(TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE, ____typeName_17)); }
	inline String_t* get__typeName_17() const { return ____typeName_17; }
	inline String_t** get_address_of__typeName_17() { return &____typeName_17; }
	inline void set__typeName_17(String_t* value)
	{
		____typeName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeName_17), (void*)value);
	}
};


// System.TypeLoadException
struct  TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.IO.FileNotFoundException
struct  FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// System.MissingMemberException
struct  MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD  : public MemberAccessException_tDA869AFFB4FC1EA0EEF3143D85999710AC4774F0
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_18), (void*)value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___Signature_19)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Signature_19), (void*)value);
	}
};


// System.ObjectDisposedException
struct  ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A  : public InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// System.OverflowException
struct  OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5  : public NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010
{
public:

public:
};


// System.RuntimeType
struct  RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F  : public TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D * ___type_info_26;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_27;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_tF21A59967629968D0BE5D0DAF677662824E9629D * ___m_serializationCtor_28;

public:
	inline static int32_t get_offset_of_type_info_26() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F, ___type_info_26)); }
	inline MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D * get_type_info_26() const { return ___type_info_26; }
	inline MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D ** get_address_of_type_info_26() { return &___type_info_26; }
	inline void set_type_info_26(MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D * value)
	{
		___type_info_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_info_26), (void*)value);
	}

	inline static int32_t get_offset_of_GenericCache_27() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F, ___GenericCache_27)); }
	inline RuntimeObject * get_GenericCache_27() const { return ___GenericCache_27; }
	inline RuntimeObject ** get_address_of_GenericCache_27() { return &___GenericCache_27; }
	inline void set_GenericCache_27(RuntimeObject * value)
	{
		___GenericCache_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericCache_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_28() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F, ___m_serializationCtor_28)); }
	inline RuntimeConstructorInfo_tF21A59967629968D0BE5D0DAF677662824E9629D * get_m_serializationCtor_28() const { return ___m_serializationCtor_28; }
	inline RuntimeConstructorInfo_tF21A59967629968D0BE5D0DAF677662824E9629D ** get_address_of_m_serializationCtor_28() { return &___m_serializationCtor_28; }
	inline void set_m_serializationCtor_28(RuntimeConstructorInfo_tF21A59967629968D0BE5D0DAF677662824E9629D * value)
	{
		___m_serializationCtor_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializationCtor_28), (void*)value);
	}
};

struct RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_StaticFields
{
public:
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___s_SICtorParamTypes_15;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___s_typedRef_25;

public:
	inline static int32_t get_offset_of_ValueType_10() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_StaticFields, ___ValueType_10)); }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * get_ValueType_10() const { return ___ValueType_10; }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F ** get_address_of_ValueType_10() { return &___ValueType_10; }
	inline void set_ValueType_10(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * value)
	{
		___ValueType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueType_10), (void*)value);
	}

	inline static int32_t get_offset_of_EnumType_11() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_StaticFields, ___EnumType_11)); }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * get_EnumType_11() const { return ___EnumType_11; }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F ** get_address_of_EnumType_11() { return &___EnumType_11; }
	inline void set_EnumType_11(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * value)
	{
		___EnumType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnumType_11), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectType_12() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_StaticFields, ___ObjectType_12)); }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * get_ObjectType_12() const { return ___ObjectType_12; }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F ** get_address_of_ObjectType_12() { return &___ObjectType_12; }
	inline void set_ObjectType_12(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * value)
	{
		___ObjectType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectType_12), (void*)value);
	}

	inline static int32_t get_offset_of_StringType_13() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_StaticFields, ___StringType_13)); }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * get_StringType_13() const { return ___StringType_13; }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F ** get_address_of_StringType_13() { return &___StringType_13; }
	inline void set_StringType_13(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * value)
	{
		___StringType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringType_13), (void*)value);
	}

	inline static int32_t get_offset_of_DelegateType_14() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_StaticFields, ___DelegateType_14)); }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * get_DelegateType_14() const { return ___DelegateType_14; }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F ** get_address_of_DelegateType_14() { return &___DelegateType_14; }
	inline void set_DelegateType_14(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * value)
	{
		___DelegateType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelegateType_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_15() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_StaticFields, ___s_SICtorParamTypes_15)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_s_SICtorParamTypes_15() const { return ___s_SICtorParamTypes_15; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_s_SICtorParamTypes_15() { return &___s_SICtorParamTypes_15; }
	inline void set_s_SICtorParamTypes_15(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___s_SICtorParamTypes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SICtorParamTypes_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_typedRef_25() { return static_cast<int32_t>(offsetof(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_StaticFields, ___s_typedRef_25)); }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * get_s_typedRef_25() const { return ___s_typedRef_25; }
	inline RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F ** get_address_of_s_typedRef_25() { return &___s_typedRef_25; }
	inline void set_s_typedRef_25(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * value)
	{
		___s_typedRef_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typedRef_25), (void*)value);
	}
};


// Unity.ThrowStub
struct  ThrowStub_tFA0E21DBAA52F61535595DCC8B44B0CD087A0406  : public ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
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

IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke(const InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78& unmarshaled, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back(const InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke& marshaled, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78& unmarshaled);
IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke& marshaled);

// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m552C133A8966B9ED91540130ACA9BD367212EED4_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// TResult System.Func`4<System.Object,System.Object,System.Boolean,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_4_Invoke_m48AC95858F77056A04413DD54457CA20A88EA954_gshared (Func_4_tBDBA893DF2D6BD3ADD95FBC243F607CECF2077B0 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, bool ___arg32, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);

// System.Void System.TypeIdentifiers/Display::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display__ctor_mA1C635B551554AB64CB2761AE4343A7AAC521D86 (Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5 * __this, String_t* ___displayName0, const RuntimeMethod* method);
// System.Void System.TypeNames/ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_mB865CB8CFBAD77532030E15AB4DF856DB368D307 (ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421 * __this, const RuntimeMethod* method);
// System.String System.TypeIdentifiers/Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_m9B890BB08D3AE39E9CF2AAF14D5F33C759CC6C36 (Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5 * __this, const RuntimeMethod* method);
// System.String System.TypeSpec::UnescapeInternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_UnescapeInternalName_m7B3F1C73984FAF9159F89F62C97AF144EDC4347E (String_t* ___displayName0, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mF67B7FA639B457BDFB2103D7C21C8059E806175A (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7 (Exception_t * __this, int32_t ___hr0, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB (String_t* ___key0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mB0550111A1A8D18B697B618F811A5B20C160D949 (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfo_GetString_m06805A4E368E0B98D5FA70A9333B277CBDD84CF4 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_m76F759ED00FA218FFC522C32626B851FDE849AD6 (Exception_t * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method);
// System.String System.TypeInitializationException::get_TypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeInitializationException_get_TypeName_mB1D7D9D4E2400579F85B80BA0B012504AB15A5A8 (TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, RuntimeObject * ___value1, Type_t * ___type2, const RuntimeMethod* method);
// System.Void System.TypeLoadException::SetMessageField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException_SetMessageField_m23CD2003031C6BF6A4AD01D4FFF2DC786DA580E0 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831 (const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// System.Void System.TypeLoadException::.ctor(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m6AB219D6FD444BC779001D783A48DE29CCB4D670 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, String_t* ___className0, String_t* ___assemblyName1, String_t* ___messageArg2, int32_t ___resourceId3, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_mB47BD46A0BDBBAF5B47BB62E6EFF8E092E3F3656 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m7C73917D9DC4B8FE4AFEF4BA8EBEDAB046A8D0BD (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.TypeSpec System.TypeSpec::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * TypeSpec_Parse_m7DDF2C8D81E80856BA9EEFDB84421AE2F81B58C1 (String_t* ___typeName0, const RuntimeMethod* method);
// System.Type System.TypeSpec::Resolve(System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * ___assemblyResolver0, Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * ___typeResolver1, bool ___throwOnError2, bool ___ignoreCase3, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m7D88938E443BA9FAEA8615EEFBAE8E23B1BE6BD2 (ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.TypeIdentifier>::GetEnumerator()
inline Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628  List_1_GetEnumerator_m2E4A41A21C3DEA2E56F3BAAC22CAC54ADDAAE89A (List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628  (*) (List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.TypeIdentifier>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m1FE262A1143A9C0B744CAE59FDF00A529A47DA7C_inline (Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.TypeIdentifier>::MoveNext()
inline bool Enumerator_MoveNext_m5FA83E49042D278C984097B83622E3165E4564AD (Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.TypeIdentifier>::Dispose()
inline void Enumerator_Dispose_m9FE451117A551A3AD97A0FC27C1C159B551B25F3 (Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<System.TypeSpec>::get_Item(System.Int32)
inline TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_inline (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * (*) (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.String System.TypeSpec::get_DisplayFullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_get_DisplayFullName_mE25183941E02D8885546E07565C790AF63A890FA (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.TypeSpec>::get_Count()
inline int32_t List_1_get_Count_m516B184735436F6F6363D5BDBC6469AAA19A10A4_inline (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Text.StringBuilder System.TypeSpec::GetModifierString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * TypeSpec_GetModifierString_m879659900335844914FDD6BEB1B373531DC990FE (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.ModifierSpec>::GetEnumerator()
inline Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D  List_1_GetEnumerator_m7F1A981C4F56927EB6D80776859EFEB2A949645F (List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D  (*) (List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.ModifierSpec>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mABF1CE6A366A00FB242CDDC13D80881F14052780_inline (Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ModifierSpec>::MoveNext()
inline bool Enumerator_MoveNext_mD91BF5A0EE3F48F18729E9A081A22223CBA9134E (Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.ModifierSpec>::Dispose()
inline void Enumerator_Dispose_m4B5D4976D2C83F3DB387137CD7DE096E0C28370B (Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.String System.TypeSpec::GetDisplayFullName(System.TypeSpec/DisplayNameFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_GetDisplayFullName_m4D6D7AED6CBFC324310480BA07461682A09822B6 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.TypeSpec System.TypeSpec::Parse(System.String,System.Int32&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405 (String_t* ___name0, int32_t* ___p1, bool ___is_recurse2, bool ___allow_aqn3, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetType_m77EF3A5A858B45C53D8BF27C74FA00CA83B53E59 (String_t* ___typeName0, bool ___throwOnError1, bool ___ignoreCase2);
// System.Void System.Reflection.AssemblyName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyName__ctor_m9B2E1009DD65CCC1807A629A09D7CDEC26756FBF (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// TResult System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>::Invoke(T)
inline Assembly_t * Func_2_Invoke_m18E0D4D4C27DA4526F57145018F8C5B7D4555786 (Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * __this, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * ___arg0, const RuntimeMethod* method)
{
	return ((  Assembly_t * (*) (Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 *, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 *, const RuntimeMethod*))Func_2_Invoke_m552C133A8966B9ED91540130ACA9BD367212EED4_gshared)(__this, ___arg0, method);
}
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_Load_m4640304E91781FC3D197CD014B0C2DCEAFCFFF55 (String_t* ___assemblyString0, const RuntimeMethod* method);
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m4B6A318CE4104781ABF30A2BBBCCCFB0FE342316 (Assembly_t * ___left0, Assembly_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858 (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * __this, String_t* ___message0, const RuntimeMethod* method);
// TResult System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>::Invoke(T1,T2,T3)
inline Type_t * Func_4_Invoke_m95D3A234FD84599FDA35F785ACE24B58A5103D13 (Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * __this, Assembly_t * ___arg10, String_t* ___arg21, bool ___arg32, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF *, Assembly_t *, String_t*, bool, const RuntimeMethod*))Func_4_Invoke_m48AC95858F77056A04413DD54457CA20A88EA954_gshared)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.TypeLoadException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m80951BFF6EB67A1ED3052D05569EF70D038B1581 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.TypeIdentifier System.TypeSpec::ParsedTypeIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeSpec_ParsedTypeIdentifier_m9D32F152A6F9863DCF3EFBF495B6CC16747E851E (String_t* ___displayName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.TypeIdentifier>::.ctor()
inline void List_1__ctor_m21E88645DC77FDCB68ED0EA3602951A2609C963C (List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.TypeIdentifier>::Add(T)
inline void List_1_Add_m191DF682AFC83E635052DB3C303E514D6D7233A2 (List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.ModifierSpec>::.ctor()
inline void List_1__ctor_mA97DC4CD260A1FD5F8FD67E06EE8F27E5C03CF63 (List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.ModifierSpec>::Add(T)
inline void List_1_Add_mEA738D5941352BC4540C28F701A4BF01E2DF7914 (List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B (Il2CppChar ___c0, const RuntimeMethod* method);
// System.TypeIdentifier System.TypeIdentifiers::FromDisplay(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeIdentifiers_FromDisplay_m08FB8BE03D80603F9A030774E218310DC96693CE (String_t* ___displayName0, const RuntimeMethod* method);
// System.Void System.TypeSpec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec__ctor_m18DCF64756F091CE7A7DA6CDAD3142419602D901 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, const RuntimeMethod* method);
// System.Void System.TypeSpec::SkipSpace(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec_SkipSpace_mF388B6F9C82F795BA722B706A5435B0E799A531C (String_t* ___name0, int32_t* ___pos1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.TypeSpec::AddName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, String_t* ___type_name0, const RuntimeMethod* method);
// System.Void System.PointerSpec::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerSpec__ctor_mB00CD482EDE6910DE19A767C128B00785F1A2136 (PointerSpec_tBCE1666DC24EC6E4E5376FEC214499984EC26892 * __this, int32_t ___pointer_level0, const RuntimeMethod* method);
// System.Void System.TypeSpec::AddModifier(System.ModifierSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec_AddModifier_m082500BAE4A512BA0E84CC85A71F4A67DA885909 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, RuntimeObject* ___md0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.TypeSpec>::.ctor()
inline void List_1__ctor_mAF11022CD0FF8181D72047FFC57B48590F17FFAC (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Boolean System.TypeSpec::get_HasModifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeSpec_get_HasModifiers_mF783ED5C395D4ACB94D30014B9F79E19E90EC9FD (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.TypeSpec>::Add(T)
inline void List_1_Add_m12E0FC5DF0E1CB81E7DEADBBDD311E3E1AFC2DB4 (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * __this, TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA *, TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.TypeSpec::BoundCheck(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec_BoundCheck_m5CF5E6F2632D8D4D205DC26F6666BE9EA7D874FB (int32_t ___idx0, String_t* ___s1, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArraySpec::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySpec__ctor_m7829BADEF006060440EBF1330EC85B9FF17CE6B4 (ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970 * __this, int32_t ___dimensions0, bool ___bound1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_m924E721654B7BDF09AA6E20C6E8D2BC4D4AF9DB7 (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_m55ECD5C1B5F908CC9D10FDA743C9014CDB45E044 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mDEB4099D238E5846246F0ACED3FF9AD9C93D8ECA (FieldInfo_t * __this, const RuntimeMethod* method);
// System.RuntimeType System.Reflection.RuntimeFieldInfo::GetDeclaringTypeInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * RuntimeFieldInfo_GetDeclaringTypeInternal_m8325660CADABFA47D55C9CD649176638BE521046 (RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * __this, const RuntimeMethod* method);
// System.Boolean System.RuntimeType::op_Inequality(System.RuntimeType,System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeType_op_Inequality_mA98A719712593FEE5DCCFDB47CCABDB58BEE1B0D (RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___left0, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___right1, const RuntimeMethod* method);
// System.Void System.MissingMemberException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingMemberException__ctor_m2F8C7F0015B6EFEC5BD07F8240D53C2AEE4649DC (MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m8E39430EE4B70E1AE690B51E9BE681C7758DFF5A (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8 (Type_t * __this, const RuntimeMethod* method);
// System.IntPtr System.RuntimeFieldHandle::get_Value()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t RuntimeFieldHandle_get_Value_m2C81CBF4FC895E7A343C344BE8EE96D9DEBEA3DA_inline (RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF * __this, const RuntimeMethod* method);
// System.TypedReference System.TypedReference::MakeTypedReferenceInternal(System.Object,System.Reflection.FieldInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8  TypedReference_MakeTypedReferenceInternal_mD1DFB634CA2F3B5335B4FFDA97A25DEB90DD170C (RuntimeObject * ___target0, FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ___fields1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int32 System.TypedReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypedReference_GetHashCode_m6A586AC495B0AB6D55E7EAE301C82BB2752A4289 (TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.TypedReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedReference_Equals_m167F7EDD4393DE114882916B753AC2D23A3840EA (TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_IsNull_mEB01FA7670F5CA3BE36507B9528EC6F1D5AAC6B4 (intptr_t* __this, const RuntimeMethod* method);
// System.Boolean System.TypedReference::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedReference_get_IsNull_mD2B185E19B07577D8434A7DAD3AF5F9E2D09C532 (TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.UInt16::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_m91AEACDAA81D12A2A8D868938F797B112330EC44 (uint16_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt16::CompareTo(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_mC43C95442258DFAD3852458A9EC9E1CB76EEE644 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt16::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_mBCD7FC4A11D0CEEFF4BC6559137A9E397D7017B8 (uint16_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt16::Equals(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_m276F4220CB70A960FF4E874EE1D388C277EF806C (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m6EA43320256903F18CCA1A82905DB6F75BC4FB6E (uint16_t* __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9 (const RuntimeMethod* method);
// System.String System.Number::FormatUInt32(System.UInt32,System.String,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Number_FormatUInt32_m585E2571063A256E46836A51BC4A54CFF151BDEE (uint32_t ___value0, String_t* ___format1, NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___info2, const RuntimeMethod* method);
// System.String System.UInt16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m4B42F0450EE965C7C9DD2AB19EB000D47CE978A2 (uint16_t* __this, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A (RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.String System.UInt16::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m50316C445AD23CCA40AA52A381C5E06A3786F12A (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt16::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m46247C2ED36EE841B11C566CC64195F333935FE3 (uint16_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mD0CBA1F073A0E16528C1A7EB4E8A9892D218895B (uint16_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254 (String_t* ___s0, int32_t ___style1, NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___info2, const RuntimeMethod* method);
// System.Void System.Globalization.NumberFormatInfo::ValidateParseStyleInteger(System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo_ValidateParseStyleInteger_m5BD1C04C26D5589F0DFA5953294B72E1DDC2B7E3 (int32_t ___style0, const RuntimeMethod* method);
// System.UInt32 System.Number::ParseUInt32(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Number_ParseUInt32_mF280A62925FED84E23D64DC6B86BC50AD96896FB (String_t* ___value0, int32_t ___options1, NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numfmt2, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mE1A042FFEBF00B79612E8595B8D49785B357D731 (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, const RuntimeMethod* method);
// System.TypeCode System.UInt16::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetTypeCode_m3F7CA335640E0702177D473528E70C8D58E0E068 (uint16_t* __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m1AFE52438BC600124643ECEB4EDF9C3FE21171FE (uint16_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt16::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_System_IConvertible_ToBoolean_mC81E40A61B311E3D9E69439B629E90816966F72A (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m14666E8E6027FFF4BFA6DA0563A4CAAEA6A6989B (uint16_t ___value0, const RuntimeMethod* method);
// System.Char System.UInt16::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UInt16_System_IConvertible_ToChar_m6CD04280CB5C9546579E13211911F5B42B498F0F (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m4455F931B18E5D87DE1F99B2686F3D4770E9D177 (uint16_t ___value0, const RuntimeMethod* method);
// System.SByte System.UInt16::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t UInt16_System_IConvertible_ToSByte_mA4AD532B0AF50FD2F6AEBCDB581EA1EE43FCA3CF (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m4D9F94693332601CE2F1CF8DB9933F7C0FE882B1 (uint16_t ___value0, const RuntimeMethod* method);
// System.Byte System.UInt16::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UInt16_System_IConvertible_ToByte_mA95B992F24924E773C5602A6FEE29BDE5EE2072F (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m57BC4B92DCAEAA22820CD1915778B407AC23D9C5 (uint16_t ___value0, const RuntimeMethod* method);
// System.Int16 System.UInt16::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UInt16_System_IConvertible_ToInt16_m0818293E3F1271A2AD126AE950B71DBDDD3286D3 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.UInt16::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt16_System_IConvertible_ToUInt16_mC5507444643901A95C85AA36B8F702EEA4616C81 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8A95C977AFB27DA577E58CAE3255F8B24EE79517 (uint16_t ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt16::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_System_IConvertible_ToInt32_mA3C6E3F7DE9C6C893CAA5301EEDA26036554F34C (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mED4922B504189D92D2F6F52BB959895A5979EE40 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.UInt16::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt16_System_IConvertible_ToUInt32_m6DA7A076663655EB849211FF9BD16582F863C5F3 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mE191CDE636529E410288B04286028D56CBC8EE53 (uint16_t ___value0, const RuntimeMethod* method);
// System.Int64 System.UInt16::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UInt16_System_IConvertible_ToInt64_mC204E05417B4F982A189912080F57F20E24275CB (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m13A97BCFDAB847AC0D6379DA3FBE031509801944 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.UInt16::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt16_System_IConvertible_ToUInt64_m510EF773A50C42F0B60B2C8AE753FC7873B3A97B (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mFBCC3DBA2C1A176506B5B23193DD0F5F27085EAA (uint16_t ___value0, const RuntimeMethod* method);
// System.Single System.UInt16::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UInt16_System_IConvertible_ToSingle_m6B087CB34DBF0B394642977BB68F8B503DED3C7E (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m5427641E8803E839561F9C10071C3E33A1A6F854 (uint16_t ___value0, const RuntimeMethod* method);
// System.Double System.UInt16::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UInt16_System_IConvertible_ToDouble_m62236A4E72E544543EA440ED142B8BA093ADCB40 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mFD0BC78E6BE4EDBFD7A0767E7D95A39E40F0260F (uint16_t ___value0, const RuntimeMethod* method);
// System.Decimal System.UInt16::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt16_System_IConvertible_ToDecimal_m74D92DB8814035966C6CFF447753338B03287E43 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.DateTime System.UInt16::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt16_System_IConvertible_ToDateTime_m7AD170006FECE0BAC29179FFE72D7AC1B0D0C735 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.Convert::DefaultToType(System.IConvertible,System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_DefaultToType_m899D5F6B9FE3E8B878BC56172C6BFE788B6C1BE3 (RuntimeObject* ___value0, Type_t * ___targetType1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Object System.UInt16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UInt16_System_IConvertible_ToType_m2FD8E8941C266AE4254B1C4C068F4C5238C08695 (uint16_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.UInt32::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mA6BFE8D9033149D2FEF46526E251A3CDEB1889EB (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt32::CompareTo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mB4DB0539EACF9C37A2DDDB1439F553E0CD2AA380 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m14536B6BD41067948C7ED484437DF75E3414F0D1 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_m791E3E038DAA8DC313758009B1C532CD91194B0D (uint32_t* __this, const RuntimeMethod* method);
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m7D8A934AF1D74C5C8194D1556AA71BBA0D4600F2 (uint32_t* __this, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mC81601CD79044D74065228749C2CA9B629CFA3EA (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m57BE7A0F4A653986FEAC4794CD13B04CE012F4EE (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Boolean System.Number::TryParseUInt32(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Number_TryParseUInt32_m5D5F513C1F31174E132E2646CC964C32E55F9436 (String_t* ___s0, int32_t ___style1, NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___info2, uint32_t* ___result3, const RuntimeMethod* method);
// System.TypeCode System.UInt32::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetTypeCode_mA0E730CD3883A383AC3E4BA4FD639811906BDD90 (uint32_t* __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m26CFF98BC762FA7371C580FB19013250FD567F46 (uint32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_System_IConvertible_ToBoolean_mFC8A4EC8666918A944AED690BAA21AD7B6132A7E (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m56A1099464A288FD3AB6F82B7433DB063F671B29 (uint32_t ___value0, const RuntimeMethod* method);
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UInt32_System_IConvertible_ToChar_mC0A386C36A0EBC656E6F887A1CCD5DBBFF078030 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m2BA3408A7B10119B60B923928EFCFA17D3C46D50 (uint32_t ___value0, const RuntimeMethod* method);
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t UInt32_System_IConvertible_ToSByte_mD7E08EC2B52A7612582C3E8C26878BAC0AB80984 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m5B2E3D791EE1E14A7604D126C24AA62FE2587B60 (uint32_t ___value0, const RuntimeMethod* method);
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UInt32_System_IConvertible_ToByte_m9386861ED644D7B5E76BD0D7FB86DEEB0173A0A5 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_mE8E094D5AD321E5E6756E332116FAF1C084A1CD2 (uint32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UInt32_System_IConvertible_ToInt16_mC8FA3B04E544531449665298BE73AB2F486AE393 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m19D8F9B74EB5F96C835FA5045E925F000750A8B3 (uint32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt32_System_IConvertible_ToUInt16_mBEE9936EF6F5D9D150E507F28CDA17A8C1C92E1C (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m966337716B0CC4A45307D82BC21BCA1F8BB22D1C (uint32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_System_IConvertible_ToInt32_mB0FCB9A9ACF700AAD49333618A4B819E24F0F0B9 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt32_System_IConvertible_ToUInt32_m7F98AF966A31B1A315E7DFFEE3F2A68D48E690AF (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m32144C3A1499C6810428CC3F22BCB095EFFEE99F (uint32_t ___value0, const RuntimeMethod* method);
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UInt32_System_IConvertible_ToInt64_m6E1441BF4C3D5FDFCAEEED65CFE96E6D9F08007B (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mC8F7AEA2A46B8BEB45B65312F49EEE2540B596EC (uint32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt32_System_IConvertible_ToUInt64_m659A2E594AAC8E26152B3EAAF1D80CECD2F43120 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m6F50A25E0020F35AEC587BE3A91E1A6D78351249 (uint32_t ___value0, const RuntimeMethod* method);
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UInt32_System_IConvertible_ToSingle_m2B438F2707D2FB9C8FDC6D79B263677FA3C37096 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mA48AAD04072EF9CD5A30C2B2EC69A796A0BA6194 (uint32_t ___value0, const RuntimeMethod* method);
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UInt32_System_IConvertible_ToDouble_m4A3EDEA2044FAA202D4ED3C81672CF0308FAE7E8 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_m291E4FE569EB911F06EF4269522C1DA0BEB7CB5F (uint32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt32_System_IConvertible_ToDecimal_m1C78EB4A4D9A092C050487129E0AE477ADBBE5A7 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt32_System_IConvertible_ToDateTime_m450F7E1864FB6A396E9009116F8301B972DAE724 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UInt32_System_IConvertible_ToType_mEFD4D7AB69CB399E6603ADA3EDDF10FC622E4A3A (uint32_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.UInt64::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_mB5A28DD05266BC32BD6FD24A6659B0464FFA8950 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt64::CompareTo(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m03A38257A9E54676839E92A530E8BB17D6A58873 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt64::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_mE61D24B984F0B91A2FC1094402F1532A0F82C232 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt64::Equals(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_m8C3B2C55776A9086B7F78F6A636F9B15B059F058 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD (uint64_t* __this, const RuntimeMethod* method);
// System.String System.Number::FormatUInt64(System.UInt64,System.String,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Number_FormatUInt64_m04004F09D1913C13C59635153D0F45AF37F8248A (uint64_t ___value0, String_t* ___format1, NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___info2, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672 (uint64_t* __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m6CBBC10ABBA0EE36F5E72F926A38F6CD7F497A55 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mF6F94603E535C161BBD87AC747A1F403C274E8CD (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.UInt64 System.Number::ParseUInt64(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Number_ParseUInt64_m80F0E92F3D98C3390741451845F261F93A103E27 (String_t* ___value0, int32_t ___options1, NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numfmt2, const RuntimeMethod* method);
// System.TypeCode System.UInt64::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetTypeCode_m96414C98F5BEB1E6DD540B07EE96558CE9E313F4 (uint64_t* __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m545BC5397A9E121A21E4891E2A76A8C2B31D59D2 (uint64_t ___value0, const RuntimeMethod* method);
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_System_IConvertible_ToBoolean_mCDB7FA8F90588F8FDDF7F0CB26AF43651F9B3884 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mBFD88FBE8D41F3FEB4049B8EF556C2D996F5F531 (uint64_t ___value0, const RuntimeMethod* method);
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UInt64_System_IConvertible_ToChar_mBB0EEBDF5CB12C5CE93ECD9C39124D33F221A523 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m5F3E822A40FB8BC9DCE9D39C07D0BFDB5CAE38C3 (uint64_t ___value0, const RuntimeMethod* method);
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t UInt64_System_IConvertible_ToSByte_m6309BC2235A2F03BAE4107E9CCDF53604B9E7BB7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mBA74300A0EBF60E75A3ABED4AA4AAB62DF40014A (uint64_t ___value0, const RuntimeMethod* method);
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UInt64_System_IConvertible_ToByte_m4F0E7D7E850AA40CE8FEE68B44B5FF29409CCB27 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_mC121EAEA7C8458D987480F1669C6A40082AA93C1 (uint64_t ___value0, const RuntimeMethod* method);
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UInt64_System_IConvertible_ToInt16_m6D785A19C7E04176E1B60131C70A965ABB427E20 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mC540754A3F101A7A13FB26FD89836025507E7E80 (uint64_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt64_System_IConvertible_ToUInt16_m6B443639CDAEEDBE636A47EF6D07B045B51C2A51 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m4E8E4BA500C8372D58B20E706C76C8126F7F5260 (uint64_t ___value0, const RuntimeMethod* method);
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_System_IConvertible_ToInt32_mBF342D7305B0F4643B8B2FB2EAC54F6B5C943746 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m7DC544C6EB3CA7920C82A243D9C387B462697BAC (uint64_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt64_System_IConvertible_ToUInt32_mFF9B4ABD152C30CB4A9F09BAED4D197245141AF7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m396C2B4FA8F12D0C76E0AA3A31872D93BF5EA11D (uint64_t ___value0, const RuntimeMethod* method);
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UInt64_System_IConvertible_ToInt64_mFA654AF22149F693965B34C380C2FF61764D7BD4 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_System_IConvertible_ToUInt64_m2D81AD0924E713479AACA50B8C236935A2315BB4 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mEB588F7F980A4BF31BDBACC733574C97A32E357A (uint64_t ___value0, const RuntimeMethod* method);
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UInt64_System_IConvertible_ToSingle_m04A4372F398081E930044EEECC7B73B4686EE8F0 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m18E2BC69DA3D88A0C5CD258FFBF1DB5BA097C316 (uint64_t ___value0, const RuntimeMethod* method);
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UInt64_System_IConvertible_ToDouble_mE29DD1148D7D94855DCB7CE8B4FC4B9424A00A82 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mC4A6FC31B0F2C506D113380567B082CCB6A4FEED (uint64_t ___value0, const RuntimeMethod* method);
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt64_System_IConvertible_ToDecimal_mFE274863205856F4B130AD096D6BC7E40AA65FC7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt64_System_IConvertible_ToDateTime_m1DE2B7B00676B061B66F18FCCC7CBC5D848B0EBA (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UInt64_System_IConvertible_ToType_m176FFA8FD3BDEAB82C5BD41CF3CF81C83AC21803 (uint64_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.UIntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIntPtr_get_Size_m063860D6F716C79EE77F379C6B20436413389E0B (const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m41F0CB4E76BAAB1E97D9D92D109C846A8ECC1324 (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.UIntPtr::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2 (uintptr_t* __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.UIntPtr::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m7DB6B4A7AE8195A45E5FB3FEBD2ECB4609D8C084 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.UIntPtr::.ctor(System.Void*)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UIntPtr__ctor_mE1AF12EBFF887C9EAE36A1A90EF530B67FA3B75D_inline (uintptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Boolean System.UIntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m8C135DEDA578597066AB67C1DD5A5A34E4F860EB (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UIntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIntPtr_GetHashCode_m713296172AF735B0CB68B60859FC8EE5B4840D5C (uintptr_t* __this, const RuntimeMethod* method);
// System.String System.UIntPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIntPtr_ToString_m1512332A1A79F9DA551731E9CA7F071A3C88043D (uintptr_t* __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9861690C28AB414534D1A7F599E050DBA7A99303 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_mB6B1C508A6E9BFD526F23A38634C1E703595B733 (uintptr_t* __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method);
// System.Void System.UnSafeCharBuffer::.ctor(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSafeCharBuffer__ctor_mF7AA675CC9B4BF79D4A8FD4EB7146CFFECEEB14D (UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1 (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B (const RuntimeMethod* method);
// System.Void System.Buffer::Memcpy(System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memcpy_m4D475106A101E5ED38EB22776EAAFB6D02F63678 (uint8_t* ___dest0, uint8_t* ___src1, int32_t ___size2, const RuntimeMethod* method);
// System.Void System.UnSafeCharBuffer::AppendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSafeCharBuffer_AppendString_m1E2967E285FC06FDE141B90EF186745D5D2814FE (UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C * __this, String_t* ___stringToAppend0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m3F30AFEB3555E20E995D31713C0604E26B2CF784 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m0B4E20F93B1B34C0B5C4B089F543D1AA338DC9FE (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPointer_mF823CB662C6A04674589640771E6AD6B71093E57 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsByRef_m13C04A998C9B19058B596A81D188B368333D24F8 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_HasElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_HasElementType_m598BEFE66F168CE1D1132C87D394B2EF41F449BF (Type_t * __this, const RuntimeMethod* method);
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_gshared)(__this, method);
}
// System.Type System.Type::GetRootElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetRootElementType_mE4F0579E18FAAEEB2DB86F1315BFBEC1A9A2FD56 (Type_t * __this, const RuntimeMethod* method);
// System.RuntimeType System.UnitySerializationHolder::AddElementTypes(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * UnitySerializationHolder_AddElementTypes_m0C8810EE3D2A09BD766FC74C37086846A0268D45 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___type1, const RuntimeMethod* method);
// System.Reflection.RuntimeAssembly System.RuntimeType::GetRuntimeAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * RuntimeType_GetRuntimeAssembly_m34E13B557A24CE6438916C08EC329EFD16AEBAE4 (RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * __this, const RuntimeMethod* method);
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Int32,System.String,System.Reflection.RuntimeAssembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetUnitySerializationInfo_m86F654140996546DB4D6D8228BF9FE45E9BAEC3E (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, int32_t ___unityType1, String_t* ___data2, RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * ___assembly3, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC9D1E16476E24E1AFE7C59368D3BC0B35F64FBC6 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_m7910CE6C68888C1F863D7A35915391FA33463ECF (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m88AAD9671030A8A96AA87CB95701938FBD8F16E1 (SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type System.UnitySerializationHolder::MakeElementTypes(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UnitySerializationHolder_MakeElementTypes_m53847C6D77B4D1F96596279EBF443F521CAD7B24 (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::op_Equality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Equality_mB2519FFC5324C515ED0181B94A3FA5D6FE99D736 (MethodBase_t * ___left0, MethodBase_t * ___right1, const RuntimeMethod* method);
// System.Void System.UnitySerializationHolder::ThrowInsufficientInformation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC * __this, String_t* ___field0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::op_Inequality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Inequality_mA03AE708DD0D76404AED7C36A75741E2A6BC6BF7 (MethodBase_t * ___left0, MethodBase_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.Module::op_Equality(System.Reflection.Module,System.Reflection.Module)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Module_op_Equality_m3AEF6BCA2C1DA42DEF271D9C168AD6F5DFFA497A (Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7 * ___left0, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7 * ___right1, const RuntimeMethod* method);
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m09E6AB0EC85DC2C65928B946609823DBB90CF59D (RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** ___fields2, const RuntimeMethod* method);
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m139582CD1BAD7472B45D806F76E4E14E82E629DB (RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method);
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_mDB37E320BD3CA801CB06E1A4CBD088D8C7F0678A (RuntimeObject * ___o0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** ___fields1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeBSTR(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeBSTR_mB3CD149620B05C68BBC20931307564BADDE71A25 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_Release_mF0676E7B6EE181109020F407F09E1063D681B5F8 (intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Void System.Variant::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant_Clear_m7622B0C52C7794CC4C33434D2ED8170ECDDE5DAF (Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Version System.Version::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * Version_Parse_mAF74E042711BB851C4659BF71E09B9E79A9AC848 (String_t* ___input0, const RuntimeMethod* method);
// System.Int32 System.Version::get_Major()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Major_m7A6BEEF367674B8C06B15F6675AFF0C32CCEE87C_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Int32 System.Version::get_Minor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Minor_mCBAFA7052D1786A47B4BA971E7193A4EB9A7D059_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Int32 System.Version::get_Build()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Build_m184E3AAE13518CEA172E9C6860E9359D567E64DB_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Int32 System.Version::get_Revision()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Revision_mB0BADD4E233FA3001FB7BB4795A0A330880453BB_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Void System.Version::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m2033F9EE96782C92B9978E42BB4EAEF240950B51 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method);
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_m9E4E82DB85F13E3C19AB5D4AF94C4F399971374D (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method);
// System.String System.Version::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___fieldCount0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilderCache_Acquire_mCA3DDB17F0BFEF32DA9B4D7E8501D5705890557D (int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Version::AppendPositiveNumber(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98 (int32_t ___num0, StringBuilder_t * ___sb1, const RuntimeMethod* method);
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_mDD5B8378FE9378CACF8660EB460E0CE545F215F7 (StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Insert_m5A00CEB69C56B823E3766C84114D8B8ACCFC67A1 (StringBuilder_t * __this, int32_t ___index0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Void System.Version/VersionResult::Init(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_Init_m87C0666EE7326FA61E704D4199B900412A6FC418 (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method);
// System.Boolean System.Version::TryParseVersion(System.String,System.Version/VersionResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_TryParseVersion_m35BE4BD62EC50169F9BC8711A6D88CD9374FD031 (String_t* ___version0, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * ___result1, const RuntimeMethod* method);
// System.Exception System.Version/VersionResult::GetVersionParseException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * VersionResult_GetVersionParseException_mD2123ABBACA1B3D82FC144785AF9FD7F0231BEF1 (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * __this, const RuntimeMethod* method);
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_SetFailure_m77BF5012543025E534D65353AD44AD5620782338 (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * __this, int32_t ___failure0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.Boolean System.Version::TryParseComponent(System.String,System.String,System.Version/VersionResult&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_TryParseComponent_m6BDC16037C969220C596E5F64906896291598FA0 (String_t* ___component0, String_t* ___componentName1, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * ___result2, int32_t* ___parsedComponent3, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mC2880C190E158700B0C114D4CC921C0D240DAA9C (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m6ADA5D03EE325554346538B991A4C3566BD2A011 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method);
// System.Void System.Version/VersionResult::SetFailure(System.Version/ParseFailureKind,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8 (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method);
// System.Boolean System.Version::Equals(System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_Equals_m7C93B95F0594CB28E1B1C96936B03069BF8968D3 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Version::CompareTo(System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_CompareTo_mB6A6C226C3401C8903DD32602F72FA644631C33C (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___value0, const RuntimeMethod* method);
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_LessThan_mEE4DE91646EDC7245FD486D1D3E2322B651E7028 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method);
// System.Boolean System.Version::op_LessThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_LessThanOrEqual_m6D2834974A9C75C04A7B303A9F1E57296E91A6B6 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m9FD0A75E9C7A9BFC26070A60A420D77CD629CC58 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_m89167FF9884AE20232190FE9286DC50E146A4F14 (FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method);
// System.Void System.WeakReference::AllocateHandle(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m116757CBF336A309363C5F2DFE13A2E426368780 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m5CAA35E19A152535A5481502BEDBC7A0E276E455 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::set_Target(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_set_Target_mFE24B2555ECDBA46AC76D6DB79505B2F4238D913 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1229CE68F507974EBA0DA9C7C728A09E611D18B1 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsConsoleDriver_GetStdHandle_m411672A3E27D4266E946FF166C9DA279A75B3FB5 (int32_t ___handle0, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m0DF841B5A1BF2651A1D9BFEA3D61280110461C80 (intptr_t ___handle0, ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F * ___info1, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_ReadConsoleInput_mAA31A86190A2F7B76CD7205DCE7C2743E7C8AAA2 (intptr_t ___handle0, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_mE1A714E69515F70001BA6714077880530257AEC7 (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.WindowsConsoleDriver::IsModifierKey(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_IsModifierKey_mCBF637C09E9D2BD063E44FA5C8B8D2E317C4A1AE (int16_t ___virtualKeyCode0, const RuntimeMethod* method);
// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleKeyInfo__ctor_mF5F427F75CCD5D4BCAADCE6AE31F61D70BD95B98 (ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768 * __this, Il2CppChar ___keyChar0, int32_t ___key1, bool ___shift2, bool ___alt3, bool ___control4, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::get_CompareInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * DateTimeFormatInfo_get_CompareInfo_mD70321935C290535664E8821CBE0D304580230C8 (DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::get_FormatFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeFormatInfo_get_FormatFlags_m42B106A8C2AC470D425032034608045AABB71731 (DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E (const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * Thread_get_CurrentCulture_m97A15448A16FB3B5EC1E21A0538C9FC1F84AEE66 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString__ctor_mE5FC300B73DE2B23E51414546030AF8625D1109E (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, String_t* ___str0, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi1, const RuntimeMethod* method);
// System.Boolean System.__DTString::GetNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_GetNext_mA99D360775F54B38E339C68D2E6007B7E028E1A3 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method);
// System.Boolean System.__DTString::AtEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_AtEnd_mE89AB87FFD62B3BA1D1E5B30052947890000EADC (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method);
// System.Boolean System.__DTString::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Advance_m6CAEF5CE3C7B57CBBDA5E0F5A391F6517C3791CC (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Boolean System.DateTimeParse::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_IsDigit_mCC840BC9EC5E157F967F148BC12F6A815E75B74A (Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.Globalization.DateTimeFormatInfo::Tokenize(System.TokenType,System.TokenType&,System.Int32&,System.__DTString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_Tokenize_m47644B9B55F1919470E65677B3C8C5573E606217 (DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * __this, int32_t ___TokenMask0, int32_t* ___tokenType1, int32_t* ___tokenValue2, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * ___str3, const RuntimeMethod* method);
// System.Void System.__DTString::GetRegularToken(System.TokenType&,System.Int32&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_GetRegularToken_mD79E9337E33F2F9535DD89437EEDC2AF3F5A0B39 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi2, const RuntimeMethod* method);
// System.Boolean System.__DTString::SkipWhiteSpaceCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_SkipWhiteSpaceCurrent_m85EF1DCFFB216A209FEB3CC53CB8E977C51D71DB (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method);
// System.TokenType System.__DTString::GetSeparatorToken(System.Globalization.DateTimeFormatInfo,System.Int32&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetSeparatorToken_m2F4CE10AC9C39A5380D3DD5344B81F79C7006EF1 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m30470EE6951771AE5E897773C8FC233DADBAE301 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Boolean System.Char::IsLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetter_mCC7F387F16C2DE7C85B6A1A0C5BC75D92A813DFE (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.__DTString::MatchSpecifiedWords(System.String,System.Boolean,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWords_mAD172D28B54FDBB34D5E8C8F92CB6C8B0EECDBA0 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method);
// System.Boolean System.__DTString::Match(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Match_mC0335DA3DE8A7B7F93781B52A02655B6889E01B3 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.__DTString::GetNextDigit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_mE662D3828A0E0648E24F62FC5D750DA554364EFB (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method);
// System.Char System.__DTString::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar __DTString_GetChar_m15E6D62E27D5EC6E7E726D2E6A719A95A521CAE6 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method);
// System.Int32 System.__DTString::GetDigit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetDigit_m0A4FC9D7AA54648B77398FAF7997FF7FED3694BF (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::SkipWhiteSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_SkipWhiteSpaces_mB4AA5270916EF04CD52A4F3C16B1FB08D0B0CF4F (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method);
// System.DTSubString System.__DTString::GetSubString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  __DTString_GetSubString_m699C79DE88DFBC0BDD9F85C2CDC155ABB1473DC4 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method);
// System.Void System.__DTString::ConsumeSubString(System.DTSubString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_ConsumeSubString_mDFAADAA4A5FC450399046DB04CE10A4503961FAA (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  ___sub0, const RuntimeMethod* method);
// System.Void System.Reflection.InvalidFilterCriteriaException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidFilterCriteriaException__ctor_m8A7E7373F5BFA58916AA7A8D99E49AA3C6861031 (InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m844A95C9A205A0F951B0C45634E0C222E73D0B49 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m208E4853037D81DD5C91DCA060C339DADC3A6064 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, int32_t ___comparisonType5, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m5BD1EF8904C9B13BEDB7A876B122F117B317B442 (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.__Filters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Filters__ctor_mA9DEA9B853B953C85A78E101A8001E9EE0E66B35 (__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * __this, const RuntimeMethod* method);
// System.Void System.__Il2CppComObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m98123DBAAA7974D2616F9E90F2574955714CA9A9 (Il2CppComObject * __this, const RuntimeMethod* method);
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_m651139B17C9EE918551490BC675754EA8EA3E7C7 (PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.TypeIdentifier System.TypeIdentifiers::FromDisplay(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeIdentifiers_FromDisplay_m08FB8BE03D80603F9A030774E218310DC96693CE (String_t* ___displayName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeIdentifiers_FromDisplay_m08FB8BE03D80603F9A030774E218310DC96693CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___displayName0;
		Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5 * L_1 = (Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5 *)il2cpp_codegen_object_new(Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5_il2cpp_TypeInfo_var);
		Display__ctor_mA1C635B551554AB64CB2761AE4343A7AAC521D86(L_1, L_0, /*hidden argument*/NULL);
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
// System.Void System.TypeIdentifiers_Display::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display__ctor_mA1C635B551554AB64CB2761AE4343A7AAC521D86 (Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5 * __this, String_t* ___displayName0, const RuntimeMethod* method)
{
	{
		ATypeName__ctor_mB865CB8CFBAD77532030E15AB4DF856DB368D307(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___displayName0;
		__this->set_displayName_0(L_0);
		__this->set_internal_name_1((String_t*)NULL);
		return;
	}
}
// System.String System.TypeIdentifiers_Display::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_DisplayName_mCD0C3FDAAF471D36D084773212A470AA9A69AF53 (Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		return L_0;
	}
}
// System.String System.TypeIdentifiers_Display::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_InternalName_m3A89FAAFE48B379CC563243F0DD2FFC5253D86D8 (Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_internal_name_1();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = Display_GetInternalName_m9B890BB08D3AE39E9CF2AAF14D5F33C759CC6C36(__this, /*hidden argument*/NULL);
		__this->set_internal_name_1(L_1);
	}

IL_0014:
	{
		String_t* L_2 = __this->get_internal_name_1();
		return L_2;
	}
}
// System.String System.TypeIdentifiers_Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_m9B890BB08D3AE39E9CF2AAF14D5F33C759CC6C36 (Display_t0222D7CB4CF0F85131FC5E26328FE94E0A27F5E5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		String_t* L_1 = TypeSpec_UnescapeInternalName_m7B3F1C73984FAF9159F89F62C97AF144EDC4347E(L_0, /*hidden argument*/NULL);
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
// System.Void System.TypeInitializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInitializationException__ctor_mAF515ADEF54825D8F19E8773B04D49CA1EEAA4A2 (TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException__ctor_mAF515ADEF54825D8F19E8773B04D49CA1EEAA4A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralEF78999D7670EEBB7B9C4D640E261383DD2C6094, /*hidden argument*/NULL);
		SystemException__ctor_mF67B7FA639B457BDFB2103D7C21C8059E806175A(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(__this, ((int32_t)-2146233036), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeInitializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInitializationException__ctor_m392481761B076335738D194514B219AC5A6D8A7E (TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE * __this, String_t* ___fullTypeName0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException__ctor_m392481761B076335738D194514B219AC5A6D8A7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___fullTypeName0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		String_t* L_3 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteral853ABCEF8465C8AE084B7B61A1A26F39EDB717B5, L_1, /*hidden argument*/NULL);
		Exception_t * L_4 = ___innerException1;
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(__this, L_3, L_4, /*hidden argument*/NULL);
		String_t* L_5 = ___fullTypeName0;
		__this->set__typeName_17(L_5);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(__this, ((int32_t)-2146233036), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInitializationException__ctor_mECB421CF0582FE4EADA4DD7B5687CA64635D71B7 (TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException__ctor_mECB421CF0582FE4EADA4DD7B5687CA64635D71B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_1 = ___context1;
		SystemException__ctor_mB0550111A1A8D18B697B618F811A5B20C160D949(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_2 = ___info0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m06805A4E368E0B98D5FA70A9333B277CBDD84CF4(L_2, _stringLiteral9E430F17EB96D796BF49C46584B98C497F8AE559, /*hidden argument*/NULL);
		__this->set__typeName_17(L_3);
		return;
	}
}
// System.String System.TypeInitializationException::get_TypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeInitializationException_get_TypeName_mB1D7D9D4E2400579F85B80BA0B012504AB15A5A8 (TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException_get_TypeName_mB1D7D9D4E2400579F85B80BA0B012504AB15A5A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get__typeName_17();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = __this->get__typeName_17();
		return L_2;
	}
}
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInitializationException_GetObjectData_m61A4C223CD68BB6170CD4E5593358B6A2CD0D1AE (TypeInitializationException_t5223A07113C97D6DC875A82C68D4C132737ADEAE * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException_GetObjectData_m61A4C223CD68BB6170CD4E5593358B6A2CD0D1AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_1 = ___context1;
		Exception_GetObjectData_m76F759ED00FA218FFC522C32626B851FDE849AD6(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_2 = ___info0;
		String_t* L_3 = TypeInitializationException_get_TypeName_mB1D7D9D4E2400579F85B80BA0B012504AB15A5A8(__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_2, _stringLiteral9E430F17EB96D796BF49C46584B98C497F8AE559, L_3, L_5, /*hidden argument*/NULL);
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
// System.Void System.TypeLoadException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException__ctor_mEF05D23A192E0B9BFAAA97A77A0FC1BCBE7B4355 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException__ctor_mEF05D23A192E0B9BFAAA97A77A0FC1BCBE7B4355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralC10B7D725CE2223CDFE7B945291104E7C0ACE1D9, /*hidden argument*/NULL);
		SystemException__ctor_mF67B7FA639B457BDFB2103D7C21C8059E806175A(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m80951BFF6EB67A1ED3052D05569EF70D038B1581 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_mF67B7FA639B457BDFB2103D7C21C8059E806175A(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.String System.TypeLoadException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeLoadException_get_Message_mE28CEB00E2315EC208CA7CCF223F1354416FC04A (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, const RuntimeMethod* method)
{
	{
		TypeLoadException_SetMessageField_m23CD2003031C6BF6A4AD01D4FFF2DC786DA580E0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ((Exception_t *)__this)->get__message_2();
		return L_0;
	}
}
// System.Void System.TypeLoadException::SetMessageField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException_SetMessageField_m23CD2003031C6BF6A4AD01D4FFF2DC786DA580E0 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException_SetMessageField_m23CD2003031C6BF6A4AD01D4FFF2DC786DA580E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ((Exception_t *)__this)->get__message_2();
		if (L_0)
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_1 = __this->get_ClassName_17();
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = __this->get_ResourceId_20();
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_3 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralC10B7D725CE2223CDFE7B945291104E7C0ACE1D9, /*hidden argument*/NULL);
		((Exception_t *)__this)->set__message_2(L_3);
		return;
	}

IL_0029:
	{
		String_t* L_4 = __this->get_AssemblyName_18();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_5 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral8B1AF543422B5976D44B9C740EF3CA472E5EF490, /*hidden argument*/NULL);
		__this->set_AssemblyName_18(L_5);
	}

IL_0041:
	{
		String_t* L_6 = __this->get_ClassName_17();
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral8B1AF543422B5976D44B9C740EF3CA472E5EF490, /*hidden argument*/NULL);
		__this->set_ClassName_17(L_7);
	}

IL_0059:
	{
		V_0 = (String_t*)NULL;
		V_0 = _stringLiteral3886FAAB186277EC9F7FEBBB72CE301AC5E2773C;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_8 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		String_t* L_9 = V_0;
		String_t* L_10 = __this->get_ClassName_17();
		String_t* L_11 = __this->get_AssemblyName_18();
		String_t* L_12 = __this->get_MessageArg_19();
		String_t* L_13 = String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4(L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		((Exception_t *)__this)->set__message_2(L_13);
	}

IL_0084:
	{
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m5BFD68A735888FDA690CE055542FBF350DBDAB1F (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, String_t* ___className0, String_t* ___assemblyName1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___className0;
		String_t* L_1 = ___assemblyName1;
		TypeLoadException__ctor_m6AB219D6FD444BC779001D783A48DE29CCB4D670(__this, L_0, L_1, (String_t*)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m6AB219D6FD444BC779001D783A48DE29CCB4D670 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, String_t* ___className0, String_t* ___assemblyName1, String_t* ___messageArg2, int32_t ___resourceId3, const RuntimeMethod* method)
{
	{
		SystemException__ctor_mF67B7FA639B457BDFB2103D7C21C8059E806175A(__this, (String_t*)NULL, /*hidden argument*/NULL);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		String_t* L_0 = ___className0;
		__this->set_ClassName_17(L_0);
		String_t* L_1 = ___assemblyName1;
		__this->set_AssemblyName_18(L_1);
		String_t* L_2 = ___messageArg2;
		__this->set_MessageArg_19(L_2);
		int32_t L_3 = ___resourceId3;
		__this->set_ResourceId_20(L_3);
		TypeLoadException_SetMessageField_m23CD2003031C6BF6A4AD01D4FFF2DC786DA580E0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException__ctor_m7D81F0BF798D436FF6ECF3F4B48F206DB8AB1293 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException__ctor_m7D81F0BF798D436FF6ECF3F4B48F206DB8AB1293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_1 = ___context1;
		SystemException__ctor_mB0550111A1A8D18B697B618F811A5B20C160D949(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_2 = ___info0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TypeLoadException__ctor_m7D81F0BF798D436FF6ECF3F4B48F206DB8AB1293_RuntimeMethod_var);
	}

IL_0016:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m06805A4E368E0B98D5FA70A9333B277CBDD84CF4(L_4, _stringLiteralE31F38791120074366DE542990E5E66B4AEB3A22, /*hidden argument*/NULL);
		__this->set_ClassName_17(L_5);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_6 = ___info0;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m06805A4E368E0B98D5FA70A9333B277CBDD84CF4(L_6, _stringLiteral3D708CB7F76AF5A68201B998794CB435ACA1B0D5, /*hidden argument*/NULL);
		__this->set_AssemblyName_18(L_7);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_8 = ___info0;
		NullCheck(L_8);
		String_t* L_9 = SerializationInfo_GetString_m06805A4E368E0B98D5FA70A9333B277CBDD84CF4(L_8, _stringLiteral27BED7455215AA8A8EA1D7944A4975BAA72AA6B6, /*hidden argument*/NULL);
		__this->set_MessageArg_19(L_9);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_10 = ___info0;
		NullCheck(L_10);
		int32_t L_11 = SerializationInfo_GetInt32_mB47BD46A0BDBBAF5B47BB62E6EFF8E092E3F3656(L_10, _stringLiteralFE66537A952957258311139D35B0945C0FC518DC, /*hidden argument*/NULL);
		__this->set_ResourceId_20(L_11);
		return;
	}
}
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeLoadException_GetObjectData_m5198722D9966C5F04FD07467B5EE5AB84D86E499 (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException_GetObjectData_m5198722D9966C5F04FD07467B5EE5AB84D86E499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TypeLoadException_GetObjectData_m5198722D9966C5F04FD07467B5EE5AB84D86E499_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_2 = ___info0;
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_3 = ___context1;
		Exception_GetObjectData_m76F759ED00FA218FFC522C32626B851FDE849AD6(__this, L_2, L_3, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_4 = ___info0;
		String_t* L_5 = __this->get_ClassName_17();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_4, _stringLiteralE31F38791120074366DE542990E5E66B4AEB3A22, L_5, L_7, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_8 = ___info0;
		String_t* L_9 = __this->get_AssemblyName_18();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_8, _stringLiteral3D708CB7F76AF5A68201B998794CB435ACA1B0D5, L_9, L_11, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_12 = ___info0;
		String_t* L_13 = __this->get_MessageArg_19();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_14 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_15 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_12, _stringLiteral27BED7455215AA8A8EA1D7944A4975BAA72AA6B6, L_13, L_15, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_16 = ___info0;
		int32_t L_17 = __this->get_ResourceId_20();
		NullCheck(L_16);
		SerializationInfo_AddValue_m7C73917D9DC4B8FE4AFEF4BA8EBEDAB046A8D0BD(L_16, _stringLiteralFE66537A952957258311139D35B0945C0FC518DC, L_17, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type System.TypeNameParser::GetType(System.String,System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean,System.Boolean,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeNameParser_GetType_m8359CD1600F889CE251C669179BB982D1A2F7013 (String_t* ___typeName0, Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * ___assemblyResolver1, Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * ___typeResolver2, bool ___throwOnError3, bool ___ignoreCase4, int32_t* ___stackMark5, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___typeName0;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_1 = TypeSpec_Parse_m7DDF2C8D81E80856BA9EEFDB84421AE2F81B58C1(L_0, /*hidden argument*/NULL);
		Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * L_2 = ___assemblyResolver1;
		Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * L_3 = ___typeResolver2;
		bool L_4 = ___throwOnError3;
		bool L_5 = ___ignoreCase4;
		NullCheck(L_1);
		Type_t * L_6 = TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.TypeNames_ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m7D88938E443BA9FAEA8615EEFBAE8E23B1BE6BD2 (ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ATypeName_Equals_m7D88938E443BA9FAEA8615EEFBAE8E23B1BE6BD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513_il2cpp_TypeInfo_var, L_2);
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.TypeNames_ATypeName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ATypeName_GetHashCode_m5F89250BB037822F96C23AC7E0EA08D90A578415 (ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.TypeNames_ATypeName::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_mCADC0D866B2E78D4BA563475D528D45DA5AA92FD (ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ATypeName_Equals_mCADC0D866B2E78D4BA563475D528D45DA5AA92FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		bool L_1 = ATypeName_Equals_m7D88938E443BA9FAEA8615EEFBAE8E23B1BE6BD2(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.TypeNames_ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_mB865CB8CFBAD77532030E15AB4DF856DB368D307 (ATypeName_t8FD4A465E3C2846D11FEAE25ED5BF3D67FF94421 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Boolean System.TypeSpec::get_HasModifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeSpec_get_HasModifiers_mF783ED5C395D4ACB94D30014B9F79E19E90EC9FD (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, const RuntimeMethod* method)
{
	{
		List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * L_0 = __this->get_modifier_spec_4();
		return (bool)((!(((RuntimeObject*)(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.String System.TypeSpec::GetDisplayFullName(System.TypeSpec_DisplayNameFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_GetDisplayFullName_m4D6D7AED6CBFC324310480BA07461682A09822B6 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_GetDisplayFullName_m4D6D7AED6CBFC324310480BA07461682A09822B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	StringBuilder_t * V_2 = NULL;
	Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = ___flags0;
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_1 = ___flags0;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_1&(int32_t)2))) == ((int32_t)0))? 1 : 0);
		RuntimeObject* L_2 = __this->get_name_0();
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513_il2cpp_TypeInfo_var, L_2);
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3(L_4, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * L_5 = __this->get_nested_2();
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * L_6 = __this->get_nested_2();
		NullCheck(L_6);
		Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628  L_7 = List_1_GetEnumerator_m2E4A41A21C3DEA2E56F3BAAC22CAC54ADDAAE89A(L_6, /*hidden argument*/List_1_GetEnumerator_m2E4A41A21C3DEA2E56F3BAAC22CAC54ADDAAE89A_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0035:
		{
			RuntimeObject* L_8 = Enumerator_get_Current_m1FE262A1143A9C0B744CAE59FDF00A529A47DA7C_inline((Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m1FE262A1143A9C0B744CAE59FDF00A529A47DA7C_RuntimeMethod_var);
			V_4 = L_8;
			StringBuilder_t * L_9 = V_2;
			NullCheck(L_9);
			StringBuilder_t * L_10 = StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_9, ((int32_t)43), /*hidden argument*/NULL);
			RuntimeObject* L_11 = V_4;
			NullCheck(L_11);
			String_t* L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513_il2cpp_TypeInfo_var, L_11);
			NullCheck(L_10);
			StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, L_12, /*hidden argument*/NULL);
		}

IL_0053:
		{
			bool L_13 = Enumerator_MoveNext_m5FA83E49042D278C984097B83622E3165E4564AD((Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m5FA83E49042D278C984097B83622E3165E4564AD_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0035;
			}
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9FE451117A551A3AD97A0FC27C1C159B551B25F3((Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m9FE451117A551A3AD97A0FC27C1C159B551B25F3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006c:
	{
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_14 = __this->get_generic_params_3();
		if (!L_14)
		{
			goto IL_010a;
		}
	}
	{
		StringBuilder_t * L_15 = V_2;
		NullCheck(L_15);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_15, ((int32_t)91), /*hidden argument*/NULL);
		V_5 = 0;
		goto IL_00f2;
	}

IL_0085:
	{
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		StringBuilder_t * L_17 = V_2;
		NullCheck(L_17);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_17, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
	}

IL_0096:
	{
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_18 = __this->get_generic_params_3();
		int32_t L_19 = V_5;
		NullCheck(L_18);
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_20 = List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21 = L_20->get_assembly_name_1();
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_22 = V_2;
		NullCheck(L_22);
		StringBuilder_t * L_23 = StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_22, ((int32_t)91), /*hidden argument*/NULL);
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_24 = __this->get_generic_params_3();
		int32_t L_25 = V_5;
		NullCheck(L_24);
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_26 = List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27 = TypeSpec_get_DisplayFullName_mE25183941E02D8885546E07565C790AF63A890FA(L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		StringBuilder_t * L_28 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_28, ((int32_t)93), /*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_00d3:
	{
		StringBuilder_t * L_29 = V_2;
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_30 = __this->get_generic_params_3();
		int32_t L_31 = V_5;
		NullCheck(L_30);
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_32 = List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_RuntimeMethod_var);
		NullCheck(L_32);
		String_t* L_33 = TypeSpec_get_DisplayFullName_mE25183941E02D8885546E07565C790AF63A890FA(L_32, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_29, L_33, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00f2:
	{
		int32_t L_35 = V_5;
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_36 = __this->get_generic_params_3();
		NullCheck(L_36);
		int32_t L_37 = List_1_get_Count_m516B184735436F6F6363D5BDBC6469AAA19A10A4_inline(L_36, /*hidden argument*/List_1_get_Count_m516B184735436F6F6363D5BDBC6469AAA19A10A4_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0085;
		}
	}
	{
		StringBuilder_t * L_38 = V_2;
		NullCheck(L_38);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_38, ((int32_t)93), /*hidden argument*/NULL);
	}

IL_010a:
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0115;
		}
	}
	{
		StringBuilder_t * L_40 = V_2;
		TypeSpec_GetModifierString_m879659900335844914FDD6BEB1B373531DC990FE(__this, L_40, /*hidden argument*/NULL);
	}

IL_0115:
	{
		String_t* L_41 = __this->get_assembly_name_1();
		bool L_42 = V_0;
		if (!((int32_t)((int32_t)((!(((RuntimeObject*)(String_t*)L_41) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)&(int32_t)L_42)))
		{
			goto IL_0139;
		}
	}
	{
		StringBuilder_t * L_43 = V_2;
		NullCheck(L_43);
		StringBuilder_t * L_44 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_43, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
		String_t* L_45 = __this->get_assembly_name_1();
		NullCheck(L_44);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_44, L_45, /*hidden argument*/NULL);
	}

IL_0139:
	{
		StringBuilder_t * L_46 = V_2;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		return L_47;
	}
}
// System.Text.StringBuilder System.TypeSpec::GetModifierString(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * TypeSpec_GetModifierString_m879659900335844914FDD6BEB1B373531DC990FE (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_GetModifierString_m879659900335844914FDD6BEB1B373531DC990FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * L_0 = __this->get_modifier_spec_4();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * L_1 = __this->get_modifier_spec_4();
		NullCheck(L_1);
		Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D  L_2 = List_1_GetEnumerator_m7F1A981C4F56927EB6D80776859EFEB2A949645F(L_1, /*hidden argument*/List_1_GetEnumerator_m7F1A981C4F56927EB6D80776859EFEB2A949645F_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0016:
		{
			RuntimeObject* L_3 = Enumerator_get_Current_mABF1CE6A366A00FB242CDDC13D80881F14052780_inline((Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *)(&V_0), /*hidden argument*/Enumerator_get_Current_mABF1CE6A366A00FB242CDDC13D80881F14052780_RuntimeMethod_var);
			StringBuilder_t * L_4 = ___sb0;
			NullCheck(L_3);
			InterfaceFuncInvoker1< StringBuilder_t *, StringBuilder_t * >::Invoke(1 /* System.Text.StringBuilder System.ModifierSpec::Append(System.Text.StringBuilder) */, ModifierSpec_t0A5286DDFBD682F1E1D8AEBE5FD9D34EAB4CF1E5_il2cpp_TypeInfo_var, L_3, L_4);
		}

IL_0024:
		{
			bool L_5 = Enumerator_MoveNext_mD91BF5A0EE3F48F18729E9A081A22223CBA9134E((Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mD91BF5A0EE3F48F18729E9A081A22223CBA9134E_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0016;
			}
		}

IL_002d:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_002f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B5D4976D2C83F3DB387137CD7DE096E0C28370B((Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B5D4976D2C83F3DB387137CD7DE096E0C28370B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003d:
	{
		bool L_6 = __this->get_is_byref_5();
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t * L_7 = ___sb0;
		NullCheck(L_7);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_7, ((int32_t)38), /*hidden argument*/NULL);
	}

IL_004e:
	{
		StringBuilder_t * L_8 = ___sb0;
		return L_8;
	}
}
// System.String System.TypeSpec::get_DisplayFullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_get_DisplayFullName_mE25183941E02D8885546E07565C790AF63A890FA (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_display_fullname_6();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = TypeSpec_GetDisplayFullName_m4D6D7AED6CBFC324310480BA07461682A09822B6(__this, 0, /*hidden argument*/NULL);
		__this->set_display_fullname_6(L_1);
	}

IL_0015:
	{
		String_t* L_2 = __this->get_display_fullname_6();
		return L_2;
	}
}
// System.TypeSpec System.TypeSpec::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * TypeSpec_Parse_m7DDF2C8D81E80856BA9EEFDB84421AE2F81B58C1 (String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_Parse_m7DDF2C8D81E80856BA9EEFDB84421AE2F81B58C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * G_B4_0 = NULL;
	TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * G_B3_0 = NULL;
	{
		V_0 = 0;
		String_t* L_0 = ___typeName0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TypeSpec_Parse_m7DDF2C8D81E80856BA9EEFDB84421AE2F81B58C1_RuntimeMethod_var);
	}

IL_0010:
	{
		String_t* L_2 = ___typeName0;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_3 = TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405(L_2, (int32_t*)(&V_0), (bool)0, (bool)1, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		String_t* L_5 = ___typeName0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			G_B4_0 = L_3;
			goto IL_0033;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_7 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_7, _stringLiteralA466EFF47B9A04F03416534E8768A5ED5BC7AFBC, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, TypeSpec_Parse_m7DDF2C8D81E80856BA9EEFDB84421AE2F81B58C1_RuntimeMethod_var);
	}

IL_0033:
	{
		return G_B4_0;
	}
}
// System.String System.TypeSpec::UnescapeInternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_UnescapeInternalName_m7B3F1C73984FAF9159F89F62C97AF144EDC4347E (String_t* ___displayName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_UnescapeInternalName_m7B3F1C73984FAF9159F89F62C97AF144EDC4347E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ___displayName0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_0, /*hidden argument*/NULL);
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_003e;
	}

IL_0010:
	{
		String_t* L_3 = ___displayName0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Il2CppChar L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		V_1 = L_8;
		String_t* L_9 = ___displayName0;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_11 = ___displayName0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppChar L_13 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_0032:
	{
		StringBuilder_t * L_14 = V_0;
		Il2CppChar L_15 = V_2;
		NullCheck(L_14);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_17 = V_1;
		String_t* L_18 = ___displayName0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0010;
		}
	}
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.Type System.TypeSpec::Resolve(System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * ___assemblyResolver0, Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * ___typeResolver1, bool ___throwOnError2, bool ___ignoreCase3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	Type_t * V_4 = NULL;
	Type_t * V_5 = NULL;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_6 = NULL;
	int32_t V_7 = 0;
	Type_t * V_8 = NULL;
	Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Assembly_t *)NULL;
		Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * L_0 = ___assemblyResolver0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * L_1 = ___typeResolver1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_2 = TypeSpec_get_DisplayFullName_mE25183941E02D8885546E07565C790AF63A890FA(__this, /*hidden argument*/NULL);
		bool L_3 = ___throwOnError2;
		bool L_4 = ___ignoreCase3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m77EF3A5A858B45C53D8BF27C74FA00CA83B53E59, L_2, L_3, L_4, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089");
		return L_5;
	}

IL_0017:
	{
		String_t* L_6 = __this->get_assembly_name_1();
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * L_7 = ___assemblyResolver0;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * L_8 = ___assemblyResolver0;
		String_t* L_9 = __this->get_assembly_name_1();
		AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_10 = (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 *)il2cpp_codegen_object_new(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_il2cpp_TypeInfo_var);
		AssemblyName__ctor_m9B2E1009DD65CCC1807A629A09D7CDEC26756FBF(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Assembly_t * L_11 = Func_2_Invoke_m18E0D4D4C27DA4526F57145018F8C5B7D4555786(L_8, L_10, /*hidden argument*/Func_2_Invoke_m18E0D4D4C27DA4526F57145018F8C5B7D4555786_RuntimeMethod_var);
		V_0 = L_11;
		goto IL_0042;
	}

IL_0036:
	{
		String_t* L_12 = __this->get_assembly_name_1();
		Assembly_t * L_13 = Assembly_Load_m4640304E91781FC3D197CD014B0C2DCEAFCFFF55(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_0042:
	{
		Assembly_t * L_14 = V_0;
		bool L_15 = Assembly_op_Equality_m4B6A318CE4104781ABF30A2BBBCCCFB0FE342316(L_14, (Assembly_t *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		bool L_16 = ___throwOnError2;
		if (!L_16)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_17 = __this->get_assembly_name_1();
		String_t* L_18 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralC85C60695430CEA397A21E8BE862BFEA63409E51, L_17, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * L_19 = (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 *)il2cpp_codegen_object_new(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7_RuntimeMethod_var);
	}

IL_0069:
	{
		return (Type_t *)NULL;
	}

IL_006b:
	{
		V_1 = (Type_t *)NULL;
		Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * L_20 = ___typeResolver1;
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * L_21 = ___typeResolver1;
		Assembly_t * L_22 = V_0;
		RuntimeObject* L_23 = __this->get_name_0();
		NullCheck(L_23);
		String_t* L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513_il2cpp_TypeInfo_var, L_23);
		bool L_25 = ___ignoreCase3;
		NullCheck(L_21);
		Type_t * L_26 = Func_4_Invoke_m95D3A234FD84599FDA35F785ACE24B58A5103D13(L_21, L_22, L_24, L_25, /*hidden argument*/Func_4_Invoke_m95D3A234FD84599FDA35F785ACE24B58A5103D13_RuntimeMethod_var);
		V_1 = L_26;
		goto IL_009c;
	}

IL_0087:
	{
		Assembly_t * L_27 = V_0;
		RuntimeObject* L_28 = __this->get_name_0();
		NullCheck(L_28);
		String_t* L_29 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513_il2cpp_TypeInfo_var, L_28);
		bool L_30 = ___ignoreCase3;
		NullCheck(L_27);
		Type_t * L_31 = VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(24 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_27, L_29, (bool)0, L_30);
		V_1 = L_31;
	}

IL_009c:
	{
		Type_t * L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_33 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_32, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00c5;
		}
	}
	{
		bool L_34 = ___throwOnError2;
		if (!L_34)
		{
			goto IL_00c3;
		}
	}
	{
		RuntimeObject* L_35 = __this->get_name_0();
		String_t* L_36 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralEFCF610D1253173FB3E0DF195C1F8D2667415453, L_35, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * L_37 = (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 *)il2cpp_codegen_object_new(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m80951BFF6EB67A1ED3052D05569EF70D038B1581(L_37, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7_RuntimeMethod_var);
	}

IL_00c3:
	{
		return (Type_t *)NULL;
	}

IL_00c5:
	{
		List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * L_38 = __this->get_nested_2();
		if (!L_38)
		{
			goto IL_013a;
		}
	}
	{
		List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * L_39 = __this->get_nested_2();
		NullCheck(L_39);
		Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628  L_40 = List_1_GetEnumerator_m2E4A41A21C3DEA2E56F3BAAC22CAC54ADDAAE89A(L_39, /*hidden argument*/List_1_GetEnumerator_m2E4A41A21C3DEA2E56F3BAAC22CAC54ADDAAE89A_RuntimeMethod_var);
		V_2 = L_40;
	}

IL_00d9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0121;
		}

IL_00db:
		{
			RuntimeObject* L_41 = Enumerator_get_Current_m1FE262A1143A9C0B744CAE59FDF00A529A47DA7C_inline((Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1FE262A1143A9C0B744CAE59FDF00A529A47DA7C_RuntimeMethod_var);
			V_3 = L_41;
			Type_t * L_42 = V_1;
			RuntimeObject* L_43 = V_3;
			NullCheck(L_43);
			String_t* L_44 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t0C63929669D92B034691B7E78AF79FA1F8592513_il2cpp_TypeInfo_var, L_43);
			NullCheck(L_42);
			Type_t * L_45 = VirtFuncInvoker2< Type_t *, String_t*, int32_t >::Invoke(56 /* System.Type System.Type::GetNestedType(System.String,System.Reflection.BindingFlags) */, L_42, L_44, ((int32_t)48));
			V_4 = L_45;
			Type_t * L_46 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_47 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_46, (Type_t *)NULL, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_011e;
			}
		}

IL_00fd:
		{
			bool L_48 = ___throwOnError2;
			if (!L_48)
			{
				goto IL_0116;
			}
		}

IL_0100:
		{
			RuntimeObject* L_49 = V_3;
			String_t* L_50 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralEFCF610D1253173FB3E0DF195C1F8D2667415453, L_49, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
			TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * L_51 = (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 *)il2cpp_codegen_object_new(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1_il2cpp_TypeInfo_var);
			TypeLoadException__ctor_m80951BFF6EB67A1ED3052D05569EF70D038B1581(L_51, L_50, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7_RuntimeMethod_var);
		}

IL_0116:
		{
			V_5 = (Type_t *)NULL;
			IL2CPP_LEAVE(0x218, FINALLY_012c);
		}

IL_011e:
		{
			Type_t * L_52 = V_4;
			V_1 = L_52;
		}

IL_0121:
		{
			bool L_53 = Enumerator_MoveNext_m5FA83E49042D278C984097B83622E3165E4564AD((Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m5FA83E49042D278C984097B83622E3165E4564AD_RuntimeMethod_var);
			if (L_53)
			{
				goto IL_00db;
			}
		}

IL_012a:
		{
			IL2CPP_LEAVE(0x13A, FINALLY_012c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012c;
	}

FINALLY_012c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9FE451117A551A3AD97A0FC27C1C159B551B25F3((Enumerator_tF3C2A3B3C8EE5956E26FA5AE4C14FC7655975628 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m9FE451117A551A3AD97A0FC27C1C159B551B25F3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(300)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(300)
	{
		IL2CPP_JUMP_TBL(0x218, IL_0218)
		IL2CPP_JUMP_TBL(0x13A, IL_013a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013a:
	{
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_54 = __this->get_generic_params_3();
		if (!L_54)
		{
			goto IL_01c9;
		}
	}
	{
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_55 = __this->get_generic_params_3();
		NullCheck(L_55);
		int32_t L_56 = List_1_get_Count_m516B184735436F6F6363D5BDBC6469AAA19A10A4_inline(L_55, /*hidden argument*/List_1_get_Count_m516B184735436F6F6363D5BDBC6469AAA19A10A4_RuntimeMethod_var);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_57 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)L_56);
		V_6 = L_57;
		V_7 = 0;
		goto IL_01b8;
	}

IL_015c:
	{
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_58 = __this->get_generic_params_3();
		int32_t L_59 = V_7;
		NullCheck(L_58);
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_60 = List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_inline(L_58, L_59, /*hidden argument*/List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_RuntimeMethod_var);
		Func_2_t13827C9725E0D12567E029E178981FB7D0E13430 * L_61 = ___assemblyResolver0;
		Func_4_t3D7857A2A0F731D1E992FC5B09E983A8621FABFF * L_62 = ___typeResolver1;
		bool L_63 = ___throwOnError2;
		bool L_64 = ___ignoreCase3;
		NullCheck(L_60);
		Type_t * L_65 = TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7(L_60, L_61, L_62, L_63, L_64, /*hidden argument*/NULL);
		V_8 = L_65;
		Type_t * L_66 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_67 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_66, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_01ab;
		}
	}
	{
		bool L_68 = ___throwOnError2;
		if (!L_68)
		{
			goto IL_01a9;
		}
	}
	{
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_69 = __this->get_generic_params_3();
		int32_t L_70 = V_7;
		NullCheck(L_69);
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_71 = List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_inline(L_69, L_70, /*hidden argument*/List_1_get_Item_m942CEFAE0020F8EC07462ED0CFC951FFE66CBD46_RuntimeMethod_var);
		NullCheck(L_71);
		RuntimeObject* L_72 = L_71->get_name_0();
		String_t* L_73 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralEFCF610D1253173FB3E0DF195C1F8D2667415453, L_72, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 * L_74 = (TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1 *)il2cpp_codegen_object_new(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m80951BFF6EB67A1ED3052D05569EF70D038B1581(L_74, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, TypeSpec_Resolve_mCE50015512C48D97F6D5558A2001825102BDDBF7_RuntimeMethod_var);
	}

IL_01a9:
	{
		return (Type_t *)NULL;
	}

IL_01ab:
	{
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_75 = V_6;
		int32_t L_76 = V_7;
		Type_t * L_77 = V_8;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (Type_t *)L_77);
		int32_t L_78 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
	}

IL_01b8:
	{
		int32_t L_79 = V_7;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_80 = V_6;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))))
		{
			goto IL_015c;
		}
	}
	{
		Type_t * L_81 = V_1;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_82 = V_6;
		NullCheck(L_81);
		Type_t * L_83 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(96 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_81, L_82);
		V_1 = L_83;
	}

IL_01c9:
	{
		List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * L_84 = __this->get_modifier_spec_4();
		if (!L_84)
		{
			goto IL_0207;
		}
	}
	{
		List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * L_85 = __this->get_modifier_spec_4();
		NullCheck(L_85);
		Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D  L_86 = List_1_GetEnumerator_m7F1A981C4F56927EB6D80776859EFEB2A949645F(L_85, /*hidden argument*/List_1_GetEnumerator_m7F1A981C4F56927EB6D80776859EFEB2A949645F_RuntimeMethod_var);
		V_9 = L_86;
	}

IL_01de:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ee;
		}

IL_01e0:
		{
			RuntimeObject* L_87 = Enumerator_get_Current_mABF1CE6A366A00FB242CDDC13D80881F14052780_inline((Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *)(&V_9), /*hidden argument*/Enumerator_get_Current_mABF1CE6A366A00FB242CDDC13D80881F14052780_RuntimeMethod_var);
			Type_t * L_88 = V_1;
			NullCheck(L_87);
			Type_t * L_89 = InterfaceFuncInvoker1< Type_t *, Type_t * >::Invoke(0 /* System.Type System.ModifierSpec::Resolve(System.Type) */, ModifierSpec_t0A5286DDFBD682F1E1D8AEBE5FD9D34EAB4CF1E5_il2cpp_TypeInfo_var, L_87, L_88);
			V_1 = L_89;
		}

IL_01ee:
		{
			bool L_90 = Enumerator_MoveNext_mD91BF5A0EE3F48F18729E9A081A22223CBA9134E((Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *)(&V_9), /*hidden argument*/Enumerator_MoveNext_mD91BF5A0EE3F48F18729E9A081A22223CBA9134E_RuntimeMethod_var);
			if (L_90)
			{
				goto IL_01e0;
			}
		}

IL_01f7:
		{
			IL2CPP_LEAVE(0x207, FINALLY_01f9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01f9;
	}

FINALLY_01f9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B5D4976D2C83F3DB387137CD7DE096E0C28370B((Enumerator_t947A94EE32E8D5A1E40EDCC5D83206D0832E531D *)(&V_9), /*hidden argument*/Enumerator_Dispose_m4B5D4976D2C83F3DB387137CD7DE096E0C28370B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(505)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(505)
	{
		IL2CPP_JUMP_TBL(0x207, IL_0207)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0207:
	{
		bool L_91 = __this->get_is_byref_5();
		if (!L_91)
		{
			goto IL_0216;
		}
	}
	{
		Type_t * L_92 = V_1;
		NullCheck(L_92);
		Type_t * L_93 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::MakeByRefType() */, L_92);
		V_1 = L_93;
	}

IL_0216:
	{
		Type_t * L_94 = V_1;
		return L_94;
	}

IL_0218:
	{
		Type_t * L_95 = V_5;
		return L_95;
	}
}
// System.Void System.TypeSpec::AddName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, String_t* ___type_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_name_0();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = ___type_name0;
		RuntimeObject* L_2 = TypeSpec_ParsedTypeIdentifier_m9D32F152A6F9863DCF3EFBF495B6CC16747E851E(L_1, /*hidden argument*/NULL);
		__this->set_name_0(L_2);
		return;
	}

IL_0015:
	{
		List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * L_3 = __this->get_nested_2();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * L_4 = (List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 *)il2cpp_codegen_object_new(List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166_il2cpp_TypeInfo_var);
		List_1__ctor_m21E88645DC77FDCB68ED0EA3602951A2609C963C(L_4, /*hidden argument*/List_1__ctor_m21E88645DC77FDCB68ED0EA3602951A2609C963C_RuntimeMethod_var);
		__this->set_nested_2(L_4);
	}

IL_0028:
	{
		List_1_tB8129EB4ADDDECD38E3E178F0A902C921B575166 * L_5 = __this->get_nested_2();
		String_t* L_6 = ___type_name0;
		RuntimeObject* L_7 = TypeSpec_ParsedTypeIdentifier_m9D32F152A6F9863DCF3EFBF495B6CC16747E851E(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m191DF682AFC83E635052DB3C303E514D6D7233A2(L_5, L_7, /*hidden argument*/List_1_Add_m191DF682AFC83E635052DB3C303E514D6D7233A2_RuntimeMethod_var);
		return;
	}
}
// System.Void System.TypeSpec::AddModifier(System.ModifierSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec_AddModifier_m082500BAE4A512BA0E84CC85A71F4A67DA885909 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, RuntimeObject* ___md0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_AddModifier_m082500BAE4A512BA0E84CC85A71F4A67DA885909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * L_0 = __this->get_modifier_spec_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * L_1 = (List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 *)il2cpp_codegen_object_new(List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2_il2cpp_TypeInfo_var);
		List_1__ctor_mA97DC4CD260A1FD5F8FD67E06EE8F27E5C03CF63(L_1, /*hidden argument*/List_1__ctor_mA97DC4CD260A1FD5F8FD67E06EE8F27E5C03CF63_RuntimeMethod_var);
		__this->set_modifier_spec_4(L_1);
	}

IL_0013:
	{
		List_1_tFD995FD9C5961BB4B415EE63B297C4B19643A3C2 * L_2 = __this->get_modifier_spec_4();
		RuntimeObject* L_3 = ___md0;
		NullCheck(L_2);
		List_1_Add_mEA738D5941352BC4540C28F701A4BF01E2DF7914(L_2, L_3, /*hidden argument*/List_1_Add_mEA738D5941352BC4540C28F701A4BF01E2DF7914_RuntimeMethod_var);
		return;
	}
}
// System.Void System.TypeSpec::SkipSpace(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec_SkipSpace_mF388B6F9C82F795BA722B706A5435B0E799A531C (String_t* ___name0, int32_t* ___pos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_SkipSpace_mF388B6F9C82F795BA722B706A5435B0E799A531C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___pos1;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		goto IL_0009;
	}

IL_0005:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0009:
	{
		int32_t L_3 = V_0;
		String_t* L_4 = ___name0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_6 = ___name0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_9 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0005;
		}
	}

IL_0020:
	{
		int32_t* L_10 = ___pos1;
		int32_t L_11 = V_0;
		*((int32_t*)L_10) = (int32_t)L_11;
		return;
	}
}
// System.Void System.TypeSpec::BoundCheck(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec_BoundCheck_m5CF5E6F2632D8D4D205DC26F6666BE9EA7D874FB (int32_t ___idx0, String_t* ___s1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_BoundCheck_m5CF5E6F2632D8D4D205DC26F6666BE9EA7D874FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___idx0;
		String_t* L_1 = ___s1;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_3, _stringLiteral2CF6DC09435066749111F8BD9F5270166FE06F3F, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TypeSpec_BoundCheck_m5CF5E6F2632D8D4D205DC26F6666BE9EA7D874FB_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.TypeIdentifier System.TypeSpec::ParsedTypeIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeSpec_ParsedTypeIdentifier_m9D32F152A6F9863DCF3EFBF495B6CC16747E851E (String_t* ___displayName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___displayName0;
		RuntimeObject* L_1 = TypeIdentifiers_FromDisplay_m08FB8BE03D80603F9A030774E218310DC96693CE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TypeSpec System.TypeSpec::Parse(System.String,System.Int32&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405 (String_t* ___name0, int32_t* ___p1, bool ___is_recurse2, bool ___allow_aqn3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		int32_t* L_0 = ___p1;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		V_2 = (bool)0;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_2 = (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F *)il2cpp_codegen_object_new(TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F_il2cpp_TypeInfo_var);
		TypeSpec__ctor_m18DCF64756F091CE7A7DA6CDAD3142419602D901(L_2, /*hidden argument*/NULL);
		V_3 = L_2;
		String_t* L_3 = ___name0;
		TypeSpec_SkipSpace_mF388B6F9C82F795BA722B706A5435B0E799A531C(L_3, (int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_1 = L_4;
		goto IL_00dd;
	}

IL_001a:
	{
		String_t* L_5 = ___name0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_5, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Il2CppChar L_8 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)38))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_00d6;
			}
			case 3:
			{
				goto IL_00d6;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_0061;
			}
			case 6:
			{
				goto IL_0077;
			}
		}
	}
	{
		Il2CppChar L_9 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_00d2;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		goto IL_00d6;
	}

IL_0061:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_10 = V_3;
		String_t* L_11 = ___name0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_11);
		String_t* L_15 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14)), /*hidden argument*/NULL);
		NullCheck(L_10);
		TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7(L_10, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		goto IL_00d6;
	}

IL_0077:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_17 = V_3;
		String_t* L_18 = ___name0;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_18);
		String_t* L_22 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)), /*hidden argument*/NULL);
		NullCheck(L_17);
		TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7(L_17, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		V_2 = (bool)1;
		bool L_24 = ___is_recurse2;
		if (!L_24)
		{
			goto IL_00d6;
		}
	}
	{
		bool L_25 = ___allow_aqn3;
		if (L_25)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t* L_26 = ___p1;
		int32_t L_27 = V_0;
		*((int32_t*)L_26) = (int32_t)L_27;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_28 = V_3;
		return L_28;
	}

IL_0098:
	{
		String_t* L_29 = ___name0;
		int32_t L_30 = V_0;
		NullCheck(L_29);
		Il2CppChar L_31 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_29, L_30, /*hidden argument*/NULL);
		bool L_32 = ___is_recurse2;
		if (!((int32_t)((int32_t)((((int32_t)((((int32_t)L_31) == ((int32_t)((int32_t)91)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_32)))
		{
			goto IL_00ba;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_33 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_33, _stringLiteral571BFF034952AEEE7E64D932D2A2A51072118F24, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_00ba:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_34 = V_3;
		String_t* L_35 = ___name0;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		int32_t L_38 = V_1;
		NullCheck(L_35);
		String_t* L_39 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_35, L_36, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38)), /*hidden argument*/NULL);
		NullCheck(L_34);
		TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7(L_34, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		V_2 = (bool)1;
		goto IL_00d6;
	}

IL_00d2:
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00d6:
	{
		bool L_42 = V_2;
		if (L_42)
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00dd:
	{
		int32_t L_44 = V_0;
		String_t* L_45 = ___name0;
		NullCheck(L_45);
		int32_t L_46 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_45, /*hidden argument*/NULL);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_001a;
		}
	}

IL_00e9:
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) >= ((int32_t)L_48)))
		{
			goto IL_00ff;
		}
	}
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_49 = V_3;
		String_t* L_50 = ___name0;
		int32_t L_51 = V_1;
		int32_t L_52 = V_0;
		int32_t L_53 = V_1;
		NullCheck(L_50);
		String_t* L_54 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_50, L_51, ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_53)), /*hidden argument*/NULL);
		NullCheck(L_49);
		TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7(L_49, L_54, /*hidden argument*/NULL);
		goto IL_010e;
	}

IL_00ff:
	{
		int32_t L_55 = V_1;
		int32_t L_56 = V_0;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_56))))
		{
			goto IL_010e;
		}
	}
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_57 = V_3;
		String_t* L_58 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_57);
		TypeSpec_AddName_mEF7336F662841D8A5B8157BA703C8959A808C9B7(L_57, L_58, /*hidden argument*/NULL);
	}

IL_010e:
	{
		bool L_59 = V_2;
		if (!L_59)
		{
			goto IL_0510;
		}
	}
	{
		goto IL_0504;
	}

IL_0119:
	{
		String_t* L_60 = ___name0;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		Il2CppChar L_62 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_60, L_61, /*hidden argument*/NULL);
		V_4 = L_62;
		Il2CppChar L_63 = V_4;
		if ((!(((uint32_t)L_63) <= ((uint32_t)((int32_t)42)))))
		{
			goto IL_0139;
		}
	}
	{
		Il2CppChar L_64 = V_4;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)38))))
		{
			goto IL_0159;
		}
	}
	{
		Il2CppChar L_65 = V_4;
		if ((((int32_t)L_65) == ((int32_t)((int32_t)42))))
		{
			goto IL_017d;
		}
	}
	{
		goto IL_04be;
	}

IL_0139:
	{
		Il2CppChar L_66 = V_4;
		if ((((int32_t)L_66) == ((int32_t)((int32_t)44))))
		{
			goto IL_01ce;
		}
	}
	{
		Il2CppChar L_67 = V_4;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)91))))
		{
			goto IL_0257;
		}
	}
	{
		Il2CppChar L_68 = V_4;
		if ((((int32_t)L_68) == ((int32_t)((int32_t)93))))
		{
			goto IL_04a6;
		}
	}
	{
		goto IL_04be;
	}

IL_0159:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_69 = V_3;
		NullCheck(L_69);
		bool L_70 = L_69->get_is_byref_5();
		if (!L_70)
		{
			goto IL_0171;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_71 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_71, _stringLiteral40CC7C91CEDB85B93D4EACD5B58CD3EED8F78995, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_0171:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_72 = V_3;
		NullCheck(L_72);
		L_72->set_is_byref_5((bool)1);
		goto IL_0500;
	}

IL_017d:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_73 = V_3;
		NullCheck(L_73);
		bool L_74 = L_73->get_is_byref_5();
		if (!L_74)
		{
			goto IL_0195;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_75 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_75, _stringLiteral1EBF18F72F75A7724D91ED7167E98A93A6497F6E, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_0195:
	{
		V_5 = 1;
		goto IL_01a4;
	}

IL_019a:
	{
		int32_t L_76 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		int32_t L_77 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_01a4:
	{
		int32_t L_78 = V_0;
		String_t* L_79 = ___name0;
		NullCheck(L_79);
		int32_t L_80 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_79, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1))) >= ((int32_t)L_80)))
		{
			goto IL_01bc;
		}
	}
	{
		String_t* L_81 = ___name0;
		int32_t L_82 = V_0;
		NullCheck(L_81);
		Il2CppChar L_83 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_81, ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_83) == ((int32_t)((int32_t)42))))
		{
			goto IL_019a;
		}
	}

IL_01bc:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_84 = V_3;
		int32_t L_85 = V_5;
		PointerSpec_tBCE1666DC24EC6E4E5376FEC214499984EC26892 * L_86 = (PointerSpec_tBCE1666DC24EC6E4E5376FEC214499984EC26892 *)il2cpp_codegen_object_new(PointerSpec_tBCE1666DC24EC6E4E5376FEC214499984EC26892_il2cpp_TypeInfo_var);
		PointerSpec__ctor_mB00CD482EDE6910DE19A767C128B00785F1A2136(L_86, L_85, /*hidden argument*/NULL);
		NullCheck(L_84);
		TypeSpec_AddModifier_m082500BAE4A512BA0E84CC85A71F4A67DA885909(L_84, L_86, /*hidden argument*/NULL);
		goto IL_0500;
	}

IL_01ce:
	{
		bool L_87 = ___is_recurse2;
		bool L_88 = ___allow_aqn3;
		if (!((int32_t)((int32_t)L_87&(int32_t)L_88)))
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_89 = V_0;
		V_6 = L_89;
		goto IL_01de;
	}

IL_01d8:
	{
		int32_t L_90 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
	}

IL_01de:
	{
		int32_t L_91 = V_6;
		String_t* L_92 = ___name0;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_92, /*hidden argument*/NULL);
		if ((((int32_t)L_91) >= ((int32_t)L_93)))
		{
			goto IL_01f4;
		}
	}
	{
		String_t* L_94 = ___name0;
		int32_t L_95 = V_6;
		NullCheck(L_94);
		Il2CppChar L_96 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_94, L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_01d8;
		}
	}

IL_01f4:
	{
		int32_t L_97 = V_6;
		String_t* L_98 = ___name0;
		NullCheck(L_98);
		int32_t L_99 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_98, /*hidden argument*/NULL);
		if ((((int32_t)L_97) < ((int32_t)L_99)))
		{
			goto IL_0209;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_100 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_100, _stringLiteral3CC14F805C52F5EF488C806DE2DB5C83C5496346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_0209:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_101 = V_3;
		String_t* L_102 = ___name0;
		int32_t L_103 = V_0;
		int32_t L_104 = V_6;
		int32_t L_105 = V_0;
		NullCheck(L_102);
		String_t* L_106 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_102, ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)L_105)), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_106);
		String_t* L_107 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_106, /*hidden argument*/NULL);
		NullCheck(L_101);
		L_101->set_assembly_name_1(L_107);
		int32_t* L_108 = ___p1;
		int32_t L_109 = V_6;
		*((int32_t*)L_108) = (int32_t)L_109;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_110 = V_3;
		return L_110;
	}

IL_0229:
	{
		bool L_111 = ___is_recurse2;
		if (!L_111)
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_112 = ___p1;
		int32_t L_113 = V_0;
		*((int32_t*)L_112) = (int32_t)L_113;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_114 = V_3;
		return L_114;
	}

IL_0231:
	{
		bool L_115 = ___allow_aqn3;
		if (!L_115)
		{
			goto IL_0500;
		}
	}
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_116 = V_3;
		String_t* L_117 = ___name0;
		int32_t L_118 = V_0;
		NullCheck(L_117);
		String_t* L_119 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_117, ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_119);
		String_t* L_120 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_119, /*hidden argument*/NULL);
		NullCheck(L_116);
		L_116->set_assembly_name_1(L_120);
		String_t* L_121 = ___name0;
		NullCheck(L_121);
		int32_t L_122 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_121, /*hidden argument*/NULL);
		V_0 = L_122;
		goto IL_0500;
	}

IL_0257:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_123 = V_3;
		NullCheck(L_123);
		bool L_124 = L_123->get_is_byref_5();
		if (!L_124)
		{
			goto IL_026f;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_125 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_125, _stringLiteral2DBCA2328A7A87F4A438EE5BD7F4CE528F0DCD14, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_125, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_026f:
	{
		int32_t L_126 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		int32_t L_127 = V_0;
		String_t* L_128 = ___name0;
		NullCheck(L_128);
		int32_t L_129 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_128, /*hidden argument*/NULL);
		if ((((int32_t)L_127) < ((int32_t)L_129)))
		{
			goto IL_028c;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_130 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_130, _stringLiteral9037B62BA73A6A3E99186380F4A8BEDFA5D40E1C, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_130, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_028c:
	{
		String_t* L_131 = ___name0;
		TypeSpec_SkipSpace_mF388B6F9C82F795BA722B706A5435B0E799A531C(L_131, (int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_132 = ___name0;
		int32_t L_133 = V_0;
		NullCheck(L_132);
		Il2CppChar L_134 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_132, L_133, /*hidden argument*/NULL);
		if ((((int32_t)L_134) == ((int32_t)((int32_t)44))))
		{
			goto IL_03d5;
		}
	}
	{
		String_t* L_135 = ___name0;
		int32_t L_136 = V_0;
		NullCheck(L_135);
		Il2CppChar L_137 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_135, L_136, /*hidden argument*/NULL);
		if ((((int32_t)L_137) == ((int32_t)((int32_t)42))))
		{
			goto IL_03d5;
		}
	}
	{
		String_t* L_138 = ___name0;
		int32_t L_139 = V_0;
		NullCheck(L_138);
		Il2CppChar L_140 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_138, L_139, /*hidden argument*/NULL);
		if ((((int32_t)L_140) == ((int32_t)((int32_t)93))))
		{
			goto IL_03d5;
		}
	}
	{
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_141 = (List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA *)il2cpp_codegen_object_new(List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA_il2cpp_TypeInfo_var);
		List_1__ctor_mAF11022CD0FF8181D72047FFC57B48590F17FFAC(L_141, /*hidden argument*/List_1__ctor_mAF11022CD0FF8181D72047FFC57B48590F17FFAC_RuntimeMethod_var);
		V_7 = L_141;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_142 = V_3;
		NullCheck(L_142);
		bool L_143 = TypeSpec_get_HasModifiers_mF783ED5C395D4ACB94D30014B9F79E19E90EC9FD(L_142, /*hidden argument*/NULL);
		if (!L_143)
		{
			goto IL_0398;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_144 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_144, _stringLiteralAC223DCCCDBCF3FC5FA4ADAE3AB814451427CD3F, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_02e0:
	{
		String_t* L_145 = ___name0;
		TypeSpec_SkipSpace_mF388B6F9C82F795BA722B706A5435B0E799A531C(L_145, (int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_146 = ___name0;
		int32_t L_147 = V_0;
		NullCheck(L_146);
		Il2CppChar L_148 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_146, L_147, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_148) == ((int32_t)((int32_t)91)))? 1 : 0);
		bool L_149 = V_8;
		if (!L_149)
		{
			goto IL_02fd;
		}
	}
	{
		int32_t L_150 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1));
	}

IL_02fd:
	{
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_151 = V_7;
		String_t* L_152 = ___name0;
		bool L_153 = V_8;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_154 = TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405(L_152, (int32_t*)(&V_0), (bool)1, L_153, /*hidden argument*/NULL);
		NullCheck(L_151);
		List_1_Add_m12E0FC5DF0E1CB81E7DEADBBDD311E3E1AFC2DB4(L_151, L_154, /*hidden argument*/List_1_Add_m12E0FC5DF0E1CB81E7DEADBBDD311E3E1AFC2DB4_RuntimeMethod_var);
		int32_t L_155 = V_0;
		String_t* L_156 = ___name0;
		TypeSpec_BoundCheck_m5CF5E6F2632D8D4D205DC26F6666BE9EA7D874FB(L_155, L_156, /*hidden argument*/NULL);
		bool L_157 = V_8;
		if (!L_157)
		{
			goto IL_0357;
		}
	}
	{
		String_t* L_158 = ___name0;
		int32_t L_159 = V_0;
		NullCheck(L_158);
		Il2CppChar L_160 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_158, L_159, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_160) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_032b;
		}
	}
	{
		int32_t L_161 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)1));
		goto IL_0350;
	}

IL_032b:
	{
		String_t* L_162 = ___name0;
		int32_t L_163 = V_0;
		NullCheck(L_162);
		Il2CppChar L_164 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_162, L_163, /*hidden argument*/NULL);
		V_4 = L_164;
		String_t* L_165 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&V_4), /*hidden argument*/NULL);
		String_t* L_166 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral20FED387605751EEA20B8EDAA265186F0E25C9DD, L_165, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_167 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_167, L_166, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_167, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_0350:
	{
		int32_t L_168 = V_0;
		String_t* L_169 = ___name0;
		TypeSpec_BoundCheck_m5CF5E6F2632D8D4D205DC26F6666BE9EA7D874FB(L_168, L_169, /*hidden argument*/NULL);
	}

IL_0357:
	{
		String_t* L_170 = ___name0;
		int32_t L_171 = V_0;
		NullCheck(L_170);
		Il2CppChar L_172 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_170, L_171, /*hidden argument*/NULL);
		if ((((int32_t)L_172) == ((int32_t)((int32_t)93))))
		{
			goto IL_03a4;
		}
	}
	{
		String_t* L_173 = ___name0;
		int32_t L_174 = V_0;
		NullCheck(L_173);
		Il2CppChar L_175 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_173, L_174, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_175) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0373;
		}
	}
	{
		int32_t L_176 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1));
		goto IL_0398;
	}

IL_0373:
	{
		String_t* L_177 = ___name0;
		int32_t L_178 = V_0;
		NullCheck(L_177);
		Il2CppChar L_179 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_177, L_178, /*hidden argument*/NULL);
		V_4 = L_179;
		String_t* L_180 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&V_4), /*hidden argument*/NULL);
		String_t* L_181 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral6BF0FD54E37B109D934887898BCA5680FCDF70C5, L_180, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_182 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_182, L_181, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_182, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_0398:
	{
		int32_t L_183 = V_0;
		String_t* L_184 = ___name0;
		NullCheck(L_184);
		int32_t L_185 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_184, /*hidden argument*/NULL);
		if ((((int32_t)L_183) < ((int32_t)L_185)))
		{
			goto IL_02e0;
		}
	}

IL_03a4:
	{
		int32_t L_186 = V_0;
		String_t* L_187 = ___name0;
		NullCheck(L_187);
		int32_t L_188 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_187, /*hidden argument*/NULL);
		if ((((int32_t)L_186) >= ((int32_t)L_188)))
		{
			goto IL_03b8;
		}
	}
	{
		String_t* L_189 = ___name0;
		int32_t L_190 = V_0;
		NullCheck(L_189);
		Il2CppChar L_191 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_189, L_190, /*hidden argument*/NULL);
		if ((((int32_t)L_191) == ((int32_t)((int32_t)93))))
		{
			goto IL_03c8;
		}
	}

IL_03b8:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_192 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_192, _stringLiteralCAADDB127D0DC4313E5704D5F010772D3AD766ED, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_192, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_03c8:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_193 = V_3;
		List_1_t8C8BF378AAB72B34B6EE63F686877AE7290ECFBA * L_194 = V_7;
		NullCheck(L_193);
		L_193->set_generic_params_3(L_194);
		goto IL_0500;
	}

IL_03d5:
	{
		V_9 = 1;
		V_10 = (bool)0;
		goto IL_0443;
	}

IL_03dd:
	{
		String_t* L_195 = ___name0;
		int32_t L_196 = V_0;
		NullCheck(L_195);
		Il2CppChar L_197 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_195, L_196, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_197) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0401;
		}
	}
	{
		bool L_198 = V_10;
		if (!L_198)
		{
			goto IL_03fc;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_199 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_199, _stringLiteralAD69AC24021D712B02ED72DF3DD0A70E1B01A01B, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_199, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_03fc:
	{
		V_10 = (bool)1;
		goto IL_0437;
	}

IL_0401:
	{
		String_t* L_200 = ___name0;
		int32_t L_201 = V_0;
		NullCheck(L_200);
		Il2CppChar L_202 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_200, L_201, /*hidden argument*/NULL);
		if ((((int32_t)L_202) == ((int32_t)((int32_t)44))))
		{
			goto IL_0431;
		}
	}
	{
		String_t* L_203 = ___name0;
		int32_t L_204 = V_0;
		NullCheck(L_203);
		Il2CppChar L_205 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_203, L_204, /*hidden argument*/NULL);
		V_4 = L_205;
		String_t* L_206 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&V_4), /*hidden argument*/NULL);
		String_t* L_207 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB3A8637874FFB852B3B8942459614113859FEE0F, L_206, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_208 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_208, L_207, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_208, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_0431:
	{
		int32_t L_209 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_209, (int32_t)1));
	}

IL_0437:
	{
		int32_t L_210 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)1));
		String_t* L_211 = ___name0;
		TypeSpec_SkipSpace_mF388B6F9C82F795BA722B706A5435B0E799A531C(L_211, (int32_t*)(&V_0), /*hidden argument*/NULL);
	}

IL_0443:
	{
		int32_t L_212 = V_0;
		String_t* L_213 = ___name0;
		NullCheck(L_213);
		int32_t L_214 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_213, /*hidden argument*/NULL);
		if ((((int32_t)L_212) >= ((int32_t)L_214)))
		{
			goto IL_0457;
		}
	}
	{
		String_t* L_215 = ___name0;
		int32_t L_216 = V_0;
		NullCheck(L_215);
		Il2CppChar L_217 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_215, L_216, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_217) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_03dd;
		}
	}

IL_0457:
	{
		int32_t L_218 = V_0;
		String_t* L_219 = ___name0;
		NullCheck(L_219);
		int32_t L_220 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_219, /*hidden argument*/NULL);
		if ((((int32_t)L_218) >= ((int32_t)L_220)))
		{
			goto IL_046b;
		}
	}
	{
		String_t* L_221 = ___name0;
		int32_t L_222 = V_0;
		NullCheck(L_221);
		Il2CppChar L_223 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_221, L_222, /*hidden argument*/NULL);
		if ((((int32_t)L_223) == ((int32_t)((int32_t)93))))
		{
			goto IL_047b;
		}
	}

IL_046b:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_224 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_224, _stringLiteral33370356128AA3B1263898B5524D4D405A01CA5E, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_224, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_047b:
	{
		int32_t L_225 = V_9;
		bool L_226 = V_10;
		if (!((int32_t)((int32_t)((((int32_t)L_225) > ((int32_t)1))? 1 : 0)&(int32_t)L_226)))
		{
			goto IL_0495;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_227 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_227, _stringLiteralE364CE10A99220B5DFCBF4821A817898A97E5BCB, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_227, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_0495:
	{
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_228 = V_3;
		int32_t L_229 = V_9;
		bool L_230 = V_10;
		ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970 * L_231 = (ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970 *)il2cpp_codegen_object_new(ArraySpec_tF374BB8994F7190916C6F14C7EA8FE6EFE017970_il2cpp_TypeInfo_var);
		ArraySpec__ctor_m7829BADEF006060440EBF1330EC85B9FF17CE6B4(L_231, L_229, L_230, /*hidden argument*/NULL);
		NullCheck(L_228);
		TypeSpec_AddModifier_m082500BAE4A512BA0E84CC85A71F4A67DA885909(L_228, L_231, /*hidden argument*/NULL);
		goto IL_0500;
	}

IL_04a6:
	{
		bool L_232 = ___is_recurse2;
		if (!L_232)
		{
			goto IL_04ae;
		}
	}
	{
		int32_t* L_233 = ___p1;
		int32_t L_234 = V_0;
		*((int32_t*)L_233) = (int32_t)L_234;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_235 = V_3;
		return L_235;
	}

IL_04ae:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_236 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_236, _stringLiteral1E5FC82CCB72553A236B455041C2CC6D97965017, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_236, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_04be:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_237 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_238 = L_237;
		NullCheck(L_238);
		ArrayElementTypeCheck (L_238, _stringLiteral7D1F754EE65E8FC64F63B1262838D9592369E1F7);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral7D1F754EE65E8FC64F63B1262838D9592369E1F7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_239 = L_238;
		String_t* L_240 = ___name0;
		int32_t L_241 = V_0;
		NullCheck(L_240);
		Il2CppChar L_242 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_240, L_241, /*hidden argument*/NULL);
		V_4 = L_242;
		String_t* L_243 = Char_ToString_mA42A88FEBA41B72D48BB24373E3101B7A91B6FD8((Il2CppChar*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_239);
		ArrayElementTypeCheck (L_239, L_243);
		(L_239)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_243);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_244 = L_239;
		NullCheck(L_244);
		ArrayElementTypeCheck (L_244, _stringLiteralE52C610014830CF451FCD5BFE6176FFC7E9E5500);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralE52C610014830CF451FCD5BFE6176FFC7E9E5500);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_245 = L_244;
		int32_t L_246 = V_0;
		int32_t L_247 = L_246;
		RuntimeObject * L_248 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_247);
		NullCheck(L_245);
		ArrayElementTypeCheck (L_245, L_248);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_248);
		String_t* L_249 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_245, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_250 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_250, L_249, _stringLiteral9FA22049CF6367C2DB11AB15BC3EDE8D5104CB06, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_250, TypeSpec_Parse_m9AE5F2E214E154E1AEDCB27FD207B0C4C8EBC405_RuntimeMethod_var);
	}

IL_0500:
	{
		int32_t L_251 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_251, (int32_t)1));
	}

IL_0504:
	{
		int32_t L_252 = V_0;
		String_t* L_253 = ___name0;
		NullCheck(L_253);
		int32_t L_254 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_253, /*hidden argument*/NULL);
		if ((((int32_t)L_252) < ((int32_t)L_254)))
		{
			goto IL_0119;
		}
	}

IL_0510:
	{
		int32_t* L_255 = ___p1;
		int32_t L_256 = V_0;
		*((int32_t*)L_255) = (int32_t)L_256;
		TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * L_257 = V_3;
		return L_257;
	}
}
// System.Void System.TypeSpec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSpec__ctor_m18DCF64756F091CE7A7DA6CDAD3142419602D901 (TypeSpec_t943289F7C537252144A22588159B36C6B6759A7F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.TypedReference System.TypedReference::MakeTypedReference(System.Object,System.Reflection.FieldInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8  TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC (RuntimeObject * ___target0, FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ___flds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* V_0 = NULL;
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * V_3 = NULL;
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * V_4 = NULL;
	RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		RuntimeObject * L_0 = ___target0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral0E8A3AD980EC179856012B7EECF4327E99CD44CD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var);
	}

IL_000e:
	{
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_2 = ___flds1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteral4BECD3F9C90F8D7A184FB632D4DEDA9B5481791D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var);
	}

IL_001c:
	{
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_4 = ___flds1;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral10A53546C08F0C2B88527F528FDD3D15B5959B33, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var);
	}

IL_0030:
	{
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_7 = ___flds1;
		NullCheck(L_7);
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_8 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		V_0 = L_8;
		RuntimeObject * L_9 = ___target0;
		NullCheck(L_9);
		Type_t * L_10 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_9, /*hidden argument*/NULL);
		V_1 = ((RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F *)CastclassClass((RuntimeObject*)L_10, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_011a;
	}

IL_004c:
	{
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_11 = ___flds1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		FieldInfo_t * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = ((RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 *)IsInstClass((RuntimeObject*)L_14, RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7_il2cpp_TypeInfo_var));
		RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * L_15 = V_3;
		bool L_16 = FieldInfo_op_Equality_m924E721654B7BDF09AA6E20C6E8D2BC4D4AF9DB7(L_15, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_17 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral1653AF59DA2921FD4F1494A7DAD6B7D7FC320C47, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_18 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var);
	}

IL_006e:
	{
		RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * L_19 = V_3;
		NullCheck(L_19);
		bool L_20 = FieldInfo_get_IsInitOnly_m55ECD5C1B5F908CC9D10FDA743C9014CDB45E044(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_007e;
		}
	}
	{
		RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * L_21 = V_3;
		NullCheck(L_21);
		bool L_22 = FieldInfo_get_IsStatic_mDEB4099D238E5846246F0ACED3FF9AD9C93D8ECA(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_008e;
		}
	}

IL_007e:
	{
		String_t* L_23 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralF1C632B1F91BC26A3DBD8A50A7FCDF474F316978, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_24 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var);
	}

IL_008e:
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_25 = V_1;
		RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * L_26 = V_3;
		NullCheck(L_26);
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_27 = RuntimeFieldInfo_GetDeclaringTypeInternal_m8325660CADABFA47D55C9CD649176638BE521046(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var);
		bool L_28 = RuntimeType_op_Inequality_mA98A719712593FEE5DCCFDB47CCABDB58BEE1B0D(L_25, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ba;
		}
	}
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_29 = V_1;
		RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * L_30 = V_3;
		NullCheck(L_30);
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_31 = RuntimeFieldInfo_GetDeclaringTypeInternal_m8325660CADABFA47D55C9CD649176638BE521046(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_32 = VirtFuncInvoker1< bool, Type_t * >::Invoke(109 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_29, L_31);
		if (L_32)
		{
			goto IL_00ba;
		}
	}
	{
		String_t* L_33 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral48E3C7922E67FC100CF2B7A133A26ADCFB2044FE, /*hidden argument*/NULL);
		MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD * L_34 = (MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD *)il2cpp_codegen_object_new(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD_il2cpp_TypeInfo_var);
		MissingMemberException__ctor_m2F8C7F0015B6EFEC5BD07F8240D53C2AEE4649DC(L_34, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var);
	}

IL_00ba:
	{
		RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * L_35 = V_3;
		NullCheck(L_35);
		Type_t * L_36 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_35);
		V_4 = ((RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F *)CastclassClass((RuntimeObject*)L_36, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var));
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_37 = V_4;
		NullCheck(L_37);
		bool L_38 = Type_get_IsPrimitive_m8E39430EE4B70E1AE690B51E9BE681C7758DFF5A(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_39 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralDF7A2F270E0369172CE2F27B621403FE9FEBEF74, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_40 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var);
	}

IL_00e0:
	{
		int32_t L_41 = V_2;
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_42 = ___flds1;
		NullCheck(L_42);
		if ((((int32_t)L_41) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))), (int32_t)1)))))
		{
			goto IL_0101;
		}
	}
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_43 = V_4;
		NullCheck(L_43);
		bool L_44 = Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_45 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral1CBD801F805A5FBD3AD0F5E193C36FE40C2BB005, /*hidden argument*/NULL);
		MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD * L_46 = (MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD *)il2cpp_codegen_object_new(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD_il2cpp_TypeInfo_var);
		MissingMemberException__ctor_m2F8C7F0015B6EFEC5BD07F8240D53C2AEE4649DC(L_46, L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, TypedReference_MakeTypedReference_m4258853ADBD3EA5DB6AB0B3F48C82F81DBA1C1DC_RuntimeMethod_var);
	}

IL_0101:
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_47 = V_0;
		int32_t L_48 = V_2;
		RuntimeFieldInfo_t9C8BA644F857EBE60EC6587AE1C1148E420E66F7 * L_49 = V_3;
		NullCheck(L_49);
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_50 = VirtFuncInvoker0< RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  >::Invoke(17 /* System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle() */, L_49);
		V_5 = L_50;
		intptr_t L_51 = RuntimeFieldHandle_get_Value_m2C81CBF4FC895E7A343C344BE8EE96D9DEBEA3DA_inline((RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF *)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (intptr_t)L_51);
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_52 = V_4;
		V_1 = L_52;
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_011a:
	{
		int32_t L_54 = V_2;
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_55 = ___flds1;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject * L_56 = ___target0;
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_57 = ___flds1;
		TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8  L_58 = TypedReference_MakeTypedReferenceInternal_mD1DFB634CA2F3B5335B4FFDA97A25DEB90DD170C(L_56, L_57, /*hidden argument*/NULL);
		return L_58;
	}
}
// System.TypedReference System.TypedReference::MakeTypedReferenceInternal(System.Object,System.Reflection.FieldInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8  TypedReference_MakeTypedReferenceInternal_mD1DFB634CA2F3B5335B4FFDA97A25DEB90DD170C (RuntimeObject * ___target0, FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* ___fields1, const RuntimeMethod* method)
{
	typedef TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8  (*TypedReference_MakeTypedReferenceInternal_mD1DFB634CA2F3B5335B4FFDA97A25DEB90DD170C_ftn) (RuntimeObject *, FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE*);
	using namespace il2cpp::icalls;
	return  ((TypedReference_MakeTypedReferenceInternal_mD1DFB634CA2F3B5335B4FFDA97A25DEB90DD170C_ftn)mscorlib::System::TypedReference::MakeTypedReferenceInternal) (___target0, ___fields1);
}
// System.Int32 System.TypedReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypedReference_GetHashCode_m6A586AC495B0AB6D55E7EAE301C82BB2752A4289 (TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_GetHashCode_m6A586AC495B0AB6D55E7EAE301C82BB2752A4289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_Type_2();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8  L_2 = (*(TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2.get_type_0(), /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t TypedReference_GetHashCode_m6A586AC495B0AB6D55E7EAE301C82BB2752A4289_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * _thisAdjusted = reinterpret_cast<TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 *>(__this + _offset);
	return TypedReference_GetHashCode_m6A586AC495B0AB6D55E7EAE301C82BB2752A4289(_thisAdjusted, method);
}
// System.Boolean System.TypedReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedReference_Equals_m167F7EDD4393DE114882916B753AC2D23A3840EA (TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_Equals_m167F7EDD4393DE114882916B753AC2D23A3840EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral6769C7D05AE4784134EB90FB28856F9D7D5D581A, /*hidden argument*/NULL);
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TypedReference_Equals_m167F7EDD4393DE114882916B753AC2D23A3840EA_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  bool TypedReference_Equals_m167F7EDD4393DE114882916B753AC2D23A3840EA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * _thisAdjusted = reinterpret_cast<TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 *>(__this + _offset);
	return TypedReference_Equals_m167F7EDD4393DE114882916B753AC2D23A3840EA(_thisAdjusted, ___o0, method);
}
// System.Boolean System.TypedReference::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedReference_get_IsNull_mD2B185E19B07577D8434A7DAD3AF5F9E2D09C532 (TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * __this, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = __this->get_address_of_Value_1();
		bool L_1 = IntPtr_IsNull_mEB01FA7670F5CA3BE36507B9528EC6F1D5AAC6B4((intptr_t*)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		intptr_t* L_2 = __this->get_address_of_Type_2();
		bool L_3 = IntPtr_IsNull_mEB01FA7670F5CA3BE36507B9528EC6F1D5AAC6B4((intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TypedReference_get_IsNull_mD2B185E19B07577D8434A7DAD3AF5F9E2D09C532_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 * _thisAdjusted = reinterpret_cast<TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 *>(__this + _offset);
	return TypedReference_get_IsNull_mD2B185E19B07577D8434A7DAD3AF5F9E2D09C532(_thisAdjusted, method);
}
// System.Void System.TypedReference::SetTypedReference(System.TypedReference,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedReference_SetTypedReference_mCA19C65317890F40F1D808976B785A5368DFE411 (TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8  ___target0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_SetTypedReference_mCA19C65317890F40F1D808976B785A5368DFE411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(L_0, _stringLiteralB4E34B56A9437FD11B5764C22789947A48B35EA5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, TypedReference_SetTypedReference_mCA19C65317890F40F1D808976B785A5368DFE411_RuntimeMethod_var);
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
// System.Int32 System.UInt16::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_m91AEACDAA81D12A2A8D868938F797B112330EC44 (uint16_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_CompareTo_m91AEACDAA81D12A2A8D868938F797B112330EC44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = *((uint16_t*)__this);
		RuntimeObject * L_3 = ___value0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_3, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var))))));
	}

IL_0017:
	{
		String_t* L_4 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralA9C97EF8AFEE4B1DBDBC6ACD84D8BB932359DE53, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, UInt16_CompareTo_m91AEACDAA81D12A2A8D868938F797B112330EC44_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  int32_t UInt16_CompareTo_m91AEACDAA81D12A2A8D868938F797B112330EC44_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_CompareTo_m91AEACDAA81D12A2A8D868938F797B112330EC44(_thisAdjusted, ___value0, method);
}
// System.Int32 System.UInt16::CompareTo(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_mC43C95442258DFAD3852458A9EC9E1CB76EEE644 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		uint16_t L_1 = ___value0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
IL2CPP_EXTERN_C  int32_t UInt16_CompareTo_mC43C95442258DFAD3852458A9EC9E1CB76EEE644_AdjustorThunk (RuntimeObject * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_CompareTo_mC43C95442258DFAD3852458A9EC9E1CB76EEE644(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt16::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_mBCD7FC4A11D0CEEFF4BC6559137A9E397D7017B8 (uint16_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_Equals_mBCD7FC4A11D0CEEFF4BC6559137A9E397D7017B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = *((uint16_t*)__this);
		RuntimeObject * L_2 = ___obj0;
		return (bool)((((int32_t)L_1) == ((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_2, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var))))))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UInt16_Equals_mBCD7FC4A11D0CEEFF4BC6559137A9E397D7017B8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_Equals_mBCD7FC4A11D0CEEFF4BC6559137A9E397D7017B8(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt16::Equals(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_m276F4220CB70A960FF4E874EE1D388C277EF806C (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		uint16_t L_1 = ___obj0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UInt16_Equals_m276F4220CB70A960FF4E874EE1D388C277EF806C_AdjustorThunk (RuntimeObject * __this, uint16_t ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_Equals_m276F4220CB70A960FF4E874EE1D388C277EF806C(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m6EA43320256903F18CCA1A82905DB6F75BC4FB6E (uint16_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t UInt16_GetHashCode_m6EA43320256903F18CCA1A82905DB6F75BC4FB6E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_GetHashCode_m6EA43320256903F18CCA1A82905DB6F75BC4FB6E(_thisAdjusted, method);
}
// System.String System.UInt16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m4B42F0450EE965C7C9DD2AB19EB000D47CE978A2 (uint16_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt32_m585E2571063A256E46836A51BC4A54CFF151BDEE(L_0, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* UInt16_ToString_m4B42F0450EE965C7C9DD2AB19EB000D47CE978A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_ToString_m4B42F0450EE965C7C9DD2AB19EB000D47CE978A2(_thisAdjusted, method);
}
// System.String System.UInt16::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m50316C445AD23CCA40AA52A381C5E06A3786F12A (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		RuntimeObject* L_1 = ___provider0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_1, /*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt32_m585E2571063A256E46836A51BC4A54CFF151BDEE(L_0, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* UInt16_ToString_m50316C445AD23CCA40AA52A381C5E06A3786F12A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_ToString_m50316C445AD23CCA40AA52A381C5E06A3786F12A(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt16::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m46247C2ED36EE841B11C566CC64195F333935FE3 (uint16_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		String_t* L_1 = ___format0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt32_m585E2571063A256E46836A51BC4A54CFF151BDEE(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* UInt16_ToString_m46247C2ED36EE841B11C566CC64195F333935FE3_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_ToString_m46247C2ED36EE841B11C566CC64195F333935FE3(_thisAdjusted, ___format0, method);
}
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mD0CBA1F073A0E16528C1A7EB4E8A9892D218895B (uint16_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		String_t* L_1 = ___format0;
		RuntimeObject* L_2 = ___provider1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_3 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_2, /*hidden argument*/NULL);
		String_t* L_4 = Number_FormatUInt32_m585E2571063A256E46836A51BC4A54CFF151BDEE(L_0, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* UInt16_ToString_mD0CBA1F073A0E16528C1A7EB4E8A9892D218895B_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_ToString_mD0CBA1F073A0E16528C1A7EB4E8A9892D218895B(_thisAdjusted, ___format0, ___provider1, method);
}
// System.UInt16 System.UInt16::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt16_Parse_m63ED81DBC50063DC0C6A7BD92F38D42CE36C14F8 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_1, /*hidden argument*/NULL);
		uint16_t L_3 = UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254(L_0, 7, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt16_Parse_mEA6E086539E279750BCC41E5C9638C2514924E8B (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m5BD1C04C26D5589F0DFA5953294B72E1DDC2B7E3(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_4 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_3, /*hidden argument*/NULL);
		uint16_t L_5 = UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254(L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254 (String_t* ___s0, int32_t ___style1, NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___info2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = ___info2;
		uint32_t L_3 = Number_ParseUInt32_mF280A62925FED84E23D64DC6B86BC50AD96896FB(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000d;
		throw e;
	}

CATCH_000d:
	{ // begin catch(System.OverflowException)
		V_1 = ((OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)__exception_local);
		String_t* L_4 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral6972AB6A4112783DFDFEE444146EB3CF741CCD13, /*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_5 = V_1;
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_6 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_001f:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral6972AB6A4112783DFDFEE444146EB3CF741CCD13, /*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_9 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_mE1A042FFEBF00B79612E8595B8D49785B357D731(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, UInt16_Parse_m12E00A51D9C346D8537FD42FC93C9113D2A0D254_RuntimeMethod_var);
	}

IL_0037:
	{
		uint32_t L_10 = V_0;
		return (uint16_t)(((int32_t)((uint16_t)L_10)));
	}
}
// System.TypeCode System.UInt16::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetTypeCode_m3F7CA335640E0702177D473528E70C8D58E0E068 (uint16_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(8);
	}
}
IL2CPP_EXTERN_C  int32_t UInt16_GetTypeCode_m3F7CA335640E0702177D473528E70C8D58E0E068_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_GetTypeCode_m3F7CA335640E0702177D473528E70C8D58E0E068(_thisAdjusted, method);
}
// System.Boolean System.UInt16::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_System_IConvertible_ToBoolean_mC81E40A61B311E3D9E69439B629E90816966F72A (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToBoolean_mC81E40A61B311E3D9E69439B629E90816966F72A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		bool L_1 = Convert_ToBoolean_m1AFE52438BC600124643ECEB4EDF9C3FE21171FE((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool UInt16_System_IConvertible_ToBoolean_mC81E40A61B311E3D9E69439B629E90816966F72A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToBoolean_mC81E40A61B311E3D9E69439B629E90816966F72A(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt16::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UInt16_System_IConvertible_ToChar_m6CD04280CB5C9546579E13211911F5B42B498F0F (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToChar_m6CD04280CB5C9546579E13211911F5B42B498F0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_m14666E8E6027FFF4BFA6DA0563A4CAAEA6A6989B((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Il2CppChar UInt16_System_IConvertible_ToChar_m6CD04280CB5C9546579E13211911F5B42B498F0F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToChar_m6CD04280CB5C9546579E13211911F5B42B498F0F(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt16::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t UInt16_System_IConvertible_ToSByte_mA4AD532B0AF50FD2F6AEBCDB581EA1EE43FCA3CF (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToSByte_mA4AD532B0AF50FD2F6AEBCDB581EA1EE43FCA3CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m4455F931B18E5D87DE1F99B2686F3D4770E9D177((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int8_t UInt16_System_IConvertible_ToSByte_mA4AD532B0AF50FD2F6AEBCDB581EA1EE43FCA3CF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToSByte_mA4AD532B0AF50FD2F6AEBCDB581EA1EE43FCA3CF(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt16::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UInt16_System_IConvertible_ToByte_mA95B992F24924E773C5602A6FEE29BDE5EE2072F (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToByte_mA95B992F24924E773C5602A6FEE29BDE5EE2072F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_m4D9F94693332601CE2F1CF8DB9933F7C0FE882B1((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t UInt16_System_IConvertible_ToByte_mA95B992F24924E773C5602A6FEE29BDE5EE2072F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToByte_mA95B992F24924E773C5602A6FEE29BDE5EE2072F(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt16::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UInt16_System_IConvertible_ToInt16_m0818293E3F1271A2AD126AE950B71DBDDD3286D3 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt16_m0818293E3F1271A2AD126AE950B71DBDDD3286D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m57BC4B92DCAEAA22820CD1915778B407AC23D9C5((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int16_t UInt16_System_IConvertible_ToInt16_m0818293E3F1271A2AD126AE950B71DBDDD3286D3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToInt16_m0818293E3F1271A2AD126AE950B71DBDDD3286D3(_thisAdjusted, ___provider0, method);
}
// System.UInt16 System.UInt16::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt16_System_IConvertible_ToUInt16_mC5507444643901A95C85AA36B8F702EEA4616C81 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint16_t*)__this);
		return (uint16_t)L_0;
	}
}
IL2CPP_EXTERN_C  uint16_t UInt16_System_IConvertible_ToUInt16_mC5507444643901A95C85AA36B8F702EEA4616C81_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToUInt16_mC5507444643901A95C85AA36B8F702EEA4616C81(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt16::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_System_IConvertible_ToInt32_mA3C6E3F7DE9C6C893CAA5301EEDA26036554F34C (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt32_mA3C6E3F7DE9C6C893CAA5301EEDA26036554F34C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m8A95C977AFB27DA577E58CAE3255F8B24EE79517((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UInt16_System_IConvertible_ToInt32_mA3C6E3F7DE9C6C893CAA5301EEDA26036554F34C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToInt32_mA3C6E3F7DE9C6C893CAA5301EEDA26036554F34C(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt16::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt16_System_IConvertible_ToUInt32_m6DA7A076663655EB849211FF9BD16582F863C5F3 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToUInt32_m6DA7A076663655EB849211FF9BD16582F863C5F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_mED4922B504189D92D2F6F52BB959895A5979EE40((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t UInt16_System_IConvertible_ToUInt32_m6DA7A076663655EB849211FF9BD16582F863C5F3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToUInt32_m6DA7A076663655EB849211FF9BD16582F863C5F3(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt16::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UInt16_System_IConvertible_ToInt64_mC204E05417B4F982A189912080F57F20E24275CB (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt64_mC204E05417B4F982A189912080F57F20E24275CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_mE191CDE636529E410288B04286028D56CBC8EE53((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t UInt16_System_IConvertible_ToInt64_mC204E05417B4F982A189912080F57F20E24275CB_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToInt64_mC204E05417B4F982A189912080F57F20E24275CB(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt16::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt16_System_IConvertible_ToUInt64_m510EF773A50C42F0B60B2C8AE753FC7873B3A97B (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToUInt64_m510EF773A50C42F0B60B2C8AE753FC7873B3A97B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m13A97BCFDAB847AC0D6379DA3FBE031509801944((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t UInt16_System_IConvertible_ToUInt64_m510EF773A50C42F0B60B2C8AE753FC7873B3A97B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToUInt64_m510EF773A50C42F0B60B2C8AE753FC7873B3A97B(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt16::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UInt16_System_IConvertible_ToSingle_m6B087CB34DBF0B394642977BB68F8B503DED3C7E (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToSingle_m6B087CB34DBF0B394642977BB68F8B503DED3C7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_mFBCC3DBA2C1A176506B5B23193DD0F5F27085EAA((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float UInt16_System_IConvertible_ToSingle_m6B087CB34DBF0B394642977BB68F8B503DED3C7E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToSingle_m6B087CB34DBF0B394642977BB68F8B503DED3C7E(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt16::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UInt16_System_IConvertible_ToDouble_m62236A4E72E544543EA440ED142B8BA093ADCB40 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDouble_m62236A4E72E544543EA440ED142B8BA093ADCB40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m5427641E8803E839561F9C10071C3E33A1A6F854((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  double UInt16_System_IConvertible_ToDouble_m62236A4E72E544543EA440ED142B8BA093ADCB40_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToDouble_m62236A4E72E544543EA440ED142B8BA093ADCB40(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt16::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt16_System_IConvertible_ToDecimal_m74D92DB8814035966C6CFF447753338B03287E43 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDecimal_m74D92DB8814035966C6CFF447753338B03287E43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = Convert_ToDecimal_mFD0BC78E6BE4EDBFD7A0767E7D95A39E40F0260F((uint16_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt16_System_IConvertible_ToDecimal_m74D92DB8814035966C6CFF447753338B03287E43_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToDecimal_m74D92DB8814035966C6CFF447753338B03287E43(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt16::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt16_System_IConvertible_ToDateTime_m7AD170006FECE0BAC29179FFE72D7AC1B0D0C735 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDateTime_m7AD170006FECE0BAC29179FFE72D7AC1B0D0C735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral70B4BB2684C3F8969E2FE9E14B470906FD4CF3C6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral70B4BB2684C3F8969E2FE9E14B470906FD4CF3C6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralF1E5BAF5ECC3589631088C40CBDD43061976ED8F);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralF1E5BAF5ECC3589631088C40CBDD43061976ED8F);
		String_t* L_3 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteralE5559C91F3F57F398B8B547CA356C67FFA1F6497, L_2, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, UInt16_System_IConvertible_ToDateTime_m7AD170006FECE0BAC29179FFE72D7AC1B0D0C735_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt16_System_IConvertible_ToDateTime_m7AD170006FECE0BAC29179FFE72D7AC1B0D0C735_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToDateTime_m7AD170006FECE0BAC29179FFE72D7AC1B0D0C735(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UInt16_System_IConvertible_ToType_m2FD8E8941C266AE4254B1C4C068F4C5238C08695 (uint16_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToType_m2FD8E8941C266AE4254B1C4C068F4C5238C08695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint16_t*)__this);
		uint16_t L_1 = ((uint16_t)L_0);
		RuntimeObject * L_2 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_1);
		Type_t * L_3 = ___type0;
		RuntimeObject* L_4 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = Convert_DefaultToType_m899D5F6B9FE3E8B878BC56172C6BFE788B6C1BE3((RuntimeObject*)L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * UInt16_System_IConvertible_ToType_m2FD8E8941C266AE4254B1C4C068F4C5238C08695_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + _offset);
	return UInt16_System_IConvertible_ToType_m2FD8E8941C266AE4254B1C4C068F4C5238C08695(_thisAdjusted, ___type0, ___provider1, method);
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
// System.Int32 System.UInt32::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mA6BFE8D9033149D2FEF46526E251A3CDEB1889EB (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_CompareTo_mA6BFE8D9033149D2FEF46526E251A3CDEB1889EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(uint32_t*)((uint32_t*)UnBox(L_2, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var))));
		int32_t L_3 = *((uint32_t*)__this);
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)L_4))))
		{
			goto IL_001b;
		}
	}
	{
		return (-1);
	}

IL_001b:
	{
		int32_t L_5 = *((uint32_t*)__this);
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_5) > ((uint32_t)L_6))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_7 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral3C4D966BBA6CE40E91BAFB95088822186ECB287B, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, UInt32_CompareTo_mA6BFE8D9033149D2FEF46526E251A3CDEB1889EB_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  int32_t UInt32_CompareTo_mA6BFE8D9033149D2FEF46526E251A3CDEB1889EB_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_CompareTo_mA6BFE8D9033149D2FEF46526E251A3CDEB1889EB(_thisAdjusted, ___value0, method);
}
// System.Int32 System.UInt32::CompareTo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mB4DB0539EACF9C37A2DDDB1439F553E0CD2AA380 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		uint32_t L_1 = ___value0;
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}

IL_0007:
	{
		int32_t L_2 = *((uint32_t*)__this);
		uint32_t L_3 = ___value0;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t UInt32_CompareTo_mB4DB0539EACF9C37A2DDDB1439F553E0CD2AA380_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_CompareTo_mB4DB0539EACF9C37A2DDDB1439F553E0CD2AA380(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = *((uint32_t*)__this);
		RuntimeObject * L_2 = ___obj0;
		return (bool)((((int32_t)L_1) == ((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_2, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var))))))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt32::Equals(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m14536B6BD41067948C7ED484437DF75E3414F0D1 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		uint32_t L_1 = ___obj0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UInt32_Equals_m14536B6BD41067948C7ED484437DF75E3414F0D1_AdjustorThunk (RuntimeObject * __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_Equals_m14536B6BD41067948C7ED484437DF75E3414F0D1(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_m791E3E038DAA8DC313758009B1C532CD91194B0D (uint32_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t UInt32_GetHashCode_m791E3E038DAA8DC313758009B1C532CD91194B0D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_GetHashCode_m791E3E038DAA8DC313758009B1C532CD91194B0D(_thisAdjusted, method);
}
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m7D8A934AF1D74C5C8194D1556AA71BBA0D4600F2 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt32_m585E2571063A256E46836A51BC4A54CFF151BDEE(L_0, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* UInt32_ToString_m7D8A934AF1D74C5C8194D1556AA71BBA0D4600F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_ToString_m7D8A934AF1D74C5C8194D1556AA71BBA0D4600F2(_thisAdjusted, method);
}
// System.String System.UInt32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mC81601CD79044D74065228749C2CA9B629CFA3EA (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		RuntimeObject* L_1 = ___provider0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_1, /*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt32_m585E2571063A256E46836A51BC4A54CFF151BDEE(L_0, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* UInt32_ToString_mC81601CD79044D74065228749C2CA9B629CFA3EA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_ToString_mC81601CD79044D74065228749C2CA9B629CFA3EA(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m57BE7A0F4A653986FEAC4794CD13B04CE012F4EE (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		String_t* L_1 = ___format0;
		RuntimeObject* L_2 = ___provider1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_3 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_2, /*hidden argument*/NULL);
		String_t* L_4 = Number_FormatUInt32_m585E2571063A256E46836A51BC4A54CFF151BDEE(L_0, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* UInt32_ToString_m57BE7A0F4A653986FEAC4794CD13B04CE012F4EE_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_ToString_m57BE7A0F4A653986FEAC4794CD13B04CE012F4EE(_thisAdjusted, ___format0, ___provider1, method);
}
// System.UInt32 System.UInt32::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_mE1049C2D5FDBBA83337898D8608580C6E1CCFEE1 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_1, /*hidden argument*/NULL);
		uint32_t L_3 = Number_ParseUInt32_mF280A62925FED84E23D64DC6B86BC50AD96896FB(L_0, 7, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_mEEC266AE3E2BA9F49F4CD5E69EBDA3A1B008E125 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m5BD1C04C26D5589F0DFA5953294B72E1DDC2B7E3(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_4 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_3, /*hidden argument*/NULL);
		uint32_t L_5 = Number_ParseUInt32_mF280A62925FED84E23D64DC6B86BC50AD96896FB(L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_TryParse_mF53E581D2BF1451EC324BC2F601B6AEB0E2F9235 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m5BD1C04C26D5589F0DFA5953294B72E1DDC2B7E3(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_4 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_3, /*hidden argument*/NULL);
		uint32_t* L_5 = ___result3;
		bool L_6 = Number_TryParseUInt32_m5D5F513C1F31174E132E2646CC964C32E55F9436(L_1, L_2, L_4, (uint32_t*)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TypeCode System.UInt32::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetTypeCode_mA0E730CD3883A383AC3E4BA4FD639811906BDD90 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)10));
	}
}
IL2CPP_EXTERN_C  int32_t UInt32_GetTypeCode_mA0E730CD3883A383AC3E4BA4FD639811906BDD90_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_GetTypeCode_mA0E730CD3883A383AC3E4BA4FD639811906BDD90(_thisAdjusted, method);
}
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_System_IConvertible_ToBoolean_mFC8A4EC8666918A944AED690BAA21AD7B6132A7E (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToBoolean_mFC8A4EC8666918A944AED690BAA21AD7B6132A7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		bool L_1 = Convert_ToBoolean_m26CFF98BC762FA7371C580FB19013250FD567F46(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool UInt32_System_IConvertible_ToBoolean_mFC8A4EC8666918A944AED690BAA21AD7B6132A7E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToBoolean_mFC8A4EC8666918A944AED690BAA21AD7B6132A7E(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UInt32_System_IConvertible_ToChar_mC0A386C36A0EBC656E6F887A1CCD5DBBFF078030 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToChar_mC0A386C36A0EBC656E6F887A1CCD5DBBFF078030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_m56A1099464A288FD3AB6F82B7433DB063F671B29(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Il2CppChar UInt32_System_IConvertible_ToChar_mC0A386C36A0EBC656E6F887A1CCD5DBBFF078030_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToChar_mC0A386C36A0EBC656E6F887A1CCD5DBBFF078030(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t UInt32_System_IConvertible_ToSByte_mD7E08EC2B52A7612582C3E8C26878BAC0AB80984 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSByte_mD7E08EC2B52A7612582C3E8C26878BAC0AB80984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m2BA3408A7B10119B60B923928EFCFA17D3C46D50(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int8_t UInt32_System_IConvertible_ToSByte_mD7E08EC2B52A7612582C3E8C26878BAC0AB80984_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToSByte_mD7E08EC2B52A7612582C3E8C26878BAC0AB80984(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UInt32_System_IConvertible_ToByte_m9386861ED644D7B5E76BD0D7FB86DEEB0173A0A5 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToByte_m9386861ED644D7B5E76BD0D7FB86DEEB0173A0A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_m5B2E3D791EE1E14A7604D126C24AA62FE2587B60(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t UInt32_System_IConvertible_ToByte_m9386861ED644D7B5E76BD0D7FB86DEEB0173A0A5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToByte_m9386861ED644D7B5E76BD0D7FB86DEEB0173A0A5(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UInt32_System_IConvertible_ToInt16_mC8FA3B04E544531449665298BE73AB2F486AE393 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt16_mC8FA3B04E544531449665298BE73AB2F486AE393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_mE8E094D5AD321E5E6756E332116FAF1C084A1CD2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int16_t UInt32_System_IConvertible_ToInt16_mC8FA3B04E544531449665298BE73AB2F486AE393_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToInt16_mC8FA3B04E544531449665298BE73AB2F486AE393(_thisAdjusted, ___provider0, method);
}
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt32_System_IConvertible_ToUInt16_mBEE9936EF6F5D9D150E507F28CDA17A8C1C92E1C (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt16_mBEE9936EF6F5D9D150E507F28CDA17A8C1C92E1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m19D8F9B74EB5F96C835FA5045E925F000750A8B3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint16_t UInt32_System_IConvertible_ToUInt16_mBEE9936EF6F5D9D150E507F28CDA17A8C1C92E1C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToUInt16_mBEE9936EF6F5D9D150E507F28CDA17A8C1C92E1C(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_System_IConvertible_ToInt32_mB0FCB9A9ACF700AAD49333618A4B819E24F0F0B9 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt32_mB0FCB9A9ACF700AAD49333618A4B819E24F0F0B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m966337716B0CC4A45307D82BC21BCA1F8BB22D1C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UInt32_System_IConvertible_ToInt32_mB0FCB9A9ACF700AAD49333618A4B819E24F0F0B9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToInt32_mB0FCB9A9ACF700AAD49333618A4B819E24F0F0B9(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt32_System_IConvertible_ToUInt32_m7F98AF966A31B1A315E7DFFEE3F2A68D48E690AF (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = *((uint32_t*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint32_t UInt32_System_IConvertible_ToUInt32_m7F98AF966A31B1A315E7DFFEE3F2A68D48E690AF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToUInt32_m7F98AF966A31B1A315E7DFFEE3F2A68D48E690AF(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UInt32_System_IConvertible_ToInt64_m6E1441BF4C3D5FDFCAEEED65CFE96E6D9F08007B (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt64_m6E1441BF4C3D5FDFCAEEED65CFE96E6D9F08007B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m32144C3A1499C6810428CC3F22BCB095EFFEE99F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t UInt32_System_IConvertible_ToInt64_m6E1441BF4C3D5FDFCAEEED65CFE96E6D9F08007B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToInt64_m6E1441BF4C3D5FDFCAEEED65CFE96E6D9F08007B(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt32_System_IConvertible_ToUInt64_m659A2E594AAC8E26152B3EAAF1D80CECD2F43120 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt64_m659A2E594AAC8E26152B3EAAF1D80CECD2F43120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_mC8F7AEA2A46B8BEB45B65312F49EEE2540B596EC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t UInt32_System_IConvertible_ToUInt64_m659A2E594AAC8E26152B3EAAF1D80CECD2F43120_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToUInt64_m659A2E594AAC8E26152B3EAAF1D80CECD2F43120(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UInt32_System_IConvertible_ToSingle_m2B438F2707D2FB9C8FDC6D79B263677FA3C37096 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSingle_m2B438F2707D2FB9C8FDC6D79B263677FA3C37096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m6F50A25E0020F35AEC587BE3A91E1A6D78351249(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float UInt32_System_IConvertible_ToSingle_m2B438F2707D2FB9C8FDC6D79B263677FA3C37096_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToSingle_m2B438F2707D2FB9C8FDC6D79B263677FA3C37096(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UInt32_System_IConvertible_ToDouble_m4A3EDEA2044FAA202D4ED3C81672CF0308FAE7E8 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDouble_m4A3EDEA2044FAA202D4ED3C81672CF0308FAE7E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_mA48AAD04072EF9CD5A30C2B2EC69A796A0BA6194(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  double UInt32_System_IConvertible_ToDouble_m4A3EDEA2044FAA202D4ED3C81672CF0308FAE7E8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToDouble_m4A3EDEA2044FAA202D4ED3C81672CF0308FAE7E8(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt32_System_IConvertible_ToDecimal_m1C78EB4A4D9A092C050487129E0AE477ADBBE5A7 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDecimal_m1C78EB4A4D9A092C050487129E0AE477ADBBE5A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = Convert_ToDecimal_m291E4FE569EB911F06EF4269522C1DA0BEB7CB5F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt32_System_IConvertible_ToDecimal_m1C78EB4A4D9A092C050487129E0AE477ADBBE5A7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToDecimal_m1C78EB4A4D9A092C050487129E0AE477ADBBE5A7(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt32_System_IConvertible_ToDateTime_m450F7E1864FB6A396E9009116F8301B972DAE724 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDateTime_m450F7E1864FB6A396E9009116F8301B972DAE724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralE71E7BC3FE9E9F3C39E46B53FFFF0C83D9CC9A36);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralE71E7BC3FE9E9F3C39E46B53FFFF0C83D9CC9A36);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralF1E5BAF5ECC3589631088C40CBDD43061976ED8F);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralF1E5BAF5ECC3589631088C40CBDD43061976ED8F);
		String_t* L_3 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteralE5559C91F3F57F398B8B547CA356C67FFA1F6497, L_2, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, UInt32_System_IConvertible_ToDateTime_m450F7E1864FB6A396E9009116F8301B972DAE724_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt32_System_IConvertible_ToDateTime_m450F7E1864FB6A396E9009116F8301B972DAE724_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToDateTime_m450F7E1864FB6A396E9009116F8301B972DAE724(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UInt32_System_IConvertible_ToType_mEFD4D7AB69CB399E6603ADA3EDDF10FC622E4A3A (uint32_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToType_mEFD4D7AB69CB399E6603ADA3EDDF10FC622E4A3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *((uint32_t*)__this);
		uint32_t L_1 = ((uint32_t)L_0);
		RuntimeObject * L_2 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_1);
		Type_t * L_3 = ___type0;
		RuntimeObject* L_4 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = Convert_DefaultToType_m899D5F6B9FE3E8B878BC56172C6BFE788B6C1BE3((RuntimeObject*)L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * UInt32_System_IConvertible_ToType_mEFD4D7AB69CB399E6603ADA3EDDF10FC622E4A3A_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + _offset);
	return UInt32_System_IConvertible_ToType_mEFD4D7AB69CB399E6603ADA3EDDF10FC622E4A3A(_thisAdjusted, ___type0, ___provider1, method);
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
// System.Int32 System.UInt64::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_mB5A28DD05266BC32BD6FD24A6659B0464FFA8950 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_CompareTo_mB5A28DD05266BC32BD6FD24A6659B0464FFA8950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(uint64_t*)((uint64_t*)UnBox(L_2, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var))));
		int64_t L_3 = *((int64_t*)__this);
		uint64_t L_4 = V_0;
		if ((!(((uint64_t)L_3) < ((uint64_t)L_4))))
		{
			goto IL_001b;
		}
	}
	{
		return (-1);
	}

IL_001b:
	{
		int64_t L_5 = *((int64_t*)__this);
		uint64_t L_6 = V_0;
		if ((!(((uint64_t)L_5) > ((uint64_t)L_6))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_7 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral673CD30ADECC250EA8B762ED51852F93E288BB89, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, UInt64_CompareTo_mB5A28DD05266BC32BD6FD24A6659B0464FFA8950_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  int32_t UInt64_CompareTo_mB5A28DD05266BC32BD6FD24A6659B0464FFA8950_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_CompareTo_mB5A28DD05266BC32BD6FD24A6659B0464FFA8950(_thisAdjusted, ___value0, method);
}
// System.Int32 System.UInt64::CompareTo(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m03A38257A9E54676839E92A530E8BB17D6A58873 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)L_0) < ((uint64_t)L_1))))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}

IL_0007:
	{
		int64_t L_2 = *((int64_t*)__this);
		uint64_t L_3 = ___value0;
		if ((!(((uint64_t)L_2) > ((uint64_t)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t UInt64_CompareTo_m03A38257A9E54676839E92A530E8BB17D6A58873_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_CompareTo_m03A38257A9E54676839E92A530E8BB17D6A58873(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt64::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_mE61D24B984F0B91A2FC1094402F1532A0F82C232 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Equals_mE61D24B984F0B91A2FC1094402F1532A0F82C232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int64_t L_1 = *((int64_t*)__this);
		RuntimeObject * L_2 = ___obj0;
		return (bool)((((int64_t)L_1) == ((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_2, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var))))))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UInt64_Equals_mE61D24B984F0B91A2FC1094402F1532A0F82C232_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_Equals_mE61D24B984F0B91A2FC1094402F1532A0F82C232(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt64::Equals(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_m8C3B2C55776A9086B7F78F6A636F9B15B059F058 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		uint64_t L_1 = ___obj0;
		return (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UInt64_Equals_m8C3B2C55776A9086B7F78F6A636F9B15B059F058_AdjustorThunk (RuntimeObject * __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_Equals_m8C3B2C55776A9086B7F78F6A636F9B15B059F058(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD (uint64_t* __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		int64_t L_1 = *((int64_t*)__this);
		return ((int32_t)((int32_t)(((int32_t)((int32_t)L_0)))^(int32_t)(((int32_t)((int32_t)((int64_t)((uint64_t)L_1>>((int32_t)32))))))));
	}
}
IL2CPP_EXTERN_C  int32_t UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD(_thisAdjusted, method);
}
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_2 = Number_FormatUInt64_m04004F09D1913C13C59635153D0F45AF37F8248A(L_0, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672(_thisAdjusted, method);
}
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m6CBBC10ABBA0EE36F5E72F926A38F6CD7F497A55 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		RuntimeObject* L_1 = ___provider0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_1, /*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt64_m04004F09D1913C13C59635153D0F45AF37F8248A(L_0, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* UInt64_ToString_m6CBBC10ABBA0EE36F5E72F926A38F6CD7F497A55_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_ToString_m6CBBC10ABBA0EE36F5E72F926A38F6CD7F497A55(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		String_t* L_1 = ___format0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		String_t* L_3 = Number_FormatUInt64_m04004F09D1913C13C59635153D0F45AF37F8248A(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_ToString_m46B46DBB5F74DCDC6082A8AC8C695E2295925E71(_thisAdjusted, ___format0, method);
}
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mF6F94603E535C161BBD87AC747A1F403C274E8CD (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		String_t* L_1 = ___format0;
		RuntimeObject* L_2 = ___provider1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_3 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_2, /*hidden argument*/NULL);
		String_t* L_4 = Number_FormatUInt64_m04004F09D1913C13C59635153D0F45AF37F8248A(L_0, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* UInt64_ToString_mF6F94603E535C161BBD87AC747A1F403C274E8CD_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_ToString_mF6F94603E535C161BBD87AC747A1F403C274E8CD(_thisAdjusted, ___format0, ___provider1, method);
}
// System.UInt64 System.UInt64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_mC3A46A7D02588C4205A0C2C82B621E16A1BCDAB9 (String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = NumberFormatInfo_get_CurrentInfo_m595DF03E32E0C5B01F1EC45F7264B2BD09BA61C9(/*hidden argument*/NULL);
		uint64_t L_2 = Number_ParseUInt64_m80F0E92F3D98C3390741451845F261F93A103E27(L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_m601A733732850A76D2469F084F2F0E718EBFFD14 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_2 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_1, /*hidden argument*/NULL);
		uint64_t L_3 = Number_ParseUInt64_m80F0E92F3D98C3390741451845F261F93A103E27(L_0, 7, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_mBCA93243BACC50D7302706C914152213B8AB85A5 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___style1;
		NumberFormatInfo_ValidateParseStyleInteger_m5BD1C04C26D5589F0DFA5953294B72E1DDC2B7E3(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_4 = NumberFormatInfo_GetInstance_m713D298B436F3765F059FEA6C446F0A6ABF0A89A(L_3, /*hidden argument*/NULL);
		uint64_t L_5 = Number_ParseUInt64_m80F0E92F3D98C3390741451845F261F93A103E27(L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.TypeCode System.UInt64::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetTypeCode_m96414C98F5BEB1E6DD540B07EE96558CE9E313F4 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)12));
	}
}
IL2CPP_EXTERN_C  int32_t UInt64_GetTypeCode_m96414C98F5BEB1E6DD540B07EE96558CE9E313F4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_GetTypeCode_m96414C98F5BEB1E6DD540B07EE96558CE9E313F4(_thisAdjusted, method);
}
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_System_IConvertible_ToBoolean_mCDB7FA8F90588F8FDDF7F0CB26AF43651F9B3884 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToBoolean_mCDB7FA8F90588F8FDDF7F0CB26AF43651F9B3884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		bool L_1 = Convert_ToBoolean_m545BC5397A9E121A21E4891E2A76A8C2B31D59D2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool UInt64_System_IConvertible_ToBoolean_mCDB7FA8F90588F8FDDF7F0CB26AF43651F9B3884_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToBoolean_mCDB7FA8F90588F8FDDF7F0CB26AF43651F9B3884(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UInt64_System_IConvertible_ToChar_mBB0EEBDF5CB12C5CE93ECD9C39124D33F221A523 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToChar_mBB0EEBDF5CB12C5CE93ECD9C39124D33F221A523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_mBFD88FBE8D41F3FEB4049B8EF556C2D996F5F531(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Il2CppChar UInt64_System_IConvertible_ToChar_mBB0EEBDF5CB12C5CE93ECD9C39124D33F221A523_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToChar_mBB0EEBDF5CB12C5CE93ECD9C39124D33F221A523(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t UInt64_System_IConvertible_ToSByte_m6309BC2235A2F03BAE4107E9CCDF53604B9E7BB7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSByte_m6309BC2235A2F03BAE4107E9CCDF53604B9E7BB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m5F3E822A40FB8BC9DCE9D39C07D0BFDB5CAE38C3(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int8_t UInt64_System_IConvertible_ToSByte_m6309BC2235A2F03BAE4107E9CCDF53604B9E7BB7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToSByte_m6309BC2235A2F03BAE4107E9CCDF53604B9E7BB7(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UInt64_System_IConvertible_ToByte_m4F0E7D7E850AA40CE8FEE68B44B5FF29409CCB27 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToByte_m4F0E7D7E850AA40CE8FEE68B44B5FF29409CCB27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_mBA74300A0EBF60E75A3ABED4AA4AAB62DF40014A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint8_t UInt64_System_IConvertible_ToByte_m4F0E7D7E850AA40CE8FEE68B44B5FF29409CCB27_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToByte_m4F0E7D7E850AA40CE8FEE68B44B5FF29409CCB27(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t UInt64_System_IConvertible_ToInt16_m6D785A19C7E04176E1B60131C70A965ABB427E20 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt16_m6D785A19C7E04176E1B60131C70A965ABB427E20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_mC121EAEA7C8458D987480F1669C6A40082AA93C1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int16_t UInt64_System_IConvertible_ToInt16_m6D785A19C7E04176E1B60131C70A965ABB427E20_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToInt16_m6D785A19C7E04176E1B60131C70A965ABB427E20(_thisAdjusted, ___provider0, method);
}
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UInt64_System_IConvertible_ToUInt16_m6B443639CDAEEDBE636A47EF6D07B045B51C2A51 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt16_m6B443639CDAEEDBE636A47EF6D07B045B51C2A51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_mC540754A3F101A7A13FB26FD89836025507E7E80(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint16_t UInt64_System_IConvertible_ToUInt16_m6B443639CDAEEDBE636A47EF6D07B045B51C2A51_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToUInt16_m6B443639CDAEEDBE636A47EF6D07B045B51C2A51(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_System_IConvertible_ToInt32_mBF342D7305B0F4643B8B2FB2EAC54F6B5C943746 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt32_mBF342D7305B0F4643B8B2FB2EAC54F6B5C943746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m4E8E4BA500C8372D58B20E706C76C8126F7F5260(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UInt64_System_IConvertible_ToInt32_mBF342D7305B0F4643B8B2FB2EAC54F6B5C943746_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToInt32_mBF342D7305B0F4643B8B2FB2EAC54F6B5C943746(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt64_System_IConvertible_ToUInt32_mFF9B4ABD152C30CB4A9F09BAED4D197245141AF7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt32_mFF9B4ABD152C30CB4A9F09BAED4D197245141AF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m7DC544C6EB3CA7920C82A243D9C387B462697BAC(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t UInt64_System_IConvertible_ToUInt32_mFF9B4ABD152C30CB4A9F09BAED4D197245141AF7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToUInt32_mFF9B4ABD152C30CB4A9F09BAED4D197245141AF7(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UInt64_System_IConvertible_ToInt64_mFA654AF22149F693965B34C380C2FF61764D7BD4 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt64_mFA654AF22149F693965B34C380C2FF61764D7BD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m396C2B4FA8F12D0C76E0AA3A31872D93BF5EA11D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t UInt64_System_IConvertible_ToInt64_mFA654AF22149F693965B34C380C2FF61764D7BD4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToInt64_mFA654AF22149F693965B34C380C2FF61764D7BD4(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_System_IConvertible_ToUInt64_m2D81AD0924E713479AACA50B8C236935A2315BB4 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = *((int64_t*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t UInt64_System_IConvertible_ToUInt64_m2D81AD0924E713479AACA50B8C236935A2315BB4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToUInt64_m2D81AD0924E713479AACA50B8C236935A2315BB4(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UInt64_System_IConvertible_ToSingle_m04A4372F398081E930044EEECC7B73B4686EE8F0 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSingle_m04A4372F398081E930044EEECC7B73B4686EE8F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_mEB588F7F980A4BF31BDBACC733574C97A32E357A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float UInt64_System_IConvertible_ToSingle_m04A4372F398081E930044EEECC7B73B4686EE8F0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToSingle_m04A4372F398081E930044EEECC7B73B4686EE8F0(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UInt64_System_IConvertible_ToDouble_mE29DD1148D7D94855DCB7CE8B4FC4B9424A00A82 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDouble_mE29DD1148D7D94855DCB7CE8B4FC4B9424A00A82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m18E2BC69DA3D88A0C5CD258FFBF1DB5BA097C316(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  double UInt64_System_IConvertible_ToDouble_mE29DD1148D7D94855DCB7CE8B4FC4B9424A00A82_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToDouble_mE29DD1148D7D94855DCB7CE8B4FC4B9424A00A82(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt64_System_IConvertible_ToDecimal_mFE274863205856F4B130AD096D6BC7E40AA65FC7 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDecimal_mFE274863205856F4B130AD096D6BC7E40AA65FC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = Convert_ToDecimal_mC4A6FC31B0F2C506D113380567B082CCB6A4FEED(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UInt64_System_IConvertible_ToDecimal_mFE274863205856F4B130AD096D6BC7E40AA65FC7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToDecimal_mFE274863205856F4B130AD096D6BC7E40AA65FC7(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt64_System_IConvertible_ToDateTime_m1DE2B7B00676B061B66F18FCCC7CBC5D848B0EBA (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDateTime_m1DE2B7B00676B061B66F18FCCC7CBC5D848B0EBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral69A99906F5A06EA1BDBFC02E6132D35DE781D3F1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral69A99906F5A06EA1BDBFC02E6132D35DE781D3F1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralF1E5BAF5ECC3589631088C40CBDD43061976ED8F);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralF1E5BAF5ECC3589631088C40CBDD43061976ED8F);
		String_t* L_3 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteralE5559C91F3F57F398B8B547CA356C67FFA1F6497, L_2, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, UInt64_System_IConvertible_ToDateTime_m1DE2B7B00676B061B66F18FCCC7CBC5D848B0EBA_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UInt64_System_IConvertible_ToDateTime_m1DE2B7B00676B061B66F18FCCC7CBC5D848B0EBA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToDateTime_m1DE2B7B00676B061B66F18FCCC7CBC5D848B0EBA(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UInt64_System_IConvertible_ToType_m176FFA8FD3BDEAB82C5BD41CF3CF81C83AC21803 (uint64_t* __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToType_m176FFA8FD3BDEAB82C5BD41CF3CF81C83AC21803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = *((int64_t*)__this);
		uint64_t L_1 = ((uint64_t)L_0);
		RuntimeObject * L_2 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_1);
		Type_t * L_3 = ___type0;
		RuntimeObject* L_4 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = Convert_DefaultToType_m899D5F6B9FE3E8B878BC56172C6BFE788B6C1BE3((RuntimeObject*)L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * UInt64_System_IConvertible_ToType_m176FFA8FD3BDEAB82C5BD41CF3CF81C83AC21803_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + _offset);
	return UInt64_System_IConvertible_ToType_m176FFA8FD3BDEAB82C5BD41CF3CF81C83AC21803(_thisAdjusted, ___type0, ___provider1, method);
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
// System.Void System.UIntPtr::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2 (uintptr_t* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) > ((uint64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		int32_t L_1 = UIntPtr_get_Size_m063860D6F716C79EE77F379C6B20436413389E0B(/*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)8)))
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m41F0CB4E76BAAB1E97D9D92D109C846A8ECC1324(_stringLiteralAB431AD8173852C4469962DCA9E7535486570D54, /*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_3 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_mE1A042FFEBF00B79612E8595B8D49785B357D731(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2_RuntimeMethod_var);
	}

IL_001d:
	{
		uint64_t L_4 = ___value0;
		*__this = ((((uintptr_t)L_4)));
		return;
	}
}
IL2CPP_EXTERN_C  void UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + _offset);
	UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2(_thisAdjusted, ___value0, method);
}
// System.Void System.UIntPtr::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m7DB6B4A7AE8195A45E5FB3FEBD2ECB4609D8C084 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		*__this = ((((uintptr_t)L_0)));
		return;
	}
}
IL2CPP_EXTERN_C  void UIntPtr__ctor_m7DB6B4A7AE8195A45E5FB3FEBD2ECB4609D8C084_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + _offset);
	UIntPtr__ctor_m7DB6B4A7AE8195A45E5FB3FEBD2ECB4609D8C084(_thisAdjusted, ___value0, method);
}
// System.Void System.UIntPtr::.ctor(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_mE1AF12EBFF887C9EAE36A1A90EF530B67FA3B75D (uintptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((uintptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void UIntPtr__ctor_mE1AF12EBFF887C9EAE36A1A90EF530B67FA3B75D_AdjustorThunk (RuntimeObject * __this, void* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + _offset);
	UIntPtr__ctor_mE1AF12EBFF887C9EAE36A1A90EF530B67FA3B75D_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UIntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m8C135DEDA578597066AB67C1DD5A5A34E4F860EB (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_Equals_m8C135DEDA578597066AB67C1DD5A5A34E4F860EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UIntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(uintptr_t*)((uintptr_t*)UnBox(L_1, UIntPtr_t_il2cpp_TypeInfo_var))));
		uintptr_t L_2 = *__this;
		uintptr_t L_3 = V_0;
		return (bool)((((intptr_t)L_2) == ((intptr_t)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool UIntPtr_Equals_m8C135DEDA578597066AB67C1DD5A5A34E4F860EB_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + _offset);
	return UIntPtr_Equals_m8C135DEDA578597066AB67C1DD5A5A34E4F860EB(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UIntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIntPtr_GetHashCode_m713296172AF735B0CB68B60859FC8EE5B4840D5C (uintptr_t* __this, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = *__this;
		return (((int32_t)((int32_t)L_0)));
	}
}
IL2CPP_EXTERN_C  int32_t UIntPtr_GetHashCode_m713296172AF735B0CB68B60859FC8EE5B4840D5C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + _offset);
	return UIntPtr_GetHashCode_m713296172AF735B0CB68B60859FC8EE5B4840D5C(_thisAdjusted, method);
}
// System.String System.UIntPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIntPtr_ToString_m1512332A1A79F9DA551731E9CA7F071A3C88043D (uintptr_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_ToString_m1512332A1A79F9DA551731E9CA7F071A3C88043D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		int32_t L_0 = UIntPtr_get_Size_m063860D6F716C79EE77F379C6B20436413389E0B(/*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		uintptr_t L_1 = *__this;
		V_0 = (((int64_t)((uint64_t)L_1)));
		String_t* L_2 = UInt64_ToString_mF0E40B7459C207B89A1C8C04CE7F183AC0E6D672((uint64_t*)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}

IL_0018:
	{
		uintptr_t L_3 = *__this;
		V_1 = (((int32_t)((uint32_t)L_3)));
		String_t* L_4 = UInt32_ToString_m7D8A934AF1D74C5C8194D1556AA71BBA0D4600F2((uint32_t*)(&V_1), /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* UIntPtr_ToString_m1512332A1A79F9DA551731E9CA7F071A3C88043D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + _offset);
	return UIntPtr_ToString_m1512332A1A79F9DA551731E9CA7F071A3C88043D(_thisAdjusted, method);
}
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_mB6B1C508A6E9BFD526F23A38634C1E703595B733 (uintptr_t* __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_mB6B1C508A6E9BFD526F23A38634C1E703595B733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_mB6B1C508A6E9BFD526F23A38634C1E703595B733_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_2 = ___info0;
		uintptr_t L_3 = *__this;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9861690C28AB414534D1A7F599E050DBA7A99303(L_2, _stringLiteralB35BB38DF9605E4C5858316B7853A16E42EA6997, (((int64_t)((uint64_t)L_3))), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_mB6B1C508A6E9BFD526F23A38634C1E703595B733_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + _offset);
	UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_mB6B1C508A6E9BFD526F23A38634C1E703595B733(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_op_Equality_m69F127E2A7A8BA5676D14FB08B52F6A6E83794B1 (uintptr_t ___value10, uintptr_t ___value21, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = ___value10;
		uintptr_t L_1 = ___value21;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// System.UInt64 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_op_Explicit_m0F6E9EC046D4A796A257B9C2192A21051DC90075 (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = ___value0;
		return (((int64_t)((uint64_t)L_0)));
	}
}
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m4B82B054E21FC20C82574A92DC4CC82954DDFD03 (uintptr_t ___value0, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = ___value0;
		return (((int32_t)((uint32_t)L_0)));
	}
}
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_m2407113DA21D21EABD35525DB0106B20734929E0 (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		uintptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		UIntPtr__ctor_m73E1422110234CF2323CBDC17B665871C84FACD2((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UIntPtr System.UIntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_m484C2BD47D35FBD254A95FD56CCABD27CC79C95F (void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		uintptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		UIntPtr__ctor_mE1AF12EBFF887C9EAE36A1A90EF530B67FA3B75D_inline((&L_1), (void*)(void*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.UIntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIntPtr_get_Size_m063860D6F716C79EE77F379C6B20436413389E0B (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(void*);
		return L_0;
	}
}
// System.Void System.UIntPtr::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__cctor_m4D964FAB1256A389E1DA1838C169AB4B559D28B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr__cctor_m4D964FAB1256A389E1DA1838C169AB4B559D28B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		UIntPtr__ctor_m7DB6B4A7AE8195A45E5FB3FEBD2ECB4609D8C084((&L_0), 0, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: System.UnSafeCharBuffer
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke(const UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C& unmarshaled, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshaled_pinvoke& marshaled)
{
	marshaled.___m_buffer_0 = unmarshaled.get_m_buffer_0();
	marshaled.___m_totalSize_1 = unmarshaled.get_m_totalSize_1();
	marshaled.___m_length_2 = unmarshaled.get_m_length_2();
}
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back(const UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshaled_pinvoke& marshaled, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C& unmarshaled)
{
	unmarshaled.set_m_buffer_0(marshaled.___m_buffer_0);
	int32_t unmarshaled_m_totalSize_temp_1 = 0;
	unmarshaled_m_totalSize_temp_1 = marshaled.___m_totalSize_1;
	unmarshaled.set_m_totalSize_1(unmarshaled_m_totalSize_temp_1);
	int32_t unmarshaled_m_length_temp_2 = 0;
	unmarshaled_m_length_temp_2 = marshaled.___m_length_2;
	unmarshaled.set_m_length_2(unmarshaled_m_length_temp_2);
}
// Conversion method for clean up from marshalling of: System.UnSafeCharBuffer
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup(UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.UnSafeCharBuffer
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_com(const UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C& unmarshaled, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshaled_com& marshaled)
{
	marshaled.___m_buffer_0 = unmarshaled.get_m_buffer_0();
	marshaled.___m_totalSize_1 = unmarshaled.get_m_totalSize_1();
	marshaled.___m_length_2 = unmarshaled.get_m_length_2();
}
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_com_back(const UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshaled_com& marshaled, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C& unmarshaled)
{
	unmarshaled.set_m_buffer_0(marshaled.___m_buffer_0);
	int32_t unmarshaled_m_totalSize_temp_1 = 0;
	unmarshaled_m_totalSize_temp_1 = marshaled.___m_totalSize_1;
	unmarshaled.set_m_totalSize_1(unmarshaled_m_totalSize_temp_1);
	int32_t unmarshaled_m_length_temp_2 = 0;
	unmarshaled_m_length_temp_2 = marshaled.___m_length_2;
	unmarshaled.set_m_length_2(unmarshaled_m_length_temp_2);
}
// Conversion method for clean up from marshalling of: System.UnSafeCharBuffer
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_com_cleanup(UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshaled_com& marshaled)
{
}
// System.Void System.UnSafeCharBuffer::.ctor(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSafeCharBuffer__ctor_mF7AA675CC9B4BF79D4A8FD4EB7146CFFECEEB14D (UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	{
		Il2CppChar* L_0 = ___buffer0;
		__this->set_m_buffer_0((Il2CppChar*)L_0);
		int32_t L_1 = ___bufferSize1;
		__this->set_m_totalSize_1(L_1);
		__this->set_m_length_2(0);
		return;
	}
}
IL2CPP_EXTERN_C  void UnSafeCharBuffer__ctor_mF7AA675CC9B4BF79D4A8FD4EB7146CFFECEEB14D_AdjustorThunk (RuntimeObject * __this, Il2CppChar* ___buffer0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C * _thisAdjusted = reinterpret_cast<UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C *>(__this + _offset);
	UnSafeCharBuffer__ctor_mF7AA675CC9B4BF79D4A8FD4EB7146CFFECEEB14D(_thisAdjusted, ___buffer0, ___bufferSize1, method);
}
// System.Void System.UnSafeCharBuffer::AppendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSafeCharBuffer_AppendString_m1E2967E285FC06FDE141B90EF186745D5D2814FE (UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C * __this, String_t* ___stringToAppend0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnSafeCharBuffer_AppendString_m1E2967E285FC06FDE141B90EF186745D5D2814FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___stringToAppend0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_2 = __this->get_m_totalSize_1();
		int32_t L_3 = __this->get_m_length_2();
		String_t* L_4 = ___stringToAppend0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3))) >= ((int32_t)L_5)))
		{
			goto IL_0024;
		}
	}
	{
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_6 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, UnSafeCharBuffer_AppendString_m1E2967E285FC06FDE141B90EF186745D5D2814FE_RuntimeMethod_var);
	}

IL_0024:
	{
		String_t* L_7 = ___stringToAppend0;
		V_1 = L_7;
		String_t* L_8 = V_1;
		V_0 = (Il2CppChar*)(((uintptr_t)L_8));
		Il2CppChar* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		Il2CppChar* L_10 = V_0;
		int32_t L_11 = RuntimeHelpers_get_OffsetToStringData_mF3B79A906181F1A2734590DA161E2AF183853F8B(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)L_11));
	}

IL_0034:
	{
		Il2CppChar* L_12 = __this->get_m_buffer_0();
		int32_t L_13 = __this->get_m_length_2();
		Il2CppChar* L_14 = V_0;
		String_t* L_15 = ___stringToAppend0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_15, /*hidden argument*/NULL);
		Buffer_Memcpy_m4D475106A101E5ED38EB22776EAAFB6D02F63678((uint8_t*)(uint8_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)(((intptr_t)L_13)), (int32_t)2)))), (uint8_t*)(uint8_t*)L_14, ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)), /*hidden argument*/NULL);
		V_1 = (String_t*)NULL;
		int32_t L_17 = __this->get_m_length_2();
		String_t* L_18 = ___stringToAppend0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_18, /*hidden argument*/NULL);
		__this->set_m_length_2(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_19)));
		return;
	}
}
IL2CPP_EXTERN_C  void UnSafeCharBuffer_AppendString_m1E2967E285FC06FDE141B90EF186745D5D2814FE_AdjustorThunk (RuntimeObject * __this, String_t* ___stringToAppend0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C * _thisAdjusted = reinterpret_cast<UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C *>(__this + _offset);
	UnSafeCharBuffer_AppendString_m1E2967E285FC06FDE141B90EF186745D5D2814FE(_thisAdjusted, ___stringToAppend0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnauthorizedAccessException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mE67AE27F79595BF7594E2D76D24336E64293693E (UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnauthorizedAccessException__ctor_mE67AE27F79595BF7594E2D76D24336E64293693E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral3F90E4D12E77695269D01EC8AAEF48EEF6C79412, /*hidden argument*/NULL);
		SystemException__ctor_mF67B7FA639B457BDFB2103D7C21C8059E806175A(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(__this, ((int32_t)-2147024891), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mFE97E700E2ADBC5A46A6A43642CFA2FCB8C0BA85 (UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_mF67B7FA639B457BDFB2103D7C21C8059E806175A(__this, L_0, /*hidden argument*/NULL);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(__this, ((int32_t)-2147024891), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m277E2189AEF94D3192D482ECEC9E8077ED45CD04 (UnauthorizedAccessException_tC2210A745BFDD3AE3559A87A4219E2945EEC9F75 * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_1 = ___context1;
		SystemException__ctor_mB0550111A1A8D18B697B618F811A5B20C160D949(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventArgs__ctor_m126C64897FC12C485717061C6903DBC02E10A9A0 (UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * __this, RuntimeObject * ___exception0, bool ___isTerminating1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionEventArgs__ctor_m126C64897FC12C485717061C6903DBC02E10A9A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___exception0;
		__this->set__Exception_1(L_0);
		bool L_1 = ___isTerminating1;
		__this->set__IsTerminating_2(L_1);
		return;
	}
}
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_m1936F64BC46B54AA159A4B366BED7AF11DEED0C3 (UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__Exception_1();
		return L_0;
	}
}
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnhandledExceptionEventArgs_get_IsTerminating_m2145F65E573887AEEABC2730BEFF314557152F63 (UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__IsTerminating_2();
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
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m6C9D92AF9901334C444EE7E83FE859D7E4833ABB (UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_Invoke_mC938E535CF92DEF9D290D03129DA15ACD49F251B (UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventHandler_BeginInvoke_m685D3D37FBE53A62A290C06A727BA6E2559F1B54 (UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t39DD47D43B0D764FE2C9847FBE760031FBEA0FD1 * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler_EndInvoke_m88B666E7047BF8B4CAA5979831CB7C2AB7B87A14 (UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Reflection.Missing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetUnitySerializationInfo_m73DC8BA292A8CD7C89FC189779D656E0A07D4D3D (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7 * ___missing1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m73DC8BA292A8CD7C89FC189779D656E0A07D4D3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m3F30AFEB3555E20E995D31713C0604E26B2CF784(L_0, L_2, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_3 = ___info0;
		NullCheck(L_3);
		SerializationInfo_AddValue_m7C73917D9DC4B8FE4AFEF4BA8EBEDAB046A8D0BD(L_3, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.RuntimeType System.UnitySerializationHolder::AddElementTypes(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * UnitySerializationHolder_AddElementTypes_m0C8810EE3D2A09BD766FC74C37086846A0268D45 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_AddElementTypes_m0C8810EE3D2A09BD766FC74C37086846A0268D45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * V_0 = NULL;
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0063;
	}

IL_0008:
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_1 = ___type1;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(75 /* System.Boolean System.Type::get_IsSzArray() */, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_3 = V_0;
		NullCheck(L_3);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_3, 3, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0019:
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_4 = ___type1;
		NullCheck(L_4);
		bool L_5 = Type_get_IsArray_m0B4E20F93B1B34C0B5C4B089F543D1AA338DC9FE(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_6 = V_0;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_7 = ___type1;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.Type::GetArrayRank() */, L_7);
		NullCheck(L_6);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_6, L_8, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_9 = V_0;
		NullCheck(L_9);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_9, 2, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0036:
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_10 = ___type1;
		NullCheck(L_10);
		bool L_11 = Type_get_IsPointer_mF823CB662C6A04674589640771E6AD6B71093E57(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_12 = V_0;
		NullCheck(L_12);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_12, 1, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		goto IL_0056;
	}

IL_0047:
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_13 = ___type1;
		NullCheck(L_13);
		bool L_14 = Type_get_IsByRef_m13C04A998C9B19058B596A81D188B368333D24F8(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_15 = V_0;
		NullCheck(L_15);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_15, 4, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_0056:
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_16 = ___type1;
		NullCheck(L_16);
		Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(99 /* System.Type System.Type::GetElementType() */, L_16);
		___type1 = ((RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F *)CastclassClass((RuntimeObject*)L_17, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var));
	}

IL_0063:
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_18 = ___type1;
		NullCheck(L_18);
		bool L_19 = Type_get_HasElementType_m598BEFE66F168CE1D1132C87D394B2EF41F449BF(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0008;
		}
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_20 = ___info0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_21 = V_0;
		NullCheck(L_21);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98(L_21, /*hidden argument*/List_1_ToArray_mFEF088E03E18EF79C06317909C301876B3037D98_RuntimeMethod_var);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_23 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_20, _stringLiteralD98E4C3E01D3ED0C6FD51F3FF6F8A3C9CA9223C3, (RuntimeObject *)(RuntimeObject *)L_22, L_24, /*hidden argument*/NULL);
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_25 = ___type1;
		return L_25;
	}
}
// System.Type System.UnitySerializationHolder::MakeElementTypes(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * UnitySerializationHolder_MakeElementTypes_m53847C6D77B4D1F96596279EBF443F521CAD7B24 (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_m_elementTypes_1();
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1));
		goto IL_006f;
	}

IL_000d:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = __this->get_m_elementTypes_1();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Type::MakeArrayType() */, L_5);
		___type0 = L_6;
		goto IL_006b;
	}

IL_0022:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = __this->get_m_elementTypes_1();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_11 = ___type0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = __this->get_m_elementTypes_1();
		int32_t L_13 = V_0;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_0 = L_14;
		NullCheck(L_12);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		Type_t * L_17 = VirtFuncInvoker1< Type_t *, int32_t >::Invoke(20 /* System.Type System.Type::MakeArrayType(System.Int32) */, L_11, L_16);
		___type0 = L_17;
		goto IL_006b;
	}

IL_0043:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_18 = __this->get_m_elementTypes_1();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_22 = ___type0;
		NullCheck(L_22);
		Type_t * L_23 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::MakePointerType() */, L_22);
		___type0 = L_23;
		goto IL_006b;
	}

IL_0058:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_24 = __this->get_m_elementTypes_1();
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_006b;
		}
	}
	{
		Type_t * L_28 = ___type0;
		NullCheck(L_28);
		Type_t * L_29 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::MakeByRefType() */, L_28);
		___type0 = L_29;
	}

IL_006b:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		Type_t * L_32 = ___type0;
		return L_32;
	}
}
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetUnitySerializationInfo_m45D2EDC32022880C84BBE25124F5EDCA12B57ED2 (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m45D2EDC32022880C84BBE25124F5EDCA12B57ED2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_0 = ___type1;
		NullCheck(L_0);
		Type_t * L_1 = Type_GetRootElementType_mE4F0579E18FAAEEB2DB86F1315BFBEC1A9A2FD56(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericParameter() */, L_1);
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_3 = ___info0;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_4 = ___type1;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_5 = UnitySerializationHolder_AddElementTypes_m0C8810EE3D2A09BD766FC74C37086846A0268D45(L_3, L_4, /*hidden argument*/NULL);
		___type1 = L_5;
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_6 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		SerializationInfo_SetType_m3F30AFEB3555E20E995D31713C0604E26B2CF784(L_6, L_8, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m7C73917D9DC4B8FE4AFEF4BA8EBEDAB046A8D0BD(L_9, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, 7, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_10 = ___info0;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_11 = ___type1;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(79 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_11);
		NullCheck(L_10);
		SerializationInfo_AddValue_m7C73917D9DC4B8FE4AFEF4BA8EBEDAB046A8D0BD(L_10, _stringLiteral089B0BA8B1E0758ECEBCD291E88238CE548D665D, L_12, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_13 = ___info0;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_14 = ___type1;
		NullCheck(L_14);
		MethodBase_t * L_15 = VirtFuncInvoker0< MethodBase_t * >::Invoke(16 /* System.Reflection.MethodBase System.Type::get_DeclaringMethod() */, L_14);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (MethodBase_t_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_13, _stringLiteral163313709722AD7AEFE1D71EECEA06F9FCDFEC2D, L_15, L_17, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_18 = ___info0;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_19 = ___type1;
		NullCheck(L_19);
		Type_t * L_20 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_19);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_21 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_22 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_18, _stringLiteral8110CD10A3C3177EDC45160F406A8FFD951DFD52, L_20, L_22, /*hidden argument*/NULL);
		return;
	}

IL_007a:
	{
		V_0 = 4;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_23 = ___type1;
		NullCheck(L_23);
		bool L_24 = VirtFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_23);
		if (L_24)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_25 = ___type1;
		NullCheck(L_25);
		bool L_26 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_25);
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		V_0 = 8;
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_27 = ___info0;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_28 = ___type1;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_29 = UnitySerializationHolder_AddElementTypes_m0C8810EE3D2A09BD766FC74C37086846A0268D45(L_27, L_28, /*hidden argument*/NULL);
		___type1 = L_29;
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_30 = ___info0;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_31 = ___type1;
		NullCheck(L_31);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_32 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(100 /* System.Type[] System.Type::GetGenericArguments() */, L_31);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_33 = { reinterpret_cast<intptr_t> (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_30, _stringLiteralF221811315A6A4EB975642C56E41ECFB1B78BF7A, (RuntimeObject *)(RuntimeObject *)L_32, L_34, /*hidden argument*/NULL);
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_35 = ___type1;
		NullCheck(L_35);
		Type_t * L_36 = VirtFuncInvoker0< Type_t * >::Invoke(101 /* System.Type System.Type::GetGenericTypeDefinition() */, L_35);
		___type1 = ((RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F *)CastclassClass((RuntimeObject*)L_36, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var));
	}

IL_00bf:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_37 = ___info0;
		int32_t L_38 = V_0;
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_39 = ___type1;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_39);
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_41 = ___type1;
		NullCheck(L_41);
		RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * L_42 = RuntimeType_GetRuntimeAssembly_m34E13B557A24CE6438916C08EC329EFD16AEBAE4(L_41, /*hidden argument*/NULL);
		UnitySerializationHolder_GetUnitySerializationInfo_m86F654140996546DB4D6D8228BF9FE45E9BAEC3E(L_37, L_38, L_40, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo,System.Int32,System.String,System.Reflection.RuntimeAssembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetUnitySerializationInfo_m86F654140996546DB4D6D8228BF9FE45E9BAEC3E (SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, int32_t ___unityType1, String_t* ___data2, RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * ___assembly3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetUnitySerializationInfo_m86F654140996546DB4D6D8228BF9FE45E9BAEC3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m3F30AFEB3555E20E995D31713C0604E26B2CF784(L_0, L_2, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_3 = ___info0;
		String_t* L_4 = ___data2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		SerializationInfo_AddValue_mE0A104C01EFA55A83D4CAE4662A9B4C6459911FC(L_3, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, L_4, L_6, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_7 = ___info0;
		int32_t L_8 = ___unityType1;
		NullCheck(L_7);
		SerializationInfo_AddValue_m7C73917D9DC4B8FE4AFEF4BA8EBEDAB046A8D0BD(L_7, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, L_8, /*hidden argument*/NULL);
		RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * L_9 = ___assembly3;
		bool L_10 = Assembly_op_Equality_m4B6A318CE4104781ABF30A2BBBCCCFB0FE342316(L_9, (Assembly_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_11;
		goto IL_004a;
	}

IL_0043:
	{
		RuntimeAssembly_t5EE9CD749D82345AE5635B9665665C31A3308EB1 * L_12 = ___assembly3;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_12);
		V_0 = L_13;
	}

IL_004a:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_14 = ___info0;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		SerializationInfo_AddValue_mC9D1E16476E24E1AFE7C59368D3BC0B35F64FBC6(L_14, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySerializationHolder__ctor_m2DBB21E6B4107323DB20C23AD6D9290F50BF2B1E (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder__ctor_m2DBB21E6B4107323DB20C23AD6D9290F50BF2B1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, UnitySerializationHolder__ctor_m2DBB21E6B4107323DB20C23AD6D9290F50BF2B1E_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_mB47BD46A0BDBBAF5B47BB62E6EFF8E092E3F3656(L_2, _stringLiteralD3B81375F999BE146F923A83BD6CBA9441E1F676, /*hidden argument*/NULL);
		__this->set_m_unityType_7(L_3);
		int32_t L_4 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		int32_t L_5 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)7))))
		{
			goto IL_00aa;
		}
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_6 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (MethodBase_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_m7910CE6C68888C1F863D7A35915391FA33463ECF(L_6, _stringLiteral163313709722AD7AEFE1D71EECEA06F9FCDFEC2D, L_8, /*hidden argument*/NULL);
		__this->set_m_declaringMethod_4(((MethodBase_t *)IsInstClass((RuntimeObject*)L_9, MethodBase_t_il2cpp_TypeInfo_var)));
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_10 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_m7910CE6C68888C1F863D7A35915391FA33463ECF(L_10, _stringLiteral8110CD10A3C3177EDC45160F406A8FFD951DFD52, L_12, /*hidden argument*/NULL);
		__this->set_m_declaringType_3(((Type_t *)IsInstClass((RuntimeObject*)L_13, Type_t_il2cpp_TypeInfo_var)));
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_14 = ___info0;
		NullCheck(L_14);
		int32_t L_15 = SerializationInfo_GetInt32_mB47BD46A0BDBBAF5B47BB62E6EFF8E092E3F3656(L_14, _stringLiteral089B0BA8B1E0758ECEBCD291E88238CE548D665D, /*hidden argument*/NULL);
		__this->set_m_genericParameterPosition_2(L_15);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_16 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_0_0_0_var) };
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		RuntimeObject * L_19 = SerializationInfo_GetValue_m7910CE6C68888C1F863D7A35915391FA33463ECF(L_16, _stringLiteralD98E4C3E01D3ED0C6FD51F3FF6F8A3C9CA9223C3, L_18, /*hidden argument*/NULL);
		__this->set_m_elementTypes_1(((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)IsInst((RuntimeObject*)L_19, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var)));
		return;
	}

IL_00aa:
	{
		int32_t L_20 = __this->get_m_unityType_7();
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_00f3;
		}
	}
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_21 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_22 = { reinterpret_cast<intptr_t> (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		RuntimeObject * L_24 = SerializationInfo_GetValue_m7910CE6C68888C1F863D7A35915391FA33463ECF(L_21, _stringLiteralF221811315A6A4EB975642C56E41ECFB1B78BF7A, L_23, /*hidden argument*/NULL);
		__this->set_m_instantiation_0(((TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)IsInst((RuntimeObject*)L_24, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var)));
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_25 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_26 = { reinterpret_cast<intptr_t> (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_0_0_0_var) };
		Type_t * L_27 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		RuntimeObject * L_28 = SerializationInfo_GetValue_m7910CE6C68888C1F863D7A35915391FA33463ECF(L_25, _stringLiteralD98E4C3E01D3ED0C6FD51F3FF6F8A3C9CA9223C3, L_27, /*hidden argument*/NULL);
		__this->set_m_elementTypes_1(((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)IsInst((RuntimeObject*)L_28, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var)));
	}

IL_00f3:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_29 = ___info0;
		NullCheck(L_29);
		String_t* L_30 = SerializationInfo_GetString_m06805A4E368E0B98D5FA70A9333B277CBDD84CF4(L_29, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, /*hidden argument*/NULL);
		__this->set_m_data_5(L_30);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_31 = ___info0;
		NullCheck(L_31);
		String_t* L_32 = SerializationInfo_GetString_m06805A4E368E0B98D5FA70A9333B277CBDD84CF4(L_31, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, /*hidden argument*/NULL);
		__this->set_m_assemblyName_6(L_32);
		return;
	}
}
// System.Void System.UnitySerializationHolder::ThrowInsufficientInformation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC * __this, String_t* ___field0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ___field0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		String_t* L_3 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteral9B7256A537E36FBE0EFCE164ED58060E7D8F006C, L_1, /*hidden argument*/NULL);
		SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210 * L_4 = (SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210 *)il2cpp_codegen_object_new(SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_il2cpp_TypeInfo_var);
		SerializationException__ctor_m88AAD9671030A8A96AA87CB95701938FBD8F16E1(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE_RuntimeMethod_var);
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySerializationHolder_GetObjectData_m7562EAA093BA2732DED6A3D94E676EEAAC1D8310 (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetObjectData_m7562EAA093BA2732DED6A3D94E676EEAAC1D8310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral04C3F2AE89DF36B5CF6D0051651235DA171DFEE7, /*hidden argument*/NULL);
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, UnitySerializationHolder_GetObjectData_m7562EAA093BA2732DED6A3D94E676EEAAC1D8310_RuntimeMethod_var);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnitySerializationHolder_GetRealObject_mB8BD0D19FE747C6B7F739F9686AA52CBA9E6FA9E (UnitySerializationHolder_t6B17ABB985ACD3F8D9F9E3C146DEA5F730E1CEAC * __this, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetRealObject_mB8BD0D19FE747C6B7F739F9686AA52CBA9E6FA9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_m_unityType_7();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0040;
			}
			case 3:
			{
				goto IL_00e7;
			}
			case 4:
			{
				goto IL_014e;
			}
			case 5:
			{
				goto IL_01cb;
			}
			case 6:
			{
				goto IL_0086;
			}
			case 7:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_020a;
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2_il2cpp_TypeInfo_var);
		Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2 * L_2 = ((Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2_StaticFields*)il2cpp_codegen_static_fields_for(Empty_t31C7ECDF7D102AFFCE029D8AB11D8595F0316ED2_il2cpp_TypeInfo_var))->get_Value_0();
		return L_2;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_3 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		return L_3;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7_il2cpp_TypeInfo_var);
		Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7 * L_4 = ((Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7_StaticFields*)il2cpp_codegen_static_fields_for(Missing_t81434A5DBDCCA844BD22E1659DDE1EE7DE8B4ED7_il2cpp_TypeInfo_var))->get_Value_0();
		return L_4;
	}

IL_0046:
	{
		__this->set_m_unityType_7(4);
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_5 = ___context0;
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  >::Invoke(7 /* System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext) */, __this, L_5);
		V_1 = ((Type_t *)IsInstClass((RuntimeObject*)L_6, Type_t_il2cpp_TypeInfo_var));
		__this->set_m_unityType_7(8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_7 = __this->get_m_instantiation_0();
		NullCheck(L_7);
		int32_t L_8 = 0;
		Type_t * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		return NULL;
	}

IL_0073:
	{
		Type_t * L_11 = V_1;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = __this->get_m_instantiation_0();
		NullCheck(L_11);
		Type_t * L_13 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(96 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_11, L_12);
		Type_t * L_14 = UnitySerializationHolder_MakeElementTypes_m53847C6D77B4D1F96596279EBF443F521CAD7B24(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0086:
	{
		MethodBase_t * L_15 = __this->get_m_declaringMethod_4();
		bool L_16 = MethodBase_op_Equality_mB2519FFC5324C515ED0181B94A3FA5D6FE99D736(L_15, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00ad;
		}
	}
	{
		Type_t * L_17 = __this->get_m_declaringType_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_18 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_17, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE(__this, _stringLiteralD41884932BDB9E7E6E2E6DB3F0FFD3968A302E6B, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		MethodBase_t * L_19 = __this->get_m_declaringMethod_4();
		bool L_20 = MethodBase_op_Inequality_mA03AE708DD0D76404AED7C36A75741E2A6BC6BF7(L_19, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00ce;
		}
	}
	{
		MethodBase_t * L_21 = __this->get_m_declaringMethod_4();
		NullCheck(L_21);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_22 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(23 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_21);
		int32_t L_23 = __this->get_m_genericParameterPosition_2();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Type_t * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		return L_25;
	}

IL_00ce:
	{
		Type_t * L_26 = __this->get_m_declaringType_3();
		NullCheck(L_26);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_27 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(100 /* System.Type[] System.Type::GetGenericArguments() */, L_26);
		int32_t L_28 = __this->get_m_genericParameterPosition_2();
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Type_t * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Type_t * L_31 = UnitySerializationHolder_MakeElementTypes_m53847C6D77B4D1F96596279EBF443F521CAD7B24(__this, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00e7:
	{
		String_t* L_32 = __this->get_m_data_5();
		if (!L_32)
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_33 = __this->get_m_data_5();
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0107;
		}
	}

IL_00fc:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE(__this, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, /*hidden argument*/NULL);
	}

IL_0107:
	{
		String_t* L_35 = __this->get_m_assemblyName_6();
		if (L_35)
		{
			goto IL_011a;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE(__this, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, /*hidden argument*/NULL);
	}

IL_011a:
	{
		String_t* L_36 = __this->get_m_assemblyName_6();
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0135;
		}
	}
	{
		String_t* L_38 = __this->get_m_data_5();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m77EF3A5A858B45C53D8BF27C74FA00CA83B53E59, L_38, (bool)1, (bool)0, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089");
		return L_39;
	}

IL_0135:
	{
		String_t* L_40 = __this->get_m_assemblyName_6();
		Assembly_t * L_41 = Assembly_Load_m4640304E91781FC3D197CD014B0C2DCEAFCFFF55(L_40, /*hidden argument*/NULL);
		String_t* L_42 = __this->get_m_data_5();
		NullCheck(L_41);
		Type_t * L_43 = VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(24 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_41, L_42, (bool)1, (bool)0);
		return L_43;
	}

IL_014e:
	{
		String_t* L_44 = __this->get_m_data_5();
		if (!L_44)
		{
			goto IL_0163;
		}
	}
	{
		String_t* L_45 = __this->get_m_data_5();
		NullCheck(L_45);
		int32_t L_46 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_016e;
		}
	}

IL_0163:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE(__this, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, /*hidden argument*/NULL);
	}

IL_016e:
	{
		String_t* L_47 = __this->get_m_assemblyName_6();
		if (L_47)
		{
			goto IL_0181;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE(__this, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, /*hidden argument*/NULL);
	}

IL_0181:
	{
		String_t* L_48 = __this->get_m_assemblyName_6();
		Assembly_t * L_49 = Assembly_Load_m4640304E91781FC3D197CD014B0C2DCEAFCFFF55(L_48, /*hidden argument*/NULL);
		String_t* L_50 = __this->get_m_data_5();
		NullCheck(L_49);
		Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7 * L_51 = VirtFuncInvoker1< Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7 *, String_t* >::Invoke(25 /* System.Reflection.Module System.Reflection.Assembly::GetModule(System.String) */, L_49, L_50);
		V_2 = L_51;
		Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7 * L_52 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_il2cpp_TypeInfo_var);
		bool L_53 = Module_op_Equality_m3AEF6BCA2C1DA42DEF271D9C168AD6F5DFFA497A(L_52, (Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7 *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01c9;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_54 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_55 = L_54;
		String_t* L_56 = __this->get_m_data_5();
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_56);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = L_55;
		String_t* L_58 = __this->get_m_assemblyName_6();
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_58);
		String_t* L_59 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteral61E4C2772989AB31A7C2799E5C64D7030B05229C, L_57, /*hidden argument*/NULL);
		SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210 * L_60 = (SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210 *)il2cpp_codegen_object_new(SerializationException_tA1FDFF6779406E688C2192E71C38DBFD7A4A2210_il2cpp_TypeInfo_var);
		SerializationException__ctor_m88AAD9671030A8A96AA87CB95701938FBD8F16E1(L_60, L_59, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, UnitySerializationHolder_GetRealObject_mB8BD0D19FE747C6B7F739F9686AA52CBA9E6FA9E_RuntimeMethod_var);
	}

IL_01c9:
	{
		Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7 * L_61 = V_2;
		return L_61;
	}

IL_01cb:
	{
		String_t* L_62 = __this->get_m_data_5();
		if (!L_62)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_63 = __this->get_m_data_5();
		NullCheck(L_63);
		int32_t L_64 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_01eb;
		}
	}

IL_01e0:
	{
		UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE(__this, _stringLiteralE5E429BCC9C2E4A41A3C7A4D96203BE6CB273B11, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		String_t* L_65 = __this->get_m_assemblyName_6();
		if (L_65)
		{
			goto IL_01fe;
		}
	}
	{
		UnitySerializationHolder_ThrowInsufficientInformation_mC9EC8B972B617DB4A56CC8BAF3B814ACF0E7A7EE(__this, _stringLiteralF0541457E2B7EF76AA2DDC177C44B4FF6B95E9C5, /*hidden argument*/NULL);
	}

IL_01fe:
	{
		String_t* L_66 = __this->get_m_assemblyName_6();
		Assembly_t * L_67 = Assembly_Load_m4640304E91781FC3D197CD014B0C2DCEAFCFFF55(L_66, /*hidden argument*/NULL);
		return L_67;
	}

IL_020a:
	{
		String_t* L_68 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral24EC69BAF51BF30190B6C95CBC8DA59798F5F532, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_69 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_69, L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, UnitySerializationHolder_GetRealObject_mB8BD0D19FE747C6B7F739F9686AA52CBA9E6FA9E_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.ValueType
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke(const ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF& unmarshaled, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back(const ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke& marshaled, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup(ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ValueType
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_com(const ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF& unmarshaled, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_com_back(const ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com& marshaled, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_com_cleanup(ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com& marshaled)
{
}
// System.Void System.ValueType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueType__ctor_m091BDF02E011A41101A74AABB803417EE40CA5B7 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_InternalEquals_m09E6AB0EC85DC2C65928B946609823DBB90CF59D (RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** ___fields2, const RuntimeMethod* method)
{
	typedef bool (*ValueType_InternalEquals_m09E6AB0EC85DC2C65928B946609823DBB90CF59D_ftn) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalEquals_m09E6AB0EC85DC2C65928B946609823DBB90CF59D_ftn)mscorlib::System::ValueType::InternalEquals) (___o10, ___o21, ___fields2);
}
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_DefaultEquals_m139582CD1BAD7472B45D806F76E4E14E82E629DB (RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueType_DefaultEquals_m139582CD1BAD7472B45D806F76E4E14E82E629DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	{
		RuntimeObject * L_0 = ___o10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject * L_1 = ___o21;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		RuntimeObject * L_2 = ___o10;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject * L_3 = ___o21;
		if (L_3)
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		return (bool)0;
	}

IL_0010:
	{
		RuntimeObject * L_4 = ___o10;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_4, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___o21;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_6, /*hidden argument*/NULL);
		V_0 = ((RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F *)CastclassClass((RuntimeObject*)L_7, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var));
		RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var);
		bool L_9 = RuntimeType_op_Inequality_mA98A719712593FEE5DCCFDB47CCABDB58BEE1B0D(((RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F *)CastclassClass((RuntimeObject*)L_5, RuntimeType_t40F13BCEAD97478C72C4B40BFDC2A220161CDB8F_il2cpp_TypeInfo_var)), L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		RuntimeObject * L_10 = ___o10;
		RuntimeObject * L_11 = ___o21;
		bool L_12 = ValueType_InternalEquals_m09E6AB0EC85DC2C65928B946609823DBB90CF59D(L_10, L_11, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), /*hidden argument*/NULL);
		V_2 = L_12;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = V_1;
		if (L_13)
		{
			goto IL_0040;
		}
	}
	{
		bool L_14 = V_2;
		return L_14;
	}

IL_0040:
	{
		V_3 = 0;
		goto IL_006b;
	}

IL_0044:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = V_1;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = V_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		RuntimeObject * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		RuntimeObject * L_23 = V_4;
		if (L_23)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_24 = V_5;
		if (!L_24)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_005a:
	{
		RuntimeObject * L_25 = V_4;
		RuntimeObject * L_26 = V_5;
		NullCheck(L_25);
		bool L_27 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_25, L_26);
		if (L_27)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)2));
	}

IL_006b:
	{
		int32_t L_29 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_m5F6E6FDB8422FE9AFF6435C0C729FBE1032F4980 (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ValueType_DefaultEquals_m139582CD1BAD7472B45D806F76E4E14E82E629DB(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_InternalGetHashCode_mDB37E320BD3CA801CB06E1A4CBD088D8C7F0678A (RuntimeObject * ___o0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** ___fields1, const RuntimeMethod* method)
{
	typedef int32_t (*ValueType_InternalGetHashCode_mDB37E320BD3CA801CB06E1A4CBD088D8C7F0678A_ftn) (RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalGetHashCode_mDB37E320BD3CA801CB06E1A4CBD088D8C7F0678A_ftn)mscorlib::System::ValueType::InternalGetHashCode) (___o0, ___fields1);
}
// System.Int32 System.ValueType::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m48E9FA7FFC7C27D876E764A94E3CF2039ED6C9F9 (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ValueType_InternalGetHashCode_mDB37E320BD3CA801CB06E1A4CBD088D8C7F0678A(__this, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		V_2 = 0;
		goto IL_0024;
	}

IL_0010:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
	}

IL_0020:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
		{
			goto IL_0010;
		}
	}

IL_002a:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.String System.ValueType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueType_ToString_mDD1C1C0E1FC55404602E8E02C4E12448B31AEE4F (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_0);
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
// System.Void System.Variant::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant_Clear_m7622B0C52C7794CC4C33434D2ED8170ECDDE5DAF (Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Variant_Clear_m7622B0C52C7794CC4C33434D2ED8170ECDDE5DAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int16_t L_0 = __this->get_vt_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0015;
		}
	}
	{
		intptr_t L_1 = __this->get_bstrVal_11();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeBSTR_mB3CD149620B05C68BBC20931307564BADDE71A25((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		int16_t L_2 = __this->get_vt_0();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)9))))
		{
			goto IL_0029;
		}
	}
	{
		int16_t L_3 = __this->get_vt_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0047;
		}
	}

IL_0029:
	{
		intptr_t L_4 = __this->get_pdispVal_18();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		intptr_t L_6 = __this->get_pdispVal_18();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Release_mF0676E7B6EE181109020F407F09E1063D681B5F8((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Variant_Clear_m7622B0C52C7794CC4C33434D2ED8170ECDDE5DAF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18 * _thisAdjusted = reinterpret_cast<Variant_tBC94A369178CDE161E918F24FD18166A3DC58C18 *>(__this + _offset);
	Variant_Clear_m7622B0C52C7794CC4C33434D2ED8170ECDDE5DAF(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_5, _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80_RuntimeMethod_var);
	}

IL_0046:
	{
		int32_t L_6 = ___build2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, _stringLiteral80754AF91BFB6D1073585B046FE0A474CE868509, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80_RuntimeMethod_var);
	}

IL_005f:
	{
		int32_t L_9 = ___revision3;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_10 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_11 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_11, _stringLiteralEAE79D6E0CFF76FC7A3BB78723690B0B2367F849, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80_RuntimeMethod_var);
	}

IL_0079:
	{
		int32_t L_12 = ___major0;
		__this->set__Major_0(L_12);
		int32_t L_13 = ___minor1;
		__this->set__Minor_1(L_13);
		int32_t L_14 = ___build2;
		__this->set__Build_2(L_14);
		int32_t L_15 = ___revision3;
		__this->set__Revision_3(L_15);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_5, _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355_RuntimeMethod_var);
	}

IL_0046:
	{
		int32_t L_6 = ___build2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_7 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, _stringLiteral80754AF91BFB6D1073585B046FE0A474CE868509, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355_RuntimeMethod_var);
	}

IL_005f:
	{
		int32_t L_9 = ___major0;
		__this->set__Major_0(L_9);
		int32_t L_10 = ___minor1;
		__this->set__Minor_1(L_10);
		int32_t L_11 = ___build2;
		__this->set__Build_2(L_11);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mC2880C190E158700B0C114D4CC921C0D240DAA9C (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_mC2880C190E158700B0C114D4CC921C0D240DAA9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Version__ctor_mC2880C190E158700B0C114D4CC921C0D240DAA9C_RuntimeMethod_var);
	}

IL_002d:
	{
		int32_t L_3 = ___minor1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_5, _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Version__ctor_mC2880C190E158700B0C114D4CC921C0D240DAA9C_RuntimeMethod_var);
	}

IL_0046:
	{
		int32_t L_6 = ___major0;
		__this->set__Major_0(L_6);
		int32_t L_7 = ___minor1;
		__this->set__Minor_1(L_7);
		return;
	}
}
// System.Void System.Version::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mC1DA3D718E1D0AC5D640C5F78AB693CA40FF2889 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, String_t* ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_mC1DA3D718E1D0AC5D640C5F78AB693CA40FF2889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * V_0 = NULL;
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = Version_Parse_mAF74E042711BB851C4659BF71E09B9E79A9AC848(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = Version_get_Major_m7A6BEEF367674B8C06B15F6675AFF0C32CCEE87C_inline(L_2, /*hidden argument*/NULL);
		__this->set__Major_0(L_3);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = Version_get_Minor_mCBAFA7052D1786A47B4BA971E7193A4EB9A7D059_inline(L_4, /*hidden argument*/NULL);
		__this->set__Minor_1(L_5);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = Version_get_Build_m184E3AAE13518CEA172E9C6860E9359D567E64DB_inline(L_6, /*hidden argument*/NULL);
		__this->set__Build_2(L_7);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = Version_get_Revision_mB0BADD4E233FA3001FB7BB4795A0A330880453BB_inline(L_8, /*hidden argument*/NULL);
		__this->set__Revision_3(L_9);
		return;
	}
}
// System.Void System.Version::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m2033F9EE96782C92B9978E42BB4EAEF240950B51 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		__this->set__Build_2((-1));
		__this->set__Revision_3((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set__Major_0(0);
		__this->set__Minor_1(0);
		return;
	}
}
// System.Int32 System.Version::get_Major()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_get_Major_m7A6BEEF367674B8C06B15F6675AFF0C32CCEE87C (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_get_Minor_mCBAFA7052D1786A47B4BA971E7193A4EB9A7D059 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_1();
		return L_0;
	}
}
// System.Int32 System.Version::get_Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_get_Build_m184E3AAE13518CEA172E9C6860E9359D567E64DB (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_get_Revision_mB0BADD4E233FA3001FB7BB4795A0A330880453BB (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_3();
		return L_0;
	}
}
// System.Object System.Version::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Version_Clone_mC9305AB873E1FF41BA1B81C2988F0C113CC11035 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Clone_mC9305AB873E1FF41BA1B81C2988F0C113CC11035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_m2033F9EE96782C92B9978E42BB4EAEF240950B51(L_0, /*hidden argument*/NULL);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = L_0;
		int32_t L_2 = __this->get__Major_0();
		NullCheck(L_1);
		L_1->set__Major_0(L_2);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_3 = L_1;
		int32_t L_4 = __this->get__Minor_1();
		NullCheck(L_3);
		L_3->set__Minor_1(L_4);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_5 = L_3;
		int32_t L_6 = __this->get__Build_2();
		NullCheck(L_5);
		L_5->set__Build_2(L_6);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_7 = L_5;
		int32_t L_8 = __this->get__Revision_3();
		NullCheck(L_7);
		L_7->set__Revision_3(L_8);
		return L_7;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_CompareTo_m604CF8F6AFAB12D2F64E223B72F518528A3F85A2 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, RuntimeObject * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m604CF8F6AFAB12D2F64E223B72F518528A3F85A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___version0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___version0;
		V_0 = ((Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)IsInstSealed((RuntimeObject*)L_1, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var));
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_3 = Version_op_Equality_m9E4E82DB85F13E3C19AB5D4AF94C4F399971374D(L_2, (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral39633794BA5C406D0D71A70F2C47493DB1E986D2, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Version_CompareTo_m604CF8F6AFAB12D2F64E223B72F518528A3F85A2_RuntimeMethod_var);
	}

IL_0025:
	{
		int32_t L_6 = __this->get__Major_0();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__Major_0();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = __this->get__Major_0();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get__Major_0();
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		return (-1);
	}

IL_0045:
	{
		int32_t L_12 = __this->get__Minor_1();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get__Minor_1();
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_15 = __this->get__Minor_1();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get__Minor_1();
		if ((((int32_t)L_15) <= ((int32_t)L_17)))
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		return (-1);
	}

IL_0065:
	{
		int32_t L_18 = __this->get__Build_2();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->get__Build_2();
		if ((((int32_t)L_18) == ((int32_t)L_20)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_21 = __this->get__Build_2();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get__Build_2();
		if ((((int32_t)L_21) <= ((int32_t)L_23)))
		{
			goto IL_0083;
		}
	}
	{
		return 1;
	}

IL_0083:
	{
		return (-1);
	}

IL_0085:
	{
		int32_t L_24 = __this->get__Revision_3();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->get__Revision_3();
		if ((((int32_t)L_24) == ((int32_t)L_26)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_27 = __this->get__Revision_3();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get__Revision_3();
		if ((((int32_t)L_27) <= ((int32_t)L_29)))
		{
			goto IL_00a3;
		}
	}
	{
		return 1;
	}

IL_00a3:
	{
		return (-1);
	}

IL_00a5:
	{
		return 0;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_CompareTo_mB6A6C226C3401C8903DD32602F72FA644631C33C (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_mB6A6C226C3401C8903DD32602F72FA644631C33C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_1 = Version_op_Equality_m9E4E82DB85F13E3C19AB5D4AF94C4F399971374D(L_0, (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		int32_t L_2 = __this->get__Major_0();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_0();
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = __this->get__Major_0();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Major_0();
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		return 1;
	}

IL_0029:
	{
		return (-1);
	}

IL_002b:
	{
		int32_t L_8 = __this->get__Minor_1();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Minor_1();
		if ((((int32_t)L_8) == ((int32_t)L_10)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_11 = __this->get__Minor_1();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Minor_1();
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}

IL_0049:
	{
		return (-1);
	}

IL_004b:
	{
		int32_t L_14 = __this->get__Build_2();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__Build_2();
		if ((((int32_t)L_14) == ((int32_t)L_16)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_17 = __this->get__Build_2();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__Build_2();
		if ((((int32_t)L_17) <= ((int32_t)L_19)))
		{
			goto IL_0069;
		}
	}
	{
		return 1;
	}

IL_0069:
	{
		return (-1);
	}

IL_006b:
	{
		int32_t L_20 = __this->get__Revision_3();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__Revision_3();
		if ((((int32_t)L_20) == ((int32_t)L_22)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_23 = __this->get__Revision_3();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__Revision_3();
		if ((((int32_t)L_23) <= ((int32_t)L_25)))
		{
			goto IL_0089;
		}
	}
	{
		return 1;
	}

IL_0089:
	{
		return (-1);
	}

IL_008b:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_Equals_mD76B915CF93D19541FFE323B20D0B7992B62927B (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_mD76B915CF93D19541FFE323B20D0B7992B62927B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)IsInstSealed((RuntimeObject*)L_0, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var));
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_Equality_m9E4E82DB85F13E3C19AB5D4AF94C4F399971374D(L_1, (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_3 = __this->get__Major_0();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get__Major_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_6 = __this->get__Minor_1();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__Minor_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = __this->get__Build_2();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get__Build_2();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = __this->get__Revision_3();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get__Revision_3();
		if ((((int32_t)L_12) == ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}

IL_004a:
	{
		return (bool)0;
	}

IL_004c:
	{
		return (bool)1;
	}
}
// System.Boolean System.Version::Equals(System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_Equals_m7C93B95F0594CB28E1B1C96936B03069BF8968D3 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m7C93B95F0594CB28E1B1C96936B03069BF8968D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_1 = Version_op_Equality_m9E4E82DB85F13E3C19AB5D4AF94C4F399971374D(L_0, (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_2 = __this->get__Major_0();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_3 = ___obj0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_0();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->get__Minor_1();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_6 = ___obj0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Minor_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_8 = __this->get__Build_2();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_9 = ___obj0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Build_2();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_11 = __this->get__Revision_3();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_12 = ___obj0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Revision_3();
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		return (bool)1;
	}
}
// System.Int32 System.Version::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Version_GetHashCode_m3FF6292092A632298FF4E95DCEF1811F81FFB702 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		int32_t L_1 = __this->get__Minor_1();
		int32_t L_2 = __this->get__Build_2();
		int32_t L_3 = __this->get__Revision_3();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)0|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)15)))<<(int32_t)((int32_t)28)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)20)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)12)))))|(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)4095)))));
	}
}
// System.String System.Version::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Version_ToString_mDECF4A07B036D33A66BFC4A647363FBB89323034 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0(__this, 2, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = __this->get__Revision_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0(__this, 3, /*hidden argument*/NULL);
		return L_3;
	}

IL_0022:
	{
		String_t* L_4 = Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0(__this, 4, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Version::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___fieldCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		int32_t L_0 = ___fieldCount0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_0026;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0014:
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_001a:
	{
		int32_t* L_2 = __this->get_address_of__Major_0();
		String_t* L_3 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0026:
	{
		StringBuilder_t * L_4 = StringBuilderCache_Acquire_mCA3DDB17F0BFEF32DA9B4D7E8501D5705890557D(((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__Major_0();
		StringBuilder_t * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_5, L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_7, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_8 = __this->get__Minor_1();
		StringBuilder_t * L_9 = V_0;
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_8, L_9, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		String_t* L_11 = StringBuilderCache_GetStringAndRelease_mDD5B8378FE9378CACF8660EB460E0CE545F215F7(L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		int32_t L_12 = __this->get__Build_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_008a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0);
		String_t* L_16 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteral868E70DE0948AAB2E5C3FEF19E1D3C1808994229, L_15, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_17 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_17, L_16, _stringLiteralFAA5E8C43BB2D5850732EFD9442E467318BFD9C8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0_RuntimeMethod_var);
	}

IL_008a:
	{
		int32_t L_18 = ___fieldCount0;
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t * L_19 = StringBuilderCache_Acquire_mCA3DDB17F0BFEF32DA9B4D7E8501D5705890557D(((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_19;
		int32_t L_20 = __this->get__Major_0();
		StringBuilder_t * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_20, L_21, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_22, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_23 = __this->get__Minor_1();
		StringBuilder_t * L_24 = V_0;
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_23, L_24, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_25, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_26 = __this->get__Build_2();
		StringBuilder_t * L_27 = V_0;
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_26, L_27, /*hidden argument*/NULL);
		StringBuilder_t * L_28 = V_0;
		String_t* L_29 = StringBuilderCache_GetStringAndRelease_mDD5B8378FE9378CACF8660EB460E0CE545F215F7(L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00d3:
	{
		int32_t L_30 = __this->get__Revision_3();
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_0107;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral77DE68DAECD823BABBB58EDB1C8E14D7106E83BB);
		String_t* L_34 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteral868E70DE0948AAB2E5C3FEF19E1D3C1808994229, L_33, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_35 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_35, L_34, _stringLiteralFAA5E8C43BB2D5850732EFD9442E467318BFD9C8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0_RuntimeMethod_var);
	}

IL_0107:
	{
		int32_t L_36 = ___fieldCount0;
		if ((!(((uint32_t)L_36) == ((uint32_t)4))))
		{
			goto IL_0165;
		}
	}
	{
		StringBuilder_t * L_37 = StringBuilderCache_Acquire_mCA3DDB17F0BFEF32DA9B4D7E8501D5705890557D(((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_37;
		int32_t L_38 = __this->get__Major_0();
		StringBuilder_t * L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_38, L_39, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_40, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_41 = __this->get__Minor_1();
		StringBuilder_t * L_42 = V_0;
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_41, L_42, /*hidden argument*/NULL);
		StringBuilder_t * L_43 = V_0;
		NullCheck(L_43);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_43, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_44 = __this->get__Build_2();
		StringBuilder_t * L_45 = V_0;
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_44, L_45, /*hidden argument*/NULL);
		StringBuilder_t * L_46 = V_0;
		NullCheck(L_46);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_46, ((int32_t)46), /*hidden argument*/NULL);
		int32_t L_47 = __this->get__Revision_3();
		StringBuilder_t * L_48 = V_0;
		Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98(L_47, L_48, /*hidden argument*/NULL);
		StringBuilder_t * L_49 = V_0;
		String_t* L_50 = StringBuilderCache_GetStringAndRelease_mDD5B8378FE9378CACF8660EB460E0CE545F215F7(L_49, /*hidden argument*/NULL);
		return L_50;
	}

IL_0165:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_51 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_53 = L_52;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral1B6453892473A467D07372D45EB05ABC2031647A);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral1B6453892473A467D07372D45EB05ABC2031647A);
		String_t* L_54 = Environment_GetResourceString_m7389941B4C0688D875CC647D99A739DA2F907ADB(_stringLiteral868E70DE0948AAB2E5C3FEF19E1D3C1808994229, L_53, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_55 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_55, L_54, _stringLiteralFAA5E8C43BB2D5850732EFD9442E467318BFD9C8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, Version_ToString_m8B385B5C25D9FD3A25EE2DDF02B592CAFC1C0AB0_RuntimeMethod_var);
	}
}
// System.Void System.Version::AppendPositiveNumber(System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version_AppendPositiveNumber_mEDCCE1D1AC63EE1F509538B86EA00A698A9D7C98 (int32_t ___num0, StringBuilder_t * ___sb1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = ___sb1;
		NullCheck(L_0);
		int32_t L_1 = StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		int32_t L_2 = ___num0;
		V_1 = ((int32_t)((int32_t)L_2%(int32_t)((int32_t)10)));
		int32_t L_3 = ___num0;
		___num0 = ((int32_t)((int32_t)L_3/(int32_t)((int32_t)10)));
		StringBuilder_t * L_4 = ___sb1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		StringBuilder_Insert_m5A00CEB69C56B823E3766C84114D8B8ACCFC67A1(L_4, L_5, (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_6))))), /*hidden argument*/NULL);
		int32_t L_7 = ___num0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Version System.Version::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * Version_Parse_mAF74E042711BB851C4659BF71E09B9E79A9AC848 (String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Parse_mAF74E042711BB851C4659BF71E09B9E79A9AC848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___input0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral140F86AAE51AB9E1CDA9B4254FE98A74EB54C1A1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Version_Parse_mAF74E042711BB851C4659BF71E09B9E79A9AC848_RuntimeMethod_var);
	}

IL_000e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE ));
		VersionResult_Init_m87C0666EE7326FA61E704D4199B900412A6FC418((VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)(&V_0), _stringLiteral140F86AAE51AB9E1CDA9B4254FE98A74EB54C1A1, (bool)1, /*hidden argument*/NULL);
		String_t* L_2 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_3 = Version_TryParseVersion_m35BE4BD62EC50169F9BC8711A6D88CD9374FD031(L_2, (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		Exception_t * L_4 = VersionResult_GetVersionParseException_mD2123ABBACA1B3D82FC144785AF9FD7F0231BEF1((VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, Version_Parse_mAF74E042711BB851C4659BF71E09B9E79A9AC848_RuntimeMethod_var);
	}

IL_0035:
	{
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE  L_5 = V_0;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_6 = L_5.get_m_parsedVersion_0();
		return L_6;
	}
}
// System.Boolean System.Version::TryParseVersion(System.String,System.Version_VersionResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_TryParseVersion_m35BE4BD62EC50169F9BC8711A6D88CD9374FD031 (String_t* ___version0, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_TryParseVersion_m35BE4BD62EC50169F9BC8711A6D88CD9374FD031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___version0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_1 = ___result1;
		VersionResult_SetFailure_m77BF5012543025E534D65353AD44AD5620782338((VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)L_1, 0, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_000c:
	{
		String_t* L_2 = ___version0;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = ((Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields*)il2cpp_codegen_static_fields_for(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var))->get_SeparatorsArray_4();
		NullCheck(L_2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_2, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_4;
		NullCheck(L_5);
		V_5 = (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))));
		int32_t L_6 = V_5;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) <= ((int32_t)4)))
		{
			goto IL_0032;
		}
	}

IL_0029:
	{
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_8 = ___result1;
		VersionResult_SetFailure_m77BF5012543025E534D65353AD44AD5620782338((VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)L_8, 1, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0032:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_4;
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_12 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_13 = Version_TryParseComponent_m6BDC16037C969220C596E5F64906896291598FA0(L_11, _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97, (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)L_12, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0047:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_17 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_18 = Version_TryParseComponent_m6BDC16037C969220C596E5F64906896291598FA0(L_16, _stringLiteralC692273DEB2772DA307FFE37041FEF77BF4BAA97, (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)L_17, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)2));
		int32_t L_20 = V_5;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = V_4;
		NullCheck(L_21);
		int32_t L_22 = 2;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_24 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_25 = Version_TryParseComponent_m6BDC16037C969220C596E5F64906896291598FA0(L_23, _stringLiteral80754AF91BFB6D1073585B046FE0A474CE868509, (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)L_24, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}

IL_007c:
	{
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1));
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29 = 3;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_31 = ___result1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_32 = Version_TryParseComponent_m6BDC16037C969220C596E5F64906896291598FA0(L_30, _stringLiteralEAE79D6E0CFF76FC7A3BB78723690B0B2367F849, (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)L_31, (int32_t*)(&V_3), /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_009c;
		}
	}
	{
		return (bool)0;
	}

IL_009c:
	{
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_33 = ___result1;
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		int32_t L_37 = V_3;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_38 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_mFA5AABF2294D59FA7B3F32BB48CB238BCACBDF80(L_38, L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		L_33->set_m_parsedVersion_0(L_38);
		goto IL_00ca;
	}

IL_00ad:
	{
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_39 = ___result1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_43 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355(L_43, L_40, L_41, L_42, /*hidden argument*/NULL);
		L_39->set_m_parsedVersion_0(L_43);
		goto IL_00ca;
	}

IL_00bd:
	{
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_44 = ___result1;
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_47 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_mC2880C190E158700B0C114D4CC921C0D240DAA9C(L_47, L_45, L_46, /*hidden argument*/NULL);
		L_44->set_m_parsedVersion_0(L_47);
	}

IL_00ca:
	{
		return (bool)1;
	}
}
// System.Boolean System.Version::TryParseComponent(System.String,System.String,System.Version_VersionResult&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_TryParseComponent_m6BDC16037C969220C596E5F64906896291598FA0 (String_t* ___component0, String_t* ___componentName1, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * ___result2, int32_t* ___parsedComponent3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_TryParseComponent_m6BDC16037C969220C596E5F64906896291598FA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___component0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_1 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t* L_2 = ___parsedComponent3;
		bool L_3 = Int32_TryParse_m6ADA5D03EE325554346538B991A4C3566BD2A011(L_0, 7, L_1, (int32_t*)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_4 = ___result2;
		String_t* L_5 = ___component0;
		VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8((VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)L_4, 3, L_5, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0019:
	{
		int32_t* L_6 = ___parsedComponent3;
		int32_t L_7 = *((int32_t*)L_6);
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * L_8 = ___result2;
		String_t* L_9 = ___componentName1;
		VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8((VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)L_8, 2, L_9, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0028:
	{
		return (bool)1;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Equality_m9E4E82DB85F13E3C19AB5D4AF94C4F399971374D (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method)
{
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = ___v10;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = ___v21;
		return (bool)((((RuntimeObject*)(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_2 = ___v10;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_3 = ___v21;
		NullCheck(L_2);
		bool L_4 = Version_Equals_m7C93B95F0594CB28E1B1C96936B03069BF8968D3(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_Inequality_mBF83F266057D2C028BA2F423372DA7E738B25CD0 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_Inequality_mBF83F266057D2C028BA2F423372DA7E738B25CD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = ___v10;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_Equality_m9E4E82DB85F13E3C19AB5D4AF94C4F399971374D(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_LessThan_mEE4DE91646EDC7245FD486D1D3E2322B651E7028 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_LessThan_mEE4DE91646EDC7245FD486D1D3E2322B651E7028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = ___v10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral5A6DF720540C20D95D530D3FD6885511223D5D20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Version_op_LessThan_mEE4DE91646EDC7245FD486D1D3E2322B651E7028_RuntimeMethod_var);
	}

IL_000e:
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_2 = ___v10;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_3 = ___v21;
		NullCheck(L_2);
		int32_t L_4 = Version_CompareTo_mB6A6C226C3401C8903DD32602F72FA644631C33C(L_2, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_LessThanOrEqual_m6D2834974A9C75C04A7B303A9F1E57296E91A6B6 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_LessThanOrEqual_m6D2834974A9C75C04A7B303A9F1E57296E91A6B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = ___v10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral5A6DF720540C20D95D530D3FD6885511223D5D20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Version_op_LessThanOrEqual_m6D2834974A9C75C04A7B303A9F1E57296E91A6B6_RuntimeMethod_var);
	}

IL_000e:
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_2 = ___v10;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_3 = ___v21;
		NullCheck(L_2);
		int32_t L_4 = Version_CompareTo_mB6A6C226C3401C8903DD32602F72FA644631C33C(L_2, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_GreaterThan(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThan_m83C1D7D83DB72C83B859E64AFC8C607019F028B4 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_GreaterThan_m83C1D7D83DB72C83B859E64AFC8C607019F028B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = ___v21;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = ___v10;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_LessThan_mEE4DE91646EDC7245FD486D1D3E2322B651E7028(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m1F4E6E2B52256D92AE8B2A07DBCFF1F325634612 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_op_GreaterThanOrEqual_m1F4E6E2B52256D92AE8B2A07DBCFF1F325634612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = ___v21;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = ___v10;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_LessThanOrEqual_m6D2834974A9C75C04A7B303A9F1E57296E91A6B6(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Version::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__cctor_m255F2F683982C0B54105CCDAFF40FF467B19B8D3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__cctor_m255F2F683982C0B54105CCDAFF40FF467B19B8D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		((Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields*)il2cpp_codegen_static_fields_for(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var))->set_SeparatorsArray_4(L_1);
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
// Conversion methods for marshalling of: System.Version/VersionResult
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke(const VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE& unmarshaled, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception, NULL);
}
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back(const VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshaled_pinvoke& marshaled, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE& unmarshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Version/VersionResult
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup(VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Version/VersionResult
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_com(const VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE& unmarshaled, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshaled_com& marshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception, NULL);
}
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_com_back(const VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshaled_com& marshaled, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE& unmarshaled)
{
	Exception_t* ___m_parsedVersion_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_parsedVersion' of type 'VersionResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_parsedVersion_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Version/VersionResult
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_com_cleanup(VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshaled_com& marshaled)
{
}
// System.Void System.Version_VersionResult::Init(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_Init_m87C0666EE7326FA61E704D4199B900412A6FC418 (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___canThrow1;
		__this->set_m_canThrow_4(L_0);
		String_t* L_1 = ___argumentName0;
		__this->set_m_argumentName_3(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void VersionResult_Init_m87C0666EE7326FA61E704D4199B900412A6FC418_AdjustorThunk (RuntimeObject * __this, String_t* ___argumentName0, bool ___canThrow1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * _thisAdjusted = reinterpret_cast<VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *>(__this + _offset);
	VersionResult_Init_m87C0666EE7326FA61E704D4199B900412A6FC418(_thisAdjusted, ___argumentName0, ___canThrow1, method);
}
// System.Void System.Version_VersionResult::SetFailure(System.Version_ParseFailureKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_SetFailure_m77BF5012543025E534D65353AD44AD5620782338 (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * __this, int32_t ___failure0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionResult_SetFailure_m77BF5012543025E534D65353AD44AD5620782338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___failure0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8((VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void VersionResult_SetFailure_m77BF5012543025E534D65353AD44AD5620782338_AdjustorThunk (RuntimeObject * __this, int32_t ___failure0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * _thisAdjusted = reinterpret_cast<VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *>(__this + _offset);
	VersionResult_SetFailure_m77BF5012543025E534D65353AD44AD5620782338(_thisAdjusted, ___failure0, method);
}
// System.Void System.Version_VersionResult::SetFailure(System.Version_ParseFailureKind,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8 (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___failure0;
		__this->set_m_failure_1(L_0);
		String_t* L_1 = ___argument1;
		__this->set_m_exceptionArgument_2(L_1);
		bool L_2 = __this->get_m_canThrow_4();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_3 = VersionResult_GetVersionParseException_mD2123ABBACA1B3D82FC144785AF9FD7F0231BEF1((VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8_AdjustorThunk (RuntimeObject * __this, int32_t ___failure0, String_t* ___argument1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * _thisAdjusted = reinterpret_cast<VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *>(__this + _offset);
	VersionResult_SetFailure_m60FA20CDF1A998A6670DEBE9BD78291CC43AB0C8(_thisAdjusted, ___failure0, ___argument1, method);
}
// System.Exception System.Version_VersionResult::GetVersionParseException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * VersionResult_GetVersionParseException_mD2123ABBACA1B3D82FC144785AF9FD7F0231BEF1 (VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionResult_GetVersionParseException_mD2123ABBACA1B3D82FC144785AF9FD7F0231BEF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_m_failure_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_003b;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_001f:
	{
		String_t* L_2 = __this->get_m_argumentName_3();
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002b:
	{
		String_t* L_4 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral4D7F7C774CADD02AE1032A3CB224E5F17003B701, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_003b:
	{
		String_t* L_6 = __this->get_m_exceptionArgument_2();
		String_t* L_7 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral698C2F7C87FA878A3D506FEDB570238873872A3C, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0051:
	{
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		String_t* L_9 = __this->get_m_exceptionArgument_2();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_10 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		Int32_Parse_m9FD0A75E9C7A9BFC26070A60A420D77CD629CC58(L_9, L_10, /*hidden argument*/NULL);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0068;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.FormatException)
		V_1 = ((FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC *)__exception_local);
		goto IL_008b;
	} // end catch (depth: 1)

CATCH_0068:
	{ // begin catch(System.OverflowException)
		V_1 = ((OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)__exception_local);
		goto IL_008b;
	} // end catch (depth: 1)

IL_006b:
	{
		String_t* L_11 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralD2F0257C42607F2773F4B8AAB0C017A3B8949322, /*hidden argument*/NULL);
		FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC * L_12 = (FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC *)il2cpp_codegen_object_new(FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC_il2cpp_TypeInfo_var);
		FormatException__ctor_m89167FF9884AE20232190FE9286DC50E146A4F14(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_007b:
	{
		String_t* L_13 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteral4D7F7C774CADD02AE1032A3CB224E5F17003B701, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_14 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_008b:
	{
		Exception_t * L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C  Exception_t * VersionResult_GetVersionParseException_mD2123ABBACA1B3D82FC144785AF9FD7F0231BEF1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE * _thisAdjusted = reinterpret_cast<VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE *>(__this + _offset);
	return VersionResult_GetVersionParseException_mD2123ABBACA1B3D82FC144785AF9FD7F0231BEF1(_thisAdjusted, method);
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
// System.Void System.WeakReference::AllocateHandle(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_AllocateHandle_m116757CBF336A309363C5F2DFE13A2E426368780 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject * L_1 = ___target0;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_2 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		return;
	}

IL_0016:
	{
		RuntimeObject * L_3 = ___target0;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_4 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
		return;
	}
}
// System.Void System.WeakReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m4CF255427FB5EE28DA76A12EF072BAA3778AA6AF (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m12F7412E9F228AA2276BBB37441CFBCD21A0ABBB (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m55A06AD20FF65C11015FFBE5FF31F2E7B1656E20 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		RuntimeObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m116757CBF336A309363C5F2DFE13A2E426368780(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m9740BD0F2AEC959BF2210503D085723C6C1E09DF (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_m9740BD0F2AEC959BF2210503D085723C6C1E09DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, WeakReference__ctor_m9740BD0F2AEC959BF2210503D085723C6C1E09DF_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_2 = ___info0;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_m5CAA35E19A152535A5481502BEDBC7A0E276E455(L_2, _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_4 = ___info0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_7 = SerializationInfo_GetValue_m7910CE6C68888C1F863D7A35915391FA33463ECF(L_4, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		WeakReference_AllocateHandle_m116757CBF336A309363C5F2DFE13A2E426368780(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_get_IsAlive_mE49EEF623602528F0380CE52FCD8ED064B00925F (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Object System.WeakReference::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeakReference_get_Target_mF924E58A87EF45E9D2A464FAA36B7A6079F10B1F (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, const RuntimeMethod* method)
{
	{
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_0 = __this->get_address_of_gcHandle_1();
		bool L_1 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return NULL;
	}

IL_000f:
	{
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_2 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_3 = GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.WeakReference::set_Target(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_set_Target_mF6E89E1F816A61EF8E8FFABE07CFFEF35E518635 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_0 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_1 = ___value0;
		GCHandle_set_Target_mFE24B2555ECDBA46AC76D6DB79505B2F4238D913((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_get_TrackResurrection_m047E08E5BE894FCF92A620D86FDB77C9DA559D56 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_Finalize_m02C66F00C0F5E656FDF04E9A455A19E94A95F827 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_GetObjectData_m1DBED399F8C4A13F8C764A2AADFC5B6EBA5643D4 (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m1DBED399F8C4A13F8C764A2AADFC5B6EBA5643D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral59BD0A3FF43B32849B319E645D4798D8A5D1E889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, WeakReference_GetObjectData_m1DBED399F8C4A13F8C764A2AADFC5B6EBA5643D4_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m1229CE68F507974EBA0DA9C7C728A09E611D18B1(L_2, _stringLiteralA9914DA9D64B4FCE39273016F570714425122C67, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_4 = ___info0;
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_mC9D1E16476E24E1AFE7C59368D3BC0B35F64FBC6(L_4, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, L_5, /*hidden argument*/NULL);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_6 = ___info0;
		NullCheck(L_6);
		SerializationInfo_AddValue_mC9D1E16476E24E1AFE7C59368D3BC0B35F64FBC6(L_6, _stringLiteral7E95DB629C3A5AA1BCFEB547A0BD39A78FE49276, NULL, /*hidden argument*/NULL);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
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
// System.Void System.WindowsConsoleDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsConsoleDriver__ctor_m9C9E675288391C478152CCB5789D7726611BF70D (WindowsConsoleDriver_t953AB92956013BD3ED7E260FEC4944E603008B42 * __this, const RuntimeMethod* method)
{
	ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = WindowsConsoleDriver_GetStdHandle_m411672A3E27D4266E946FF166C9DA279A75B3FB5(((int32_t)-11), /*hidden argument*/NULL);
		__this->set_outputHandle_1((intptr_t)L_0);
		intptr_t L_1 = WindowsConsoleDriver_GetStdHandle_m411672A3E27D4266E946FF166C9DA279A75B3FB5(((int32_t)-10), /*hidden argument*/NULL);
		__this->set_inputHandle_0((intptr_t)L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F ));
		intptr_t L_2 = __this->get_outputHandle_1();
		WindowsConsoleDriver_GetConsoleScreenBufferInfo_m0DF841B5A1BF2651A1D9BFEA3D61280110461C80((intptr_t)L_2, (ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F *)(&V_0), /*hidden argument*/NULL);
		ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F  L_3 = V_0;
		int16_t L_4 = L_3.get_Attribute_2();
		__this->set_defaultAttribute_2(L_4);
		return;
	}
}
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768  WindowsConsoleDriver_ReadKey_mDE4EDC7320EFF2B8D0B888A203D0C96531855568 (WindowsConsoleDriver_t953AB92956013BD3ED7E260FEC4944E603008B42 * __this, bool ___intercept0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsConsoleDriver_ReadKey_mDE4EDC7320EFF2B8D0B888A203D0C96531855568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78 ));
	}

IL_0008:
	{
		intptr_t L_0 = __this->get_inputHandle_0();
		bool L_1 = WindowsConsoleDriver_ReadConsoleInput_mAA31A86190A2F7B76CD7205DCE7C2743E7C8AAA2((intptr_t)L_0, (InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78 *)(&V_1), 1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_GetLastWin32Error_mE1A714E69515F70001BA6714077880530257AEC7(/*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral68EB0192F01DDAA7B81A607B464BC951839404CE, L_4, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, WindowsConsoleDriver_ReadKey_mDE4EDC7320EFF2B8D0B888A203D0C96531855568_RuntimeMethod_var);
	}

IL_0034:
	{
		InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  L_7 = V_1;
		bool L_8 = L_7.get_KeyDown_1();
		if (!L_8)
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  L_9 = V_1;
		int16_t L_10 = L_9.get_EventType_0();
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  L_11 = V_1;
		int16_t L_12 = L_11.get_VirtualKeyCode_3();
		bool L_13 = WindowsConsoleDriver_IsModifierKey_mCBF637C09E9D2BD063E44FA5C8B8D2E317C4A1AE(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0008;
		}
	}
	{
		InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  L_14 = V_1;
		int32_t L_15 = L_14.get_ControlKeyState_6();
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&(int32_t)3))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  L_16 = V_1;
		int32_t L_17 = L_16.get_ControlKeyState_6();
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)12)))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  L_18 = V_1;
		int32_t L_19 = L_18.get_ControlKeyState_6();
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  L_20 = V_1;
		Il2CppChar L_21 = L_20.get_Character_5();
		InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  L_22 = V_1;
		int16_t L_23 = L_22.get_VirtualKeyCode_3();
		bool L_24 = V_4;
		bool L_25 = V_2;
		bool L_26 = V_3;
		ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768  L_27;
		memset((&L_27), 0, sizeof(L_27));
		ConsoleKeyInfo__ctor_mF5F427F75CCD5D4BCAADCE6AE31F61D70BD95B98((&L_27), L_21, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Boolean System.WindowsConsoleDriver::IsModifierKey(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_IsModifierKey_mCBF637C09E9D2BD063E44FA5C8B8D2E317C4A1AE (int16_t ___virtualKeyCode0, const RuntimeMethod* method)
{
	{
		int16_t L_0 = ___virtualKeyCode0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)16)))) > ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_1 = ___virtualKeyCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)20))))
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_2 = ___virtualKeyCode0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)144)))) <= ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetStdHandle(int32_t);
#endif
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsConsoleDriver_GetStdHandle_m411672A3E27D4266E946FF166C9DA279A75B3FB5 (int32_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetStdHandle", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetStdHandle)(___handle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetConsoleScreenBufferInfo(intptr_t, ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F *);
#endif
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m0DF841B5A1BF2651A1D9BFEA3D61280110461C80 (intptr_t ___handle0, ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F * ___info1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F *);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ConsoleScreenBufferInfo_tA8045B7C44EF25956D3B0847F24465E9CF18954F *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetConsoleScreenBufferInfo", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetConsoleScreenBufferInfo)(___handle0, ___info1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___info1);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ReadConsoleInput(intptr_t, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke*, int32_t, int32_t*);
#endif
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsConsoleDriver_ReadConsoleInput_mAA31A86190A2F7B76CD7205DCE7C2743E7C8AAA2 (intptr_t ___handle0, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke*, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "ReadConsoleInput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___record1' to native representation
	InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke ____record1_empty = {};
	InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshaled_pinvoke* ____record1_marshaled = &____record1_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ReadConsoleInput)(___handle0, ____record1_marshaled, ___length2, ___nread3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____record1_marshaled, ___length2, ___nread3);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___record1' back from native representation
	InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78  _____record1_marshaled_unmarshaled_dereferenced;
	memset((&_____record1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____record1_marshaled_unmarshaled_dereferenced));
	InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back(*____record1_marshaled, _____record1_marshaled_unmarshaled_dereferenced);
	*___record1 = _____record1_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___record1' native representation
	InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup(*____record1_marshaled);

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.__ComObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __ComObject__ctor_m2A98911F497D95AC1C931674CC745F002A36C878 (__ComObject_t7C4C78B18A827C344A9826ECC7FCC40B7F6FD77C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__ComObject__ctor_m2A98911F497D95AC1C931674CC745F002A36C878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, __ComObject__ctor_m2A98911F497D95AC1C931674CC745F002A36C878_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.__DTString
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke(const __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9& unmarshaled, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL);
}
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back(const __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshaled_pinvoke& marshaled, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9& unmarshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.__DTString
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.__DTString
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_com(const __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9& unmarshaled, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshaled_com& marshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL);
}
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_com_back(const __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshaled_com& marshaled, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9& unmarshaled)
{
	Exception_t* ___m_info_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.__DTString
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_com_cleanup(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshaled_com& marshaled)
{
}
// System.Void System.__DTString::.ctor(System.String,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString__ctor_mE5FC300B73DE2B23E51414546030AF8625D1109E (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, String_t* ___str0, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi1, const RuntimeMethod* method)
{
	{
		__this->set_Index_1((-1));
		String_t* L_0 = ___str0;
		__this->set_Value_0(L_0);
		String_t* L_1 = __this->get_Value_0();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		__this->set_len_2(L_2);
		__this->set_m_current_3(0);
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_3 = ___dtfi1;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_4 = ___dtfi1;
		NullCheck(L_4);
		CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * L_5 = DateTimeFormatInfo_get_CompareInfo_mD70321935C290535664E8821CBE0D304580230C8(L_4, /*hidden argument*/NULL);
		__this->set_m_info_4(L_5);
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_6 = ___dtfi1;
		NullCheck(L_6);
		int32_t L_7 = DateTimeFormatInfo_get_FormatFlags_m42B106A8C2AC470D425032034608045AABB71731(L_6, /*hidden argument*/NULL);
		__this->set_m_checkDigitToken_5((bool)((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0));
		return;
	}

IL_0048:
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_8 = Thread_get_CurrentThread_mB7A83CAE2B9A74CEA053196DFD1AF1E7AB30A70E(/*hidden argument*/NULL);
		NullCheck(L_8);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_9 = Thread_get_CurrentCulture_m97A15448A16FB3B5EC1E21A0538C9FC1F84AEE66(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * L_10 = VirtFuncInvoker0< CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * >::Invoke(12 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_9);
		__this->set_m_info_4(L_10);
		__this->set_m_checkDigitToken_5((bool)0);
		return;
	}
}
IL2CPP_EXTERN_C  void __DTString__ctor_mE5FC300B73DE2B23E51414546030AF8625D1109E_AdjustorThunk (RuntimeObject * __this, String_t* ___str0, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	__DTString__ctor_mE5FC300B73DE2B23E51414546030AF8625D1109E(_thisAdjusted, ___str0, ___dtfi1, method);
}
// System.Boolean System.__DTString::GetNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_GetNext_mA99D360775F54B38E339C68D2E6007B7E028E1A3 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get_Index_1();
		int32_t L_2 = __this->get_len_2();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = __this->get_Value_0();
		int32_t L_4 = __this->get_Index_1();
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_current_3(L_5);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool __DTString_GetNext_mA99D360775F54B38E339C68D2E6007B7E028E1A3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_GetNext_mA99D360775F54B38E339C68D2E6007B7E028E1A3(_thisAdjusted, method);
}
// System.Boolean System.__DTString::AtEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_AtEnd_mE89AB87FFD62B3BA1D1E5B30052947890000EADC (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = __this->get_len_2();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool __DTString_AtEnd_mE89AB87FFD62B3BA1D1E5B30052947890000EADC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_AtEnd_mE89AB87FFD62B3BA1D1E5B30052947890000EADC(_thisAdjusted, method);
}
// System.Boolean System.__DTString::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Advance_m6CAEF5CE3C7B57CBBDA5E0F5A391F6517C3791CC (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = ___count0;
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		int32_t L_2 = __this->get_Index_1();
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, L_5, /*hidden argument*/NULL);
		__this->set_m_current_3(L_6);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool __DTString_Advance_m6CAEF5CE3C7B57CBBDA5E0F5A391F6517C3791CC_AdjustorThunk (RuntimeObject * __this, int32_t ___count0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_Advance_m6CAEF5CE3C7B57CBBDA5E0F5A391F6517C3791CC(_thisAdjusted, ___count0, method);
}
// System.Void System.__DTString::GetRegularToken(System.TokenType&,System.Int32&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_GetRegularToken_mD79E9337E33F2F9535DD89437EEDC2AF3F5A0B39 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetRegularToken_mD79E9337E33F2F9535DD89437EEDC2AF3F5A0B39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t* L_0 = ___tokenValue1;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t L_1 = __this->get_Index_1();
		int32_t L_2 = __this->get_len_2();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_3 = ___tokenType0;
		*((int32_t*)L_3) = (int32_t)6;
		return;
	}

IL_0015:
	{
		int32_t* L_4 = ___tokenType0;
		*((int32_t*)L_4) = (int32_t)((int32_t)11);
	}

IL_0019:
	{
		Il2CppChar L_5 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t657E38D9FF27E5FD6A33E23887031A86248D97D4_il2cpp_TypeInfo_var);
		bool L_6 = DateTimeParse_IsDigit_mCC840BC9EC5E157F967F148BC12F6A815E75B74A(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0112;
		}
	}
	{
		int32_t* L_7 = ___tokenValue1;
		Il2CppChar L_8 = __this->get_m_current_3();
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		int32_t L_9 = __this->get_Index_1();
		V_1 = L_9;
		goto IL_0070;
	}

IL_003d:
	{
		String_t* L_10 = __this->get_Value_0();
		int32_t L_11 = __this->get_Index_1();
		NullCheck(L_10);
		Il2CppChar L_12 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_10, L_11, /*hidden argument*/NULL);
		__this->set_m_current_3(L_12);
		Il2CppChar L_13 = __this->get_m_current_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)48)));
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)9))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t* L_16 = ___tokenValue1;
		int32_t* L_17 = ___tokenValue1;
		int32_t L_18 = *((int32_t*)L_17);
		int32_t L_19 = V_0;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)((int32_t)10))), (int32_t)L_19));
	}

IL_0070:
	{
		int32_t L_20 = __this->get_Index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_2;
		__this->set_Index_1(L_21);
		int32_t L_22 = V_2;
		int32_t L_23 = __this->get_len_2();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		int32_t L_24 = __this->get_Index_1();
		int32_t L_25 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))) <= ((int32_t)8)))
		{
			goto IL_009c;
		}
	}
	{
		int32_t* L_26 = ___tokenType0;
		*((int32_t*)L_26) = (int32_t)1;
		int32_t* L_27 = ___tokenValue1;
		*((int32_t*)L_27) = (int32_t)(-1);
		goto IL_00af;
	}

IL_009c:
	{
		int32_t L_28 = __this->get_Index_1();
		int32_t L_29 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29))) >= ((int32_t)3)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t* L_30 = ___tokenType0;
		*((int32_t*)L_30) = (int32_t)1;
		goto IL_00af;
	}

IL_00ac:
	{
		int32_t* L_31 = ___tokenType0;
		*((int32_t*)L_31) = (int32_t)2;
	}

IL_00af:
	{
		bool L_32 = __this->get_m_checkDigitToken_5();
		if (!L_32)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = __this->get_Index_1();
		V_3 = L_33;
		Il2CppChar L_34 = __this->get_m_current_3();
		V_4 = L_34;
		int32_t L_35 = V_1;
		__this->set_Index_1(L_35);
		String_t* L_36 = __this->get_Value_0();
		int32_t L_37 = __this->get_Index_1();
		NullCheck(L_36);
		Il2CppChar L_38 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_36, L_37, /*hidden argument*/NULL);
		__this->set_m_current_3(L_38);
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_39 = ___dtfi2;
		NullCheck(L_39);
		bool L_40 = DateTimeFormatInfo_Tokenize_m47644B9B55F1919470E65677B3C8C5573E606217(L_39, ((int32_t)255), (int32_t*)(&V_5), (int32_t*)(&V_6), (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *)__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0102;
		}
	}
	{
		int32_t* L_41 = ___tokenType0;
		int32_t L_42 = V_5;
		*((int32_t*)L_41) = (int32_t)L_42;
		int32_t* L_43 = ___tokenValue1;
		int32_t L_44 = V_6;
		*((int32_t*)L_43) = (int32_t)L_44;
		return;
	}

IL_0102:
	{
		int32_t L_45 = V_3;
		__this->set_Index_1(L_45);
		Il2CppChar L_46 = V_4;
		__this->set_m_current_3(L_46);
		return;
	}

IL_0112:
	{
		Il2CppChar L_47 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_48 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0165;
		}
	}
	{
		goto IL_0148;
	}

IL_0121:
	{
		String_t* L_49 = __this->get_Value_0();
		int32_t L_50 = __this->get_Index_1();
		NullCheck(L_49);
		Il2CppChar L_51 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_49, L_50, /*hidden argument*/NULL);
		__this->set_m_current_3(L_51);
		Il2CppChar L_52 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_53 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0019;
		}
	}

IL_0148:
	{
		int32_t L_54 = __this->get_Index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		int32_t L_55 = V_2;
		__this->set_Index_1(L_55);
		int32_t L_56 = V_2;
		int32_t L_57 = __this->get_len_2();
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0121;
		}
	}
	{
		int32_t* L_58 = ___tokenType0;
		*((int32_t*)L_58) = (int32_t)6;
		return;
	}

IL_0165:
	{
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_59 = ___dtfi2;
		int32_t* L_60 = ___tokenType0;
		int32_t* L_61 = ___tokenValue1;
		NullCheck(L_59);
		DateTimeFormatInfo_Tokenize_m47644B9B55F1919470E65677B3C8C5573E606217(L_59, ((int32_t)255), (int32_t*)L_60, (int32_t*)L_61, (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *)__this, /*hidden argument*/NULL);
	}

IL_0174:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void __DTString_GetRegularToken_mD79E9337E33F2F9535DD89437EEDC2AF3F5A0B39_AdjustorThunk (RuntimeObject * __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	__DTString_GetRegularToken_mD79E9337E33F2F9535DD89437EEDC2AF3F5A0B39(_thisAdjusted, ___tokenType0, ___tokenValue1, ___dtfi2, method);
}
// System.TokenType System.__DTString::GetSeparatorToken(System.Globalization.DateTimeFormatInfo,System.Int32&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetSeparatorToken_m2F4CE10AC9C39A5380D3DD5344B81F79C7006EF1 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetSeparatorToken_m2F4CE10AC9C39A5380D3DD5344B81F79C7006EF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = ___indexBeforeSeparator1;
		int32_t L_1 = __this->get_Index_1();
		*((int32_t*)L_0) = (int32_t)L_1;
		Il2CppChar* L_2 = ___charBeforeSeparator2;
		Il2CppChar L_3 = __this->get_m_current_3();
		*((int16_t*)L_2) = (int16_t)L_3;
		bool L_4 = __DTString_SkipWhiteSpaceCurrent_m85EF1DCFFB216A209FEB3CC53CB8E977C51D71DB((__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *)__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(((int32_t)512));
	}

IL_001e:
	{
		Il2CppChar L_5 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t657E38D9FF27E5FD6A33E23887031A86248D97D4_il2cpp_TypeInfo_var);
		bool L_6 = DateTimeParse_IsDigit_mCC840BC9EC5E157F967F148BC12F6A815E75B74A(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_7 = ___dtfi0;
		NullCheck(L_7);
		bool L_8 = DateTimeFormatInfo_Tokenize_m47644B9B55F1919470E65677B3C8C5573E606217(L_7, ((int32_t)65280), (int32_t*)(&V_0), (int32_t*)(&V_1), (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *)__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = ((int32_t)768);
		goto IL_004b;
	}

IL_0045:
	{
		V_0 = ((int32_t)768);
	}

IL_004b:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t __DTString_GetSeparatorToken_m2F4CE10AC9C39A5380D3DD5344B81F79C7006EF1_AdjustorThunk (RuntimeObject * __this, DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_GetSeparatorToken_m2F4CE10AC9C39A5380D3DD5344B81F79C7006EF1(_thisAdjusted, ___dtfi0, ___indexBeforeSeparator1, ___charBeforeSeparator2, method);
}
// System.Boolean System.__DTString::MatchSpecifiedWords(System.String,System.Boolean,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWords_mAD172D28B54FDBB34D5E8C8F92CB6C8B0EECDBA0 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_MatchSpecifiedWords_mAD172D28B54FDBB34D5E8C8F92CB6C8B0EECDBA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		String_t* L_0 = __this->get_Value_0();
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		int32_t* L_3 = ___matchLength2;
		String_t* L_4 = ___target0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_4, /*hidden argument*/NULL);
		*((int32_t*)L_3) = (int32_t)L_5;
		int32_t* L_6 = ___matchLength2;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0043;
		}
	}
	{
		CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * L_9 = __this->get_m_info_4();
		String_t* L_10 = __this->get_Value_0();
		int32_t L_11 = __this->get_Index_1();
		int32_t* L_12 = ___matchLength2;
		int32_t L_13 = *((int32_t*)L_12);
		String_t* L_14 = ___target0;
		int32_t* L_15 = ___matchLength2;
		int32_t L_16 = *((int32_t*)L_15);
		NullCheck(L_9);
		int32_t L_17 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_9, L_10, L_11, L_13, L_14, 0, L_16, 1);
		if (!L_17)
		{
			goto IL_0147;
		}
	}

IL_0043:
	{
		V_1 = 0;
		int32_t L_18 = __this->get_Index_1();
		V_2 = L_18;
		String_t* L_19 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_20 = ((__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_il2cpp_TypeInfo_var))->get_WhiteSpaceChecks_6();
		int32_t L_21 = V_1;
		NullCheck(L_19);
		int32_t L_22 = String_IndexOfAny_m30470EE6951771AE5E897773C8FC233DADBAE301(L_19, L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_005f:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25));
		int32_t L_26 = V_2;
		String_t* L_27 = __this->get_Value_0();
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_4;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)))))
		{
			goto IL_0077;
		}
	}
	{
		return (bool)0;
	}

IL_0077:
	{
		int32_t L_30 = V_4;
		if (L_30)
		{
			goto IL_0083;
		}
	}
	{
		int32_t* L_31 = ___matchLength2;
		int32_t* L_32 = ___matchLength2;
		int32_t L_33 = *((int32_t*)L_32);
		*((int32_t*)L_31) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
		goto IL_00bf;
	}

IL_0083:
	{
		String_t* L_34 = __this->get_Value_0();
		int32_t L_35 = V_2;
		int32_t L_36 = V_4;
		NullCheck(L_34);
		Il2CppChar L_37 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_38 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		return (bool)0;
	}

IL_009b:
	{
		CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * L_39 = __this->get_m_info_4();
		String_t* L_40 = __this->get_Value_0();
		int32_t L_41 = V_2;
		int32_t L_42 = V_4;
		String_t* L_43 = ___target0;
		int32_t L_44 = V_1;
		int32_t L_45 = V_4;
		NullCheck(L_39);
		int32_t L_46 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_39, L_40, L_41, L_42, L_43, L_44, L_45, 1);
		if (!L_46)
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_00b8:
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48)), (int32_t)1));
	}

IL_00bf:
	{
		int32_t L_49 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		goto IL_00cf;
	}

IL_00c5:
	{
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t* L_51 = ___matchLength2;
		int32_t* L_52 = ___matchLength2;
		int32_t L_53 = *((int32_t*)L_52);
		*((int32_t*)L_51) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_54 = V_2;
		String_t* L_55 = __this->get_Value_0();
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_54) >= ((int32_t)L_56)))
		{
			goto IL_00f0;
		}
	}
	{
		String_t* L_57 = __this->get_Value_0();
		int32_t L_58 = V_2;
		NullCheck(L_57);
		Il2CppChar L_59 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_57, L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_60 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_59, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_00c5;
		}
	}

IL_00f0:
	{
		String_t* L_61 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_il2cpp_TypeInfo_var);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_62 = ((__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_il2cpp_TypeInfo_var))->get_WhiteSpaceChecks_6();
		int32_t L_63 = V_1;
		NullCheck(L_61);
		int32_t L_64 = String_IndexOfAny_m30470EE6951771AE5E897773C8FC233DADBAE301(L_61, L_62, L_63, /*hidden argument*/NULL);
		int32_t L_65 = L_64;
		V_3 = L_65;
		if ((((int32_t)L_65) >= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_66 = V_1;
		String_t* L_67 = ___target0;
		NullCheck(L_67);
		int32_t L_68 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_67, /*hidden argument*/NULL);
		if ((((int32_t)L_66) >= ((int32_t)L_68)))
		{
			goto IL_0147;
		}
	}
	{
		String_t* L_69 = ___target0;
		NullCheck(L_69);
		int32_t L_70 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_69, /*hidden argument*/NULL);
		int32_t L_71 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)L_71));
		int32_t L_72 = V_2;
		String_t* L_73 = __this->get_Value_0();
		NullCheck(L_73);
		int32_t L_74 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_73, /*hidden argument*/NULL);
		int32_t L_75 = V_5;
		if ((((int32_t)L_72) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)L_75)))))
		{
			goto IL_012a;
		}
	}
	{
		return (bool)0;
	}

IL_012a:
	{
		CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * L_76 = __this->get_m_info_4();
		String_t* L_77 = __this->get_Value_0();
		int32_t L_78 = V_2;
		int32_t L_79 = V_5;
		String_t* L_80 = ___target0;
		int32_t L_81 = V_1;
		int32_t L_82 = V_5;
		NullCheck(L_76);
		int32_t L_83 = VirtFuncInvoker7< int32_t, String_t*, int32_t, int32_t, String_t*, int32_t, int32_t, int32_t >::Invoke(8 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions) */, L_76, L_77, L_78, L_79, L_80, L_81, L_82, 1);
		if (!L_83)
		{
			goto IL_0147;
		}
	}
	{
		return (bool)0;
	}

IL_0147:
	{
		bool L_84 = ___checkWordBoundary1;
		if (!L_84)
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_85 = __this->get_Index_1();
		int32_t* L_86 = ___matchLength2;
		int32_t L_87 = *((int32_t*)L_86);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_87));
		int32_t L_88 = V_6;
		String_t* L_89 = __this->get_Value_0();
		NullCheck(L_89);
		int32_t L_90 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_89, /*hidden argument*/NULL);
		if ((((int32_t)L_88) >= ((int32_t)L_90)))
		{
			goto IL_017a;
		}
	}
	{
		String_t* L_91 = __this->get_Value_0();
		int32_t L_92 = V_6;
		NullCheck(L_91);
		Il2CppChar L_93 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_91, L_92, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_94 = Char_IsLetter_mCC7F387F16C2DE7C85B6A1A0C5BC75D92A813DFE(L_93, /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_017a;
		}
	}
	{
		return (bool)0;
	}

IL_017a:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool __DTString_MatchSpecifiedWords_mAD172D28B54FDBB34D5E8C8F92CB6C8B0EECDBA0_AdjustorThunk (RuntimeObject * __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_MatchSpecifiedWords_mAD172D28B54FDBB34D5E8C8F92CB6C8B0EECDBA0(_thisAdjusted, ___target0, ___checkWordBoundary1, ___matchLength2, method);
}
// System.Boolean System.__DTString::Match(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Match_mC0335DA3DE8A7B7F93781B52A02655B6889E01B3 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_Index_1(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = ___ch0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppChar L_8 = ___ch0;
		__this->set_m_current_3(L_8);
		return (bool)1;
	}

IL_0038:
	{
		int32_t L_9 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool __DTString_Match_mC0335DA3DE8A7B7F93781B52A02655B6889E01B3_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___ch0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_Match_mC0335DA3DE8A7B7F93781B52A02655B6889E01B3(_thisAdjusted, ___ch0, method);
}
// System.Boolean System.__DTString::GetNextDigit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_mE662D3828A0E0648E24F62FC5D750DA554364EFB (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_GetNextDigit_mE662D3828A0E0648E24F62FC5D750DA554364EFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set_Index_1(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_len_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParse_t657E38D9FF27E5FD6A33E23887031A86248D97D4_il2cpp_TypeInfo_var);
		bool L_7 = DateTimeParse_IsDigit_mCC840BC9EC5E157F967F148BC12F6A815E75B74A(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool __DTString_GetNextDigit_mE662D3828A0E0648E24F62FC5D750DA554364EFB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_GetNextDigit_mE662D3828A0E0648E24F62FC5D750DA554364EFB(_thisAdjusted, method);
}
// System.Char System.__DTString::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar __DTString_GetChar_m15E6D62E27D5EC6E7E726D2E6A719A95A521CAE6 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Il2CppChar __DTString_GetChar_m15E6D62E27D5EC6E7E726D2E6A719A95A521CAE6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_GetChar_m15E6D62E27D5EC6E7E726D2E6A719A95A521CAE6(_thisAdjusted, method);
}
// System.Int32 System.__DTString::GetDigit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetDigit_m0A4FC9D7AA54648B77398FAF7997FF7FED3694BF (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_0, L_1, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
	}
}
IL2CPP_EXTERN_C  int32_t __DTString_GetDigit_m0A4FC9D7AA54648B77398FAF7997FF7FED3694BF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_GetDigit_m0A4FC9D7AA54648B77398FAF7997FF7FED3694BF(_thisAdjusted, method);
}
// System.Void System.__DTString::SkipWhiteSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_SkipWhiteSpaces_mB4AA5270916EF04CD52A4F3C16B1FB08D0B0CF4F (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_SkipWhiteSpaces_mB4AA5270916EF04CD52A4F3C16B1FB08D0B0CF4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_002b;
	}

IL_0002:
	{
		String_t* L_0 = __this->get_Value_0();
		int32_t L_1 = __this->get_Index_1();
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_4 = __this->get_Index_1();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_002b:
	{
		int32_t L_5 = __this->get_Index_1();
		int32_t L_6 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))) < ((int32_t)L_6)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void __DTString_SkipWhiteSpaces_mB4AA5270916EF04CD52A4F3C16B1FB08D0B0CF4F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	__DTString_SkipWhiteSpaces_mB4AA5270916EF04CD52A4F3C16B1FB08D0B0CF4F(_thisAdjusted, method);
}
// System.Boolean System.__DTString::SkipWhiteSpaceCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_SkipWhiteSpaceCurrent_m85EF1DCFFB216A209FEB3CC53CB8E977C51D71DB (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString_SkipWhiteSpaceCurrent_m85EF1DCFFB216A209FEB3CC53CB8E977C51D71DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_Index_1();
		int32_t L_1 = __this->get_len_2();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		Il2CppChar L_2 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_3 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		String_t* L_4 = __this->get_Value_0();
		int32_t L_5 = __this->get_Index_1();
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, L_5, /*hidden argument*/NULL);
		__this->set_m_current_3(L_6);
		Il2CppChar L_7 = __this->get_m_current_3();
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_8 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)1;
	}

IL_0045:
	{
		int32_t L_9 = __this->get_Index_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_0;
		__this->set_Index_1(L_10);
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_len_2();
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool __DTString_SkipWhiteSpaceCurrent_m85EF1DCFFB216A209FEB3CC53CB8E977C51D71DB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_SkipWhiteSpaceCurrent_m85EF1DCFFB216A209FEB3CC53CB8E977C51D71DB(_thisAdjusted, method);
}
// System.DTSubString System.__DTString::GetSubString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  __DTString_GetSubString_m699C79DE88DFBC0BDD9F85C2CDC155ABB1473DC4 (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, const RuntimeMethod* method)
{
	DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D ));
		int32_t L_0 = __this->get_Index_1();
		(&V_0)->set_index_1(L_0);
		String_t* L_1 = __this->get_Value_0();
		(&V_0)->set_s_0(L_1);
		goto IL_00a2;
	}

IL_0024:
	{
		String_t* L_2 = __this->get_Value_0();
		int32_t L_3 = __this->get_Index_1();
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_4 = V_0;
		int32_t L_5 = L_4.get_length_2();
		NullCheck(L_2);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5)), /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		V_1 = 2;
		goto IL_004d;
	}

IL_004b:
	{
		V_1 = 4;
	}

IL_004d:
	{
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_9 = V_0;
		int32_t L_10 = L_9.get_length_2();
		if (L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = V_1;
		(&V_0)->set_type_3(L_11);
		goto IL_0068;
	}

IL_005f:
	{
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_12 = V_0;
		int32_t L_13 = L_12.get_type_3();
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_00ba;
		}
	}

IL_0068:
	{
		int32_t* L_15 = (&V_0)->get_address_of_length_2();
		int32_t* L_16 = L_15;
		int32_t L_17 = *((int32_t*)L_16);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00ba;
		}
	}
	{
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_19 = V_0;
		int32_t L_20 = L_19.get_length_2();
		if ((((int32_t)L_20) <= ((int32_t)8)))
		{
			goto IL_008b;
		}
	}
	{
		(&V_0)->set_type_3(1);
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_21 = V_0;
		return L_21;
	}

IL_008b:
	{
		Il2CppChar L_22 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)48)));
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_23 = V_0;
		int32_t L_24 = L_23.get_value_4();
		int32_t L_25 = V_3;
		(&V_0)->set_value_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)((int32_t)10))), (int32_t)L_25)));
	}

IL_00a2:
	{
		int32_t L_26 = __this->get_Index_1();
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_27 = V_0;
		int32_t L_28 = L_27.get_length_2();
		int32_t L_29 = __this->get_len_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_28))) < ((int32_t)L_29)))
		{
			goto IL_0024;
		}
	}

IL_00ba:
	{
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_30 = V_0;
		int32_t L_31 = L_30.get_length_2();
		if (L_31)
		{
			goto IL_00cc;
		}
	}
	{
		(&V_0)->set_type_3(3);
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_32 = V_0;
		return L_32;
	}

IL_00cc:
	{
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C  DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  __DTString_GetSubString_m699C79DE88DFBC0BDD9F85C2CDC155ABB1473DC4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	return __DTString_GetSubString_m699C79DE88DFBC0BDD9F85C2CDC155ABB1473DC4(_thisAdjusted, method);
}
// System.Void System.__DTString::ConsumeSubString(System.DTSubString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_ConsumeSubString_mDFAADAA4A5FC450399046DB04CE10A4503961FAA (__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * __this, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  ___sub0, const RuntimeMethod* method)
{
	{
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_0 = ___sub0;
		int32_t L_1 = L_0.get_index_1();
		DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  L_2 = ___sub0;
		int32_t L_3 = L_2.get_length_2();
		__this->set_Index_1(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3)));
		int32_t L_4 = __this->get_Index_1();
		int32_t L_5 = __this->get_len_2();
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_6 = __this->get_Value_0();
		int32_t L_7 = __this->get_Index_1();
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_current_3(L_8);
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void __DTString_ConsumeSubString_mDFAADAA4A5FC450399046DB04CE10A4503961FAA_AdjustorThunk (RuntimeObject * __this, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D  ___sub0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 * _thisAdjusted = reinterpret_cast<__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9 *>(__this + _offset);
	__DTString_ConsumeSubString_mDFAADAA4A5FC450399046DB04CE10A4503961FAA(_thisAdjusted, ___sub0, method);
}
// System.Void System.__DTString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString__cctor_mC97C8C04AED3132252833D2119019C73BF6EFA80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__DTString__cctor_mC97C8C04AED3132252833D2119019C73BF6EFA80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)160));
		((__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_il2cpp_TypeInfo_var))->set_WhiteSpaceChecks_6(L_2);
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
// System.Boolean System.__Filters::FilterAttribute(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __Filters_FilterAttribute_mBF9879ECFB908212C56CAE0B42C9E29BFCB347C1 (__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterAttribute_mBF9879ECFB908212C56CAE0B42C9E29BFCB347C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralE8C2E73741ABBBE9D320E65848D6DB0BCF7D63A5, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA * L_2 = (InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m8A7E7373F5BFA58916AA7A8D99E49AA3C6861031(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, __Filters_FilterAttribute_mBF9879ECFB908212C56CAE0B42C9E29BFCB347C1_RuntimeMethod_var);
	}

IL_0013:
	{
		MemberInfo_t * L_3 = ___m0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)8))))
		{
			goto IL_0160;
		}
	}

IL_002c:
	{
		V_1 = 0;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_8 = ___filterCriteria1;
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		goto IL_0048;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0037;
		throw e;
	}

CATCH_0037:
	{ // begin catch(System.Object)
		String_t* L_9 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralE8C2E73741ABBBE9D320E65848D6DB0BCF7D63A5, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA * L_10 = (InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m8A7E7373F5BFA58916AA7A8D99E49AA3C6861031(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, __Filters_FilterAttribute_mBF9879ECFB908212C56CAE0B42C9E29BFCB347C1_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0048:
	{
		MemberInfo_t * L_11 = ___m0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)8))))
		{
			goto IL_005f;
		}
	}
	{
		MemberInfo_t * L_13 = ___m0;
		NullCheck(((MethodInfo_t *)CastclassClass((RuntimeObject*)L_13, MethodInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_13, MethodInfo_t_il2cpp_TypeInfo_var)));
		V_2 = L_14;
		goto IL_006b;
	}

IL_005f:
	{
		MemberInfo_t * L_15 = ___m0;
		NullCheck(((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)CastclassClass((RuntimeObject*)L_15, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var)));
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, ((ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF *)CastclassClass((RuntimeObject*)L_15, ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF_il2cpp_TypeInfo_var)));
		V_2 = L_16;
	}

IL_006b:
	{
		int32_t L_17 = V_1;
		if (!((int32_t)((int32_t)L_17&(int32_t)7)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)7))) == ((int32_t)((int32_t)((int32_t)L_19&(int32_t)7)))))
		{
			goto IL_007a;
		}
	}
	{
		return (bool)0;
	}

IL_007a:
	{
		int32_t L_20 = V_1;
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_21 = V_2;
		if (((int32_t)((int32_t)L_21&(int32_t)((int32_t)16))))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0088:
	{
		int32_t L_22 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)((int32_t)32))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_23 = V_2;
		if (((int32_t)((int32_t)L_23&(int32_t)((int32_t)32))))
		{
			goto IL_0096;
		}
	}
	{
		return (bool)0;
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		if (!((int32_t)((int32_t)L_24&(int32_t)((int32_t)64))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_25 = V_2;
		if (((int32_t)((int32_t)L_25&(int32_t)((int32_t)64))))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_00a4:
	{
		int32_t L_26 = V_1;
		if (!((int32_t)((int32_t)L_26&(int32_t)((int32_t)1024))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_27 = V_2;
		if (((int32_t)((int32_t)L_27&(int32_t)((int32_t)1024))))
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_00b8:
	{
		int32_t L_28 = V_1;
		if (!((int32_t)((int32_t)L_28&(int32_t)((int32_t)2048))))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_29 = V_2;
		if (((int32_t)((int32_t)L_29&(int32_t)((int32_t)2048))))
		{
			goto IL_00cc;
		}
	}
	{
		return (bool)0;
	}

IL_00cc:
	{
		return (bool)1;
	}

IL_00ce:
	{
		V_3 = 0;
	}

IL_00d0:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_30 = ___filterCriteria1;
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_30, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		goto IL_00ea;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00d9;
		throw e;
	}

CATCH_00d9:
	{ // begin catch(System.Object)
		String_t* L_31 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralE8C2E73741ABBBE9D320E65848D6DB0BCF7D63A5, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA * L_32 = (InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m8A7E7373F5BFA58916AA7A8D99E49AA3C6861031(L_32, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, __Filters_FilterAttribute_mBF9879ECFB908212C56CAE0B42C9E29BFCB347C1_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00ea:
	{
		MemberInfo_t * L_33 = ___m0;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_33, FieldInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_34 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_33, FieldInfo_t_il2cpp_TypeInfo_var)));
		V_4 = L_34;
		int32_t L_35 = V_3;
		if (!((int32_t)((int32_t)L_35&(int32_t)7)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_36 = V_4;
		int32_t L_37 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_36&(int32_t)7))) == ((int32_t)((int32_t)((int32_t)L_37&(int32_t)7)))))
		{
			goto IL_0107;
		}
	}
	{
		return (bool)0;
	}

IL_0107:
	{
		int32_t L_38 = V_3;
		if (!((int32_t)((int32_t)L_38&(int32_t)((int32_t)16))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_39 = V_4;
		if (((int32_t)((int32_t)L_39&(int32_t)((int32_t)16))))
		{
			goto IL_0116;
		}
	}
	{
		return (bool)0;
	}

IL_0116:
	{
		int32_t L_40 = V_3;
		if (!((int32_t)((int32_t)L_40&(int32_t)((int32_t)32))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_41 = V_4;
		if (((int32_t)((int32_t)L_41&(int32_t)((int32_t)32))))
		{
			goto IL_0125;
		}
	}
	{
		return (bool)0;
	}

IL_0125:
	{
		int32_t L_42 = V_3;
		if (!((int32_t)((int32_t)L_42&(int32_t)((int32_t)64))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_43 = V_4;
		if (((int32_t)((int32_t)L_43&(int32_t)((int32_t)64))))
		{
			goto IL_0134;
		}
	}
	{
		return (bool)0;
	}

IL_0134:
	{
		int32_t L_44 = V_3;
		if (!((int32_t)((int32_t)L_44&(int32_t)((int32_t)128))))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_45 = V_4;
		if (((int32_t)((int32_t)L_45&(int32_t)((int32_t)128))))
		{
			goto IL_0149;
		}
	}
	{
		return (bool)0;
	}

IL_0149:
	{
		int32_t L_46 = V_3;
		if (!((int32_t)((int32_t)L_46&(int32_t)((int32_t)8192))))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_47 = V_4;
		if (((int32_t)((int32_t)L_47&(int32_t)((int32_t)8192))))
		{
			goto IL_015e;
		}
	}
	{
		return (bool)0;
	}

IL_015e:
	{
		return (bool)1;
	}

IL_0160:
	{
		return (bool)0;
	}
}
// System.Boolean System.__Filters::FilterName(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __Filters_FilterName_m768C2766720890EE1D07554E3433C0F828D427DB (__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterName_m768C2766720890EE1D07554E3433C0F828D427DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___filterCriteria1;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}

IL_000b:
	{
		String_t* L_2 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralFA8B27A553F27F158C5E4C81F3AA90D26451F922, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA * L_3 = (InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m8A7E7373F5BFA58916AA7A8D99E49AA3C6861031(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, __Filters_FilterName_m768C2766720890EE1D07554E3433C0F828D427DB_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___filterCriteria1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MemberInfo_t * L_7 = ___m0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		V_1 = L_8;
		MemberInfo_t * L_9 = ___m0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_12, ((int32_t)43), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_14 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_004e:
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Il2CppChar L_20 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_24 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_21, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25 = V_1;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		bool L_27 = String_StartsWith_m844A95C9A205A0F951B0C45634E0C222E73D0B49(L_25, L_26, 4, /*hidden argument*/NULL);
		return L_27;
	}

IL_0082:
	{
		String_t* L_28 = V_1;
		String_t* L_29 = V_0;
		NullCheck(L_28);
		bool L_30 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Boolean System.__Filters::FilterIgnoreCase(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __Filters_FilterIgnoreCase_m883976C13C53B21BE3430DE51D4317CBCF89F53A (__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters_FilterIgnoreCase_m883976C13C53B21BE3430DE51D4317CBCF89F53A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___filterCriteria1;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}

IL_000b:
	{
		String_t* L_2 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9(_stringLiteralFA8B27A553F27F158C5E4C81F3AA90D26451F922, /*hidden argument*/NULL);
		InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA * L_3 = (InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA *)il2cpp_codegen_object_new(InvalidFilterCriteriaException_tB11C87F151CD79ACA0837773B9BFD8791CA715BA_il2cpp_TypeInfo_var);
		InvalidFilterCriteriaException__ctor_m8A7E7373F5BFA58916AA7A8D99E49AA3C6861031(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, __Filters_FilterIgnoreCase_m883976C13C53B21BE3430DE51D4317CBCF89F53A_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_4 = ___filterCriteria1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MemberInfo_t * L_7 = ___m0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		V_1 = L_8;
		MemberInfo_t * L_9 = ___m0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_12, ((int32_t)43), /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_14 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_004e:
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Il2CppChar L_20 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_008d;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_24 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_21, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25 = V_1;
		String_t* L_26 = V_0;
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_27, /*hidden argument*/NULL);
		int32_t L_29 = String_Compare_m208E4853037D81DD5C91DCA060C339DADC3A6064(L_25, 0, L_26, 0, L_28, 5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
	}

IL_008d:
	{
		String_t* L_30 = V_0;
		String_t* L_31 = V_1;
		int32_t L_32 = String_Compare_m5BD1EF8904C9B13BEDB7A876B122F117B317B442(L_30, L_31, 5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.__Filters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Filters__ctor_mA9DEA9B853B953C85A78E101A8001E9EE0E66B35 (__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.__Filters::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Filters__cctor_mAC913CDF08E7AB6541101C4B96483BF49C6E2F14 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__Filters__cctor_mAC913CDF08E7AB6541101C4B96483BF49C6E2F14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 * L_0 = (__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34 *)il2cpp_codegen_object_new(__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34_il2cpp_TypeInfo_var);
		__Filters__ctor_mA9DEA9B853B953C85A78E101A8001E9EE0E66B35(L_0, /*hidden argument*/NULL);
		((__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34_StaticFields*)il2cpp_codegen_static_fields_for(__Filters_tDD9D6B7C7A31B12AB3D5CCF1B115DD693F62DB34_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void System.__Il2CppComDelegate::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComDelegate_Finalize_m893C22F7BEDFBDF8F015EA584CC1419D144D2187 (__Il2CppComDelegate_t0A30496F74225C39A0CF7FADB94934C0536120FD * __this, const RuntimeMethod* method)
{
	__Il2CppComObject_Finalize_m98123DBAAA7974D2616F9E90F2574955714CA9A9(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.__Il2CppComObject::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Il2CppComObject_Finalize_m98123DBAAA7974D2616F9E90F2574955714CA9A9 (Il2CppComObject * __this, const RuntimeMethod* method)
{
	if (__this->identity != NULL)
	{
		il2cpp_codegen_il2cpp_com_object_cleanup(__this);
		__this->identity->Release();
		__this->identity = NULL;
	}

	Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_mA248D7D785682F31CDF02FDC1FAB3173EE1B1E19 ()
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowStub_ThrowNotSupportedException_mA248D7D785682F31CDF02FDC1FAB3173EE1B1E19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5 * L_0 = (PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5 *)il2cpp_codegen_object_new(PlatformNotSupportedException_t14FE109377F8FA8B3B2F9A0C4FE3BF10662C73B5_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m651139B17C9EE918551490BC675754EA8EA3E7C7(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ThrowStub_ThrowNotSupportedException_mA248D7D785682F31CDF02FDC1FAB3173EE1B1E19_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t RuntimeFieldHandle_get_Value_m2C81CBF4FC895E7A343C344BE8EE96D9DEBEA3DA_inline (RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_value_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UIntPtr__ctor_mE1AF12EBFF887C9EAE36A1A90EF530B67FA3B75D_inline (uintptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((uintptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Major_m7A6BEEF367674B8C06B15F6675AFF0C32CCEE87C_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Minor_mCBAFA7052D1786A47B4BA971E7193A4EB9A7D059_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Build_m184E3AAE13518CEA172E9C6860E9359D567E64DB_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Version_get_Revision_mB0BADD4E233FA3001FB7BB4795A0A330880453BB_inline (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}

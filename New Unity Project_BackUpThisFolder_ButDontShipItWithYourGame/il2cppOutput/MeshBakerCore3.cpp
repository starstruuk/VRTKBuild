#include "il2cpp-config.h"

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
#include "il2cpp-object-internals.h"

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

// DigitalOpus.MB.Core.MB2_EditorMethodsInterface
struct MB2_EditorMethodsInterface_t2346583498B5D0C92A52CDBDA92A892E9CF56D63;
// DigitalOpus.MB.Core.MB3_TextureCombiner
struct MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0;
// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
struct MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251;
// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialProperty[]
struct MaterialPropertyU5BU5D_tA2AA56C98A0F11E972B9B7576163F23B34FCCDB4;
// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/NonTextureProperties
struct NonTextureProperties_t777A6A7561F0B7ADA5531D490240D687518B6971;
// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/TexPropertyNameColorPair[]
struct TexPropertyNameColorPairU5BU5D_tE0C61A1D7F0BB1E62A2E62144F308F4A35D62789;
// DigitalOpus.MB.Core.MB_TexSet
struct MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C;
// DigitalOpus.MB.Core.MB_TexSet/PipelineVariation
struct PipelineVariation_tC1E0762A264A9315FB29275A8A7501C324106F4C;
// DigitalOpus.MB.Core.MB_TexSet[]
struct MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD;
// DigitalOpus.MB.Core.MatAndTransformToMerged
struct MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142;
// DigitalOpus.MB.Core.MatAndTransformToMerged[]
struct MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A;
// DigitalOpus.MB.Core.MatsAndGOs
struct MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462;
// DigitalOpus.MB.Core.MeshBakerMaterialTexture
struct MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B;
// DigitalOpus.MB.Core.MeshBakerMaterialTexture[]
struct MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28;
// DigitalOpus.MB.Core.ShaderTextureProperty
struct ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3;
// DigitalOpus.MB.Core.TextureBlender
struct TextureBlender_t9BE27C6950DF7F8DA137EE24C1DC93387F415412;
// DigitalOpus.MB.Core.TextureBlender[]
struct TextureBlenderU5BU5D_t3318940B35831AF807B2D0944977DD4E0B179BEA;
// MB2_TextureBakeResults
struct MB2_TextureBakeResults_t0D61B4A10C7389F1A48C75415D52BAD484CC1844;
// MB3_KMeansClustering
struct MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A;
// MB3_KMeansClustering/DataPoint
struct DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119;
// MB3_KMeansClustering/DataPoint[]
struct DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480;
// MB_AtlasesAndRects
struct MB_AtlasesAndRects_t9D7B9453CF5483A7A8B6752E0C526DF3BAE0192E;
// MB_AtlasesAndRects[]
struct MB_AtlasesAndRectsU5BU5D_t1A2B8906C865613996772B650604EAD33C4D0808;
// MB_MaterialAndUVRect
struct MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3;
// MB_MultiMaterial
struct MB_MultiMaterial_t6F76216E5D059B51BBF94C01CB6CC0DB79257C15;
// MB_MultiMaterialTexArray
struct MB_MultiMaterialTexArray_t47ED49D929A860BE5071DFC88210C8BFE6B8A167;
// MB_TexArrayForProperty
struct MB_TexArrayForProperty_tB1C41517AB79378551B78A1B6CB09521821D9C7B;
// MB_TexArrayForProperty[]
struct MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D;
// MB_TexArraySlice
struct MB_TexArraySlice_t5E2105D5BFF0292D2167B1AAEEB59E4DD7BE2206;
// MB_TexArraySliceRendererMatPair
struct MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD;
// MB_TexArraySliceRendererMatPair[]
struct MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1;
// MB_TexArraySlice[]
struct MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646;
// MB_TextureArrayFormat
struct MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6;
// MB_TextureArrayFormatSet
struct MB_TextureArrayFormatSet_tE54821745326A9FFFCC73276B6C616D9CDCCE9E4;
// MB_TextureArrayFormat[]
struct MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38;
// MB_TextureArrayReference
struct MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314;
// MB_TextureArrayReference[]
struct MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61;
// MB_TextureArrayResultMaterial
struct MB_TextureArrayResultMaterial_t32A5964B83560169769B483A909A0987FDAFFE05;
// MB_TextureCombinerRenderTexture
struct MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>
struct Dictionary_2_t21EEB75FDD6BCE8B9F35BD88A0AA9D225D014810;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_TextureCombiner/TemporaryTexture>
struct List_1_tA294941143E9976A2DC3BDC3E4A658B4293B1F27;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet>
struct List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MatAndTransformToMerged>
struct List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647;
// System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty>
struct List_1_t5EBC915A80D194338B7699B1C794F70A939BF3E2;
// System.Collections.Generic.List`1<MB3_KMeansClustering/DataPoint>
struct List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF;
// System.Collections.Generic.List`1<MB_MaterialAndUVRect>
struct List_1_tBA8840C4E7CF0A8B6E19C19289326B9E6619E81C;
// System.Collections.Generic.List`1<MB_TexArrayForProperty>
struct List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A;
// System.Collections.Generic.List`1<MB_TexArraySlice>
struct List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83;
// System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>
struct List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Rect[]
struct RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B;
// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Texture2DArray
struct Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MB2_EditorMethodsInterface_t2346583498B5D0C92A52CDBDA92A892E9CF56D63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MB_Utility_t45F3853AE303AD3AD397ED0F30DDC57720DD95AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t35B976DE901B5423C11705E156938EA27AB402CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1119A9E9F2A3420154BECCDD6A1BAC71B84D1AC5;
IL2CPP_EXTERN_C String_t* _stringLiteral1C6DAB671A1A781164F38BF78F470EA057B9CCCC;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE8163A077E1261F76BB5C396CDA45647967219;
IL2CPP_EXTERN_C String_t* _stringLiteral3CB098B1BF01E955BFE907B5EE28D3CBC38911AC;
IL2CPP_EXTERN_C String_t* _stringLiteral44FB460CECE054549C26EB048260F7DC965C607B;
IL2CPP_EXTERN_C String_t* _stringLiteral49965FA4EE87DEC548C3B24C7B9131EC580ED421;
IL2CPP_EXTERN_C String_t* _stringLiteral547CD2BA3A17B483651496C5BA8C78F1789B5CBD;
IL2CPP_EXTERN_C String_t* _stringLiteral6ABA02DE09AA502E9CFE0C6144D9E8A65611EFDA;
IL2CPP_EXTERN_C String_t* _stringLiteral71C08B660D88620290DF439F4F694EB4D0C33B28;
IL2CPP_EXTERN_C String_t* _stringLiteral79A09665A9492E536BDBD4D8DB7C7339374DAEA9;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3F0261EFE659995A470E469F40133E7FA656BA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF41F39DFD8CF028380994AD4BB11F6EE437AEB;
IL2CPP_EXTERN_C String_t* _stringLiteral83FFD5451A786FE0C0737BF63CB55ADEED0B5819;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8A53BC093D7C7F3F55B5CACBA04876B81F46F;
IL2CPP_EXTERN_C String_t* _stringLiteral8D6C081350C92EE4D419E10558D5341CC61484D1;
IL2CPP_EXTERN_C String_t* _stringLiteral9321B91F8F37544A7272ED374A48FC4BE8625066;
IL2CPP_EXTERN_C String_t* _stringLiteral93DBFA7FA18C0F6AA85C235AA81EB2F2C898F0B6;
IL2CPP_EXTERN_C String_t* _stringLiteral9751389BCF584AA9551C4A4EFF07353386487091;
IL2CPP_EXTERN_C String_t* _stringLiteral99329778AD845E7AD5DB463E85C84DB0B482894B;
IL2CPP_EXTERN_C String_t* _stringLiteral997305CC915D44CAD76820FDC08C59038A60ADF1;
IL2CPP_EXTERN_C String_t* _stringLiteralA1A08CE86D8A2AF150E903536E8229B24F185D5F;
IL2CPP_EXTERN_C String_t* _stringLiteralA38F5D2E2B3EAB3733AF70E18FA9662AF2086E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralA6625DEAFFCF8956BDB38E86E85323291D9FC6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralA7D4AD7B14EC868CB1E0BFAA1CF17E4CD9C1AADE;
IL2CPP_EXTERN_C String_t* _stringLiteralA80AF5BB44A09E6888B6FC2B63120815E7516E8C;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB09175DFFB36B6028C12EF6399605708234E84EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB891169FF1FE89B2BA9177B0628441280F1199F3;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C16A1FF3B5B29574583668F820FA180B18D22A;
IL2CPP_EXTERN_C String_t* _stringLiteralBED9BFD9C45B7EB3675C103B91ADBD7A2140B15A;
IL2CPP_EXTERN_C String_t* _stringLiteralC9BD13C253E4CE648E67F089E90FE9F7D083119C;
IL2CPP_EXTERN_C String_t* _stringLiteralC9F46372E92AE5AE501FCDA5242E60F4D9669331;
IL2CPP_EXTERN_C String_t* _stringLiteralCECEA55F2D79C99F88F6817B87517E09242CE9BB;
IL2CPP_EXTERN_C String_t* _stringLiteralD092432521AAC76E81A64AB968103E236C1DC783;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F27D9AB86D79EB880D4BCBED9F7D3FA5DDB297;
IL2CPP_EXTERN_C String_t* _stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD415C05B93E3B9CC8D9B1F2DE1954BA03216A4A0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF50B250C89359A85732782DC93AD1E133BF4B7CC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m1F9576DC1C4A81D31D05BDDEBCE134AA97FF4075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mC7A785FC805DC2AAF33ACC6863244352CD0B8052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD202DDB933765AC3989986C7FA3C14E6E9A191EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m101E88A6605F885304081FAE2AFCEA1950FA100E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1225A59A8213715A508D7ED9FA150A16B93555E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m66CBC901FEDA6CC13FB5A0639067316A9BE3AD4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m9E02B82AAAE9DD07C5574663F89D520A1643852C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4BD8E7B768DF04D792DBE19314B7D7B23837A544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8512B464F9D6F816B95ECBB0A7A058077B9EE0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m935F80328F8629131001B9C8B572343786A00F77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9483FF25C826AAB6281204FD6CC40514206F65EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD2278ECC1DFA9F157785D300E40FAF78A8712EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD3FB2818BB18D53E711CD68C4B85E604151192D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m70D5F56C177A90C0E65E60E94DE9ECD4630E6E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA61C8F11E4F47F828FC3E31E04C25BF06F23B2A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2CD6333FDC72DB5495C760FD838836A592528975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m325D84535F1B46C3C5A93C92159C2A1D68BE5B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DataPoint__ctor_m8C69F7E199D5C5ED607B6928898CF3AE7DF842B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB3_KMeansClustering_AnyAreEmpty_m60D8694464E875FBA408D1895F45E928ADB1502D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB3_KMeansClustering_Cluster_m91AEE856C5314D72C1FB5ED3AB41E8F70BF869A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB3_KMeansClustering_ElucidanDistance_mF68A58C027FEF3255BF6D060875CDDB6B0B2F6D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB3_KMeansClustering_GetCluster_mB51288ABF85D5F9BCA1F4708AFD97AA0F9B8602A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB3_KMeansClustering_InitializeCentroids_m4EFB731DF8D11D5CBBC1C13B8458BF8629A24C20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB3_KMeansClustering_UpdateClusterMembership_m7833BF74D56BC01C7D6537B2E2F6AEC2AEF1F38F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB3_KMeansClustering_UpdateDataPointMeans_m44AF29BF7BDF4DD768A41344C5D407B8210BB3DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB3_KMeansClustering__ctor_mA21530C879D1AD70E3DB83455FBD2264387BFD46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_MaterialAndUVRect_Equals_mA5982CC5E38657F115640335879B4604DAB47468_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_MultiMaterialTexArray__ctor_m2F2AE15E458C6FA773E4E31CDC4225FF79FF194F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_MultiMaterial__ctor_m63A518281947D0B7824F9E9B62F2CC1FACB21460_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TexArrayForProperty__ctor_m73D6374794AA571C31B1CA5DB5F363BE93EA5471_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TexArraySlice_ContainsMaterial_mCDA67FDBEC00BF83D2541CBF5FDC464612E03CF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TexArraySlice_GetAllUsedMaterials_mDC17804FF752DEE2ABB13285D907BBCBC3F89F37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TexArraySlice_GetAllUsedRenderers_m5DBE0E12484F2878581592C2E597890A8BB916F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TexArraySlice__ctor_m58AA7E46CBA3AB99B701DC4D7879FFEC569039A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TextureArrayFormatSet_ValidateTextureImporterFormatsExistsForTextureFormats_mCEFEF56C3F2F01886E32C7B0F1CC207D3E5AFB86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m6ED17081A30F740EED54281FA1EA6FE3A14F34F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TextureCombinerRenderTexture_DoRenderAtlas_m80C091C43CE1672DB6A5A376AAC020D32827270E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TextureCombinerRenderTexture_OnRenderObject_m28664C8C71B03B56B4BF6A7E12AAEFE9DA72AF14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TextureCombinerRenderTexture_YisFlipped_mB24583B38290325F99CC00D2DF972274784422DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MB_TextureCombinerRenderTexture__printTexture_m191A192D99C30C93DCF65F5DDB678FA43F6608AD_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28;
struct MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38;
struct MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// DigitalOpus.MB.Core.MatsAndGOs
struct  MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MatAndTransformToMerged> DigitalOpus.MB.Core.MatsAndGOs::mats
	List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647 * ___mats_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> DigitalOpus.MB.Core.MatsAndGOs::gos
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___gos_1;

public:
	inline static int32_t get_offset_of_mats_0() { return static_cast<int32_t>(offsetof(MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462, ___mats_0)); }
	inline List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647 * get_mats_0() const { return ___mats_0; }
	inline List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647 ** get_address_of_mats_0() { return &___mats_0; }
	inline void set_mats_0(List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647 * value)
	{
		___mats_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mats_0), (void*)value);
	}

	inline static int32_t get_offset_of_gos_1() { return static_cast<int32_t>(offsetof(MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462, ___gos_1)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_gos_1() const { return ___gos_1; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_gos_1() { return &___gos_1; }
	inline void set_gos_1(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___gos_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gos_1), (void*)value);
	}
};


// DigitalOpus.MB.Core.ShaderTextureProperty
struct  ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3  : public RuntimeObject
{
public:
	// System.String DigitalOpus.MB.Core.ShaderTextureProperty::name
	String_t* ___name_0;
	// System.Boolean DigitalOpus.MB.Core.ShaderTextureProperty::isNormalMap
	bool ___isNormalMap_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_isNormalMap_1() { return static_cast<int32_t>(offsetof(ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3, ___isNormalMap_1)); }
	inline bool get_isNormalMap_1() const { return ___isNormalMap_1; }
	inline bool* get_address_of_isNormalMap_1() { return &___isNormalMap_1; }
	inline void set_isNormalMap_1(bool value)
	{
		___isNormalMap_1 = value;
	}
};


// MB3_KMeansClustering
struct  MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MB3_KMeansClustering_DataPoint> MB3_KMeansClustering::_normalizedDataToCluster
	List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * ____normalizedDataToCluster_0;
	// UnityEngine.Vector3[] MB3_KMeansClustering::_clusters
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____clusters_1;
	// System.Int32 MB3_KMeansClustering::_numberOfClusters
	int32_t ____numberOfClusters_2;

public:
	inline static int32_t get_offset_of__normalizedDataToCluster_0() { return static_cast<int32_t>(offsetof(MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A, ____normalizedDataToCluster_0)); }
	inline List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * get__normalizedDataToCluster_0() const { return ____normalizedDataToCluster_0; }
	inline List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF ** get_address_of__normalizedDataToCluster_0() { return &____normalizedDataToCluster_0; }
	inline void set__normalizedDataToCluster_0(List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * value)
	{
		____normalizedDataToCluster_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____normalizedDataToCluster_0), (void*)value);
	}

	inline static int32_t get_offset_of__clusters_1() { return static_cast<int32_t>(offsetof(MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A, ____clusters_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__clusters_1() const { return ____clusters_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__clusters_1() { return &____clusters_1; }
	inline void set__clusters_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____clusters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clusters_1), (void*)value);
	}

	inline static int32_t get_offset_of__numberOfClusters_2() { return static_cast<int32_t>(offsetof(MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A, ____numberOfClusters_2)); }
	inline int32_t get__numberOfClusters_2() const { return ____numberOfClusters_2; }
	inline int32_t* get_address_of__numberOfClusters_2() { return &____numberOfClusters_2; }
	inline void set__numberOfClusters_2(int32_t value)
	{
		____numberOfClusters_2 = value;
	}
};


// MB_AtlasesAndRects
struct  MB_AtlasesAndRects_t9D7B9453CF5483A7A8B6752E0C526DF3BAE0192E  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D[] MB_AtlasesAndRects::atlases
	Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* ___atlases_0;
	// System.Collections.Generic.List`1<MB_MaterialAndUVRect> MB_AtlasesAndRects::mat2rect_map
	List_1_tBA8840C4E7CF0A8B6E19C19289326B9E6619E81C * ___mat2rect_map_1;
	// System.String[] MB_AtlasesAndRects::texPropertyNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___texPropertyNames_2;

public:
	inline static int32_t get_offset_of_atlases_0() { return static_cast<int32_t>(offsetof(MB_AtlasesAndRects_t9D7B9453CF5483A7A8B6752E0C526DF3BAE0192E, ___atlases_0)); }
	inline Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* get_atlases_0() const { return ___atlases_0; }
	inline Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9** get_address_of_atlases_0() { return &___atlases_0; }
	inline void set_atlases_0(Texture2DU5BU5D_tCAC03055C735C020BAFC218D55183CF03E74C1C9* value)
	{
		___atlases_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atlases_0), (void*)value);
	}

	inline static int32_t get_offset_of_mat2rect_map_1() { return static_cast<int32_t>(offsetof(MB_AtlasesAndRects_t9D7B9453CF5483A7A8B6752E0C526DF3BAE0192E, ___mat2rect_map_1)); }
	inline List_1_tBA8840C4E7CF0A8B6E19C19289326B9E6619E81C * get_mat2rect_map_1() const { return ___mat2rect_map_1; }
	inline List_1_tBA8840C4E7CF0A8B6E19C19289326B9E6619E81C ** get_address_of_mat2rect_map_1() { return &___mat2rect_map_1; }
	inline void set_mat2rect_map_1(List_1_tBA8840C4E7CF0A8B6E19C19289326B9E6619E81C * value)
	{
		___mat2rect_map_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat2rect_map_1), (void*)value);
	}

	inline static int32_t get_offset_of_texPropertyNames_2() { return static_cast<int32_t>(offsetof(MB_AtlasesAndRects_t9D7B9453CF5483A7A8B6752E0C526DF3BAE0192E, ___texPropertyNames_2)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_texPropertyNames_2() const { return ___texPropertyNames_2; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_texPropertyNames_2() { return &___texPropertyNames_2; }
	inline void set_texPropertyNames_2(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___texPropertyNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texPropertyNames_2), (void*)value);
	}
};


// MB_MultiMaterial
struct  MB_MultiMaterial_t6F76216E5D059B51BBF94C01CB6CC0DB79257C15  : public RuntimeObject
{
public:
	// UnityEngine.Material MB_MultiMaterial::combinedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___combinedMaterial_0;
	// System.Boolean MB_MultiMaterial::considerMeshUVs
	bool ___considerMeshUVs_1;
	// System.Collections.Generic.List`1<UnityEngine.Material> MB_MultiMaterial::sourceMaterials
	List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * ___sourceMaterials_2;

public:
	inline static int32_t get_offset_of_combinedMaterial_0() { return static_cast<int32_t>(offsetof(MB_MultiMaterial_t6F76216E5D059B51BBF94C01CB6CC0DB79257C15, ___combinedMaterial_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_combinedMaterial_0() const { return ___combinedMaterial_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_combinedMaterial_0() { return &___combinedMaterial_0; }
	inline void set_combinedMaterial_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___combinedMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___combinedMaterial_0), (void*)value);
	}

	inline static int32_t get_offset_of_considerMeshUVs_1() { return static_cast<int32_t>(offsetof(MB_MultiMaterial_t6F76216E5D059B51BBF94C01CB6CC0DB79257C15, ___considerMeshUVs_1)); }
	inline bool get_considerMeshUVs_1() const { return ___considerMeshUVs_1; }
	inline bool* get_address_of_considerMeshUVs_1() { return &___considerMeshUVs_1; }
	inline void set_considerMeshUVs_1(bool value)
	{
		___considerMeshUVs_1 = value;
	}

	inline static int32_t get_offset_of_sourceMaterials_2() { return static_cast<int32_t>(offsetof(MB_MultiMaterial_t6F76216E5D059B51BBF94C01CB6CC0DB79257C15, ___sourceMaterials_2)); }
	inline List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * get_sourceMaterials_2() const { return ___sourceMaterials_2; }
	inline List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA ** get_address_of_sourceMaterials_2() { return &___sourceMaterials_2; }
	inline void set_sourceMaterials_2(List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * value)
	{
		___sourceMaterials_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMaterials_2), (void*)value);
	}
};


// MB_MultiMaterialTexArray
struct  MB_MultiMaterialTexArray_t47ED49D929A860BE5071DFC88210C8BFE6B8A167  : public RuntimeObject
{
public:
	// UnityEngine.Material MB_MultiMaterialTexArray::combinedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___combinedMaterial_0;
	// System.Collections.Generic.List`1<MB_TexArraySlice> MB_MultiMaterialTexArray::slices
	List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83 * ___slices_1;
	// System.Collections.Generic.List`1<MB_TexArrayForProperty> MB_MultiMaterialTexArray::textureProperties
	List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A * ___textureProperties_2;

public:
	inline static int32_t get_offset_of_combinedMaterial_0() { return static_cast<int32_t>(offsetof(MB_MultiMaterialTexArray_t47ED49D929A860BE5071DFC88210C8BFE6B8A167, ___combinedMaterial_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_combinedMaterial_0() const { return ___combinedMaterial_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_combinedMaterial_0() { return &___combinedMaterial_0; }
	inline void set_combinedMaterial_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___combinedMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___combinedMaterial_0), (void*)value);
	}

	inline static int32_t get_offset_of_slices_1() { return static_cast<int32_t>(offsetof(MB_MultiMaterialTexArray_t47ED49D929A860BE5071DFC88210C8BFE6B8A167, ___slices_1)); }
	inline List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83 * get_slices_1() const { return ___slices_1; }
	inline List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83 ** get_address_of_slices_1() { return &___slices_1; }
	inline void set_slices_1(List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83 * value)
	{
		___slices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slices_1), (void*)value);
	}

	inline static int32_t get_offset_of_textureProperties_2() { return static_cast<int32_t>(offsetof(MB_MultiMaterialTexArray_t47ED49D929A860BE5071DFC88210C8BFE6B8A167, ___textureProperties_2)); }
	inline List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A * get_textureProperties_2() const { return ___textureProperties_2; }
	inline List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A ** get_address_of_textureProperties_2() { return &___textureProperties_2; }
	inline void set_textureProperties_2(List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A * value)
	{
		___textureProperties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureProperties_2), (void*)value);
	}
};


// MB_TexArrayForProperty
struct  MB_TexArrayForProperty_tB1C41517AB79378551B78A1B6CB09521821D9C7B  : public RuntimeObject
{
public:
	// System.String MB_TexArrayForProperty::texPropertyName
	String_t* ___texPropertyName_0;
	// MB_TextureArrayReference[] MB_TexArrayForProperty::formats
	MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61* ___formats_1;

public:
	inline static int32_t get_offset_of_texPropertyName_0() { return static_cast<int32_t>(offsetof(MB_TexArrayForProperty_tB1C41517AB79378551B78A1B6CB09521821D9C7B, ___texPropertyName_0)); }
	inline String_t* get_texPropertyName_0() const { return ___texPropertyName_0; }
	inline String_t** get_address_of_texPropertyName_0() { return &___texPropertyName_0; }
	inline void set_texPropertyName_0(String_t* value)
	{
		___texPropertyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texPropertyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_formats_1() { return static_cast<int32_t>(offsetof(MB_TexArrayForProperty_tB1C41517AB79378551B78A1B6CB09521821D9C7B, ___formats_1)); }
	inline MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61* get_formats_1() const { return ___formats_1; }
	inline MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61** get_address_of_formats_1() { return &___formats_1; }
	inline void set_formats_1(MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61* value)
	{
		___formats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formats_1), (void*)value);
	}
};


// MB_TexArraySlice
struct  MB_TexArraySlice_t5E2105D5BFF0292D2167B1AAEEB59E4DD7BE2206  : public RuntimeObject
{
public:
	// System.Boolean MB_TexArraySlice::considerMeshUVs
	bool ___considerMeshUVs_0;
	// System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair> MB_TexArraySlice::sourceMaterials
	List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * ___sourceMaterials_1;

public:
	inline static int32_t get_offset_of_considerMeshUVs_0() { return static_cast<int32_t>(offsetof(MB_TexArraySlice_t5E2105D5BFF0292D2167B1AAEEB59E4DD7BE2206, ___considerMeshUVs_0)); }
	inline bool get_considerMeshUVs_0() const { return ___considerMeshUVs_0; }
	inline bool* get_address_of_considerMeshUVs_0() { return &___considerMeshUVs_0; }
	inline void set_considerMeshUVs_0(bool value)
	{
		___considerMeshUVs_0 = value;
	}

	inline static int32_t get_offset_of_sourceMaterials_1() { return static_cast<int32_t>(offsetof(MB_TexArraySlice_t5E2105D5BFF0292D2167B1AAEEB59E4DD7BE2206, ___sourceMaterials_1)); }
	inline List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * get_sourceMaterials_1() const { return ___sourceMaterials_1; }
	inline List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A ** get_address_of_sourceMaterials_1() { return &___sourceMaterials_1; }
	inline void set_sourceMaterials_1(List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * value)
	{
		___sourceMaterials_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMaterials_1), (void*)value);
	}
};


// MB_TexArraySliceRendererMatPair
struct  MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD  : public RuntimeObject
{
public:
	// UnityEngine.Material MB_TexArraySliceRendererMatPair::sourceMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___sourceMaterial_0;
	// UnityEngine.GameObject MB_TexArraySliceRendererMatPair::renderer
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___renderer_1;

public:
	inline static int32_t get_offset_of_sourceMaterial_0() { return static_cast<int32_t>(offsetof(MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD, ___sourceMaterial_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_sourceMaterial_0() const { return ___sourceMaterial_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_sourceMaterial_0() { return &___sourceMaterial_0; }
	inline void set_sourceMaterial_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___sourceMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMaterial_0), (void*)value);
	}

	inline static int32_t get_offset_of_renderer_1() { return static_cast<int32_t>(offsetof(MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD, ___renderer_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_renderer_1() const { return ___renderer_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_renderer_1() { return &___renderer_1; }
	inline void set_renderer_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___renderer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderer_1), (void*)value);
	}
};


// MB_TextureArrayReference
struct  MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314  : public RuntimeObject
{
public:
	// System.String MB_TextureArrayReference::texFromatSetName
	String_t* ___texFromatSetName_0;
	// UnityEngine.Texture2DArray MB_TextureArrayReference::texArray
	Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * ___texArray_1;

public:
	inline static int32_t get_offset_of_texFromatSetName_0() { return static_cast<int32_t>(offsetof(MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314, ___texFromatSetName_0)); }
	inline String_t* get_texFromatSetName_0() const { return ___texFromatSetName_0; }
	inline String_t** get_address_of_texFromatSetName_0() { return &___texFromatSetName_0; }
	inline void set_texFromatSetName_0(String_t* value)
	{
		___texFromatSetName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texFromatSetName_0), (void*)value);
	}

	inline static int32_t get_offset_of_texArray_1() { return static_cast<int32_t>(offsetof(MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314, ___texArray_1)); }
	inline Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * get_texArray_1() const { return ___texArray_1; }
	inline Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 ** get_address_of_texArray_1() { return &___texArray_1; }
	inline void set_texArray_1(Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * value)
	{
		___texArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texArray_1), (void*)value);
	}
};


// MB_TextureArrayResultMaterial
struct  MB_TextureArrayResultMaterial_t32A5964B83560169769B483A909A0987FDAFFE05  : public RuntimeObject
{
public:
	// MB_AtlasesAndRects[] MB_TextureArrayResultMaterial::slices
	MB_AtlasesAndRectsU5BU5D_t1A2B8906C865613996772B650604EAD33C4D0808* ___slices_0;

public:
	inline static int32_t get_offset_of_slices_0() { return static_cast<int32_t>(offsetof(MB_TextureArrayResultMaterial_t32A5964B83560169769B483A909A0987FDAFFE05, ___slices_0)); }
	inline MB_AtlasesAndRectsU5BU5D_t1A2B8906C865613996772B650604EAD33C4D0808* get_slices_0() const { return ___slices_0; }
	inline MB_AtlasesAndRectsU5BU5D_t1A2B8906C865613996772B650604EAD33C4D0808** get_address_of_slices_0() { return &___slices_0; }
	inline void set_slices_0(MB_AtlasesAndRectsU5BU5D_t1A2B8906C865613996772B650604EAD33C4D0808* value)
	{
		___slices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slices_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet>
struct  List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2, ____items_1)); }
	inline MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD* get__items_1() const { return ____items_1; }
	inline MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2_StaticFields, ____emptyArray_5)); }
	inline MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MB_TexSetU5BU5D_tE6F9C6EA85F365D488E0DD2670EB104B67631CAD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MatAndTransformToMerged>
struct  List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647, ____items_1)); }
	inline MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A* get__items_1() const { return ____items_1; }
	inline MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647_StaticFields, ____emptyArray_5)); }
	inline MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MatAndTransformToMergedU5BU5D_t427D7BABCDAC97CE3AEFC394746FA5D100227C8A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MB3_KMeansClustering_DataPoint>
struct  List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF, ____items_1)); }
	inline DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480* get__items_1() const { return ____items_1; }
	inline DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF_StaticFields, ____emptyArray_5)); }
	inline DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DataPointU5BU5D_tDA710CA7F95D812681E18627284AD84C6D509480* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MB_TexArrayForProperty>
struct  List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A, ____items_1)); }
	inline MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D* get__items_1() const { return ____items_1; }
	inline MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A_StaticFields, ____emptyArray_5)); }
	inline MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MB_TexArrayForPropertyU5BU5D_t2FE05B7FD20D70A875A5C162834FF187EC93330D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MB_TexArraySlice>
struct  List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83, ____items_1)); }
	inline MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646* get__items_1() const { return ____items_1; }
	inline MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83_StaticFields, ____emptyArray_5)); }
	inline MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MB_TexArraySliceU5BU5D_tF5AF82A6AED05F3D561A14490D531D2C59EC3646* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>
struct  List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A, ____items_1)); }
	inline MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1* get__items_1() const { return ____items_1; }
	inline MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A_StaticFields, ____emptyArray_5)); }
	inline MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MB_TexArraySliceRendererMatPairU5BU5D_t5DF9C60E496A249D9E853B5F9D320216C65B9AF1* value)
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


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Material>
struct  List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA, ____items_1)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct  List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7, ____items_1)); }
	inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* get__items_1() const { return ____items_1; }
	inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7_StaticFields, ____emptyArray_5)); }
	inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
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

// DigitalOpus.MB.Core.DRect
struct  DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 
{
public:
	// System.Double DigitalOpus.MB.Core.DRect::x
	double ___x_0;
	// System.Double DigitalOpus.MB.Core.DRect::y
	double ___y_1;
	// System.Double DigitalOpus.MB.Core.DRect::width
	double ___width_2;
	// System.Double DigitalOpus.MB.Core.DRect::height
	double ___height_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338, ___width_2)); }
	inline double get_width_2() const { return ___width_2; }
	inline double* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(double value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338, ___height_3)); }
	inline double get_height_3() const { return ___height_3; }
	inline double* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(double value)
	{
		___height_3 = value;
	}
};


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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// DigitalOpus.MB.Core.MB2_LogLevel
struct  MB2_LogLevel_tEDB576D7369C83897F41C161D0B88E86249CDD76 
{
public:
	// System.Int32 DigitalOpus.MB.Core.MB2_LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MB2_LogLevel_tEDB576D7369C83897F41C161D0B88E86249CDD76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum
struct  MB2_PackingAlgorithmEnum_t628B01DB040561A41973B47C355FDFEA99CE2C55 
{
public:
	// System.Int32 DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MB2_PackingAlgorithmEnum_t628B01DB040561A41973B47C355FDFEA99CE2C55, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DigitalOpus.MB.Core.MB_TextureTilingTreatment
struct  MB_TextureTilingTreatment_tBC6A3EDCCAB36670021380C90F01920A271F5894 
{
public:
	// System.Int32 DigitalOpus.MB.Core.MB_TextureTilingTreatment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MB_TextureTilingTreatment_tBC6A3EDCCAB36670021380C90F01920A271F5894, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DigitalOpus.MB.Core.MatAndTransformToMerged
struct  MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142  : public RuntimeObject
{
public:
	// UnityEngine.Material DigitalOpus.MB.Core.MatAndTransformToMerged::mat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mat_0;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MatAndTransformToMerged::<obUVRectIfTilingSame>k__BackingField
	DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  ___U3CobUVRectIfTilingSameU3Ek__BackingField_1;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MatAndTransformToMerged::<samplingRectMatAndUVTiling>k__BackingField
	DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  ___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MatAndTransformToMerged::<materialTiling>k__BackingField
	DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  ___U3CmaterialTilingU3Ek__BackingField_3;
	// System.String DigitalOpus.MB.Core.MatAndTransformToMerged::objName
	String_t* ___objName_4;

public:
	inline static int32_t get_offset_of_mat_0() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142, ___mat_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_mat_0() const { return ___mat_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_mat_0() { return &___mat_0; }
	inline void set_mat_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___mat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CobUVRectIfTilingSameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142, ___U3CobUVRectIfTilingSameU3Ek__BackingField_1)); }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  get_U3CobUVRectIfTilingSameU3Ek__BackingField_1() const { return ___U3CobUVRectIfTilingSameU3Ek__BackingField_1; }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 * get_address_of_U3CobUVRectIfTilingSameU3Ek__BackingField_1() { return &___U3CobUVRectIfTilingSameU3Ek__BackingField_1; }
	inline void set_U3CobUVRectIfTilingSameU3Ek__BackingField_1(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  value)
	{
		___U3CobUVRectIfTilingSameU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142, ___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2)); }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  get_U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2() const { return ___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2; }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 * get_address_of_U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2() { return &___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2; }
	inline void set_U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  value)
	{
		___U3CsamplingRectMatAndUVTilingU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialTilingU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142, ___U3CmaterialTilingU3Ek__BackingField_3)); }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  get_U3CmaterialTilingU3Ek__BackingField_3() const { return ___U3CmaterialTilingU3Ek__BackingField_3; }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 * get_address_of_U3CmaterialTilingU3Ek__BackingField_3() { return &___U3CmaterialTilingU3Ek__BackingField_3; }
	inline void set_U3CmaterialTilingU3Ek__BackingField_3(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  value)
	{
		___U3CmaterialTilingU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_objName_4() { return static_cast<int32_t>(offsetof(MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142, ___objName_4)); }
	inline String_t* get_objName_4() const { return ___objName_4; }
	inline String_t** get_address_of_objName_4() { return &___objName_4; }
	inline void set_objName_4(String_t* value)
	{
		___objName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objName_4), (void*)value);
	}
};


// DigitalOpus.MB.Core.MeshBakerMaterialTexture
struct  MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D DigitalOpus.MB.Core.MeshBakerMaterialTexture::_t
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____t_0;
	// System.Single DigitalOpus.MB.Core.MeshBakerMaterialTexture::texelDensity
	float ___texelDensity_1;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MeshBakerMaterialTexture::encapsulatingSamplingRect
	DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  ___encapsulatingSamplingRect_3;
	// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MeshBakerMaterialTexture::<matTilingRect>k__BackingField
	DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  ___U3CmatTilingRectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__t_0() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B, ____t_0)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__t_0() const { return ____t_0; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__t_0() { return &____t_0; }
	inline void set__t_0(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____t_0), (void*)value);
	}

	inline static int32_t get_offset_of_texelDensity_1() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B, ___texelDensity_1)); }
	inline float get_texelDensity_1() const { return ___texelDensity_1; }
	inline float* get_address_of_texelDensity_1() { return &___texelDensity_1; }
	inline void set_texelDensity_1(float value)
	{
		___texelDensity_1 = value;
	}

	inline static int32_t get_offset_of_encapsulatingSamplingRect_3() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B, ___encapsulatingSamplingRect_3)); }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  get_encapsulatingSamplingRect_3() const { return ___encapsulatingSamplingRect_3; }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 * get_address_of_encapsulatingSamplingRect_3() { return &___encapsulatingSamplingRect_3; }
	inline void set_encapsulatingSamplingRect_3(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  value)
	{
		___encapsulatingSamplingRect_3 = value;
	}

	inline static int32_t get_offset_of_U3CmatTilingRectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B, ___U3CmatTilingRectU3Ek__BackingField_4)); }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  get_U3CmatTilingRectU3Ek__BackingField_4() const { return ___U3CmatTilingRectU3Ek__BackingField_4; }
	inline DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 * get_address_of_U3CmatTilingRectU3Ek__BackingField_4() { return &___U3CmatTilingRectU3Ek__BackingField_4; }
	inline void set_U3CmatTilingRectU3Ek__BackingField_4(DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  value)
	{
		___U3CmatTilingRectU3Ek__BackingField_4 = value;
	}
};

struct MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B_StaticFields
{
public:
	// System.Boolean DigitalOpus.MB.Core.MeshBakerMaterialTexture::readyToBuildAtlases
	bool ___readyToBuildAtlases_2;

public:
	inline static int32_t get_offset_of_readyToBuildAtlases_2() { return static_cast<int32_t>(offsetof(MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B_StaticFields, ___readyToBuildAtlases_2)); }
	inline bool get_readyToBuildAtlases_2() const { return ___readyToBuildAtlases_2; }
	inline bool* get_address_of_readyToBuildAtlases_2() { return &___readyToBuildAtlases_2; }
	inline void set_readyToBuildAtlases_2(bool value)
	{
		___readyToBuildAtlases_2 = value;
	}
};


// MB2_TextureBakeResults_ResultType
struct  ResultType_t1F6BF240DD0B3896B6D60C00F63953DA37338BCE 
{
public:
	// System.Int32 MB2_TextureBakeResults_ResultType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultType_t1F6BF240DD0B3896B6D60C00F63953DA37338BCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MB3_KMeansClustering_DataPoint
struct  DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 MB3_KMeansClustering_DataPoint::center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_0;
	// UnityEngine.GameObject MB3_KMeansClustering_DataPoint::gameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject_1;
	// System.Int32 MB3_KMeansClustering_DataPoint::Cluster
	int32_t ___Cluster_2;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119, ___center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_center_0() const { return ___center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119, ___gameObject_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameObject_1() const { return ___gameObject_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_Cluster_2() { return static_cast<int32_t>(offsetof(DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119, ___Cluster_2)); }
	inline int32_t get_Cluster_2() const { return ___Cluster_2; }
	inline int32_t* get_address_of_Cluster_2() { return &___Cluster_2; }
	inline void set_Cluster_2(int32_t value)
	{
		___Cluster_2 = value;
	}
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

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FilterMode
struct  FilterMode_t6590B4B0BAE2BBBCABA8E1E93FA07A052B3261AF 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_t6590B4B0BAE2BBBCABA8E1E93FA07A052B3261AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t2AB1B77FBD247648292FBBE1182F12B5FC47AF85 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t2AB1B77FBD247648292FBBE1182F12B5FC47AF85, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t8AC763BD80806A9175C6AA8D33D6BABAD83E950F 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t8AC763BD80806A9175C6AA8D33D6BABAD83E950F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DigitalOpus.MB.Core.MB3_TextureCombiner
struct  MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MB2_LogLevel DigitalOpus.MB.Core.MB3_TextureCombiner::LOG_LEVEL
	int32_t ___LOG_LEVEL_0;
	// MB2_TextureBakeResults DigitalOpus.MB.Core.MB3_TextureCombiner::_textureBakeResults
	MB2_TextureBakeResults_t0D61B4A10C7389F1A48C75415D52BAD484CC1844 * ____textureBakeResults_1;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_atlasPadding
	int32_t ____atlasPadding_2;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_maxAtlasSize
	int32_t ____maxAtlasSize_3;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_maxAtlasWidthOverride
	int32_t ____maxAtlasWidthOverride_4;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_maxAtlasHeightOverride
	int32_t ____maxAtlasHeightOverride_5;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_useMaxAtlasWidthOverride
	bool ____useMaxAtlasWidthOverride_6;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_useMaxAtlasHeightOverride
	bool ____useMaxAtlasHeightOverride_7;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_resizePowerOfTwoTextures
	bool ____resizePowerOfTwoTextures_8;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_fixOutOfBoundsUVs
	bool ____fixOutOfBoundsUVs_9;
	// System.Int32 DigitalOpus.MB.Core.MB3_TextureCombiner::_maxTilingBakeSize
	int32_t ____maxTilingBakeSize_10;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_saveAtlasesAsAssets
	bool ____saveAtlasesAsAssets_11;
	// MB2_TextureBakeResults_ResultType DigitalOpus.MB.Core.MB3_TextureCombiner::_resultType
	int32_t ____resultType_12;
	// DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum DigitalOpus.MB.Core.MB3_TextureCombiner::_packingAlgorithm
	int32_t ____packingAlgorithm_13;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_meshBakerTexturePackerForcePowerOfTwo
	bool ____meshBakerTexturePackerForcePowerOfTwo_14;
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> DigitalOpus.MB.Core.MB3_TextureCombiner::_customShaderPropNames
	List_1_t5EBC915A80D194338B7699B1C794F70A939BF3E2 * ____customShaderPropNames_15;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_normalizeTexelDensity
	bool ____normalizeTexelDensity_16;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_considerNonTextureProperties
	bool ____considerNonTextureProperties_17;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize
	bool ____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18;
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_TextureCombiner_TemporaryTexture> DigitalOpus.MB.Core.MB3_TextureCombiner::_temporaryTextures
	List_1_tA294941143E9976A2DC3BDC3E4A658B4293B1F27 * ____temporaryTextures_19;

public:
	inline static int32_t get_offset_of_LOG_LEVEL_0() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ___LOG_LEVEL_0)); }
	inline int32_t get_LOG_LEVEL_0() const { return ___LOG_LEVEL_0; }
	inline int32_t* get_address_of_LOG_LEVEL_0() { return &___LOG_LEVEL_0; }
	inline void set_LOG_LEVEL_0(int32_t value)
	{
		___LOG_LEVEL_0 = value;
	}

	inline static int32_t get_offset_of__textureBakeResults_1() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____textureBakeResults_1)); }
	inline MB2_TextureBakeResults_t0D61B4A10C7389F1A48C75415D52BAD484CC1844 * get__textureBakeResults_1() const { return ____textureBakeResults_1; }
	inline MB2_TextureBakeResults_t0D61B4A10C7389F1A48C75415D52BAD484CC1844 ** get_address_of__textureBakeResults_1() { return &____textureBakeResults_1; }
	inline void set__textureBakeResults_1(MB2_TextureBakeResults_t0D61B4A10C7389F1A48C75415D52BAD484CC1844 * value)
	{
		____textureBakeResults_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textureBakeResults_1), (void*)value);
	}

	inline static int32_t get_offset_of__atlasPadding_2() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____atlasPadding_2)); }
	inline int32_t get__atlasPadding_2() const { return ____atlasPadding_2; }
	inline int32_t* get_address_of__atlasPadding_2() { return &____atlasPadding_2; }
	inline void set__atlasPadding_2(int32_t value)
	{
		____atlasPadding_2 = value;
	}

	inline static int32_t get_offset_of__maxAtlasSize_3() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____maxAtlasSize_3)); }
	inline int32_t get__maxAtlasSize_3() const { return ____maxAtlasSize_3; }
	inline int32_t* get_address_of__maxAtlasSize_3() { return &____maxAtlasSize_3; }
	inline void set__maxAtlasSize_3(int32_t value)
	{
		____maxAtlasSize_3 = value;
	}

	inline static int32_t get_offset_of__maxAtlasWidthOverride_4() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____maxAtlasWidthOverride_4)); }
	inline int32_t get__maxAtlasWidthOverride_4() const { return ____maxAtlasWidthOverride_4; }
	inline int32_t* get_address_of__maxAtlasWidthOverride_4() { return &____maxAtlasWidthOverride_4; }
	inline void set__maxAtlasWidthOverride_4(int32_t value)
	{
		____maxAtlasWidthOverride_4 = value;
	}

	inline static int32_t get_offset_of__maxAtlasHeightOverride_5() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____maxAtlasHeightOverride_5)); }
	inline int32_t get__maxAtlasHeightOverride_5() const { return ____maxAtlasHeightOverride_5; }
	inline int32_t* get_address_of__maxAtlasHeightOverride_5() { return &____maxAtlasHeightOverride_5; }
	inline void set__maxAtlasHeightOverride_5(int32_t value)
	{
		____maxAtlasHeightOverride_5 = value;
	}

	inline static int32_t get_offset_of__useMaxAtlasWidthOverride_6() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____useMaxAtlasWidthOverride_6)); }
	inline bool get__useMaxAtlasWidthOverride_6() const { return ____useMaxAtlasWidthOverride_6; }
	inline bool* get_address_of__useMaxAtlasWidthOverride_6() { return &____useMaxAtlasWidthOverride_6; }
	inline void set__useMaxAtlasWidthOverride_6(bool value)
	{
		____useMaxAtlasWidthOverride_6 = value;
	}

	inline static int32_t get_offset_of__useMaxAtlasHeightOverride_7() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____useMaxAtlasHeightOverride_7)); }
	inline bool get__useMaxAtlasHeightOverride_7() const { return ____useMaxAtlasHeightOverride_7; }
	inline bool* get_address_of__useMaxAtlasHeightOverride_7() { return &____useMaxAtlasHeightOverride_7; }
	inline void set__useMaxAtlasHeightOverride_7(bool value)
	{
		____useMaxAtlasHeightOverride_7 = value;
	}

	inline static int32_t get_offset_of__resizePowerOfTwoTextures_8() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____resizePowerOfTwoTextures_8)); }
	inline bool get__resizePowerOfTwoTextures_8() const { return ____resizePowerOfTwoTextures_8; }
	inline bool* get_address_of__resizePowerOfTwoTextures_8() { return &____resizePowerOfTwoTextures_8; }
	inline void set__resizePowerOfTwoTextures_8(bool value)
	{
		____resizePowerOfTwoTextures_8 = value;
	}

	inline static int32_t get_offset_of__fixOutOfBoundsUVs_9() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____fixOutOfBoundsUVs_9)); }
	inline bool get__fixOutOfBoundsUVs_9() const { return ____fixOutOfBoundsUVs_9; }
	inline bool* get_address_of__fixOutOfBoundsUVs_9() { return &____fixOutOfBoundsUVs_9; }
	inline void set__fixOutOfBoundsUVs_9(bool value)
	{
		____fixOutOfBoundsUVs_9 = value;
	}

	inline static int32_t get_offset_of__maxTilingBakeSize_10() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____maxTilingBakeSize_10)); }
	inline int32_t get__maxTilingBakeSize_10() const { return ____maxTilingBakeSize_10; }
	inline int32_t* get_address_of__maxTilingBakeSize_10() { return &____maxTilingBakeSize_10; }
	inline void set__maxTilingBakeSize_10(int32_t value)
	{
		____maxTilingBakeSize_10 = value;
	}

	inline static int32_t get_offset_of__saveAtlasesAsAssets_11() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____saveAtlasesAsAssets_11)); }
	inline bool get__saveAtlasesAsAssets_11() const { return ____saveAtlasesAsAssets_11; }
	inline bool* get_address_of__saveAtlasesAsAssets_11() { return &____saveAtlasesAsAssets_11; }
	inline void set__saveAtlasesAsAssets_11(bool value)
	{
		____saveAtlasesAsAssets_11 = value;
	}

	inline static int32_t get_offset_of__resultType_12() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____resultType_12)); }
	inline int32_t get__resultType_12() const { return ____resultType_12; }
	inline int32_t* get_address_of__resultType_12() { return &____resultType_12; }
	inline void set__resultType_12(int32_t value)
	{
		____resultType_12 = value;
	}

	inline static int32_t get_offset_of__packingAlgorithm_13() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____packingAlgorithm_13)); }
	inline int32_t get__packingAlgorithm_13() const { return ____packingAlgorithm_13; }
	inline int32_t* get_address_of__packingAlgorithm_13() { return &____packingAlgorithm_13; }
	inline void set__packingAlgorithm_13(int32_t value)
	{
		____packingAlgorithm_13 = value;
	}

	inline static int32_t get_offset_of__meshBakerTexturePackerForcePowerOfTwo_14() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____meshBakerTexturePackerForcePowerOfTwo_14)); }
	inline bool get__meshBakerTexturePackerForcePowerOfTwo_14() const { return ____meshBakerTexturePackerForcePowerOfTwo_14; }
	inline bool* get_address_of__meshBakerTexturePackerForcePowerOfTwo_14() { return &____meshBakerTexturePackerForcePowerOfTwo_14; }
	inline void set__meshBakerTexturePackerForcePowerOfTwo_14(bool value)
	{
		____meshBakerTexturePackerForcePowerOfTwo_14 = value;
	}

	inline static int32_t get_offset_of__customShaderPropNames_15() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____customShaderPropNames_15)); }
	inline List_1_t5EBC915A80D194338B7699B1C794F70A939BF3E2 * get__customShaderPropNames_15() const { return ____customShaderPropNames_15; }
	inline List_1_t5EBC915A80D194338B7699B1C794F70A939BF3E2 ** get_address_of__customShaderPropNames_15() { return &____customShaderPropNames_15; }
	inline void set__customShaderPropNames_15(List_1_t5EBC915A80D194338B7699B1C794F70A939BF3E2 * value)
	{
		____customShaderPropNames_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____customShaderPropNames_15), (void*)value);
	}

	inline static int32_t get_offset_of__normalizeTexelDensity_16() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____normalizeTexelDensity_16)); }
	inline bool get__normalizeTexelDensity_16() const { return ____normalizeTexelDensity_16; }
	inline bool* get_address_of__normalizeTexelDensity_16() { return &____normalizeTexelDensity_16; }
	inline void set__normalizeTexelDensity_16(bool value)
	{
		____normalizeTexelDensity_16 = value;
	}

	inline static int32_t get_offset_of__considerNonTextureProperties_17() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____considerNonTextureProperties_17)); }
	inline bool get__considerNonTextureProperties_17() const { return ____considerNonTextureProperties_17; }
	inline bool* get_address_of__considerNonTextureProperties_17() { return &____considerNonTextureProperties_17; }
	inline void set__considerNonTextureProperties_17(bool value)
	{
		____considerNonTextureProperties_17 = value;
	}

	inline static int32_t get_offset_of__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18)); }
	inline bool get__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18() const { return ____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18; }
	inline bool* get_address_of__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18() { return &____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18; }
	inline void set__doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18(bool value)
	{
		____doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize_18 = value;
	}

	inline static int32_t get_offset_of__temporaryTextures_19() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0, ____temporaryTextures_19)); }
	inline List_1_tA294941143E9976A2DC3BDC3E4A658B4293B1F27 * get__temporaryTextures_19() const { return ____temporaryTextures_19; }
	inline List_1_tA294941143E9976A2DC3BDC3E4A658B4293B1F27 ** get_address_of__temporaryTextures_19() { return &____temporaryTextures_19; }
	inline void set__temporaryTextures_19(List_1_tA294941143E9976A2DC3BDC3E4A658B4293B1F27 * value)
	{
		____temporaryTextures_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____temporaryTextures_19), (void*)value);
	}
};

struct MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0_StaticFields
{
public:
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombiner::_RunCorutineWithoutPauseIsRunning
	bool ____RunCorutineWithoutPauseIsRunning_20;

public:
	inline static int32_t get_offset_of__RunCorutineWithoutPauseIsRunning_20() { return static_cast<int32_t>(offsetof(MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0_StaticFields, ____RunCorutineWithoutPauseIsRunning_20)); }
	inline bool get__RunCorutineWithoutPauseIsRunning_20() const { return ____RunCorutineWithoutPauseIsRunning_20; }
	inline bool* get_address_of__RunCorutineWithoutPauseIsRunning_20() { return &____RunCorutineWithoutPauseIsRunning_20; }
	inline void set__RunCorutineWithoutPauseIsRunning_20(bool value)
	{
		____RunCorutineWithoutPauseIsRunning_20 = value;
	}
};


// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
struct  MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair[] DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::defaultTextureProperty2DefaultColorMap
	TexPropertyNameColorPairU5BU5D_tE0C61A1D7F0BB1E62A2E62144F308F4A35D62789* ___defaultTextureProperty2DefaultColorMap_1;
	// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties_MaterialProperty[] DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::_nonTextureProperties
	MaterialPropertyU5BU5D_tA2AA56C98A0F11E972B9B7576163F23B34FCCDB4* ____nonTextureProperties_2;
	// DigitalOpus.MB.Core.MB2_LogLevel DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::LOG_LEVEL
	int32_t ___LOG_LEVEL_3;
	// System.Boolean DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::_considerNonTextureProperties
	bool ____considerNonTextureProperties_4;
	// DigitalOpus.MB.Core.TextureBlender DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::resultMaterialTextureBlender
	RuntimeObject* ___resultMaterialTextureBlender_5;
	// DigitalOpus.MB.Core.TextureBlender[] DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::textureBlenders
	TextureBlenderU5BU5D_t3318940B35831AF807B2D0944977DD4E0B179BEA* ___textureBlenders_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::textureProperty2DefaultColorMap
	Dictionary_2_t21EEB75FDD6BCE8B9F35BD88A0AA9D225D014810 * ___textureProperty2DefaultColorMap_7;
	// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties_NonTextureProperties DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::_nonTexturePropertiesBlender
	RuntimeObject* ____nonTexturePropertiesBlender_8;

public:
	inline static int32_t get_offset_of_defaultTextureProperty2DefaultColorMap_1() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251, ___defaultTextureProperty2DefaultColorMap_1)); }
	inline TexPropertyNameColorPairU5BU5D_tE0C61A1D7F0BB1E62A2E62144F308F4A35D62789* get_defaultTextureProperty2DefaultColorMap_1() const { return ___defaultTextureProperty2DefaultColorMap_1; }
	inline TexPropertyNameColorPairU5BU5D_tE0C61A1D7F0BB1E62A2E62144F308F4A35D62789** get_address_of_defaultTextureProperty2DefaultColorMap_1() { return &___defaultTextureProperty2DefaultColorMap_1; }
	inline void set_defaultTextureProperty2DefaultColorMap_1(TexPropertyNameColorPairU5BU5D_tE0C61A1D7F0BB1E62A2E62144F308F4A35D62789* value)
	{
		___defaultTextureProperty2DefaultColorMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultTextureProperty2DefaultColorMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__nonTextureProperties_2() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251, ____nonTextureProperties_2)); }
	inline MaterialPropertyU5BU5D_tA2AA56C98A0F11E972B9B7576163F23B34FCCDB4* get__nonTextureProperties_2() const { return ____nonTextureProperties_2; }
	inline MaterialPropertyU5BU5D_tA2AA56C98A0F11E972B9B7576163F23B34FCCDB4** get_address_of__nonTextureProperties_2() { return &____nonTextureProperties_2; }
	inline void set__nonTextureProperties_2(MaterialPropertyU5BU5D_tA2AA56C98A0F11E972B9B7576163F23B34FCCDB4* value)
	{
		____nonTextureProperties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nonTextureProperties_2), (void*)value);
	}

	inline static int32_t get_offset_of_LOG_LEVEL_3() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251, ___LOG_LEVEL_3)); }
	inline int32_t get_LOG_LEVEL_3() const { return ___LOG_LEVEL_3; }
	inline int32_t* get_address_of_LOG_LEVEL_3() { return &___LOG_LEVEL_3; }
	inline void set_LOG_LEVEL_3(int32_t value)
	{
		___LOG_LEVEL_3 = value;
	}

	inline static int32_t get_offset_of__considerNonTextureProperties_4() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251, ____considerNonTextureProperties_4)); }
	inline bool get__considerNonTextureProperties_4() const { return ____considerNonTextureProperties_4; }
	inline bool* get_address_of__considerNonTextureProperties_4() { return &____considerNonTextureProperties_4; }
	inline void set__considerNonTextureProperties_4(bool value)
	{
		____considerNonTextureProperties_4 = value;
	}

	inline static int32_t get_offset_of_resultMaterialTextureBlender_5() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251, ___resultMaterialTextureBlender_5)); }
	inline RuntimeObject* get_resultMaterialTextureBlender_5() const { return ___resultMaterialTextureBlender_5; }
	inline RuntimeObject** get_address_of_resultMaterialTextureBlender_5() { return &___resultMaterialTextureBlender_5; }
	inline void set_resultMaterialTextureBlender_5(RuntimeObject* value)
	{
		___resultMaterialTextureBlender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultMaterialTextureBlender_5), (void*)value);
	}

	inline static int32_t get_offset_of_textureBlenders_6() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251, ___textureBlenders_6)); }
	inline TextureBlenderU5BU5D_t3318940B35831AF807B2D0944977DD4E0B179BEA* get_textureBlenders_6() const { return ___textureBlenders_6; }
	inline TextureBlenderU5BU5D_t3318940B35831AF807B2D0944977DD4E0B179BEA** get_address_of_textureBlenders_6() { return &___textureBlenders_6; }
	inline void set_textureBlenders_6(TextureBlenderU5BU5D_t3318940B35831AF807B2D0944977DD4E0B179BEA* value)
	{
		___textureBlenders_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureBlenders_6), (void*)value);
	}

	inline static int32_t get_offset_of_textureProperty2DefaultColorMap_7() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251, ___textureProperty2DefaultColorMap_7)); }
	inline Dictionary_2_t21EEB75FDD6BCE8B9F35BD88A0AA9D225D014810 * get_textureProperty2DefaultColorMap_7() const { return ___textureProperty2DefaultColorMap_7; }
	inline Dictionary_2_t21EEB75FDD6BCE8B9F35BD88A0AA9D225D014810 ** get_address_of_textureProperty2DefaultColorMap_7() { return &___textureProperty2DefaultColorMap_7; }
	inline void set_textureProperty2DefaultColorMap_7(Dictionary_2_t21EEB75FDD6BCE8B9F35BD88A0AA9D225D014810 * value)
	{
		___textureProperty2DefaultColorMap_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureProperty2DefaultColorMap_7), (void*)value);
	}

	inline static int32_t get_offset_of__nonTexturePropertiesBlender_8() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251, ____nonTexturePropertiesBlender_8)); }
	inline RuntimeObject* get__nonTexturePropertiesBlender_8() const { return ____nonTexturePropertiesBlender_8; }
	inline RuntimeObject** get_address_of__nonTexturePropertiesBlender_8() { return &____nonTexturePropertiesBlender_8; }
	inline void set__nonTexturePropertiesBlender_8(RuntimeObject* value)
	{
		____nonTexturePropertiesBlender_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nonTexturePropertiesBlender_8), (void*)value);
	}
};

struct MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251_StaticFields
{
public:
	// UnityEngine.Color DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::NEUTRAL_NORMAL_MAP_COLOR
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___NEUTRAL_NORMAL_MAP_COLOR_0;

public:
	inline static int32_t get_offset_of_NEUTRAL_NORMAL_MAP_COLOR_0() { return static_cast<int32_t>(offsetof(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251_StaticFields, ___NEUTRAL_NORMAL_MAP_COLOR_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_NEUTRAL_NORMAL_MAP_COLOR_0() const { return ___NEUTRAL_NORMAL_MAP_COLOR_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_NEUTRAL_NORMAL_MAP_COLOR_0() { return &___NEUTRAL_NORMAL_MAP_COLOR_0; }
	inline void set_NEUTRAL_NORMAL_MAP_COLOR_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___NEUTRAL_NORMAL_MAP_COLOR_0 = value;
	}
};


// DigitalOpus.MB.Core.MB_TexSet
struct  MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MeshBakerMaterialTexture[] DigitalOpus.MB.Core.MB_TexSet::ts
	MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28* ___ts_0;
	// DigitalOpus.MB.Core.MatsAndGOs DigitalOpus.MB.Core.MB_TexSet::matsAndGOs
	MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462 * ___matsAndGOs_1;
	// System.Boolean DigitalOpus.MB.Core.MB_TexSet::<allTexturesUseSameMatTiling>k__BackingField
	bool ___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2;
	// System.Boolean DigitalOpus.MB.Core.MB_TexSet::<thisIsOnlyTexSetInAtlas>k__BackingField
	bool ___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3;
	// DigitalOpus.MB.Core.MB_TextureTilingTreatment DigitalOpus.MB.Core.MB_TexSet::<tilingTreatment>k__BackingField
	int32_t ___U3CtilingTreatmentU3Ek__BackingField_4;
	// UnityEngine.Vector2 DigitalOpus.MB.Core.MB_TexSet::<obUVoffset>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CobUVoffsetU3Ek__BackingField_5;
	// UnityEngine.Vector2 DigitalOpus.MB.Core.MB_TexSet::<obUVscale>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CobUVscaleU3Ek__BackingField_6;
	// System.Int32 DigitalOpus.MB.Core.MB_TexSet::idealWidth
	int32_t ___idealWidth_7;
	// System.Int32 DigitalOpus.MB.Core.MB_TexSet::idealHeight
	int32_t ___idealHeight_8;
	// DigitalOpus.MB.Core.MB_TexSet_PipelineVariation DigitalOpus.MB.Core.MB_TexSet::pipelineVariation
	RuntimeObject* ___pipelineVariation_9;

public:
	inline static int32_t get_offset_of_ts_0() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___ts_0)); }
	inline MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28* get_ts_0() const { return ___ts_0; }
	inline MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28** get_address_of_ts_0() { return &___ts_0; }
	inline void set_ts_0(MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28* value)
	{
		___ts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ts_0), (void*)value);
	}

	inline static int32_t get_offset_of_matsAndGOs_1() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___matsAndGOs_1)); }
	inline MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462 * get_matsAndGOs_1() const { return ___matsAndGOs_1; }
	inline MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462 ** get_address_of_matsAndGOs_1() { return &___matsAndGOs_1; }
	inline void set_matsAndGOs_1(MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462 * value)
	{
		___matsAndGOs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___matsAndGOs_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CallTexturesUseSameMatTilingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2)); }
	inline bool get_U3CallTexturesUseSameMatTilingU3Ek__BackingField_2() const { return ___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CallTexturesUseSameMatTilingU3Ek__BackingField_2() { return &___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2; }
	inline void set_U3CallTexturesUseSameMatTilingU3Ek__BackingField_2(bool value)
	{
		___U3CallTexturesUseSameMatTilingU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3)); }
	inline bool get_U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3() const { return ___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3() { return &___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3; }
	inline void set_U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3(bool value)
	{
		___U3CthisIsOnlyTexSetInAtlasU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtilingTreatmentU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___U3CtilingTreatmentU3Ek__BackingField_4)); }
	inline int32_t get_U3CtilingTreatmentU3Ek__BackingField_4() const { return ___U3CtilingTreatmentU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CtilingTreatmentU3Ek__BackingField_4() { return &___U3CtilingTreatmentU3Ek__BackingField_4; }
	inline void set_U3CtilingTreatmentU3Ek__BackingField_4(int32_t value)
	{
		___U3CtilingTreatmentU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CobUVoffsetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___U3CobUVoffsetU3Ek__BackingField_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CobUVoffsetU3Ek__BackingField_5() const { return ___U3CobUVoffsetU3Ek__BackingField_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CobUVoffsetU3Ek__BackingField_5() { return &___U3CobUVoffsetU3Ek__BackingField_5; }
	inline void set_U3CobUVoffsetU3Ek__BackingField_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CobUVoffsetU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CobUVscaleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___U3CobUVscaleU3Ek__BackingField_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CobUVscaleU3Ek__BackingField_6() const { return ___U3CobUVscaleU3Ek__BackingField_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CobUVscaleU3Ek__BackingField_6() { return &___U3CobUVscaleU3Ek__BackingField_6; }
	inline void set_U3CobUVscaleU3Ek__BackingField_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CobUVscaleU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_idealWidth_7() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___idealWidth_7)); }
	inline int32_t get_idealWidth_7() const { return ___idealWidth_7; }
	inline int32_t* get_address_of_idealWidth_7() { return &___idealWidth_7; }
	inline void set_idealWidth_7(int32_t value)
	{
		___idealWidth_7 = value;
	}

	inline static int32_t get_offset_of_idealHeight_8() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___idealHeight_8)); }
	inline int32_t get_idealHeight_8() const { return ___idealHeight_8; }
	inline int32_t* get_address_of_idealHeight_8() { return &___idealHeight_8; }
	inline void set_idealHeight_8(int32_t value)
	{
		___idealHeight_8 = value;
	}

	inline static int32_t get_offset_of_pipelineVariation_9() { return static_cast<int32_t>(offsetof(MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C, ___pipelineVariation_9)); }
	inline RuntimeObject* get_pipelineVariation_9() const { return ___pipelineVariation_9; }
	inline RuntimeObject** get_address_of_pipelineVariation_9() { return &___pipelineVariation_9; }
	inline void set_pipelineVariation_9(RuntimeObject* value)
	{
		___pipelineVariation_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pipelineVariation_9), (void*)value);
	}
};


// MB_MaterialAndUVRect
struct  MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3  : public RuntimeObject
{
public:
	// UnityEngine.Material MB_MaterialAndUVRect::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_0;
	// UnityEngine.Rect MB_MaterialAndUVRect::atlasRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___atlasRect_1;
	// System.String MB_MaterialAndUVRect::srcObjName
	String_t* ___srcObjName_2;
	// System.Int32 MB_MaterialAndUVRect::textureArraySliceIdx
	int32_t ___textureArraySliceIdx_3;
	// System.Boolean MB_MaterialAndUVRect::allPropsUseSameTiling
	bool ___allPropsUseSameTiling_4;
	// UnityEngine.Rect MB_MaterialAndUVRect::allPropsUseSameTiling_sourceMaterialTiling
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___allPropsUseSameTiling_sourceMaterialTiling_5;
	// UnityEngine.Rect MB_MaterialAndUVRect::allPropsUseSameTiling_samplingEncapsulatinRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___allPropsUseSameTiling_samplingEncapsulatinRect_6;
	// UnityEngine.Rect MB_MaterialAndUVRect::propsUseDifferntTiling_srcUVsamplingRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___propsUseDifferntTiling_srcUVsamplingRect_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MB_MaterialAndUVRect::objectsThatUse
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___objectsThatUse_8;
	// DigitalOpus.MB.Core.MB_TextureTilingTreatment MB_MaterialAndUVRect::tilingTreatment
	int32_t ___tilingTreatment_9;

public:
	inline static int32_t get_offset_of_material_0() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___material_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_0() const { return ___material_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_0() { return &___material_0; }
	inline void set_material_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_0), (void*)value);
	}

	inline static int32_t get_offset_of_atlasRect_1() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___atlasRect_1)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_atlasRect_1() const { return ___atlasRect_1; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_atlasRect_1() { return &___atlasRect_1; }
	inline void set_atlasRect_1(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___atlasRect_1 = value;
	}

	inline static int32_t get_offset_of_srcObjName_2() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___srcObjName_2)); }
	inline String_t* get_srcObjName_2() const { return ___srcObjName_2; }
	inline String_t** get_address_of_srcObjName_2() { return &___srcObjName_2; }
	inline void set_srcObjName_2(String_t* value)
	{
		___srcObjName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___srcObjName_2), (void*)value);
	}

	inline static int32_t get_offset_of_textureArraySliceIdx_3() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___textureArraySliceIdx_3)); }
	inline int32_t get_textureArraySliceIdx_3() const { return ___textureArraySliceIdx_3; }
	inline int32_t* get_address_of_textureArraySliceIdx_3() { return &___textureArraySliceIdx_3; }
	inline void set_textureArraySliceIdx_3(int32_t value)
	{
		___textureArraySliceIdx_3 = value;
	}

	inline static int32_t get_offset_of_allPropsUseSameTiling_4() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___allPropsUseSameTiling_4)); }
	inline bool get_allPropsUseSameTiling_4() const { return ___allPropsUseSameTiling_4; }
	inline bool* get_address_of_allPropsUseSameTiling_4() { return &___allPropsUseSameTiling_4; }
	inline void set_allPropsUseSameTiling_4(bool value)
	{
		___allPropsUseSameTiling_4 = value;
	}

	inline static int32_t get_offset_of_allPropsUseSameTiling_sourceMaterialTiling_5() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___allPropsUseSameTiling_sourceMaterialTiling_5)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_allPropsUseSameTiling_sourceMaterialTiling_5() const { return ___allPropsUseSameTiling_sourceMaterialTiling_5; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_allPropsUseSameTiling_sourceMaterialTiling_5() { return &___allPropsUseSameTiling_sourceMaterialTiling_5; }
	inline void set_allPropsUseSameTiling_sourceMaterialTiling_5(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___allPropsUseSameTiling_sourceMaterialTiling_5 = value;
	}

	inline static int32_t get_offset_of_allPropsUseSameTiling_samplingEncapsulatinRect_6() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___allPropsUseSameTiling_samplingEncapsulatinRect_6)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_allPropsUseSameTiling_samplingEncapsulatinRect_6() const { return ___allPropsUseSameTiling_samplingEncapsulatinRect_6; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_allPropsUseSameTiling_samplingEncapsulatinRect_6() { return &___allPropsUseSameTiling_samplingEncapsulatinRect_6; }
	inline void set_allPropsUseSameTiling_samplingEncapsulatinRect_6(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___allPropsUseSameTiling_samplingEncapsulatinRect_6 = value;
	}

	inline static int32_t get_offset_of_propsUseDifferntTiling_srcUVsamplingRect_7() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___propsUseDifferntTiling_srcUVsamplingRect_7)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_propsUseDifferntTiling_srcUVsamplingRect_7() const { return ___propsUseDifferntTiling_srcUVsamplingRect_7; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_propsUseDifferntTiling_srcUVsamplingRect_7() { return &___propsUseDifferntTiling_srcUVsamplingRect_7; }
	inline void set_propsUseDifferntTiling_srcUVsamplingRect_7(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___propsUseDifferntTiling_srcUVsamplingRect_7 = value;
	}

	inline static int32_t get_offset_of_objectsThatUse_8() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___objectsThatUse_8)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_objectsThatUse_8() const { return ___objectsThatUse_8; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_objectsThatUse_8() { return &___objectsThatUse_8; }
	inline void set_objectsThatUse_8(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___objectsThatUse_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectsThatUse_8), (void*)value);
	}

	inline static int32_t get_offset_of_tilingTreatment_9() { return static_cast<int32_t>(offsetof(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3, ___tilingTreatment_9)); }
	inline int32_t get_tilingTreatment_9() const { return ___tilingTreatment_9; }
	inline int32_t* get_address_of_tilingTreatment_9() { return &___tilingTreatment_9; }
	inline void set_tilingTreatment_9(int32_t value)
	{
		___tilingTreatment_9 = value;
	}
};


// MB_TextureArrayFormat
struct  MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6  : public RuntimeObject
{
public:
	// System.String MB_TextureArrayFormat::propertyName
	String_t* ___propertyName_0;
	// UnityEngine.TextureFormat MB_TextureArrayFormat::format
	int32_t ___format_1;

public:
	inline static int32_t get_offset_of_propertyName_0() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6, ___propertyName_0)); }
	inline String_t* get_propertyName_0() const { return ___propertyName_0; }
	inline String_t** get_address_of_propertyName_0() { return &___propertyName_0; }
	inline void set_propertyName_0(String_t* value)
	{
		___propertyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_format_1() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6, ___format_1)); }
	inline int32_t get_format_1() const { return ___format_1; }
	inline int32_t* get_address_of_format_1() { return &___format_1; }
	inline void set_format_1(int32_t value)
	{
		___format_1 = value;
	}
};


// MB_TextureArrayFormatSet
struct  MB_TextureArrayFormatSet_tE54821745326A9FFFCC73276B6C616D9CDCCE9E4  : public RuntimeObject
{
public:
	// System.String MB_TextureArrayFormatSet::name
	String_t* ___name_0;
	// UnityEngine.TextureFormat MB_TextureArrayFormatSet::defaultFormat
	int32_t ___defaultFormat_1;
	// MB_TextureArrayFormat[] MB_TextureArrayFormatSet::formatOverrides
	MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* ___formatOverrides_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormatSet_tE54821745326A9FFFCC73276B6C616D9CDCCE9E4, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_defaultFormat_1() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormatSet_tE54821745326A9FFFCC73276B6C616D9CDCCE9E4, ___defaultFormat_1)); }
	inline int32_t get_defaultFormat_1() const { return ___defaultFormat_1; }
	inline int32_t* get_address_of_defaultFormat_1() { return &___defaultFormat_1; }
	inline void set_defaultFormat_1(int32_t value)
	{
		___defaultFormat_1 = value;
	}

	inline static int32_t get_offset_of_formatOverrides_2() { return static_cast<int32_t>(offsetof(MB_TextureArrayFormatSet_tE54821745326A9FFFCC73276B6C616D9CDCCE9E4, ___formatOverrides_2)); }
	inline MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* get_formatOverrides_2() const { return ___formatOverrides_2; }
	inline MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38** get_address_of_formatOverrides_2() { return &___formatOverrides_2; }
	inline void set_formatOverrides_2(MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* value)
	{
		___formatOverrides_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formatOverrides_2), (void*)value);
	}
};


// MB_TextureCombinerRenderTexture
struct  MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B  : public RuntimeObject
{
public:
	// DigitalOpus.MB.Core.MB2_LogLevel MB_TextureCombinerRenderTexture::LOG_LEVEL
	int32_t ___LOG_LEVEL_0;
	// UnityEngine.Material MB_TextureCombinerRenderTexture::mat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mat_1;
	// UnityEngine.RenderTexture MB_TextureCombinerRenderTexture::_destinationTexture
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ____destinationTexture_2;
	// UnityEngine.Camera MB_TextureCombinerRenderTexture::myCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___myCamera_3;
	// System.Int32 MB_TextureCombinerRenderTexture::_padding
	int32_t ____padding_4;
	// System.Boolean MB_TextureCombinerRenderTexture::_isNormalMap
	bool ____isNormalMap_5;
	// System.Boolean MB_TextureCombinerRenderTexture::_fixOutOfBoundsUVs
	bool ____fixOutOfBoundsUVs_6;
	// System.Boolean MB_TextureCombinerRenderTexture::_doRenderAtlas
	bool ____doRenderAtlas_7;
	// UnityEngine.Rect[] MB_TextureCombinerRenderTexture::rs
	RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* ___rs_8;
	// System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet> MB_TextureCombinerRenderTexture::textureSets
	List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * ___textureSets_9;
	// System.Int32 MB_TextureCombinerRenderTexture::indexOfTexSetToRender
	int32_t ___indexOfTexSetToRender_10;
	// DigitalOpus.MB.Core.ShaderTextureProperty MB_TextureCombinerRenderTexture::_texPropertyName
	ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * ____texPropertyName_11;
	// DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties MB_TextureCombinerRenderTexture::_resultMaterialTextureBlender
	MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * ____resultMaterialTextureBlender_12;
	// UnityEngine.Texture2D MB_TextureCombinerRenderTexture::targTex
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___targTex_13;

public:
	inline static int32_t get_offset_of_LOG_LEVEL_0() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ___LOG_LEVEL_0)); }
	inline int32_t get_LOG_LEVEL_0() const { return ___LOG_LEVEL_0; }
	inline int32_t* get_address_of_LOG_LEVEL_0() { return &___LOG_LEVEL_0; }
	inline void set_LOG_LEVEL_0(int32_t value)
	{
		___LOG_LEVEL_0 = value;
	}

	inline static int32_t get_offset_of_mat_1() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ___mat_1)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_mat_1() const { return ___mat_1; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_mat_1() { return &___mat_1; }
	inline void set_mat_1(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___mat_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mat_1), (void*)value);
	}

	inline static int32_t get_offset_of__destinationTexture_2() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ____destinationTexture_2)); }
	inline RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * get__destinationTexture_2() const { return ____destinationTexture_2; }
	inline RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 ** get_address_of__destinationTexture_2() { return &____destinationTexture_2; }
	inline void set__destinationTexture_2(RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * value)
	{
		____destinationTexture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____destinationTexture_2), (void*)value);
	}

	inline static int32_t get_offset_of_myCamera_3() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ___myCamera_3)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_myCamera_3() const { return ___myCamera_3; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_myCamera_3() { return &___myCamera_3; }
	inline void set_myCamera_3(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___myCamera_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myCamera_3), (void*)value);
	}

	inline static int32_t get_offset_of__padding_4() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ____padding_4)); }
	inline int32_t get__padding_4() const { return ____padding_4; }
	inline int32_t* get_address_of__padding_4() { return &____padding_4; }
	inline void set__padding_4(int32_t value)
	{
		____padding_4 = value;
	}

	inline static int32_t get_offset_of__isNormalMap_5() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ____isNormalMap_5)); }
	inline bool get__isNormalMap_5() const { return ____isNormalMap_5; }
	inline bool* get_address_of__isNormalMap_5() { return &____isNormalMap_5; }
	inline void set__isNormalMap_5(bool value)
	{
		____isNormalMap_5 = value;
	}

	inline static int32_t get_offset_of__fixOutOfBoundsUVs_6() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ____fixOutOfBoundsUVs_6)); }
	inline bool get__fixOutOfBoundsUVs_6() const { return ____fixOutOfBoundsUVs_6; }
	inline bool* get_address_of__fixOutOfBoundsUVs_6() { return &____fixOutOfBoundsUVs_6; }
	inline void set__fixOutOfBoundsUVs_6(bool value)
	{
		____fixOutOfBoundsUVs_6 = value;
	}

	inline static int32_t get_offset_of__doRenderAtlas_7() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ____doRenderAtlas_7)); }
	inline bool get__doRenderAtlas_7() const { return ____doRenderAtlas_7; }
	inline bool* get_address_of__doRenderAtlas_7() { return &____doRenderAtlas_7; }
	inline void set__doRenderAtlas_7(bool value)
	{
		____doRenderAtlas_7 = value;
	}

	inline static int32_t get_offset_of_rs_8() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ___rs_8)); }
	inline RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* get_rs_8() const { return ___rs_8; }
	inline RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B** get_address_of_rs_8() { return &___rs_8; }
	inline void set_rs_8(RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* value)
	{
		___rs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rs_8), (void*)value);
	}

	inline static int32_t get_offset_of_textureSets_9() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ___textureSets_9)); }
	inline List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * get_textureSets_9() const { return ___textureSets_9; }
	inline List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 ** get_address_of_textureSets_9() { return &___textureSets_9; }
	inline void set_textureSets_9(List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * value)
	{
		___textureSets_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureSets_9), (void*)value);
	}

	inline static int32_t get_offset_of_indexOfTexSetToRender_10() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ___indexOfTexSetToRender_10)); }
	inline int32_t get_indexOfTexSetToRender_10() const { return ___indexOfTexSetToRender_10; }
	inline int32_t* get_address_of_indexOfTexSetToRender_10() { return &___indexOfTexSetToRender_10; }
	inline void set_indexOfTexSetToRender_10(int32_t value)
	{
		___indexOfTexSetToRender_10 = value;
	}

	inline static int32_t get_offset_of__texPropertyName_11() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ____texPropertyName_11)); }
	inline ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * get__texPropertyName_11() const { return ____texPropertyName_11; }
	inline ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 ** get_address_of__texPropertyName_11() { return &____texPropertyName_11; }
	inline void set__texPropertyName_11(ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * value)
	{
		____texPropertyName_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____texPropertyName_11), (void*)value);
	}

	inline static int32_t get_offset_of__resultMaterialTextureBlender_12() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ____resultMaterialTextureBlender_12)); }
	inline MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * get__resultMaterialTextureBlender_12() const { return ____resultMaterialTextureBlender_12; }
	inline MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 ** get_address_of__resultMaterialTextureBlender_12() { return &____resultMaterialTextureBlender_12; }
	inline void set__resultMaterialTextureBlender_12(MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * value)
	{
		____resultMaterialTextureBlender_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resultMaterialTextureBlender_12), (void*)value);
	}

	inline static int32_t get_offset_of_targTex_13() { return static_cast<int32_t>(offsetof(MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B, ___targTex_13)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_targTex_13() const { return ___targTex_13; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_targTex_13() { return &___targTex_13; }
	inline void set_targTex_13(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___targTex_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targTex_13), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Shader
struct  Shader_tE2731FF351B74AB4186897484FB01E000C1160CA  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Texture2DArray
struct  Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
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
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// MB_TextureArrayReference[]
struct MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314 * m_Items[1];

public:
	inline MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// MB_TextureArrayFormat[]
struct MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * m_Items[1];

public:
	inline MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rect[]
struct RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rect_t35B976DE901B5423C11705E156938EA27AB402CE  m_Items[1];

public:
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		m_Items[index] = value;
	}
};
// DigitalOpus.MB.Core.MeshBakerMaterialTexture[]
struct MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * m_Items[1];

public:
	inline MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<MB3_KMeansClustering/DataPoint>::.ctor()
inline void List_1__ctor_m9483FF25C826AAB6281204FD6CC40514206F65EC (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_inline (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void MB3_KMeansClustering/DataPoint::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPoint__ctor_m8C69F7E199D5C5ED607B6928898CF3AE7DF842B7 (DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MB3_KMeansClustering/DataPoint>::Add(!0)
inline void List_1_Add_m66CBC901FEDA6CC13FB5A0639067316A9BE3AD4E (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * __this, DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF *, DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_mA61C8F11E4F47F828FC3E31E04C25BF06F23B2A4_inline (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<MB3_KMeansClustering/DataPoint>::get_Count()
inline int32_t List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<MB3_KMeansClustering/DataPoint>::get_Item(System.Int32)
inline DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * (*) (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Boolean MB3_KMeansClustering::AnyAreEmpty(System.Collections.Generic.List`1<MB3_KMeansClustering/DataPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB3_KMeansClustering_AnyAreEmpty_m60D8694464E875FBA408D1895F45E928ADB1502D (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * ___data0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single MB3_KMeansClustering::ElucidanDistance(MB3_KMeansClustering/DataPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MB3_KMeansClustering_ElucidanDistance_mF68A58C027FEF3255BF6D060875CDDB6B0B2F6D9 (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * ___dataPoint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mean1, const RuntimeMethod* method);
// System.Int32 MB3_KMeansClustering::MinIndex(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MB3_KMeansClustering_MinIndex_mE1ED5094CE78EFB2B58B0BE96ED02A54D7E31951 (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___distances0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor()
inline void List_1__ctor_mD3FB2818BB18D53E711CD68C4B85E604151192D1 (List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Boolean MB3_KMeansClustering::UpdateDataPointMeans(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB3_KMeansClustering_UpdateDataPointMeans_m44AF29BF7BDF4DD768A41344C5D407B8210BB3DE (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, bool ___force0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD202DDB933765AC3989986C7FA3C14E6E9A191EC (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Add(!0)
inline void List_1_Add_m1225A59A8213715A508D7ED9FA150A16B93555E5 (List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * __this, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 *, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void MB3_KMeansClustering::InitializeCentroids()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB3_KMeansClustering_InitializeCentroids_m4EFB731DF8D11D5CBBC1C13B8458BF8629A24C20 (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, const RuntimeMethod* method);
// System.Boolean MB3_KMeansClustering::UpdateClusterMembership()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB3_KMeansClustering_UpdateClusterMembership_m7833BF74D56BC01C7D6537B2E2F6AEC2AEF1F38F (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m33A817CEE904B3362C8BAAF02DB45976575CBEF4 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_mA23F5D7C299F7E05A0390DF2FA663F5A003799C6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mFBE3505CEDD6B73F66276E782C1B02E0E5633563 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___lhs0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_mD2278ECC1DFA9F157785D300E40FAF78A8712EF4 (List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MB_TexArraySlice>::.ctor()
inline void List_1__ctor_m4BD8E7B768DF04D792DBE19314B7D7B23837A544 (List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<MB_TexArrayForProperty>::.ctor()
inline void List_1__ctor_m935F80328F8629131001B9C8B572343786A00F77 (List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>::get_Item(System.Int32)
inline MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD * List_1_get_Item_m325D84535F1B46C3C5A93C92159C2A1D68BE5B77_inline (List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD * (*) (List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>::get_Count()
inline int32_t List_1_get_Count_m70D5F56C177A90C0E65E60E94DE9ECD4630E6E6E_inline (List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
inline void List_1_Clear_m9E02B82AAAE9DD07C5574663F89D520A1643852C (List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m101E88A6605F885304081FAE2AFCEA1950FA100E (List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA *, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<MB_TexArraySliceRendererMatPair>::.ctor()
inline void List_1__ctor_m8512B464F9D6F816B95ECBB0A7A058077B9EE0E0 (List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m0FF5DDAB599ED301091CF23D4C76691D8EC70CA5 (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mB9AC927A527EFE95771B9B438E2CFB9EDA84AF01 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mC7A785FC805DC2AAF33ACC6863244352CD0B8052 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_mB2549D26F5E220102D7478EB4C15F8F12D96FE09 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mF15F37A294A7AA2ADD9519728A495DFA0A836428 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m84BE4641686B30B8F9FFEA47BB1D7D88E27344EE (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m9D0DCEFF0C5596CBBC6FA7EE206F196CB0A8997D (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m1F9576DC1C4A81D31D05BDDEBCE134AA97FF4075 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m2ADA7982754920C3B58B4DB664801D6F2416E0C6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m397647083E9A37A18A452C4D7FCF23CCF8870F42 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void DigitalOpus.MB.Core.MB_Utility::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_Utility_Destroy_m8C210EB0F77E754DCB706DB9DA70226D0E8096BC (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___o0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Boolean MB_TextureCombinerRenderTexture::YisFlipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB_TextureCombinerRenderTexture_YisFlipped_mB24583B38290325F99CC00D2DF972274784422DA (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet>::get_Item(System.Int32)
inline MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_inline (List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * (*) (List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Texture2D DigitalOpus.MB.Core.MeshBakerMaterialTexture::GetTexture2D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * MeshBakerMaterialTexture_GetTexture2D_m0764FAD10C696504BC9D550A76A267808735B366 (MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * __this, const RuntimeMethod* method);
// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MeshBakerMaterialTexture::get_matTilingRect()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  MeshBakerMaterialTexture_get_matTilingRect_mA0AE7B4ADB0754A65040C5778535E0EE0E21008C_inline (MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalOpus.MB.Core.DRect::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  DRect_get_min_m2461330EC603E1259B99D5DD1303B72D23A049C3 (DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalOpus.MB.Core.DRect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  DRect_get_size_mFD7EB5195A5E50AA15B250D0F484E708730409DD (DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalOpus.MB.Core.MB_TexSet::get_obUVoffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MB_TexSet_get_obUVoffset_m03F6C8E731F7E5B8E2D09C1081F10EBA3013AD43_inline (MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 DigitalOpus.MB.Core.MB_TexSet::get_obUVscale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MB_TexSet_get_obUVscale_m681A641FA420BE940DFC1C67048AE4541EDD4B4D_inline (MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * __this, const RuntimeMethod* method);
// System.Void MB_TextureCombinerRenderTexture::CopyScaledAndTiledToAtlas(DigitalOpus.MB.Core.MB_TexSet,DigitalOpus.MB.Core.MeshBakerMaterialTexture,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Rect,DigitalOpus.MB.Core.ShaderTextureProperty,DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m6ED17081A30F740EED54281FA1EA6FE3A14F34F4 (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * ___texSet0, MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * ___source1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___obUVoffset2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___obUVscale3, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rec4, ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * ___texturePropertyName5, MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * ___resultMatTexBlender6, bool ___yIsFlipped7, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8AE20980FC1C80DFAC27FA7E2BAFC88E94B839B3 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.String System.Int64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m3839C1DCB09CFC5F62D5ED87191AD482D39A4F35 (int64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957 (const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1 (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void MB_TextureCombinerRenderTexture::_printTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture__printTexture_m191A192D99C30C93DCF65F5DDB678FA43F6608AD (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___t0, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVersion_m64E10307E6A8F0351DB4B2CDA96480AD172F119D (const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Boolean DigitalOpus.MB.Core.MBVersion::GraphicsUVStartsAtTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MBVersion_GraphicsUVStartsAtTop_m12FA7176C555150873B5CEDF64057E49B73DDCB7 (const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<DigitalOpus.MB.Core.MatAndTransformToMerged>::get_Item(System.Int32)
inline MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142 * List_1_get_Item_m2CD6333FDC72DB5495C760FD838836A592528975_inline (List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142 * (*) (List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Color DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::GetColorForTemporaryTexture(UnityEngine.Material,DigitalOpus.MB.Core.ShaderTextureProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  MB3_TextureCombinerNonTextureProperties_GetColorForTemporaryTexture_mC291F2DD08F62DF04BAAF1424F2B7BC96231A013 (MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___matIfBlender0, ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * ___texProperty1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// DigitalOpus.MB.Core.DRect DigitalOpus.MB.Core.MeshBakerMaterialTexture::GetEncapsulatingSamplingRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  MeshBakerMaterialTexture_GetEncapsulatingSamplingRect_m50C92023B8123BB1A34151A0D6DB16668DF7F40C (MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * __this, const RuntimeMethod* method);
// UnityEngine.Rect DigitalOpus.MB.Core.DRect::GetRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  DRect_GetRect_mDF427BBD502AE1FBF7BEEB3073D8B5490DA1C995 (DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 * __this, const RuntimeMethod* method);
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_wrapMode_mC21054C7BC6E958937B7459DAF1D17654284B07A (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___screenRect0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___texture1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___sourceRect2, int32_t ___leftBorder3, int32_t ___rightBorder4, int32_t ___topBorder5, int32_t ___bottomBorder6, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mat7, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Texture2D_GetPixels32_m7CC6EC6AD48D4CD84AF28DFDFBE24750900FA2E6 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MB3_KMeansClustering::.ctor(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB3_KMeansClustering__ctor_mA21530C879D1AD70E3DB83455FBD2264387BFD46 (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___gos0, int32_t ___numClusters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB3_KMeansClustering__ctor_mA21530C879D1AD70E3DB83455FBD2264387BFD46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_0 = (List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF *)il2cpp_codegen_object_new(List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF_il2cpp_TypeInfo_var);
		List_1__ctor_m9483FF25C826AAB6281204FD6CC40514206F65EC(L_0, /*hidden argument*/List_1__ctor_m9483FF25C826AAB6281204FD6CC40514206F65EC_RuntimeMethod_var);
		__this->set__normalizedDataToCluster_0(L_0);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set__clusters_1(L_1);
		__this->set__numberOfClusters_2(0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0077;
	}

IL_002a:
	{
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_2 = ___gos0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_7 = ___gos0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mF3CFF4FB71CEEDC038A8826D6AE1A226B7CF22A6_RuntimeMethod_var);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_10 = (DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 *)il2cpp_codegen_object_new(DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119_il2cpp_TypeInfo_var);
		DataPoint__ctor_m8C69F7E199D5C5ED607B6928898CF3AE7DF842B7(L_10, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_11 = __this->get__normalizedDataToCluster_0();
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_12 = V_2;
		NullCheck(L_11);
		List_1_Add_m66CBC901FEDA6CC13FB5A0639067316A9BE3AD4E(L_11, L_12, /*hidden argument*/List_1_Add_m66CBC901FEDA6CC13FB5A0639067316A9BE3AD4E_RuntimeMethod_var);
		goto IL_0072;
	}

IL_005a:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralB09175DFFB36B6028C12EF6399605708234E84EB, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_16, /*hidden argument*/NULL);
	}

IL_0072:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_18 = V_0;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_19 = ___gos0;
		NullCheck(L_19);
		int32_t L_20 = List_1_get_Count_mA61C8F11E4F47F828FC3E31E04C25BF06F23B2A4_inline(L_19, /*hidden argument*/List_1_get_Count_mA61C8F11E4F47F828FC3E31E04C25BF06F23B2A4_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_18) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_22 = ___numClusters1;
		V_4 = (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00a1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral1C6DAB671A1A781164F38BF78F470EA057B9CCCC, /*hidden argument*/NULL);
		___numClusters1 = 1;
	}

IL_00a1:
	{
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_24 = __this->get__normalizedDataToCluster_0();
		NullCheck(L_24);
		int32_t L_25 = List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline(L_24, /*hidden argument*/List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var);
		int32_t L_26 = ___numClusters1;
		V_5 = (bool)((((int32_t)((((int32_t)L_25) > ((int32_t)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral83FFD5451A786FE0C0737BF63CB55ADEED0B5819, /*hidden argument*/NULL);
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_28 = __this->get__normalizedDataToCluster_0();
		NullCheck(L_28);
		int32_t L_29 = List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline(L_28, /*hidden argument*/List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var);
		___numClusters1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1));
	}

IL_00d4:
	{
		int32_t L_30 = ___numClusters1;
		__this->set__numberOfClusters_2(L_30);
		int32_t L_31 = __this->get__numberOfClusters_2();
		V_6 = (bool)((((int32_t)((((int32_t)L_31) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00f4;
		}
	}
	{
		__this->set__numberOfClusters_2(1);
	}

IL_00f4:
	{
		int32_t L_33 = __this->get__numberOfClusters_2();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_34 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_33);
		__this->set__clusters_1(L_34);
		return;
	}
}
// System.Void MB3_KMeansClustering::InitializeCentroids()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB3_KMeansClustering_InitializeCentroids_m4EFB731DF8D11D5CBBC1C13B8458BF8629A24C20 (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB3_KMeansClustering_InitializeCentroids_m4EFB731DF8D11D5CBBC1C13B8458BF8629A24C20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_001d;
	}

IL_0005:
	{
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_0 = __this->get__normalizedDataToCluster_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_2 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		L_2->set_Cluster_2(L_3);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get__numberOfClusters_2();
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_8 = __this->get__numberOfClusters_2();
		V_2 = L_8;
		goto IL_0056;
	}

IL_0033:
	{
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_9 = __this->get__normalizedDataToCluster_0();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_11 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		int32_t L_12 = __this->get__numberOfClusters_2();
		int32_t L_13 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_Cluster_2(L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0056:
	{
		int32_t L_15 = V_2;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_16 = __this->get__normalizedDataToCluster_0();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline(L_16, /*hidden argument*/List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Boolean MB3_KMeansClustering::UpdateDataPointMeans(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB3_KMeansClustering_UpdateDataPointMeans_m44AF29BF7BDF4DD768A41344C5D407B8210BB3DE (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, bool ___force0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB3_KMeansClustering_UpdateDataPointMeans_m44AF29BF7BDF4DD768A41344C5D407B8210BB3DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_0 = __this->get__normalizedDataToCluster_0();
		bool L_1 = MB3_KMeansClustering_AnyAreEmpty_m60D8694464E875FBA408D1895F45E928ADB1502D(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___force0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00e6;
	}

IL_0021:
	{
		int32_t L_4 = __this->get__numberOfClusters_2();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		int32_t L_6 = __this->get__numberOfClusters_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_4 = 0;
		goto IL_0091;
	}

IL_003e:
	{
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_8 = __this->get__normalizedDataToCluster_0();
		int32_t L_9 = V_4;
		NullCheck(L_8);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_10 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = L_10->get_Cluster_2();
		V_5 = L_11;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_12 = V_0;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_14);
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_16 = __this->get__normalizedDataToCluster_0();
		int32_t L_17 = V_4;
		NullCheck(L_16);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_18 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = L_18->get_center_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_15, L_19, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_14 = L_20;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = V_1;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		int32_t L_24 = *((int32_t*)L_23);
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_26 = V_4;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_27 = __this->get__normalizedDataToCluster_0();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline(L_27, /*hidden argument*/List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_003e;
		}
	}
	{
		V_7 = 0;
		goto IL_00d2;
	}

IL_00ab:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_30 = __this->get__clusters_1();
		int32_t L_31 = V_7;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_32 = V_0;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_36 = V_1;
		int32_t L_37 = V_7;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_35, (((float)((float)L_39))), /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_40);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00d2:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = __this->get__numberOfClusters_2();
		V_8 = (bool)((((int32_t)L_42) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_8;
		if (L_44)
		{
			goto IL_00ab;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00e6;
	}

IL_00e6:
	{
		bool L_45 = V_3;
		return L_45;
	}
}
// System.Boolean MB3_KMeansClustering::AnyAreEmpty(System.Collections.Generic.List`1<MB3_KMeansClustering_DataPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB3_KMeansClustering_AnyAreEmpty_m60D8694464E875FBA408D1895F45E928ADB1502D (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB3_KMeansClustering_AnyAreEmpty_m60D8694464E875FBA408D1895F45E928ADB1502D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->get__numberOfClusters_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0033;
	}

IL_0011:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = V_0;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_3 = __this->get__normalizedDataToCluster_0();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_5 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Cluster_2();
		NullCheck(L_2);
		int32_t* L_7 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_10 = V_1;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_11 = __this->get__normalizedDataToCluster_0();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline(L_11, /*hidden argument*/List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0011;
		}
	}
	{
		V_3 = 0;
		goto IL_0061;
	}

IL_0049:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_005c;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_0072;
	}

IL_005c:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_20 = V_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = V_0;
		NullCheck(L_21);
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_0049;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0072;
	}

IL_0072:
	{
		bool L_23 = V_5;
		return L_23;
	}
}
// System.Boolean MB3_KMeansClustering::UpdateClusterMembership()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB3_KMeansClustering_UpdateClusterMembership_m7833BF74D56BC01C7D6537B2E2F6AEC2AEF1F38F (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB3_KMeansClustering_UpdateClusterMembership_m7833BF74D56BC01C7D6537B2E2F6AEC2AEF1F38F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->get__numberOfClusters_2();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_009b;
	}

IL_0016:
	{
		V_4 = 0;
		goto IL_0047;
	}

IL_001c:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = V_1;
		int32_t L_3 = V_4;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_4 = __this->get__normalizedDataToCluster_0();
		int32_t L_5 = V_2;
		NullCheck(L_4);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_6 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = __this->get__clusters_1();
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		float L_11 = MB3_KMeansClustering_ElucidanDistance_mF68A58C027FEF3255BF6D060875CDDB6B0B2F6D9(__this, L_6, L_10, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)L_11);
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = __this->get__numberOfClusters_2();
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_001c;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_16 = V_1;
		int32_t L_17 = MB3_KMeansClustering_MinIndex_mE1ED5094CE78EFB2B58B0BE96ED02A54D7E31951(__this, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		int32_t L_18 = V_3;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_19 = __this->get__normalizedDataToCluster_0();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_21 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22 = L_21->get_Cluster_2();
		V_6 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)L_22))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		V_0 = (bool)1;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_24 = __this->get__normalizedDataToCluster_0();
		int32_t L_25 = V_2;
		NullCheck(L_24);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_26 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		int32_t L_27 = V_3;
		NullCheck(L_26);
		L_26->set_Cluster_2(L_27);
		goto IL_0096;
	}

IL_0094:
	{
	}

IL_0096:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_29 = V_2;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_30 = __this->get__normalizedDataToCluster_0();
		NullCheck(L_30);
		int32_t L_31 = List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline(L_30, /*hidden argument*/List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_29) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_0016;
		}
	}
	{
		bool L_33 = V_0;
		V_8 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_00c1;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_00c6;
	}

IL_00c1:
	{
		V_9 = (bool)1;
		goto IL_00c6;
	}

IL_00c6:
	{
		bool L_35 = V_9;
		return L_35;
	}
}
// System.Single MB3_KMeansClustering::ElucidanDistance(MB3_KMeansClustering_DataPoint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MB3_KMeansClustering_ElucidanDistance_mF68A58C027FEF3255BF6D060875CDDB6B0B2F6D9 (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * ___dataPoint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mean1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB3_KMeansClustering_ElucidanDistance_mF68A58C027FEF3255BF6D060875CDDB6B0B2F6D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_0 = ___dataPoint0;
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = L_0->get_center_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___mean1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_3 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Int32 MB3_KMeansClustering::MinIndex(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MB3_KMeansClustering_MinIndex_mE1ED5094CE78EFB2B58B0BE96ED02A54D7E31951 (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___distances0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		V_0 = 0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___distances0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		float L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_1 = (((double)((double)L_2)));
		V_2 = 0;
		goto IL_0026;
	}

IL_000c:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = ___distances0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		double L_7 = V_1;
		V_3 = (bool)((((double)(((double)((double)L_6)))) < ((double)L_7))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = ___distances0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = (((double)((double)L_12)));
		int32_t L_13 = V_2;
		V_0 = L_13;
	}

IL_0021:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_15 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_16 = ___distances0;
		NullCheck(L_16);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_18 = V_0;
		V_5 = L_18;
		goto IL_0037;
	}

IL_0037:
	{
		int32_t L_19 = V_5;
		return L_19;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Renderer> MB3_KMeansClustering::GetCluster(System.Int32,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * MB3_KMeansClustering_GetCluster_mB51288ABF85D5F9BCA1F4708AFD97AA0F9B8602A (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, int32_t ___idx0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___mean1, float* ___size2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB3_KMeansClustering_GetCluster_mB51288ABF85D5F9BCA1F4708AFD97AA0F9B8602A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * V_0 = NULL;
	float V_1 = 0.0f;
	bool V_2 = false;
	List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___idx0;
		int32_t L_2 = __this->get__numberOfClusters_2();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral99329778AD845E7AD5DB463E85C84DB0B482894B, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = ___mean1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_4 = L_5;
		float* L_6 = ___size2;
		*((float*)L_6) = (float)(1.0f);
		List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * L_7 = (List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 *)il2cpp_codegen_object_new(List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7_il2cpp_TypeInfo_var);
		List_1__ctor_mD3FB2818BB18D53E711CD68C4B85E604151192D1(L_7, /*hidden argument*/List_1__ctor_mD3FB2818BB18D53E711CD68C4B85E604151192D1_RuntimeMethod_var);
		V_3 = L_7;
		goto IL_010d;
	}

IL_0041:
	{
		MB3_KMeansClustering_UpdateDataPointMeans_m44AF29BF7BDF4DD768A41344C5D407B8210BB3DE(__this, (bool)1, /*hidden argument*/NULL);
		List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * L_8 = (List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 *)il2cpp_codegen_object_new(List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7_il2cpp_TypeInfo_var);
		List_1__ctor_mD3FB2818BB18D53E711CD68C4B85E604151192D1(L_8, /*hidden argument*/List_1__ctor_mD3FB2818BB18D53E711CD68C4B85E604151192D1_RuntimeMethod_var);
		V_0 = L_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_9 = ___mean1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_10 = __this->get__clusters_1();
		int32_t L_11 = ___idx0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_9 = L_13;
		V_1 = (0.0f);
		V_4 = 0;
		goto IL_00dc;
	}

IL_006c:
	{
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_14 = __this->get__normalizedDataToCluster_0();
		int32_t L_15 = V_4;
		NullCheck(L_14);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_16 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		NullCheck(L_16);
		int32_t L_17 = L_16->get_Cluster_2();
		int32_t L_18 = ___idx0;
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00d5;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_20 = ___mean1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_20);
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_22 = __this->get__normalizedDataToCluster_0();
		int32_t L_23 = V_4;
		NullCheck(L_22);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_24 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_22, L_23, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = L_24->get_center_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_26 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_21, L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		float L_27 = V_6;
		float L_28 = V_1;
		V_7 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00b6;
		}
	}
	{
		float L_30 = V_6;
		V_1 = L_30;
	}

IL_00b6:
	{
		List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * L_31 = V_0;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_32 = __this->get__normalizedDataToCluster_0();
		int32_t L_33 = V_4;
		NullCheck(L_32);
		DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * L_34 = List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_m28AE2EB108DC12F525657D40F992B734DC50F4D6_RuntimeMethod_var);
		NullCheck(L_34);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = L_34->get_gameObject_1();
		NullCheck(L_35);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_36 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD202DDB933765AC3989986C7FA3C14E6E9A191EC(L_35, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD202DDB933765AC3989986C7FA3C14E6E9A191EC_RuntimeMethod_var);
		NullCheck(L_31);
		List_1_Add_m1225A59A8213715A508D7ED9FA150A16B93555E5(L_31, L_36, /*hidden argument*/List_1_Add_m1225A59A8213715A508D7ED9FA150A16B93555E5_RuntimeMethod_var);
	}

IL_00d5:
	{
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00dc:
	{
		int32_t L_38 = V_4;
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_39 = __this->get__normalizedDataToCluster_0();
		NullCheck(L_39);
		int32_t L_40 = List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline(L_39, /*hidden argument*/List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_38) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_8;
		if (L_41)
		{
			goto IL_006c;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_42 = ___mean1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_43 = __this->get__clusters_1();
		int32_t L_44 = ___idx0;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_42 = L_46;
		float* L_47 = ___size2;
		float L_48 = V_1;
		*((float*)L_47) = (float)L_48;
		List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * L_49 = V_0;
		V_3 = L_49;
		goto IL_010d;
	}

IL_010d:
	{
		List_1_tDA9BDDA7B3D086713DAF408E3B90454B6ECA34E7 * L_50 = V_3;
		return L_50;
	}
}
// System.Void MB3_KMeansClustering::Cluster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB3_KMeansClustering_Cluster_m91AEE856C5314D72C1FB5ED3AB41E8F70BF869A8 (MB3_KMeansClustering_tE1C066A2F27DD3F0C96EECDA10A322594E60819A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB3_KMeansClustering_Cluster_m91AEE856C5314D72C1FB5ED3AB41E8F70BF869A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		V_0 = (bool)1;
		V_1 = (bool)1;
		MB3_KMeansClustering_InitializeCentroids_m4EFB731DF8D11D5CBBC1C13B8458BF8629A24C20(__this, /*hidden argument*/NULL);
		List_1_tF4A50D7B63793223006DF9B9FF06EF2826EA7FDF * L_0 = __this->get__normalizedDataToCluster_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_inline(L_0, /*hidden argument*/List_1_get_Count_mEAF05D93D84D5BAEC3B29E2C5997A9268CD16C06_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)1000)));
		V_3 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		int32_t L_2 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		bool L_3 = MB3_KMeansClustering_UpdateDataPointMeans_m44AF29BF7BDF4DD768A41344C5D407B8210BB3DE(__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = MB3_KMeansClustering_UpdateClusterMembership_m7833BF74D56BC01C7D6537B2E2F6AEC2AEF1F38F(__this, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0037:
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		G_B6_0 = ((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 0;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_0022;
		}
	}
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
// System.Void MB3_KMeansClustering_DataPoint::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPoint__ctor_m8C69F7E199D5C5ED607B6928898CF3AE7DF842B7 (DataPoint_t4F18A47BF80536EE1224C9CE815E4FA2109C8119 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataPoint__ctor_m8C69F7E199D5C5ED607B6928898CF3AE7DF842B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___go0;
		__this->set_gameObject_1(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___go0;
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		__this->set_center_0(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = ___go0;
		NullCheck(L_4);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_5 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD202DDB933765AC3989986C7FA3C14E6E9A191EC(L_4, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD202DDB933765AC3989986C7FA3C14E6E9A191EC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = ___go0;
		String_t* L_9 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralA38F5D2E2B3EAB3733AF70E18FA9662AF2086E7A, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_9, /*hidden argument*/NULL);
	}

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
// System.Void MB_AtlasesAndRects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_AtlasesAndRects__ctor_m5030B86D77EC8E16FE488B7131EBD7BE086D3249 (MB_AtlasesAndRects_t9D7B9453CF5483A7A8B6752E0C526DF3BAE0192E * __this, const RuntimeMethod* method)
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
// System.Void MB_MaterialAndUVRect::.ctor(UnityEngine.Material,UnityEngine.Rect,System.Boolean,UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Rect,DigitalOpus.MB.Core.MB_TextureTilingTreatment,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_MaterialAndUVRect__ctor_mB126AF3516C93BB18664FFD898F5A12897405628 (MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mat0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___destRect1, bool ___allPropsUseSameTiling2, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___sourceMaterialTiling3, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___samplingEncapsulatingRect4, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___srcUVsamplingRect5, int32_t ___treatment6, String_t* ___objName7, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		__this->set_textureArraySliceIdx_3((-1));
		__this->set_allPropsUseSameTiling_4((bool)1);
		__this->set_tilingTreatment_9(5);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___allPropsUseSameTiling2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
	}

IL_0024:
	{
		bool L_2 = ___allPropsUseSameTiling2;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
	}

IL_002e:
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = ___mat0;
		__this->set_material_0(L_4);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_5 = ___destRect1;
		__this->set_atlasRect_1(L_5);
		int32_t L_6 = ___treatment6;
		__this->set_tilingTreatment_9(L_6);
		bool L_7 = ___allPropsUseSameTiling2;
		__this->set_allPropsUseSameTiling_4(L_7);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_8 = ___sourceMaterialTiling3;
		__this->set_allPropsUseSameTiling_sourceMaterialTiling_5(L_8);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_9 = ___samplingEncapsulatingRect4;
		__this->set_allPropsUseSameTiling_samplingEncapsulatinRect_6(L_9);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_10 = ___srcUVsamplingRect5;
		__this->set_propsUseDifferntTiling_srcUVsamplingRect_7(L_10);
		String_t* L_11 = ___objName7;
		__this->set_srcObjName_2(L_11);
		return;
	}
}
// System.Int32 MB_MaterialAndUVRect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MB_MaterialAndUVRect_GetHashCode_m34DC6A960DF38A78C0BE4C450F23F4DEED91CD43 (MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_material_0();
		NullCheck(L_0);
		int32_t L_1 = Object_GetInstanceID_m33A817CEE904B3362C8BAAF02DB45976575CBEF4(L_0, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_2 = __this->get_address_of_allPropsUseSameTiling_samplingEncapsulatinRect_6();
		int32_t L_3 = Rect_GetHashCode_mA23F5D7C299F7E05A0390DF2FA663F5A003799C6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_2, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_4 = __this->get_address_of_propsUseDifferntTiling_srcUVsamplingRect_7();
		int32_t L_5 = Rect_GetHashCode_mA23F5D7C299F7E05A0390DF2FA663F5A003799C6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5));
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean MB_MaterialAndUVRect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB_MaterialAndUVRect_Equals_mA5982CC5E38657F115640335879B4604DAB47468 (MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_MaterialAndUVRect_Equals_mA5982CC5E38657F115640335879B4604DAB47468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 *)((MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 *)IsInstClass((RuntimeObject*)L_0, MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_007a;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = ((MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 *)CastclassClass((RuntimeObject*)L_2, MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3_il2cpp_TypeInfo_var));
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = __this->get_material_0();
		MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * L_4 = V_0;
		NullCheck(L_4);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = L_4->get_material_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_7 = __this->get_allPropsUseSameTiling_samplingEncapsulatinRect_6();
		MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * L_8 = V_0;
		NullCheck(L_8);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_9 = L_8->get_allPropsUseSameTiling_samplingEncapsulatinRect_6();
		bool L_10 = Rect_op_Equality_mFBE3505CEDD6B73F66276E782C1B02E0E5633563(L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_11 = __this->get_allPropsUseSameTiling_sourceMaterialTiling_5();
		MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * L_12 = V_0;
		NullCheck(L_12);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_13 = L_12->get_allPropsUseSameTiling_sourceMaterialTiling_5();
		bool L_14 = Rect_op_Equality_mFBE3505CEDD6B73F66276E782C1B02E0E5633563(L_11, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		bool L_15 = __this->get_allPropsUseSameTiling_4();
		MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->get_allPropsUseSameTiling_4();
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0076;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_18 = __this->get_propsUseDifferntTiling_srcUVsamplingRect_7();
		MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * L_19 = V_0;
		NullCheck(L_19);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_20 = L_19->get_propsUseDifferntTiling_srcUVsamplingRect_7();
		bool L_21 = Rect_op_Equality_mFBE3505CEDD6B73F66276E782C1B02E0E5633563(L_18, L_20, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_21));
		goto IL_0077;
	}

IL_0076:
	{
		G_B8_0 = 0;
	}

IL_0077:
	{
		V_2 = (bool)G_B8_0;
		goto IL_007a;
	}

IL_007a:
	{
		bool L_22 = V_2;
		return L_22;
	}
}
// UnityEngine.Rect MB_MaterialAndUVRect::GetEncapsulatingRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  MB_MaterialAndUVRect_GetEncapsulatingRect_mBDEF54DEB56C8FF0200505E6EDDA64951BEE8DAD (MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = __this->get_allPropsUseSameTiling_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = __this->get_allPropsUseSameTiling_samplingEncapsulatinRect_6();
		V_1 = L_2;
		goto IL_001f;
	}

IL_0015:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = __this->get_propsUseDifferntTiling_srcUVsamplingRect_7();
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Rect MB_MaterialAndUVRect::GetMaterialTilingRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  MB_MaterialAndUVRect_GetMaterialTilingRect_m08DD98253E1540CBB84D2B04F41E07EE5E25AC0F (MB_MaterialAndUVRect_tEB2BC222F1AF61A8439B0F2EE2D0300AFAC2D4F3 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = __this->get_allPropsUseSameTiling_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = __this->get_allPropsUseSameTiling_sourceMaterialTiling_5();
		V_1 = L_2;
		goto IL_0032;
	}

IL_0015:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_3), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0032;
	}

IL_0032:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4 = V_1;
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
// System.Void MB_MultiMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_MultiMaterial__ctor_m63A518281947D0B7824F9E9B62F2CC1FACB21460 (MB_MultiMaterial_t6F76216E5D059B51BBF94C01CB6CC0DB79257C15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_MultiMaterial__ctor_m63A518281947D0B7824F9E9B62F2CC1FACB21460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * L_0 = (List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA *)il2cpp_codegen_object_new(List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA_il2cpp_TypeInfo_var);
		List_1__ctor_mD2278ECC1DFA9F157785D300E40FAF78A8712EF4(L_0, /*hidden argument*/List_1__ctor_mD2278ECC1DFA9F157785D300E40FAF78A8712EF4_RuntimeMethod_var);
		__this->set_sourceMaterials_2(L_0);
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
// System.Void MB_MultiMaterialTexArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_MultiMaterialTexArray__ctor_m2F2AE15E458C6FA773E4E31CDC4225FF79FF194F (MB_MultiMaterialTexArray_t47ED49D929A860BE5071DFC88210C8BFE6B8A167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_MultiMaterialTexArray__ctor_m2F2AE15E458C6FA773E4E31CDC4225FF79FF194F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83 * L_0 = (List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83 *)il2cpp_codegen_object_new(List_1_t9F410D17AC9026DBD7BA38E8452C05E9BA923D83_il2cpp_TypeInfo_var);
		List_1__ctor_m4BD8E7B768DF04D792DBE19314B7D7B23837A544(L_0, /*hidden argument*/List_1__ctor_m4BD8E7B768DF04D792DBE19314B7D7B23837A544_RuntimeMethod_var);
		__this->set_slices_1(L_0);
		List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A * L_1 = (List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A *)il2cpp_codegen_object_new(List_1_tD15B142247487629A2CFCA3BB96BB4826C9C8D0A_il2cpp_TypeInfo_var);
		List_1__ctor_m935F80328F8629131001B9C8B572343786A00F77(L_1, /*hidden argument*/List_1__ctor_m935F80328F8629131001B9C8B572343786A00F77_RuntimeMethod_var);
		__this->set_textureProperties_2(L_1);
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
// System.Void MB_TexArrayForProperty::.ctor(System.String,MB_TextureArrayReference[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TexArrayForProperty__ctor_m73D6374794AA571C31B1CA5DB5F363BE93EA5471 (MB_TexArrayForProperty_tB1C41517AB79378551B78A1B6CB09521821D9C7B * __this, String_t* ___name0, MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61* ___texRefs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArrayForProperty__ctor_m73D6374794AA571C31B1CA5DB5F363BE93EA5471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61* L_0 = (MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61*)(MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61*)SZArrayNew(MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_formats_1(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		__this->set_texPropertyName_0(L_1);
		MB_TextureArrayReferenceU5BU5D_tD6050FD158796049DE4B5E6AF1837BBD113EDB61* L_2 = ___texRefs1;
		__this->set_formats_1(L_2);
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
// System.Boolean MB_TexArraySlice::ContainsMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB_TexArraySlice_ContainsMaterial_mCDA67FDBEC00BF83D2541CBF5FDC464612E03CF8 (MB_TexArraySlice_t5E2105D5BFF0292D2167B1AAEEB59E4DD7BE2206 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___mat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice_ContainsMaterial_mCDA67FDBEC00BF83D2541CBF5FDC464612E03CF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0005:
	{
		List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * L_0 = __this->get_sourceMaterials_1();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD * L_2 = List_1_get_Item_m325D84535F1B46C3C5A93C92159C2A1D68BE5B77_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m325D84535F1B46C3C5A93C92159C2A1D68BE5B77_RuntimeMethod_var);
		NullCheck(L_2);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = L_2->get_sourceMaterial_0();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = ___mat0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0040;
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_8 = V_0;
		List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * L_9 = __this->get_sourceMaterials_1();
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m70D5F56C177A90C0E65E60E94DE9ECD4630E6E6E_inline(L_9, /*hidden argument*/List_1_get_Count_m70D5F56C177A90C0E65E60E94DE9ECD4630E6E6E_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Material> MB_TexArraySlice::GetAllUsedMaterials(System.Collections.Generic.List`1<UnityEngine.Material>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * MB_TexArraySlice_GetAllUsedMaterials_mDC17804FF752DEE2ABB13285D907BBCBC3F89F37 (MB_TexArraySlice_t5E2105D5BFF0292D2167B1AAEEB59E4DD7BE2206 * __this, List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * ___usedMats0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice_GetAllUsedMaterials_mDC17804FF752DEE2ABB13285D907BBCBC3F89F37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * V_2 = NULL;
	{
		List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * L_0 = ___usedMats0;
		NullCheck(L_0);
		List_1_Clear_m9E02B82AAAE9DD07C5574663F89D520A1643852C(L_0, /*hidden argument*/List_1_Clear_m9E02B82AAAE9DD07C5574663F89D520A1643852C_RuntimeMethod_var);
		V_0 = 0;
		goto IL_002a;
	}

IL_000c:
	{
		List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * L_1 = ___usedMats0;
		List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * L_2 = __this->get_sourceMaterials_1();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD * L_4 = List_1_get_Item_m325D84535F1B46C3C5A93C92159C2A1D68BE5B77_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m325D84535F1B46C3C5A93C92159C2A1D68BE5B77_RuntimeMethod_var);
		NullCheck(L_4);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = L_4->get_sourceMaterial_0();
		NullCheck(L_1);
		List_1_Add_m101E88A6605F885304081FAE2AFCEA1950FA100E(L_1, L_5, /*hidden argument*/List_1_Add_m101E88A6605F885304081FAE2AFCEA1950FA100E_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_7 = V_0;
		List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * L_8 = __this->get_sourceMaterials_1();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m70D5F56C177A90C0E65E60E94DE9ECD4630E6E6E_inline(L_8, /*hidden argument*/List_1_get_Count_m70D5F56C177A90C0E65E60E94DE9ECD4630E6E6E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_000c;
		}
	}
	{
		List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * L_11 = ___usedMats0;
		V_2 = L_11;
		goto IL_0040;
	}

IL_0040:
	{
		List_1_t56B616621385F653B408094FBDFA5DEC6C4B47EA * L_12 = V_2;
		return L_12;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> MB_TexArraySlice::GetAllUsedRenderers(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * MB_TexArraySlice_GetAllUsedRenderers_m5DBE0E12484F2878581592C2E597890A8BB916F2 (MB_TexArraySlice_t5E2105D5BFF0292D2167B1AAEEB59E4DD7BE2206 * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___allObjsFromTextureBaker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice_GetAllUsedRenderers_m5DBE0E12484F2878581592C2E597890A8BB916F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * V_4 = NULL;
	{
		bool L_0 = __this->get_considerMeshUVs_0();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_2 = (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)il2cpp_codegen_object_new(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var);
		List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA(L_2, /*hidden argument*/List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0034;
	}

IL_0016:
	{
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_3 = V_1;
		List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * L_4 = __this->get_sourceMaterials_1();
		int32_t L_5 = V_2;
		NullCheck(L_4);
		MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD * L_6 = List_1_get_Item_m325D84535F1B46C3C5A93C92159C2A1D68BE5B77_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m325D84535F1B46C3C5A93C92159C2A1D68BE5B77_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = L_6->get_renderer_1();
		NullCheck(L_3);
		List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6(L_3, L_7, /*hidden argument*/List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6_RuntimeMethod_var);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_9 = V_2;
		List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * L_10 = __this->get_sourceMaterials_1();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m70D5F56C177A90C0E65E60E94DE9ECD4630E6E6E_inline(L_10, /*hidden argument*/List_1_get_Count_m70D5F56C177A90C0E65E60E94DE9ECD4630E6E6E_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_13 = V_1;
		V_4 = L_13;
		goto IL_0051;
	}

IL_004b:
	{
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_14 = ___allObjsFromTextureBaker0;
		V_4 = L_14;
		goto IL_0051;
	}

IL_0051:
	{
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_15 = V_4;
		return L_15;
	}
}
// System.Void MB_TexArraySlice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TexArraySlice__ctor_m58AA7E46CBA3AB99B701DC4D7879FFEC569039A7 (MB_TexArraySlice_t5E2105D5BFF0292D2167B1AAEEB59E4DD7BE2206 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TexArraySlice__ctor_m58AA7E46CBA3AB99B701DC4D7879FFEC569039A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A * L_0 = (List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A *)il2cpp_codegen_object_new(List_1_t2FC7DABEA98E7792EF352D92AFA001547470F86A_il2cpp_TypeInfo_var);
		List_1__ctor_m8512B464F9D6F816B95ECBB0A7A058077B9EE0E0(L_0, /*hidden argument*/List_1__ctor_m8512B464F9D6F816B95ECBB0A7A058077B9EE0E0_RuntimeMethod_var);
		__this->set_sourceMaterials_1(L_0);
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
// System.Void MB_TexArraySliceRendererMatPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TexArraySliceRendererMatPair__ctor_mD787090B9C2E5049ABFFAAED2AB40394CB6A1D4D (MB_TexArraySliceRendererMatPair_tE62897DF08D32EE5182DA9FEA8E34481819851AD * __this, const RuntimeMethod* method)
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
// System.Void MB_TextureArrayFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureArrayFormat__ctor_m5DCBD764EAF790B762A90CA5C2AC1CFC70F229CC (MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * __this, const RuntimeMethod* method)
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
// System.Boolean MB_TextureArrayFormatSet::ValidateTextureImporterFormatsExistsForTextureFormats(DigitalOpus.MB.Core.MB2_EditorMethodsInterface,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB_TextureArrayFormatSet_ValidateTextureImporterFormatsExistsForTextureFormats_mCEFEF56C3F2F01886E32C7B0F1CC207D3E5AFB86 (MB_TextureArrayFormatSet_tE54821745326A9FFFCC73276B6C616D9CDCCE9E4 * __this, RuntimeObject* ___editorMethods0, int32_t ___idx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureArrayFormatSet_ValidateTextureImporterFormatsExistsForTextureFormats_mCEFEF56C3F2F01886E32C7B0F1CC207D3E5AFB86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = ___editorMethods0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_00fe;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___editorMethods0;
		int32_t L_3 = __this->get_defaultFormat_1();
		NullCheck(L_2);
		bool L_4 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(17 /* System.Boolean DigitalOpus.MB.Core.MB2_EditorMethodsInterface::TextureImporterFormatExistsForTextureFormat(UnityEngine.TextureFormat) */, MB2_EditorMethodsInterface_t2346583498B5D0C92A52CDBDA92A892E9CF56D63_il2cpp_TypeInfo_var, L_2, L_3);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA6625DEAFFCF8956BDB38E86E85323291D9FC6DB);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA6625DEAFFCF8956BDB38E86E85323291D9FC6DB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		int32_t L_9 = ___idx1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1119A9E9F2A3420154BECCDD6A1BAC71B84D1AC5);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1119A9E9F2A3420154BECCDD6A1BAC71B84D1AC5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		int32_t L_14 = __this->get_defaultFormat_1();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_17, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_00fe;
	}

IL_0063:
	{
		V_3 = 0;
		goto IL_00e6;
	}

IL_0067:
	{
		RuntimeObject* L_18 = ___editorMethods0;
		MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* L_19 = __this->get_formatOverrides_2();
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		int32_t L_23 = L_22->get_format_1();
		NullCheck(L_18);
		bool L_24 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(17 /* System.Boolean DigitalOpus.MB.Core.MB2_EditorMethodsInterface::TextureImporterFormatExistsForTextureFormat(UnityEngine.TextureFormat) */, MB2_EditorMethodsInterface_t2346583498B5D0C92A52CDBDA92A892E9CF56D63_il2cpp_TypeInfo_var, L_18, L_23);
		V_4 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00e1;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralA6625DEAFFCF8956BDB38E86E85323291D9FC6DB);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA6625DEAFFCF8956BDB38E86E85323291D9FC6DB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_27;
		int32_t L_29 = ___idx1;
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral9321B91F8F37544A7272ED374A48FC4BE8625066);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral9321B91F8F37544A7272ED374A48FC4BE8625066);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_32;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_36);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = L_33;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_37;
		MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* L_39 = __this->get_formatOverrides_2();
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		int32_t L_43 = L_42->get_format_1();
		int32_t L_44 = L_43;
		RuntimeObject * L_45 = Box(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_45);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_45);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_46 = L_38;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_47 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_47, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_00fe;
	}

IL_00e1:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00e6:
	{
		int32_t L_49 = V_3;
		MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* L_50 = __this->get_formatOverrides_2();
		NullCheck(L_50);
		V_5 = (bool)((((int32_t)L_49) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_0067;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_00fe;
	}

IL_00fe:
	{
		bool L_52 = V_1;
		return L_52;
	}
}
// UnityEngine.TextureFormat MB_TextureArrayFormatSet::GetFormatForProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MB_TextureArrayFormatSet_GetFormatForProperty_mF892183A6A338BE70F4244DDF67464CF60F26A80 (MB_TextureArrayFormatSet_tE54821745326A9FFFCC73276B6C616D9CDCCE9E4 * __this, String_t* ___propName0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0005:
	{
		MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* L_0 = __this->get_formatOverrides_2();
		MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* L_1 = __this->get_formatOverrides_2();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5 = L_4->get_propertyName_0();
		NullCheck((RuntimeObject *)(RuntimeObject *)L_0);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(RuntimeObject *)L_0, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* L_8 = __this->get_formatOverrides_2();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MB_TextureArrayFormat_t07F35EFF95426DFD3A4FA4B343EDD90978F024F6 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		int32_t L_12 = L_11->get_format_1();
		V_2 = L_12;
		goto IL_0050;
	}

IL_0033:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_14 = V_0;
		MB_TextureArrayFormatU5BU5D_t7763140D6DA28BAD0C443DB374B6ED567DD8FE38* L_15 = __this->get_formatOverrides_2();
		NullCheck(L_15);
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_17 = __this->get_defaultFormat_1();
		V_2 = L_17;
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_18 = V_2;
		return L_18;
	}
}
// System.Void MB_TextureArrayFormatSet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureArrayFormatSet__ctor_m7BEB215BDB0CD7BD3BCECCCD9159815F78B81813 (MB_TextureArrayFormatSet_tE54821745326A9FFFCC73276B6C616D9CDCCE9E4 * __this, const RuntimeMethod* method)
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
// System.Void MB_TextureArrayReference::.ctor(System.String,UnityEngine.Texture2DArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureArrayReference__ctor_mDE0D3D24E1CDED31C6772E39D3D4914BDA37C427 (MB_TextureArrayReference_tE3CFC08FA98A3D02044428FB04864EB35A1B7314 * __this, String_t* ___formatSetName0, Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * ___ta1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___formatSetName0;
		__this->set_texFromatSetName_0(L_0);
		Texture2DArray_t78E2A31569610CAD1EA2115AD121B771C4E454B8 * L_1 = ___ta1;
		__this->set_texArray_1(L_1);
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
// System.Void MB_TextureArrayResultMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureArrayResultMaterial__ctor_mD4B796BED4DA7048C5696757EDAEBE4A58CC20FF (MB_TextureArrayResultMaterial_t32A5964B83560169769B483A909A0987FDAFFE05 * __this, const RuntimeMethod* method)
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
// UnityEngine.Texture2D MB_TextureCombinerRenderTexture::DoRenderAtlas(UnityEngine.GameObject,System.Int32,System.Int32,System.Int32,UnityEngine.Rect[],System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet>,System.Int32,DigitalOpus.MB.Core.ShaderTextureProperty,DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties,System.Boolean,System.Boolean,System.Boolean,DigitalOpus.MB.Core.MB3_TextureCombiner,DigitalOpus.MB.Core.MB2_LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * MB_TextureCombinerRenderTexture_DoRenderAtlas_m80C091C43CE1672DB6A5A376AAC020D32827270E (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, int32_t ___width1, int32_t ___height2, int32_t ___padding3, RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* ___rss4, List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * ___textureSetss5, int32_t ___indexOfTexSetToRenders6, ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * ___texPropertyname7, MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * ___resultMaterialTextureBlender8, bool ___isNormalMap9, bool ___fixOutOfBoundsUVs10, bool ___considerNonTextureProperties11, MB3_TextureCombiner_t9BBAB2C277B8944A90BD926B7C1125027F1573B0 * ___texCombiner12, int32_t ___LOG_LEV13, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_DoRenderAtlas_m80C091C43CE1672DB6A5A376AAC020D32827270E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * V_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_5 = NULL;
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	{
		int32_t L_0 = ___LOG_LEV13;
		__this->set_LOG_LEVEL_0(L_0);
		List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * L_1 = ___textureSetss5;
		__this->set_textureSets_9(L_1);
		int32_t L_2 = ___indexOfTexSetToRenders6;
		__this->set_indexOfTexSetToRender_10(L_2);
		ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * L_3 = ___texPropertyname7;
		__this->set__texPropertyName_11(L_3);
		int32_t L_4 = ___padding3;
		__this->set__padding_4(L_4);
		bool L_5 = ___isNormalMap9;
		__this->set__isNormalMap_5(L_5);
		bool L_6 = ___fixOutOfBoundsUVs10;
		__this->set__fixOutOfBoundsUVs_6(L_6);
		MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * L_7 = ___resultMaterialTextureBlender8;
		__this->set__resultMaterialTextureBlender_12(L_7);
		RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* L_8 = ___rss4;
		__this->set_rs_8(L_8);
		bool L_9 = __this->get__isNormalMap_5();
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_11 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteral997305CC915D44CAD76820FDC08C59038A60ADF1, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_006f;
	}

IL_0062:
	{
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_12 = Shader_Find_m755654AA68D1C663A3E20A10E00CDC10F96C962B(_stringLiteralD0F27D9AB86D79EB880D4BCBED9F7D3FA5DDB297, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_006f:
	{
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral6ABA02DE09AA502E9CFE0C6144D9E8A65611EFDA, /*hidden argument*/NULL);
		V_5 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
		goto IL_0233;
	}

IL_0090:
	{
		Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * L_16 = V_0;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_17 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m81E76B5C1316004F25D4FE9CEC0E78A7428DABA8(L_17, L_16, /*hidden argument*/NULL);
		__this->set_mat_1(L_17);
		int32_t L_18 = ___width1;
		int32_t L_19 = ___height2;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_20 = (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 *)il2cpp_codegen_object_new(RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m0FF5DDAB599ED301091CF23D4C76691D8EC70CA5(L_20, L_18, L_19, ((int32_t)24), 0, /*hidden argument*/NULL);
		__this->set__destinationTexture_2(L_20);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_21 = __this->get__destinationTexture_2();
		NullCheck(L_21);
		Texture_set_filterMode_mB9AC927A527EFE95771B9B438E2CFB9EDA84AF01(L_21, 0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = ___gameObject0;
		NullCheck(L_22);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_23 = GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mC7A785FC805DC2AAF33ACC6863244352CD0B8052(L_22, /*hidden argument*/GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mC7A785FC805DC2AAF33ACC6863244352CD0B8052_RuntimeMethod_var);
		__this->set_myCamera_3(L_23);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_24 = __this->get_myCamera_3();
		NullCheck(L_24);
		Camera_set_orthographic_mB2549D26F5E220102D7478EB4C15F8F12D96FE09(L_24, (bool)1, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_25 = __this->get_myCamera_3();
		int32_t L_26 = ___height2;
		NullCheck(L_25);
		Camera_set_orthographicSize_mF15F37A294A7AA2ADD9519728A495DFA0A836428(L_25, (((float)((float)((int32_t)((int32_t)L_26>>(int32_t)1))))), /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_27 = __this->get_myCamera_3();
		int32_t L_28 = ___width1;
		int32_t L_29 = ___height2;
		NullCheck(L_27);
		Camera_set_aspect_m84BE4641686B30B8F9FFEA47BB1D7D88E27344EE(L_27, ((float)((float)(((float)((float)L_28)))/(float)(((float)((float)L_29))))), /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_30 = __this->get_myCamera_3();
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_31 = __this->get__destinationTexture_2();
		NullCheck(L_30);
		Camera_set_targetTexture_m9D0DCEFF0C5596CBBC6FA7EE206F196CB0A8997D(L_30, L_31, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_32 = __this->get_myCamera_3();
		NullCheck(L_32);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_32, 2, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_33 = __this->get_myCamera_3();
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m1F9576DC1C4A81D31D05BDDEBCE134AA97FF4075(L_33, /*hidden argument*/Component_GetComponent_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m1F9576DC1C4A81D31D05BDDEBCE134AA97FF4075_RuntimeMethod_var);
		V_1 = L_34;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = V_1;
		int32_t L_36 = ___width1;
		int32_t L_37 = ___height2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_38), ((float)((float)(((float)((float)L_36)))/(float)(2.0f))), ((float)((float)(((float)((float)L_37)))/(float)(2.0f))), (3.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_35, L_38, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (180.0f), (180.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_39, L_40, /*hidden argument*/NULL);
		__this->set__doRenderAtlas_7((bool)1);
		int32_t L_41 = __this->get_LOG_LEVEL_0();
		V_6 = (bool)((((int32_t)((((int32_t)L_41) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_01d8;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = L_43;
		int32_t L_45 = ___width1;
		int32_t L_46 = L_45;
		RuntimeObject * L_47 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_47);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = L_44;
		int32_t L_49 = ___height2;
		int32_t L_50 = L_49;
		RuntimeObject * L_51 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_51);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_52 = L_48;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = V_1;
		NullCheck(L_53);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = L_54;
		RuntimeObject * L_56 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_56);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_56);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = L_52;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_58 = __this->get_myCamera_3();
		NullCheck(L_58);
		float L_59 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_58, /*hidden argument*/NULL);
		float L_60 = L_59;
		RuntimeObject * L_61 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_60);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_61);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_61);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_62 = L_57;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_63 = __this->get_myCamera_3();
		NullCheck(L_63);
		float L_64 = Camera_get_aspect_m2ADA7982754920C3B58B4DB664801D6F2416E0C6(L_63, /*hidden argument*/NULL);
		V_7 = L_64;
		String_t* L_65 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&V_7), _stringLiteral547CD2BA3A17B483651496C5BA8C78F1789B5CBD, /*hidden argument*/NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_65);
		String_t* L_66 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral71C08B660D88620290DF439F4F694EB4D0C33B28, L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_66, /*hidden argument*/NULL);
	}

IL_01d8:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_67 = __this->get_myCamera_3();
		NullCheck(L_67);
		Camera_Render_m397647083E9A37A18A452C4D7FCF23CCF8870F42(L_67, /*hidden argument*/NULL);
		__this->set__doRenderAtlas_7((bool)0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_68 = __this->get_mat_1();
		IL2CPP_RUNTIME_CLASS_INIT(MB_Utility_t45F3853AE303AD3AD397ED0F30DDC57720DD95AA_il2cpp_TypeInfo_var);
		MB_Utility_Destroy_m8C210EB0F77E754DCB706DB9DA70226D0E8096BC(L_68, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_69 = __this->get__destinationTexture_2();
		MB_Utility_Destroy_m8C210EB0F77E754DCB706DB9DA70226D0E8096BC(L_69, /*hidden argument*/NULL);
		int32_t L_70 = __this->get_LOG_LEVEL_0();
		V_8 = (bool)((((int32_t)((((int32_t)L_70) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_71 = V_8;
		if (!L_71)
		{
			goto IL_0220;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral8D6C081350C92EE4D419E10558D5341CC61484D1, /*hidden argument*/NULL);
	}

IL_0220:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_72 = __this->get_targTex_13();
		V_2 = L_72;
		__this->set_targTex_13((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_73 = V_2;
		V_5 = L_73;
		goto IL_0233;
	}

IL_0233:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_74 = V_5;
		return L_74;
	}
}
// System.Void MB_TextureCombinerRenderTexture::OnRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture_OnRenderObject_m28664C8C71B03B56B4BF6A7E12AAEFE9DA72AF14 (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_OnRenderObject_m28664C8C71B03B56B4BF6A7E12AAEFE9DA72AF14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * V_1 = NULL;
	bool V_2 = false;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_3 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * V_8 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_9 = NULL;
	bool V_10 = false;
	DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	int64_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_23;
	memset((&V_23), 0, sizeof(V_23));
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_31;
	memset((&V_31), 0, sizeof(V_31));
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B42_0 = 0;
	{
		bool L_0 = __this->get__doRenderAtlas_7();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_04e8;
		}
	}
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_2 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_3 = V_1;
		NullCheck(L_3);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_3, /*hidden argument*/NULL);
		bool L_4 = MB_TextureCombinerRenderTexture_YisFlipped_mB24583B38290325F99CC00D2DF972274784422DA(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		V_7 = 0;
		goto IL_018f;
	}

IL_002b:
	{
		List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * L_5 = __this->get_textureSets_9();
		int32_t L_6 = V_7;
		NullCheck(L_5);
		MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * L_7 = List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_RuntimeMethod_var);
		NullCheck(L_7);
		MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28* L_8 = L_7->get_ts_0();
		int32_t L_9 = __this->get_indexOfTexSetToRender_10();
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_8 = L_11;
		MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * L_12 = V_8;
		NullCheck(L_12);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_13 = MeshBakerMaterialTexture_GetTexture2D_m0764FAD10C696504BC9D550A76A267808735B366(L_12, /*hidden argument*/NULL);
		V_9 = L_13;
		int32_t L_14 = __this->get_LOG_LEVEL_0();
		if ((((int32_t)L_14) < ((int32_t)5)))
		{
			goto IL_0063;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_15 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_16));
		goto IL_0064;
	}

IL_0063:
	{
		G_B5_0 = 0;
	}

IL_0064:
	{
		V_10 = (bool)G_B5_0;
		bool L_17 = V_10;
		if (!L_17)
		{
			goto IL_0134;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralC9F46372E92AE5AE501FCDA5242E60F4D9669331);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC9F46372E92AE5AE501FCDA5242E60F4D9669331);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = V_9;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_20;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral7A3F0261EFE659995A470E469F40133E7FA656BA);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7A3F0261EFE659995A470E469F40133E7FA656BA);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_24 = V_9;
		NullCheck(L_24);
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_23;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralA1A08CE86D8A2AF150E903536E8229B24F185D5F);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralA1A08CE86D8A2AF150E903536E8229B24F185D5F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_28;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_30 = V_9;
		NullCheck(L_30);
		int32_t L_31 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_30);
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_33);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_29;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral93DBFA7FA18C0F6AA85C235AA81EB2F2C898F0B6);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral93DBFA7FA18C0F6AA85C235AA81EB2F2C898F0B6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = L_34;
		MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * L_36 = V_8;
		NullCheck(L_36);
		DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  L_37 = MeshBakerMaterialTexture_get_matTilingRect_mA0AE7B4ADB0754A65040C5778535E0EE0E21008C_inline(L_36, /*hidden argument*/NULL);
		V_11 = L_37;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = DRect_get_min_m2461330EC603E1259B99D5DD1303B72D23A049C3((DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 *)(&V_11), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_39 = L_38;
		RuntimeObject * L_40 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_40);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_40);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = L_35;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteralB9C16A1FF3B5B29574583668F820FA180B18D22A);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteralB9C16A1FF3B5B29574583668F820FA180B18D22A);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_41;
		MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * L_43 = V_8;
		NullCheck(L_43);
		DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  L_44 = MeshBakerMaterialTexture_get_matTilingRect_mA0AE7B4ADB0754A65040C5778535E0EE0E21008C_inline(L_43, /*hidden argument*/NULL);
		V_11 = L_44;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = DRect_get_size_mFD7EB5195A5E50AA15B250D0F484E708730409DD((DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 *)(&V_11), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46 = L_45;
		RuntimeObject * L_47 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_47);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_47);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = L_42;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral49965FA4EE87DEC548C3B24C7B9131EC580ED421);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral49965FA4EE87DEC548C3B24C7B9131EC580ED421);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_49 = L_48;
		RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* L_50 = __this->get_rs_8();
		int32_t L_51 = V_7;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_54 = L_53;
		RuntimeObject * L_55 = Box(Rect_t35B976DE901B5423C11705E156938EA27AB402CE_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_55);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_55);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_56 = L_49;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteralA80AF5BB44A09E6888B6FC2B63120815E7516E8C);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteralA80AF5BB44A09E6888B6FC2B63120815E7516E8C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = L_56;
		int32_t L_58 = __this->get__padding_4();
		int32_t L_59 = L_58;
		RuntimeObject * L_60 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_60);
		String_t* L_61 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_61, /*hidden argument*/NULL);
	}

IL_0134:
	{
		List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * L_62 = __this->get_textureSets_9();
		int32_t L_63 = V_7;
		NullCheck(L_62);
		MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * L_64 = List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_inline(L_62, L_63, /*hidden argument*/List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_RuntimeMethod_var);
		MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * L_65 = V_8;
		List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * L_66 = __this->get_textureSets_9();
		int32_t L_67 = V_7;
		NullCheck(L_66);
		MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * L_68 = List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_inline(L_66, L_67, /*hidden argument*/List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_RuntimeMethod_var);
		NullCheck(L_68);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_69 = MB_TexSet_get_obUVoffset_m03F6C8E731F7E5B8E2D09C1081F10EBA3013AD43_inline(L_68, /*hidden argument*/NULL);
		List_1_t2B45D670D2C0050A1BDDC11EDC18E50320F1F2B2 * L_70 = __this->get_textureSets_9();
		int32_t L_71 = V_7;
		NullCheck(L_70);
		MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * L_72 = List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_inline(L_70, L_71, /*hidden argument*/List_1_get_Item_m3B0F389D80051124B7BFC5BE40CE07EE10A7ABE9_RuntimeMethod_var);
		NullCheck(L_72);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_73 = MB_TexSet_get_obUVscale_m681A641FA420BE940DFC1C67048AE4541EDD4B4D_inline(L_72, /*hidden argument*/NULL);
		RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* L_74 = __this->get_rs_8();
		int32_t L_75 = V_7;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * L_78 = __this->get__texPropertyName_11();
		MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * L_79 = __this->get__resultMaterialTextureBlender_12();
		bool L_80 = V_2;
		MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m6ED17081A30F740EED54281FA1EA6FE3A14F34F4(__this, L_64, L_65, L_69, L_73, L_77, L_78, L_79, L_80, /*hidden argument*/NULL);
		int32_t L_81 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
	}

IL_018f:
	{
		int32_t L_82 = V_7;
		RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* L_83 = __this->get_rs_8();
		NullCheck(L_83);
		V_12 = (bool)((((int32_t)L_82) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_83)->max_length))))))? 1 : 0);
		bool L_84 = V_12;
		if (L_84)
		{
			goto IL_002b;
		}
	}
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_85 = V_1;
		NullCheck(L_85);
		Stopwatch_Stop_m8AE20980FC1C80DFAC27FA7E2BAFC88E94B839B3(L_85, /*hidden argument*/NULL);
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_86 = V_1;
		NullCheck(L_86);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_86, /*hidden argument*/NULL);
		int32_t L_87 = __this->get_LOG_LEVEL_0();
		V_13 = (bool)((((int32_t)((((int32_t)L_87) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_88 = V_13;
		if (!L_88)
		{
			goto IL_01e8;
		}
	}
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_89 = V_1;
		NullCheck(L_89);
		int64_t L_90 = Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177(L_89, /*hidden argument*/NULL);
		V_14 = L_90;
		String_t* L_91 = Int64_ToString_m3839C1DCB09CFC5F62D5ED87191AD482D39A4F35((int64_t*)(&V_14), _stringLiteral547CD2BA3A17B483651496C5BA8C78F1789B5CBD, /*hidden argument*/NULL);
		String_t* L_92 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralD415C05B93E3B9CC8D9B1F2DE1954BA03216A4A0, L_91, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_92, /*hidden argument*/NULL);
	}

IL_01e8:
	{
		int32_t L_93 = __this->get_LOG_LEVEL_0();
		V_15 = (bool)((((int32_t)((((int32_t)L_93) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_15;
		if (!L_94)
		{
			goto IL_0241;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_95 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_96 = L_95;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, _stringLiteral44FB460CECE054549C26EB048260F7DC965C607B);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral44FB460CECE054549C26EB048260F7DC965C607B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_97 = L_96;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_98 = __this->get__destinationTexture_2();
		NullCheck(L_98);
		int32_t L_99 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_98);
		int32_t L_100 = L_99;
		RuntimeObject * L_101 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_100);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_101);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_101);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_102 = L_97;
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, _stringLiteralA7D4AD7B14EC868CB1E0BFAA1CF17E4CD9C1AADE);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralA7D4AD7B14EC868CB1E0BFAA1CF17E4CD9C1AADE);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_103 = L_102;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_104 = __this->get__destinationTexture_2();
		NullCheck(L_104);
		int32_t L_105 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_104);
		int32_t L_106 = L_105;
		RuntimeObject * L_107 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_106);
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, L_107);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_107);
		String_t* L_108 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_103, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_108, /*hidden argument*/NULL);
	}

IL_0241:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_109 = __this->get__destinationTexture_2();
		NullCheck(L_109);
		int32_t L_110 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_109);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_111 = __this->get__destinationTexture_2();
		NullCheck(L_111);
		int32_t L_112 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_111);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_113 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_113, L_110, L_112, 5, (bool)1, /*hidden argument*/NULL);
		V_3 = L_113;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_114 = RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957(/*hidden argument*/NULL);
		V_4 = L_114;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_115 = __this->get__destinationTexture_2();
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_115, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_116 = __this->get__destinationTexture_2();
		NullCheck(L_116);
		int32_t L_117 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_116);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_118 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B(((float)((float)(((float)((float)L_117)))/(float)(512.0f))), /*hidden argument*/NULL);
		V_5 = L_118;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_119 = __this->get__destinationTexture_2();
		NullCheck(L_119);
		int32_t L_120 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_119);
		int32_t L_121 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B(((float)((float)(((float)((float)L_120)))/(float)(512.0f))), /*hidden argument*/NULL);
		V_6 = L_121;
		int32_t L_122 = V_5;
		if (!L_122)
		{
			goto IL_02af;
		}
	}
	{
		int32_t L_123 = V_6;
		G_B16_0 = ((((int32_t)L_123) == ((int32_t)0))? 1 : 0);
		goto IL_02b0;
	}

IL_02af:
	{
		G_B16_0 = 1;
	}

IL_02b0:
	{
		V_16 = (bool)G_B16_0;
		bool L_124 = V_16;
		if (!L_124)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_125 = __this->get_LOG_LEVEL_0();
		V_17 = (bool)((((int32_t)((((int32_t)L_125) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_126 = V_17;
		if (!L_126)
		{
			goto IL_02d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralD092432521AAC76E81A64AB968103E236C1DC783, /*hidden argument*/NULL);
	}

IL_02d4:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_127 = V_3;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_128 = __this->get__destinationTexture_2();
		NullCheck(L_128);
		int32_t L_129 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_128);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_130 = __this->get__destinationTexture_2();
		NullCheck(L_130);
		int32_t L_131 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_130);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_132;
		memset((&L_132), 0, sizeof(L_132));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_132), (0.0f), (0.0f), (((float)((float)L_129))), (((float)((float)L_131))), /*hidden argument*/NULL);
		NullCheck(L_127);
		Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE(L_127, L_132, 0, 0, (bool)1, /*hidden argument*/NULL);
		goto IL_0440;
	}

IL_030b:
	{
		bool L_133 = V_2;
		V_18 = (bool)((((int32_t)L_133) == ((int32_t)0))? 1 : 0);
		bool L_134 = V_18;
		if (!L_134)
		{
			goto IL_0394;
		}
	}
	{
		V_19 = 0;
		goto IL_0382;
	}

IL_031c:
	{
		V_20 = 0;
		goto IL_036f;
	}

IL_0322:
	{
		int32_t L_135 = V_19;
		V_21 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_135, (int32_t)((int32_t)512)));
		int32_t L_136 = V_20;
		V_22 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_136, (int32_t)((int32_t)512)));
		int32_t L_137 = V_21;
		int32_t L_138 = V_22;
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_23), (((float)((float)L_137))), (((float)((float)L_138))), (512.0f), (512.0f), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_139 = V_3;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_140 = V_23;
		int32_t L_141 = V_19;
		int32_t L_142 = V_20;
		NullCheck(L_139);
		Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE(L_139, L_140, ((int32_t)il2cpp_codegen_multiply((int32_t)L_141, (int32_t)((int32_t)512))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_142, (int32_t)((int32_t)512))), (bool)1, /*hidden argument*/NULL);
		int32_t L_143 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
	}

IL_036f:
	{
		int32_t L_144 = V_20;
		int32_t L_145 = V_6;
		V_24 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		bool L_146 = V_24;
		if (L_146)
		{
			goto IL_0322;
		}
	}
	{
		int32_t L_147 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1));
	}

IL_0382:
	{
		int32_t L_148 = V_19;
		int32_t L_149 = V_5;
		V_25 = (bool)((((int32_t)L_148) < ((int32_t)L_149))? 1 : 0);
		bool L_150 = V_25;
		if (L_150)
		{
			goto IL_031c;
		}
	}
	{
		goto IL_043f;
	}

IL_0394:
	{
		int32_t L_151 = __this->get_LOG_LEVEL_0();
		V_26 = (bool)((((int32_t)((((int32_t)L_151) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_152 = V_26;
		if (!L_152)
		{
			goto IL_03b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralCECEA55F2D79C99F88F6817B87517E09242CE9BB, /*hidden argument*/NULL);
	}

IL_03b2:
	{
		V_27 = 0;
		goto IL_042f;
	}

IL_03b7:
	{
		V_28 = 0;
		goto IL_041c;
	}

IL_03bd:
	{
		int32_t L_153 = V_27;
		V_29 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_153, (int32_t)((int32_t)512)));
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_154 = __this->get__destinationTexture_2();
		NullCheck(L_154);
		int32_t L_155 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_154);
		int32_t L_156 = V_28;
		V_30 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)((int32_t)512))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_156, (int32_t)((int32_t)512)))));
		int32_t L_157 = V_29;
		int32_t L_158 = V_30;
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_31), (((float)((float)L_157))), (((float)((float)L_158))), (512.0f), (512.0f), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_159 = V_3;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_160 = V_31;
		int32_t L_161 = V_27;
		int32_t L_162 = V_28;
		NullCheck(L_159);
		Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE(L_159, L_160, ((int32_t)il2cpp_codegen_multiply((int32_t)L_161, (int32_t)((int32_t)512))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_162, (int32_t)((int32_t)512))), (bool)1, /*hidden argument*/NULL);
		int32_t L_163 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)1));
	}

IL_041c:
	{
		int32_t L_164 = V_28;
		int32_t L_165 = V_6;
		V_32 = (bool)((((int32_t)L_164) < ((int32_t)L_165))? 1 : 0);
		bool L_166 = V_32;
		if (L_166)
		{
			goto IL_03bd;
		}
	}
	{
		int32_t L_167 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)1));
	}

IL_042f:
	{
		int32_t L_168 = V_27;
		int32_t L_169 = V_5;
		V_33 = (bool)((((int32_t)L_168) < ((int32_t)L_169))? 1 : 0);
		bool L_170 = V_33;
		if (L_170)
		{
			goto IL_03b7;
		}
	}
	{
	}

IL_043f:
	{
	}

IL_0440:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_171 = V_4;
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_171, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_172 = V_3;
		NullCheck(L_172);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_172, /*hidden argument*/NULL);
		int32_t L_173 = __this->get_LOG_LEVEL_0();
		V_34 = (bool)((((int32_t)((((int32_t)L_173) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_174 = V_34;
		if (!L_174)
		{
			goto IL_0496;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral3CB098B1BF01E955BFE907B5EE28D3CBC38911AC, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_175 = V_3;
		NullCheck(L_175);
		int32_t L_176 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_175);
		if ((((int32_t)L_176) > ((int32_t)((int32_t)16))))
		{
			goto IL_0486;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_177 = V_3;
		NullCheck(L_177);
		int32_t L_178 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_177);
		G_B42_0 = ((((int32_t)((((int32_t)L_178) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0487;
	}

IL_0486:
	{
		G_B42_0 = 0;
	}

IL_0487:
	{
		V_35 = (bool)G_B42_0;
		bool L_179 = V_35;
		if (!L_179)
		{
			goto IL_0495;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_180 = V_3;
		MB_TextureCombinerRenderTexture__printTexture_m191A192D99C30C93DCF65F5DDB678FA43F6608AD(__this, L_180, /*hidden argument*/NULL);
	}

IL_0495:
	{
	}

IL_0496:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_181 = __this->get_myCamera_3();
		NullCheck(L_181);
		Camera_set_targetTexture_m9D0DCEFF0C5596CBBC6FA7EE206F196CB0A8997D(L_181, (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 *)NULL, /*hidden argument*/NULL);
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1((RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 *)NULL, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_182 = V_3;
		__this->set_targTex_13(L_182);
		int32_t L_183 = __this->get_LOG_LEVEL_0();
		V_36 = (bool)((((int32_t)((((int32_t)L_183) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_184 = V_36;
		if (!L_184)
		{
			goto IL_04e7;
		}
	}
	{
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_185 = V_1;
		NullCheck(L_185);
		int64_t L_186 = Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177(L_185, /*hidden argument*/NULL);
		V_14 = L_186;
		String_t* L_187 = Int64_ToString_m3839C1DCB09CFC5F62D5ED87191AD482D39A4F35((int64_t*)(&V_14), _stringLiteral547CD2BA3A17B483651496C5BA8C78F1789B5CBD, /*hidden argument*/NULL);
		String_t* L_188 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral9751389BCF584AA9551C4A4EFF07353386487091, L_187, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_188, /*hidden argument*/NULL);
	}

IL_04e7:
	{
	}

IL_04e8:
	{
		return;
	}
}
// System.Boolean MB_TextureCombinerRenderTexture::YisFlipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MB_TextureCombinerRenderTexture_YisFlipped_mB24583B38290325F99CC00D2DF972274784422DA (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_YisFlipped_mB24583B38290325F99CC00D2DF972274784422DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		String_t* L_0 = SystemInfo_get_graphicsDeviceVersion_m64E10307E6A8F0351DB4B2CDA96480AD172F119D(/*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = MBVersion_GraphicsUVStartsAtTop_m12FA7176C555150873B5CEDF64057E49B73DDCB7(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0022;
	}

IL_001e:
	{
		V_1 = (bool)1;
	}

IL_0022:
	{
		int32_t L_4 = __this->get_LOG_LEVEL_0();
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)4))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_1), /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteralB891169FF1FE89B2BA9177B0628441280F1199F3, L_6, _stringLiteralBED9BFD9C45B7EB3675C103B91ADBD7A2140B15A, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
	}

IL_004c:
	{
		bool L_9 = V_1;
		V_4 = L_9;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_10 = V_4;
		return L_10;
	}
}
// System.Void MB_TextureCombinerRenderTexture::CopyScaledAndTiledToAtlas(DigitalOpus.MB.Core.MB_TexSet,DigitalOpus.MB.Core.MeshBakerMaterialTexture,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Rect,DigitalOpus.MB.Core.ShaderTextureProperty,DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m6ED17081A30F740EED54281FA1EA6FE3A14F34F4 (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * ___texSet0, MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * ___source1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___obUVoffset2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___obUVscale3, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rec4, ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * ___texturePropertyName5, MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * ___resultMatTexBlender6, bool ___yIsFlipped7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture_CopyScaledAndTiledToAtlas_m6ED17081A30F740EED54281FA1EA6FE3A14F34F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_4 = NULL;
	int32_t V_5 = 0;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_7 = NULL;
	DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B7_0 = 0;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___rec4;
		V_0 = L_0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = __this->get_myCamera_3();
		MB3_TextureCombinerNonTextureProperties_tBCC64B9DB6EE53D8785B4D8CC3A4D6F355C10251 * L_2 = ___resultMatTexBlender6;
		MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * L_3 = ___texSet0;
		NullCheck(L_3);
		MatsAndGOs_t809BC752AE0F92D111191938FC9C2AEB6B639462 * L_4 = L_3->get_matsAndGOs_1();
		NullCheck(L_4);
		List_1_t0518E9FB046F73D00068A19C5BB3416D833F3647 * L_5 = L_4->get_mats_0();
		NullCheck(L_5);
		MatAndTransformToMerged_tD1A5D22C6D1CF634EA4548455EAB85B8657ED142 * L_6 = List_1_get_Item_m2CD6333FDC72DB5495C760FD838836A592528975_inline(L_5, 0, /*hidden argument*/List_1_get_Item_m2CD6333FDC72DB5495C760FD838836A592528975_RuntimeMethod_var);
		NullCheck(L_6);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = L_6->get_mat_0();
		ShaderTextureProperty_t5B33347B9B822809620248530F6E0081464CF7C3 * L_8 = ___texturePropertyName5;
		NullCheck(L_2);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = MB3_TextureCombinerNonTextureProperties_GetColorForTemporaryTexture_mC291F2DD08F62DF04BAAF1424F2B7BC96231A013(L_2, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_1);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_1, L_9, /*hidden argument*/NULL);
		float L_10 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_11 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_10, (float)L_11)))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_12 = (&V_0);
		float L_13 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_12, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_14 = __this->get__destinationTexture_2();
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_15))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_16 = (&V_0);
		float L_17 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_16, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_18 = __this->get__destinationTexture_2();
		NullCheck(L_18);
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_16, ((float)il2cpp_codegen_multiply((float)L_17, (float)(((float)((float)L_19))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_20 = (&V_0);
		float L_21 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_20, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_22 = __this->get__destinationTexture_2();
		NullCheck(L_22);
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_20, ((float)il2cpp_codegen_multiply((float)L_21, (float)(((float)((float)L_23))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_24 = (&V_0);
		float L_25 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_24, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_26 = __this->get__destinationTexture_2();
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_26);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_24, ((float)il2cpp_codegen_multiply((float)L_25, (float)(((float)((float)L_27))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_28 = V_0;
		V_1 = L_28;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_29 = (&V_1);
		float L_30 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_29, /*hidden argument*/NULL);
		int32_t L_31 = __this->get__padding_4();
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_29, ((float)il2cpp_codegen_subtract((float)L_30, (float)(((float)((float)L_31))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_32 = (&V_1);
		float L_33 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_32, /*hidden argument*/NULL);
		int32_t L_34 = __this->get__padding_4();
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_32, ((float)il2cpp_codegen_subtract((float)L_33, (float)(((float)((float)L_34))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_35 = (&V_1);
		float L_36 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_35, /*hidden argument*/NULL);
		int32_t L_37 = __this->get__padding_4();
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_35, ((float)il2cpp_codegen_add((float)L_36, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)2))))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_38 = (&V_1);
		float L_39 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_38, /*hidden argument*/NULL);
		int32_t L_40 = __this->get__padding_4();
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_38, ((float)il2cpp_codegen_add((float)L_39, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2))))))), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE ));
		MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * L_41 = ___texSet0;
		NullCheck(L_41);
		MeshBakerMaterialTextureU5BU5D_t2BF3E55D294E3E0958F477B2613D90A628304B28* L_42 = L_41->get_ts_0();
		int32_t L_43 = __this->get_indexOfTexSetToRender_10();
		NullCheck(L_42);
		int32_t L_44 = L_43;
		MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  L_46 = MeshBakerMaterialTexture_GetEncapsulatingSamplingRect_m50C92023B8123BB1A34151A0D6DB16668DF7F40C(L_45, /*hidden argument*/NULL);
		V_8 = L_46;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_47 = DRect_GetRect_mDF427BBD502AE1FBF7BEEB3073D8B5490DA1C995((DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338 *)(&V_8), /*hidden argument*/NULL);
		V_3 = L_47;
		bool L_48 = __this->get__fixOutOfBoundsUVs_6();
		V_9 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_9;
		if (!L_49)
		{
			goto IL_014b;
		}
	}
	{
	}

IL_014b:
	{
		MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * L_50 = ___source1;
		NullCheck(L_50);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_51 = MeshBakerMaterialTexture_GetTexture2D_m0764FAD10C696504BC9D550A76A267808735B366(L_50, /*hidden argument*/NULL);
		V_4 = L_51;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_52 = V_4;
		NullCheck(L_52);
		int32_t L_53 = Texture_get_wrapMode_mC21054C7BC6E958937B7459DAF1D17654284B07A(L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		float L_54 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_54) == ((float)(1.0f)))))
		{
			goto IL_0196;
		}
	}
	{
		float L_55 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_55) == ((float)(1.0f)))))
		{
			goto IL_0196;
		}
	}
	{
		float L_56 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_56) == ((float)(0.0f)))))
		{
			goto IL_0196;
		}
	}
	{
		float L_57 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		G_B7_0 = ((((float)L_57) == ((float)(0.0f)))? 1 : 0);
		goto IL_0197;
	}

IL_0196:
	{
		G_B7_0 = 0;
	}

IL_0197:
	{
		V_10 = (bool)G_B7_0;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_01aa;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_59 = V_4;
		NullCheck(L_59);
		Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC(L_59, 1, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_01aa:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_60 = V_4;
		NullCheck(L_60);
		Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC(L_60, 0, /*hidden argument*/NULL);
	}

IL_01b5:
	{
		int32_t L_61 = __this->get_LOG_LEVEL_0();
		V_11 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_021d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_63 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral8BD8A53BC093D7C7F3F55B5CACBA04876B81F46F);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral8BD8A53BC093D7C7F3F55B5CACBA04876B81F46F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = L_64;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_66 = V_4;
		NullCheck(L_66);
		String_t* L_67 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_66, /*hidden argument*/NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_67);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_68 = L_65;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral7DF41F39DFD8CF028380994AD4BB11F6EE437AEB);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7DF41F39DFD8CF028380994AD4BB11F6EE437AEB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = L_68;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_70 = V_0;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_71 = L_70;
		RuntimeObject * L_72 = Box(Rect_t35B976DE901B5423C11705E156938EA27AB402CE_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_72);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_73 = L_69;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteral2AE8163A077E1261F76BB5C396CDA45647967219);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2AE8163A077E1261F76BB5C396CDA45647967219);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_74 = L_73;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_75 = V_3;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_76 = L_75;
		RuntimeObject * L_77 = Box(Rect_t35B976DE901B5423C11705E156938EA27AB402CE_il2cpp_TypeInfo_var, &L_76);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_77);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_78 = L_74;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteralF50B250C89359A85732782DC93AD1E133BF4B7CC);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralF50B250C89359A85732782DC93AD1E133BF4B7CC);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_79 = L_78;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_80 = __this->get_mat_1();
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_80);
		String_t* L_81 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_79, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_81, /*hidden argument*/NULL);
	}

IL_021d:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE ));
		float L_82 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_82, /*hidden argument*/NULL);
		float L_83 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_84 = V_4;
		NullCheck(L_84);
		int32_t L_85 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_84);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_83, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_85))))))), /*hidden argument*/NULL);
		float L_86 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_86, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_87 = V_4;
		NullCheck(L_87);
		int32_t L_88 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_87);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_88))))), /*hidden argument*/NULL);
		float L_89 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_89, /*hidden argument*/NULL);
		float L_90 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_90, /*hidden argument*/NULL);
		float L_91 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_91, /*hidden argument*/NULL);
		int32_t L_92 = __this->get__padding_4();
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_92))), /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_93 = RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957(/*hidden argument*/NULL);
		V_7 = L_93;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_94 = __this->get__destinationTexture_2();
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_94, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_95 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_96 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_97 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_98 = __this->get_mat_1();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_95, L_96, L_97, 0, 0, 0, 0, L_98, /*hidden argument*/NULL);
		float L_99 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_99, /*hidden argument*/NULL);
		float L_100 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_100, /*hidden argument*/NULL);
		float L_101 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_101, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_102 = V_4;
		NullCheck(L_102);
		int32_t L_103 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_102);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_103))))), /*hidden argument*/NULL);
		float L_104 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_104, /*hidden argument*/NULL);
		float L_105 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_106 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), ((float)il2cpp_codegen_add((float)L_105, (float)L_106)), /*hidden argument*/NULL);
		float L_107 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_107, /*hidden argument*/NULL);
		int32_t L_108 = __this->get__padding_4();
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_108))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_109 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_110 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_111 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_112 = __this->get_mat_1();
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_109, L_110, L_111, 0, 0, 0, 0, L_112, /*hidden argument*/NULL);
		float L_113 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_113, /*hidden argument*/NULL);
		float L_114 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_114, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_115 = V_4;
		NullCheck(L_115);
		int32_t L_116 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_115);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_116))))), /*hidden argument*/NULL);
		float L_117 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_117, /*hidden argument*/NULL);
		float L_118 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_118, /*hidden argument*/NULL);
		float L_119 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_119, /*hidden argument*/NULL);
		int32_t L_120 = __this->get__padding_4();
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_120))), /*hidden argument*/NULL);
		float L_121 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_121, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_122 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_123 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_124 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_125 = __this->get_mat_1();
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_122, L_123, L_124, 0, 0, 0, 0, L_125, /*hidden argument*/NULL);
		float L_126 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_127 = V_4;
		NullCheck(L_127);
		int32_t L_128 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_127);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_126, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_128))))))), /*hidden argument*/NULL);
		float L_129 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_129, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_130 = V_4;
		NullCheck(L_130);
		int32_t L_131 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_130);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_131))))), /*hidden argument*/NULL);
		float L_132 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_132, /*hidden argument*/NULL);
		float L_133 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_134 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), ((float)il2cpp_codegen_add((float)L_133, (float)L_134)), /*hidden argument*/NULL);
		float L_135 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_135, /*hidden argument*/NULL);
		int32_t L_136 = __this->get__padding_4();
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_136))), /*hidden argument*/NULL);
		float L_137 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_137, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_138 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_139 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_140 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_141 = __this->get_mat_1();
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_138, L_139, L_140, 0, 0, 0, 0, L_141, /*hidden argument*/NULL);
		float L_142 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_142, /*hidden argument*/NULL);
		float L_143 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_144 = V_4;
		NullCheck(L_144);
		int32_t L_145 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_144);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_143, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_145))))))), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_146 = V_4;
		NullCheck(L_146);
		int32_t L_147 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_146);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_147))))), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_148 = V_4;
		NullCheck(L_148);
		int32_t L_149 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_148);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_149))))), /*hidden argument*/NULL);
		float L_150 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_150, /*hidden argument*/NULL);
		float L_151 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_151, /*hidden argument*/NULL);
		int32_t L_152 = __this->get__padding_4();
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_152))), /*hidden argument*/NULL);
		int32_t L_153 = __this->get__padding_4();
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_153))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_154 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_155 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_156 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_157 = __this->get_mat_1();
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_154, L_155, L_156, 0, 0, 0, 0, L_157, /*hidden argument*/NULL);
		float L_158 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_159 = V_4;
		NullCheck(L_159);
		int32_t L_160 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_159);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_158, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_160))))))), /*hidden argument*/NULL);
		float L_161 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_162 = V_4;
		NullCheck(L_162);
		int32_t L_163 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_162);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_161, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_163))))))), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_164 = V_4;
		NullCheck(L_164);
		int32_t L_165 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_164);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_165))))), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_166 = V_4;
		NullCheck(L_166);
		int32_t L_167 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_166);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_167))))), /*hidden argument*/NULL);
		float L_168 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_169 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), ((float)il2cpp_codegen_add((float)L_168, (float)L_169)), /*hidden argument*/NULL);
		float L_170 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_170, /*hidden argument*/NULL);
		int32_t L_171 = __this->get__padding_4();
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_171))), /*hidden argument*/NULL);
		int32_t L_172 = __this->get__padding_4();
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_172))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_173 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_174 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_175 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_176 = __this->get_mat_1();
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_173, L_174, L_175, 0, 0, 0, 0, L_176, /*hidden argument*/NULL);
		float L_177 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_177, /*hidden argument*/NULL);
		float L_178 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_178, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_179 = V_4;
		NullCheck(L_179);
		int32_t L_180 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_179);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_180))))), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_181 = V_4;
		NullCheck(L_181);
		int32_t L_182 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_181);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_182))))), /*hidden argument*/NULL);
		float L_183 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), L_183, /*hidden argument*/NULL);
		float L_184 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_185 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), ((float)il2cpp_codegen_add((float)L_184, (float)L_185)), /*hidden argument*/NULL);
		int32_t L_186 = __this->get__padding_4();
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_186))), /*hidden argument*/NULL);
		int32_t L_187 = __this->get__padding_4();
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_187))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_188 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_189 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_190 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_191 = __this->get_mat_1();
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_188, L_189, L_190, 0, 0, 0, 0, L_191, /*hidden argument*/NULL);
		float L_192 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_193 = V_4;
		NullCheck(L_193);
		int32_t L_194 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_193);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_192, (float)(1.0f))), (float)((float)((float)(1.0f)/(float)(((float)((float)L_194))))))), /*hidden argument*/NULL);
		float L_195 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), L_195, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_196 = V_4;
		NullCheck(L_196);
		int32_t L_197 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_196);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_197))))), /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_198 = V_4;
		NullCheck(L_198);
		int32_t L_199 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_198);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_6), ((float)((float)(1.0f)/(float)(((float)((float)L_199))))), /*hidden argument*/NULL);
		float L_200 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_201 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), ((float)il2cpp_codegen_add((float)L_200, (float)L_201)), /*hidden argument*/NULL);
		float L_202 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_203 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), ((float)il2cpp_codegen_add((float)L_202, (float)L_203)), /*hidden argument*/NULL);
		int32_t L_204 = __this->get__padding_4();
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_204))), /*hidden argument*/NULL);
		int32_t L_205 = __this->get__padding_4();
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), (((float)((float)L_205))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_206 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_207 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_208 = V_6;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_209 = __this->get_mat_1();
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_206, L_207, L_208, 0, 0, 0, 0, L_209, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_210 = V_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_211 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_212 = V_3;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_213 = __this->get_mat_1();
		Graphics_DrawTexture_m327C85C9145093331302718229FA9FFB040A2F9E(L_210, L_211, L_212, 0, 0, 0, 0, L_213, /*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_214 = V_7;
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_214, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_215 = V_4;
		int32_t L_216 = V_5;
		NullCheck(L_215);
		Texture_set_wrapMode_m85E9A995D5947B59FE13A7311E891F3DEDEBBCEC(L_215, L_216, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MB_TextureCombinerRenderTexture::_printTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture__printTexture_m191A192D99C30C93DCF65F5DDB678FA43F6608AD (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MB_TextureCombinerRenderTexture__printTexture_m191A192D99C30C93DCF65F5DDB678FA43F6608AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ___t0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3))) > ((int32_t)((int32_t)100)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC9BD13C253E4CE648E67F089E90FE9F7D083119C, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_0027:
	{
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = ___t0;
			NullCheck(L_5);
			Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_6 = Texture2D_GetPixels32_m7CC6EC6AD48D4CD84AF28DFDFBE24750900FA2E6(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			V_3 = 0;
			goto IL_008b;
		}

IL_003a:
		{
			V_4 = 0;
			goto IL_006a;
		}

IL_0040:
		{
			String_t* L_7 = V_2;
			Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_8 = V_1;
			int32_t L_9 = V_3;
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_10 = ___t0;
			NullCheck(L_10);
			int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
			int32_t L_12 = V_4;
			NullCheck(L_8);
			int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)L_11)), (int32_t)L_12));
			Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_14 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
			Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_15 = L_14;
			RuntimeObject * L_16 = Box(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_il2cpp_TypeInfo_var, &L_15);
			String_t* L_17 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(L_7, L_16, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, /*hidden argument*/NULL);
			V_2 = L_17;
			int32_t L_18 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		}

IL_006a:
		{
			int32_t L_19 = V_4;
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_20 = ___t0;
			NullCheck(L_20);
			int32_t L_21 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
			V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_21))? 1 : 0);
			bool L_22 = V_5;
			if (L_22)
			{
				goto IL_0040;
			}
		}

IL_007a:
		{
			String_t* L_23 = V_2;
			String_t* L_24 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_23, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
			V_2 = L_24;
			int32_t L_25 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		}

IL_008b:
		{
			int32_t L_26 = V_3;
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_27 = ___t0;
			NullCheck(L_27);
			int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_27);
			V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
			bool L_29 = V_6;
			if (L_29)
			{
				goto IL_003a;
			}
		}

IL_009a:
		{
			String_t* L_30 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_30, /*hidden argument*/NULL);
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a4;
		throw e;
	}

CATCH_00a4:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		Exception_t * L_31 = V_7;
		NullCheck(L_31);
		String_t* L_32 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		String_t* L_33 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral79A09665A9492E536BDBD4D8DB7C7339374DAEA9, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_33, /*hidden argument*/NULL);
		goto IL_00c1;
	} // end catch (depth: 1)

IL_00c1:
	{
		return;
	}
}
// System.Void MB_TextureCombinerRenderTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MB_TextureCombinerRenderTexture__ctor_mFBCFC92CFA71FF119F17960562C451A358CB73D1 (MB_TextureCombinerRenderTexture_tD6A6491B5F134A2A86BDA7C455F52797687FE52B * __this, const RuntimeMethod* method)
{
	{
		__this->set_LOG_LEVEL_0(3);
		__this->set__doRenderAtlas_7((bool)0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  MeshBakerMaterialTexture_get_matTilingRect_mA0AE7B4ADB0754A65040C5778535E0EE0E21008C_inline (MeshBakerMaterialTexture_tF85C75C939DDCA949E1E6AF3E5EDC5C82CA2AB8B * __this, const RuntimeMethod* method)
{
	{
		DRect_tA922DD9839F956416F443E5C76BF0C2D6F4BE338  L_0 = __this->get_U3CmatTilingRectU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MB_TexSet_get_obUVoffset_m03F6C8E731F7E5B8E2D09C1081F10EBA3013AD43_inline (MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CobUVoffsetU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MB_TexSet_get_obUVscale_m681A641FA420BE940DFC1C67048AE4541EDD4B4D_inline (MB_TexSet_tD6F4DB1445729E0A2E1AFDA7A512BA6AD4931F5C * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CobUVscaleU3Ek__BackingField_6();
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

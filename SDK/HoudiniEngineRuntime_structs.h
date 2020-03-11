#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum HoudiniEngineRuntime.EHoudiniVertexAttributeDataType
enum class EHoudiniVertexAttributeDataType : uint8_t
{
	VADT_Float                     = 0,
	VADT_Int32                     = 1,
	VADT_Bool                      = 2,
	VADT_MAX                       = 3
};


// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
	EHoudiniHandleType__Xform      = 0,
	EHoudiniHandleType__Bounder    = 1,
	EHoudiniHandleType__Unsupported = 2,
	EHoudiniHandleType__EHoudiniHandleType_MAX = 3
};


// Enum HoudiniEngineRuntime.EHoudiniToolSelectionType
enum class EHoudiniToolSelectionType : uint8_t
{
	EHoudiniToolSelectionType__HTOOL_SELECTION_ALL = 0,
	EHoudiniToolSelectionType__HTOOL_SELECTION_WORLD_ONLY = 1,
	EHoudiniToolSelectionType__HTOOL_SELECTION_CB_ONLY = 2,
	EHoudiniToolSelectionType__HTOOL_SELECTION_MAX = 3
};


// Enum HoudiniEngineRuntime.EHoudiniToolType
enum class EHoudiniToolType : uint8_t
{
	EHoudiniToolType__HTOOLTYPE_GENERATOR = 0,
	EHoudiniToolType__HTOOLTYPE_OPERATOR_SINGLE = 1,
	EHoudiniToolType__HTOOLTYPE_OPERATOR_MULTI = 2,
	EHoudiniToolType__HTOOLTYPE_OPERATOR_BATCH = 3,
	EHoudiniToolType__HTOOLTYPE_MAX = 4
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsAxisImport
enum class EHoudiniRuntimeSettingsAxisImport : uint8_t
{
	HRSAI_Unreal                   = 0,
	HRSAI_Houdini                  = 1,
	HRSAI_MAX                      = 2
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Nothing                  = 2,
	HRSRF_MAX                      = 3
};


// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_MAX                      = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HoudiniEngineRuntime.HoudiniToolDirectory
// 0x0030
struct FHoudiniToolDirectory
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FDirectoryPath                              Path;                                                     // 0x0010(0x0010) (Edit, Config, GlobalConfig)
	struct FString                                     ContentDirID;                                             // 0x0020(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

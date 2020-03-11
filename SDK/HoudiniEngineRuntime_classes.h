#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class HoudiniEngineRuntime.HoudiniAsset
// 0x0030 (0x0058 - 0x0028)
class UHoudiniAsset : public UObject
{
public:
	struct FString                                     AssetFileName;                                            // 0x0028(0x0010) (ZeroConstructor)
	class UThumbnailInfo*                              ThumbnailInfo;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAsset");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetActor
// 0x0010 (0x0338 - 0x0328)
class AHoudiniAssetActor : public AActor
{
public:
	class UHoudiniAssetComponent*                      HoudiniAssetComponent;                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetActor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetComponent
// 0x0780 (0x0CE0 - 0x0560)
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      bGeneratedDoubleSidedGeometry : 1;                        // 0x0560(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                    // 0x0568(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               DefaultBodyInstance;                                      // 0x0570(0x0150) (Edit)
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                              // 0x06C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06C1(0x0003) MISSED OFFSET
	int                                                GeneratedLightMapResolution;                              // 0x06C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedLpvBiasMultiplier;                               // 0x06C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedDistanceFieldResolutionScale;                    // 0x06CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWalkableSlopeOverride                      GeneratedWalkableSlopeOverride;                           // 0x06D0(0x0010) (Edit, IsPlainOldData)
	int                                                GeneratedLightMapCoordinateIndex;                         // 0x06E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGeneratedUseMaximumStreamingTexelRatio : 1;              // 0x06E4(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	float                                              GeneratedStreamingDistanceMultiplier;                     // 0x06E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                          // 0x06F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                   // 0x06F8(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData04[0x478];                                     // 0x0708(0x0478) MISSED OFFSET
	struct FText                                       BakeFolder;                                               // 0x0B80(0x0018)
	struct FText                                       TempCookFolder;                                           // 0x0B98(0x0018)
	unsigned char                                      UnknownData05[0x130];                                     // 0x0BB0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponent");
		return ptr;
	}


	int GetAssetId();
};


// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials
// 0x00A8 (0x00D0 - 0x0028)
class UHoudiniAssetComponentMaterials : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameter
// 0x0078 (0x00A0 - 0x0028)
class UHoudiniAssetParameter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameter");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInput
// 0x0160 (0x0200 - 0x00A0)
class UHoudiniAssetInput : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x00A0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInput");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// 0x00E0 (0x0180 - 0x00A0)
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00A0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstanceInput");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// 0x0178 (0x01A0 - 0x0028)
class UHoudiniAssetInstanceInputField : public UObject
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0028(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterButton");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// 0x0038 (0x00D8 - 0x00A0)
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00A0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterChoice");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// 0x0010 (0x00B0 - 0x00A0)
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterColor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// 0x0028 (0x00C8 - 0x00A0)
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFile");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// 0x0038 (0x00D8 - 0x00A0)
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00A0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFloat");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolder");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// 0x0030 (0x00D0 - 0x00A0)
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterInt");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterLabel");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// 0x0010 (0x00B0 - 0x00A0)
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat
// 0x0008 (0x00B0 - 0x00A8)
class UHoudiniAssetParameterRampCurveFloat : public UCurveFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor
// 0x0018 (0x0228 - 0x0210)
class UHoudiniAssetParameterRampCurveColor : public UCurveLinearColor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0210(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// 0x0018 (0x00C8 - 0x00B0)
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameterMultiparm
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRamp");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// 0x0000 (0x00A0 - 0x00A0)
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// 0x0010 (0x00B0 - 0x00A0)
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterString");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// 0x0010 (0x00B0 - 0x00A0)
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterToggle");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAttributeDataComponent
// 0x0010 (0x0100 - 0x00F0)
class UHoudiniAttributeDataComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAttributeDataComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// 0x0000 (0x0080 - 0x0080)
class UHoudiniEngineConvertBgeoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// 0x0000 (0x0080 - 0x0080)
class UHoudiniEngineConvertBgeoDirCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.TestHoudiniParameterBuilder
// 0x00A0 (0x00C8 - 0x0028)
class UTestHoudiniParameterBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.TestHoudiniParameterBuilder");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniHandleComponent
// 0x00B0 (0x02F0 - 0x0240)
class UHoudiniHandleComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0240(0x00A8) MISSED OFFSET
	EHoudiniHandleType                                 HandleType;                                               // 0x02E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniHandleComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// 0x0010 (0x0250 - 0x0240)
class UHoudiniInstancedActorComponent : public USceneComponent
{
public:
	TArray<class AActor*>                              Instances;                                                // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInstancedActorComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// 0x0020 (0x0260 - 0x0240)
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class UStaticMesh*                                 InstancedMesh;                                            // 0x0250(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// 0x0398 (0x03C0 - 0x0028)
class UHoudiniRuntimeSettings : public UObject
{
public:
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType>    SessionType;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     ServerHost;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	int                                                ServerPort;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     ServerPipeName;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bStartAutomaticServer;                                    // 0x0058(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              AutomaticServerTimeout;                                   // 0x005C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShowMultiAssetDialog;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bPauseCookingOnStart;                                     // 0x0061(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableCooking;                                           // 0x0062(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUploadTransformsToHoudiniEngine;                         // 0x0063(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bTransformChangeTriggersCooks;                            // 0x0064(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDisplaySlateCookingNotifications;                        // 0x0065(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bCookCurvesOnMouseRelease;                                // 0x0066(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	struct FText                                       TemporaryCookFolder;                                      // 0x0068(0x0018) (Edit, Config, GlobalConfig)
	bool                                               bTreatRampParametersAsMultiparms;                         // 0x0080(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     CollisionGroupNamePrefix;                                 // 0x0088(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     RenderedCollisionGroupNamePrefix;                         // 0x0098(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     UCXCollisionGroupNamePrefix;                              // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     UCXRenderedCollisionGroupNamePrefix;                      // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     SimpleCollisionGroupNamePrefix;                           // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     SimpleRenderedCollisionGroupNamePrefix;                   // 0x00D8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     MarshallingAttributeMaterial;                             // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     MarshallingAttributeMaterialHole;                         // 0x00F8(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     MarshallingAttributeInstanceOverride;                     // 0x0108(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     MarshallingAttributeFaceSmoothingMask;                    // 0x0118(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     MarshallingAttributeLightmapResolution;                   // 0x0128(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     MarshallingAttributeGeneratedMeshName;                    // 0x0138(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     MarshallingAttributeInputMeshName;                        // 0x0148(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	struct FString                                     MarshallingAttributeInputSourceFile;                      // 0x0158(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	float                                              MarshallingSplineResolution;                              // 0x0168(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               MarshallingLandscapesUseDefaultUnrealScaling;             // 0x016C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               MarshallingLandscapesUseFullResolution;                   // 0x016D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               MarshallingLandscapesForceMinMaxValues;                   // 0x016E(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x016F(0x0001) MISSED OFFSET
	float                                              MarshallingLandscapesForcedMinValue;                      // 0x0170(0x0004) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData)
	float                                              MarshallingLandscapesForcedMaxValue;                      // 0x0174(0x0004) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData)
	float                                              GeneratedGeometryScaleFactor;                             // 0x0178(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TransformScaleFactor;                                     // 0x017C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsAxisImport>     ImportAxis;                                               // 0x0180(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	unsigned char                                      bDoubleSidedGeometry : 1;                                 // 0x0184(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBodyInstance                               DefaultBodyInstance;                                      // 0x0190(0x0150) (Edit)
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                       // 0x02E0(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	int                                                LightMapResolution;                                       // 0x02E4(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LpvBiasMultiplier;                                        // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              GeneratedDistanceFieldResolutionScale;                    // 0x02EC(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x02F0(0x0010) (Edit, Config, GlobalConfig, IsPlainOldData)
	int                                                LightMapCoordinateIndex;                                  // 0x0300(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bUseMaximumStreamingTexelRatio : 1;                       // 0x0304(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	float                                              StreamingDistanceMultiplier;                              // 0x0308(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	class UFoliageType_InstancedStaticMesh*            FoliageDefaultSettings;                                   // 0x0310(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x0318(0x0010) (Edit, ExportObject, ZeroConstructor)
	bool                                               bUseFullPrecisionUVs;                                     // 0x0328(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	int                                                SrcLightmapIndex;                                         // 0x032C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x0330(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MinLightmapResolution;                                    // 0x0334(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x0338(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  GenerateLightmapUVsFlag;                                  // 0x0339(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeNormalsFlag;                                     // 0x033A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeTangentsFlag;                                    // 0x033B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseMikkTSpace;                                           // 0x033C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bBuildAdjacencyBuffer;                                    // 0x033D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseCustomHoudiniLocation;                                // 0x033E(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x033F(0x0001) MISSED OFFSET
	struct FDirectoryPath                              CustomHoudiniLocation;                                    // 0x0340(0x0010) (Edit, Config, EditConst, GlobalConfig)
	bool                                               bHidePlacementModeHoudiniTools;                           // 0x0350(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<struct FHoudiniToolDirectory>               CustomHoudiniToolsLocation;                               // 0x0358(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	int                                                CookingThreadStackSize;                                   // 0x0368(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FString                                     HoudiniEnvironmentFiles;                                  // 0x0370(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     OtlSearchPath;                                            // 0x0380(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     DsoSearchPath;                                            // 0x0390(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ImageDsoSearchPath;                                       // 0x03A0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     AudioDsoSearchPath;                                       // 0x03B0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniRuntimeSettings");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniSplineComponent
// 0x0100 (0x0340 - 0x0240)
class UHoudiniSplineComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0240(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniSplineComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

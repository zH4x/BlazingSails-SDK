#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WaterPlane.WaterPlane_C.UpdateTrailMatSpeed
struct AWaterPlane_C_UpdateTrailMatSpeed_Params
{
	class UMaterialInstanceDynamic*                    TrailDynMat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TrailSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.MakeTrailMaterial
struct AWaterPlane_C_MakeTrailMaterial_Params
{
	class UMaterialInstanceDynamic*                    DynamicMat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetWaves;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.ULQ_MakeSeaPlanes
struct AWaterPlane_C_ULQ_MakeSeaPlanes_Params
{
};

// Function WaterPlane.WaterPlane_C.LQ_MakeSeaPlanes
struct AWaterPlane_C_LQ_MakeSeaPlanes_Params
{
};

// Function WaterPlane.WaterPlane_C.HQ_MakeSeaPlanes
struct AWaterPlane_C_HQ_MakeSeaPlanes_Params
{
};

// Function WaterPlane.WaterPlane_C.GetPrimitiveCompFromBoatMesh
struct AWaterPlane_C_GetPrimitiveCompFromBoatMesh_Params
{
	class ABP_BoatMeshBase_C*                          BoatMeshRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.UserConstructionScript
struct AWaterPlane_C_UserConstructionScript_Params
{
};

// Function WaterPlane.WaterPlane_C.ReceiveTick
struct AWaterPlane_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.UpdateWaveParameters
struct AWaterPlane_C_UpdateWaveParameters_Params
{
	bool                                               CreateDynMat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.1_MakeGridLayer
struct AWaterPlane_C__1_MakeGridLayer_Params
{
	TEnumAsByte<E_QualitySettingWater>                 QualityWater;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.ReceiveBeginPlay
struct AWaterPlane_C_ReceiveBeginPlay_Params
{
};

// Function WaterPlane.WaterPlane_C.No shadow
struct AWaterPlane_C_No_shadow_Params
{
};

// Function WaterPlane.WaterPlane_C.AddNewShipCulling
struct AWaterPlane_C_AddNewShipCulling_Params
{
	class ABP_ShipWaterCulling_C*                      CullingVolumeRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          BoatMeshRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.CreateWaterMask
struct AWaterPlane_C_CreateWaterMask_Params
{
};

// Function WaterPlane.WaterPlane_C.RemoveShipCulling
struct AWaterPlane_C_RemoveShipCulling_Params
{
	class ABP_BoatMeshBase_C*                          BoatMeshRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.AddSeasphereVals
struct AWaterPlane_C_AddSeasphereVals_Params
{
};

// Function WaterPlane.WaterPlane_C.InitWater
struct AWaterPlane_C_InitWater_Params
{
};

// Function WaterPlane.WaterPlane_C.OverrideMaterialInstances
struct AWaterPlane_C_OverrideMaterialInstances_Params
{
};

// Function WaterPlane.WaterPlane_C.CalculateSkipiteration
struct AWaterPlane_C_CalculateSkipiteration_Params
{
	TEnumAsByte<E_QualitySettingWater>                 WaterQuality;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WaterPlane.WaterPlane_C.ExecuteUbergraph_WaterPlane
struct AWaterPlane_C_ExecuteUbergraph_WaterPlane_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WaterPlane.WaterPlane_C.UpdateTrailMatSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* TrailDynMat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TrailSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::UpdateTrailMatSpeed(class UMaterialInstanceDynamic* TrailDynMat, float TrailSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.UpdateTrailMatSpeed");

	AWaterPlane_C_UpdateTrailMatSpeed_Params params;
	params.TrailDynMat = TrailDynMat;
	params.TrailSpeed = TrailSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.MakeTrailMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DynamicMat                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetWaves                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::MakeTrailMaterial(class UMaterialInstanceDynamic* DynamicMat, const struct FVector& OffsetWaves)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.MakeTrailMaterial");

	AWaterPlane_C_MakeTrailMaterial_Params params;
	params.DynamicMat = DynamicMat;
	params.OffsetWaves = OffsetWaves;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.ULQ_MakeSeaPlanes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::ULQ_MakeSeaPlanes()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.ULQ_MakeSeaPlanes");

	AWaterPlane_C_ULQ_MakeSeaPlanes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.LQ_MakeSeaPlanes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::LQ_MakeSeaPlanes()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.LQ_MakeSeaPlanes");

	AWaterPlane_C_LQ_MakeSeaPlanes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.HQ_MakeSeaPlanes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::HQ_MakeSeaPlanes()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.HQ_MakeSeaPlanes");

	AWaterPlane_C_HQ_MakeSeaPlanes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.GetPrimitiveCompFromBoatMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatMeshRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWaterPlane_C::GetPrimitiveCompFromBoatMesh(class ABP_BoatMeshBase_C* BoatMeshRef, class UPrimitiveComponent** PrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.GetPrimitiveCompFromBoatMesh");

	AWaterPlane_C_GetPrimitiveCompFromBoatMesh_Params params;
	params.BoatMeshRef = BoatMeshRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimitiveComponent != nullptr)
		*PrimitiveComponent = params.PrimitiveComponent;
}


// Function WaterPlane.WaterPlane_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.UserConstructionScript");

	AWaterPlane_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.ReceiveTick");

	AWaterPlane_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.UpdateWaveParameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CreateDynMat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::UpdateWaveParameters(bool CreateDynMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.UpdateWaveParameters");

	AWaterPlane_C_UpdateWaveParameters_Params params;
	params.CreateDynMat = CreateDynMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.1_MakeGridLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_QualitySettingWater> QualityWater                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::_1_MakeGridLayer(TEnumAsByte<E_QualitySettingWater> QualityWater)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.1_MakeGridLayer");

	AWaterPlane_C__1_MakeGridLayer_Params params;
	params.QualityWater = QualityWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWaterPlane_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.ReceiveBeginPlay");

	AWaterPlane_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.No shadow
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::No_shadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.No shadow");

	AWaterPlane_C_No_shadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.AddNewShipCulling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ShipWaterCulling_C*  CullingVolumeRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BoatMeshBase_C*      BoatMeshRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::AddNewShipCulling(class ABP_ShipWaterCulling_C* CullingVolumeRef, class ABP_BoatMeshBase_C* BoatMeshRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.AddNewShipCulling");

	AWaterPlane_C_AddNewShipCulling_Params params;
	params.CullingVolumeRef = CullingVolumeRef;
	params.BoatMeshRef = BoatMeshRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.CreateWaterMask
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::CreateWaterMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.CreateWaterMask");

	AWaterPlane_C_CreateWaterMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.RemoveShipCulling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BoatMeshBase_C*      BoatMeshRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::RemoveShipCulling(class ABP_BoatMeshBase_C* BoatMeshRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.RemoveShipCulling");

	AWaterPlane_C_RemoveShipCulling_Params params;
	params.BoatMeshRef = BoatMeshRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.AddSeasphereVals
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::AddSeasphereVals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.AddSeasphereVals");

	AWaterPlane_C_AddSeasphereVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.InitWater
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::InitWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.InitWater");

	AWaterPlane_C_InitWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.OverrideMaterialInstances
// (BlueprintCallable, BlueprintEvent)

void AWaterPlane_C::OverrideMaterialInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.OverrideMaterialInstances");

	AWaterPlane_C_OverrideMaterialInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.CalculateSkipiteration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_QualitySettingWater> WaterQuality                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::CalculateSkipiteration(TEnumAsByte<E_QualitySettingWater> WaterQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.CalculateSkipiteration");

	AWaterPlane_C_CalculateSkipiteration_Params params;
	params.WaterQuality = WaterQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaterPlane.WaterPlane_C.ExecuteUbergraph_WaterPlane
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaterPlane_C::ExecuteUbergraph_WaterPlane(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterPlane.WaterPlane_C.ExecuteUbergraph_WaterPlane");

	AWaterPlane_C_ExecuteUbergraph_WaterPlane_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

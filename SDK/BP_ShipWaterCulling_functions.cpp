
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

// Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipWaterCulling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.UserConstructionScript");

	ABP_ShipWaterCulling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ShowCulling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipWaterCulling_C::ShowCulling(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ShowCulling");

	ABP_ShipWaterCulling_C_ShowCulling_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShipWaterCulling_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ReceiveBeginPlay");

	ABP_ShipWaterCulling_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ExecuteUbergraph_BP_ShipWaterCulling
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipWaterCulling_C::ExecuteUbergraph_BP_ShipWaterCulling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipWaterCulling.BP_ShipWaterCulling_C.ExecuteUbergraph_BP_ShipWaterCulling");

	ABP_ShipWaterCulling_C_ExecuteUbergraph_BP_ShipWaterCulling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

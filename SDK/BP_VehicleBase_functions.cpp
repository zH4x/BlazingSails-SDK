
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

// Function BP_VehicleBase.BP_VehicleBase_C.OnRep_IsOccupied
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::OnRep_IsOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.OnRep_IsOccupied");

	ABP_VehicleBase_C_OnRep_IsOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.UserConstructionScript");

	ABP_VehicleBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VehicleBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.ReceiveBeginPlay");

	ABP_VehicleBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.ReceiveTick");

	ABP_VehicleBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.Reset
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.Reset");

	ABP_VehicleBase_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.UnOccupied
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::UnOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.UnOccupied");

	ABP_VehicleBase_C_UnOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.Occupied
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::Occupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.Occupied");

	ABP_VehicleBase_C_Occupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.OnRepOccupied
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::OnRepOccupied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.OnRepOccupied");

	ABP_VehicleBase_C_OnRepOccupied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.ShowInteractionIndicator
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::ShowInteractionIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.ShowInteractionIndicator");

	ABP_VehicleBase_C_ShowInteractionIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.HideInteractionIndicator
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::HideInteractionIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.HideInteractionIndicator");

	ABP_VehicleBase_C_HideInteractionIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.OC_AddVehicleUI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::OC_AddVehicleUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.OC_AddVehicleUI");

	ABP_VehicleBase_C_OC_AddVehicleUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.RefreshKeys
// (BlueprintCallable, BlueprintEvent)

void ABP_VehicleBase_C::RefreshKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.RefreshKeys");

	ABP_VehicleBase_C_RefreshKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VehicleBase.BP_VehicleBase_C.ExecuteUbergraph_BP_VehicleBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VehicleBase_C::ExecuteUbergraph_BP_VehicleBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VehicleBase.BP_VehicleBase_C.ExecuteUbergraph_BP_VehicleBase");

	ABP_VehicleBase_C_ExecuteUbergraph_BP_VehicleBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_PickupSmallShot.BP_PickupSmallShot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupSmallShot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupSmallShot.BP_PickupSmallShot_C.UserConstructionScript");

	ABP_PickupSmallShot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupSmallShot.BP_PickupSmallShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupSmallShot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupSmallShot.BP_PickupSmallShot_C.ReceiveBeginPlay");

	ABP_PickupSmallShot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupSmallShot.BP_PickupSmallShot_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupSmallShot_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupSmallShot.BP_PickupSmallShot_C.S_Activate");

	ABP_PickupSmallShot_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupSmallShot.BP_PickupSmallShot_C.ExecuteUbergraph_BP_PickupSmallShot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupSmallShot_C::ExecuteUbergraph_BP_PickupSmallShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupSmallShot.BP_PickupSmallShot_C.ExecuteUbergraph_BP_PickupSmallShot");

	ABP_PickupSmallShot_C_ExecuteUbergraph_BP_PickupSmallShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

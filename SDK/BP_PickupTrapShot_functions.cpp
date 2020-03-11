
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

// Function BP_PickupTrapShot.BP_PickupTrapShot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupTrapShot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupTrapShot.BP_PickupTrapShot_C.UserConstructionScript");

	ABP_PickupTrapShot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupTrapShot.BP_PickupTrapShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupTrapShot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupTrapShot.BP_PickupTrapShot_C.ReceiveBeginPlay");

	ABP_PickupTrapShot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupTrapShot.BP_PickupTrapShot_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupTrapShot_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupTrapShot.BP_PickupTrapShot_C.S_Activate");

	ABP_PickupTrapShot_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupTrapShot.BP_PickupTrapShot_C.ExecuteUbergraph_BP_PickupTrapShot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupTrapShot_C::ExecuteUbergraph_BP_PickupTrapShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupTrapShot.BP_PickupTrapShot_C.ExecuteUbergraph_BP_PickupTrapShot");

	ABP_PickupTrapShot_C_ExecuteUbergraph_BP_PickupTrapShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

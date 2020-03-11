
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

// Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupCannonUpgrade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.UserConstructionScript");

	ABP_PickupCannonUpgrade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupCannonUpgrade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.ReceiveBeginPlay");

	ABP_PickupCannonUpgrade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.S_Activate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PickupCannonUpgrade_C::S_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.S_Activate");

	ABP_PickupCannonUpgrade_C_S_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.ExecuteUbergraph_BP_PickupCannonUpgrade
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupCannonUpgrade_C::ExecuteUbergraph_BP_PickupCannonUpgrade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupCannonUpgrade.BP_PickupCannonUpgrade_C.ExecuteUbergraph_BP_PickupCannonUpgrade");

	ABP_PickupCannonUpgrade_C_ExecuteUbergraph_BP_PickupCannonUpgrade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

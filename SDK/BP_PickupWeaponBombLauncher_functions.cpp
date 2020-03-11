
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

// Function BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupWeaponBombLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C.UserConstructionScript");

	ABP_PickupWeaponBombLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupWeaponBombLauncher_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C.ReceiveTick");

	ABP_PickupWeaponBombLauncher_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C.ExecuteUbergraph_BP_PickupWeaponBombLauncher
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupWeaponBombLauncher_C::ExecuteUbergraph_BP_PickupWeaponBombLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupWeaponBombLauncher.BP_PickupWeaponBombLauncher_C.ExecuteUbergraph_BP_PickupWeaponBombLauncher");

	ABP_PickupWeaponBombLauncher_C_ExecuteUbergraph_BP_PickupWeaponBombLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

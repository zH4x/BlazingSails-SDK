
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

// Function BP_WeaponFlintlockBurster.BP_WeaponFlintlockBurster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponFlintlockBurster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFlintlockBurster.BP_WeaponFlintlockBurster_C.UserConstructionScript");

	ABP_WeaponFlintlockBurster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFlintlockBurster.BP_WeaponFlintlockBurster_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponFlintlockBurster_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFlintlockBurster.BP_WeaponFlintlockBurster_C.ReceiveTick");

	ABP_WeaponFlintlockBurster_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFlintlockBurster.BP_WeaponFlintlockBurster_C.ExecuteUbergraph_BP_WeaponFlintlockBurster
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponFlintlockBurster_C::ExecuteUbergraph_BP_WeaponFlintlockBurster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFlintlockBurster.BP_WeaponFlintlockBurster_C.ExecuteUbergraph_BP_WeaponFlintlockBurster");

	ABP_WeaponFlintlockBurster_C_ExecuteUbergraph_BP_WeaponFlintlockBurster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

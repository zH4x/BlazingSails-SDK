
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

// Function BP_WeaponFuseBomb.BP_WeaponFuseBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponFuseBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFuseBomb.BP_WeaponFuseBomb_C.UserConstructionScript");

	ABP_WeaponFuseBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFuseBomb.BP_WeaponFuseBomb_C.ToggleLoadedState_2
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponFuseBomb_C::ToggleLoadedState_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFuseBomb.BP_WeaponFuseBomb_C.ToggleLoadedState_2");

	ABP_WeaponFuseBomb_C_ToggleLoadedState_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFuseBomb.BP_WeaponFuseBomb_C.ExecuteUbergraph_BP_WeaponFuseBomb
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponFuseBomb_C::ExecuteUbergraph_BP_WeaponFuseBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFuseBomb.BP_WeaponFuseBomb_C.ExecuteUbergraph_BP_WeaponFuseBomb");

	ABP_WeaponFuseBomb_C_ExecuteUbergraph_BP_WeaponFuseBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

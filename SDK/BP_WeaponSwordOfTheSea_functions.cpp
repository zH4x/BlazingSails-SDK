
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

// Function BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponSwordOfTheSea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C.UserConstructionScript");

	ABP_WeaponSwordOfTheSea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C.PlayerHitEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponSwordOfTheSea_C::PlayerHitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C.PlayerHitEvent");

	ABP_WeaponSwordOfTheSea_C_PlayerHitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C.ExecuteUbergraph_BP_WeaponSwordOfTheSea
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSwordOfTheSea_C::ExecuteUbergraph_BP_WeaponSwordOfTheSea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSwordOfTheSea.BP_WeaponSwordOfTheSea_C.ExecuteUbergraph_BP_WeaponSwordOfTheSea");

	ABP_WeaponSwordOfTheSea_C_ExecuteUbergraph_BP_WeaponSwordOfTheSea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

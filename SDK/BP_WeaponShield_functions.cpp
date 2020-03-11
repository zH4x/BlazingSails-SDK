
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

// Function BP_WeaponShield.BP_WeaponShield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponShield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponShield.BP_WeaponShield_C.UserConstructionScript");

	ABP_WeaponShield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponShield.BP_WeaponShield_C.ExecuteUbergraph_BP_WeaponShield
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponShield_C::ExecuteUbergraph_BP_WeaponShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponShield.BP_WeaponShield_C.ExecuteUbergraph_BP_WeaponShield");

	ABP_WeaponShield_C_ExecuteUbergraph_BP_WeaponShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.OnRep_ShowWeapon
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponTomahawk_C::OnRep_ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.OnRep_ShowWeapon");

	ABP_WeaponTomahawk_C_OnRep_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponTomahawk_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.UserConstructionScript");

	ABP_WeaponTomahawk_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.MC_Throw
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponTomahawk_C::MC_Throw(const struct FVector& Location, const struct FVector& Direction, int TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.MC_Throw");

	ABP_WeaponTomahawk_C_MC_Throw_Params params;
	params.Location = Location;
	params.Direction = Direction;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.SecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponTomahawk_C::SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.SecondaryFire");

	ABP_WeaponTomahawk_C_SecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.ExecuteUbergraph_BP_WeaponTomahawk
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponTomahawk_C::ExecuteUbergraph_BP_WeaponTomahawk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponTomahawk.BP_WeaponTomahawk_C.ExecuteUbergraph_BP_WeaponTomahawk");

	ABP_WeaponTomahawk_C_ExecuteUbergraph_BP_WeaponTomahawk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_WeaponSniper2.BP_WeaponSniper2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponSniper2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSniper2.BP_WeaponSniper2_C.UserConstructionScript");

	ABP_WeaponSniper2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSniper2.BP_WeaponSniper2_C.SecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSniper2_C::SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSniper2.BP_WeaponSniper2_C.SecondaryFire");

	ABP_WeaponSniper2_C_SecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSniper2.BP_WeaponSniper2_C.HolsteredEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_WeaponSniper2_C::HolsteredEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSniper2.BP_WeaponSniper2_C.HolsteredEvent");

	ABP_WeaponSniper2_C_HolsteredEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSniper2.BP_WeaponSniper2_C.StopSecondaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSniper2_C::StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSniper2.BP_WeaponSniper2_C.StopSecondaryFire");

	ABP_WeaponSniper2_C_StopSecondaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSniper2.BP_WeaponSniper2_C.ExecuteUbergraph_BP_WeaponSniper2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSniper2_C::ExecuteUbergraph_BP_WeaponSniper2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSniper2.BP_WeaponSniper2_C.ExecuteUbergraph_BP_WeaponSniper2");

	ABP_WeaponSniper2_C_ExecuteUbergraph_BP_WeaponSniper2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

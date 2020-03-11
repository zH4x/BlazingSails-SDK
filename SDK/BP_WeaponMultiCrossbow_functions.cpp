
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

// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponMultiCrossbow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.UserConstructionScript");

	ABP_WeaponMultiCrossbow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMultiCrossbow_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.ReceiveTick");

	ABP_WeaponMultiCrossbow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.PrimaryFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FullPrecision                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasSprinting                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMultiCrossbow_C::PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.PrimaryFire");

	ABP_WeaponMultiCrossbow_C_PrimaryFire_Params params;
	params.CameraLocation = CameraLocation;
	params.Direction = Direction;
	params.FullPrecision = FullPrecision;
	params.WasSprinting = WasSprinting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMultiCrossbow_C::LoadedState(bool Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.LoadedState");

	ABP_WeaponMultiCrossbow_C_LoadedState_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.ExecuteUbergraph_BP_WeaponMultiCrossbow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponMultiCrossbow_C::ExecuteUbergraph_BP_WeaponMultiCrossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponMultiCrossbow.BP_WeaponMultiCrossbow_C.ExecuteUbergraph_BP_WeaponMultiCrossbow");

	ABP_WeaponMultiCrossbow_C_ExecuteUbergraph_BP_WeaponMultiCrossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

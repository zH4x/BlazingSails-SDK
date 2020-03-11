
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

// Function BP_WeaponCrossbow.BP_WeaponCrossbow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponCrossbow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponCrossbow.BP_WeaponCrossbow_C.UserConstructionScript");

	ABP_WeaponCrossbow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponCrossbow.BP_WeaponCrossbow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponCrossbow_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponCrossbow.BP_WeaponCrossbow_C.ReceiveTick");

	ABP_WeaponCrossbow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponCrossbow.BP_WeaponCrossbow_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponCrossbow_C::LoadedState(bool Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponCrossbow.BP_WeaponCrossbow_C.LoadedState");

	ABP_WeaponCrossbow_C_LoadedState_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponCrossbow.BP_WeaponCrossbow_C.ExecuteUbergraph_BP_WeaponCrossbow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponCrossbow_C::ExecuteUbergraph_BP_WeaponCrossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponCrossbow.BP_WeaponCrossbow_C.ExecuteUbergraph_BP_WeaponCrossbow");

	ABP_WeaponCrossbow_C_ExecuteUbergraph_BP_WeaponCrossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

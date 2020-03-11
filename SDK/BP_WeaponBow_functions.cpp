
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

// Function BP_WeaponBow.BP_WeaponBow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponBow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBow.BP_WeaponBow_C.UserConstructionScript");

	ABP_WeaponBow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBow.BP_WeaponBow_C.LoadedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBow_C::LoadedState(bool Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBow.BP_WeaponBow_C.LoadedState");

	ABP_WeaponBow_C_LoadedState_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBow.BP_WeaponBow_C.ExecuteUbergraph_BP_WeaponBow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBow_C::ExecuteUbergraph_BP_WeaponBow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBow.BP_WeaponBow_C.ExecuteUbergraph_BP_WeaponBow");

	ABP_WeaponBow_C_ExecuteUbergraph_BP_WeaponBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

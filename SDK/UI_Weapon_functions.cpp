
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

// Function UI_Weapon.UI_Weapon_C.SetReloadingVisbility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Weapon_C::SetReloadingVisbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Weapon.UI_Weapon_C.SetReloadingVisbility");

	UUI_Weapon_C_SetReloadingVisbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Weapon.UI_Weapon_C.SetReloadingPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_Weapon_C::SetReloadingPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Weapon.UI_Weapon_C.SetReloadingPercent");

	UUI_Weapon_C_SetReloadingPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

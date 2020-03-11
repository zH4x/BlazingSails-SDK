
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

// Function UI_Actionbar.UI_Actionbar_C.ShowNumbers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Actionbar_C::ShowNumbers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.ShowNumbers");

	UUI_Actionbar_C_ShowNumbers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Actionbar.UI_Actionbar_C.ShowNotUseableCrosses
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Actionbar_C::ShowNotUseableCrosses()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.ShowNotUseableCrosses");

	UUI_Actionbar_C_ShowNotUseableCrosses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Actionbar.UI_Actionbar_C.SetHammerIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Actionbar_C::SetHammerIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.SetHammerIcon");

	UUI_Actionbar_C_SetHammerIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Actionbar.UI_Actionbar_C.SetThrowableIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Actionbar_C::SetThrowableIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.SetThrowableIcon");

	UUI_Actionbar_C_SetThrowableIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Actionbar.UI_Actionbar_C.SetMeleeIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Actionbar_C::SetMeleeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.SetMeleeIcon");

	UUI_Actionbar_C_SetMeleeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Actionbar.UI_Actionbar_C.SetSelectionVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Actionbar_C::SetSelectionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.SetSelectionVisibility");

	UUI_Actionbar_C_SetSelectionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Actionbar.UI_Actionbar_C.SetSideArmIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Actionbar_C::SetSideArmIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.SetSideArmIcon");

	UUI_Actionbar_C_SetSideArmIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Actionbar.UI_Actionbar_C.SetMainWeaponIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Actionbar_C::SetMainWeaponIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.SetMainWeaponIcon");

	UUI_Actionbar_C_SetMainWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Actionbar.UI_Actionbar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Actionbar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.Tick");

	UUI_Actionbar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Actionbar.UI_Actionbar_C.refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_Actionbar_C::refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.refresh");

	UUI_Actionbar_C_refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Actionbar.UI_Actionbar_C.ExecuteUbergraph_UI_Actionbar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Actionbar_C::ExecuteUbergraph_UI_Actionbar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Actionbar.UI_Actionbar_C.ExecuteUbergraph_UI_Actionbar");

	UUI_Actionbar_C_ExecuteUbergraph_UI_Actionbar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

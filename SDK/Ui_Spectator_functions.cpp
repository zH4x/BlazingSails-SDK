
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

// Function Ui_Spectator.UI_Spectator_C.SetTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Spectator_C::SetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.SetTeam");

	UUI_Spectator_C_SetTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ui_Spectator.UI_Spectator_C.SetShowDefeatedUI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Spectator_C::SetShowDefeatedUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.SetShowDefeatedUI");

	UUI_Spectator_C_SetShowDefeatedUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ui_Spectator.UI_Spectator_C.SetShowSpectatorUI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Spectator_C::SetShowSpectatorUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.SetShowSpectatorUI");

	UUI_Spectator_C_SetShowSpectatorUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ui_Spectator.UI_Spectator_C.SetLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Spectator_C::SetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.SetLevel");

	UUI_Spectator_C_SetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ui_Spectator.UI_Spectator_C.SetSpectatingName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_Spectator_C::SetSpectatingName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.SetSpectatingName");

	UUI_Spectator_C_SetSpectatingName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ui_Spectator.UI_Spectator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Spectator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.Construct");

	UUI_Spectator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ui_Spectator.UI_Spectator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Spectator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.Tick");

	UUI_Spectator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ui_Spectator.UI_Spectator_C.ExecuteUbergraph_UI_Spectator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Spectator_C::ExecuteUbergraph_UI_Spectator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ui_Spectator.UI_Spectator_C.ExecuteUbergraph_UI_Spectator");

	UUI_Spectator_C_ExecuteUbergraph_UI_Spectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

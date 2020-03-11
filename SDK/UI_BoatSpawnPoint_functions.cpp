
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

// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ResetSwords
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BoatSpawnPoint_C::ResetSwords()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ResetSwords");

	UUI_BoatSpawnPoint_C_ResetSwords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.GetPlayerAmountAndColors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamMemberAmountThatSelectedThis (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Colors                         (Parm, OutParm, ZeroConstructor)

void UUI_BoatSpawnPoint_C::GetPlayerAmountAndColors(int* TeamMemberAmountThatSelectedThis, TArray<int>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.GetPlayerAmountAndColors");

	UUI_BoatSpawnPoint_C_GetPlayerAmountAndColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamMemberAmountThatSelectedThis != nullptr)
		*TeamMemberAmountThatSelectedThis = params.TeamMemberAmountThatSelectedThis;
	if (Colors != nullptr)
		*Colors = params.Colors;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_BoatSpawnPoint_C::ShowImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowImage");

	UUI_BoatSpawnPoint_C_ShowImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetTopArrowColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_BoatSpawnPoint_C::SetTopArrowColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetTopArrowColor");

	UUI_BoatSpawnPoint_C_SetTopArrowColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetRightArrowColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_BoatSpawnPoint_C::SetRightArrowColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetRightArrowColor");

	UUI_BoatSpawnPoint_C_SetRightArrowColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetLeftArrowColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_BoatSpawnPoint_C::SetLeftArrowColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetLeftArrowColor");

	UUI_BoatSpawnPoint_C_SetLeftArrowColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetBottomArrowColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_BoatSpawnPoint_C::SetBottomArrowColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetBottomArrowColor");

	UUI_BoatSpawnPoint_C_SetBottomArrowColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowTopArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_BoatSpawnPoint_C::ShowTopArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowTopArrow");

	UUI_BoatSpawnPoint_C_ShowTopArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowRightArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_BoatSpawnPoint_C::ShowRightArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowRightArrow");

	UUI_BoatSpawnPoint_C_ShowRightArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowLeftArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_BoatSpawnPoint_C::ShowLeftArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowLeftArrow");

	UUI_BoatSpawnPoint_C_ShowLeftArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowBottomArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_BoatSpawnPoint_C::ShowBottomArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ShowBottomArrow");

	UUI_BoatSpawnPoint_C_ShowBottomArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetEnableButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_BoatSpawnPoint_C::SetEnableButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SetEnableButton");

	UUI_BoatSpawnPoint_C_SetEnableButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BoatSpawnPoint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.Tick");

	UUI_BoatSpawnPoint_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_BoatSpawnPoint_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_BoatSpawnPoint_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SelectSpawnPoint
// (BlueprintCallable, BlueprintEvent)

void UUI_BoatSpawnPoint_C::SelectSpawnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.SelectSpawnPoint");

	UUI_BoatSpawnPoint_C_SelectSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.Update
// (BlueprintCallable, BlueprintEvent)

void UUI_BoatSpawnPoint_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.Update");

	UUI_BoatSpawnPoint_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ExecuteUbergraph_UI_BoatSpawnPoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BoatSpawnPoint_C::ExecuteUbergraph_UI_BoatSpawnPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BoatSpawnPoint.UI_BoatSpawnPoint_C.ExecuteUbergraph_UI_BoatSpawnPoint");

	UUI_BoatSpawnPoint_C_ExecuteUbergraph_UI_BoatSpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

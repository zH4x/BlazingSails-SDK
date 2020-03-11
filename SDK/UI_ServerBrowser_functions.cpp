
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

// Function UI_ServerBrowser.UI_ServerBrowser_C.SetTotalPlayerAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ServerBrowser_C::SetTotalPlayerAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.SetTotalPlayerAmount");

	UUI_ServerBrowser_C_SetTotalPlayerAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowOutdatedWarning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ServerBrowser_C::ShowOutdatedWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.ShowOutdatedWarning");

	UUI_ServerBrowser_C_ShowOutdatedWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowTopInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ServerBrowser_C::ShowTopInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.ShowTopInfo");

	UUI_ServerBrowser_C_ShowTopInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ShowThrobbler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ServerBrowser_C::ShowThrobbler()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.ShowThrobbler");

	UUI_ServerBrowser_C_ShowThrobbler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.SetServersText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_ServerBrowser_C::SetServersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.SetServersText");

	UUI_ServerBrowser_C_SetServersText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.SetNoServersVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ServerBrowser_C::SetNoServersVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.SetNoServersVisibility");

	UUI_ServerBrowser_C_SetNoServersVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.OnFailure_372B4671406457B058FF9DAE29112477
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_ServerBrowser_C::OnFailure_372B4671406457B058FF9DAE29112477(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.OnFailure_372B4671406457B058FF9DAE29112477");

	UUI_ServerBrowser_C_OnFailure_372B4671406457B058FF9DAE29112477_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.OnSuccess_372B4671406457B058FF9DAE29112477
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_ServerBrowser_C::OnSuccess_372B4671406457B058FF9DAE29112477(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.OnSuccess_372B4671406457B058FF9DAE29112477");

	UUI_ServerBrowser_C_OnSuccess_372B4671406457B058FF9DAE29112477_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ServerBrowser_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.Construct");

	UUI_ServerBrowser_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.RefreshServerList
// (BlueprintCallable, BlueprintEvent)

void UUI_ServerBrowser_C::RefreshServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.RefreshServerList");

	UUI_ServerBrowser_C_RefreshServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ServerBrowser_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ServerBrowser_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__ComboBoxString_97_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerBrowser_C::BndEvt__ComboBoxString_97_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.BndEvt__ComboBoxString_97_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UUI_ServerBrowser_C_BndEvt__ComboBoxString_97_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ServerBrowser.UI_ServerBrowser_C.ExecuteUbergraph_UI_ServerBrowser
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ServerBrowser_C::ExecuteUbergraph_UI_ServerBrowser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ServerBrowser.UI_ServerBrowser_C.ExecuteUbergraph_UI_ServerBrowser");

	UUI_ServerBrowser_C_ExecuteUbergraph_UI_ServerBrowser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

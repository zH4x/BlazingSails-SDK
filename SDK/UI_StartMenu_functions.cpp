
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

// Function UI_StartMenu.UI_StartMenu_C.DoMatchmaking
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FBlueprintSessionResult SessionResult                  (Parm, OutParm)

void UUI_StartMenu_C::DoMatchmaking(TArray<struct FBlueprintSessionResult>* Sessions, struct FBlueprintSessionResult* SessionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.DoMatchmaking");

	UUI_StartMenu_C_DoMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;
	if (SessionResult != nullptr)
		*SessionResult = params.SessionResult;
}


// Function UI_StartMenu.UI_StartMenu_C.ShowShip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_StartMenu_C::ShowShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ShowShip");

	UUI_StartMenu_C_ShowShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StartMenu.UI_StartMenu_C.ShowBackButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_StartMenu_C::ShowBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ShowBackButton");

	UUI_StartMenu_C_ShowBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StartMenu.UI_StartMenu_C.ShowJoin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_StartMenu_C::ShowJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ShowJoin");

	UUI_StartMenu_C_ShowJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StartMenu.UI_StartMenu_C.ShowHost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_StartMenu_C::ShowHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ShowHost");

	UUI_StartMenu_C_ShowHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StartMenu.UI_StartMenu_C.ShowOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_StartMenu_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ShowOptions");

	UUI_StartMenu_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StartMenu.UI_StartMenu_C.ShowPlayerSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_StartMenu_C::ShowPlayerSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ShowPlayerSettings");

	UUI_StartMenu_C_ShowPlayerSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StartMenu.UI_StartMenu_C.ShowMainMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_StartMenu_C::ShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ShowMainMenu");

	UUI_StartMenu_C_ShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StartMenu.UI_StartMenu_C.OnFailure_DBBC3B8C410D99DDEE9D67AE135FE6C5
// (BlueprintCallable, BlueprintEvent)

void UUI_StartMenu_C::OnFailure_DBBC3B8C410D99DDEE9D67AE135FE6C5()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.OnFailure_DBBC3B8C410D99DDEE9D67AE135FE6C5");

	UUI_StartMenu_C_OnFailure_DBBC3B8C410D99DDEE9D67AE135FE6C5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.OnSuccess_DBBC3B8C410D99DDEE9D67AE135FE6C5
// (BlueprintCallable, BlueprintEvent)

void UUI_StartMenu_C::OnSuccess_DBBC3B8C410D99DDEE9D67AE135FE6C5()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.OnSuccess_DBBC3B8C410D99DDEE9D67AE135FE6C5");

	UUI_StartMenu_C_OnSuccess_DBBC3B8C410D99DDEE9D67AE135FE6C5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.OnFailure_74E9BBAC4E496CBE0A0A0FA679459784
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_StartMenu_C::OnFailure_74E9BBAC4E496CBE0A0A0FA679459784(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.OnFailure_74E9BBAC4E496CBE0A0A0FA679459784");

	UUI_StartMenu_C_OnFailure_74E9BBAC4E496CBE0A0A0FA679459784_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.OnSuccess_74E9BBAC4E496CBE0A0A0FA679459784
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_StartMenu_C::OnSuccess_74E9BBAC4E496CBE0A0A0FA679459784(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.OnSuccess_74E9BBAC4E496CBE0A0A0FA679459784");

	UUI_StartMenu_C_OnSuccess_74E9BBAC4E496CBE0A0A0FA679459784_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_StartMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.Tick");

	UUI_StartMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_91_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Button_91_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_91_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Button_91_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Button_90_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Button_90_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Options_K2Node_ComponentBoundEvent_685_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Btn_Options_K2Node_ComponentBoundEvent_685_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Options_K2Node_ComponentBoundEvent_685_OnButtonClickedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Btn_Options_K2Node_ComponentBoundEvent_685_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1537_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1537_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1537_OnButtonClickedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1537_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)

void UUI_StartMenu_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ResetCamera");

	UUI_StartMenu_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.RefreshVersion
// (BlueprintCallable, BlueprintEvent)

void UUI_StartMenu_C::RefreshVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.RefreshVersion");

	UUI_StartMenu_C_RefreshVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Button_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Button_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Button_59_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_StartMenu_C::BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UUI_StartMenu_C_BndEvt__Btn_Wishlist_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.BackToMainMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_StartMenu_C::BackToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.BackToMainMenu");

	UUI_StartMenu_C_BackToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_StartMenu_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.OnInitialized");

	UUI_StartMenu_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_StartMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.Construct");

	UUI_StartMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.RefreshOptionsEnabledState
// (BlueprintCallable, BlueprintEvent)

void UUI_StartMenu_C::RefreshOptionsEnabledState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.RefreshOptionsEnabledState");

	UUI_StartMenu_C_RefreshOptionsEnabledState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StartMenu.UI_StartMenu_C.ExecuteUbergraph_UI_StartMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_StartMenu_C::ExecuteUbergraph_UI_StartMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StartMenu.UI_StartMenu_C.ExecuteUbergraph_UI_StartMenu");

	UUI_StartMenu_C_ExecuteUbergraph_UI_StartMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

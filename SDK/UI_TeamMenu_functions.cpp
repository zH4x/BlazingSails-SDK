
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

// Function UI_TeamMenu.UI_TeamMenu_C.ShowAllTeamsAreFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_TeamMenu_C::ShowAllTeamsAreFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenu.UI_TeamMenu_C.ShowAllTeamsAreFull");

	UUI_TeamMenu_C_ShowAllTeamsAreFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamMenu.UI_TeamMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TeamMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenu.UI_TeamMenu_C.Construct");

	UUI_TeamMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamMenu.UI_TeamMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenu.UI_TeamMenu_C.Tick");

	UUI_TeamMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamMenu.UI_TeamMenu_C.BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_TeamMenu_C::BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenu.UI_TeamMenu_C.BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_TeamMenu_C_BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamMenu.UI_TeamMenu_C.BndEvt__Button_258_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_TeamMenu_C::BndEvt__Button_258_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenu.UI_TeamMenu_C.BndEvt__Button_258_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_TeamMenu_C_BndEvt__Button_258_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamMenu.UI_TeamMenu_C.LoadTeams
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamMenu_C::LoadTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenu.UI_TeamMenu_C.LoadTeams");

	UUI_TeamMenu_C_LoadTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamMenu.UI_TeamMenu_C.CloseTeammenu
// (BlueprintCallable, BlueprintEvent)

void UUI_TeamMenu_C::CloseTeammenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenu.UI_TeamMenu_C.CloseTeammenu");

	UUI_TeamMenu_C_CloseTeammenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamMenu.UI_TeamMenu_C.ExecuteUbergraph_UI_TeamMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamMenu_C::ExecuteUbergraph_UI_TeamMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenu.UI_TeamMenu_C.ExecuteUbergraph_UI_TeamMenu");

	UUI_TeamMenu_C_ExecuteUbergraph_UI_TeamMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

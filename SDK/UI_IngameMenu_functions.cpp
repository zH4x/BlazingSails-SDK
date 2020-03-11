
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

// Function UI_IngameMenu.UI_IngameMenu_C.SetEnableKickBan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_IngameMenu_C::SetEnableKickBan()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.SetEnableKickBan");

	UUI_IngameMenu_C_SetEnableKickBan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_IngameMenu.UI_IngameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_IngameMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.Construct");

	UUI_IngameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_IngameMenu.UI_IngameMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_IngameMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.Tick");

	UUI_IngameMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_IngameMenu.UI_IngameMenu_C.BndEvt__Button_199_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_IngameMenu_C::BndEvt__Button_199_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.BndEvt__Button_199_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_IngameMenu_C_BndEvt__Button_199_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_IngameMenu.UI_IngameMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_IngameMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature");

	UUI_IngameMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_IngameMenu.UI_IngameMenu_C.CloseSubMenus
// (BlueprintCallable, BlueprintEvent)

void UUI_IngameMenu_C::CloseSubMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.CloseSubMenus");

	UUI_IngameMenu_C_CloseSubMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_IngameMenu.UI_IngameMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_411_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_IngameMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_411_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_411_OnButtonClickedEvent__DelegateSignature");

	UUI_IngameMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_411_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_IngameMenu.UI_IngameMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_484_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_IngameMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_484_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_484_OnButtonClickedEvent__DelegateSignature");

	UUI_IngameMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_484_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_IngameMenu.UI_IngameMenu_C.ExecuteUbergraph_UI_IngameMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_IngameMenu_C::ExecuteUbergraph_UI_IngameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_IngameMenu.UI_IngameMenu_C.ExecuteUbergraph_UI_IngameMenu");

	UUI_IngameMenu_C_ExecuteUbergraph_UI_IngameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function UI_Character.UI_Character_C.LoadActiveTab
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Character_C::LoadActiveTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.LoadActiveTab");

	UUI_Character_C_LoadActiveTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.PreviousCosmetic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Character_C::PreviousCosmetic(int Index, class UDataTable* DataTable, int* NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.PreviousCosmetic");

	UUI_Character_C_PreviousCosmetic_Params params;
	params.Index = Index;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewIndex != nullptr)
		*NewIndex = params.NewIndex;
}


// Function UI_Character.UI_Character_C.NextCosmetic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Character_C::NextCosmetic(int Index, class UDataTable* DataTable, int* NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.NextCosmetic");

	UUI_Character_C_NextCosmetic_Params params;
	params.Index = Index;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewIndex != nullptr)
		*NewIndex = params.NewIndex;
}


// Function UI_Character.UI_Character_C.LoadCustomisation
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Character_C::LoadCustomisation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.LoadCustomisation");

	UUI_Character_C_LoadCustomisation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Character_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.Construct");

	UUI_Character_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Character_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.Tick");

	UUI_Character_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Character_C::BndEvt__Btn_Join_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature");

	UUI_Character_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_371_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.RefreshCharacterUI
// (BlueprintCallable, BlueprintEvent)

void UUI_Character_C::RefreshCharacterUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.RefreshCharacterUI");

	UUI_Character_C_RefreshCharacterUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.BndEvt__Btn_Hats_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Character_C::BndEvt__Btn_Hats_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.BndEvt__Btn_Hats_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_Character_C_BndEvt__Btn_Hats_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Character_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_Character_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Character_C::BndEvt__Button_10_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UUI_Character_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Character_C::BndEvt__Button_9_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UUI_Character_C_BndEvt__Button_9_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Character_C::BndEvt__Button_7_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UUI_Character_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.RollOutMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_Character_C::RollOutMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.RollOutMenu");

	UUI_Character_C_RollOutMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Character_C::BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UUI_Character_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Character.UI_Character_C.ExecuteUbergraph_UI_Character
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Character_C::ExecuteUbergraph_UI_Character(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Character.UI_Character_C.ExecuteUbergraph_UI_Character");

	UUI_Character_C_ExecuteUbergraph_UI_Character_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

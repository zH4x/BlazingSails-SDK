
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

// Function UI_Container.UI_Container_C.SetTakeAllButtonVisiblity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Container_C::SetTakeAllButtonVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.SetTakeAllButtonVisiblity");

	UUI_Container_C_SetTakeAllButtonVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Container.UI_Container_C.ShowDepositAll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Container_C::ShowDepositAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.ShowDepositAll");

	UUI_Container_C_ShowDepositAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Container.UI_Container_C.ShowEmptyInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Container_C::ShowEmptyInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.ShowEmptyInventory");

	UUI_Container_C_ShowEmptyInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Container.UI_Container_C.ShowEmptyContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_Container_C::ShowEmptyContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.ShowEmptyContainer");

	UUI_Container_C_ShowEmptyContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Container.UI_Container_C.SetContainerWeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_Container_C::SetContainerWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.SetContainerWeight");

	UUI_Container_C_SetContainerWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Container.UI_Container_C.SetCharacterWeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_Container_C::SetCharacterWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.SetCharacterWeight");

	UUI_Container_C_SetCharacterWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Container.UI_Container_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Container_C::BndEvt__Btn_Join_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.BndEvt__Btn_Join_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UUI_Container_C_BndEvt__Btn_Join_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Container.UI_Container_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Container_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.Destruct");

	UUI_Container_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Container.UI_Container_C.CloseThisContainer
// (BlueprintCallable, BlueprintEvent)

void UUI_Container_C::CloseThisContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.CloseThisContainer");

	UUI_Container_C_CloseThisContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Container.UI_Container_C.RefreshContainer
// (BlueprintCallable, BlueprintEvent)

void UUI_Container_C::RefreshContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.RefreshContainer");

	UUI_Container_C_RefreshContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Container.UI_Container_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Container_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.Tick");

	UUI_Container_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Container.UI_Container_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Container_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.Construct");

	UUI_Container_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Container.UI_Container_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Container_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Container_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Container.UI_Container_C.ExecuteUbergraph_UI_Container
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Container_C::ExecuteUbergraph_UI_Container(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Container.UI_Container_C.ExecuteUbergraph_UI_Container");

	UUI_Container_C_ExecuteUbergraph_UI_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

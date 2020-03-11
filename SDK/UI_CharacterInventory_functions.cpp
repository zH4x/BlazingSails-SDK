
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

// Function UI_CharacterInventory.UI_CharacterInventory_C.SetWeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CharacterInventory_C::SetWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.SetWeight");

	UUI_CharacterInventory_C_SetWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.SetSideArmIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_CharacterInventory_C::SetSideArmIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.SetSideArmIcon");

	UUI_CharacterInventory_C_SetSideArmIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.SetMainWeaponIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_CharacterInventory_C::SetMainWeaponIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.SetMainWeaponIcon");

	UUI_CharacterInventory_C_SetMainWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CharacterInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.Construct");

	UUI_CharacterInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.Tick");

	UUI_CharacterInventory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.BndEvt__Button_384_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterInventory_C::BndEvt__Button_384_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.BndEvt__Button_384_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_CharacterInventory_C_BndEvt__Button_384_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CharacterInventory_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.Destruct");

	UUI_CharacterInventory_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_CharacterInventory_C::refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.refresh");

	UUI_CharacterInventory_C_refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.BndEvt__Button_384_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterInventory_C::BndEvt__Button_384_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.BndEvt__Button_384_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	UUI_CharacterInventory_C_BndEvt__Button_384_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.BndEvt__Button_384_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CharacterInventory_C::BndEvt__Button_384_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.BndEvt__Button_384_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UUI_CharacterInventory_C_BndEvt__Button_384_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterInventory.UI_CharacterInventory_C.ExecuteUbergraph_UI_CharacterInventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterInventory_C::ExecuteUbergraph_UI_CharacterInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterInventory.UI_CharacterInventory_C.ExecuteUbergraph_UI_CharacterInventory");

	UUI_CharacterInventory_C_ExecuteUbergraph_UI_CharacterInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

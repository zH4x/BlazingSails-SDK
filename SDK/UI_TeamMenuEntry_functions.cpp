
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

// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetEnableJoinTeamButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_TeamMenuEntry_C::SetEnableJoinTeamButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetEnableJoinTeamButton");

	UUI_TeamMenuEntry_C_SetEnableJoinTeamButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetTeamName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_TeamMenuEntry_C::SetTeamName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetTeamName");

	UUI_TeamMenuEntry_C_SetTeamName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetTeamNameColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_TeamMenuEntry_C::SetTeamNameColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.SetTeamNameColor");

	UUI_TeamMenuEntry_C_SetTeamNameColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_TeamMenuEntry_C::BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_TeamMenuEntry_C_BndEvt__Button_72_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.ExecuteUbergraph_UI_TeamMenuEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TeamMenuEntry_C::ExecuteUbergraph_UI_TeamMenuEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamMenuEntry.UI_TeamMenuEntry_C.ExecuteUbergraph_UI_TeamMenuEntry");

	UUI_TeamMenuEntry_C_ExecuteUbergraph_UI_TeamMenuEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetKickEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_KickBanPlayer_C::SetKickEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetKickEnable");

	UUI_KickBanPlayer_C_SetKickEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetBanAndModEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_KickBanPlayer_C::SetBanAndModEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetBanAndModEnable");

	UUI_KickBanPlayer_C_SetBanAndModEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetModText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_KickBanPlayer_C::SetModText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetModText");

	UUI_KickBanPlayer_C_SetModText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetPlayerNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_KickBanPlayer_C::SetPlayerNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetPlayerNameText");

	UUI_KickBanPlayer_C_SetPlayerNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetPlayerColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_KickBanPlayer_C::SetPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.SetPlayerColor");

	UUI_KickBanPlayer_C_SetPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KickBanPlayer.UI_KickBanPlayer_C.BndEvt__Button_68_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_KickBanPlayer_C::BndEvt__Button_68_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.BndEvt__Button_68_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_KickBanPlayer_C_BndEvt__Button_68_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KickBanPlayer.UI_KickBanPlayer_C.BndEvt__Button_69_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_KickBanPlayer_C::BndEvt__Button_69_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.BndEvt__Button_69_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_KickBanPlayer_C_BndEvt__Button_69_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KickBanPlayer.UI_KickBanPlayer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_KickBanPlayer_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_KickBanPlayer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KickBanPlayer.UI_KickBanPlayer_C.ExecuteUbergraph_UI_KickBanPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KickBanPlayer_C::ExecuteUbergraph_UI_KickBanPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KickBanPlayer.UI_KickBanPlayer_C.ExecuteUbergraph_UI_KickBanPlayer");

	UUI_KickBanPlayer_C_ExecuteUbergraph_UI_KickBanPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

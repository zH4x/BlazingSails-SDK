
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

// Function UI_CrewMember.UI_CrewMember_C.ShowIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_CrewMember_C::ShowIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMember.UI_CrewMember_C.ShowIcon");

	UUI_CrewMember_C_ShowIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CrewMember.UI_CrewMember_C.ShowSkull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_CrewMember_C::ShowSkull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMember.UI_CrewMember_C.ShowSkull");

	UUI_CrewMember_C_ShowSkull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CrewMember.UI_CrewMember_C.SetColor2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_CrewMember_C::SetColor2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMember.UI_CrewMember_C.SetColor2");

	UUI_CrewMember_C_SetColor2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CrewMember.UI_CrewMember_C.SetColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_CrewMember_C::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMember.UI_CrewMember_C.SetColor");

	UUI_CrewMember_C_SetColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CrewMember.UI_CrewMember_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UUI_CrewMember_C::SetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMember.UI_CrewMember_C.SetIcon");

	UUI_CrewMember_C_SetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CrewMember.UI_CrewMember_C.SetHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CrewMember_C::SetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CrewMember.UI_CrewMember_C.SetHealth");

	UUI_CrewMember_C_SetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

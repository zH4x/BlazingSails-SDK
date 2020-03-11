
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

// Function UI_ScoreboardEntry.UI_ScoreboardEntry_C.SetBgColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_ScoreboardEntry_C::SetBgColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScoreboardEntry.UI_ScoreboardEntry_C.SetBgColor");

	UUI_ScoreboardEntry_C_SetBgColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ScoreboardEntry.UI_ScoreboardEntry_C.SetPingColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_ScoreboardEntry_C::SetPingColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScoreboardEntry.UI_ScoreboardEntry_C.SetPingColor");

	UUI_ScoreboardEntry_C_SetPingColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

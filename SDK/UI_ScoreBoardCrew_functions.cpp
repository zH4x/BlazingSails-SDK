
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

// Function UI_ScoreBoardCrew.UI_ScoreBoardCrew_C.Init
// (BlueprintCallable, BlueprintEvent)

void UUI_ScoreBoardCrew_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScoreBoardCrew.UI_ScoreBoardCrew_C.Init");

	UUI_ScoreBoardCrew_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScoreBoardCrew.UI_ScoreBoardCrew_C.ExecuteUbergraph_UI_ScoreBoardCrew
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScoreBoardCrew_C::ExecuteUbergraph_UI_ScoreBoardCrew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScoreBoardCrew.UI_ScoreBoardCrew_C.ExecuteUbergraph_UI_ScoreBoardCrew");

	UUI_ScoreBoardCrew_C_ExecuteUbergraph_UI_ScoreBoardCrew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

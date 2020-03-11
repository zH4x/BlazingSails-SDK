
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

// Function UI_PrepareForBattle.UI_PrepareForBattle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PrepareForBattle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PrepareForBattle.UI_PrepareForBattle_C.Construct");

	UUI_PrepareForBattle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PrepareForBattle.UI_PrepareForBattle_C.RemovePrepareForBattle
// (BlueprintCallable, BlueprintEvent)

void UUI_PrepareForBattle_C::RemovePrepareForBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PrepareForBattle.UI_PrepareForBattle_C.RemovePrepareForBattle");

	UUI_PrepareForBattle_C_RemovePrepareForBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PrepareForBattle.UI_PrepareForBattle_C.ExecuteUbergraph_UI_PrepareForBattle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PrepareForBattle_C::ExecuteUbergraph_UI_PrepareForBattle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PrepareForBattle.UI_PrepareForBattle_C.ExecuteUbergraph_UI_PrepareForBattle");

	UUI_PrepareForBattle_C_ExecuteUbergraph_UI_PrepareForBattle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

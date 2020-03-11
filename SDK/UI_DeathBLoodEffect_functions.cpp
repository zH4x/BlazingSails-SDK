
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

// Function UI_DeathBLoodEffect.UI_DeathBLoodEffect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DeathBLoodEffect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathBLoodEffect.UI_DeathBLoodEffect_C.Construct");

	UUI_DeathBLoodEffect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathBLoodEffect.UI_DeathBLoodEffect_C.ExecuteUbergraph_UI_DeathBLoodEffect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathBLoodEffect_C::ExecuteUbergraph_UI_DeathBLoodEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathBLoodEffect.UI_DeathBLoodEffect_C.ExecuteUbergraph_UI_DeathBLoodEffect");

	UUI_DeathBLoodEffect_C_ExecuteUbergraph_UI_DeathBLoodEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

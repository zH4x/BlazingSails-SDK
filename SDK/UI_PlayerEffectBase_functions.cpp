
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

// Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PlayerEffectBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.Construct");

	UUI_PlayerEffectBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerEffectBase_C::Init(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.Init");

	UUI_PlayerEffectBase_C_Init_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.ExecuteUbergraph_UI_PlayerEffectBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlayerEffectBase_C::ExecuteUbergraph_UI_PlayerEffectBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerEffectBase.UI_PlayerEffectBase_C.ExecuteUbergraph_UI_PlayerEffectBase");

	UUI_PlayerEffectBase_C_ExecuteUbergraph_UI_PlayerEffectBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

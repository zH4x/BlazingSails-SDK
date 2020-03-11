
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

// Function BP_DamageOverTime.BP_DamageOverTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageOverTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageOverTime.BP_DamageOverTime_C.UserConstructionScript");

	ABP_DamageOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageOverTime.BP_DamageOverTime_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageOverTime_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageOverTime.BP_DamageOverTime_C.ReceiveTick");

	ABP_DamageOverTime_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageOverTime.BP_DamageOverTime_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DamageEffectsWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageOverTime_C::Init(class UClass* DamageEffectsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageOverTime.BP_DamageOverTime_C.Init");

	ABP_DamageOverTime_C_Init_Params params;
	params.DamageEffectsWidget = DamageEffectsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DamageOverTime.BP_DamageOverTime_C.ExecuteUbergraph_BP_DamageOverTime
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DamageOverTime_C::ExecuteUbergraph_BP_DamageOverTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DamageOverTime.BP_DamageOverTime_C.ExecuteUbergraph_BP_DamageOverTime");

	ABP_DamageOverTime_C_ExecuteUbergraph_BP_DamageOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

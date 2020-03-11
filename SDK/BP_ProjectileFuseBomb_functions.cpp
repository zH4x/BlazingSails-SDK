
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

// Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileFuseBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.UserConstructionScript");

	ABP_ProjectileFuseBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileFuseBomb_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.ReceiveTick");

	ABP_ProjectileFuseBomb_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKilled_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileFuseBomb_C::PostHit(bool ForceKilled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.PostHit");

	ABP_ProjectileFuseBomb_C_PostHit_Params params;
	params.ForceKilled_ = ForceKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.ExecuteUbergraph_BP_ProjectileFuseBomb
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileFuseBomb_C::ExecuteUbergraph_BP_ProjectileFuseBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileFuseBomb.BP_ProjectileFuseBomb_C.ExecuteUbergraph_BP_ProjectileFuseBomb");

	ABP_ProjectileFuseBomb_C_ExecuteUbergraph_BP_ProjectileFuseBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

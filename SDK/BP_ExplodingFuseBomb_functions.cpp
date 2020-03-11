
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

// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplodingFuseBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.UserConstructionScript");

	ABP_ExplodingFuseBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExplodingFuseBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ReceiveBeginPlay");

	ABP_ExplodingFuseBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingFuseBomb_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ReceiveTick");

	ABP_ExplodingFuseBomb_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKilled_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingFuseBomb_C::PostHit(bool ForceKilled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.PostHit");

	ABP_ExplodingFuseBomb_C_PostHit_Params params;
	params.ForceKilled_ = ForceKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ExecuteUbergraph_BP_ExplodingFuseBomb
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplodingFuseBomb_C::ExecuteUbergraph_BP_ExplodingFuseBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplodingFuseBomb.BP_ExplodingFuseBomb_C.ExecuteUbergraph_BP_ExplodingFuseBomb");

	ABP_ExplodingFuseBomb_C_ExecuteUbergraph_BP_ExplodingFuseBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

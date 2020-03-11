
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

// Function BP_ProjectileFish.BP_ProjectileFish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileFish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileFish.BP_ProjectileFish_C.UserConstructionScript");

	ABP_ProjectileFish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileFish.BP_ProjectileFish_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileFish_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileFish.BP_ProjectileFish_C.ReceiveBeginPlay");

	ABP_ProjectileFish_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileFish.BP_ProjectileFish_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKilled_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileFish_C::PostHit(bool ForceKilled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileFish.BP_ProjectileFish_C.PostHit");

	ABP_ProjectileFish_C_PostHit_Params params;
	params.ForceKilled_ = ForceKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileFish.BP_ProjectileFish_C.ExecuteUbergraph_BP_ProjectileFish
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileFish_C::ExecuteUbergraph_BP_ProjectileFish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileFish.BP_ProjectileFish_C.ExecuteUbergraph_BP_ProjectileFish");

	ABP_ProjectileFish_C_ExecuteUbergraph_BP_ProjectileFish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

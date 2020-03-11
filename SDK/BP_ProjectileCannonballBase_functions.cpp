
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

// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileCannonballBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.UserConstructionScript");

	ABP_ProjectileCannonballBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileCannonballBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ReceiveTick");

	ABP_ProjectileCannonballBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKilled_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileCannonballBase_C::PostHit(bool ForceKilled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.PostHit");

	ABP_ProjectileCannonballBase_C_PostHit_Params params;
	params.ForceKilled_ = ForceKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileCannonballBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ReceiveBeginPlay");

	ABP_ProjectileCannonballBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ExecuteUbergraph_BP_ProjectileCannonballBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileCannonballBase_C::ExecuteUbergraph_BP_ProjectileCannonballBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C.ExecuteUbergraph_BP_ProjectileCannonballBase");

	ABP_ProjectileCannonballBase_C_ExecuteUbergraph_BP_ProjectileCannonballBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

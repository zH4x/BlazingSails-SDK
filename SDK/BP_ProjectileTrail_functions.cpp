
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

// Function BP_ProjectileTrail.BP_ProjectileTrail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrail.BP_ProjectileTrail_C.UserConstructionScript");

	ABP_ProjectileTrail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrail.BP_ProjectileTrail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrail_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrail.BP_ProjectileTrail_C.ReceiveBeginPlay");

	ABP_ProjectileTrail_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrail.BP_ProjectileTrail_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrail_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrail.BP_ProjectileTrail_C.ReceiveTick");

	ABP_ProjectileTrail_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrail.BP_ProjectileTrail_C.RemoveTrail
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrail_C::RemoveTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrail.BP_ProjectileTrail_C.RemoveTrail");

	ABP_ProjectileTrail_C_RemoveTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrail.BP_ProjectileTrail_C.ExecuteUbergraph_BP_ProjectileTrail
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrail_C::ExecuteUbergraph_BP_ProjectileTrail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrail.BP_ProjectileTrail_C.ExecuteUbergraph_BP_ProjectileTrail");

	ABP_ProjectileTrail_C_ExecuteUbergraph_BP_ProjectileTrail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

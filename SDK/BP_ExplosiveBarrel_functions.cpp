
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

// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExplosiveBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.UserConstructionScript");

	ABP_ExplosiveBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExplosiveBarrel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ReceiveBeginPlay");

	ABP_ExplosiveBarrel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplosiveBarrel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ReceiveTick");

	ABP_ExplosiveBarrel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.Explode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayedFuse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        ControllerRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplosiveBarrel_C::Explode(float DelayedFuse, class ABP_Controller_C* ControllerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.Explode");

	ABP_ExplosiveBarrel_C_Explode_Params params;
	params.DelayedFuse = DelayedFuse;
	params.ControllerRef = ControllerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.MC_Effects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_ExplosiveBarrel_C::MC_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.MC_Effects");

	ABP_ExplosiveBarrel_C_MC_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.S_Explode
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Controller_C*        ControllerRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelayedFuse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplosiveBarrel_C::S_Explode(class ABP_Controller_C* ControllerRef, float DelayedFuse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.S_Explode");

	ABP_ExplosiveBarrel_C_S_Explode_Params params;
	params.ControllerRef = ControllerRef;
	params.DelayedFuse = DelayedFuse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ExecuteUbergraph_BP_ExplosiveBarrel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExplosiveBarrel_C::ExecuteUbergraph_BP_ExplosiveBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ExecuteUbergraph_BP_ExplosiveBarrel");

	ABP_ExplosiveBarrel_C_ExecuteUbergraph_BP_ExplosiveBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

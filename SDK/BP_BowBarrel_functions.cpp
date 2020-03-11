
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

// Function BP_BowBarrel.BP_BowBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BowBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrel.BP_BowBarrel_C.UserConstructionScript");

	ABP_BowBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowBarrel.BP_BowBarrel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowBarrel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrel.BP_BowBarrel_C.ReceiveTick");

	ABP_BowBarrel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowBarrel.BP_BowBarrel_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowBarrel_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrel.BP_BowBarrel_C.ReceiveActorBeginOverlap");

	ABP_BowBarrel_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowBarrel.BP_BowBarrel_C.MC_Explode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_BowBarrel_C::MC_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrel.BP_BowBarrel_C.MC_Explode");

	ABP_BowBarrel_C_MC_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowBarrel.BP_BowBarrel_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_BowBarrel_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrel.BP_BowBarrel_C.Explode");

	ABP_BowBarrel_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowBarrel.BP_BowBarrel_C.ExecuteUbergraph_BP_BowBarrel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowBarrel_C::ExecuteUbergraph_BP_BowBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrel.BP_BowBarrel_C.ExecuteUbergraph_BP_BowBarrel");

	ABP_BowBarrel_C_ExecuteUbergraph_BP_BowBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

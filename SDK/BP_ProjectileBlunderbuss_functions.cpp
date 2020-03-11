
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

// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBlunderbuss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.UserConstructionScript");

	ABP_ProjectileBlunderbuss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileBlunderbuss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveBeginPlay");

	ABP_ProjectileBlunderbuss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBlunderbuss_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveActorBeginOverlap");

	ABP_ProjectileBlunderbuss_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBlunderbuss_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ReceiveTick");

	ABP_ProjectileBlunderbuss_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.Init
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBlunderbuss_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.Init");

	ABP_ProjectileBlunderbuss_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ExecuteUbergraph_BP_ProjectileBlunderbuss
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBlunderbuss_C::ExecuteUbergraph_BP_ProjectileBlunderbuss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbuss.BP_ProjectileBlunderbuss_C.ExecuteUbergraph_BP_ProjectileBlunderbuss");

	ABP_ProjectileBlunderbuss_C_ExecuteUbergraph_BP_ProjectileBlunderbuss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileBlunderbussFill_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.UserConstructionScript");

	ABP_ProjectileBlunderbussFill_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileBlunderbussFill_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveBeginPlay");

	ABP_ProjectileBlunderbussFill_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBlunderbussFill_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveActorBeginOverlap");

	ABP_ProjectileBlunderbussFill_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBlunderbussFill_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ReceiveTick");

	ABP_ProjectileBlunderbussFill_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ExecuteUbergraph_BP_ProjectileBlunderbussFill
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileBlunderbussFill_C::ExecuteUbergraph_BP_ProjectileBlunderbussFill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileBlunderbussFill.BP_ProjectileBlunderbussFill_C.ExecuteUbergraph_BP_ProjectileBlunderbussFill");

	ABP_ProjectileBlunderbussFill_C_ExecuteUbergraph_BP_ProjectileBlunderbussFill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

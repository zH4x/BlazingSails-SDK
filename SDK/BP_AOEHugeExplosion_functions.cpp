
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

// Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AOEHugeExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.UserConstructionScript");

	ABP_AOEHugeExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AOEHugeExplosion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ReceiveBeginPlay");

	ABP_AOEHugeExplosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AOEHugeExplosion_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ReceiveActorBeginOverlap");

	ABP_AOEHugeExplosion_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ExecuteUbergraph_BP_AOEHugeExplosion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AOEHugeExplosion_C::ExecuteUbergraph_BP_AOEHugeExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEHugeExplosion.BP_AOEHugeExplosion_C.ExecuteUbergraph_BP_AOEHugeExplosion");

	ABP_AOEHugeExplosion_C_ExecuteUbergraph_BP_AOEHugeExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

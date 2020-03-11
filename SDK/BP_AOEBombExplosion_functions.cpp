
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

// Function BP_AOEBombExplosion.BP_AOEBombExplosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AOEBombExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBombExplosion.BP_AOEBombExplosion_C.UserConstructionScript");

	ABP_AOEBombExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEBombExplosion.BP_AOEBombExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AOEBombExplosion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBombExplosion.BP_AOEBombExplosion_C.ReceiveBeginPlay");

	ABP_AOEBombExplosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEBombExplosion.BP_AOEBombExplosion_C.ExecuteUbergraph_BP_AOEBombExplosion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AOEBombExplosion_C::ExecuteUbergraph_BP_AOEBombExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBombExplosion.BP_AOEBombExplosion_C.ExecuteUbergraph_BP_AOEBombExplosion");

	ABP_AOEBombExplosion_C_ExecuteUbergraph_BP_AOEBombExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

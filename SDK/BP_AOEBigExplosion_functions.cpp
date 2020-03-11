
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

// Function BP_AOEBigExplosion.BP_AOEBigExplosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AOEBigExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBigExplosion.BP_AOEBigExplosion_C.UserConstructionScript");

	ABP_AOEBigExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEBigExplosion.BP_AOEBigExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AOEBigExplosion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBigExplosion.BP_AOEBigExplosion_C.ReceiveBeginPlay");

	ABP_AOEBigExplosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AOEBigExplosion.BP_AOEBigExplosion_C.ExecuteUbergraph_BP_AOEBigExplosion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AOEBigExplosion_C::ExecuteUbergraph_BP_AOEBigExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AOEBigExplosion.BP_AOEBigExplosion_C.ExecuteUbergraph_BP_AOEBigExplosion");

	ABP_AOEBigExplosion_C_ExecuteUbergraph_BP_AOEBigExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

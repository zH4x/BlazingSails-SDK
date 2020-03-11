
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

// Function BP_SwivelPosition.BP_SwivelPosition_C.MountSwivel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SwivelPosition_C::MountSwivel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwivelPosition.BP_SwivelPosition_C.MountSwivel");

	ABP_SwivelPosition_C_MountSwivel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwivelPosition.BP_SwivelPosition_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SwivelPosition_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwivelPosition.BP_SwivelPosition_C.UserConstructionScript");

	ABP_SwivelPosition_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwivelPosition.BP_SwivelPosition_C.MC_MountEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SwivelPosition_C::MC_MountEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwivelPosition.BP_SwivelPosition_C.MC_MountEffects");

	ABP_SwivelPosition_C_MC_MountEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SwivelPosition.BP_SwivelPosition_C.ExecuteUbergraph_BP_SwivelPosition
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SwivelPosition_C::ExecuteUbergraph_BP_SwivelPosition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwivelPosition.BP_SwivelPosition_C.ExecuteUbergraph_BP_SwivelPosition");

	ABP_SwivelPosition_C_ExecuteUbergraph_BP_SwivelPosition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

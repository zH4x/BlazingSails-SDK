
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

// Function BP_lootcrateNew_DM.BP_lootcrateNew_DM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_lootcrateNew_DM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_lootcrateNew_DM.BP_lootcrateNew_DM_C.UserConstructionScript");

	ABP_lootcrateNew_DM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_lootcrateNew_DM.BP_lootcrateNew_DM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_lootcrateNew_DM_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_lootcrateNew_DM.BP_lootcrateNew_DM_C.ReceiveBeginPlay");

	ABP_lootcrateNew_DM_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_lootcrateNew_DM.BP_lootcrateNew_DM_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_lootcrateNew_DM_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_lootcrateNew_DM.BP_lootcrateNew_DM_C.ReceiveTick");

	ABP_lootcrateNew_DM_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_lootcrateNew_DM.BP_lootcrateNew_DM_C.ExecuteUbergraph_BP_lootcrateNew_DM
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_lootcrateNew_DM_C::ExecuteUbergraph_BP_lootcrateNew_DM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_lootcrateNew_DM.BP_lootcrateNew_DM_C.ExecuteUbergraph_BP_lootcrateNew_DM");

	ABP_lootcrateNew_DM_C_ExecuteUbergraph_BP_lootcrateNew_DM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

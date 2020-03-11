
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

// Function BP_ProjectileAntiCannon.BP_ProjectileAntiCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileAntiCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileAntiCannon.BP_ProjectileAntiCannon_C.UserConstructionScript");

	ABP_ProjectileAntiCannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileAntiCannon.BP_ProjectileAntiCannon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileAntiCannon_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileAntiCannon.BP_ProjectileAntiCannon_C.ReceiveTick");

	ABP_ProjectileAntiCannon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileAntiCannon.BP_ProjectileAntiCannon_C.ExecuteUbergraph_BP_ProjectileAntiCannon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileAntiCannon_C::ExecuteUbergraph_BP_ProjectileAntiCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileAntiCannon.BP_ProjectileAntiCannon_C.ExecuteUbergraph_BP_ProjectileAntiCannon");

	ABP_ProjectileAntiCannon_C_ExecuteUbergraph_BP_ProjectileAntiCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

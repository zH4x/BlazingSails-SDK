
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

// Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileExplosiveArrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.UserConstructionScript");

	ABP_ProjectileExplosiveArrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKilled_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileExplosiveArrow_C::PostHit(bool ForceKilled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.PostHit");

	ABP_ProjectileExplosiveArrow_C_PostHit_Params params;
	params.ForceKilled_ = ForceKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.ExecuteUbergraph_BP_ProjectileExplosiveArrow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileExplosiveArrow_C::ExecuteUbergraph_BP_ProjectileExplosiveArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileExplosiveArrow.BP_ProjectileExplosiveArrow_C.ExecuteUbergraph_BP_ProjectileExplosiveArrow");

	ABP_ProjectileExplosiveArrow_C_ExecuteUbergraph_BP_ProjectileExplosiveArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

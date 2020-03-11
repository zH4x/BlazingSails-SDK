
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

// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectilePoisonArrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.UserConstructionScript");

	ABP_ProjectilePoisonArrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.PostHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKilled_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectilePoisonArrow_C::PostHit(bool ForceKilled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.PostHit");

	ABP_ProjectilePoisonArrow_C_PostHit_Params params;
	params.ForceKilled_ = ForceKilled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.PlayerHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*         HitPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectilePoisonArrow_C::PlayerHit(class ABP_Character_C* HitPlayer, class ABP_Controller_C* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.PlayerHit");

	ABP_ProjectilePoisonArrow_C_PlayerHit_Params params;
	params.HitPlayer = HitPlayer;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.ExecuteUbergraph_BP_ProjectilePoisonArrow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectilePoisonArrow_C::ExecuteUbergraph_BP_ProjectilePoisonArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C.ExecuteUbergraph_BP_ProjectilePoisonArrow");

	ABP_ProjectilePoisonArrow_C_ExecuteUbergraph_BP_ProjectilePoisonArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

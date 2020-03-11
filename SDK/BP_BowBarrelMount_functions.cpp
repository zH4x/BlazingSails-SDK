
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

// Function BP_BowBarrelMount.BP_BowBarrelMount_C.MountBarrel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Controller_C*        ControllerRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Mounted                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BowBarrelMount_C::MountBarrel(int TeamID, class ABP_Controller_C* ControllerRef, bool* Mounted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrelMount.BP_BowBarrelMount_C.MountBarrel");

	ABP_BowBarrelMount_C_MountBarrel_Params params;
	params.TeamID = TeamID;
	params.ControllerRef = ControllerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mounted != nullptr)
		*Mounted = params.Mounted;
}


// Function BP_BowBarrelMount.BP_BowBarrelMount_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BowBarrelMount_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrelMount.BP_BowBarrelMount_C.UserConstructionScript");

	ABP_BowBarrelMount_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowBarrelMount.BP_BowBarrelMount_C.MC_MountBarrel
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_BowBarrelMount_C::MC_MountBarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrelMount.BP_BowBarrelMount_C.MC_MountBarrel");

	ABP_BowBarrelMount_C_MC_MountBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BowBarrelMount.BP_BowBarrelMount_C.ExecuteUbergraph_BP_BowBarrelMount
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BowBarrelMount_C::ExecuteUbergraph_BP_BowBarrelMount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BowBarrelMount.BP_BowBarrelMount_C.ExecuteUbergraph_BP_BowBarrelMount");

	ABP_BowBarrelMount_C_ExecuteUbergraph_BP_BowBarrelMount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

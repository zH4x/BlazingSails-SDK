
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

// Function BP_ContainerShip.BP_ContainerShip_C.SpawnDuplicateShipDeathContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ContainerShip_C::SpawnDuplicateShipDeathContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerShip.BP_ContainerShip_C.SpawnDuplicateShipDeathContainer");

	ABP_ContainerShip_C_SpawnDuplicateShipDeathContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerShip.BP_ContainerShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ContainerShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerShip.BP_ContainerShip_C.UserConstructionScript");

	ABP_ContainerShip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerShip.BP_ContainerShip_C.RefreshQuickAccessPoints
// (BlueprintCallable, BlueprintEvent)

void ABP_ContainerShip_C::RefreshQuickAccessPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerShip.BP_ContainerShip_C.RefreshQuickAccessPoints");

	ABP_ContainerShip_C_RefreshQuickAccessPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ContainerShip.BP_ContainerShip_C.ExecuteUbergraph_BP_ContainerShip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ContainerShip_C::ExecuteUbergraph_BP_ContainerShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContainerShip.BP_ContainerShip_C.ExecuteUbergraph_BP_ContainerShip");

	ABP_ContainerShip_C_ExecuteUbergraph_BP_ContainerShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.CastLayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RaycastProjectileBase_C::CastLayer(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.CastLayer");

	ABP_RaycastProjectileBase_C_CastLayer_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RaycastProjectileBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.UserConstructionScript");

	ABP_RaycastProjectileBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RaycastProjectileBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.ReceiveBeginPlay");

	ABP_RaycastProjectileBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.FireRays
// (BlueprintCallable, BlueprintEvent)

void ABP_RaycastProjectileBase_C::FireRays()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.FireRays");

	ABP_RaycastProjectileBase_C_FireRays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.ExecuteUbergraph_BP_RaycastProjectileBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RaycastProjectileBase_C::ExecuteUbergraph_BP_RaycastProjectileBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RaycastProjectileBase.BP_RaycastProjectileBase_C.ExecuteUbergraph_BP_RaycastProjectileBase");

	ABP_RaycastProjectileBase_C_ExecuteUbergraph_BP_RaycastProjectileBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


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

// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.UpdateDamageState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BrigantineDamagePoints_C::UpdateDamageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.UpdateDamageState");

	ABP_BrigantineDamagePoints_C_UpdateDamageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.AddDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RelativeLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoSound                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrigantineDamagePoints_C::AddDamage(const struct FVector& RelativeLocation, int damage, bool NoSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.AddDamage");

	ABP_BrigantineDamagePoints_C_AddDamage_Params params;
	params.RelativeLocation = RelativeLocation;
	params.damage = damage;
	params.NoSound = NoSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BrigantineDamagePoints_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.UserConstructionScript");

	ABP_BrigantineDamagePoints_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BrigantineDamagePoints_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ReceiveBeginPlay");

	ABP_BrigantineDamagePoints_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrigantineDamagePoints_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ReceiveTick");

	ABP_BrigantineDamagePoints_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.Init
// (BlueprintCallable, BlueprintEvent)

void ABP_BrigantineDamagePoints_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.Init");

	ABP_BrigantineDamagePoints_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ExecuteUbergraph_BP_BrigantineDamagePoints
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BrigantineDamagePoints_C::ExecuteUbergraph_BP_BrigantineDamagePoints(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ExecuteUbergraph_BP_BrigantineDamagePoints");

	ABP_BrigantineDamagePoints_C_ExecuteUbergraph_BP_BrigantineDamagePoints_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

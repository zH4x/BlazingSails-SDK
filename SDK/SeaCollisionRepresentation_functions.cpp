
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

// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.GetGradientSphere
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InWavesValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          InSeaColPercentage             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASeaCollisionRepresentation_C::GetGradientSphere(const struct FVector& PlayerLocation, float* InWavesValue, float* InSeaColPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.GetGradientSphere");

	ASeaCollisionRepresentation_C_GetGradientSphere_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWavesValue != nullptr)
		*InWavesValue = params.InWavesValue;
	if (InSeaColPercentage != nullptr)
		*InSeaColPercentage = params.InSeaColPercentage;
}


// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASeaCollisionRepresentation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.UserConstructionScript");

	ASeaCollisionRepresentation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASeaCollisionRepresentation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ReceiveBeginPlay");

	ASeaCollisionRepresentation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeaCollisionRepresentation_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ReceiveTick");

	ASeaCollisionRepresentation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ExecuteUbergraph_SeaCollisionRepresentation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASeaCollisionRepresentation_C::ExecuteUbergraph_SeaCollisionRepresentation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ExecuteUbergraph_SeaCollisionRepresentation");

	ASeaCollisionRepresentation_C_ExecuteUbergraph_SeaCollisionRepresentation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

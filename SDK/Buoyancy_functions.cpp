
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

// Function Buoyancy.Buoyancy_C.GenCircPts
// (Public, BlueprintCallable, BlueprintEvent)

void UBuoyancy_C::GenCircPts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buoyancy.Buoyancy_C.GenCircPts");

	UBuoyancy_C_GenCircPts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buoyancy.Buoyancy_C.GenRectangularPoints
// (Public, BlueprintCallable, BlueprintEvent)

void UBuoyancy_C::GenRectangularPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buoyancy.Buoyancy_C.GenRectangularPoints");

	UBuoyancy_C_GenRectangularPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buoyancy.Buoyancy_C.MeshDimensions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Dimensions                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBuoyancy_C::MeshDimensions(class AActor* self2, struct FVector* Dimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buoyancy.Buoyancy_C.MeshDimensions");

	UBuoyancy_C_MeshDimensions_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dimensions != nullptr)
		*Dimensions = params.Dimensions;
}


// Function Buoyancy.Buoyancy_C.RotatorFromNormal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBuoyancy_C::RotatorFromNormal(const struct FVector& Normal, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buoyancy.Buoyancy_C.RotatorFromNormal");

	UBuoyancy_C_RotatorFromNormal_Params params;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Buoyancy.Buoyancy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuoyancy_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buoyancy.Buoyancy_C.ReceiveTick");

	UBuoyancy_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buoyancy.Buoyancy_C.Init
// (BlueprintCallable, BlueprintEvent)

void UBuoyancy_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buoyancy.Buoyancy_C.Init");

	UBuoyancy_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buoyancy.Buoyancy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBuoyancy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buoyancy.Buoyancy_C.ReceiveBeginPlay");

	UBuoyancy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buoyancy.Buoyancy_C.ExecuteUbergraph_Buoyancy
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuoyancy_C::ExecuteUbergraph_Buoyancy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buoyancy.Buoyancy_C.ExecuteUbergraph_Buoyancy");

	UBuoyancy_C_ExecuteUbergraph_Buoyancy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

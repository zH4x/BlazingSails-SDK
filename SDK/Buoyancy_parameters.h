#pragma once

#include "../SDK.h"

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Buoyancy.Buoyancy_C.GenCircPts
struct UBuoyancy_C_GenCircPts_Params
{
};

// Function Buoyancy.Buoyancy_C.GenRectangularPoints
struct UBuoyancy_C_GenRectangularPoints_Params
{
};

// Function Buoyancy.Buoyancy_C.MeshDimensions
struct UBuoyancy_C_MeshDimensions_Params
{
	class AActor*                                      self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dimensions;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buoyancy.Buoyancy_C.RotatorFromNormal
struct UBuoyancy_C_RotatorFromNormal_Params
{
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buoyancy.Buoyancy_C.ReceiveTick
struct UBuoyancy_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buoyancy.Buoyancy_C.Init
struct UBuoyancy_C_Init_Params
{
};

// Function Buoyancy.Buoyancy_C.ReceiveBeginPlay
struct UBuoyancy_C_ReceiveBeginPlay_Params
{
};

// Function Buoyancy.Buoyancy_C.ExecuteUbergraph_Buoyancy
struct UBuoyancy_C_ExecuteUbergraph_Buoyancy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.GetGradientSphere
struct ASeaCollisionRepresentation_C_GetGradientSphere_Params
{
	struct FVector                                     PlayerLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InWavesValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              InSeaColPercentage;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.UserConstructionScript
struct ASeaCollisionRepresentation_C_UserConstructionScript_Params
{
};

// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ReceiveBeginPlay
struct ASeaCollisionRepresentation_C_ReceiveBeginPlay_Params
{
};

// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ReceiveTick
struct ASeaCollisionRepresentation_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SeaCollisionRepresentation.SeaCollisionRepresentation_C.ExecuteUbergraph_SeaCollisionRepresentation
struct ASeaCollisionRepresentation_C_ExecuteUbergraph_SeaCollisionRepresentation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

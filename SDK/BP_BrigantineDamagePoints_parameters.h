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

// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.UpdateDamageState
struct ABP_BrigantineDamagePoints_C_UpdateDamageState_Params
{
};

// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.AddDamage
struct ABP_BrigantineDamagePoints_C_AddDamage_Params
{
	struct FVector                                     RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoSound;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.UserConstructionScript
struct ABP_BrigantineDamagePoints_C_UserConstructionScript_Params
{
};

// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ReceiveBeginPlay
struct ABP_BrigantineDamagePoints_C_ReceiveBeginPlay_Params
{
};

// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ReceiveTick
struct ABP_BrigantineDamagePoints_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.Init
struct ABP_BrigantineDamagePoints_C_Init_Params
{
};

// Function BP_BrigantineDamagePoints.BP_BrigantineDamagePoints_C.ExecuteUbergraph_BP_BrigantineDamagePoints
struct ABP_BrigantineDamagePoints_C_ExecuteUbergraph_BP_BrigantineDamagePoints_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

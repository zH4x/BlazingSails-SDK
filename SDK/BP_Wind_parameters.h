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

// Function BP_Wind.BP_Wind_C.OnRep_NewRotation
struct ABP_Wind_C_OnRep_NewRotation_Params
{
};

// Function BP_Wind.BP_Wind_C.UserConstructionScript
struct ABP_Wind_C_UserConstructionScript_Params
{
};

// Function BP_Wind.BP_Wind_C.ReceiveTick
struct ABP_Wind_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wind.BP_Wind_C.ExecuteUbergraph_BP_Wind
struct ABP_Wind_C_ExecuteUbergraph_BP_Wind_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

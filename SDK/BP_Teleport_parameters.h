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

// Function BP_Teleport.BP_Teleport_C.UserConstructionScript
struct ABP_Teleport_C_UserConstructionScript_Params
{
};

// Function BP_Teleport.BP_Teleport_C.ReceiveTick
struct ABP_Teleport_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Teleport.BP_Teleport_C.Activate
struct ABP_Teleport_C_Activate_Params
{
	class ABP_Character_C*                             LocalCharacterRef;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Teleport.BP_Teleport_C.ExecuteUbergraph_BP_Teleport
struct ABP_Teleport_C_ExecuteUbergraph_BP_Teleport_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.GetListOfCommands
struct ABP_ActionCommandHelp_C_GetListOfCommands_Params
{
	struct FString                                     List;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.UserConstructionScript
struct ABP_ActionCommandHelp_C_UserConstructionScript_Params
{
};

// Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.StartAction
struct ABP_ActionCommandHelp_C_StartAction_Params
{
};

// Function BP_ActionCommandHelp.BP_ActionCommandHelp_C.ExecuteUbergraph_BP_ActionCommandHelp
struct ABP_ActionCommandHelp_C_ExecuteUbergraph_BP_ActionCommandHelp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

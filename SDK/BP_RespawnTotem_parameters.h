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

// Function BP_RespawnTotem.BP_RespawnTotem_C.UserConstructionScript
struct ABP_RespawnTotem_C_UserConstructionScript_Params
{
};

// Function BP_RespawnTotem.BP_RespawnTotem_C.ReceiveBeginPlay
struct ABP_RespawnTotem_C_ReceiveBeginPlay_Params
{
};

// Function BP_RespawnTotem.BP_RespawnTotem_C.ReceiveTick
struct ABP_RespawnTotem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RespawnTotem.BP_RespawnTotem_C.refresh
struct ABP_RespawnTotem_C_refresh_Params
{
};

// Function BP_RespawnTotem.BP_RespawnTotem_C.Teleport
struct ABP_RespawnTotem_C_Teleport_Params
{
	class ABP_Character_C*                             Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RespawnTotem.BP_RespawnTotem_C.ExecuteUbergraph_BP_RespawnTotem
struct ABP_RespawnTotem_C_ExecuteUbergraph_BP_RespawnTotem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

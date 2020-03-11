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

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.GiveCannonballs
struct ABP_CannonBallChestNew_C_GiveCannonballs_Params
{
};

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.UserConstructionScript
struct ABP_CannonBallChestNew_C_UserConstructionScript_Params
{
};

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.CloseChest
struct ABP_CannonBallChestNew_C_CloseChest_Params
{
};

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ShowReceivedIndicator
struct ABP_CannonBallChestNew_C_ShowReceivedIndicator_Params
{
	int                                                CannonballAmount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AntiSailAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ReceiveTick
struct ABP_CannonBallChestNew_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.S_Activate
struct ABP_CannonBallChestNew_C_S_Activate_Params
{
};

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.Activate
struct ABP_CannonBallChestNew_C_Activate_Params
{
	class ABP_Character_C*                             LocalCharacterRef;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CannonBallChestNew.BP_CannonBallChestNew_C.ExecuteUbergraph_BP_CannonBallChestNew
struct ABP_CannonBallChestNew_C_ExecuteUbergraph_BP_CannonBallChestNew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

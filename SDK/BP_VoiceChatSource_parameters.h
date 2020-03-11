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

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ShouldShowVoiceIcon
struct ABP_VoiceChatSource_C_ShouldShowVoiceIcon_Params
{
	bool                                               bShouldShow;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.CullRegisterIfNeeded
struct ABP_VoiceChatSource_C_CullRegisterIfNeeded_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ToggleTalkerMuted
struct ABP_VoiceChatSource_C_ToggleTalkerMuted_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bMute;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSystemWide;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ToggleTalkerRegistered
struct ABP_VoiceChatSource_C_ToggleTalkerRegistered_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ResetRemoteTalker
struct ABP_VoiceChatSource_C_ResetRemoteTalker_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.BindLocalEvents
struct ABP_VoiceChatSource_C_BindLocalEvents_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.BindRemoteEvents
struct ABP_VoiceChatSource_C_BindRemoteEvents_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ChangeTalkEnabled
struct ABP_VoiceChatSource_C_ChangeTalkEnabled_Params
{
	bool                                               bEnableTalking;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.CheckIsTryingToTalk
struct ABP_VoiceChatSource_C_CheckIsTryingToTalk_Params
{
	bool                                               bIsTalking;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.CheckIsAllowedToTalk
struct ABP_VoiceChatSource_C_CheckIsAllowedToTalk_Params
{
	bool                                               bIsAllowed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.TryChangeVoiceChatActive
struct ABP_VoiceChatSource_C_TryChangeVoiceChatActive_Params
{
	bool                                               bEnableVoiceInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ChangeVoiceChatType
struct ABP_VoiceChatSource_C_ChangeVoiceChatType_Params
{
	TEnumAsByte<EVoiceChatType>                        VoiceChatType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.SetShouldBeProximity
struct ABP_VoiceChatSource_C_SetShouldBeProximity_Params
{
	bool                                               bShouldBeProximity;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.UpdateLocationToPawn
struct ABP_VoiceChatSource_C_UpdateLocationToPawn_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnRep_bIsTalking
struct ABP_VoiceChatSource_C_OnRep_bIsTalking_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.Initialize
struct ABP_VoiceChatSource_C_Initialize_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.InitializeRemote
struct ABP_VoiceChatSource_C_InitializeRemote_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.InitializeLocal
struct ABP_VoiceChatSource_C_InitializeLocal_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.UserConstructionScript
struct ABP_VoiceChatSource_C_UserConstructionScript_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.S_SetIsTalking
struct ABP_VoiceChatSource_C_S_SetIsTalking_Params
{
	bool                                               bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveTick
struct ABP_VoiceChatSource_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveEndPlay
struct ABP_VoiceChatSource_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveBeginPlay
struct ABP_VoiceChatSource_C_ReceiveBeginPlay_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ReceiveDestroyed
struct ABP_VoiceChatSource_C_ReceiveDestroyed_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerChangedTeam
struct ABP_VoiceChatSource_C_HandlePlayerChangedTeam_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerDied_Remote
struct ABP_VoiceChatSource_C_HandlePlayerDied_Remote_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.HandlePlayerRespawned_Remote
struct ABP_VoiceChatSource_C_HandlePlayerRespawned_Remote_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.ExecuteUbergraph_BP_VoiceChatSource
struct ABP_VoiceChatSource_C_ExecuteUbergraph_BP_VoiceChatSource_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnInitializeFailed__DelegateSignature
struct ABP_VoiceChatSource_C_OnInitializeFailed__DelegateSignature_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnInitializeSuccess__DelegateSignature
struct ABP_VoiceChatSource_C_OnInitializeSuccess__DelegateSignature_Params
{
};

// Function BP_VoiceChatSource.BP_VoiceChatSource_C.OnIsTalkingChanged__DelegateSignature
struct ABP_VoiceChatSource_C_OnIsTalkingChanged__DelegateSignature_Params
{
	bool                                               bNewStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

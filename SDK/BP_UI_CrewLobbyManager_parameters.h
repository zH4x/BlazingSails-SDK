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

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.GetPartySize
struct ABP_UI_CrewLobbyManager_C_GetPartySize_Params
{
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.UpdateCrewPanels
struct ABP_UI_CrewLobbyManager_C_UpdateCrewPanels_Params
{
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ToggleCrewVisible
struct ABP_UI_CrewLobbyManager_C_ToggleCrewVisible_Params
{
	bool                                               bCrewVisible;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.RegisterCrewSlot
struct ABP_UI_CrewLobbyManager_C_RegisterCrewSlot_Params
{
	class ABP_UI_CrewMember_C*                         CrewSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ChangePlayersVisible
struct ABP_UI_CrewLobbyManager_C_ChangePlayersVisible_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.HandlePlayerLeft
struct ABP_UI_CrewLobbyManager_C_HandlePlayerLeft_Params
{
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.HandlePlayerJoined
struct ABP_UI_CrewLobbyManager_C_HandlePlayerJoined_Params
{
	class ASteamBeaconPlayerState*                     PlayerBeacon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ChangeCrewMemberVisualizer
struct ABP_UI_CrewLobbyManager_C_ChangeCrewMemberVisualizer_Params
{
	int                                                PlayerIndex;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.UserConstructionScript
struct ABP_UI_CrewLobbyManager_C_UserConstructionScript_Params
{
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature
struct ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature_Params
{
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ReceiveBeginPlay
struct ABP_UI_CrewLobbyManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature
struct ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            InPlayerUniqueId;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     InFriendName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature
struct ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            InPlayerUniqueId;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_6_OnPlayerUpdateSteamPartyDelegate__DelegateSignature
struct ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_6_OnPlayerUpdateSteamPartyDelegate__DelegateSignature_Params
{
	class ASteamBeaconPlayerState*                     InPlayerBeaconState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_EmptyDelegate__DelegateSignature
struct ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_EmptyDelegate__DelegateSignature_Params
{
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature
struct ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature_Params
{
	class ASteamBeaconPlayerState*                     InPlayerBeaconState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerUpdateSteamPartyDelegate__DelegateSignature
struct ABP_UI_CrewLobbyManager_C_BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerUpdateSteamPartyDelegate__DelegateSignature_Params
{
	class ASteamBeaconPlayerState*                     InPlayerBeaconState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C.ExecuteUbergraph_BP_UI_CrewLobbyManager
struct ABP_UI_CrewLobbyManager_C_ExecuteUbergraph_BP_UI_CrewLobbyManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

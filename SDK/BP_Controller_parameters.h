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

// Function BP_Controller.BP_Controller_C.PlaySoundAtLocation
struct ABP_Controller_C_PlaySoundAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.InitAttractMode
struct ABP_Controller_C_InitAttractMode_Params
{
};

// Function BP_Controller.BP_Controller_C.SwitchMenu
struct ABP_Controller_C_SwitchMenu_Params
{
	TEnumAsByte<E_InGameInterfaces>                    Menu;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.ShipDetect
struct ABP_Controller_C_ShipDetect_Params
{
};

// Function BP_Controller.BP_Controller_C.SetPlayerName
struct ABP_Controller_C_SetPlayerName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Controller.BP_Controller_C.ServerCleanUp
struct ABP_Controller_C_ServerCleanUp_Params
{
};

// Function BP_Controller.BP_Controller_C.RespawnCharacter
struct ABP_Controller_C_RespawnCharacter_Params
{
};

// Function BP_Controller.BP_Controller_C.OnRep_PlayerColor
struct ABP_Controller_C_OnRep_PlayerColor_Params
{
};

// Function BP_Controller.BP_Controller_C.ApplyOptions
struct ABP_Controller_C_ApplyOptions_Params
{
};

// Function BP_Controller.BP_Controller_C.LerpToCameraSmoothly
struct ABP_Controller_C_LerpToCameraSmoothly_Params
{
	class UCameraComponent*                            StartCameraRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            DestinationCameraRef;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.SetTeamPlayerColor
struct ABP_Controller_C_SetTeamPlayerColor_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.CheckUnderWaterEffects
struct ABP_Controller_C_CheckUnderWaterEffects_Params
{
};

// Function BP_Controller.BP_Controller_C.OnRep_TeamID
struct ABP_Controller_C_OnRep_TeamID_Params
{
};

// Function BP_Controller.BP_Controller_C.CloseMenus
struct ABP_Controller_C_CloseMenus_Params
{
	bool                                               CloseWorldMap;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CloseInGameMenu;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CloseInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CloseContainer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CloseSpyglass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CloseCannonCHest;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AnyMenuClosed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.UserConstructionScript
struct ABP_Controller_C_UserConstructionScript_Params
{
};

// Function BP_Controller.BP_Controller_C.InpActEvt_SplitItem_K2Node_InputActionEvent_10
struct ABP_Controller_C_InpActEvt_SplitItem_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_SplitItem_K2Node_InputActionEvent_9
struct ABP_Controller_C_InpActEvt_SplitItem_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_V_K2Node_InputKeyEvent_8
struct ABP_Controller_C_InpActEvt_V_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_V_K2Node_InputKeyEvent_7
struct ABP_Controller_C_InpActEvt_V_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_IngameMenu_K2Node_InputActionEvent_8
struct ABP_Controller_C_InpActEvt_IngameMenu_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_SecondaryFire_K2Node_InputActionEvent_7
struct ABP_Controller_C_InpActEvt_SecondaryFire_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6
struct ABP_Controller_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_5
struct ABP_Controller_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_6
struct ABP_Controller_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_PrimaryFire_K2Node_InputActionEvent_5
struct ABP_Controller_C_InpActEvt_PrimaryFire_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_Multiply_K2Node_InputKeyEvent_4
struct ABP_Controller_C_InpActEvt_Multiply_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_WorldMap_K2Node_InputActionEvent_4
struct ABP_Controller_C_InpActEvt_WorldMap_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_EnterChatMessage_K2Node_InputActionEvent_3
struct ABP_Controller_C_InpActEvt_EnterChatMessage_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_3
struct ABP_Controller_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2
struct ABP_Controller_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
struct ABP_Controller_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2
struct ABP_Controller_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1
struct ABP_Controller_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.OnFailure_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0
struct ABP_Controller_C_OnFailure_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0_Params
{
};

// Function BP_Controller.BP_Controller_C.OnSuccess_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0
struct ABP_Controller_C_OnSuccess_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0_Params
{
};

// Function BP_Controller.BP_Controller_C.S_SetCharacterControllerRef
struct ABP_Controller_C_S_SetCharacterControllerRef_Params
{
};

// Function BP_Controller.BP_Controller_C.S_SetTeamID
struct ABP_Controller_C_S_SetTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_CloseAllMenus
struct ABP_Controller_C_OC_CloseAllMenus_Params
{
};

// Function BP_Controller.BP_Controller_C.SetDefeated
struct ABP_Controller_C_SetDefeated_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_WinningScreen
struct ABP_Controller_C_OC_WinningScreen_Params
{
	int                                                WinningTeam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.ParseTeamID
struct ABP_Controller_C_ParseTeamID_Params
{
};

// Function BP_Controller.BP_Controller_C.SetPlayerColor
struct ABP_Controller_C_SetPlayerColor_Params
{
};

// Function BP_Controller.BP_Controller_C.RefreshPlayerColor
struct ABP_Controller_C_RefreshPlayerColor_Params
{
};

// Function BP_Controller.BP_Controller_C.RefreshIDAndColor
struct ABP_Controller_C_RefreshIDAndColor_Params
{
};

// Function BP_Controller.BP_Controller_C.S_AddGoldToTeam
struct ABP_Controller_C_S_AddGoldToTeam_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_VoiceLine
struct ABP_Controller_C_S_VoiceLine_Params
{
	struct FName                                       VoiceLineRowName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_LoadShipCustomisation
struct ABP_Controller_C_OC_LoadShipCustomisation_Params
{
};

// Function BP_Controller.BP_Controller_C.S_LoadShipCustomisation
struct ABP_Controller_C_S_LoadShipCustomisation_Params
{
	int                                                HullColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SailColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                emblem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                bowfigure;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FlagColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RopeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FlagEmblem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LampColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SailEmblemBottom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SailColorBottom;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_AddScore
struct ABP_Controller_C_OC_AddScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.AddScore
struct ABP_Controller_C_AddScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_CreateCrew
struct ABP_Controller_C_OC_CreateCrew_Params
{
};

// Function BP_Controller.BP_Controller_C.S_CreateCrew
struct ABP_Controller_C_S_CreateCrew_Params
{
	struct FText                                       ShipName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                teamColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FlagEmblem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.SetTeamID
struct ABP_Controller_C_SetTeamID_Params
{
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_CloseTeamMenu
struct ABP_Controller_C_OC_CloseTeamMenu_Params
{
};

// Function BP_Controller.BP_Controller_C.SetSelectedSpawnPoint
struct ABP_Controller_C_SetSelectedSpawnPoint_Params
{
	class ABP_BoatSpawn_C*                             SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_SetSelectedSpawnPoint
struct ABP_Controller_C_S_SetSelectedSpawnPoint_Params
{
	class ABP_BoatSpawn_C*                             SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.DamageCannonBlockChain
struct ABP_Controller_C_DamageCannonBlockChain_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleCannon_C*                         Cannonref;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_DamageCannonBlockChain
struct ABP_Controller_C_S_DamageCannonBlockChain_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_VehicleCannon_C*                         Cannonref;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_SetFairIndex
struct ABP_Controller_C_S_SetFairIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.ReceiveBeginPlay
struct ABP_Controller_C_ReceiveBeginPlay_Params
{
};

// Function BP_Controller.BP_Controller_C.LeaveIngameMenu
struct ABP_Controller_C_LeaveIngameMenu_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_RemoveAllWidgets
struct ABP_Controller_C_OC_RemoveAllWidgets_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_RemoveSpawnScreen
struct ABP_Controller_C_OC_RemoveSpawnScreen_Params
{
};

// Function BP_Controller.BP_Controller_C.RefreshHUD
struct ABP_Controller_C_RefreshHUD_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_PrepareForBattle
struct ABP_Controller_C_OC_PrepareForBattle_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_RemoveCustomWidget
struct ABP_Controller_C_OC_RemoveCustomWidget_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_AddCustomWidget
struct ABP_Controller_C_OC_AddCustomWidget_Params
{
	class UClass*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_RefreshHUD
struct ABP_Controller_C_OC_RefreshHUD_Params
{
};

// Function BP_Controller.BP_Controller_C.CloseInGameMenu
struct ABP_Controller_C_CloseInGameMenu_Params
{
};

// Function BP_Controller.BP_Controller_C.OpenInGameMenu
struct ABP_Controller_C_OpenInGameMenu_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_InterruptInteraction
struct ABP_Controller_C_OC_InterruptInteraction_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_StopLocalInteract
struct ABP_Controller_C_OC_StopLocalInteract_Params
{
};

// Function BP_Controller.BP_Controller_C.LeaveVehicle
struct ABP_Controller_C_LeaveVehicle_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_ReturnToCharacter
struct ABP_Controller_C_OC_ReturnToCharacter_Params
{
	bool                                               IsDead;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_LockVehicle
struct ABP_Controller_C_S_LockVehicle_Params
{
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.InteractReleased
struct ABP_Controller_C_InteractReleased_Params
{
};

// Function BP_Controller.BP_Controller_C.InteractPressed
struct ABP_Controller_C_InteractPressed_Params
{
};

// Function BP_Controller.BP_Controller_C.LocalVehicleEject
struct ABP_Controller_C_LocalVehicleEject_Params
{
};

// Function BP_Controller.BP_Controller_C.S_EngageFromServer
struct ABP_Controller_C_S_EngageFromServer_Params
{
	class ABP_InteractableBase_C*                      Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_StopInteract
struct ABP_Controller_C_S_StopInteract_Params
{
	class ABP_InteractableBase_C*                      InteractableRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.EnterVehicle
struct ABP_Controller_C_EnterVehicle_Params
{
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_LeaveVehicle
struct ABP_Controller_C_S_LeaveVehicle_Params
{
};

// Function BP_Controller.BP_Controller_C.S_EnterVehicle
struct ABP_Controller_C_S_EnterVehicle_Params
{
	class ABP_VehicleBase_C*                           VehicleRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_Interact
struct ABP_Controller_C_S_Interact_Params
{
	class ABP_InteractableBase_C*                      InteractableRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OpenWorldMap
struct ABP_Controller_C_OpenWorldMap_Params
{
};

// Function BP_Controller.BP_Controller_C.S_RemoveMarker
struct ABP_Controller_C_S_RemoveMarker_Params
{
};

// Function BP_Controller.BP_Controller_C.S_LeaveMapCamera
struct ABP_Controller_C_S_LeaveMapCamera_Params
{
};

// Function BP_Controller.BP_Controller_C.S_EnterMapCamera
struct ABP_Controller_C_S_EnterMapCamera_Params
{
};

// Function BP_Controller.BP_Controller_C.CloseWorldMap
struct ABP_Controller_C_CloseWorldMap_Params
{
};

// Function BP_Controller.BP_Controller_C.EnterSpectatorCam
struct ABP_Controller_C_EnterSpectatorCam_Params
{
};

// Function BP_Controller.BP_Controller_C.SwitchToDefeatScreen
struct ABP_Controller_C_SwitchToDefeatScreen_Params
{
};

// Function BP_Controller.BP_Controller_C.ReceiveEndPlay
struct ABP_Controller_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.ReceiveDestroyed
struct ABP_Controller_C_ReceiveDestroyed_Params
{
};

// Function BP_Controller.BP_Controller_C.S_MidGameSpawn
struct ABP_Controller_C_S_MidGameSpawn_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_DeathEffect
struct ABP_Controller_C_OC_DeathEffect_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_RemoveDeathScreen
struct ABP_Controller_C_OC_RemoveDeathScreen_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_CharacterDeath
struct ABP_Controller_C_OC_CharacterDeath_Params
{
	struct FString                                     KillerPlayerName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              RespawnTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Defeated;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.CharacterDeath
struct ABP_Controller_C_CharacterDeath_Params
{
	struct FString                                     KillerPlayerName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             KillerCharacterRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttackerTeamID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.Respawn
struct ABP_Controller_C_Respawn_Params
{
};

// Function BP_Controller.BP_Controller_C.OverRideCullingOwnerPlayer
struct ABP_Controller_C_OverRideCullingOwnerPlayer_Params
{
};

// Function BP_Controller.BP_Controller_C.OverRideCullingOwnerVehicle
struct ABP_Controller_C_OverRideCullingOwnerVehicle_Params
{
};

// Function BP_Controller.BP_Controller_C.S_SetBannedPlayerList
struct ABP_Controller_C_S_SetBannedPlayerList_Params
{
	TArray<struct FST_BanListEntry>                    BannedPlayerList;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Controller.BP_Controller_C.Resetkeys
struct ABP_Controller_C_Resetkeys_Params
{
};

// Function BP_Controller.BP_Controller_C.ResetCharacterKeys
struct ABP_Controller_C_ResetCharacterKeys_Params
{
};

// Function BP_Controller.BP_Controller_C.LoadKeys
struct ABP_Controller_C_LoadKeys_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_SyncGameTime
struct ABP_Controller_C_OC_SyncGameTime_Params
{
};

// Function BP_Controller.BP_Controller_C.ReceiveTick
struct ABP_Controller_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.UpdateBoatTrail
struct ABP_Controller_C_UpdateBoatTrail_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TrailDynMat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.RemoveWaterCullingVolume
struct ABP_Controller_C_RemoveWaterCullingVolume_Params
{
	class ABP_BoatMeshBase_C*                          BoatMeshBaseRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_CreateAndAddWaterCullingVolume
struct ABP_Controller_C_OC_CreateAndAddWaterCullingVolume_Params
{
	class ABP_BoatMeshBase_C*                          BoatMeshBaseRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_AddNewChatMessage
struct ABP_Controller_C_OC_AddNewChatMessage_Params
{
	struct FST_SimpleMessage                           ChatMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TeamChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FormatText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullColorMessage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_AddNewChatMessage
struct ABP_Controller_C_S_AddNewChatMessage_Params
{
	struct FST_SimpleMessage                           ChatMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TeamChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FormatText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.CloseChat
struct ABP_Controller_C_CloseChat_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_HitIndicator
struct ABP_Controller_C_OC_HitIndicator_Params
{
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.DamageSelf
struct ABP_Controller_C_DamageSelf_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_CreateRandomHullDamage
struct ABP_Controller_C_S_CreateRandomHullDamage_Params
{
	class ABP_BoatMeshBase_C*                          BoatRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.CreateRandomHullDamage
struct ABP_Controller_C_CreateRandomHullDamage_Params
{
	class ABP_BoatMeshBase_C*                          BoatRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_DamageHull
struct ABP_Controller_C_S_DamageHull_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DamageType>                          DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          BoatRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_DamageSail
struct ABP_Controller_C_S_DamageSail_Params
{
	class ABP_MastBase_C*                              MastRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.DamageHull
struct ABP_Controller_C_DamageHull_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DamageType>                          DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BoatMeshBase_C*                          BoatRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActualDamageLocation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.DamageSail
struct ABP_Controller_C_DamageSail_Params
{
	int                                                damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_MastBase_C*                              MastRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.DamagePlayer
struct ABP_Controller_C_DamagePlayer_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             PlayerToDamageRef;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageOwnTeamAlso;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_DamagePlayer
struct ABP_Controller_C_S_DamagePlayer_Params
{
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Character_C*                             PlayerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelfDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.AddKill
struct ABP_Controller_C_AddKill_Params
{
};

// Function BP_Controller.BP_Controller_C.S_DestroyCharacter
struct ABP_Controller_C_S_DestroyCharacter_Params
{
};

// Function BP_Controller.BP_Controller_C.HitIndicator
struct ABP_Controller_C_HitIndicator_Params
{
	bool                                               headshot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OC_KillInfo
struct ABP_Controller_C_OC_KillInfo_Params
{
	struct FString                                     PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Controller.BP_Controller_C.OC_DamageEffects
struct ABP_Controller_C_OC_DamageEffects_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_SpectatorCam
struct ABP_Controller_C_OC_SpectatorCam_Params
{
};

// Function BP_Controller.BP_Controller_C.OC_Teleport
struct ABP_Controller_C_OC_Teleport_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_PossesPlayer
struct ABP_Controller_C_S_PossesPlayer_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_SpawnSpectatorCam
struct ABP_Controller_C_S_SpawnSpectatorCam_Params
{
};

// Function BP_Controller.BP_Controller_C.S_PlaceMarker
struct ABP_Controller_C_S_PlaceMarker_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.PlaceMarker
struct ABP_Controller_C_PlaceMarker_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayerColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.MC_ActivateInteractable
struct ABP_Controller_C_MC_ActivateInteractable_Params
{
	class ABP_InteractableBase_C*                      Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_ActivateInteractable
struct ABP_Controller_C_S_ActivateInteractable_Params
{
	class ABP_InteractableBase_C*                      Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.ActivateInteractable
struct ABP_Controller_C_ActivateInteractable_Params
{
	class ABP_InteractableBase_C*                      Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.OpenCommandWheel
struct ABP_Controller_C_OpenCommandWheel_Params
{
};

// Function BP_Controller.BP_Controller_C.CommandWheelReleased
struct ABP_Controller_C_CommandWheelReleased_Params
{
};

// Function BP_Controller.BP_Controller_C.CommandWheelPressed
struct ABP_Controller_C_CommandWheelPressed_Params
{
};

// Function BP_Controller.BP_Controller_C.CloseCommandWheel
struct ABP_Controller_C_CloseCommandWheel_Params
{
};

// Function BP_Controller.BP_Controller_C.S_ToggleModerator
struct ABP_Controller_C_S_ToggleModerator_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_UpdateBanList
struct ABP_Controller_C_S_UpdateBanList_Params
{
	TArray<struct FST_BanListEntry>                    Banlist;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Controller.BP_Controller_C.OC_AddPlayerToBanList
struct ABP_Controller_C_OC_AddPlayerToBanList_Params
{
	struct FString                                     UniqueNetId;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.S_KickPlayer
struct ABP_Controller_C_S_KickPlayer_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddToBanList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.OC_LeaveGame
struct ABP_Controller_C_OC_LeaveGame_Params
{
};

// Function BP_Controller.BP_Controller_C.S_CommandAction
struct ABP_Controller_C_S_CommandAction_Params
{
	class UClass*                                      ActionClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Information;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.CommandAction
struct ABP_Controller_C_CommandAction_Params
{
	bool                                               ServerCommand;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActionClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Information;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Controller.BP_Controller_C.OC_BroadcastAnnouncement
struct ABP_Controller_C_OC_BroadcastAnnouncement_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NotificationSound;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.PostTopScreenMessage
struct ABP_Controller_C_PostTopScreenMessage_Params
{
	class UClass*                                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Controller.BP_Controller_C.ExecuteUbergraph_BP_Controller
struct ABP_Controller_C_ExecuteUbergraph_BP_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

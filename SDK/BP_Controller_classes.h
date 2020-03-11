#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Controller.BP_Controller_C
// 0x0299 (0x0911 - 0x0678)
class ABP_Controller_C : public ABsController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              RespawnTime;                                              // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ServerCharacterRotation;                                  // 0x0684(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0690(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                ChatColor;                                                // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        InteractKey;                                              // 0x06B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        CommandWheelKey;                                          // 0x06C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     WorldMapCamLocation;                                      // 0x06E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeOffsetTarget;                                         // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeOffsetCurrent;                                        // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SyncedTime;                                               // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWaveHeight;                                        // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraToVehicleLerpSpeed;                                 // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraToPlayerLerpSpeed;                                  // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldMapZoomAmount;                                       // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x070C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerIndex;                                              // 0x0710(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	class UUI_IngameMenu_C*                            InGameMenuRef;                                            // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_WorldMap_C*                              WorldMapRef;                                              // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_Chat_C*                                  ChatRef;                                                  // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 CustomWidget;                                             // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_WorldMap_C*                              WorldMapWidgetRef;                                        // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_DeathScreen_C*                           DeathScreenRef;                                           // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_Scoreboard_C*                            ScoreboardRef;                                            // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_YouKilledInfo_C*                         YouKilledScreenRef;                                       // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 TopScreenMessage;                                         // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_Hit_C*                                   HitIndicatorRef;                                          // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_PrepareForBattle_C*                      PrepareForBattleUIRef;                                    // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_SpawnSelection_C*                        SpawnSelectionScreenRef;                                  // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_Character_C*                             CharacterRefLocal;                                        // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Character_C*                             CharacterRefServer;                                       // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRefServer;                                         // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_VehicleBase_C*                           VehicleRefLocal;                                          // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MapCamera_C*                             MapCamera;                                                // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_DeathCam_C*                              DeathcamRef;                                              // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SpectatorCam_C*                          SpectatorCamRef;                                          // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Character_C*                             SpectatingCharacterRef;                                   // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     WorldMapRendererRef;                                      // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WaypointMarker_C*                        WaypointMarkerRef;                                        // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamChatID;                                               // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerColor;                                              // 0x07CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Spectator;                                                // 0x07D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeingRevived;                                             // 0x07D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead;                                                   // 0x07D2(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WorldMapEnabled;                                          // 0x07D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChatActive;                                               // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpectateMode;                                             // 0x07D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SplitItem;                                                // 0x07D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropItemsOnDeath;                                         // 0x07D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AWaterSettings_C*                            WaterSettingsRef;                                         // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WaterPP_C*                               MainPPVolumeRef;                                          // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_CameraManager_C*                         CameraManagerRef;                                         // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DeltaPointTemp;                                           // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnderWater;                                               // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Defeated;                                                 // 0x07F9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LerpCameraToPlayer;                                       // 0x07FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x07FB(0x0005) MISSED OFFSET
	class UCameraComponent*                            VehicleCamRef;                                            // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               LerpCameraToVehicle;                                      // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0809(0x0007) MISSED OFFSET
	class ABP_LerpCamera_C*                            LerpingCameraRef;                                         // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0818(0x0008) MISSED OFFSET
	struct FTransform                                  PlayerToVehicleCamTransform;                              // 0x0820(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseInvertYMultiplier;                                   // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_Spectator_C*                             DefeatedScreenRef;                                        // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     DeathLocation;                                            // 0x0860(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x086C(0x0004) MISSED OFFSET
	class UUI_WinningScreen_C*                         WinningScreenRef;                                         // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     RecentlyKilledPlayer;                                     // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               NewPlayerKilled;                                          // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InsideCabin;                                              // 0x0889(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CommandWheelOpen;                                         // 0x088A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x088B(0x0005) MISSED OFFSET
	class UUI_PieMenu_C*                               CommandWheelRef;                                          // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      ControlledPawnRef;                                        // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWaterPlane_C*                               WaterPlaneRef;                                            // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_ShipWaterCulling_C*>              ShipCullings;                                             // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                SavedMainWeapon;                                          // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SavedMeleeWeapon;                                         // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SavedSideArm;                                             // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Interacting;                                              // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlreadyInCrew;                                            // 0x08C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableTeamDamage;                                         // 0x08C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EndGame;                                                  // 0x08C7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Index_Fair_;                                              // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideHUDMode;                                              // 0x08CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	class ABP_BoatMeshBase_C*                          ShipRef;                                                  // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HullWaterMaterialCulled;                                  // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsServerHost;                                             // 0x08D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x08DA(0x0006) MISSED OFFSET
	class UCameraComponent*                            PawnCameraRef;                                            // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InSpawnSelection;                                         // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	class ABP_SpawnSelectionCam_C*                     SpawnSelectionCamRef;                                     // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_BoatSpawn_C*                             SelectedSpawnPoint;                                       // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_InGameInterfaces>                    CurrentIngameMenu;                                        // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RemovePrepareForBattleScreen;                             // 0x0901(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeaderOfCrew;                                             // 0x0902(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x0903(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ShipWavesDynMat;                                          // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInValidCrew;                                             // 0x0910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Controller.BP_Controller_C");
		return ptr;
	}


	void PlaySoundAtLocation(const struct FVector& Location, class USoundBase* Sound, float Volume);
	void InitAttractMode();
	void SwitchMenu(TEnumAsByte<E_InGameInterfaces> Menu);
	void ShipDetect();
	void SetPlayerName(struct FString* PlayerName);
	void ServerCleanUp();
	void RespawnCharacter();
	void OnRep_PlayerColor();
	void ApplyOptions();
	void LerpToCameraSmoothly(class UCameraComponent* StartCameraRef, class UCameraComponent* DestinationCameraRef);
	void SetTeamPlayerColor(int TeamID);
	void CheckUnderWaterEffects();
	void OnRep_TeamID();
	void CloseMenus(bool CloseWorldMap, bool CloseInGameMenu, bool CloseInventory, bool CloseContainer, bool CloseSpyglass, bool CloseCannonCHest, bool* AnyMenuClosed);
	void UserConstructionScript();
	void InpActEvt_SplitItem_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_SplitItem_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_V_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_V_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_IngameMenu_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_SecondaryFire_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_PrimaryFire_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_WorldMap_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_EnterChatMessage_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnFailure_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0();
	void OnSuccess_A78C3F8E4DD6BF4B1DA279B4A6FDF8F0();
	void S_SetCharacterControllerRef();
	void S_SetTeamID(int TeamID);
	void OC_CloseAllMenus();
	void SetDefeated();
	void OC_WinningScreen(int WinningTeam);
	void ParseTeamID();
	void SetPlayerColor();
	void RefreshPlayerColor();
	void RefreshIDAndColor();
	void S_AddGoldToTeam(int Amount);
	void S_VoiceLine(const struct FName& VoiceLineRowName);
	void OC_LoadShipCustomisation();
	void S_LoadShipCustomisation(int HullColor, int SailColor, int emblem, int bowfigure, int FlagColor, int RopeColor, int FlagEmblem, int LampColor, int SailEmblemBottom, int SailColorBottom);
	void OC_AddScore(int Score);
	void AddScore(int Score);
	void OC_CreateCrew();
	void S_CreateCrew(const struct FText& ShipName, int teamColor, int FlagEmblem);
	void SetTeamID(int TeamID);
	void OC_CloseTeamMenu();
	void SetSelectedSpawnPoint(class ABP_BoatSpawn_C* SpawnPoint);
	void S_SetSelectedSpawnPoint(class ABP_BoatSpawn_C* SpawnPoint);
	void DamageCannonBlockChain(int DamageAmount, class ABP_VehicleCannon_C* Cannonref);
	void S_DamageCannonBlockChain(int DamageAmount, class ABP_VehicleCannon_C* Cannonref);
	void S_SetFairIndex(int Index);
	void ReceiveBeginPlay();
	void LeaveIngameMenu();
	void OC_RemoveAllWidgets();
	void OC_RemoveSpawnScreen();
	void RefreshHUD();
	void OC_PrepareForBattle();
	void OC_RemoveCustomWidget();
	void OC_AddCustomWidget(class UClass* Widget);
	void OC_RefreshHUD();
	void CloseInGameMenu();
	void OpenInGameMenu();
	void OC_InterruptInteraction();
	void OC_StopLocalInteract();
	void LeaveVehicle();
	void OC_ReturnToCharacter(bool IsDead);
	void S_LockVehicle(class ABP_VehicleBase_C* VehicleRef);
	void InteractReleased();
	void InteractPressed();
	void LocalVehicleEject();
	void S_EngageFromServer(class ABP_InteractableBase_C* Interactable);
	void S_StopInteract(class ABP_InteractableBase_C* InteractableRef);
	void EnterVehicle(class ABP_VehicleBase_C* VehicleRef);
	void S_LeaveVehicle();
	void S_EnterVehicle(class ABP_VehicleBase_C* VehicleRef);
	void S_Interact(class ABP_InteractableBase_C* InteractableRef);
	void OpenWorldMap();
	void S_RemoveMarker();
	void S_LeaveMapCamera();
	void S_EnterMapCamera();
	void CloseWorldMap();
	void EnterSpectatorCam();
	void SwitchToDefeatScreen();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void S_MidGameSpawn();
	void OC_DeathEffect();
	void OC_RemoveDeathScreen();
	void OC_CharacterDeath(const struct FString& KillerPlayerName, float RespawnTime, bool headshot, bool Defeated);
	void CharacterDeath(const struct FString& KillerPlayerName, bool headshot, class ABP_Character_C* KillerCharacterRef, int AttackerTeamID);
	void Respawn();
	void OverRideCullingOwnerPlayer();
	void OverRideCullingOwnerVehicle();
	void S_SetBannedPlayerList(TArray<struct FST_BanListEntry> BannedPlayerList);
	void Resetkeys();
	void ResetCharacterKeys();
	void LoadKeys();
	void OC_SyncGameTime();
	void ReceiveTick(float DeltaSeconds);
	void UpdateBoatTrail(float Speed, class UMaterialInstanceDynamic* TrailDynMat);
	void RemoveWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef);
	void OC_CreateAndAddWaterCullingVolume(class ABP_BoatMeshBase_C* BoatMeshBaseRef);
	void OC_AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, bool TeamChat, bool FormatText, bool FullColorMessage);
	void S_AddNewChatMessage(const struct FST_SimpleMessage& ChatMessage, bool TeamChat, bool FormatText);
	void CloseChat();
	void OC_HitIndicator(bool headshot, int DamageAmount, bool IsLow, const struct FVector& HitLocation);
	void DamageSelf(int DamageAmount);
	void S_CreateRandomHullDamage(class ABP_BoatMeshBase_C* BoatRef, int DamageAmount);
	void CreateRandomHullDamage(class ABP_BoatMeshBase_C* BoatRef, int DamageAmount);
	void S_DamageHull(int DamageAmount, TEnumAsByte<E_DamageType> DamageType, const struct FVector& RelativeLocation, const struct FVector& ImpactNormal, class ABP_BoatMeshBase_C* BoatRef);
	void S_DamageSail(class ABP_MastBase_C* MastRef, int damage);
	void DamageHull(int DamageAmount, TEnumAsByte<E_DamageType> DamageType, const struct FVector& RelativeLocation, const struct FVector& ImpactNormal, class ABP_BoatMeshBase_C* BoatRef, const struct FVector& ActualDamageLocation);
	void DamageSail(int damage, class ABP_MastBase_C* MastRef, const struct FVector& DamageLocation);
	void DamagePlayer(int DamageAmount, class ABP_Character_C* PlayerToDamageRef, bool headshot, const struct FVector& DamageLocation, bool DamageOwnTeamAlso);
	void S_DamagePlayer(int DamageAmount, class ABP_Character_C* PlayerRef, bool headshot, bool SelfDamage);
	void AddKill();
	void S_DestroyCharacter();
	void HitIndicator(bool headshot, int DamageAmount, bool IsLow, const struct FVector& HitLocation);
	void OC_KillInfo(const struct FString& PlayerName);
	void OC_DamageEffects();
	void OC_SpectatorCam();
	void OC_Teleport(const struct FVector& Location);
	void S_PossesPlayer(const struct FVector& Location);
	void S_SpawnSpectatorCam();
	void S_PlaceMarker(const struct FVector& Location);
	void PlaceMarker(const struct FVector& Location, int PlayerId, int TeamID, int TeamPlayerColor);
	void MC_ActivateInteractable(class ABP_InteractableBase_C* Interactable);
	void S_ActivateInteractable(class ABP_InteractableBase_C* Interactable);
	void ActivateInteractable(class ABP_InteractableBase_C* Interactable);
	void OpenCommandWheel();
	void CommandWheelReleased();
	void CommandWheelPressed();
	void CloseCommandWheel();
	void S_ToggleModerator(int PlayerId);
	void S_UpdateBanList(TArray<struct FST_BanListEntry> Banlist);
	void OC_AddPlayerToBanList(const struct FString& UniqueNetId, const struct FText& UserName, int PlayerId);
	void S_KickPlayer(int PlayerId, bool AddToBanList, const struct FText& UserName);
	void OC_LeaveGame();
	void S_CommandAction(class UClass* ActionClass, const struct FText& Information);
	void CommandAction(bool ServerCommand, class UClass* ActionClass, const struct FText& Information);
	void OC_BroadcastAnnouncement(const struct FText& Message, bool NotificationSound);
	void PostTopScreenMessage(class UClass* Widget);
	void ExecuteUbergraph_BP_Controller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C
// 0x0088 (0x03B0 - 0x0328)
class ABP_UI_CrewLobbyManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MatchmakingManager_C*                    BP_MatchmakingManager;                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USteamPartyComponent*                        SteamParty;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, class ABP_UI_CrewMember_C*>              CrewMemberVisualizersMap;                                 // 0x0348(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ASteamBeaconPlayerState*>             SteamBeaconPlayerStates;                                  // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ASteamBeaconState*                           SteamPartyState;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_CrewLobbyManager.BP_UI_CrewLobbyManager_C");
		return ptr;
	}


	void GetPartySize(int* Amount);
	void UpdateCrewPanels();
	void ToggleCrewVisible(bool bCrewVisible, bool bShowInfo);
	void RegisterCrewSlot(class ABP_UI_CrewMember_C* CrewSlot);
	void ChangePlayersVisible(bool bVisible);
	void HandlePlayerLeft(class ASteamBeaconPlayerState* BeaconPlayerState);
	void HandlePlayerJoined(class ASteamBeaconPlayerState* PlayerBeacon);
	void ChangeCrewMemberVisualizer(int PlayerIndex);
	void UserConstructionScript();
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_3_EmptyDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_2_OnPlayerInviteReceivedSteamPartyDelegate__DelegateSignature(const struct FUniqueNetIdRepl& InPlayerUniqueId, const struct FString& InFriendName);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_5_OnPlayerUniqueIdSteamPartyDelegate__DelegateSignature(const struct FUniqueNetIdRepl& InPlayerUniqueId);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_6_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_4_EmptyDelegate__DelegateSignature();
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_1_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState);
	void BndEvt__SteamParty_K2Node_ComponentBoundEvent_0_OnPlayerUpdateSteamPartyDelegate__DelegateSignature(class ASteamBeaconPlayerState* InPlayerBeaconState);
	void ExecuteUbergraph_BP_UI_CrewLobbyManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

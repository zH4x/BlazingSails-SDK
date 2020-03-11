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

// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// 0x00A2 (0x0492 - 0x03F0)
class ABP_PlayerState_C : public APlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0400(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Health;                                                   // 0x0404(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Kills;                                                    // 0x0408(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Deaths;                                                   // 0x040C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamPlayerColorGS;                                        // 0x0410(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreAmount;                                              // 0x0414(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepairScore;                                              // 0x0418(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	struct FString                                     UserName;                                                 // 0x0420(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsDead;                                                   // 0x0430(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class ABP_Controller_C*                            ControllerRef;                                            // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_Tasks>                               CurrentTask;                                              // 0x0440(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class ABP_VoiceChatSource_C*                       VoiceChatSourceRef;                                       // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTryingToTalk;                                          // 0x0450(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerChangedTeam;                                      // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerDied;                                             // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerRespawned;                                        // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_BoatSpawn_C*                             SelectedSpawnPoint;                                       // 0x0488(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsModerator;                                              // 0x0490(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsServerHost;                                             // 0x0491(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C");
		return ptr;
	}


	void OnRep_IsModerator();
	void OnRep_SelectedSpawnPoint();
	void VoiceChat_Initialize();
	void VoiceChat_PushToTalk(bool bIsTryingToTalk);
	void OnRep_IsDead();
	void ChangeRepairScore(int Score);
	void ChangeScore(int Score);
	void OnRep_TeamPlayerColor();
	void OnRep_Health();
	void OnRep_TeamID();
	void UserConstructionScript();
	void MC_InitializeVoiceChat();
	void S_SetIsTryingToTalk(bool bIsTryingToTalk);
	void MC_SetIsTryingToTalk(bool bIsTryingToTalk);
	void ReceiveTick(float DeltaSeconds);
	void S_AddScore(int Score);
	void S_AddRepairScore(int Score);
	void AddScore(int Score);
	void AddRepairScore(int Score);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void SetSelectedSpawnPoint(class ABP_BoatSpawn_C* SpawnPointRef);
	void ExecuteUbergraph_BP_PlayerState(int EntryPoint);
	void OnPlayerRespawned__DelegateSignature();
	void OnPlayerDied__DelegateSignature();
	void OnPlayerChangedTeam__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

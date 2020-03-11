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

// BlueprintGeneratedClass BP_VoiceChatSource.BP_VoiceChatSource_C
// 0x0081 (0x03A9 - 0x0328)
class ABP_VoiceChatSource_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVOIPTalker*                                 VOIPTalker;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsLocal;                                                 // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTalking;                                               // 0x0341(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnIsTalkingChanged;                                       // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitializeSuccess;                                      // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitializeFailed;                                       // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bInitialized;                                             // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class USoundAttenuation*                           SoundAttenuation_Global;                                  // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           SoundAttenuation_Proximity;                               // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVoiceChatType>                        CurrentVoiceChatType;                                     // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class ABP_PlayerState_C*                           PlayerState;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EVoiceChatType>                        VoiceChatTypeFallback;                                    // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowTalkingWhileDead;                                   // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03A2(0x0002) MISSED OFFSET
	float                                              CullDistance;                                             // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCulled;                                                // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VoiceChatSource.BP_VoiceChatSource_C");
		return ptr;
	}


	void ShouldShowVoiceIcon(bool* bShouldShow);
	void CullRegisterIfNeeded();
	void ToggleTalkerMuted(const struct FBPUniqueNetId& UniqueNetId, bool bMute, bool bIsSystemWide);
	void ToggleTalkerRegistered(const struct FBPUniqueNetId& UniqueNetId, bool bEnable);
	void ResetRemoteTalker();
	void BindLocalEvents();
	void BindRemoteEvents();
	void ChangeTalkEnabled(bool bEnableTalking);
	void CheckIsTryingToTalk(bool* bIsTalking);
	void CheckIsAllowedToTalk(bool* bIsAllowed);
	void TryChangeVoiceChatActive(bool bEnableVoiceInput);
	void ChangeVoiceChatType(TEnumAsByte<EVoiceChatType> VoiceChatType);
	void SetShouldBeProximity(bool bShouldBeProximity);
	void UpdateLocationToPawn();
	void OnRep_bIsTalking();
	void Initialize(bool* bSuccess);
	void InitializeRemote(bool* bSuccess);
	void InitializeLocal(bool* bSuccess);
	void UserConstructionScript();
	void S_SetIsTalking(bool bIsTalking);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void HandlePlayerChangedTeam();
	void HandlePlayerDied_Remote();
	void HandlePlayerRespawned_Remote();
	void ExecuteUbergraph_BP_VoiceChatSource(int EntryPoint);
	void OnInitializeFailed__DelegateSignature();
	void OnInitializeSuccess__DelegateSignature();
	void OnIsTalkingChanged__DelegateSignature(bool bNewStatus);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

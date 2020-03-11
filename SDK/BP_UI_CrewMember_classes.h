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

// BlueprintGeneratedClass BP_UI_CrewMember.BP_UI_CrewMember_C
// 0x00A8 (0x03D0 - 0x0328)
class ABP_UI_CrewMember_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        MannequinChild;                                           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PlayerIndex;                                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FST_Customisation                           Customization;                                            // 0x0348(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsValid;                                                 // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	class UUI_CrewMemberInfo_C*                        MemberInfoWidgetRef;                                      // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                        // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_UI_CrewLobbyManager_C*                   CrewManager;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_CrewMember.BP_UI_CrewMember_C");
		return ptr;
	}


	void UpdateShouldShowInfoWidget(bool bShouldShow);
	void UpdateSlot();
	void ToggleVisible(bool bNewVisible, bool bShowInfo);
	void ResetCrewSlot();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_UI_CrewMember(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

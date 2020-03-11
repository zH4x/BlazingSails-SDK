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

// BlueprintGeneratedClass BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C
// 0x00E8 (0x04E8 - 0x0400)
class ABP_CrewMenu_PlayerState_C : public ASteamBeaconPlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FST_Customisation                           Customization;                                            // 0x0408(0x0068) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class ABP_Mannequin_C*                             Mannequin;                                                // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0478(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FST_Customisation                           LeaderCustomization;                                      // 0x0480(0x0068) (Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CrewMenu_PlayerState.BP_CrewMenu_PlayerState_C");
		return ptr;
	}


	void GetTeamID(int* TeamID);
	void SetTeamID(int TeamID);
	void OnRep_LeaderCustomization();
	void OnRep_TeamID();
	void Client_UpdateCustomization(const struct FST_Customisation& Customization);
	void OnRep_Customization();
	void UserConstructionScript();
	void Server_SetCustomization(const struct FST_Customisation& Customization);
	void ExecuteUbergraph_BP_CrewMenu_PlayerState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

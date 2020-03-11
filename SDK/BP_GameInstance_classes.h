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

// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// 0x0182 (0x0652 - 0x04D0)
class UBP_GameInstance_C : public UAdvancedFriendsGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     PlayerName;                                               // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FST_Options                                 options;                                                  // 0x04E8(0x0038) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FST_Customisation                           Customisation;                                            // 0x0520(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Keybind>                         KeyBinds;                                                 // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Version;                                                  // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	TArray<struct FSessionPropertyKeyPair>             SessionExtraSetting;                                      // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Servername;                                               // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_Keybind>                         AzertyKeyBinds;                                           // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_Keybind>                         QuertyKeyBinds;                                           // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_TimesOfDay>                          TimeOfDay;                                                // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	int                                                GoldAmount;                                               // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             OwnedItems;                                               // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Level;                                                    // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Progress;                                                 // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DefaultNameGenerated;                                     // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0601(0x0007) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               UsedCodes;                                                // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Index_Fair_;                                              // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartUpScreenShown;                                       // 0x062C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x062D(0x0003) MISSED OFFSET
	TArray<struct FST_BanListEntry>                    BannedPlayersList;                                        // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxPlayerPerCrew;                                         // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dv;                                                       // 0x0644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OptionsLocked;                                            // 0x0645(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0646(0x0002) MISSED OFFSET
	class ABP_Event_AttractMode_C*                     AttractModeController;                                    // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableAttractMode;                                       // 0x0650(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlphaDisclaimerShown;                                    // 0x0651(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C");
		return ptr;
	}


	void LoadOptions();
	void SaveOptions();
	void LoadBanList();
	void SaveBanList();
	void CheckIfPlayerHasItemUnlocked(int ItemIndex, TEnumAsByte<E_ClothingCategories> ClothingCategory, bool* HasItem);
	void AddUsedCode(const struct FText& Code);
	void RemoveGold(int GoldAmount);
	void AddScore(int Score);
	void AddGold(int GoldAmount);
	void SpawnActor(class UClass* ActorClass, const struct FTransform& Transform, class AActor** Actor);
	void SaveData();
	void LoadData();
	void ReceiveShutdown();
	void UpdateSessionPlayerAmount(int PlayerAmount);
	void ReceiveInit();
	void ResetKeysAzerty();
	void ResetKeysQuerty();
	void AddCustomPlayerStateData_2(class ASteamBeaconPlayerState* InPlayerState);
	void ExecuteUbergraph_BP_GameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

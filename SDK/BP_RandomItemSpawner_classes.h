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

// BlueprintGeneratedClass BP_RandomItemSpawner.BP_RandomItemSpawner_C
// 0x0158 (0x0480 - 0x0328)
class ABP_RandomItemSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              Items;                                                    // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RandomTier;                                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier1Min;                                                 // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier2Min;                                                 // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier3Min;                                                 // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier4Min;                                                 // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier5Min;                                                 // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              Tier1Items;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Tier2Items;                                               // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Tier3Items;                                               // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Tier4Items;                                               // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Tier5Items;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Weapons;                                                  // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              NoneCrateItems;                                           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class ABP_RandomItemSpawnPoint_C*>          SpawnPoints;                                              // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                SpawnPointAmount;                                         // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class ABP_RandomItemSpawnPoint_C*                  SpawnPointToDelete;                                       // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                SpawnedItems;                                             // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	TArray<class ABP_RandomItemSpawnPoint_C*>          NewSpawnPoints;                                           // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Tier1ItemAmount;                                          // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier2ItemAmount;                                          // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier3ItemAmount;                                          // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier4ItemAmount;                                          // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tier5ItemAmount;                                          // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpawnedUpgrades;                                          // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpawnedLootCrates;                                        // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Tier1NoneCrateItems;                                      // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Tier2NoneCrateItems;                                      // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Tier3NoneCrateItems;                                      // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Tier4NoneCrateItems;                                      // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Tier5NoneCrateItems;                                      // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Ready;                                                    // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	int                                                OnTopOfEachotherCrates;                                   // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RandomItemSpawner.BP_RandomItemSpawner_C");
		return ptr;
	}


	void RemoveAllItems();
	void GetRandomUpgrade(class UClass** Upgrade);
	void GetSurfaceSnapTransform(const struct FTransform& Transform, struct FTransform* SurfaceTransform, bool* IncorrectSpawn);
	void CheckNoneCrateTier(int Number, TArray<class UClass*>* Tier, TEnumAsByte<E_Tiers>* TierClass);
	void SplitNoneCrateItemsInTiers();
	void GetRandomItem(TEnumAsByte<E_Items>* Item, int* Amount, bool* IsWeapon);
	void SpawnTreasureChests();
	void SplitItemsInTiers();
	void SpawnItem(const struct FVector& Location, bool Respawns, float RespawnTime, TEnumAsByte<E_Tiers> TierClass, TArray<class UClass*>* ItemTier);
	void CheckItemTier(int Number, TArray<class UClass*>* Tier, TEnumAsByte<E_Tiers>* TierClass);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SpawnChestItemAtLocation(const struct FVector& Location, TEnumAsByte<E_Tiers> MinimumTier);
	void SpawnItems();
	void SpawnLootCrateItem(const struct FVector& Location);
	void ExecuteUbergraph_BP_RandomItemSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

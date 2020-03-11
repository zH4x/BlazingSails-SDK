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

// BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C
// 0x00A9 (0x03D1 - 0x0328)
class ABP_HullDamage_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RepairPlankInside;                                        // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    DamageWoodPieces;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WaterSpout;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ImpactNormal;                                             // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SplinteredWoodInterior;                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SplinteredWoodOutside;                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WaterDamage;                                              // 0x0388(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RefreshWaterDamage;                                       // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Repaired;                                                 // 0x038A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GetShipRef;                                               // 0x038B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamagePointUnderHullWater;                                // 0x038C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateDamagePointSize;                                   // 0x038D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x038E(0x0002) MISSED OFFSET
	class UCurveFloat*                                 DamageAmountCurve;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepairHits;                                               // 0x0398(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepairHitAmount;                                          // 0x039C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                DamageToRestore;                                          // 0x03A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                DamageLeft;                                               // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DamagePointSize;                                          // 0x03A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class ABP_BoatMeshBase_C*                          ShipRef;                                                  // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUI_HullDamageProgress_C*                    ProgressWidgetRef;                                        // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                HullDamageModelIndex;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DamageDecalMaterialInstanceRef;                           // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamagedAtLeastOnce;                                       // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HullDamage.BP_HullDamage_C");
		return ptr;
	}


	void UpdateDamagePointSize();
	void OnRep_DamagePointSize();
	void OnRep_RepairHitAmount();
	void OnRep_DamagePointUnderHullWater();
	void AddRepairHit();
	void OnRep_WaterDamage();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void HighlightHullDamage(bool ENoughWood);
	void NoHighlight();
	void CheckForDestroy();
	void MC_DamageEffects(bool NoSound);
	void S_RepairDamage();
	void MC_HammerRepairHit();
	void DisableDamagePointAfterDelay();
	void ResetVisualCheck();
	void ExecuteUbergraph_BP_HullDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

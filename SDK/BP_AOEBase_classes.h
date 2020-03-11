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

// BlueprintGeneratedClass BP_AOEBase.BP_AOEBase_C
// 0x006C (0x0394 - 0x0328)
class ABP_AOEBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            DamageRadius;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_Controller_C*                            ControllerRef;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                DamageAmount;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Explosion_Duration;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // 0x0350(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShipDamageImpacts;                                        // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShipDamageAmountPerHit;                                   // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoNotDamageOwnShip;                                       // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	int                                                OwnTeamID;                                                // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<class ABP_Character_C*>                     DamagedCharacters;                                        // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_BoatMeshBase_C*>                  DamagedShips;                                             // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               AlreadyDamagedThisChar;                                   // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlreadyDamagedThisShip;                                   // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreObstacles;                                          // 0x0392(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DamageOwnTeamAlso;                                        // 0x0393(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AOEBase.BP_AOEBase_C");
		return ptr;
	}


	void CalculateDamage(const struct FVector& Location);
	void CheckIfBehindObstacle(class ABP_Character_C* Character, bool* CanBeDamaged);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AOEBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

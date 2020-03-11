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

// BlueprintGeneratedClass BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C
// 0x003E (0x04E8 - 0x04AA)
class ABP_ProjectileCannonballBase_C : public ABP_ProjectileBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x04AA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                ShipDamage;                                               // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArmorPlateDamage;                                         // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SailDamage;                                               // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DamageType>                          HullDamageSize;                                           // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class UClass*                                      AOE;                                                      // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanPlayFly;                                               // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	TArray<class ABP_Character_C*>                     OverlappedCharacters;                                     // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileCannonballBase.BP_ProjectileCannonballBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void PostHit(bool ForceKilled_);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectileCannonballBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

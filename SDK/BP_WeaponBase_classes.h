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

// BlueprintGeneratedClass BP_WeaponBase.BP_WeaponBase_C
// 0x0148 (0x0470 - 0x0328)
class ABP_WeaponBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             ProjectileStart;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WeaponMesh;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<E_AnimationType>                       AnimationType;                                            // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	struct FVector                                     CameraLocation;                                           // 0x034C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class ABP_Character_C*                             CharacterRef;                                             // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_EquipmentSlots>                      WeaponType;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UClass*                                      Pickup;                                                   // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HolsterSockets>                      HolsterSocket;                                            // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0381(0x000F) MISSED OFFSET
	struct FTransform                                  CustomHolsterTransform;                                   // 0x0390(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class ABP_DualLeftWeaponBase_C*                    SecondaryWeaponMeshRef;                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultTransform;                                         // 0x03D0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DefaultWorldScale;                                        // 0x0400(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FullPrecision;                                            // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Holstered;                                                // 0x040D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fire;                                                     // 0x040E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLoadedClient;                                           // 0x040F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RefreshLocalWeaponRef;                                    // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DualWeapon;                                               // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0412(0x0006) MISSED OFFSET
	class UClass*                                      DualSecondaryWeaponActor;                                 // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableSprint;                                            // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FireLeftWeapon;                                           // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasSprinting;                                             // 0x0422(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OwnWeapon;                                                // 0x0423(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SecondaryIsZoom;                                          // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HoldFire;                                                 // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x042A(0x0002) MISSED OFFSET
	int                                                ClipAmount;                                               // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ServerClipAmount;                                         // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponHealth;                                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FPSLocationOffset;                                        // 0x0438(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FPSRotationOffset;                                        // 0x0444(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FPSScaleOffset;                                           // 0x0450(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ThirdPersonCameraOffset;                                  // 0x045C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowWeaponsInHolsters;                                    // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	float                                              BlockSprintTime;                                          // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBase.BP_WeaponBase_C");
		return ptr;
	}


	void ApplyDamage(int damage);
	void OnRep_Holstered();
	void ResetTransform();
	void SetCustomHolsterTransform();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void MC_DamagedEffects();
	void SpawnDualWeaponLeft();
	void ReceiveDestroyed();
	void PrimaryFire(const struct FVector& CameraLocation, const struct FVector& Direction, bool FullPrecision, bool WasSprinting);
	void StopPrimaryFire();
	void SecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void StopSecondaryFire(const struct FVector& CameraLocation, const struct FVector& Direction);
	void HolsteredEvent();
	void ExecuteUbergraph_BP_WeaponBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

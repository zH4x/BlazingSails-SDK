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

// BlueprintGeneratedClass BP_MastBase2.BP_MastBase2_C
// 0x01C8 (0x05E8 - 0x0420)
class ABP_MastBase2_C : public ABP_VehicleBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Ring2;                                                    // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Ring1;                                                    // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sail_Upper;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sail_Lower;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             sail_up_down;                                             // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        flag;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      FlagBase;                                                 // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             MastAngle;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        mast_base;                                                // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Sail_base;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             mast_turning;                                             // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               RepairCollider;                                           // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            RepairWidget;                                             // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        sail_wind;                                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SailDeploySpeed;                                          // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SailHealth;                                               // 0x04AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepairHits;                                               // 0x04B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rotation;                                                 // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SailPercent;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XScale;                                                   // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZScale;                                                   // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindOpacity;                                              // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SailUp;                                                   // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SailDown;                                                 // 0x04CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateRight;                                              // 0x04CE(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotateLeft;                                               // 0x04CF(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_BoatPhysicsBase_C*                       PhysicBaseRef;                                            // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Wind_C*                                  WindRef;                                                  // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SailUpperMaterialInstanceRef;                             // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SailBottomMaterialInstanceRef;                            // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlagMaterialInstanceRef;                                  // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SailTurnSpeed;                                            // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SailWindMaterialInstanceRef;                              // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_SailDamageProgress_C*                    SailDamageWidgetRef;                                      // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FKey                                        SailLeftKey;                                              // 0x0510(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        SailRightKey;                                             // 0x0528(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        LowerSailKey;                                             // 0x0540(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        RaiseSailKey;                                             // 0x0558(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SailColor;                                                // 0x0570(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0574(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpdateSailColor;                                          // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0579(0x0003) MISSED OFFSET
	float                                              SailAmount;                                               // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SailAmountTarget;                                         // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SailAmountGoal;                                           // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateAmount;                                             // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateAmountTarget;                                       // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateAmountGoal;                                         // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindPercentage;                                           // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewWindPercentage;                                        // 0x0598(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindDirection;                                            // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MainMenuShip;                                             // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadFlagEmblem;                                           // 0x05A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x05A2(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    RopeMaterialInstance;                                     // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SailAmountReplicated;                                     // 0x05B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateAmountReplicated;                                   // 0x05B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartUpdating;                                            // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadMastColor;                                           // 0x05B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x05BA(0x0002) MISSED OFFSET
	int                                                MastColor;                                                // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RopeColor;                                                // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SailBasematerialInstanceRef;                              // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SailBarMaterialInstanceRef;                               // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadRopeColor;                                            // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    WinchRopeMaterialInstance;                                // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MastBase2.BP_MastBase2_C");
		return ptr;
	}


	void OnRep_TeamID();
	void SetSailParameters(class UMaterialInstanceDynamic* MaterialInstanceRef);
	void SailRolledUpMultiplier(float* Multiplier);
	void GetSailAnglePercentage(float* Percent);
	void OnRep_SailColor();
	void AddRepairHit();
	void DamageSail(int damage);
	void GetClosestWindActor();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void LoadKeys();
	void Resetkeys();
	void RefreshKeys();
	void RaiseSail();
	void LowerSail();
	void StopRaiseSail();
	void StopLowerSail();
	void TurnMastLeft();
	void StopTurnMastLeft();
	void TurnRight();
	void StopTurnRight();
	void S_UpdateMast(float SailAmount, float RotationAmount);
	void MC_DetractSails();
	void ExecuteUbergraph_BP_MastBase2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C
// 0x00E8 (0x0508 - 0x0420)
class ABP_VehicleSteeringWheel_C : public ABP_VehicleBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Rope;                                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CenterIndicationRing;                                     // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             steering_wheel_Grind_sound;                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ActualWheelMesh;                                          // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Steering_Wheel_Ticking_sound;                             // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletonWheelMesh;                                        // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SteeringLeft;                                             // 0x0468(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SteeringRight;                                            // 0x0469(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SteeringAnim;                                             // 0x046A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FPSMode;                                                  // 0x046B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnchorReady;                                              // 0x046C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class ABP_BoatMeshBase_C*                          ShipRef;                                                  // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Usteeringwheel_AnimBP_C*                     WheelAnimInstance;                                        // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reverse;                                                  // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                RudderRotation;                                           // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSteeringFrame;                                     // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReplicatedCurrentSteeringFrame;                           // 0x048C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalCurrentSteeringFrame;                                // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringWheelSpeed;                                       // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0498(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnchorDropPercentage;                                     // 0x049C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Character_C*                             LocalControllingCharacterRef;                             // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalRotation;                                            // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllRotation;                                              // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousRotation;                                         // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelTurnSpeed;                                           // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_SteeringDirection>                   SteeringDirection;                                        // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              AnchorDropCooldownTime;                                   // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_CapstanSloop_C*                          CapstanRef;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WheelRotation;                                            // 0x04C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	struct FKey                                        RightKey;                                                 // 0x04D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        LeftKey;                                                  // 0x04F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleSteeringWheel.BP_VehicleSteeringWheel_C");
		return ptr;
	}


	void SetShipTurnRotation();
	void OnRep_SteeringLeft();
	void OnRep_SteeringRight();
	void CheckWheelState(float* ForwardPosition, float* BackWardPosition);
	void UserConstructionScript();
	void InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void S_ShipSteerRight();
	void S_ShipStopSteerRight();
	void S_ShipSteerLeft();
	void S_ShipStopSteerLeft();
	void S_StopWheel();
	void Reset();
	void ReceiveTick(float DeltaSeconds);
	void UnOccupied();
	void S_AnchorDrop();
	void MC_AnchorDrop();
	void S_ReverseShip();
	void S_StopReverseShip();
	void S_SetWheelRotation(int Rotation);
	void MC_SetWheelRotation(int WheelRotation);
	void ResetWheelRotation();
	void LoadKeys();
	void Resetkeys();
	void RefreshKeys();
	void OnRepOccupied();
	void MC_ResetSpringArm();
	void AnchorDrop();
	void SetAnchorReady();
	void MC_UpgradeSteeringWheel();
	void ExecuteUbergraph_BP_VehicleSteeringWheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

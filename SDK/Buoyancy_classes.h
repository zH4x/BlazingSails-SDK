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

// BlueprintGeneratedClass Buoyancy.Buoyancy_C
// 0x0200 (0x02F0 - 0x00F0)
class UBuoyancy_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AWaterSettings_C*                            WaterSettings;                                            // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         PrimComponent;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     InitialLocation_global_;                                  // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorDimensions;                                          // 0x011C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    InitialRotation;                                          // 0x0128(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActorHeight;                                              // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBuoyancyModes>                        BuoyancyMode;                                             // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHullShapes>                           PointsShape;                                              // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	float                                              PointsScale;                                              // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                nPointsX;                                                 // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                nPointsY;                                                 // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatHeight;                                              // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                nPoints;                                                  // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             Points;                                                   // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             PointsLocation;                                           // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             PointsLocationPrev;                                       // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      PointsDepth;                                              // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      PointsDepthUndeep;                                        // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        PointsIdxToCalculate;                                     // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      PointsWaveHeight;                                         // 0x01B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      PointsUpdateCumTime;                                      // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      PointsSurfaceSpeed;                                       // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DrawDebug;                                                // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	int                                                nPointsPerFrame;                                          // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                nFramesPause;                                             // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatFactor;                                              // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearDamping;                                            // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PointsCalculated;                                         // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentPoint;                                             // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Mass;                                                     // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0204(0x000C) MISSED OFFSET
	struct FTransform                                  ActorTransform;                                           // 0x0210(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnySubmerged;                                            // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              DragMultiplier;                                           // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIdx;                                                 // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             DeltaPrev;                                                // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             DeltaPrevPrev;                                            // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                nPausedFrames;                                            // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAmplitude;                                             // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableBuoyancy;                                           // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	struct FVector                                     ArrayElem;                                                // 0x027C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PtLoc;                                                    // 0x0288(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector2D                                   PointsOffset;                                             // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyEmerged;                                              // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	int                                                EmergedPoints;                                            // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaveHeightMultiplier;                                     // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FrontEmerged;                                             // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackEmerged;                                              // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	int                                                EmergedFrontPoints;                                       // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EmergedBackPoints;                                        // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             ResultingPoints;                                          // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_PointsWithHeight>                PointsWithHeight;                                         // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      WaterHeights;                                             // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buoyancy.Buoyancy_C");
		return ptr;
	}


	void GenCircPts();
	void GenRectangularPoints();
	void MeshDimensions(class AActor* self2, struct FVector* Dimensions);
	void RotatorFromNormal(const struct FVector& Normal, struct FRotator* Rotation);
	void ReceiveTick(float DeltaSeconds);
	void Init();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buoyancy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

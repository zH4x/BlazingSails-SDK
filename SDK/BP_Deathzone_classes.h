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

// BlueprintGeneratedClass BP_Deathzone.BP_Deathzone_C
// 0x012C (0x0454 - 0x0328)
class ABP_Deathzone_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             DeadZoneMusic2D;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             DeadZoneMusic3D;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        deadzoneOuter;                                            // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleOuter;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleInner;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        deadzoneInner;                                            // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeathZoneScale;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightScale;                                              // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Falloff;                                                  // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeathZoneFalloffStart;                                    // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        PhaseTimeBeforeClosing;                                   // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        TimeItTakesToClose;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        ZoneScale;                                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DeltaTime;                                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCountDown;                                         // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentPhase;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentCircleLocation;                                    // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NextCircleLocation;                                       // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeadzoneX;                                                // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeadZoneY;                                                // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeadZoneScale;                                            // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Countdown;                                                // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Timer;                                                    // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Collapsing;                                               // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CollapsingSynced;                                         // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FinalZone;                                                // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FinalZoneSynced;                                          // 0x03E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadZoneScaleCurrent;                                     // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InnerDeadZoneX;                                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InnerDeadZoneY;                                           // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InnerDeadZoneRadius;                                      // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	TArray<class ABP_WoodCrate_C*>                     CurrentCrateRef;                                          // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               SpawnNewCrates;                                           // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                CratesSpawned;                                            // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDeathzone_;                                            // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	float                                              DeadzoneRad;                                              // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GetNewCircle;                                             // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	struct FVector                                     RandomizedCircle;                                         // 0x041C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PauseDeadZone;                                            // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	class UAudioComponent*                             PhaseMusicRef;                                            // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             DeadZoneMusicRef;                                         // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DeathZoneDestroyTransition;                               // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UAudioComponent*                             CurrentZoneSong;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              FallOffSynced;                                            // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deathzone.BP_Deathzone_C");
		return ptr;
	}


	void SetZoneMusic(class USoundBase* Song);
	void ClosestPointToDeathzoneEdge(struct FVector* Closest_Location_To_Circle, bool* Outside_of_Zone_, bool* IsCloseToDeadzone);
	void OnRep_CurrentPhase();
	void GenerateNextRandomCircle(struct FVector* NextCircleLocation, bool* CorrectNextCircleLocation);
	void CheckIfCrateIsSpawnedInWater(const struct FVector& CrateSpawnLocation, bool* InWater, struct FVector* Location);
	void GenerateRandomPointInCircle(struct FVector* RandomPoint);
	void DeadzonePercent(const struct FVector& Position, float* inZoneFloat);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void CloseGate();
	void MC_SetDeadZone(int DeadzoneX, int DeadZoneY, int DeadZoneScale, int Countdown, bool Collapsing, bool FinalZone, int InnerDeadZoneX, int InnerDeadZoneY, int InnerDeadZoneRadius, float Falloff);
	void ReceiveBeginPlay();
	void ReInitZone();
	void ExecuteUbergraph_BP_Deathzone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

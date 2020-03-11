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

// BlueprintGeneratedClass WaterSettings.WaterSettings_C
// 0x01CC (0x04F4 - 0x0328)
class AWaterSettings_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EWindSpeeds>                           WindSpeed;                                                // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFetchLengths>                         FetchLength;                                              // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	int                                                nWaves;                                                   // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                nWaves_mod;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                nWindSpeeds;                                              // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      A;                                                        // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k1;                                                       // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k2;                                                       // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      omega;                                                    // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      phi;                                                      // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RandomPhaseSeed;                                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               refresh;                                                  // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	struct FRandomStream                               RandomStreamPhase;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SeaLevel;                                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<float>                                      A_orig;                                                   // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              A_Multiplier;                                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSeaStateTransition;                                      // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	TArray<float>                                      A_Target;                                                 // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k1_Target;                                                // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k2_Target;                                                // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      omega_Target;                                             // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      phi_Target;                                               // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      A_Old;                                                    // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k1_Old;                                                   // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k2_Old;                                                   // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      omega_Old;                                                // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      phi_Old;                                                  // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TransitionStartTime;                                      // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TransitionEndTime;                                        // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      omega_dot;                                                // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TransitionTime;                                           // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	TArray<float>                                      k_mag_Old;                                                // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k_mag_Target;                                             // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k_angle_Old;                                              // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      k_angle_Target;                                           // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   CameraLocationStart;                                      // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              WindSpeed_Target;                                         // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FetchLength_Target;                                       // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindSpeedCurrent;                                         // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FetchLengthCurrent;                                       // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWindSpeeds>                           WindSpeedTargetEnum;                                      // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFetchLengths>                         FetchLengthTargetEnum;                                    // 0x04E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x04E6(0x0002) MISSED OFFSET
	float                                              TransitionAlpha;                                          // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameTime;                                                 // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameTimeOffset;                                           // 0x04F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterSettings.WaterSettings_C");
		return ptr;
	}


	void ChangeSeaState(TEnumAsByte<EWindSpeeds> NewWindSpeed, TEnumAsByte<EFetchLengths> NewFetchLength, float TransitionTimeSeconds);
	void GenWareParamArrays(int WindSpeedIndex, int FetchIndex, TArray<float>* A, TArray<float>* k1, TArray<float>* k2, TArray<float>* omega);
	void GerstnerWaveDeltaQ(int WaveIndex, const struct FVector2D& InitialLocation, struct FVector* deltaOut, struct FVector* Q_Out);
	void GerstnerWaveDeltaOnly(int WaveIndex, const struct FVector2D& InitialLocation, struct FVector* deltaOut);
	void CalculateDeltaOnly(const struct FVector2D& InitialLocation, float ZoneWaterHeight, int Accuracy_10_28_, struct FVector* Delta);
	void CalculateDeltaNormal(const struct FVector2D& InitialLocation, int Accuracy_10_100_, struct FVector* Delta, struct FVector* Normal);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ConstructionEvent();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_WaterSettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

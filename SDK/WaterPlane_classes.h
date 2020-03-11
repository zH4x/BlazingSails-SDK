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

// BlueprintGeneratedClass WaterPlane.WaterPlane_C
// 0x02DC (0x0604 - 0x0328)
class AWaterPlane_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             WaterPlanesParentReallyFar;                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             WaterPlanesParentFar;                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             WaterPlanesParentClose;                                   // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseWaterInEditor;                                         // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class AWaterSettings_C*                            WaterSettings;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicWaterInst;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicWaterInst_Lod1;                                    // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicWaterInst_Lod2;                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicDepthBufferInst;                                   // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicDepthBufferInst_Lod1;                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicDepthBufferInst_Lod2;                              // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicOuterWaterInstance;                                // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           MaterialInst;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MaterialInst_Lod1;                                        // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           MaterialInst_Lod2;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DepthBufferInst;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DepthBufferInst_Lod1;                                     // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DepthBufferInst_Lod2;                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           WaterOuterInstance;                                       // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RefreshMaterial;                                          // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FollowCamera;                                             // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03DA(0x0002) MISSED OFFSET
	float                                              HeightZoomFactor;                                         // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleWaterPlane;                                          // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumHeight;                                            // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeaPlaneSize;                                             // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RastorMultSize;                                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RastorSizeChange;                                         // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	struct FTransform                                  TransFormToApply;                                         // 0x0400(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RastorOrigScale;                                          // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RastorScalePerInteration;                                 // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                SaveAllStaticMeshComps;                                   // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 HQ_MeshLod5_Corner;                                       // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod5;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod4_Corner;                                       // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod4;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod3_Corner_VertexColor;                           // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod3_VertexColor;                                  // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod2_Corner_VertexColor;                           // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod2_VertexColor;                                  // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod1_Corner;                                       // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod1;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 HQ_MeshLod0;                                              // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraDirectionDistanceOffset;                            // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetTest;                                               // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RenderDepthBufferInMainPass_;                             // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                AllWaterPlanes;                                           // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                AllBufferPlanes;                                          // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                AllInvertedBufferPlanes;                                  // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicPPMat;                                             // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeightedBlendable>                  PPMaterialsArrayTemp;                                     // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        Waterhull;                                                // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UTexture*                                    SeaWaveHeightTex;                                         // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmountCoverdInTex;                                        // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldOffsetX;                                             // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldOffsetY;                                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SeaWaveHeightFalloff;                                     // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaskRenderQuality;                                        // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	TArray<class UTextureRenderTarget*>                RenderTargets;                                            // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Testmap;                                                  // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Shoreline_Dynamics;                                       // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CalculatedScale_Lod0;                                     // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CalculatedScale_Lod1;                                     // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CalculatedScale_Lod2;                                     // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	class UStaticMesh*                                 LQ_MeshLod5_Corner;                                       // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod5;                                              // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod4_Corner;                                       // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod4;                                              // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod3_Corner_VertexColor;                           // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod3_VertexColor;                                  // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod2_Corner_VertexColor;                           // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod2_VertexColor;                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod1_Corner;                                       // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod1;                                              // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LQ_MeshLod0;                                              // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod4_Corner;                                      // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod4;                                             // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod3_Corner_VertexColor;                          // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod3_VertexColor;                                 // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod2_Corner_VertexColor;                          // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod2_VertexColor;                                 // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod1_Corner;                                      // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod1;                                             // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 ULQ_MeshLod0;                                             // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WavesOffset;                                              // 0x05F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPlane.WaterPlane_C");
		return ptr;
	}


	void UpdateTrailMatSpeed(class UMaterialInstanceDynamic* TrailDynMat, float TrailSpeed);
	void MakeTrailMaterial(class UMaterialInstanceDynamic* DynamicMat, const struct FVector& OffsetWaves);
	void ULQ_MakeSeaPlanes();
	void LQ_MakeSeaPlanes();
	void HQ_MakeSeaPlanes();
	void GetPrimitiveCompFromBoatMesh(class ABP_BoatMeshBase_C* BoatMeshRef, class UPrimitiveComponent** PrimitiveComponent);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void UpdateWaveParameters(bool CreateDynMat);
	void _1_MakeGridLayer(TEnumAsByte<E_QualitySettingWater> QualityWater);
	void ReceiveBeginPlay();
	void No_shadow();
	void AddNewShipCulling(class ABP_ShipWaterCulling_C* CullingVolumeRef, class ABP_BoatMeshBase_C* BoatMeshRef);
	void CreateWaterMask();
	void RemoveShipCulling(class ABP_BoatMeshBase_C* BoatMeshRef);
	void AddSeasphereVals();
	void InitWater();
	void OverrideMaterialInstances();
	void CalculateSkipiteration(TEnumAsByte<E_QualitySettingWater> WaterQuality);
	void ExecuteUbergraph_WaterPlane(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

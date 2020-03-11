#pragma once

// Name: BlazingSails, Version: 1.481.81

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_Options.ST_Options
// 0x0038
struct FST_Options
{
	float                                              MouseSensitivity_3_5A984E80406C73E54A5A2AB145B70FD7;      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FOV_7_DD7521994D532790924767B7B1AE3145;                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Resolution_12_42C7F04B40EAD3832255B59AF03FDF85;           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Fullscreen_11_F67D78AC49B6472DAE6F6EA5BAC7C27F;           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseAimToggle_15_F2D63ACF4A68E15DDA20CC9ED838EE49;         // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_CameraPosition>                      CameraPosition_26_BBD84B44476E72421CFADA9F6CC59CDC;       // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_Perspective>                         Perspective_27_B2ED8694493061191137DD9C869F04BC;          // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MusicVolume_55_ED00E78C4380AA51DDEE9CBFD9E82351;          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDisclaimer_33_8733CECD4E6B44D90BDC34A1CCF2BFE5;       // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MouseInvertY_35_F5E7082B493742608726CD8FC6CEE71B;         // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Headbob_38_607BD6FE497BA1D4618AFD843FE721E8;              // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	int                                                AntiAliasing_46_0FCA7A6B464DBB67BBCE3696FA4EAADB;         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality_49_D8E60DAD4F9257CDEA1728A3E9037CCB;        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WaterCullingQuality_51_E2D01070445A21B7FAA44F81F4D3D03B;  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoundEffectVolume_59_A777FD8C479E0C8C5D40F68B8BFE05B5;    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceChatVolume_62_533B44064A6ACD1072E07DA457BD6091;      // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

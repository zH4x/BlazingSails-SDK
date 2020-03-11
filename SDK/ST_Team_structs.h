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

// UserDefinedStruct ST_Team.ST_Team
// 0x004C
struct FST_Team
{
	int                                                TeamID_3_FFA23020468BBEDB9D8B689679B08025;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamFirstNameRow_18_0285FB684A99ADA2FC6A22ABC25C4C18;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EmblemRow_45_D509801E44B5CDF93EA797A6F1755BB9;            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EmblemIndex_46_B4430570403BD4FCD3D807A724391580;          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamCOlorRow_25_B1C6B8954D3F3AEB713046A4DE9B1239;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Defeated_27_DAB622274CE24A0ECAF1F093646E09E6;             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                TeamRank_30_DCD44BB14FD517664032E8BAFD575142;             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GoldAmount_33_911CFEF542D478ABE8EABFAC26CEBD26;           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_Controller_C*                            LeaderController_38_F556E87F4DAA97B7C16BA4967B162B9F;     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FText                                       ShipName_41_0703C25848C7C25BDF4D67BF982DC174;             // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FVector                                     SpawnPoint_44_4C884FD6414FC3826C394C84FB7C92DF;           // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

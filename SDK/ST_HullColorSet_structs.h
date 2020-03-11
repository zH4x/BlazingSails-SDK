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

// UserDefinedStruct ST_HullColorSet.ST_HullColorSet
// 0x0050
struct FST_HullColorSet
{
	struct FLinearColor                                MainHullColor_3_CB2FB2B541DCD2034104E2BB81D1C412;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SecondaryHullColor_4_0784A7F64BD10BC34819E4B36880ECFD;    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DetailColor_6_77EE2E554EEC68D6CDB3EFAB3ECAF1E9;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Desaturate_10_B893E67A4FD80A81497A19B77A1445E2;           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FText                                       SetName_16_1932E36E4742D23075B53A9E32B91786;              // 0x0038(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

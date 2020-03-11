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

// UserDefinedStruct ST_Keybind.ST_Keybind
// 0x0021
struct FST_Keybind
{
	TEnumAsByte<E_Actions>                             Action_13_6B3B22804BABF26B13B8E6A85DB9A3A4;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FKey                                        Key_5_18A5F2D842EB45FE6A5AC1A9F5AC1DA2;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_KeybindCategories>                   Category_16_D68D5AD74453F48C1C027C8DC7BFFBBA;             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

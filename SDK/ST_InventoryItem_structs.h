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

// UserDefinedStruct ST_InventoryItem.ST_InventoryItem
// 0x0039
struct FST_InventoryItem
{
	class UTexture2D*                                  Icon_8_B88B140845A69170C5EC16BAA395DE6A;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Weight_24_0258AF7E4D6BD8B2C6D6FB962BFB8DBF;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      ItemObject_27_64AFEC624FDC6D6911452A84C7E1098F;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Throwable_29_F705F00A48DF63FA2DB255B43050F8AC;            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ItemCategories>                      Category_36_39D2F8CE4F87014588B6819B88E68764;             // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	struct FText                                       Description_39_BDD5428F48FF6943468AB489A52D2099;          // 0x0020(0x0018) (Edit, BlueprintVisible)
	bool                                               DevOnly_41_A9E7BD074C82B0789ECD2BB7EEB2570F;              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

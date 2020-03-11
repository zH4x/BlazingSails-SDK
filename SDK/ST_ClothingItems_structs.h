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

// UserDefinedStruct ST_ClothingItems.ST_ClothingItems
// 0x003A
struct FST_ClothingItems
{
	class UStaticMesh*                                 StaticMesh_23_F88709174CD8AF0EBFAD949FF3B34159;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh_26_659B9F14497EBD14D2585280CB417F85;         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture_29_B9E98D4D46810427973A9E8CBA454F95;              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name_5_FBC362BD4A58889761DA818155864733;                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Price_15_12B9FA234A0A3D87F24FFCB2992E20BD;                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Icon_18_E81160534F86576B6ED0EEBB25D54B10;                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_ClothingCategories>                  ClothingCategory_22_424B3EDC4CCA3C1192DE48B2C3C1F4E8;     // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DevOnly_31_7285B0754560D524010B588F16D8D343;              // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

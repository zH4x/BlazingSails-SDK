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

// UserDefinedStruct ST_CannonAmmo.ST_CannonAmmo
// 0x0018
struct FST_CannonAmmo
{
	class UTexture2D*                                  Icon_5_855D70094B0975D18FD10D97179D4E50;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReloadTime_8_607E8EF543F0F43AF611B7B65F7629E0;            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 CannonDecorationMesh_12_852C05F946FB13580083648889302A3F; // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

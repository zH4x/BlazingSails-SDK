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

// BlueprintGeneratedClass SG_SaveGame.SG_SaveGame_C
// 0x00C5 (0x00ED - 0x0028)
class USG_SaveGame_C : public USaveGame
{
public:
	struct FST_Customisation                           Customisation;                                            // 0x0028(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DefaultNameGenerated;                                     // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	TArray<struct FText>                               UsedCodes;                                                // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              LBytes;                                                   // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              GABytes;                                                  // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<unsigned char>                              PBytes;                                                   // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_OIBytes>                         OIBytes;                                                  // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Index_Fair_;                                              // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dv;                                                       // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SG_SaveGame.SG_SaveGame_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

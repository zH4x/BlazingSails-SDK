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

// BlueprintGeneratedClass SG_Options.SG_Options_C
// 0x0049 (0x0071 - 0x0028)
class USG_Options_C : public USaveGame
{
public:
	struct FST_Options                                 options;                                                  // 0x0028(0x0038) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_Keybind>                         KeyBinds;                                                 // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AlphaDisclaimerShown;                                     // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SG_Options.SG_Options_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

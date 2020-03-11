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

// UserDefinedStruct St_ComplexMessage.St_ComplexMessage
// 0x00B1
struct FSt_ComplexMessage
{
	struct FText                                       Username_4_3345D7014ED03DC0FCE70A9E915E04BF;              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                UsernameColor_9_CDC0AF814EA89B3288DF89BAE3A83947;         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       ChatMessage_10_3551ACBA4D136E5EE12F058ADBE2D73D;          // 0x0028(0x0018) (Edit, BlueprintVisible)
	bool                                               NotificationSound_18_5919F0074E40A93B1CEB90AA0C801DF1;    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpecialMessage_12_419C1AA244890A10C79997A30452DABD;       // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FSlateFontInfo                              SpecialMessageFont_21_93BD862749AE02876F95F9BDCBDC2249;   // 0x0048(0x0058) (Edit, BlueprintVisible)
	struct FLinearColor                                SpecialMessageColor_24_202558A24DA387704E4512B2DB1AC32B;  // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KillFeed_27_BB39CFF84BC2E375C2096094A1D6FA7E;             // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

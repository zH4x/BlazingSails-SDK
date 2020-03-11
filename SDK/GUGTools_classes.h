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

// Class GUGTools.GenericBFL
// 0x0000 (0x0028 - 0x0028)
class UGenericBFL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GUGTools.GenericBFL");
		return ptr;
	}


	struct FVector STATIC_GUG_GetCollisionFaceIndexLocation(class AActor* InActor, class UStaticMesh* StaticMesh, int FaceIndex, bool* bSuccess);
	bool STATIC_GUG_ExecConsoleCommandOnWorld(class UWorld* InWorld, const struct FString& Cmd);
	bool STATIC_GUG_ExecConsoleCommandOnActorWorld(class AActor* InActor, const struct FString& Cmd);
	bool STATIC_GUG_ExecConsoleCommand(const struct FString& Cmd);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

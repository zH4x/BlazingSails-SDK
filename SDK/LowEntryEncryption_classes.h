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

// Class LowEntryEncryption.LowEntryEncryptionAesFastEngine
// 0x0058 (0x0080 - 0x0028)
class ULowEntryEncryptionAesFastEngine : public UObject
{
public:
	int                                                ROUNDS;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x002C(0x0024) MISSED OFFSET
	int                                                C0;                                                       // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C1;                                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C2;                                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C3;                                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C0store1;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C1store1;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C2store1;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C3store1;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C0store2;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C1store2;                                                 // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C2store2;                                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C3store2;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryEncryption.LowEntryEncryptionAesFastEngine");
		return ptr;
	}

};


// Class LowEntryEncryption.LowEntryEncryptionAesFastEngine1D
// 0x0058 (0x0080 - 0x0028)
class ULowEntryEncryptionAesFastEngine1D : public UObject
{
public:
	int                                                ROUNDS;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<int>                                        EW;                                                       // 0x0030(0x0010) (ZeroConstructor)
	TArray<int>                                        DW;                                                       // 0x0040(0x0010) (ZeroConstructor)
	int                                                C0;                                                       // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C1;                                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C2;                                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C3;                                                       // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C0store1;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C1store1;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C2store1;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C3store1;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C0store2;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C1store2;                                                 // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C2store2;                                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                C3store2;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryEncryption.LowEntryEncryptionAesFastEngine1D");
		return ptr;
	}

};


// Class LowEntryEncryption.LowEntryEncryptionAesKey
// 0x0030 (0x0058 - 0x0028)
class ULowEntryEncryptionAesKey : public UObject
{
public:
	int                                                ROUNDS;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               encryptionWSet;                                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x002D(0x0013) MISSED OFFSET
	bool                                               decryptionWSet;                                           // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0041(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryEncryption.LowEntryEncryptionAesKey");
		return ptr;
	}

};


// Class LowEntryEncryption.LowEntryEncryptionAesKey1D
// 0x0030 (0x0058 - 0x0028)
class ULowEntryEncryptionAesKey1D : public UObject
{
public:
	int                                                ROUNDS;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               encryptionWSet;                                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	TArray<int>                                        encryptionW;                                              // 0x0030(0x0010) (ZeroConstructor)
	bool                                               decryptionWSet;                                           // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<int>                                        decryptionW;                                              // 0x0048(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryEncryption.LowEntryEncryptionAesKey1D");
		return ptr;
	}

};


// Class LowEntryEncryption.LowEntryEncryptionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULowEntryEncryptionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryEncryption.LowEntryEncryptionLibrary");
		return ptr;
	}


	TArray<unsigned char> STATIC_RsaPublicKeyToBytes(class ULowEntryRsaPublicKey* PublicKey);
	TArray<unsigned char> STATIC_RsaPrivateKeyToBytes(class ULowEntryRsaPrivateKey* PrivateKey);
	TArray<unsigned char> STATIC_GenerateSecureRandomBytesRandomLength(int MinLength, int MaxLength);
	TArray<unsigned char> STATIC_GenerateSecureRandomBytes(int Length);
	void STATIC_GenerateKeysRsa(int Bits, class ULowEntryRsaPublicKey** PublicKey, class ULowEntryRsaPrivateKey** PrivateKey);
	TArray<unsigned char> STATIC_EncryptRsa(TArray<unsigned char> Data, class ULowEntryRsaPublicKey* PublicKey);
	TArray<unsigned char> STATIC_EncryptAes(TArray<unsigned char> Data, TArray<unsigned char> Key, bool AddHash);
	TArray<unsigned char> STATIC_DecryptRsa(TArray<unsigned char> EncryptedData, class ULowEntryRsaPrivateKey* PrivateKey);
	TArray<unsigned char> STATIC_DecryptAes(TArray<unsigned char> EncryptedData, TArray<unsigned char> Key, bool AddedHash);
	void STATIC_BytesToRsaPublicKey(TArray<unsigned char> ByteArray, int Index, int Length, bool* Success, class ULowEntryRsaPublicKey** PublicKey);
	void STATIC_BytesToRsaPrivateKey(TArray<unsigned char> ByteArray, int Index, int Length, bool* Success, class ULowEntryRsaPrivateKey** PrivateKey);
};


// Class LowEntryEncryption.LowEntryRsaKeys
// 0x0010 (0x0038 - 0x0028)
class ULowEntryRsaKeys : public UObject
{
public:
	class ULowEntryRsaPublicKey*                       PublicKey;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULowEntryRsaPrivateKey*                      PrivateKey;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryEncryption.LowEntryRsaKeys");
		return ptr;
	}

};


// Class LowEntryEncryption.LowEntryRsaPrivateKey
// 0x0070 (0x0098 - 0x0028)
class ULowEntryRsaPrivateKey : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryEncryption.LowEntryRsaPrivateKey");
		return ptr;
	}

};


// Class LowEntryEncryption.LowEntryRsaPublicKey
// 0x0020 (0x0048 - 0x0028)
class ULowEntryRsaPublicKey : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LowEntryEncryption.LowEntryRsaPublicKey");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

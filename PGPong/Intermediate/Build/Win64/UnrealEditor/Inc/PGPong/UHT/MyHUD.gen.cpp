// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGPong/MyHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	PGPONG_API UClass* Z_Construct_UClass_APongHUD();
	PGPONG_API UClass* Z_Construct_UClass_APongHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PGPong();
// End Cross Module References
	void APongHUD::StaticRegisterNativesAPongHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APongHUD);
	UClass* Z_Construct_UClass_APongHUD_NoRegister()
	{
		return APongHUD::StaticClass();
	}
	struct Z_Construct_UClass_APongHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PGPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyHUD.h" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APongHUD_Statics::ClassParams = {
		&APongHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_APongHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APongHUD()
	{
		if (!Z_Registration_Info_UClass_APongHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APongHUD.OuterSingleton, Z_Construct_UClass_APongHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APongHUD.OuterSingleton;
	}
	template<> PGPONG_API UClass* StaticClass<APongHUD>()
	{
		return APongHUD::StaticClass();
	}
	APongHUD::APongHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongHUD);
	APongHUD::~APongHUD() {}
	struct Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_MyHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_MyHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APongHUD, APongHUD::StaticClass, TEXT("APongHUD"), &Z_Registration_Info_UClass_APongHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APongHUD), 1428093237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_MyHUD_h_2818005931(TEXT("/Script/PGPong"),
		Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_MyHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_MyHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

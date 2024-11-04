// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGPong/PongGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	PGPONG_API UClass* Z_Construct_UClass_APongGameState();
	PGPONG_API UClass* Z_Construct_UClass_APongGameState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PGPong();
// End Cross Module References
	void APongGameState::StaticRegisterNativesAPongGameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APongGameState);
	UClass* Z_Construct_UClass_APongGameState_NoRegister()
	{
		return APongGameState::StaticClass();
	}
	struct Z_Construct_UClass_APongGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PGPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongGameState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PongGameState.h" },
		{ "ModuleRelativePath", "PongGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APongGameState_Statics::ClassParams = {
		&APongGameState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_APongGameState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APongGameState()
	{
		if (!Z_Registration_Info_UClass_APongGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APongGameState.OuterSingleton, Z_Construct_UClass_APongGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APongGameState.OuterSingleton;
	}
	template<> PGPONG_API UClass* StaticClass<APongGameState>()
	{
		return APongGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongGameState);
	APongGameState::~APongGameState() {}
	struct Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APongGameState, APongGameState::StaticClass, TEXT("APongGameState"), &Z_Registration_Info_UClass_APongGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APongGameState), 3721996792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGameState_h_1862261710(TEXT("/Script/PGPong"),
		Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

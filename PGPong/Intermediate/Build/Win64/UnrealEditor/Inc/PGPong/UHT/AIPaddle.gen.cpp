// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGPong/AIPaddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPaddle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PGPONG_API UClass* Z_Construct_UClass_AAIPaddle();
	PGPONG_API UClass* Z_Construct_UClass_AAIPaddle_NoRegister();
	PGPONG_API UClass* Z_Construct_UClass_APaddle();
	UPackage* Z_Construct_UPackage__Script_PGPong();
// End Cross Module References
	void AAIPaddle::StaticRegisterNativesAAIPaddle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIPaddle);
	UClass* Z_Construct_UClass_AAIPaddle_NoRegister()
	{
		return AAIPaddle::StaticClass();
	}
	struct Z_Construct_UClass_AAIPaddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BallActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BallActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AISpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AISpeedMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaddle,
		(UObject* (*)())Z_Construct_UPackage__Script_PGPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPaddle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPaddle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIPaddle.h" },
		{ "ModuleRelativePath", "AIPaddle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPaddle_Statics::NewProp_BallActor_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the ball, set this in the editor or dynamically find it in BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "AIPaddle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the ball, set this in the editor or dynamically find it in BeginPlay" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPaddle_Statics::NewProp_BallActor = { "BallActor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPaddle, BallActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPaddle_Statics::NewProp_BallActor_MetaData), Z_Construct_UClass_AAIPaddle_Statics::NewProp_BallActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPaddle_Statics::NewProp_AISpeedMultiplier_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed multiplier for AI paddle movement\n" },
#endif
		{ "ModuleRelativePath", "AIPaddle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed multiplier for AI paddle movement" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIPaddle_Statics::NewProp_AISpeedMultiplier = { "AISpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPaddle, AISpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPaddle_Statics::NewProp_AISpeedMultiplier_MetaData), Z_Construct_UClass_AAIPaddle_Statics::NewProp_AISpeedMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPaddle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPaddle_Statics::NewProp_BallActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPaddle_Statics::NewProp_AISpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPaddle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPaddle_Statics::ClassParams = {
		&AAIPaddle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIPaddle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPaddle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPaddle_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIPaddle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPaddle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIPaddle()
	{
		if (!Z_Registration_Info_UClass_AAIPaddle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIPaddle.OuterSingleton, Z_Construct_UClass_AAIPaddle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIPaddle.OuterSingleton;
	}
	template<> PGPONG_API UClass* StaticClass<AAIPaddle>()
	{
		return AAIPaddle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPaddle);
	AAIPaddle::~AAIPaddle() {}
	struct Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_AIPaddle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_AIPaddle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIPaddle, AAIPaddle::StaticClass, TEXT("AAIPaddle"), &Z_Registration_Info_UClass_AAIPaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPaddle), 198278313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_AIPaddle_h_1762216024(TEXT("/Script/PGPong"),
		Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_AIPaddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_AIPaddle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

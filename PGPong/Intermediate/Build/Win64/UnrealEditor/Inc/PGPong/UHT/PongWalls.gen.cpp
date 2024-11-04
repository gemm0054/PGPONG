// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGPong/PongWalls.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongWalls() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PGPONG_API UClass* Z_Construct_UClass_APongWalls();
	PGPONG_API UClass* Z_Construct_UClass_APongWalls_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PGPong();
// End Cross Module References
	void APongWalls::StaticRegisterNativesAPongWalls()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APongWalls);
	UClass* Z_Construct_UClass_APongWalls_NoRegister()
	{
		return APongWalls::StaticClass();
	}
	struct Z_Construct_UClass_APongWalls_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongWalls_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PGPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongWalls_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongWalls_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PongWalls.h" },
		{ "ModuleRelativePath", "PongWalls.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongWalls_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PongWalls.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongWalls_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongWalls, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongWalls_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_APongWalls_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongWalls_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PongWalls.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongWalls_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongWalls, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongWalls_Statics::NewProp_Box_MetaData), Z_Construct_UClass_APongWalls_Statics::NewProp_Box_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongWalls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongWalls_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongWalls_Statics::NewProp_Box,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongWalls_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongWalls>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APongWalls_Statics::ClassParams = {
		&APongWalls::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APongWalls_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APongWalls_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongWalls_Statics::Class_MetaDataParams), Z_Construct_UClass_APongWalls_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongWalls_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APongWalls()
	{
		if (!Z_Registration_Info_UClass_APongWalls.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APongWalls.OuterSingleton, Z_Construct_UClass_APongWalls_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APongWalls.OuterSingleton;
	}
	template<> PGPONG_API UClass* StaticClass<APongWalls>()
	{
		return APongWalls::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongWalls);
	APongWalls::~APongWalls() {}
	struct Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongWalls_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongWalls_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APongWalls, APongWalls::StaticClass, TEXT("APongWalls"), &Z_Registration_Info_UClass_APongWalls, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APongWalls), 2559387053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongWalls_h_496791555(TEXT("/Script/PGPong"),
		Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongWalls_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongWalls_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

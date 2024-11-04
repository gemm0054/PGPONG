// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGPong/Paddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PGPONG_API UClass* Z_Construct_UClass_APaddle();
	PGPONG_API UClass* Z_Construct_UClass_APaddle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PGPong();
// End Cross Module References
	void APaddle::StaticRegisterNativesAPaddle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaddle);
	UClass* Z_Construct_UClass_APaddle_NoRegister()
	{
		return APaddle::StaticClass();
	}
	struct Z_Construct_UClass_APaddle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAIControlled_MetaData[];
#endif
		static void NewProp_bIsAIControlled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAIControlled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaddleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaddleMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PGPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Paddle.h" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Paddle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Property to control movement speed\n" },
#endif
		{ "ModuleRelativePath", "Paddle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property to control movement speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_APaddle_Statics::NewProp_MovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_bIsAIControlled_MetaData[] = {
		{ "Category", "Paddle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag to determine if this paddle is controlled by AI\n" },
#endif
		{ "ModuleRelativePath", "Paddle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to determine if this paddle is controlled by AI" },
#endif
	};
#endif
	void Z_Construct_UClass_APaddle_Statics::NewProp_bIsAIControlled_SetBit(void* Obj)
	{
		((APaddle*)Obj)->bIsAIControlled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_bIsAIControlled = { "bIsAIControlled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APaddle), &Z_Construct_UClass_APaddle_Statics::NewProp_bIsAIControlled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_bIsAIControlled_MetaData), Z_Construct_UClass_APaddle_Statics::NewProp_bIsAIControlled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Statics::NewProp_PaddleMesh_MetaData[] = {
		{ "Category", "Paddle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Paddle mesh component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paddle mesh component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_PaddleMesh = { "PaddleMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, PaddleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::NewProp_PaddleMesh_MetaData), Z_Construct_UClass_APaddle_Statics::NewProp_PaddleMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_bIsAIControlled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_PaddleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Statics::ClassParams = {
		&APaddle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaddle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams), Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APaddle()
	{
		if (!Z_Registration_Info_UClass_APaddle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaddle.OuterSingleton, Z_Construct_UClass_APaddle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APaddle.OuterSingleton;
	}
	template<> PGPONG_API UClass* StaticClass<APaddle>()
	{
		return APaddle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
	APaddle::~APaddle() {}
	struct Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_Paddle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_Paddle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APaddle, APaddle::StaticClass, TEXT("APaddle"), &Z_Registration_Info_UClass_APaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaddle), 1839658345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_Paddle_h_1260635562(TEXT("/Script/PGPong"),
		Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_Paddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_Paddle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

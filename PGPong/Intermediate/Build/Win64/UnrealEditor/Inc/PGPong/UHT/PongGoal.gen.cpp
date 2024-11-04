// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PGPong/PongGoal.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePongGoal() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PGPONG_API UClass* Z_Construct_UClass_APongGoal();
	PGPONG_API UClass* Z_Construct_UClass_APongGoal_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PGPong();
// End Cross Module References
	DEFINE_FUNCTION(APongGoal::execOnBallHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBallHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void APongGoal::StaticRegisterNativesAPongGoal()
	{
		UClass* Class = APongGoal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBallHit", &APongGoal::execOnBallHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APongGoal_OnBallHit_Statics
	{
		struct PongGoal_eventOnBallHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PongGoal_eventOnBallHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PongGoal_eventOnBallHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PongGoal_eventOnBallHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PongGoal_eventOnBallHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PongGoal_eventOnBallHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APongGoal_OnBallHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APongGoal_OnBallHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APongGoal_OnBallHit_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle the ball's collision\n" },
#endif
		{ "ModuleRelativePath", "PongGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle the ball's collision" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APongGoal_OnBallHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APongGoal, nullptr, "OnBallHit", nullptr, nullptr, Z_Construct_UFunction_APongGoal_OnBallHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APongGoal_OnBallHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APongGoal_OnBallHit_Statics::PongGoal_eventOnBallHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APongGoal_OnBallHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APongGoal_OnBallHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APongGoal_OnBallHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APongGoal_OnBallHit_Statics::PongGoal_eventOnBallHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APongGoal_OnBallHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APongGoal_OnBallHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APongGoal);
	UClass* Z_Construct_UClass_APongGoal_NoRegister()
	{
		return APongGoal::StaticClass();
	}
	struct Z_Construct_UClass_APongGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APongGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PGPong,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongGoal_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APongGoal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APongGoal_OnBallHit, "OnBallHit" }, // 1779241756
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongGoal_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGoal_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declaration\n" },
#endif
		{ "IncludePath", "PongGoal.h" },
		{ "ModuleRelativePath", "PongGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declaration" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APongGoal_Statics::NewProp_GoalBox_MetaData[] = {
		{ "Category", "PongGoal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Box component for collision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PongGoal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box component for collision" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APongGoal_Statics::NewProp_GoalBox = { "GoalBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APongGoal, GoalBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongGoal_Statics::NewProp_GoalBox_MetaData), Z_Construct_UClass_APongGoal_Statics::NewProp_GoalBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APongGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APongGoal_Statics::NewProp_GoalBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APongGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APongGoal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APongGoal_Statics::ClassParams = {
		&APongGoal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APongGoal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APongGoal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APongGoal_Statics::Class_MetaDataParams), Z_Construct_UClass_APongGoal_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APongGoal_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APongGoal()
	{
		if (!Z_Registration_Info_UClass_APongGoal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APongGoal.OuterSingleton, Z_Construct_UClass_APongGoal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APongGoal.OuterSingleton;
	}
	template<> PGPONG_API UClass* StaticClass<APongGoal>()
	{
		return APongGoal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APongGoal);
	APongGoal::~APongGoal() {}
	struct Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APongGoal, APongGoal::StaticClass, TEXT("APongGoal"), &Z_Registration_Info_UClass_APongGoal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APongGoal), 3391029318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_1663326596(TEXT("/Script/PGPong"),
		Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

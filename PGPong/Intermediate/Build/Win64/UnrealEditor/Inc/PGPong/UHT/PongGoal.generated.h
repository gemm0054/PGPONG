// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PongGoal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PGPONG_PongGoal_generated_h
#error "PongGoal.generated.h already included, missing '#pragma once' in PongGoal.h"
#endif
#define PGPONG_PongGoal_generated_h

#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_SPARSE_DATA
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBallHit);


#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_ACCESSORS
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongGoal(); \
	friend struct Z_Construct_UClass_APongGoal_Statics; \
public: \
	DECLARE_CLASS(APongGoal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGPong"), NO_API) \
	DECLARE_SERIALIZER(APongGoal)


#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongGoal(APongGoal&&); \
	NO_API APongGoal(const APongGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongGoal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APongGoal) \
	NO_API virtual ~APongGoal();


#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_9_PROLOG
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_SPARSE_DATA \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_ACCESSORS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_INCLASS_NO_PURE_DECLS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PGPONG_API UClass* StaticClass<class APongGoal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongGoal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

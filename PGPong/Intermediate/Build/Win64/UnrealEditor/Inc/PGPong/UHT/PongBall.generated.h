// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PongBall.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PGPONG_PongBall_generated_h
#error "PongBall.generated.h already included, missing '#pragma once' in PongBall.h"
#endif
#define PGPONG_PongBall_generated_h

#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_SPARSE_DATA
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_ACCESSORS
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPongBall(); \
	friend struct Z_Construct_UClass_APongBall_Statics; \
public: \
	DECLARE_CLASS(APongBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PGPong"), NO_API) \
	DECLARE_SERIALIZER(APongBall)


#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APongBall(APongBall&&); \
	NO_API APongBall(const APongBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APongBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APongBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APongBall) \
	NO_API virtual ~APongBall();


#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_13_PROLOG
#define FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_SPARSE_DATA \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_ACCESSORS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_INCLASS_NO_PURE_DECLS \
	FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PGPONG_API UClass* StaticClass<class APongBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Assignment1Game_PGPong_PGPONG_PGPong_Source_PGPong_PongBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

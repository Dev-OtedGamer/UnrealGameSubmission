// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COINCOLLECTOR_LevelGenerator_generated_h
#error "LevelGenerator.generated.h already included, missing '#pragma once' in LevelGenerator.h"
#endif
#define COINCOLLECTOR_LevelGenerator_generated_h

#define FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelGenerator(); \
	friend struct Z_Construct_UClass_ALevelGenerator_Statics; \
public: \
	DECLARE_CLASS(ALevelGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoinCollector"), NO_API) \
	DECLARE_SERIALIZER(ALevelGenerator)


#define FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALevelGenerator(ALevelGenerator&&); \
	ALevelGenerator(const ALevelGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelGenerator) \
	NO_API virtual ~ALevelGenerator();


#define FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_9_PROLOG
#define FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COINCOLLECTOR_API UClass* StaticClass<class ALevelGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

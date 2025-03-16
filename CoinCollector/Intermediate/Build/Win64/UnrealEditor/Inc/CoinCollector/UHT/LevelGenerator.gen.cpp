// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinCollector/LevelGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelGenerator() {}

// Begin Cross Module References
COINCOLLECTOR_API UClass* Z_Construct_UClass_ALevelGenerator();
COINCOLLECTOR_API UClass* Z_Construct_UClass_ALevelGenerator_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_CoinCollector();
// End Cross Module References

// Begin Class ALevelGenerator
void ALevelGenerator::StaticRegisterNativesALevelGenerator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelGenerator);
UClass* Z_Construct_UClass_ALevelGenerator_NoRegister()
{
	return ALevelGenerator::StaticClass();
}
struct Z_Construct_UClass_ALevelGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelGenerator.h" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeX_MetaData[] = {
		{ "Category", "Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The size of the level (in grid units)\n" },
#endif
		{ "ModuleRelativePath", "LevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the level (in grid units)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSizeY_MetaData[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "LevelGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumWalls_MetaData[] = {
		{ "Category", "Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of walls to spawn\n" },
#endif
		{ "ModuleRelativePath", "LevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of walls to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCoins_MetaData[] = {
		{ "Category", "Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of coins to spawn\n" },
#endif
		{ "ModuleRelativePath", "LevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of coins to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallClass_MetaData[] = {
		{ "Category", "Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The wall actor to spawn\n" },
#endif
		{ "ModuleRelativePath", "LevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The wall actor to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinClass_MetaData[] = {
		{ "Category", "Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The coin actor to spawn\n" },
#endif
		{ "ModuleRelativePath", "LevelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The coin actor to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridSizeY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumWalls;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCoins;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WallClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CoinClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_GridSizeX = { "GridSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, GridSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeX_MetaData), NewProp_GridSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_GridSizeY = { "GridSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, GridSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSizeY_MetaData), NewProp_GridSizeY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumWalls = { "NumWalls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, NumWalls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumWalls_MetaData), NewProp_NumWalls_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumCoins = { "NumCoins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, NumCoins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCoins_MetaData), NewProp_NumCoins_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_WallClass = { "WallClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, WallClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallClass_MetaData), NewProp_WallClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelGenerator_Statics::NewProp_CoinClass = { "CoinClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelGenerator, CoinClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinClass_MetaData), NewProp_CoinClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_GridSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_GridSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumWalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_NumCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_WallClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelGenerator_Statics::NewProp_CoinClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CoinCollector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelGenerator_Statics::ClassParams = {
	&ALevelGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALevelGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelGenerator()
{
	if (!Z_Registration_Info_UClass_ALevelGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelGenerator.OuterSingleton, Z_Construct_UClass_ALevelGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelGenerator.OuterSingleton;
}
template<> COINCOLLECTOR_API UClass* StaticClass<ALevelGenerator>()
{
	return ALevelGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelGenerator);
ALevelGenerator::~ALevelGenerator() {}
// End Class ALevelGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelGenerator, ALevelGenerator::StaticClass, TEXT("ALevelGenerator"), &Z_Registration_Info_UClass_ALevelGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelGenerator), 2785481239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_1494582910(TEXT("/Script/CoinCollector"),
	Z_CompiledInDeferFile_FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGameSubmission_CoinCollector_Source_CoinCollector_LevelGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestAIPlugin/Public/PathfindingGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathfindingGrid() {}
// Cross Module References
	TESTAIPLUGIN_API UClass* Z_Construct_UClass_APathfindingGrid_NoRegister();
	TESTAIPLUGIN_API UClass* Z_Construct_UClass_APathfindingGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestAIPlugin();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APathfindingGrid::StaticRegisterNativesAPathfindingGrid()
	{
	}
	UClass* Z_Construct_UClass_APathfindingGrid_NoRegister()
	{
		return APathfindingGrid::StaticClass();
	}
	struct Z_Construct_UClass_APathfindingGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawNeighbour_MetaData[];
#endif
		static void NewProp_DrawNeighbour_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawNeighbour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDraw_MetaData[];
#endif
		static void NewProp_DebugDraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugDraw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trace_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Trace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Trace_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NodeSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathfindingGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestAIPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathfindingGrid.h" },
		{ "ModuleRelativePath", "Public/PathfindingGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DrawNeighbour_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/PathfindingGrid.h" },
	};
#endif
	void Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DrawNeighbour_SetBit(void* Obj)
	{
		((APathfindingGrid*)Obj)->DrawNeighbour = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DrawNeighbour = { "DrawNeighbour", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APathfindingGrid), &Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DrawNeighbour_SetBit, METADATA_PARAMS(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DrawNeighbour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DrawNeighbour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DebugDraw_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/PathfindingGrid.h" },
	};
#endif
	void Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DebugDraw_SetBit(void* Obj)
	{
		((APathfindingGrid*)Obj)->DebugDraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DebugDraw = { "DebugDraw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APathfindingGrid), &Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DebugDraw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingGrid_Statics::NewProp_Trace_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/PathfindingGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathfindingGrid_Statics::NewProp_Trace = { "Trace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfindingGrid, Trace), METADATA_PARAMS(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_Trace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_Trace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APathfindingGrid_Statics::NewProp_Trace_Inner = { "Trace", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingGrid_Statics::NewProp_NodeSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/PathfindingGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathfindingGrid_Statics::NewProp_NodeSize = { "NodeSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfindingGrid, NodeSize), METADATA_PARAMS(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_NodeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_NodeSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfindingGrid_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/PathfindingGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathfindingGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfindingGrid, GridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfindingGrid_Statics::NewProp_GridSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathfindingGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DrawNeighbour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingGrid_Statics::NewProp_DebugDraw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingGrid_Statics::NewProp_Trace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingGrid_Statics::NewProp_Trace_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingGrid_Statics::NewProp_NodeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfindingGrid_Statics::NewProp_GridSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathfindingGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathfindingGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathfindingGrid_Statics::ClassParams = {
		&APathfindingGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APathfindingGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APathfindingGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APathfindingGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APathfindingGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APathfindingGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APathfindingGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APathfindingGrid, 2105166792);
	template<> TESTAIPLUGIN_API UClass* StaticClass<APathfindingGrid>()
	{
		return APathfindingGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APathfindingGrid(Z_Construct_UClass_APathfindingGrid, &APathfindingGrid::StaticClass, TEXT("/Script/TestAIPlugin"), TEXT("APathfindingGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathfindingGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

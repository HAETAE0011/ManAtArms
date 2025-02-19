// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestAIPlugin/Public/Pathfinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathfinder() {}
// Cross Module References
	TESTAIPLUGIN_API UEnum* Z_Construct_UEnum_TestAIPlugin_EHeuristic();
	UPackage* Z_Construct_UPackage__Script_TestAIPlugin();
	TESTAIPLUGIN_API UClass* Z_Construct_UClass_APathfinder_NoRegister();
	TESTAIPLUGIN_API UClass* Z_Construct_UClass_APathfinder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TESTAIPLUGIN_API UFunction* Z_Construct_UFunction_APathfinder_FindPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	TESTAIPLUGIN_API UClass* Z_Construct_UClass_APathfindingGrid_NoRegister();
// End Cross Module References
	static UEnum* EHeuristic_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TestAIPlugin_EHeuristic, Z_Construct_UPackage__Script_TestAIPlugin(), TEXT("EHeuristic"));
		}
		return Singleton;
	}
	template<> TESTAIPLUGIN_API UEnum* StaticEnum<EHeuristic>()
	{
		return EHeuristic_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeuristic(EHeuristic_StaticEnum, TEXT("/Script/TestAIPlugin"), TEXT("EHeuristic"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TestAIPlugin_EHeuristic_Hash() { return 3724361341U; }
	UEnum* Z_Construct_UEnum_TestAIPlugin_EHeuristic()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TestAIPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeuristic"), 0, Get_Z_Construct_UEnum_TestAIPlugin_EHeuristic_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHeuristic::Heuristic_Manhatten", (int64)EHeuristic::Heuristic_Manhatten },
				{ "EHeuristic::Heuristic_Euclidean", (int64)EHeuristic::Heuristic_Euclidean },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Heuristic_Euclidean.DisplayName", "Euclidean" },
				{ "Heuristic_Euclidean.Name", "EHeuristic::Heuristic_Euclidean" },
				{ "Heuristic_Manhatten.DisplayName", "Manhatten" },
				{ "Heuristic_Manhatten.Name", "EHeuristic::Heuristic_Manhatten" },
				{ "ModuleRelativePath", "Public/Pathfinder.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TestAIPlugin,
				nullptr,
				"EHeuristic",
				"EHeuristic",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APathfinder::StaticRegisterNativesAPathfinder()
	{
		UClass* Class = APathfinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPath", &APathfinder::execFindPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APathfinder_FindPath_Statics
	{
		struct Pathfinder_eventFindPath_Parms
		{
			FVector Start;
			FVector End;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfinder_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pathfinder_eventFindPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfinder_FindPath_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pathfinder_eventFindPath_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathfinder_FindPath_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pathfinder_eventFindPath_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathfinder_FindPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfinder_FindPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfinder_FindPath_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathfinder_FindPath_Statics::NewProp_Start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathfinder_FindPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AStar" },
		{ "ModuleRelativePath", "Public/Pathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathfinder_FindPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathfinder, nullptr, "FindPath", nullptr, nullptr, sizeof(Pathfinder_eventFindPath_Parms), Z_Construct_UFunction_APathfinder_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APathfinder_FindPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathfinder_FindPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APathfinder_FindPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathfinder_FindPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathfinder_FindPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APathfinder_NoRegister()
	{
		return APathfinder::StaticClass();
	}
	struct Z_Construct_UClass_APathfinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heuristic_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Heuristic;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Heuristic_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBillboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBillboardComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static void NewProp_Debug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathfinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APathfinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APathfinder_FindPath, "FindPath" }, // 1218634916
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pathfinder.h" },
		{ "ModuleRelativePath", "Public/Pathfinder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfinder_Statics::NewProp_Heuristic_MetaData[] = {
		{ "Category", "Enum" },
		{ "ModuleRelativePath", "Public/Pathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APathfinder_Statics::NewProp_Heuristic = { "Heuristic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfinder, Heuristic), Z_Construct_UEnum_TestAIPlugin_EHeuristic, METADATA_PARAMS(Z_Construct_UClass_APathfinder_Statics::NewProp_Heuristic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfinder_Statics::NewProp_Heuristic_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APathfinder_Statics::NewProp_Heuristic_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfinder_Statics::NewProp_MyBillboardComp_MetaData[] = {
		{ "Category", "Pathfinder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathfinder_Statics::NewProp_MyBillboardComp = { "MyBillboardComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfinder, MyBillboardComp), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APathfinder_Statics::NewProp_MyBillboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfinder_Statics::NewProp_MyBillboardComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfinder_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/Pathfinder.h" },
	};
#endif
	void Z_Construct_UClass_APathfinder_Statics::NewProp_Debug_SetBit(void* Obj)
	{
		((APathfinder*)Obj)->Debug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APathfinder_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APathfinder), &Z_Construct_UClass_APathfinder_Statics::NewProp_Debug_SetBit, METADATA_PARAMS(Z_Construct_UClass_APathfinder_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfinder_Statics::NewProp_Debug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathfinder_Statics::NewProp_GridInstance_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/Pathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APathfinder_Statics::NewProp_GridInstance = { "GridInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathfinder, GridInstance), Z_Construct_UClass_APathfindingGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APathfinder_Statics::NewProp_GridInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathfinder_Statics::NewProp_GridInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathfinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfinder_Statics::NewProp_Heuristic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfinder_Statics::NewProp_Heuristic_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfinder_Statics::NewProp_MyBillboardComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfinder_Statics::NewProp_Debug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathfinder_Statics::NewProp_GridInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathfinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathfinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathfinder_Statics::ClassParams = {
		&APathfinder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APathfinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APathfinder_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APathfinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APathfinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APathfinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APathfinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APathfinder, 765037411);
	template<> TESTAIPLUGIN_API UClass* StaticClass<APathfinder>()
	{
		return APathfinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APathfinder(Z_Construct_UClass_APathfinder, &APathfinder::StaticClass, TEXT("/Script/TestAIPlugin"), TEXT("APathfinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathfinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

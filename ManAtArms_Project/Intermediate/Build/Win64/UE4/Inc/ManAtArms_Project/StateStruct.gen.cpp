// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManAtArms_Project/Public/StateStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateStruct() {}
// Cross Module References
	MANATARMS_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStateStruct();
	UPackage* Z_Construct_UPackage__Script_ManAtArms_Project();
// End Cross Module References
class UScriptStruct* FStateStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MANATARMS_PROJECT_API uint32 Get_Z_Construct_UScriptStruct_FStateStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateStruct, Z_Construct_UPackage__Script_ManAtArms_Project(), TEXT("StateStruct"), sizeof(FStateStruct), Get_Z_Construct_UScriptStruct_FStateStruct_Hash());
	}
	return Singleton;
}
template<> MANATARMS_PROJECT_API UScriptStruct* StaticStruct<FStateStruct>()
{
	return FStateStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateStruct(FStateStruct::StaticStruct, TEXT("/Script/ManAtArms_Project"), TEXT("StateStruct"), false, nullptr, nullptr);
static struct FScriptStruct_ManAtArms_Project_StaticRegisterNativesFStateStruct
{
	FScriptStruct_ManAtArms_Project_StaticRegisterNativesFStateStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateStruct")),new UScriptStruct::TCppStructOps<FStateStruct>);
	}
} ScriptStruct_ManAtArms_Project_StaticRegisterNativesFStateStruct;
	struct Z_Construct_UScriptStruct_FStateStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_conditions;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StateStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_conditions_MetaData[] = {
		{ "Category", "StateStruct" },
		{ "ModuleRelativePath", "Public/StateStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_conditions = { "conditions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateStruct, conditions), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_conditions_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_conditions_Inner = { "conditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateStruct_Statics::NewProp_conditions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ManAtArms_Project,
		nullptr,
		&NewStructOps,
		"StateStruct",
		sizeof(FStateStruct),
		alignof(FStateStruct),
		Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ManAtArms_Project();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateStruct"), sizeof(FStateStruct), Get_Z_Construct_UScriptStruct_FStateStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStateStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateStruct_Hash() { return 3058342745U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

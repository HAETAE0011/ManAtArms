// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManAtArms_Project/Public/Story_Struct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStory_Struct() {}
// Cross Module References
	MANATARMS_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStory_Struct();
	UPackage* Z_Construct_UPackage__Script_ManAtArms_Project();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MANATARMS_PROJECT_API UEnum* Z_Construct_UEnum_ManAtArms_Project_CharacterList();
// End Cross Module References
class UScriptStruct* FStory_Struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MANATARMS_PROJECT_API uint32 Get_Z_Construct_UScriptStruct_FStory_Struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStory_Struct, Z_Construct_UPackage__Script_ManAtArms_Project(), TEXT("Story_Struct"), sizeof(FStory_Struct), Get_Z_Construct_UScriptStruct_FStory_Struct_Hash());
	}
	return Singleton;
}
template<> MANATARMS_PROJECT_API UScriptStruct* StaticStruct<FStory_Struct>()
{
	return FStory_Struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStory_Struct(FStory_Struct::StaticStruct, TEXT("/Script/ManAtArms_Project"), TEXT("Story_Struct"), false, nullptr, nullptr);
static struct FScriptStruct_ManAtArms_Project_StaticRegisterNativesFStory_Struct
{
	FScriptStruct_ManAtArms_Project_StaticRegisterNativesFStory_Struct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Story_Struct")),new UScriptStruct::TCppStructOps<FStory_Struct>);
	}
} ScriptStruct_ManAtArms_Project_StaticRegisterNativesFStory_Struct;
	struct Z_Construct_UScriptStruct_FStory_Struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Motion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Motion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Speaker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStory_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Story_Struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStory_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStory_Struct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Motion_MetaData[] = {
		{ "Category", "Story_Struct" },
		{ "ModuleRelativePath", "Public/Story_Struct.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Motion = { "Motion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStory_Struct, Motion), METADATA_PARAMS(Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Motion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Motion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_CameraMove_MetaData[] = {
		{ "Category", "Story_Struct" },
		{ "ModuleRelativePath", "Public/Story_Struct.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_CameraMove = { "CameraMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStory_Struct, CameraMove), METADATA_PARAMS(Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_CameraMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_CameraMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Story_Struct" },
		{ "ModuleRelativePath", "Public/Story_Struct.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStory_Struct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Speaker_MetaData[] = {
		{ "Category", "Story_Struct" },
		{ "ModuleRelativePath", "Public/Story_Struct.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStory_Struct, Speaker), Z_Construct_UEnum_ManAtArms_Project_CharacterList, METADATA_PARAMS(Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Speaker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStory_Struct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Motion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_CameraMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStory_Struct_Statics::NewProp_Speaker,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStory_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ManAtArms_Project,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Story_Struct",
		sizeof(FStory_Struct),
		alignof(FStory_Struct),
		Z_Construct_UScriptStruct_FStory_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStory_Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStory_Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStory_Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStory_Struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStory_Struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ManAtArms_Project();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Story_Struct"), sizeof(FStory_Struct), Get_Z_Construct_UScriptStruct_FStory_Struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStory_Struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStory_Struct_Hash() { return 3806219172U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

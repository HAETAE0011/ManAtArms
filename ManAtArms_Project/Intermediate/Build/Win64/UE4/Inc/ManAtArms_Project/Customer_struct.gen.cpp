// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManAtArms_Project/Public/Customer_struct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomer_struct() {}
// Cross Module References
	MANATARMS_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomer_struct();
	UPackage* Z_Construct_UPackage__Script_ManAtArms_Project();
// End Cross Module References
class UScriptStruct* FCustomer_struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MANATARMS_PROJECT_API uint32 Get_Z_Construct_UScriptStruct_FCustomer_struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomer_struct, Z_Construct_UPackage__Script_ManAtArms_Project(), TEXT("Customer_struct"), sizeof(FCustomer_struct), Get_Z_Construct_UScriptStruct_FCustomer_struct_Hash());
	}
	return Singleton;
}
template<> MANATARMS_PROJECT_API UScriptStruct* StaticStruct<FCustomer_struct>()
{
	return FCustomer_struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomer_struct(FCustomer_struct::StaticStruct, TEXT("/Script/ManAtArms_Project"), TEXT("Customer_struct"), false, nullptr, nullptr);
static struct FScriptStruct_ManAtArms_Project_StaticRegisterNativesFCustomer_struct
{
	FScriptStruct_ManAtArms_Project_StaticRegisterNativesFCustomer_struct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Customer_struct")),new UScriptStruct::TCppStructOps<FCustomer_struct>);
	}
} ScriptStruct_ManAtArms_Project_StaticRegisterNativesFCustomer_struct;
	struct Z_Construct_UScriptStruct_FCustomer_struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_satisfactionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_satisfactionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sat_d_MetaData[];
#endif
		static void NewProp_sat_d_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sat_d;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sat_f_MetaData[];
#endif
		static void NewProp_sat_f_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sat_f;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_satisfied_MetaData[];
#endif
		static void NewProp_satisfied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_satisfied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredDrink_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_desiredDrink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredFood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_desiredFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CustomerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomer_struct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfactionLevel_MetaData[] = {
		{ "Category", "Customer_struct" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfactionLevel = { "satisfactionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer_struct, satisfactionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfactionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfactionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_d_MetaData[] = {
		{ "Category", "Customer_struct" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_d_SetBit(void* Obj)
	{
		((FCustomer_struct*)Obj)->sat_d = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_d = { "sat_d", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomer_struct), &Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_d_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_d_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_d_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_f_MetaData[] = {
		{ "Category", "Customer_struct" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_f_SetBit(void* Obj)
	{
		((FCustomer_struct*)Obj)->sat_f = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_f = { "sat_f", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomer_struct), &Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_f_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_f_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_f_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfied_MetaData[] = {
		{ "Category", "Customer_struct" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfied_SetBit(void* Obj)
	{
		((FCustomer_struct*)Obj)->satisfied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfied = { "satisfied", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomer_struct), &Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredDrink_MetaData[] = {
		{ "Category", "Customer_struct" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredDrink = { "desiredDrink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer_struct, desiredDrink), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredDrink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredDrink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredFood_MetaData[] = {
		{ "Category", "Customer_struct" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredFood = { "desiredFood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer_struct, desiredFood), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Customer_struct" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer_struct, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_CustomerNum_MetaData[] = {
		{ "Category", "Customer_struct" },
		{ "ModuleRelativePath", "Public/Customer_struct.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_CustomerNum = { "CustomerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer_struct, CustomerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_CustomerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_CustomerNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomer_struct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfactionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_d,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_sat_f,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_satisfied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredDrink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_desiredFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_struct_Statics::NewProp_CustomerNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomer_struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ManAtArms_Project,
		nullptr,
		&NewStructOps,
		"Customer_struct",
		sizeof(FCustomer_struct),
		alignof(FCustomer_struct),
		Z_Construct_UScriptStruct_FCustomer_struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomer_struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomer_struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ManAtArms_Project();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Customer_struct"), sizeof(FCustomer_struct), Get_Z_Construct_UScriptStruct_FCustomer_struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomer_struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomer_struct_Hash() { return 744161565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

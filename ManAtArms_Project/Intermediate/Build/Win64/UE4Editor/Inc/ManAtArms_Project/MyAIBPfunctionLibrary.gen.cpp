// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManAtArms_Project/Public/MyAIBPfunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIBPfunctionLibrary() {}
// Cross Module References
	MANATARMS_PROJECT_API UClass* Z_Construct_UClass_UMyAIBPfunctionLibrary_NoRegister();
	MANATARMS_PROJECT_API UClass* Z_Construct_UClass_UMyAIBPfunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ManAtArms_Project();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1();
// End Cross Module References
	void UMyAIBPfunctionLibrary::StaticRegisterNativesUMyAIBPfunctionLibrary()
	{
		UClass* Class = UMyAIBPfunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "string1", &UMyAIBPfunctionLibrary::execstring1 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics
	{
		struct MyAIBPfunctionLibrary_eventstring1_Parms
		{
			int32 a;
			int32 b;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventstring1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventstring1_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventstring1_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyAIBPfunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAIBPfunctionLibrary, nullptr, "string1", nullptr, nullptr, sizeof(MyAIBPfunctionLibrary_eventstring1_Parms), Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyAIBPfunctionLibrary_NoRegister()
	{
		return UMyAIBPfunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ManAtArms_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1, "string1" }, // 453036727
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyAIBPfunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyAIBPfunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAIBPfunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics::ClassParams = {
		&UMyAIBPfunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAIBPfunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyAIBPfunctionLibrary, 2733679865);
	template<> MANATARMS_PROJECT_API UClass* StaticClass<UMyAIBPfunctionLibrary>()
	{
		return UMyAIBPfunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyAIBPfunctionLibrary(Z_Construct_UClass_UMyAIBPfunctionLibrary, &UMyAIBPfunctionLibrary::StaticClass, TEXT("/Script/ManAtArms_Project"), TEXT("UMyAIBPfunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAIBPfunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

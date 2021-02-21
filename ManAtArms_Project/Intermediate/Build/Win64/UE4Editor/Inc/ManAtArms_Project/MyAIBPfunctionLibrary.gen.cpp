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
	MANATARMS_PROJECT_API UEnum* Z_Construct_UEnum_ManAtArms_Project_TurnType_c();
	UPackage* Z_Construct_UPackage__Script_ManAtArms_Project();
	MANATARMS_PROJECT_API UClass* Z_Construct_UClass_UMyAIBPfunctionLibrary_NoRegister();
	MANATARMS_PROJECT_API UClass* Z_Construct_UClass_UMyAIBPfunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MANATARMS_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStateStruct();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_UMyAIBPfunctionLibrary_string1();
// End Cross Module References
	static UEnum* TurnType_c_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ManAtArms_Project_TurnType_c, Z_Construct_UPackage__Script_ManAtArms_Project(), TEXT("TurnType_c"));
		}
		return Singleton;
	}
	template<> MANATARMS_PROJECT_API UEnum* StaticEnum<TurnType_c>()
	{
		return TurnType_c_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TurnType_c(TurnType_c_StaticEnum, TEXT("/Script/ManAtArms_Project"), TEXT("TurnType_c"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ManAtArms_Project_TurnType_c_Hash() { return 3786583272U; }
	UEnum* Z_Construct_UEnum_ManAtArms_Project_TurnType_c()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ManAtArms_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TurnType_c"), 0, Get_Z_Construct_UEnum_ManAtArms_Project_TurnType_c_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CustomerTurn", (int64)CustomerTurn },
				{ "PlayerTurn", (int64)PlayerTurn },
				{ "StoryTurn", (int64)StoryTurn },
				{ "WaitTurn", (int64)WaitTurn },
				{ "MainMenuTurn", (int64)MainMenuTurn },
				{ "OptionTurn", (int64)OptionTurn },
				{ "ResultTurn", (int64)ResultTurn },
				{ "Opening", (int64)Opening },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomerTurn.DisplayName", "CustomerTurn" },
				{ "CustomerTurn.Name", "CustomerTurn" },
				{ "MainMenuTurn.DisplayName", "MainMenuTurn" },
				{ "MainMenuTurn.Name", "MainMenuTurn" },
				{ "ModuleRelativePath", "Public/MyAIBPfunctionLibrary.h" },
				{ "Opening.DisplayName", "Opening" },
				{ "Opening.Name", "Opening" },
				{ "OptionTurn.DisplayName", "OptionTurn" },
				{ "OptionTurn.Name", "OptionTurn" },
				{ "PlayerTurn.DisplayName", "PlayerTurn" },
				{ "PlayerTurn.Name", "PlayerTurn" },
				{ "ResultTurn.DisplayName", "ResultTurn" },
				{ "ResultTurn.Name", "ResultTurn" },
				{ "StoryTurn.DisplayName", "StoryTurn" },
				{ "StoryTurn.Name", "StoryTurn" },
				{ "WaitTurn.DisplayName", "WaitTurn" },
				{ "WaitTurn.Name", "WaitTurn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ManAtArms_Project,
				nullptr,
				"TurnType_c",
				"TurnType_c",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMyAIBPfunctionLibrary::StaticRegisterNativesUMyAIBPfunctionLibrary()
	{
		UClass* Class = UMyAIBPfunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckStates", &UMyAIBPfunctionLibrary::execCheckStates },
			{ "getInverse", &UMyAIBPfunctionLibrary::execgetInverse },
			{ "string1", &UMyAIBPfunctionLibrary::execstring1 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics
	{
		struct MyAIBPfunctionLibrary_eventCheckStates_Parms
		{
			int32 currentState_;
			TArray<FStateStruct> states;
			UObject* decisionMaker_;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_decisionMaker_;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_states;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_states_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentState_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::NewProp_decisionMaker_ = { "decisionMaker_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventCheckStates_Parms, decisionMaker_), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::NewProp_states = { "states", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventCheckStates_Parms, states), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::NewProp_states_Inner = { "states", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStateStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::NewProp_currentState_ = { "currentState_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventCheckStates_Parms, currentState_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::NewProp_decisionMaker_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::NewProp_states,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::NewProp_states_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::NewProp_currentState_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "DecisionMaking" },
		{ "ModuleRelativePath", "Public/MyAIBPfunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAIBPfunctionLibrary, nullptr, "CheckStates", nullptr, nullptr, sizeof(MyAIBPfunctionLibrary_eventCheckStates_Parms), Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct MyAIBPfunctionLibrary_eventgetInverse_Parms
		{
			float x1;
			float x2;
			float x3;
			float y1;
			float y2;
			float y3;
			float z1;
			float z2;
			float z3;
			FMatrix ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z3;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z1;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y3;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y1;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x3;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_z3 = { "z3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, z3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_z2 = { "z2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, z2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_z1 = { "z1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, z1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_y3 = { "y3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, y3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_y2 = { "y2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, y2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_y1 = { "y1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, y1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_x3 = { "x3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, x3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_x2 = { "x2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, x2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_x1 = { "x1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyAIBPfunctionLibrary_eventgetInverse_Parms, x1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_z3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_z2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_z1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_y3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_y2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_y1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_x3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_x2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::NewProp_x1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyAIBPfunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAIBPfunctionLibrary, nullptr, "getInverse", nullptr, nullptr, sizeof(MyAIBPfunctionLibrary_eventgetInverse_Parms), Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ &Z_Construct_UFunction_UMyAIBPfunctionLibrary_CheckStates, "CheckStates" }, // 1274748085
		{ &Z_Construct_UFunction_UMyAIBPfunctionLibrary_getInverse, "getInverse" }, // 2849900378
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
	IMPLEMENT_CLASS(UMyAIBPfunctionLibrary, 2906506427);
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

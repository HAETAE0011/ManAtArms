// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManAtArms_Project/Public/VNPlayer_parent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVNPlayer_parent() {}
// Cross Module References
	MANATARMS_PROJECT_API UClass* Z_Construct_UClass_AVNPlayer_parent_NoRegister();
	MANATARMS_PROJECT_API UClass* Z_Construct_UClass_AVNPlayer_parent();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ManAtArms_Project();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_AVNPlayer_parent_AddCustomer();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_AVNPlayer_parent_CookNoodle();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_AVNPlayer_parent_DoThing();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown();
	MANATARMS_PROJECT_API UFunction* Z_Construct_UFunction_AVNPlayer_parent_ResetServed();
	MANATARMS_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomer_struct();
// End Cross Module References
	void AVNPlayer_parent::StaticRegisterNativesAVNPlayer_parent()
	{
		UClass* Class = AVNPlayer_parent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomer", &AVNPlayer_parent::execAddCustomer },
			{ "CookNoodle", &AVNPlayer_parent::execCookNoodle },
			{ "DoThing", &AVNPlayer_parent::execDoThing },
			{ "HandleCooldown", &AVNPlayer_parent::execHandleCooldown },
			{ "ResetServed", &AVNPlayer_parent::execResetServed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics
	{
		struct VNPlayer_parent_eventAddCustomer_Parms
		{
			FString name_;
			int32 food_;
			int32 drink_;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_drink_;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_food_;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::NewProp_drink_ = { "drink_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VNPlayer_parent_eventAddCustomer_Parms, drink_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::NewProp_food_ = { "food_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VNPlayer_parent_eventAddCustomer_Parms, food_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::NewProp_name_ = { "name_", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VNPlayer_parent_eventAddCustomer_Parms, name_), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::NewProp_drink_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::NewProp_food_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::NewProp_name_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVNPlayer_parent, nullptr, "AddCustomer", nullptr, nullptr, sizeof(VNPlayer_parent_eventAddCustomer_Parms), Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVNPlayer_parent_AddCustomer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVNPlayer_parent_AddCustomer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVNPlayer_parent_CookNoodle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVNPlayer_parent_CookNoodle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cook" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVNPlayer_parent_CookNoodle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVNPlayer_parent, nullptr, "CookNoodle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVNPlayer_parent_CookNoodle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVNPlayer_parent_CookNoodle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVNPlayer_parent_CookNoodle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVNPlayer_parent_CookNoodle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVNPlayer_parent_DoThing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVNPlayer_parent_DoThing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVNPlayer_parent_DoThing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVNPlayer_parent, nullptr, "DoThing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVNPlayer_parent_DoThing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVNPlayer_parent_DoThing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVNPlayer_parent_DoThing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVNPlayer_parent_DoThing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics
	{
		struct VNPlayer_parent_eventHandleCooldown_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VNPlayer_parent_eventHandleCooldown_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVNPlayer_parent, nullptr, "HandleCooldown", nullptr, nullptr, sizeof(VNPlayer_parent_eventHandleCooldown_Parms), Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVNPlayer_parent_ResetServed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVNPlayer_parent_ResetServed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cook" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVNPlayer_parent_ResetServed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVNPlayer_parent, nullptr, "ResetServed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVNPlayer_parent_ResetServed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVNPlayer_parent_ResetServed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVNPlayer_parent_ResetServed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVNPlayer_parent_ResetServed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVNPlayer_parent_NoRegister()
	{
		return AVNPlayer_parent::StaticClass();
	}
	struct Z_Construct_UClass_AVNPlayer_parent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drinkReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_drinkReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foodReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_foodReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServingDrink_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ServingDrink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServingFood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ServingFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_drinkType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_drinkType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_toppingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_toppingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sauceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_sauceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noodleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_noodleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customerBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_customerBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_turnEnd_MetaData[];
#endif
		static void NewProp_turnEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_turnEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orderSuccess_MetaData[];
#endif
		static void NewProp_orderSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_orderSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldownDone_MetaData[];
#endif
		static void NewProp_cooldownDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_cooldownDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldownPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cooldownPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldownMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cooldownMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_satisfactionMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_satisfactionMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_default_satisfaction_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_default_satisfaction_level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_servedDrink_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_servedDrink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_servedFood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_servedFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_customers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastCustomerIndexToday_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lastCustomerIndexToday;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCustomerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxCustomerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCamNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxCamNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_donothing_MetaData[];
#endif
		static void NewProp_donothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_donothing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVNPlayer_parent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ManAtArms_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVNPlayer_parent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVNPlayer_parent_AddCustomer, "AddCustomer" }, // 1216049953
		{ &Z_Construct_UFunction_AVNPlayer_parent_CookNoodle, "CookNoodle" }, // 2576192035
		{ &Z_Construct_UFunction_AVNPlayer_parent_DoThing, "DoThing" }, // 3915902325
		{ &Z_Construct_UFunction_AVNPlayer_parent_HandleCooldown, "HandleCooldown" }, // 3957996394
		{ &Z_Construct_UFunction_AVNPlayer_parent_ResetServed, "ResetServed" }, // 3272733505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VNPlayer_parent.h" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkReady_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkReady = { "drinkReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, drinkReady), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_foodReady_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_foodReady = { "foodReady", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, foodReady), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_foodReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_foodReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingDrink_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "/*\n\x09\x09""0 = none\n\x09\x09""1 = Water\n\x09\x09""2 = Beer\n\x09\x09""3 = Coke\n\x09\x09""4 = Whiskey\n\x09\x09""5 = Vodka\n\x09*/" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
		{ "ToolTip", "0 = none\n1 = Water\n2 = Beer\n3 = Coke\n4 = Whiskey\n5 = Vodka" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingDrink = { "ServingDrink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, ServingDrink), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingDrink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingDrink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingFood_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "/*\n\x09\x09""0 = none\n\x09\x09""1 = Seafood noodles\n\x09\x09""2 = Bacon noodles\n\x09\x09""3 = Pork ramen\n\x09\x09""4 = Syoyu ramen\n\x09\x09""5 = Soba\n\x09\x09""6 = Yakisoba\n\x09\x09""7 = Lamb skewer\n\x09\x09""8 = Pork skewer\n\x09\x09""9 = Chicken skewer\n\x09\x09""10 = wrong recipe!\n\x09*/" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
		{ "ToolTip", "0 = none\n1 = Seafood noodles\n2 = Bacon noodles\n3 = Pork ramen\n4 = Syoyu ramen\n5 = Soba\n6 = Yakisoba\n7 = Lamb skewer\n8 = Pork skewer\n9 = Chicken skewer\n10 = wrong recipe!" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingFood = { "ServingFood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, ServingFood), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkType_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkType = { "drinkType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, drinkType), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_toppingType_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_toppingType = { "toppingType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, toppingType), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_toppingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_toppingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_sauceType_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_sauceType = { "sauceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, sauceType), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_sauceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_sauceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_noodleType_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_noodleType = { "noodleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, noodleType), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_noodleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_noodleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_currentDay_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_currentDay = { "currentDay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, currentDay), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_currentDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_currentDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customerBonus_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customerBonus = { "customerBonus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, customerBonus), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customerBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customerBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_turnEnd_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	void Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_turnEnd_SetBit(void* Obj)
	{
		((AVNPlayer_parent*)Obj)->turnEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_turnEnd = { "turnEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVNPlayer_parent), &Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_turnEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_turnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_turnEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_orderSuccess_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	void Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_orderSuccess_SetBit(void* Obj)
	{
		((AVNPlayer_parent*)Obj)->orderSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_orderSuccess = { "orderSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVNPlayer_parent), &Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_orderSuccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_orderSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_orderSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownDone_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	void Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownDone_SetBit(void* Obj)
	{
		((AVNPlayer_parent*)Obj)->cooldownDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownDone = { "cooldownDone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVNPlayer_parent), &Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownDone_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownPercent_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownPercent = { "cooldownPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, cooldownPercent), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownMax_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownMax = { "cooldownMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, cooldownMax), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldown_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldown = { "cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, cooldown), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_satisfactionMultiplier_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_satisfactionMultiplier = { "satisfactionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, satisfactionMultiplier), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_satisfactionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_satisfactionMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_default_satisfaction_level_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_default_satisfaction_level = { "default_satisfaction_level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, default_satisfaction_level), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_default_satisfaction_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_default_satisfaction_level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedDrink_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedDrink = { "servedDrink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, servedDrink), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedDrink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedDrink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedFood_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedFood = { "servedFood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, servedFood), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customers_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customers = { "customers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, customers), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customers_Inner = { "customers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomer_struct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_lastCustomerIndexToday_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_lastCustomerIndexToday = { "lastCustomerIndexToday", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, lastCustomerIndexToday), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_lastCustomerIndexToday_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_lastCustomerIndexToday_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCustomerNum_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCustomerNum = { "MaxCustomerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, MaxCustomerNum), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCustomerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCustomerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCamNum_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCamNum = { "MaxCamNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, MaxCamNum), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCamNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCamNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_CameraNum_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_CameraNum = { "CameraNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVNPlayer_parent, CameraNum), METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_CameraNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_CameraNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_donothing_MetaData[] = {
		{ "Category", "test" },
		{ "ModuleRelativePath", "Public/VNPlayer_parent.h" },
	};
#endif
	void Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_donothing_SetBit(void* Obj)
	{
		((AVNPlayer_parent*)Obj)->donothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_donothing = { "donothing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVNPlayer_parent), &Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_donothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_donothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_donothing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVNPlayer_parent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_foodReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingDrink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_ServingFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_drinkType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_toppingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_sauceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_noodleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_currentDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customerBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_turnEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_orderSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldownMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_satisfactionMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_default_satisfaction_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedDrink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_servedFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_customers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_lastCustomerIndexToday,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCustomerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_MaxCamNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_CameraNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVNPlayer_parent_Statics::NewProp_donothing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVNPlayer_parent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVNPlayer_parent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVNPlayer_parent_Statics::ClassParams = {
		&AVNPlayer_parent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVNPlayer_parent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVNPlayer_parent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVNPlayer_parent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVNPlayer_parent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVNPlayer_parent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVNPlayer_parent, 362871226);
	template<> MANATARMS_PROJECT_API UClass* StaticClass<AVNPlayer_parent>()
	{
		return AVNPlayer_parent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVNPlayer_parent(Z_Construct_UClass_AVNPlayer_parent, &AVNPlayer_parent::StaticClass, TEXT("/Script/ManAtArms_Project"), TEXT("AVNPlayer_parent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVNPlayer_parent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef TESTAIPLUGIN_Pathfinder_generated_h
#error "Pathfinder.generated.h already included, missing '#pragma once' in Pathfinder.h"
#endif
#define TESTAIPLUGIN_Pathfinder_generated_h

#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_SPARSE_DATA
#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindPath(Z_Param_Start,Z_Param_End); \
		P_NATIVE_END; \
	}


#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->FindPath(Z_Param_Start,Z_Param_End); \
		P_NATIVE_END; \
	}


#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPathfinder(); \
	friend struct Z_Construct_UClass_APathfinder_Statics; \
public: \
	DECLARE_CLASS(APathfinder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(APathfinder)


#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAPathfinder(); \
	friend struct Z_Construct_UClass_APathfinder_Statics; \
public: \
	DECLARE_CLASS(APathfinder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(APathfinder)


#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APathfinder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APathfinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathfinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathfinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathfinder(APathfinder&&); \
	NO_API APathfinder(const APathfinder&); \
public:


#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathfinder(APathfinder&&); \
	NO_API APathfinder(const APathfinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathfinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathfinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APathfinder)


#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_PRIVATE_PROPERTY_OFFSET
#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_21_PROLOG
#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_PRIVATE_PROPERTY_OFFSET \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_SPARSE_DATA \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_RPC_WRAPPERS \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_INCLASS \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_PRIVATE_PROPERTY_OFFSET \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_SPARSE_DATA \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_INCLASS_NO_PURE_DECLS \
	ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTAIPLUGIN_API UClass* StaticClass<class APathfinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ManAtArms_Project_Plugins_TestAIPlugin_Source_TestAIPlugin_Public_Pathfinder_h


#define FOREACH_ENUM_EHEURISTIC(op) \
	op(EHeuristic::Heuristic_Manhatten) \
	op(EHeuristic::Heuristic_Euclidean) 

enum class EHeuristic : uint8;
template<> TESTAIPLUGIN_API UEnum* StaticEnum<EHeuristic>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

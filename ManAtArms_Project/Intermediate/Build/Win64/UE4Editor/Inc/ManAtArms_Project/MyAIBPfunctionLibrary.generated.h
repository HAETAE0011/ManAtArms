// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANATARMS_PROJECT_MyAIBPfunctionLibrary_generated_h
#error "MyAIBPfunctionLibrary.generated.h already included, missing '#pragma once' in MyAIBPfunctionLibrary.h"
#endif
#define MANATARMS_PROJECT_MyAIBPfunctionLibrary_generated_h

#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_SPARSE_DATA
#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execstring1) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_a); \
		P_GET_PROPERTY(UIntProperty,Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMyAIBPfunctionLibrary::string1(Z_Param_a,Z_Param_b); \
		P_NATIVE_END; \
	}


#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execstring1) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_a); \
		P_GET_PROPERTY(UIntProperty,Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMyAIBPfunctionLibrary::string1(Z_Param_a,Z_Param_b); \
		P_NATIVE_END; \
	}


#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAIBPfunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyAIBPfunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ManAtArms_Project"), NO_API) \
	DECLARE_SERIALIZER(UMyAIBPfunctionLibrary)


#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyAIBPfunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyAIBPfunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyAIBPfunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ManAtArms_Project"), NO_API) \
	DECLARE_SERIALIZER(UMyAIBPfunctionLibrary)


#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAIBPfunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAIBPfunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAIBPfunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAIBPfunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAIBPfunctionLibrary(UMyAIBPfunctionLibrary&&); \
	NO_API UMyAIBPfunctionLibrary(const UMyAIBPfunctionLibrary&); \
public:


#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAIBPfunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAIBPfunctionLibrary(UMyAIBPfunctionLibrary&&); \
	NO_API UMyAIBPfunctionLibrary(const UMyAIBPfunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAIBPfunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAIBPfunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAIBPfunctionLibrary)


#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_12_PROLOG
#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_SPARSE_DATA \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_RPC_WRAPPERS \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_INCLASS \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_SPARSE_DATA \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANATARMS_PROJECT_API UClass* StaticClass<class UMyAIBPfunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ManAtArms_Project_Source_ManAtArms_Project_Public_MyAIBPfunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANATARMS_PROJECT_VNPlayer_parent_generated_h
#error "VNPlayer_parent.generated.h already included, missing '#pragma once' in VNPlayer_parent.h"
#endif
#define MANATARMS_PROJECT_VNPlayer_parent_generated_h

#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_SPARSE_DATA
#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCustomer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name_); \
		P_GET_PROPERTY(UIntProperty,Z_Param_food_); \
		P_GET_PROPERTY(UIntProperty,Z_Param_drink_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCustomer(Z_Param_name_,Z_Param_food_,Z_Param_drink_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetServed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetServed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCookNoodle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CookNoodle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleCooldown) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleCooldown(Z_Param_deltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoThing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoThing(); \
		P_NATIVE_END; \
	}


#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCustomer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name_); \
		P_GET_PROPERTY(UIntProperty,Z_Param_food_); \
		P_GET_PROPERTY(UIntProperty,Z_Param_drink_); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCustomer(Z_Param_name_,Z_Param_food_,Z_Param_drink_); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetServed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetServed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCookNoodle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CookNoodle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleCooldown) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleCooldown(Z_Param_deltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoThing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoThing(); \
		P_NATIVE_END; \
	}


#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVNPlayer_parent(); \
	friend struct Z_Construct_UClass_AVNPlayer_parent_Statics; \
public: \
	DECLARE_CLASS(AVNPlayer_parent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ManAtArms_Project"), NO_API) \
	DECLARE_SERIALIZER(AVNPlayer_parent)


#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVNPlayer_parent(); \
	friend struct Z_Construct_UClass_AVNPlayer_parent_Statics; \
public: \
	DECLARE_CLASS(AVNPlayer_parent, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ManAtArms_Project"), NO_API) \
	DECLARE_SERIALIZER(AVNPlayer_parent)


#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVNPlayer_parent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVNPlayer_parent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVNPlayer_parent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVNPlayer_parent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVNPlayer_parent(AVNPlayer_parent&&); \
	NO_API AVNPlayer_parent(const AVNPlayer_parent&); \
public:


#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVNPlayer_parent(AVNPlayer_parent&&); \
	NO_API AVNPlayer_parent(const AVNPlayer_parent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVNPlayer_parent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVNPlayer_parent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVNPlayer_parent)


#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_PRIVATE_PROPERTY_OFFSET
#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_12_PROLOG
#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_PRIVATE_PROPERTY_OFFSET \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_SPARSE_DATA \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_RPC_WRAPPERS \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_INCLASS \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_PRIVATE_PROPERTY_OFFSET \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_SPARSE_DATA \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_INCLASS_NO_PURE_DECLS \
	ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANATARMS_PROJECT_API UClass* StaticClass<class AVNPlayer_parent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ManAtArms_Project_Source_ManAtArms_Project_Public_VNPlayer_parent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

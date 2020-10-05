// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManAtArms_Project/Public/Tetrehedron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetrehedron() {}
// Cross Module References
	MANATARMS_PROJECT_API UClass* Z_Construct_UClass_ATetrehedron_NoRegister();
	MANATARMS_PROJECT_API UClass* Z_Construct_UClass_ATetrehedron();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ManAtArms_Project();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATetrehedron::StaticRegisterNativesATetrehedron()
	{
	}
	UClass* Z_Construct_UClass_ATetrehedron_NoRegister()
	{
		return ATetrehedron::StaticClass();
	}
	struct Z_Construct_UClass_ATetrehedron_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angVel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_angVel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetrehedron_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ManAtArms_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrehedron_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tetrehedron.h" },
		{ "ModuleRelativePath", "Public/Tetrehedron.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrehedron_Statics::NewProp_angVel_MetaData[] = {
		{ "Category", "Tetrehedron" },
		{ "ModuleRelativePath", "Public/Tetrehedron.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATetrehedron_Statics::NewProp_angVel = { "angVel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetrehedron, angVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATetrehedron_Statics::NewProp_angVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrehedron_Statics::NewProp_angVel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrehedron_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tetrehedron.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetrehedron_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetrehedron, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetrehedron_Statics::NewProp_ProjectileMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrehedron_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetrehedron_Statics::NewProp_staticMesh_MetaData[] = {
		{ "Category", "Tetrehedron" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tetrehedron.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetrehedron_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetrehedron, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetrehedron_Statics::NewProp_staticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrehedron_Statics::NewProp_staticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetrehedron_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrehedron_Statics::NewProp_angVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrehedron_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetrehedron_Statics::NewProp_staticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetrehedron_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetrehedron>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATetrehedron_Statics::ClassParams = {
		&ATetrehedron::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATetrehedron_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetrehedron_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATetrehedron_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATetrehedron_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATetrehedron()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATetrehedron_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATetrehedron, 2170084698);
	template<> MANATARMS_PROJECT_API UClass* StaticClass<ATetrehedron>()
	{
		return ATetrehedron::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATetrehedron(Z_Construct_UClass_ATetrehedron, &ATetrehedron::StaticClass, TEXT("/Script/ManAtArms_Project"), TEXT("ATetrehedron"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetrehedron);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

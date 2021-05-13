// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EDDProject/EDDProjectWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDDProjectWheelFront() {}
// Cross Module References
	EDDPROJECT_API UClass* Z_Construct_UClass_UEDDProjectWheelFront_NoRegister();
	EDDPROJECT_API UClass* Z_Construct_UClass_UEDDProjectWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_EDDProject();
// End Cross Module References
	void UEDDProjectWheelFront::StaticRegisterNativesUEDDProjectWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UEDDProjectWheelFront_NoRegister()
	{
		return UEDDProjectWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UEDDProjectWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEDDProjectWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_EDDProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEDDProjectWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EDDProjectWheelFront.h" },
		{ "ModuleRelativePath", "EDDProjectWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEDDProjectWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEDDProjectWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEDDProjectWheelFront_Statics::ClassParams = {
		&UEDDProjectWheelFront::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEDDProjectWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEDDProjectWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEDDProjectWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEDDProjectWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEDDProjectWheelFront, 3936410122);
	template<> EDDPROJECT_API UClass* StaticClass<UEDDProjectWheelFront>()
	{
		return UEDDProjectWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEDDProjectWheelFront(Z_Construct_UClass_UEDDProjectWheelFront, &UEDDProjectWheelFront::StaticClass, TEXT("/Script/EDDProject"), TEXT("UEDDProjectWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEDDProjectWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

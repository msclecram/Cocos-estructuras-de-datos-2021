// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APuzzleBall;
#ifdef EDDPROJECT_GameLogic_generated_h
#error "GameLogic.generated.h already included, missing '#pragma once' in GameLogic.h"
#endif
#define EDDPROJECT_GameLogic_generated_h

#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_SPARSE_DATA
#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execModifyScore);


#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModifyScore);


#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameLogic(); \
	friend struct Z_Construct_UClass_AGameLogic_Statics; \
public: \
	DECLARE_CLASS(AGameLogic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EDDProject"), NO_API) \
	DECLARE_SERIALIZER(AGameLogic)


#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGameLogic(); \
	friend struct Z_Construct_UClass_AGameLogic_Statics; \
public: \
	DECLARE_CLASS(AGameLogic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EDDProject"), NO_API) \
	DECLARE_SERIALIZER(AGameLogic)


#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameLogic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameLogic(AGameLogic&&); \
	NO_API AGameLogic(const AGameLogic&); \
public:


#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameLogic(AGameLogic&&); \
	NO_API AGameLogic(const AGameLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameLogic)


#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_PRIVATE_PROPERTY_OFFSET
#define VehicleProjectBase_Source_EDDProject_GameLogic_h_14_PROLOG
#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_PRIVATE_PROPERTY_OFFSET \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_SPARSE_DATA \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_RPC_WRAPPERS \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_INCLASS \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleProjectBase_Source_EDDProject_GameLogic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_PRIVATE_PROPERTY_OFFSET \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_SPARSE_DATA \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_INCLASS_NO_PURE_DECLS \
	VehicleProjectBase_Source_EDDProject_GameLogic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDDPROJECT_API UClass* StaticClass<class AGameLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleProjectBase_Source_EDDProject_GameLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

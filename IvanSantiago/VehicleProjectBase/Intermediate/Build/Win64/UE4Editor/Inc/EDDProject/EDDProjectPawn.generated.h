// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDDPROJECT_EDDProjectPawn_generated_h
#error "EDDProjectPawn.generated.h already included, missing '#pragma once' in EDDProjectPawn.h"
#endif
#define EDDPROJECT_EDDProjectPawn_generated_h

#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_SPARSE_DATA
#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_RPC_WRAPPERS
#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEDDProjectPawn(); \
	friend struct Z_Construct_UClass_AEDDProjectPawn_Statics; \
public: \
	DECLARE_CLASS(AEDDProjectPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EDDProject"), NO_API) \
	DECLARE_SERIALIZER(AEDDProjectPawn)


#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEDDProjectPawn(); \
	friend struct Z_Construct_UClass_AEDDProjectPawn_Statics; \
public: \
	DECLARE_CLASS(AEDDProjectPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EDDProject"), NO_API) \
	DECLARE_SERIALIZER(AEDDProjectPawn)


#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEDDProjectPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEDDProjectPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEDDProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEDDProjectPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEDDProjectPawn(AEDDProjectPawn&&); \
	NO_API AEDDProjectPawn(const AEDDProjectPawn&); \
public:


#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEDDProjectPawn(AEDDProjectPawn&&); \
	NO_API AEDDProjectPawn(const AEDDProjectPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEDDProjectPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEDDProjectPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEDDProjectPawn)


#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AEDDProjectPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AEDDProjectPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AEDDProjectPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AEDDProjectPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AEDDProjectPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AEDDProjectPawn, InCarGear); }


#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_14_PROLOG
#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_SPARSE_DATA \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_RPC_WRAPPERS \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_INCLASS \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_SPARSE_DATA \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_INCLASS_NO_PURE_DECLS \
	VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDDPROJECT_API UClass* StaticClass<class AEDDProjectPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleProjectBase_Source_EDDProject_EDDProjectPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

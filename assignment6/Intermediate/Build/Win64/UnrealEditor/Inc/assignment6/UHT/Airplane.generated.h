// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Airplane.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef ASSIGNMENT6_Airplane_generated_h
#error "Airplane.generated.h already included, missing '#pragma once' in Airplane.h"
#endif
#define ASSIGNMENT6_Airplane_generated_h

#define FID_assignment6_Source_assignment6_Public_Airplane_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExitAirplane); \
	DECLARE_FUNCTION(execTurnEnd); \
	DECLARE_FUNCTION(execTurnStart); \
	DECLARE_FUNCTION(execStopForward); \
	DECLARE_FUNCTION(execGoForward);


#define FID_assignment6_Source_assignment6_Public_Airplane_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAirplane(); \
	friend struct Z_Construct_UClass_AAirplane_Statics; \
public: \
	DECLARE_CLASS(AAirplane, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/assignment6"), NO_API) \
	DECLARE_SERIALIZER(AAirplane)


#define FID_assignment6_Source_assignment6_Public_Airplane_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAirplane(AAirplane&&); \
	AAirplane(const AAirplane&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAirplane); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAirplane); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAirplane) \
	NO_API virtual ~AAirplane();


#define FID_assignment6_Source_assignment6_Public_Airplane_h_19_PROLOG
#define FID_assignment6_Source_assignment6_Public_Airplane_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_assignment6_Source_assignment6_Public_Airplane_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_assignment6_Source_assignment6_Public_Airplane_h_22_INCLASS_NO_PURE_DECLS \
	FID_assignment6_Source_assignment6_Public_Airplane_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT6_API UClass* StaticClass<class AAirplane>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_assignment6_Source_assignment6_Public_Airplane_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
